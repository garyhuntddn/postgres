/*-------------------------------------------------------------------------
 *
 * jsonb.c
 *		I/O routines for jsonb type
 *
 * Copyright (c) 2014-2015, PostgreSQL Global Development Group
 *
 * IDENTIFICATION
 *	  src/backend/utils/adt/jsonb.c
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"

#include "miscadmin.h"
#include "access/htup_details.h"
#include "access/transam.h"
#include "catalog/pg_type.h"
#include "libpq/pqformat.h"
#include "parser/parse_coerce.h"
#include "utils/builtins.h"
#include "utils/date.h"
#include "utils/datetime.h"
#include "utils/lsyscache.h"
#include "utils/json.h"
#include "utils/jsonapi.h"
#include "utils/jsonb.h"
#include "utils/syscache.h"
#include "utils/typcache.h"

typedef struct JsonbInState
{
	JsonbParseState *parseState;
	JsonbValue *res;
} JsonbInState;

/* unlike with json categories, we need to treat json and jsonb differently */
typedef enum					/* type categories for datum_to_jsonb */
{
	JSONBTYPE_NULL,				/* null, so we didn't bother to identify */
	JSONBTYPE_BOOL,				/* boolean (built-in types only) */
	JSONBTYPE_NUMERIC,			/* numeric (ditto) */
	JSONBTYPE_DATE,				/* we use special formatting for datetimes */
	JSONBTYPE_TIMESTAMP,		/* we use special formatting for timestamp */
	JSONBTYPE_TIMESTAMPTZ,		/* ... and timestamptz */
	JSONBTYPE_JSON,				/* JSON */
	JSONBTYPE_JSONB,			/* JSONB */
	JSONBTYPE_ARRAY,			/* array */
	JSONBTYPE_COMPOSITE,		/* composite */
	JSONBTYPE_JSONCAST,			/* something with an explicit cast to JSON */
	JSONBTYPE_OTHER				/* all else */
}	JsonbTypeCategory;

static inline Datum jsonb_from_cstring(char *json, int len);
static size_t checkStringLen(size_t len);
static void jsonb_in_object_start(void *pstate);
static void jsonb_in_object_end(void *pstate);
static void jsonb_in_array_start(void *pstate);
static void jsonb_in_array_end(void *pstate);
static void jsonb_in_object_field_start(void *pstate, char *fname, bool isnull);
static void jsonb_put_escaped_value(StringInfo out, JsonbValue *scalarVal);
static void jsonb_in_scalar(void *pstate, char *token, JsonTokenType tokentype);
static void jsonb_categorize_type(Oid typoid,
					  JsonbTypeCategory * tcategory,
					  Oid *outfuncoid);
static void composite_to_jsonb(Datum composite, JsonbInState *result);
static void array_dim_to_jsonb(JsonbInState *result, int dim, int ndims, int *dims,
				   Datum *vals, bool *nulls, int *valcount,
				   JsonbTypeCategory tcategory, Oid outfuncoid);
static void array_to_jsonb_internal(Datum array, JsonbInState *result);
static void jsonb_categorize_type(Oid typoid,
					  JsonbTypeCategory * tcategory,
					  Oid *outfuncoid);
static void datum_to_jsonb(Datum val, bool is_null, JsonbInState *result,
			   JsonbTypeCategory tcategory, Oid outfuncoid,
			   bool key_scalar);
static void add_jsonb(Datum val, bool is_null, JsonbInState *result,
		  Oid val_type, bool key_scalar);
static JsonbParseState * clone_parse_state(JsonbParseState * state);

/*
 * jsonb type input function
 */
Datum
jsonb_in(PG_FUNCTION_ARGS)
{
	char	   *json = PG_GETARG_CSTRING(0);

	return jsonb_from_cstring(json, strlen(json));
}

/*
 * jsonb type recv function
 *
 * The type is sent as text in binary mode, so this is almost the same
 * as the input function, but it's prefixed with a version number so we
 * can change the binary format sent in future if necessary. For now,
 * only version 1 is supported.
 */
Datum
jsonb_recv(PG_FUNCTION_ARGS)
{
	StringInfo	buf = (StringInfo) PG_GETARG_POINTER(0);
	int			version = pq_getmsgint(buf, 1);
	char	   *str;
	int			nbytes;

	if (version == 1)
		str = pq_getmsgtext(buf, buf->len - buf->cursor, &nbytes);
	else
		elog(ERROR, "unsupported jsonb version number %d", version);

	return jsonb_from_cstring(str, nbytes);
}

/*
 * jsonb type output function
 */
Datum
jsonb_out(PG_FUNCTION_ARGS)
{
	Jsonb	   *jb = PG_GETARG_JSONB(0);
	char	   *out;

	out = JsonbToCString(NULL, &jb->root, VARSIZE(jb));

	PG_RETURN_CSTRING(out);
}

/*
 * jsonb type send function
 *
 * Just send jsonb as a version number, then a string of text
 */
Datum
jsonb_send(PG_FUNCTION_ARGS)
{
	Jsonb	   *jb = PG_GETARG_JSONB(0);
	StringInfoData buf;
	StringInfo	jtext = makeStringInfo();
	int			version = 1;

	(void) JsonbToCString(jtext, &jb->root, VARSIZE(jb));

	pq_begintypsend(&buf);
	pq_sendint(&buf, version, 1);
	pq_sendtext(&buf, jtext->data, jtext->len);
	pfree(jtext->data);
	pfree(jtext);

	PG_RETURN_BYTEA_P(pq_endtypsend(&buf));
}

/*
 * SQL function jsonb_typeof(jsonb) -> text
 *
 * This function is here because the analog json function is in json.c, since
 * it uses the json parser internals not exposed elsewhere.
 */
Datum
jsonb_typeof(PG_FUNCTION_ARGS)
{
	Jsonb	   *in = PG_GETARG_JSONB(0);
	JsonbIterator *it;
	JsonbValue	v;
	char	   *result;

	if (JB_ROOT_IS_OBJECT(in))
		result = "object";
	else if (JB_ROOT_IS_ARRAY(in) && !JB_ROOT_IS_SCALAR(in))
		result = "array";
	else
	{
		Assert(JB_ROOT_IS_SCALAR(in));

		it = JsonbIteratorInit(&in->root);

		/*
		 * A root scalar is stored as an array of one element, so we get the
		 * array and then its first (and only) member.
		 */
		(void) JsonbIteratorNext(&it, &v, true);
		Assert(v.type == jbvArray);
		(void) JsonbIteratorNext(&it, &v, true);
		switch (v.type)
		{
			case jbvNull:
				result = "null";
				break;
			case jbvString:
				result = "string";
				break;
			case jbvNumeric:
				result = "number";
				break;
			case jbvBool:
				result = "boolean";
				break;
			default:
				elog(ERROR, "unknown jsonb scalar type");
		}
	}

	PG_RETURN_TEXT_P(cstring_to_text(result));
}

/*
 * jsonb_from_cstring
 *
 * Turns json string into a jsonb Datum.
 *
 * Uses the json parser (with hooks) to construct a jsonb.
 */
static inline Datum
jsonb_from_cstring(char *json, int len)
{
	JsonLexContext *lex;
	JsonbInState state;
	JsonSemAction sem;

	memset(&state, 0, sizeof(state));
	memset(&sem, 0, sizeof(sem));
	lex = makeJsonLexContextCstringLen(json, len, true);

	sem.semstate = (void *) &state;

	sem.object_start = jsonb_in_object_start;
	sem.array_start = jsonb_in_array_start;
	sem.object_end = jsonb_in_object_end;
	sem.array_end = jsonb_in_array_end;
	sem.scalar = jsonb_in_scalar;
	sem.object_field_start = jsonb_in_object_field_start;

	pg_parse_json(lex, &sem);

	/* after parsing, the item member has the composed jsonb structure */
	PG_RETURN_POINTER(JsonbValueToJsonb(state.res));
}

static size_t
checkStringLen(size_t len)
{
	if (len > JENTRY_OFFLENMASK)
		ereport(ERROR,
				(errcode(ERRCODE_PROGRAM_LIMIT_EXCEEDED),
				 errmsg("string too long to represent as jsonb string"),
				 errdetail("Due to an implementation restriction, jsonb strings cannot exceed %d bytes.",
						   JENTRY_OFFLENMASK)));

	return len;
}

static void
jsonb_in_object_start(void *pstate)
{
	JsonbInState *_state = (JsonbInState *) pstate;

	_state->res = pushJsonbValue(&_state->parseState, WJB_BEGIN_OBJECT, NULL);
}

static void
jsonb_in_object_end(void *pstate)
{
	JsonbInState *_state = (JsonbInState *) pstate;

	_state->res = pushJsonbValue(&_state->parseState, WJB_END_OBJECT, NULL);
}

static void
jsonb_in_array_start(void *pstate)
{
	JsonbInState *_state = (JsonbInState *) pstate;

	_state->res = pushJsonbValue(&_state->parseState, WJB_BEGIN_ARRAY, NULL);
}

static void
jsonb_in_array_end(void *pstate)
{
	JsonbInState *_state = (JsonbInState *) pstate;

	_state->res = pushJsonbValue(&_state->parseState, WJB_END_ARRAY, NULL);
}

static void
jsonb_in_object_field_start(void *pstate, char *fname, bool isnull)
{
	JsonbInState *_state = (JsonbInState *) pstate;
	JsonbValue	v;

	Assert(fname != NULL);
	v.type = jbvString;
	v.val.string.len = checkStringLen(strlen(fname));
	v.val.string.val = fname;

	_state->res = pushJsonbValue(&_state->parseState, WJB_KEY, &v);
}

static void
jsonb_put_escaped_value(StringInfo out, JsonbValue *scalarVal)
{
	switch (scalarVal->type)
	{
		case jbvNull:
			appendBinaryStringInfo(out, "null", 4);
			break;
		case jbvString:
			escape_json(out, pnstrdup(scalarVal->val.string.val, scalarVal->val.string.len));
			break;
		case jbvNumeric:
			appendStringInfoString(out,
							 DatumGetCString(DirectFunctionCall1(numeric_out,
								  PointerGetDatum(scalarVal->val.numeric))));
			break;
		case jbvBool:
			if (scalarVal->val.boolean)
				appendBinaryStringInfo(out, "true", 4);
			else
				appendBinaryStringInfo(out, "false", 5);
			break;
		default:
			elog(ERROR, "unknown jsonb scalar type");
	}
}

/*
 * For jsonb we always want the de-escaped value - that's what's in token
 */
static void
jsonb_in_scalar(void *pstate, char *token, JsonTokenType tokentype)
{
	JsonbInState *_state = (JsonbInState *) pstate;
	JsonbValue	v;

	switch (tokentype)
	{

		case JSON_TOKEN_STRING:
			Assert(token != NULL);
			v.type = jbvString;
			v.val.string.len = checkStringLen(strlen(token));
			v.val.string.val = token;
			break;
		case JSON_TOKEN_NUMBER:

			/*
			 * No need to check size of numeric values, because maximum
			 * numeric size is well below the JsonbValue restriction
			 */
			Assert(token != NULL);
			v.type = jbvNumeric;
			v.val.numeric = DatumGetNumeric(DirectFunctionCall3(numeric_in, CStringGetDatum(token), 0, -1));

			break;
		case JSON_TOKEN_TRUE:
			v.type = jbvBool;
			v.val.boolean = true;
			break;
		case JSON_TOKEN_FALSE:
			v.type = jbvBool;
			v.val.boolean = false;
			break;
		case JSON_TOKEN_NULL:
			v.type = jbvNull;
			break;
		default:
			/* should not be possible */
			elog(ERROR, "invalid json token type");
			break;
	}

	if (_state->parseState == NULL)
	{
		/* single scalar */
		JsonbValue	va;

		va.type = jbvArray;
		va.val.array.rawScalar = true;
		va.val.array.nElems = 1;

		_state->res = pushJsonbValue(&_state->parseState, WJB_BEGIN_ARRAY, &va);
		_state->res = pushJsonbValue(&_state->parseState, WJB_ELEM, &v);
		_state->res = pushJsonbValue(&_state->parseState, WJB_END_ARRAY, NULL);
	}
	else
	{
		JsonbValue *o = &_state->parseState->contVal;

		switch (o->type)
		{
			case jbvArray:
				_state->res = pushJsonbValue(&_state->parseState, WJB_ELEM, &v);
				break;
			case jbvObject:
				_state->res = pushJsonbValue(&_state->parseState, WJB_VALUE, &v);
				break;
			default:
				elog(ERROR, "unexpected parent of nested structure");
		}
	}
}

/*
 * JsonbToCString
 *	   Converts jsonb value to a C-string.
 *
 * If 'out' argument is non-null, the resulting C-string is stored inside the
 * StringBuffer.  The resulting string is always returned.
 *
 * A typical case for passing the StringInfo in rather than NULL is where the
 * caller wants access to the len attribute without having to call strlen, e.g.
 * if they are converting it to a text* object.
 */
char *
JsonbToCString(StringInfo out, JsonbContainer *in, int estimated_len)
{
	bool		first = true;
	JsonbIterator *it;
	int			type = 0;
	JsonbValue	v;
	int			level = 0;
	bool		redo_switch = false;

	if (out == NULL)
		out = makeStringInfo();

	enlargeStringInfo(out, (estimated_len >= 0) ? estimated_len : 64);

	it = JsonbIteratorInit(in);

	while (redo_switch ||
		   ((type = JsonbIteratorNext(&it, &v, false)) != WJB_DONE))
	{
		redo_switch = false;
		switch (type)
		{
			case WJB_BEGIN_ARRAY:
				if (!first)
					appendBinaryStringInfo(out, ", ", 2);
				first = true;

				if (!v.val.array.rawScalar)
					appendStringInfoChar(out, '[');
				level++;
				break;
			case WJB_BEGIN_OBJECT:
				if (!first)
					appendBinaryStringInfo(out, ", ", 2);
				first = true;
				appendStringInfoCharMacro(out, '{');

				level++;
				break;
			case WJB_KEY:
				if (!first)
					appendBinaryStringInfo(out, ", ", 2);
				first = true;

				/* json rules guarantee this is a string */
				jsonb_put_escaped_value(out, &v);
				appendBinaryStringInfo(out, ": ", 2);

				type = JsonbIteratorNext(&it, &v, false);
				if (type == WJB_VALUE)
				{
					first = false;
					jsonb_put_escaped_value(out, &v);
				}
				else
				{
					Assert(type == WJB_BEGIN_OBJECT || type == WJB_BEGIN_ARRAY);

					/*
					 * We need to rerun the current switch() since we need to
					 * output the object which we just got from the iterator
					 * before calling the iterator again.
					 */
					redo_switch = true;
				}
				break;
			case WJB_ELEM:
				if (!first)
					appendBinaryStringInfo(out, ", ", 2);
				else
					first = false;

				jsonb_put_escaped_value(out, &v);
				break;
			case WJB_END_ARRAY:
				level--;
				if (!v.val.array.rawScalar)
					appendStringInfoChar(out, ']');
				first = false;
				break;
			case WJB_END_OBJECT:
				level--;
				appendStringInfoCharMacro(out, '}');
				first = false;
				break;
			default:
				elog(ERROR, "unknown flag of jsonb iterator");
		}
	}

	Assert(level == 0);

	return out->data;
}


/*
 * Determine how we want to render values of a given type in datum_to_jsonb.
 *
 * Given the datatype OID, return its JsonbTypeCategory, as well as the type's
 * output function OID.  If the returned category is JSONBTYPE_JSONCAST,
 *  we return the OID of the relevant cast function instead.
 */
static void
jsonb_categorize_type(Oid typoid,
					  JsonbTypeCategory * tcategory,
					  Oid *outfuncoid)
{
	bool		typisvarlena;

	/* Look through any domain */
	typoid = getBaseType(typoid);

	*outfuncoid = InvalidOid;

	/*
	 * We need to get the output function for everything except date and
	 * timestamp types, booleans, array and composite types, json and jsonb,
	 * and non-builtin types where there's a cast to json. In this last case
	 * we return the oid of the cast function instead.
	 */

	switch (typoid)
	{
		case BOOLOID:
			*tcategory = JSONBTYPE_BOOL;
			break;

		case INT1OID:
		case INT2OID:
		case INT4OID:
		case INT8OID:
		case FLOAT4OID:
		case FLOAT8OID:
		case NUMERICOID:
			getTypeOutputInfo(typoid, outfuncoid, &typisvarlena);
			*tcategory = JSONBTYPE_NUMERIC;
			break;

		case DATEOID:
			*tcategory = JSONBTYPE_DATE;
			break;

		case TIMESTAMPOID:
			*tcategory = JSONBTYPE_TIMESTAMP;
			break;

		case TIMESTAMPTZOID:
			*tcategory = JSONBTYPE_TIMESTAMPTZ;
			break;

		case JSONBOID:
			*tcategory = JSONBTYPE_JSONB;
			break;

		case JSONOID:
			*tcategory = JSONBTYPE_JSON;
			break;

		default:
			/* Check for arrays and composites */
			if (OidIsValid(get_element_type(typoid)))
				*tcategory = JSONBTYPE_ARRAY;
			else if (type_is_rowtype(typoid))
				*tcategory = JSONBTYPE_COMPOSITE;
			else
			{
				/* It's probably the general case ... */
				*tcategory = JSONBTYPE_OTHER;

				/*
				 * but first let's look for a cast to json (note: not to jsonb)
				 * if it's not built-in.
				 */
				if (typoid >= FirstNormalObjectId)
				{
					Oid castfunc;
					CoercionPathType ctype;

					ctype = find_coercion_pathway(JSONOID, typoid,
												  COERCION_EXPLICIT, &castfunc);
					if (ctype == COERCION_PATH_FUNC && OidIsValid(castfunc))
					{
						*tcategory = JSONBTYPE_JSONCAST;
						*outfuncoid = castfunc;
					}
					else
					{
						/* not a cast type, so just get the usual output func */
						getTypeOutputInfo(typoid, outfuncoid, &typisvarlena);
					}
				}
				else
				{
					/* any other builtin type */
					getTypeOutputInfo(typoid, outfuncoid, &typisvarlena);
				}
				break;
			}
	}
}

/*
 * Turn a Datum into jsonb, adding it to the result JsonbInState.
 *
 * tcategory and outfuncoid are from a previous call to json_categorize_type,
 * except that if is_null is true then they can be invalid.
 *
 * If key_scalar is true, the value is stored as a key, so insist
 * it's of an acceptable type, and force it to be a jbvString.
 */
static void
datum_to_jsonb(Datum val, bool is_null, JsonbInState *result,
			   JsonbTypeCategory tcategory, Oid outfuncoid,
			   bool key_scalar)
{
	char	   *outputstr;
	bool		numeric_error;
	JsonbValue	jb;
	bool		scalar_jsonb = false;

	if (is_null)
	{
		jb.type = jbvNull;
	}
	else if (key_scalar &&
			 (tcategory == JSONBTYPE_ARRAY ||
			  tcategory == JSONBTYPE_COMPOSITE ||
			  tcategory == JSONBTYPE_JSON ||
			  tcategory == JSONBTYPE_JSONB ||
			  tcategory == JSONBTYPE_JSONCAST))
	{
		ereport(ERROR,
				(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
		  errmsg("key value must be scalar, not array, composite or json")));
	}
	else
	{
		if (tcategory == JSONBTYPE_JSONCAST)
			val = OidFunctionCall1(outfuncoid, val);

		switch (tcategory)
		{
			case JSONBTYPE_ARRAY:
				array_to_jsonb_internal(val, result);
				break;
			case JSONBTYPE_COMPOSITE:
				composite_to_jsonb(val, result);
				break;
			case JSONBTYPE_BOOL:
				if (key_scalar)
				{
					outputstr = DatumGetBool(val) ? "true" : "false";
					jb.type = jbvString;
					jb.val.string.len = strlen(outputstr);
					jb.val.string.val = outputstr;
				}
				else
				{
					jb.type = jbvBool;
					jb.val.boolean = DatumGetBool(val);
				}
				break;
			case JSONBTYPE_NUMERIC:
				outputstr = OidOutputFunctionCall(outfuncoid, val);
				if (key_scalar)
				{
					/* always quote keys */
					jb.type = jbvString;
					jb.val.string.len = strlen(outputstr);
					jb.val.string.val = outputstr;
				}
				else
				{
					/*
					 * Make it numeric if it's a valid JSON number, otherwise
					 * a string. Invalid numeric output will always have an
					 * 'N' or 'n' in it (I think).
					 */
					numeric_error = (strchr(outputstr, 'N') != NULL ||
									 strchr(outputstr, 'n') != NULL);
					if (!numeric_error)
					{
						jb.type = jbvNumeric;
						jb.val.numeric = DatumGetNumeric(DirectFunctionCall3(numeric_in, CStringGetDatum(outputstr), 0, -1));

						pfree(outputstr);
					}
					else
					{
						jb.type = jbvString;
						jb.val.string.len = strlen(outputstr);
						jb.val.string.val = outputstr;
					}
				}
				break;
		case JSONBTYPE_DATE:
			{
				DateADT		date;
				struct pg_tm tm;
				char		buf[MAXDATELEN + 1];

				date = DatumGetDateADT(val);

				/* XSD doesn't support infinite values */
				if (DATE_NOT_FINITE(date))
					ereport(ERROR,
							(errcode(ERRCODE_DATETIME_VALUE_OUT_OF_RANGE),
							 errmsg("date out of range"),
							 errdetail("JSON does not support infinite date values.")));
				else
				{
					j2date(date + POSTGRES_EPOCH_JDATE,
						   &(tm.tm_year), &(tm.tm_mon), &(tm.tm_mday));
					EncodeDateOnly(&tm, USE_XSD_DATES, buf);
				}

				jb.type = jbvString;
				jb.val.string.len = strlen(buf);
				jb.val.string.val = pstrdup(buf);
			}
			break;
			case JSONBTYPE_TIMESTAMP:
				{
					Timestamp	timestamp;
					struct pg_tm tm;
					fsec_t		fsec;
					char		buf[MAXDATELEN + 1];

					timestamp = DatumGetTimestamp(val);

					/* XSD doesn't support infinite values */
					if (TIMESTAMP_NOT_FINITE(timestamp))
						ereport(ERROR,
								(errcode(ERRCODE_DATETIME_VALUE_OUT_OF_RANGE),
								 errmsg("timestamp out of range"),
								 errdetail("JSON does not support infinite timestamp values.")));
					else if (timestamp2tm(timestamp, NULL, &tm, &fsec, NULL, NULL) == 0)
						EncodeDateTime(&tm, fsec, false, 0, NULL, USE_XSD_DATES, buf);
					else
						ereport(ERROR,
								(errcode(ERRCODE_DATETIME_VALUE_OUT_OF_RANGE),
								 errmsg("timestamp out of range")));

					jb.type = jbvString;
					jb.val.string.len = strlen(buf);
					jb.val.string.val = pstrdup(buf);
				}
				break;
			case JSONBTYPE_TIMESTAMPTZ:
				{
					TimestampTz timestamp;
					struct pg_tm tm;
					int			tz;
					fsec_t		fsec;
					const char *tzn = NULL;
					char		buf[MAXDATELEN + 1];

					timestamp = DatumGetTimestamp(val);

					/* XSD doesn't support infinite values */
					if (TIMESTAMP_NOT_FINITE(timestamp))
						ereport(ERROR,
								(errcode(ERRCODE_DATETIME_VALUE_OUT_OF_RANGE),
								 errmsg("timestamp out of range"),
								 errdetail("JSON does not support infinite timestamp values.")));
					else if (timestamp2tm(timestamp, &tz, &tm, &fsec, &tzn, NULL) == 0)
						EncodeDateTime(&tm, fsec, true, tz, tzn, USE_XSD_DATES, buf);
					else
						ereport(ERROR,
								(errcode(ERRCODE_DATETIME_VALUE_OUT_OF_RANGE),
								 errmsg("timestamp out of range")));

					jb.type = jbvString;
					jb.val.string.len = strlen(buf);
					jb.val.string.val = pstrdup(buf);
				}
				break;
			case JSONBTYPE_JSONCAST:
			case JSONBTYPE_JSON:
				{
					/* parse the json right into the existing result object */
					JsonLexContext *lex;
					JsonSemAction sem;
					text	   *json = DatumGetTextP(val);

					lex = makeJsonLexContext(json, true);

					memset(&sem, 0, sizeof(sem));

					sem.semstate = (void *) result;

					sem.object_start = jsonb_in_object_start;
					sem.array_start = jsonb_in_array_start;
					sem.object_end = jsonb_in_object_end;
					sem.array_end = jsonb_in_array_end;
					sem.scalar = jsonb_in_scalar;
					sem.object_field_start = jsonb_in_object_field_start;

					pg_parse_json(lex, &sem);

				}
				break;
			case JSONBTYPE_JSONB:
				{
					Jsonb	   *jsonb = DatumGetJsonb(val);
					int			type;
					JsonbIterator *it;

					it = JsonbIteratorInit(&jsonb->root);

					if (JB_ROOT_IS_SCALAR(jsonb))
					{
						(void) JsonbIteratorNext(&it, &jb, true);
						Assert(jb.type == jbvArray);
						(void) JsonbIteratorNext(&it, &jb, true);
						scalar_jsonb = true;
					}
					else
					{
						while ((type = JsonbIteratorNext(&it, &jb, false))
							   != WJB_DONE)
						{
							if (type == WJB_END_ARRAY || type == WJB_END_OBJECT ||
								type == WJB_BEGIN_ARRAY || type == WJB_BEGIN_OBJECT)
								result->res = pushJsonbValue(&result->parseState,
															 type, NULL);
							else
								result->res = pushJsonbValue(&result->parseState,
															 type, &jb);
						}
					}
				}
				break;
			default:
				outputstr = OidOutputFunctionCall(outfuncoid, val);
				jb.type = jbvString;
				jb.val.string.len = checkStringLen(strlen(outputstr));
				jb.val.string.val = outputstr;
				break;
		}
	}
	if (tcategory >= JSONBTYPE_JSON && tcategory <= JSONBTYPE_JSONCAST &&
		!scalar_jsonb)
	{
		/* work has been done recursively */
		return;
	}
	else if (result->parseState == NULL)
	{
		/* single root scalar */
		JsonbValue	va;

		va.type = jbvArray;
		va.val.array.rawScalar = true;
		va.val.array.nElems = 1;

		result->res = pushJsonbValue(&result->parseState, WJB_BEGIN_ARRAY, &va);
		result->res = pushJsonbValue(&result->parseState, WJB_ELEM, &jb);
		result->res = pushJsonbValue(&result->parseState, WJB_END_ARRAY, NULL);
	}
	else
	{
		JsonbValue *o = &result->parseState->contVal;

		switch (o->type)
		{
			case jbvArray:
				result->res = pushJsonbValue(&result->parseState, WJB_ELEM, &jb);
				break;
			case jbvObject:
				result->res = pushJsonbValue(&result->parseState,
											 key_scalar ? WJB_KEY : WJB_VALUE,
											 &jb);
				break;
			default:
				elog(ERROR, "unexpected parent of nested structure");
		}
	}
}

/*
 * Process a single dimension of an array.
 * If it's the innermost dimension, output the values, otherwise call
 * ourselves recursively to process the next dimension.
 */
static void
array_dim_to_jsonb(JsonbInState *result, int dim, int ndims, int *dims, Datum *vals,
				   bool *nulls, int *valcount, JsonbTypeCategory tcategory,
				   Oid outfuncoid)
{
	int			i;

	Assert(dim < ndims);

	result->res = pushJsonbValue(&result->parseState, WJB_BEGIN_ARRAY, NULL);

	for (i = 1; i <= dims[dim]; i++)
	{
		if (dim + 1 == ndims)
		{
			datum_to_jsonb(vals[*valcount], nulls[*valcount], result, tcategory,
						   outfuncoid, false);
			(*valcount)++;
		}
		else
		{
			array_dim_to_jsonb(result, dim + 1, ndims, dims, vals, nulls,
							   valcount, tcategory, outfuncoid);
		}
	}

	result->res = pushJsonbValue(&result->parseState, WJB_END_ARRAY, NULL);
}

/*
 * Turn an array into JSON.
 */
static void
array_to_jsonb_internal(Datum array, JsonbInState *result)
{
	ArrayType  *v = DatumGetArrayTypeP(array);
	Oid			element_type = ARR_ELEMTYPE(v);
	int		   *dim;
	int			ndim;
	int			nitems;
	int			count = 0;
	Datum	   *elements;
	bool	   *nulls;
	int16		typlen;
	bool		typbyval;
	char		typalign;
	JsonbTypeCategory tcategory;
	Oid			outfuncoid;

	ndim = ARR_NDIM(v);
	dim = ARR_DIMS(v);
	nitems = ArrayGetNItems(ndim, dim);

	if (nitems <= 0)
	{
		result->res = pushJsonbValue(&result->parseState, WJB_BEGIN_ARRAY, NULL);
		result->res = pushJsonbValue(&result->parseState, WJB_END_ARRAY, NULL);
		return;
	}

	get_typlenbyvalalign(element_type,
						 &typlen, &typbyval, &typalign);

	jsonb_categorize_type(element_type,
						  &tcategory, &outfuncoid);

	deconstruct_array(v, element_type, typlen, typbyval,
					  typalign, &elements, &nulls,
					  &nitems);

	array_dim_to_jsonb(result, 0, ndim, dim, elements, nulls, &count, tcategory,
					   outfuncoid);

	pfree(elements);
	pfree(nulls);
}

/*
 * Turn a composite / record into JSON.
 */
static void
composite_to_jsonb(Datum composite, JsonbInState *result)
{
	HeapTupleHeader td;
	Oid			tupType;
	int32		tupTypmod;
	TupleDesc	tupdesc;
	HeapTupleData tmptup,
			   *tuple;
	int			i;

	td = DatumGetHeapTupleHeader(composite);

	/* Extract rowtype info and find a tupdesc */
	tupType = HeapTupleHeaderGetTypeId(td);
	tupTypmod = HeapTupleHeaderGetTypMod(td);
	tupdesc = lookup_rowtype_tupdesc(tupType, tupTypmod);

	/* Build a temporary HeapTuple control structure */
	tmptup.t_len = HeapTupleHeaderGetDatumLength(td);
	tmptup.t_data = td;
	tuple = &tmptup;

	result->res = pushJsonbValue(&result->parseState, WJB_BEGIN_OBJECT, NULL);

	for (i = 0; i < tupdesc->natts; i++)
	{
		Datum		val;
		bool		isnull;
		char	   *attname;
		JsonbTypeCategory tcategory;
		Oid			outfuncoid;
		JsonbValue	v;

		if (tupdesc->attrs[i]->attisdropped)
			continue;

		attname = NameStr(tupdesc->attrs[i]->attname);

		v.type = jbvString;
		/* don't need checkStringLen here - can't exceed maximum name length */
		v.val.string.len = strlen(attname);
		v.val.string.val = attname;

		result->res = pushJsonbValue(&result->parseState, WJB_KEY, &v);

		val = heap_getattr(tuple, i + 1, tupdesc, &isnull);

		if (isnull)
		{
			tcategory = JSONBTYPE_NULL;
			outfuncoid = InvalidOid;
		}
		else
			jsonb_categorize_type(tupdesc->attrs[i]->atttypid,
								  &tcategory, &outfuncoid);

		datum_to_jsonb(val, isnull, result, tcategory, outfuncoid, false);
	}

	result->res = pushJsonbValue(&result->parseState, WJB_END_OBJECT, NULL);
	ReleaseTupleDesc(tupdesc);
}

/*
 * Append JSON text for "val" to "result".
 *
 * This is just a thin wrapper around datum_to_jsonb.  If the same type will be
 * printed many times, avoid using this; better to do the jsonb_categorize_type
 * lookups only once.
 */

static void
add_jsonb(Datum val, bool is_null, JsonbInState *result,
		  Oid val_type, bool key_scalar)
{
	JsonbTypeCategory tcategory;
	Oid			outfuncoid;

	if (val_type == InvalidOid)
		ereport(ERROR,
				(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
				 errmsg("could not determine input data type")));

	if (is_null)
	{
		tcategory = JSONBTYPE_NULL;
		outfuncoid = InvalidOid;
	}
	else
		jsonb_categorize_type(val_type,
							  &tcategory, &outfuncoid);

	datum_to_jsonb(val, is_null, result, tcategory, outfuncoid, key_scalar);
}

/*
 * SQL function to_jsonb(anyvalue)
 */
Datum
to_jsonb(PG_FUNCTION_ARGS)
{
	Datum		val = PG_GETARG_DATUM(0);
	Oid			val_type = get_fn_expr_argtype(fcinfo->flinfo, 0);
	JsonbInState result;
	JsonbTypeCategory tcategory;
	Oid			outfuncoid;

	if (val_type == InvalidOid)
		ereport(ERROR,
				(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
				 errmsg("could not determine input data type")));

	jsonb_categorize_type(val_type,
						  &tcategory, &outfuncoid);

	memset(&result, 0, sizeof(JsonbInState));

	datum_to_jsonb(val, false, &result, tcategory, outfuncoid, false);

	PG_RETURN_POINTER(JsonbValueToJsonb(result.res));
}

/*
 * SQL function jsonb_build_object(variadic "any")
 */
Datum
jsonb_build_object(PG_FUNCTION_ARGS)
{
	int			nargs = PG_NARGS();
	int			i;
	Datum		arg;
	Oid			val_type;
	JsonbInState result;

	if (nargs % 2 != 0)
		ereport(ERROR,
				(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
				 errmsg("invalid number or arguments: object must be matched key value pairs")));

	memset(&result, 0, sizeof(JsonbInState));

	result.res = pushJsonbValue(&result.parseState, WJB_BEGIN_OBJECT, NULL);

	for (i = 0; i < nargs; i += 2)
	{

		/* process key */

		if (PG_ARGISNULL(i))
			ereport(ERROR,
					(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
					 errmsg("arg %d: key cannot be null", i + 1)));
		val_type = get_fn_expr_argtype(fcinfo->flinfo, i);

		/*
		 * turn a constant (more or less literal) value that's of unknown type
		 * into text. Unknowns come in as a cstring pointer.
		 */
		if (val_type == UNKNOWNOID && get_fn_expr_arg_stable(fcinfo->flinfo, i))
		{
			val_type = TEXTOID;
			if (PG_ARGISNULL(i))
				arg = (Datum) 0;
			else
				arg = CStringGetTextDatum(PG_GETARG_POINTER(i));
		}
		else
		{
			arg = PG_GETARG_DATUM(i);
		}
		if (val_type == InvalidOid || val_type == UNKNOWNOID)
			ereport(ERROR,
					(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
					 errmsg("arg %d: could not determine data type", i + 1)));

		add_jsonb(arg, false, &result, val_type, true);

		/* process value */

		val_type = get_fn_expr_argtype(fcinfo->flinfo, i + 1);
		/* see comments above */
		if (val_type == UNKNOWNOID && get_fn_expr_arg_stable(fcinfo->flinfo, i + 1))
		{
			val_type = TEXTOID;
			if (PG_ARGISNULL(i + 1))
				arg = (Datum) 0;
			else
				arg = CStringGetTextDatum(PG_GETARG_POINTER(i + 1));
		}
		else
		{
			arg = PG_GETARG_DATUM(i + 1);
		}
		if (val_type == InvalidOid || val_type == UNKNOWNOID)
			ereport(ERROR,
					(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
					 errmsg("arg %d: could not determine data type", i + 2)));
		add_jsonb(arg, PG_ARGISNULL(i + 1), &result, val_type, false);

	}

	result.res = pushJsonbValue(&result.parseState, WJB_END_OBJECT, NULL);

	PG_RETURN_POINTER(JsonbValueToJsonb(result.res));
}

/*
 * degenerate case of jsonb_build_object where it gets 0 arguments.
 */
Datum
jsonb_build_object_noargs(PG_FUNCTION_ARGS)
{
	JsonbInState result;

	memset(&result, 0, sizeof(JsonbInState));

	(void) pushJsonbValue(&result.parseState, WJB_BEGIN_OBJECT, NULL);
	result.res = pushJsonbValue(&result.parseState, WJB_END_OBJECT, NULL);

	PG_RETURN_POINTER(JsonbValueToJsonb(result.res));
}

/*
 * SQL function jsonb_build_array(variadic "any")
 */
Datum
jsonb_build_array(PG_FUNCTION_ARGS)
{
	int			nargs = PG_NARGS();
	int			i;
	Datum		arg;
	Oid			val_type;
	JsonbInState result;

	memset(&result, 0, sizeof(JsonbInState));

	result.res = pushJsonbValue(&result.parseState, WJB_BEGIN_ARRAY, NULL);

	for (i = 0; i < nargs; i++)
	{
		val_type = get_fn_expr_argtype(fcinfo->flinfo, i);
		arg = PG_GETARG_DATUM(i + 1);
		/* see comments in jsonb_build_object above */
		if (val_type == UNKNOWNOID && get_fn_expr_arg_stable(fcinfo->flinfo, i))
		{
			val_type = TEXTOID;
			if (PG_ARGISNULL(i))
				arg = (Datum) 0;
			else
				arg = CStringGetTextDatum(PG_GETARG_POINTER(i));
		}
		else
		{
			arg = PG_GETARG_DATUM(i);
		}
		if (val_type == InvalidOid || val_type == UNKNOWNOID)
			ereport(ERROR,
					(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
					 errmsg("arg %d: could not determine data type", i + 1)));
		add_jsonb(arg, PG_ARGISNULL(i), &result, val_type, false);
	}

	result.res = pushJsonbValue(&result.parseState, WJB_END_ARRAY, NULL);

	PG_RETURN_POINTER(JsonbValueToJsonb(result.res));
}

/*
 * degenerate case of jsonb_build_array where it gets 0 arguments.
 */
Datum
jsonb_build_array_noargs(PG_FUNCTION_ARGS)
{
	JsonbInState result;

	memset(&result, 0, sizeof(JsonbInState));

	(void) pushJsonbValue(&result.parseState, WJB_BEGIN_ARRAY, NULL);
	result.res = pushJsonbValue(&result.parseState, WJB_END_ARRAY, NULL);

	PG_RETURN_POINTER(JsonbValueToJsonb(result.res));
}


/*
 * SQL function jsonb_object(text[])
 *
 * take a one or two dimensional array of text as name value pairs
 * for a jsonb object.
 *
 */
Datum
jsonb_object(PG_FUNCTION_ARGS)
{
	ArrayType  *in_array = PG_GETARG_ARRAYTYPE_P(0);
	int			ndims = ARR_NDIM(in_array);
	Datum	   *in_datums;
	bool	   *in_nulls;
	int			in_count,
				count,
				i;
	JsonbInState result;

	memset(&result, 0, sizeof(JsonbInState));

	(void) pushJsonbValue(&result.parseState, WJB_BEGIN_OBJECT, NULL);

	switch (ndims)
	{
		case 0:
			goto close_object;
			break;

		case 1:
			if ((ARR_DIMS(in_array)[0]) % 2)
				ereport(ERROR,
						(errcode(ERRCODE_ARRAY_SUBSCRIPT_ERROR),
						 errmsg("array must have even number of elements")));
			break;

		case 2:
			if ((ARR_DIMS(in_array)[1]) != 2)
				ereport(ERROR,
						(errcode(ERRCODE_ARRAY_SUBSCRIPT_ERROR),
						 errmsg("array must have two columns")));
			break;

		default:
			ereport(ERROR,
					(errcode(ERRCODE_ARRAY_SUBSCRIPT_ERROR),
					 errmsg("wrong number of array subscripts")));
	}

	deconstruct_array(in_array,
					  TEXTOID, -1, false, 'i',
					  &in_datums, &in_nulls, &in_count);

	count = in_count / 2;

	for (i = 0; i < count; ++i)
	{
		JsonbValue	v;
		char	   *str;
		int			len;

		if (in_nulls[i * 2])
			ereport(ERROR,
					(errcode(ERRCODE_NULL_VALUE_NOT_ALLOWED),
					 errmsg("null value not allowed for object key")));

		str = TextDatumGetCString(in_datums[i * 2]);
		len = strlen(str);

		v.type = jbvString;

		v.val.string.len = len;
		v.val.string.val = str;

		(void) pushJsonbValue(&result.parseState, WJB_KEY, &v);

		if (in_nulls[i * 2 + 1])
		{
			v.type = jbvNull;
		}
		else
		{
			str = TextDatumGetCString(in_datums[i * 2 + 1]);
			len = strlen(str);

			v.type = jbvString;

			v.val.string.len = len;
			v.val.string.val = str;
		}

		(void) pushJsonbValue(&result.parseState, WJB_VALUE, &v);
	}

	pfree(in_datums);
	pfree(in_nulls);

close_object:
	result.res = pushJsonbValue(&result.parseState, WJB_END_OBJECT, NULL);

	PG_RETURN_POINTER(JsonbValueToJsonb(result.res));
}

/*
 * SQL function jsonb_object(text[], text[])
 *
 * take separate name and value arrays of text to construct a jsonb object
 * pairwise.
 */
Datum
jsonb_object_two_arg(PG_FUNCTION_ARGS)
{
	ArrayType  *key_array = PG_GETARG_ARRAYTYPE_P(0);
	ArrayType  *val_array = PG_GETARG_ARRAYTYPE_P(1);
	int			nkdims = ARR_NDIM(key_array);
	int			nvdims = ARR_NDIM(val_array);
	Datum	   *key_datums,
			   *val_datums;
	bool	   *key_nulls,
			   *val_nulls;
	int			key_count,
				val_count,
				i;
	JsonbInState result;

	memset(&result, 0, sizeof(JsonbInState));

	(void) pushJsonbValue(&result.parseState, WJB_BEGIN_OBJECT, NULL);

	if (nkdims > 1 || nkdims != nvdims)
		ereport(ERROR,
				(errcode(ERRCODE_ARRAY_SUBSCRIPT_ERROR),
				 errmsg("wrong number of array subscripts")));

	if (nkdims == 0)
		PG_RETURN_DATUM(CStringGetTextDatum("{}"));

	deconstruct_array(key_array,
					  TEXTOID, -1, false, 'i',
					  &key_datums, &key_nulls, &key_count);

	deconstruct_array(val_array,
					  TEXTOID, -1, false, 'i',
					  &val_datums, &val_nulls, &val_count);

	if (key_count != val_count)
		ereport(ERROR,
				(errcode(ERRCODE_ARRAY_SUBSCRIPT_ERROR),
				 errmsg("mismatched array dimensions")));

	for (i = 0; i < key_count; ++i)
	{
		JsonbValue	v;
		char	   *str;
		int			len;

		if (key_nulls[i])
			ereport(ERROR,
					(errcode(ERRCODE_NULL_VALUE_NOT_ALLOWED),
					 errmsg("null value not allowed for object key")));

		str = TextDatumGetCString(key_datums[i]);
		len = strlen(str);

		v.type = jbvString;

		v.val.string.len = len;
		v.val.string.val = str;

		(void) pushJsonbValue(&result.parseState, WJB_KEY, &v);

		if (val_nulls[i])
		{
			v.type = jbvNull;
		}
		else
		{
			str = TextDatumGetCString(val_datums[i]);
			len = strlen(str);

			v.type = jbvString;

			v.val.string.len = len;
			v.val.string.val = str;
		}

		(void) pushJsonbValue(&result.parseState, WJB_VALUE, &v);
	}

	result.res = pushJsonbValue(&result.parseState, WJB_END_OBJECT, NULL);

	pfree(key_datums);
	pfree(key_nulls);
	pfree(val_datums);
	pfree(val_nulls);

	PG_RETURN_POINTER(JsonbValueToJsonb(result.res));
}


/*
 * shallow clone of a parse state, suitable for use in aggregate
 * final functions that will only append to the values rather than
 * change them.
 */
static JsonbParseState *
clone_parse_state(JsonbParseState * state)
{
	JsonbParseState *result, *icursor, *ocursor;

	if (state == NULL)
		return NULL;

	result = palloc(sizeof(JsonbParseState));
	icursor = state;
	ocursor = result;
	for(;;)
	{
		ocursor->contVal = icursor->contVal;
		ocursor->size = icursor->size;
		icursor = icursor->next;
		if (icursor == NULL)
			break;
		ocursor->next= palloc(sizeof(JsonbParseState));
		ocursor = ocursor->next;
	}
	ocursor->next = NULL;

	return result;
}


/*
 * jsonb_agg aggregate function
 */
Datum
jsonb_agg_transfn(PG_FUNCTION_ARGS)
{
	Oid			val_type = get_fn_expr_argtype(fcinfo->flinfo, 1);
	MemoryContext oldcontext,
				aggcontext;
	JsonbInState elem;
	JsonbTypeCategory tcategory;
	Oid			outfuncoid;
	Datum		val;
	JsonbInState *result;
	bool		single_scalar = false;
	JsonbIterator *it;
	Jsonb	   *jbelem;
	JsonbValue	v;
	int			type;

	if (val_type == InvalidOid)
		ereport(ERROR,
				(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
				 errmsg("could not determine input data type")));

	if (!AggCheckCallContext(fcinfo, &aggcontext))
	{
		/* cannot be called directly because of internal-type argument */
		elog(ERROR, "jsonb_agg_transfn called in non-aggregate context");
	}

	/* turn the argument into jsonb in the normal function context */

	val = PG_ARGISNULL(1) ? (Datum) 0 : PG_GETARG_DATUM(1);

	jsonb_categorize_type(val_type,
						  &tcategory, &outfuncoid);

	memset(&elem, 0, sizeof(JsonbInState));

	datum_to_jsonb(val, false, &elem, tcategory, outfuncoid, false);

	jbelem = JsonbValueToJsonb(elem.res);

	/* switch to the aggregate context for accumulation operations */

	oldcontext = MemoryContextSwitchTo(aggcontext);

	/* set up the accumulator on the first go round */

	if (PG_ARGISNULL(0))
	{
		result = palloc0(sizeof(JsonbInState));
		result->res = pushJsonbValue(&result->parseState,
									 WJB_BEGIN_ARRAY, NULL);

	}
	else
	{
		result = (JsonbInState *) PG_GETARG_POINTER(0);
	}

	it = JsonbIteratorInit(&jbelem->root);

	while ((type = JsonbIteratorNext(&it, &v, false)) != WJB_DONE)
	{
		switch (type)
		{
			case WJB_BEGIN_ARRAY:
				if (v.val.array.rawScalar)
					single_scalar = true;
				else
					result->res = pushJsonbValue(&result->parseState,
												 type, NULL);
				break;
			case WJB_END_ARRAY:
				if (!single_scalar)
					result->res = pushJsonbValue(&result->parseState,
												 type, NULL);
				break;
			case WJB_BEGIN_OBJECT:
			case WJB_END_OBJECT:
				result->res = pushJsonbValue(&result->parseState,
											 type, NULL);
				break;
			case WJB_ELEM:
			case WJB_KEY:
			case WJB_VALUE:
				if (v.type == jbvString)
				{
					/* copy string values in the aggreagate context */
					char	   *buf = palloc(v.val.string.len + 1);;
					snprintf(buf, v.val.string.len + 1, "%s", v.val.string.val);
					v.val.string.val = buf;
				}
				else if (v.type == jbvNumeric)
				{
					/* same for numeric */
				  v.val.numeric =
					DatumGetNumeric(DirectFunctionCall1(numeric_uplus,
														NumericGetDatum(v.val.numeric)));

				}
				result->res = pushJsonbValue(&result->parseState,
											 type, &v);
				break;
		}
	}

	MemoryContextSwitchTo(oldcontext);

	PG_RETURN_POINTER(result);
}

Datum
jsonb_agg_finalfn(PG_FUNCTION_ARGS)
{
	JsonbInState *arg;
	JsonbInState result;
	Jsonb	   *out;

	/* cannot be called directly because of internal-type argument */
	Assert(AggCheckCallContext(fcinfo, NULL));

	if (PG_ARGISNULL(0))
		PG_RETURN_NULL();		/* returns null iff no input values */

	arg = (JsonbInState *) PG_GETARG_POINTER(0);

	/*
	 * We need to do a shallow clone of the argument in case the final
	 * function is called more than once, so we avoid changing the argument.
	 * A shallow clone is sufficient as we aren't going to change any of the
	 * values, just add the final array end marker.
	 */

	result.parseState = clone_parse_state(arg->parseState);

	result.res = pushJsonbValue(&result.parseState,
								 WJB_END_ARRAY, NULL);


	out = JsonbValueToJsonb(result.res);

	PG_RETURN_POINTER(out);
}

/*
 * jsonb_object_agg aggregate function
 */
Datum
jsonb_object_agg_transfn(PG_FUNCTION_ARGS)
{
	Oid			val_type;
	MemoryContext oldcontext,
				aggcontext;
	JsonbInState elem;
	JsonbTypeCategory tcategory;
	Oid			outfuncoid;
	Datum		val;
	JsonbInState *result;
	bool		single_scalar;
	JsonbIterator *it;
	Jsonb	   *jbkey,
			   *jbval;
	JsonbValue	v;
	int			type;

	if (!AggCheckCallContext(fcinfo, &aggcontext))
	{
		/* cannot be called directly because of internal-type argument */
		elog(ERROR, "jsonb_object_agg_transfn called in non-aggregate context");
	}

	/* turn the argument into jsonb in the normal function context */

	val_type = get_fn_expr_argtype(fcinfo->flinfo, 1);

	if (val_type == InvalidOid)
		ereport(ERROR,
				(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
				 errmsg("could not determine input data type")));

	val = PG_ARGISNULL(1) ? (Datum) 0 : PG_GETARG_DATUM(1);

	jsonb_categorize_type(val_type,
						  &tcategory, &outfuncoid);

	memset(&elem, 0, sizeof(JsonbInState));

	datum_to_jsonb(val, false, &elem, tcategory, outfuncoid, true);

	jbkey = JsonbValueToJsonb(elem.res);

	val_type = get_fn_expr_argtype(fcinfo->flinfo, 2);

	if (val_type == InvalidOid)
		ereport(ERROR,
				(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
				 errmsg("could not determine input data type")));

	val = PG_ARGISNULL(2) ? (Datum) 0 : PG_GETARG_DATUM(2);

	jsonb_categorize_type(val_type,
						  &tcategory, &outfuncoid);

	memset(&elem, 0, sizeof(JsonbInState));

	datum_to_jsonb(val, false, &elem, tcategory, outfuncoid, false);

	jbval = JsonbValueToJsonb(elem.res);

	/* switch to the aggregate context for accumulation operations */

	oldcontext = MemoryContextSwitchTo(aggcontext);

	/* set up the accumulator on the first go round */

	if (PG_ARGISNULL(0))
	{
		result = palloc0(sizeof(JsonbInState));
		result->res = pushJsonbValue(&result->parseState,
									 WJB_BEGIN_OBJECT, NULL);

	}
	else
	{
		result = (JsonbInState *) PG_GETARG_POINTER(0);
	}

	it = JsonbIteratorInit(&jbkey->root);

	/*
	 * keys should be scalar, and we should have already checked for that
	 * above when calling datum_to_jsonb, so we only need to look for these
	 * things.
	 */

	while ((type = JsonbIteratorNext(&it, &v, false)) != WJB_DONE)
	{
		switch (type)
		{
			case WJB_BEGIN_ARRAY:
				if (!v.val.array.rawScalar)
					elog(ERROR, "unexpected structure for key");
				break;
			case WJB_ELEM:
				if (v.type == jbvString)
				{
					/* copy string values in the aggreagate context */
					char	   *buf = palloc(v.val.string.len + 1);;
					snprintf(buf, v.val.string.len + 1, "%s", v.val.string.val);
					v.val.string.val = buf;
				}
				else
				{
					ereport(ERROR,
							(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
							 errmsg("object keys must be strings")));
				}
				result->res = pushJsonbValue(&result->parseState,
											 WJB_KEY, &v);
				break;
			case WJB_END_ARRAY:
				break;
			default:
				elog(ERROR, "unexpected structure for key");
				break;
		}
	}

	it = JsonbIteratorInit(&jbval->root);

	single_scalar = false;

	/*
	 * values can be anything, including structured and null, so we treate
	 * them as in json_agg_transfn, except that single scalars are always
	 * pushed as WJB_VALUE items.
	 */

	while ((type = JsonbIteratorNext(&it, &v, false)) != WJB_DONE)
	{
		switch (type)
		{
			case WJB_BEGIN_ARRAY:
				if (v.val.array.rawScalar)
					single_scalar = true;
				else
					result->res = pushJsonbValue(&result->parseState,
												 type, NULL);
				break;
			case WJB_END_ARRAY:
				if (!single_scalar)
					result->res = pushJsonbValue(&result->parseState,
												 type, NULL);
				break;
			case WJB_BEGIN_OBJECT:
			case WJB_END_OBJECT:
				result->res = pushJsonbValue(&result->parseState,
											 type, NULL);
				break;
			case WJB_ELEM:
			case WJB_KEY:
			case WJB_VALUE:
				if (v.type == jbvString)
				{
					/* copy string values in the aggreagate context */
					char	   *buf = palloc(v.val.string.len + 1);;
					snprintf(buf, v.val.string.len + 1, "%s", v.val.string.val);
					v.val.string.val = buf;
				}
				else if (v.type == jbvNumeric)
				{
					/* same for numeric */
					v.val.numeric =
					  DatumGetNumeric(DirectFunctionCall1(numeric_uplus,
														  NumericGetDatum(v.val.numeric)));

				}
				result->res = pushJsonbValue(&result->parseState,
											 single_scalar ? WJB_VALUE : type,
											 &v);
				break;
		}
	}

	MemoryContextSwitchTo(oldcontext);

	PG_RETURN_POINTER(result);
}

Datum
jsonb_object_agg_finalfn(PG_FUNCTION_ARGS)
{
	JsonbInState *arg;
	JsonbInState  result;
	Jsonb	   *out;

	/* cannot be called directly because of internal-type argument */
	Assert(AggCheckCallContext(fcinfo, NULL));

	if (PG_ARGISNULL(0))
		PG_RETURN_NULL();		/* returns null iff no input values */

	arg = (JsonbInState *) PG_GETARG_POINTER(0);

	/*
	 * We need to do a shallow clone of the argument in case the final
	 * function is called more than once, so we avoid changing the argument.
	 * A shallow clone is sufficient as we aren't going to change any of the
	 * values, just add the final object end marker.
	 */

	result.parseState = clone_parse_state(arg->parseState);

	result.res = pushJsonbValue(&result.parseState,
								 WJB_END_OBJECT, NULL);


	out = JsonbValueToJsonb(result.res);

	PG_RETURN_POINTER(out);
}
