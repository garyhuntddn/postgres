#define oid_1	1 // template1 ENCODING LC_COLLATE  LC_CTYPE t 0 1663
#define oid_10 10 // POSTGRES t t t t
#define oid_11 11 // pg_catalog
#define oid_12 12 // internal f 0 2246
#define oid_13 13 // c  f 0 2247
#define oid_14 14 // sql  0 2248
#define oid_15_int48eq 					15 // int48eq
#define oid_16_bool							16 // boolin boolout boolrecv boolsend
#define oid_17_bytea 						17 // byteain byteaout bytearecv byteasend
#define oid_18_char							18 // charin charout charrecv charsend
#define oid_19_name							19 // namein nameout namerecv namesend
#define oid_20_int8							20 // int8in int8out int8recv int8send
#define oid_21_int2							21 // int2in int2out int2recv int2send
#define oid_22_int2vector				22 // int2vectorin int2vectorout int2vectorrecv int2vectorsend
#define oid_23_int4							23 // int4in int4out int4recv int4send
#define oid_24_regproc					24 // regprocin regprocout regprocrecv regprocsend
#define oid_25_text							25 // textin textout textrecv textsend
#define oid_26_oid							26 // oidin oidout oidrecv oidsend
#define oid_27_tid							27 // tidin tidout tidrecv tidsend
#define oid_28_xid							28 // xidin xidout xidrecv xidsend
#define oid_29_cid							29 // cidin cidout cidrecv cidsend
#define oid_30_oidvector				30 // oidvectorin oidvectorout oidvectorrecv oidvectorsend
#define oid_31_byteaout					31 // byteaout
#define oid_33_charout					33 // charout
#define oid_34_namein						34 // namein
#define oid_35_nameout					35 // nameout
#define oid_36_int48ne					36 // int48ne neqsel neqjoinsel
#define oid_37 37 // <   f 23 20 16 419 82 int48lt scalarltsel scalarltjoinsel
#define oid_38 38 // int2in   12 0 f f 21 2275     int2in
#define oid_39 39 // int2out   12 0 f f 2275 21     int2out
#define oid_40 40 // int2vectorin  12 0 f f 22 2275     int2vectorin
#define oid_41 41 // int2vectorout  12 0 f f 2275 22     int2vectorout
#define oid_42 42 // int4in   12 0 f f 23 2275     int4in
#define oid_43 43 // int4out   12 0 f f 2275 23     int4out
#define oid_44 44 // regprocin   12 0 f f s 24 2275     regprocin
#define oid_45 45 // regprocout   12 0 f f s 2275 24     regprocout
#define oid_46 46 // textin   12 0 f f 25 2275     textin
#define oid_47 47 // textout   12 0 f f 2275 25     textout
#define oid_48 48 // tidin   12 0 f f 27 2275     tidin
#define oid_49 49 // tidout   12 0 f f 2275 27     tidout
#define oid_50 50 // xidin   12 0 f f 28 2275     xidin
#define oid_51 51 // xidout   12 0 f f 2275 28     xidout
#define oid_52 52 // cidin   12 0 f f 29 2275     cidin
#define oid_53 53 // cidout   12 0 f f 2275 29     cidout
#define oid_54 54 // oidvectorin  12 0 f f 30 2275     oidvectorin
#define oid_55 55 // oidvectorout  12 0 f f 2275 30     oidvectorout
#define oid_56 56 // boollt   12 0 f t 2 16 16 16     boollt
#define oid_57 57 // boolgt   12 0 f t 2 16 16 16     boolgt
#define oid_58 58 // <   f 16 16 16 59 1695 boollt scalarltsel scalarltjoinsel
#define oid_59 59 // >   f 16 16 16 58 1694 boolgt scalargtsel scalargtjoinsel
#define oid_60 60 // booleq   12 0 f t 2 16 16 16     booleq
#define oid_61 61 // chareq   12 0 f t 2 16 18 18     chareq
#define oid_62 62 // nameeq   12 0 f t 2 16 19 19     nameeq
#define oid_63 63 // int2eq   12 0 f t 2 16 21 21     int2eq
#define oid_64 64 // int2lt   12 0 f t 2 16 21 21     int2lt
#define oid_65 65 // int4eq   12 0 f t 2 16 23 23     int4eq
#define oid_66 66 // int4lt   12 0 f t 2 16 23 23     int4lt
#define oid_67 67 // texteq   12 0 f t 2 16 25 25     texteq
#define oid_68 68 // xideq   12 0 f t 2 16 28 28     xideq
#define oid_69 69 // cideq   12 0 f t 2 16 29 29     cideq
#define oid_70 70 // charne   12 0 f t 2 16 18 18     charne
#define oid_71 71 // pg_type  c C \054 1247 0 record_in record_out record_recv record_send - d x 0
#define oid_72 72 // charle   12 0 f t 2 16 18 18     charle
#define oid_73 73 // chargt   12 0 f t 2 16 18 18     chargt
#define oid_74 74 // charge   12 0 f t 2 16 18 18     charge
#define oid_75 75 // pg_attribute c C \054 1249 0 record_in record_out record_recv record_send - d x 0
#define oid_76 76 // >   f 23 20 16 418 80 int48gt scalargtsel scalargtjoinsel
#define oid_77 77 // int4   12 0 f f 23 18     chartoi4
#define oid_78 78 // char   12 0 f f 18 23     i4tochar
#define oid_79 79 // nameregexeq  12 0 f f 2 16 19 25     nameregexeq
#define oid_80 80 // <=   f 23 20 16 430 76 int48le scalarltsel scalarltjoinsel
#define oid_81 81 // pg_proc  c C \054 1255 0 record_in record_out record_recv record_send - d x 0
#define oid_82 82 // >=   f 23 20 16 420 37 int48ge scalargtsel scalargtjoinsel
#define oid_83 83 // pg_class c C \054 1259 0 record_in record_out record_recv record_send - d x 0
#define oid_84 84 // boolne   12 0 f t 2 16 16 16     boolne
#define oid_85 85 // <>   f 16 16 16 85 91 boolne neqsel neqjoinsel
#define oid_89 89 // version   12 0 f f s 0 25      pgsql_version
#define oid_91 91 // =   t 16 16 16 91 85 booleq eqsel eqjoinsel
#define oid_92 92 // =   t 18 18 16 92 630 chareq eqsel eqjoinsel
#define oid_93 93 // =   t 19 19 16 93 643 nameeq eqsel eqjoinsel
#define oid_94 94 // =   t 21 21 16 94 519 int2eq eqsel eqjoinsel
#define oid_95 95 // <   f 21 21 16 520 524 int2lt scalarltsel scalarltjoinsel
#define oid_96 96 // =   t 23 23 16 96 518 int4eq eqsel eqjoinsel
#define oid_97 97 // <   f 23 23 16 521 525 int4lt scalarltsel scalarltjoinsel
#define oid_98 98 // =   t 25 25 16 98 531 texteq eqsel eqjoinsel
#define oid_99 99 // pg_toast
#define oid_100 100 // default
#define oid_101 101 // eqsel   12 0 f f s 4 701 2281 26 2281 23     eqsel
#define oid_102 102 // neqsel   12 0 f f s 4 701 2281 26 2281 23     neqsel
#define oid_103 103 // scalarltsel  12 0 f f s 4 701 2281 26 2281 23     scalarltsel
#define oid_104 104 // scalargtsel  12 0 f f s 4 701 2281 26 2281 23     scalargtsel
#define oid_105 105 // eqjoinsel   12 0 f f s 5 701 2281 26 2281 21 2281     eqjoinsel
#define oid_106 106 // neqjoinsel   12 0 f f s 5 701 2281 26 2281 21 2281     neqjoinsel
#define oid_107 107 // scalarltjoinsel  12 0 f f s 5 701 2281 26 2281 21 2281     scalarltjoinsel
#define oid_108 108 // scalargtjoinsel  12 0 f f s 5 701 2281 26 2281 21 2281     scalargtjoinsel
#define oid_109 109 // unknownin   12 0 f f 705 2275     unknownin
#define oid_110 110 // unknownout  12 0 f f 2275 705     unknownout
#define oid_111 111 // numeric_fac  12 0 f f 1700 20     numeric_fac
#define oid_114 114 // json   \054 0 199 json_in json_out json_recv json_send - x 0
#define oid_115 115 // box_above_eq  12 0 f f 2 16 603 603     box_above_eq
#define oid_116 116 // box_below_eq  12 0 f f 2 16 603 603     box_below_eq
#define oid_117 117 // point_in   12 0 f f 600 2275     point_in
#define oid_118 118 // point_out   12 0 f f 2275 600     point_out
#define oid_119 119 // lseg_in   12 0 f f 601 2275     lseg_in
#define oid_120 120 // lseg_out   12 0 f f 2275 601     lseg_out
#define oid_121 121 // path_in   12 0 f f 602 2275     path_in
#define oid_122 122 // path_out   12 0 f f 2275 602     path_out
#define oid_123 123 // box_in   12 0 f f 603 2275     box_in
#define oid_124 124 // box_out   12 0 f f 2275 603     box_out
#define oid_125 125 // box_overlap  12 0 f f 2 16 603 603     box_overlap
#define oid_126 126 // box_ge   12 0 f f 2 16 603 603     box_ge
#define oid_127 127 // box_gt   12 0 f f 2 16 603 603     box_gt
#define oid_128 128 // box_eq   12 0 f f 2 16 603 603     box_eq
#define oid_129 129 // box_lt   12 0 f f 2 16 603 603     box_lt
#define oid_130 130 // box_le   12 0 f f 2 16 603 603     box_le
#define oid_131 131 // point_above  12 0 f f 2 16 600 600     point_above
#define oid_132 132 // point_left   12 0 f f 2 16 600 600     point_left
#define oid_133 133 // point_right  12 0 f f 2 16 600 600     point_right
#define oid_134 134 // point_below  12 0 f f 2 16 600 600     point_below
#define oid_135 135 // point_eq   12 0 f f 2 16 600 600     point_eq
#define oid_136 136 // on_pb   12 0 f f 2 16 600 603     on_pb
#define oid_137 137 // on_ppath   12 0 f f 2 16 600 602     on_ppath
#define oid_138 138 // box_center   12 0 f f 600 603     box_center
#define oid_139 139 // areasel   12 0 f f s 4 701 2281 26 2281 23     areasel
#define oid_140 140 // areajoinsel  12 0 f f s 5 701 2281 26 2281 21 2281     areajoinsel
#define oid_141 141 // int4mul   12 0 f f 2 23 23 23     int4mul
#define oid_142 142 // xml   \054 0 143 xml_in xml_out xml_recv xml_send - x 0
#define oid_143 143 // _xml  A \054 142 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_144 144 // int4ne   12 0 f t 2 16 23 23     int4ne
#define oid_145 145 // int2ne   12 0 f t 2 16 21 21     int2ne
#define oid_146 146 // int2gt   12 0 f t 2 16 21 21     int2gt
#define oid_147 147 // int4gt   12 0 f t 2 16 23 23     int4gt
#define oid_148 148 // int2le   12 0 f t 2 16 21 21     int2le
#define oid_149 149 // int4le   12 0 f t 2 16 23 23     int4le
#define oid_150 150 // int4ge   12 0 f t 2 16 23 23     int4ge
#define oid_151 151 // int2ge   12 0 f t 2 16 21 21     int2ge
#define oid_152 152 // int2mul   12 0 f f 2 21 21 21     int2mul
#define oid_153 153 // int2div   12 0 f f 2 21 21 21     int2div
#define oid_154 154 // int4div   12 0 f f 2 23 23 23     int4div
#define oid_155 155 // int2mod   12 0 f f 2 21 21 21     int2mod
#define oid_156 156 // int4mod   12 0 f f 2 23 23 23     int4mod
#define oid_157 157 // textne   12 0 f t 2 16 25 25     textne
#define oid_158 158 // int24eq   12 0 f t 2 16 21 23     int24eq
#define oid_159 159 // int42eq   12 0 f t 2 16 23 21     int42eq
#define oid_160 160 // int24lt   12 0 f t 2 16 21 23     int24lt
#define oid_161 161 // int42lt   12 0 f t 2 16 23 21     int42lt
#define oid_162 162 // int24gt   12 0 f t 2 16 21 23     int24gt
#define oid_163 163 // int42gt   12 0 f t 2 16 23 21     int42gt
#define oid_164 164 // int24ne   12 0 f t 2 16 21 23     int24ne
#define oid_165 165 // int42ne   12 0 f t 2 16 23 21     int42ne
#define oid_166 166 // int24le   12 0 f t 2 16 21 23     int24le
#define oid_167 167 // int42le   12 0 f t 2 16 23 21     int42le
#define oid_168 168 // int24ge   12 0 f t 2 16 21 23     int24ge
#define oid_169 169 // int42ge   12 0 f t 2 16 23 21     int42ge
#define oid_170 170 // int24mul   12 0 f f 2 23 21 23     int24mul
#define oid_171 171 // int42mul   12 0 f f 2 23 23 21     int42mul
#define oid_172 172 // int24div   12 0 f f 2 23 21 23     int24div
#define oid_173 173 // int42div   12 0 f f 2 23 23 21     int42div
#define oid_176 176 // int2pl   12 0 f f 2 21 21 21     int2pl
#define oid_177 177 // int4pl   12 0 f f 2 23 23 23     int4pl
#define oid_178 178 // int24pl   12 0 f f 2 23 21 23     int24pl
#define oid_179 179 // int42pl   12 0 f f 2 23 23 21     int42pl
#define oid_180 180 // int2mi   12 0 f f 2 21 21 21     int2mi
#define oid_181 181 // int4mi   12 0 f f 2 23 23 23     int4mi
#define oid_182 182 // int24mi   12 0 f f 2 23 21 23     int24mi
#define oid_183 183 // int42mi   12 0 f f 2 23 23 21     int42mi
#define oid_184 184 // oideq   12 0 f t 2 16 26 26     oideq
#define oid_185 185 // oidne   12 0 f t 2 16 26 26     oidne
#define oid_186 186 // box_same   12 0 f f 2 16 603 603     box_same
#define oid_187 187 // box_contain  12 0 f f 2 16 603 603     box_contain
#define oid_188 188 // box_left   12 0 f f 2 16 603 603     box_left
#define oid_189 189 // box_overleft  12 0 f f 2 16 603 603     box_overleft
#define oid_190 190 // box_overright  12 0 f f 2 16 603 603     box_overright
#define oid_191 191 // box_right   12 0 f f 2 16 603 603     box_right
#define oid_192 192 // box_contained  12 0 f f 2 16 603 603     box_contained
#define oid_193 193 // box_contain_pt  12 0 f f 2 16 603 600     box_contain_pt
#define oid_194 194 // pg_node_tree \054 0 pg_node_tree_in pg_node_tree_out pg_node_tree_recv pg_node_tree_send - x 100
#define oid_195 195 // pg_node_tree_in 12 0 f f 194 2275     pg_node_tree_in
#define oid_196 196 // pg_node_tree_out 12 0 f f 2275 194     pg_node_tree_out
#define oid_197 197 // pg_node_tree_recv 12 0 f f s 194 2281     pg_node_tree_recv
#define oid_198 198 // pg_node_tree_send 12 0 f f s 17 194     pg_node_tree_send
#define oid_199 199 // _json  A \054 114 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_200 200 // float4in   12 0 f f 700 2275     float4in
#define oid_201 201 // float4out   12 0 f f 2275 700     float4out
#define oid_202 202 // float4mul   12 0 f f 2 700 700 700     float4mul
#define oid_203 203 // float4div   12 0 f f 2 700 700 700     float4div
#define oid_204 204 // float4pl   12 0 f f 2 700 700 700     float4pl
#define oid_205 205 // float4mi   12 0 f f 2 700 700 700     float4mi
#define oid_206 206 // float4um   12 0 f f 700 700     float4um
#define oid_207 207 // float4abs   12 0 f f 700 700     float4abs
#define oid_208 208 // float4_accum  12 0 f f 2 1022 1022 700     float4_accum
#define oid_209 209 // float4larger  12 0 f f 2 700 700 700     float4larger
#define oid_210 210 // smgr  2 \054 0 smgrin smgrout -
#define oid_211 211 // float4smaller  12 0 f f 2 700 700 700     float4smaller
#define oid_212 212 // int4um   12 0 f f 23 23     int4um
#define oid_213 213 // int2um   12 0 f f 21 21     int2um
#define oid_214 214 // float8in   12 0 f f 701 2275     float8in
#define oid_215 215 // float8out   12 0 f f 2275 701     float8out
#define oid_216 216 // float8mul   12 0 f f 2 701 701 701     float8mul
#define oid_217 217 // float8div   12 0 f f 2 701 701 701     float8div
#define oid_218 218 // float8pl   12 0 f f 2 701 701 701     float8pl
#define oid_219 219 // float8mi   12 0 f f 2 701 701 701     float8mi
#define oid_220 220 // float8um   12 0 f f 701 701     float8um
#define oid_221 221 // float8abs   12 0 f f 701 701     float8abs
#define oid_222 222 // float8_accum  12 0 f f 2 1022 1022 701     float8_accum
#define oid_223 223 // float8larger  12 0 f f 2 701 701 701     float8larger
#define oid_224 224 // float8smaller  12 0 f f 2 701 701 701     float8smaller
#define oid_225 225 // lseg_center  12 0 f f 600 601     lseg_center
#define oid_226 226 // path_center  12 0 f f 600 602     path_center
#define oid_227 227 // poly_center  12 0 f f 600 604     poly_center
#define oid_228 228 // dround   12 0 f f 701 701     dround
#define oid_229 229 // dtrunc   12 0 f f 701 701     dtrunc
#define oid_230 230 // dsqrt   12 0 f f 701 701     dsqrt
#define oid_231 231 // dcbrt   12 0 f f 701 701     dcbrt
#define oid_232 232 // dpow   12 0 f f 2 701 701 701     dpow
#define oid_233 233 // dexp   12 0 f f 701 701     dexp
#define oid_234 234 // dlog1   12 0 f f 701 701     dlog1
#define oid_235 235 // float8   12 0 f f 701 21     i2tod
#define oid_236 236 // float4   12 0 f f 700 21     i2tof
#define oid_237 237 // int2   12 0 f f 21 701     dtoi2
#define oid_238 238 // int2   12 0 f f 21 700     ftoi2
#define oid_239 239 // line_distance  12 0 f f 2 701 628 628     line_distance
#define oid_240 240 // abstimein   12 0 f f s 702 2275     abstimein
#define oid_241 241 // abstimeout   12 0 f f s 2275 702     abstimeout
#define oid_242 242 // reltimein   12 0 f f s 703 2275     reltimein
#define oid_243 243 // reltimeout   12 0 f f s 2275 703     reltimeout
#define oid_244 244 // timepl   12 0 f f 2 702 702 703     timepl
#define oid_245 245 // timemi   12 0 f f 2 702 702 703     timemi
#define oid_246 246 // tintervalin  12 0 f f s 704 2275     tintervalin
#define oid_247 247 // tintervalout  12 0 f f s 2275 704     tintervalout
#define oid_248 248 // intinterval  12 0 f f 2 16 702 704     intinterval
#define oid_249 249 // tintervalrel  12 0 f f 703 704     tintervalrel
#define oid_250 250 // timenow   12 0 f f s 0 702      timenow
#define oid_251 251 // abstimeeq   12 0 f t 2 16 702 702     abstimeeq
#define oid_252 252 // abstimene   12 0 f t 2 16 702 702     abstimene
#define oid_253 253 // abstimelt   12 0 f t 2 16 702 702     abstimelt
#define oid_254 254 // abstimegt   12 0 f t 2 16 702 702     abstimegt
#define oid_255 255 // abstimele   12 0 f t 2 16 702 702     abstimele
#define oid_256 256 // abstimege   12 0 f t 2 16 702 702     abstimege
#define oid_257 257 // reltimeeq   12 0 f t 2 16 703 703     reltimeeq
#define oid_258 258 // reltimene   12 0 f t 2 16 703 703     reltimene
#define oid_259 259 // reltimelt   12 0 f t 2 16 703 703     reltimelt
#define oid_260 260 // reltimegt   12 0 f t 2 16 703 703     reltimegt
#define oid_261 261 // reltimele   12 0 f t 2 16 703 703     reltimele
#define oid_262 262 // reltimege   12 0 f t 2 16 703 703     reltimege
#define oid_263 263 // tintervalsame  12 0 f f 2 16 704 704     tintervalsame
#define oid_264 264 // tintervalct  12 0 f f 2 16 704 704     tintervalct
#define oid_265 265 // tintervalov  12 0 f f 2 16 704 704     tintervalov
#define oid_266 266 // tintervalleneq  12 0 f t 2 16 704 703     tintervalleneq
#define oid_267 267 // tintervallenne  12 0 f t 2 16 704 703     tintervallenne
#define oid_268 268 // tintervallenlt  12 0 f t 2 16 704 703     tintervallenlt
#define oid_269 269 // tintervallengt  12 0 f t 2 16 704 703     tintervallengt
#define oid_270 270 // tintervallenle  12 0 f t 2 16 704 703     tintervallenle
#define oid_271 271 // tintervallenge  12 0 f t 2 16 704 703     tintervallenge
#define oid_272 272 // tintervalstart  12 0 f f 702 704     tintervalstart
#define oid_273 273 // tintervalend  12 0 f f 702 704     tintervalend
#define oid_274 274 // timeofday   12 0 f f v 0 25      timeofday
#define oid_275 275 // isfinite   12 0 f f 16 702     abstime_finite
#define oid_276 276 // btcanreturn  12 0 f f s 16 2281     btcanreturn
#define oid_277 277 // inter_sl   12 0 f f 2 16 601 628     inter_sl
#define oid_278 278 // inter_lb   12 0 f f 2 16 628 603     inter_lb
#define oid_279 279 // float48mul   12 0 f f 2 701 700 701     float48mul
#define oid_280 280 // float48div   12 0 f f 2 701 700 701     float48div
#define oid_281 281 // float48pl   12 0 f f 2 701 700 701     float48pl
#define oid_282 282 // float48mi   12 0 f f 2 701 700 701     float48mi
#define oid_283 283 // float84mul   12 0 f f 2 701 701 700     float84mul
#define oid_284 284 // float84div   12 0 f f 2 701 701 700     float84div
#define oid_285 285 // float84pl   12 0 f f 2 701 701 700     float84pl
#define oid_286 286 // float84mi   12 0 f f 2 701 701 700     float84mi
#define oid_287 287 // float4eq   12 0 f t 2 16 700 700     float4eq
#define oid_288 288 // float4ne   12 0 f t 2 16 700 700     float4ne
#define oid_289 289 // float4lt   12 0 f t 2 16 700 700     float4lt
#define oid_290 290 // float4le   12 0 f t 2 16 700 700     float4le
#define oid_291 291 // float4gt   12 0 f t 2 16 700 700     float4gt
#define oid_292 292 // float4ge   12 0 f t 2 16 700 700     float4ge
#define oid_293 293 // float8eq   12 0 f t 2 16 701 701     float8eq
#define oid_294 294 // float8ne   12 0 f t 2 16 701 701     float8ne
#define oid_295 295 // float8lt   12 0 f t 2 16 701 701     float8lt
#define oid_296 296 // float8le   12 0 f t 2 16 701 701     float8le
#define oid_297 297 // float8gt   12 0 f t 2 16 701 701     float8gt
#define oid_298 298 // float8ge   12 0 f t 2 16 701 701     float8ge
#define oid_299 299 // float48eq   12 0 f t 2 16 700 701     float48eq
#define oid_300 300 // float48ne   12 0 f t 2 16 700 701     float48ne
#define oid_301 301 // float48lt   12 0 f t 2 16 700 701     float48lt
#define oid_302 302 // float48le   12 0 f t 2 16 700 701     float48le
#define oid_303 303 // float48gt   12 0 f t 2 16 700 701     float48gt
#define oid_304 304 // float48ge   12 0 f t 2 16 700 701     float48ge
#define oid_305 305 // float84eq   12 0 f t 2 16 701 700     float84eq
#define oid_306 306 // float84ne   12 0 f t 2 16 701 700     float84ne
#define oid_307 307 // float84lt   12 0 f t 2 16 701 700     float84lt
#define oid_308 308 // float84le   12 0 f t 2 16 701 700     float84le
#define oid_309 309 // float84gt   12 0 f t 2 16 701 700     float84gt
#define oid_310 310 // float84ge   12 0 f t 2 16 701 700     float84ge
#define oid_311 311 // float8   12 0 f f 701 700     ftod
#define oid_312 312 // float4   12 0 f f 700 701     dtof
#define oid_313 313 // int4   12 0 f f 23 21     i2toi4
#define oid_314 314 // int2   12 0 f f 21 23     i4toi2
#define oid_315 315 // int2vectoreq  12 0 f f 2 16 22 22     int2vectoreq
#define oid_316 316 // float8   12 0 f f 701  23     i4tod
#define oid_317 317 // int4   12 0 f f 23 701     dtoi4
#define oid_318 318 // float4   12 0 f f 700  23     i4tof
#define oid_319 319 // int4   12 0 f f 23 700     ftoi4
#define oid_320 320 // width_bucket  12 0 f f 4 23 701 701 701 23     width_bucket_float8
#define oid_321 321 // json_in   12 0 f f 114 2275     json_in
#define oid_322 322 // json_out   12 0 f f 2275 114     json_out
#define oid_323 323 // json_recv   12 0 f f 114 2281     json_recv
#define oid_324 324 // json_send   12 0 f f 17 114     json_send
#define oid_325 325 // ginbuildempty  12 0 f f v 2278 2281     ginbuildempty
#define oid_326 326 // gistbuildempty  12 0 f f v 2278 2281     gistbuildempty
#define oid_327 327 // hashbuildempty  12 0 f f v 2278 2281     hashbuildempty
#define oid_328 328 // btbuildempty  12 0 f f v 2278 2281     btbuildempty
#define oid_329 329 // hash_aclitem  12 0 f f 23 1033     hash_aclitem
#define oid_330 330 // btgettuple   12 0 f f v 2 16 2281 2281     btgettuple
#define oid_331 331 // btinsert   12 0 f f v 6 16 2281 2281 2281 2281 2281 2281     btinsert
#define oid_332 332 // btbulkdelete  12 0 f f v 4 2281 2281 2281 2281 2281     btbulkdelete
#define oid_333 333 // btbeginscan  12 0 f f v 3 2281 2281 2281 2281     btbeginscan
#define oid_334 334 // btrescan   12 0 f f v 5 2278 2281 2281 2281 2281 2281     btrescan
#define oid_335 335 // btendscan   12 0 f f v 2278 2281     btendscan
#define oid_336 336 // btmarkpos   12 0 f f v 2278 2281     btmarkpos
#define oid_337 337 // btrestrpos   12 0 f f v 2278 2281     btrestrpos
#define oid_338 338 // btbuild   12 0 f f v 3 2281 2281 2281 2281     btbuild
#define oid_339 339 // poly_same   12 0 f f 2 16 604 604     poly_same
#define oid_340 340 // poly_contain  12 0 f f 2 16 604 604     poly_contain
#define oid_341 341 // poly_left   12 0 f f 2 16 604 604     poly_left
#define oid_342 342 // poly_overleft  12 0 f f 2 16 604 604     poly_overleft
#define oid_343 343 // poly_overright  12 0 f f 2 16 604 604     poly_overright
#define oid_344 344 // poly_right   12 0 f f 2 16 604 604     poly_right
#define oid_345 345 // poly_contained  12 0 f f 2 16 604 604     poly_contained
#define oid_346 346 // poly_overlap  12 0 f f 2 16 604 604     poly_overlap
#define oid_347 347 // poly_in   12 0 f f 604 2275     poly_in
#define oid_348 348 // poly_out   12 0 f f 2275 604     poly_out
#define oid_349 349 // ||   f 2277 2283 2277 0 array_append
#define oid_350 350 // btint2cmp   12 0 f f 2 23 21 21     btint2cmp
#define oid_351 351 // btint4cmp   12 0 f f 2 23 23 23     btint4cmp
#define oid_352 352 // =   28 28 16 352 xideq eqsel eqjoinsel
#define oid_353 353 // =   f 28 23 16  xideqint4 eqsel eqjoinsel
#define oid_354 354 // btfloat4cmp  12 0 f f 2 23 700 700     btfloat4cmp
#define oid_355 355 // btfloat8cmp  12 0 f f 2 23 701 701     btfloat8cmp
#define oid_356 356 // btoidcmp   12 0 f f 2 23 26 26     btoidcmp
#define oid_357 357 // btabstimecmp  12 0 f f 2 23 702 702     btabstimecmp
#define oid_358 358 // btcharcmp   12 0 f f 2 23 18 18     btcharcmp
#define oid_359 359 // btnamecmp   12 0 f f 2 23 19 19     btnamecmp
#define oid_360 360 // bttextcmp   12 0 f f 2 23 25 25     bttextcmp
#define oid_361 361 // lseg_distance  12 0 f f 2 701 601 601     lseg_distance
#define oid_362 362 // lseg_interpt  12 0 f f 2 600 601 601     lseg_interpt
#define oid_363 363 // dist_ps   12 0 f f 2 701 600 601     dist_ps
#define oid_364 364 // dist_pb   12 0 f f 2 701 600 603     dist_pb
#define oid_365 365 // dist_sb   12 0 f f 2 701 601 603     dist_sb
#define oid_366 366 // close_ps   12 0 f f 2 600 600 601     close_ps
#define oid_367 367 // close_pb   12 0 f f 2 600 600 603     close_pb
#define oid_368 368 // close_sb   12 0 f f 2 600 601 603     close_sb
#define oid_369 369 // on_ps   12 0 f f 2 16 600 601     on_ps
#define oid_370 370 // path_distance  12 0 f f 2 701 602 602     path_distance
#define oid_371 371 // dist_ppath   12 0 f f 2 701 600 602     dist_ppath
#define oid_372 372 // on_sb   12 0 f f 2 16 601 603     on_sb
#define oid_373 373 // inter_sb   12 0 f f 2 16 601 603     inter_sb
#define oid_374 374 // ||   f 2283 2277 2277 0 array_prepend
#define oid_375 375 // ||   f 2277 2277 2277 0 array_cat
#define oid_376 376 // string_to_array  12 0 f f f 3 1009 25 25 25     text_to_array_null
#define oid_377 377 // cash_cmp   12 0 f f 2 23 790 790     cash_cmp
#define oid_378 378 // array_append  12 0 f f f 2 2277 2277 2283     array_append
#define oid_379 379 // array_prepend  12 0 f f f 2 2277 2283 2277     array_prepend
#define oid_380 380 // btreltimecmp  12 0 f f 2 23 703 703     btreltimecmp
#define oid_381 381 // bttintervalcmp  12 0 f f 2 23 704 704     bttintervalcmp
#define oid_382 382 // btarraycmp   12 0 f f 2 23 2277 2277     btarraycmp
#define oid_383 383 // array_cat   12 0 f f f 2 2277 2277 2277     array_cat
#define oid_384 384 // array_to_string  12 0 f f f s 3 25 2277 25 25     array_to_text_null
#define oid_385 385 // =   29 29 16 385 cideq eqsel eqjoinsel
#define oid_386 386 // =   22 22 16 386 int2vectoreq eqsel eqjoinsel
#define oid_387 387 // =   27 27 16 387 402 tideq eqsel eqjoinsel
#define oid_388 388 // !   r f 20 1700  numeric_fac -
#define oid_389 389 // !!   l f 20 1700  numeric_fac -
#define oid_390 390 // array_ne   12 0 f f 2 16 2277 2277     array_ne
#define oid_391 391 // array_lt   12 0 f f 2 16 2277 2277     array_lt
#define oid_392 392 // array_gt   12 0 f f 2 16 2277 2277     array_gt
#define oid_393 393 // array_le   12 0 f f 2 16 2277 2277     array_le
#define oid_394 394 // string_to_array  12 0 f f f 2 1009 25 25     text_to_array
#define oid_395 395 // array_to_string  12 0 f f s 2 25 2277 25     array_to_text
#define oid_396 396 // array_ge   12 0 f f 2 16 2277 2277     array_ge
#define oid_397 397 // 403 array_ops
#define oid_398 398 // hashint2vector  12 0 f f 23 22     hashint2vector
#define oid_399 399 // hashmacaddr  12 0 f f 23 829     hashmacaddr
#define oid_400 400 // hashtext   12 0 f f 23 25     hashtext
#define oid_401 401 // text   12 0 f f 25 1042     rtrim1
#define oid_402 402 // <>   f 27 27 16 402 387 tidne neqsel neqjoinsel
#define oid_403 403 // btree 5 2 t t t t btinsert btbeginscan btgettuple btgetbitmap btrescan btendscan btmarkpos btrestrpos btbuild btbuildempty btbulkdelete btvacuumcleanup btcanreturn btcostestimate btoptions
#define oid_404 404 // btoidvectorcmp  12 0 f f 2 23 30 30     btoidvectorcmp
#define oid_405 405 // hash 1 f f f f f 23 hashinsert hashbeginscan hashgettuple hashgetbitmap hashrescan hashendscan hashmarkpos hashrestrpos hashbuild hashbuildempty hashbulkdelete hashvacuumcleanup hashcostestimate hashoptions
#define oid_406 406 // text   12 0 f f 25 19     name_text
#define oid_407 407 // name   12 0 f f 19 25     text_name
#define oid_408 408 // bpchar   12 0 f f 1042 19     name_bpchar
#define oid_409 409 // name   12 0 f f 19 1042     bpchar_name
#define oid_410 410 // =   t 20 20 16 410 411 int8eq eqsel eqjoinsel
#define oid_411 411 // <>   f 20 20 16 411 410 int8ne neqsel neqjoinsel
#define oid_412 412 // <   f 20 20 16 413 415 int8lt scalarltsel scalarltjoinsel
#define oid_413 413 // >   f 20 20 16 412 414 int8gt scalargtsel scalargtjoinsel
#define oid_414 414 // <=   f 20 20 16 415 413 int8le scalarltsel scalarltjoinsel
#define oid_415 415 // >=   f 20 20 16 414 412 int8ge scalargtsel scalargtjoinsel
#define oid_416 416 // =   t 20 23 16 15 417 int84eq eqsel eqjoinsel
#define oid_417 417 // <>   f 20 23 16 36 416 int84ne neqsel neqjoinsel
#define oid_418 418 // <   f 20 23 16 76 430 int84lt scalarltsel scalarltjoinsel
#define oid_419 419 // >   f 20 23 16 37 420 int84gt scalargtsel scalargtjoinsel
#define oid_420 420 // <=   f 20 23 16 82 419 int84le scalarltsel scalarltjoinsel
#define oid_421 421 // 403 abstime_ops
#define oid_422 422 // hashinet   12 0 f f 23 869     hashinet
#define oid_423 423 // 403 bit_ops
#define oid_424 424 // 403 bool_ops
#define oid_425 425 // hashvacuumcleanup 12 0 f f v 2 2281 2281 2281     hashvacuumcleanup
#define oid_426 426 // 403 bpchar_ops
#define oid_427 427 // 405 bpchar_ops
#define oid_428 428 // 403 bytea_ops
#define oid_429 429 // 403 char_ops
#define oid_430 430 // >=   f 20 23 16 80 418 int84ge scalargtsel scalargtjoinsel
#define oid_431 431 // 405 char_ops
#define oid_432 432 // hash_numeric  12 0 f f 23 1700     hash_numeric
#define oid_433 433 // @>   f 603 600 16 511 box_contain_pt contsel contjoinsel
#define oid_434 434 // 403 datetime_ops
#define oid_435 435 // 405 date_ops
#define oid_436 436 // macaddr_in  12 0 f f 829 2275     macaddr_in
#define oid_437 437 // macaddr_out 12 0 f f 2275 829     macaddr_out
#define oid_438 438 // hashcostestimate 12 0 f f v 7 2278 2281 2281 2281 2281 2281 2281 2281     hashcostestimate
#define oid_439 439 // %   f 20 20 20  int8mod -
#define oid_440 440 // hashgettuple  12 0 f f v 2 16 2281 2281     hashgettuple
#define oid_441 441 // hashinsert   12 0 f f v 6 16 2281 2281 2281 2281 2281 2281     hashinsert
#define oid_442 442 // hashbulkdelete  12 0 f f v 4 2281 2281 2281 2281 2281     hashbulkdelete
#define oid_443 443 // hashbeginscan  12 0 f f v 3 2281 2281 2281 2281     hashbeginscan
#define oid_444 444 // hashrescan   12 0 f f v 5 2278 2281 2281 2281 2281 2281     hashrescan
#define oid_445 445 // hashendscan  12 0 f f v 2278 2281     hashendscan
#define oid_446 446 // hashmarkpos  12 0 f f v 2278 2281     hashmarkpos
#define oid_447 447 // hashrestrpos  12 0 f f v 2278 2281     hashrestrpos
#define oid_448 448 // hashbuild   12 0 f f v 3 2281 2281 2281 2281     hashbuild
#define oid_449 449 // hashint2   12 0 f f 23 21     hashint2
#define oid_450 450 // hashint4   12 0 f f 23 23     hashint4
#define oid_451 451 // hashfloat4   12 0 f f 23 700     hashfloat4
#define oid_452 452 // hashfloat8   12 0 f f 23 701     hashfloat8
#define oid_453 453 // hashoid   12 0 f f 23 26     hashoid
#define oid_454 454 // hashchar   12 0 f f 23 18     hashchar
#define oid_455 455 // hashname   12 0 f f 23 19     hashname
#define oid_456 456 // hashvarlena  12 0 f f 23 2281     hashvarlena
#define oid_457 457 // hashoidvector  12 0 f f 23 30     hashoidvector
#define oid_458 458 // text_larger  12 0 f f 2 25 25 25     text_larger
#define oid_459 459 // text_smaller  12 0 f f 2 25 25 25     text_smaller
#define oid_460 460 // int8in   12 0 f f 20 2275     int8in
#define oid_461 461 // int8out   12 0 f f 2275 20     int8out
#define oid_462 462 // int8um   12 0 f f 20 20     int8um
#define oid_463 463 // int8pl   12 0 f f 2 20 20 20     int8pl
#define oid_464 464 // int8mi   12 0 f f 2 20 20 20     int8mi
#define oid_465 465 // int8mul   12 0 f f 2 20 20 20     int8mul
#define oid_466 466 // int8div   12 0 f f 2 20 20 20     int8div
#define oid_467 467 // int8eq   12 0 f t 2 16 20 20     int8eq
#define oid_468 468 // int8ne   12 0 f t 2 16 20 20     int8ne
#define oid_469 469 // int8lt   12 0 f t 2 16 20 20     int8lt
#define oid_470 470 // int8gt   12 0 f t 2 16 20 20     int8gt
#define oid_471 471 // int8le   12 0 f t 2 16 20 20     int8le
#define oid_472 472 // int8ge   12 0 f t 2 16 20 20     int8ge
#define oid_473 473 // @   l f 20 20  int8abs -
#define oid_474 474 // int84eq   12 0 f t 2 16 20 23     int84eq
#define oid_475 475 // int84ne   12 0 f t 2 16 20 23     int84ne
#define oid_476 476 // int84lt   12 0 f t 2 16 20 23     int84lt
#define oid_477 477 // int84gt   12 0 f t 2 16 20 23     int84gt
#define oid_478 478 // int84le   12 0 f t 2 16 20 23     int84le
#define oid_479 479 // int84ge   12 0 f t 2 16 20 23     int84ge
#define oid_480 480 // int4   12 0 f f 23 20     int84
#define oid_481 481 // int8   12 0 f f 20 23     int48
#define oid_482 482 // float8   12 0 f f 701 20     i8tod
#define oid_483 483 // int8   12 0 f f 20 701     dtoi8
#define oid_484 484 // -   l f 20 20  int8um -
#define oid_485 485 // <<   f 604 604 16  poly_left positionsel positionjoinsel
#define oid_486 486 // &<   f 604 604 16  poly_overleft positionsel positionjoinsel
#define oid_487 487 // &>   f 604 604 16  poly_overright positionsel positionjoinsel
#define oid_488 488 // >>   f 604 604 16  poly_right positionsel positionjoinsel
#define oid_489 489 // <@   f 604 604 16 490 poly_contained contsel contjoinsel
#define oid_490 490 // @>   f 604 604 16 489 poly_contain contsel contjoinsel
#define oid_491 491 // ~=   f 604 604 16 491 poly_same eqsel eqjoinsel
#define oid_492 492 // &&   f 604 604 16 492 poly_overlap areasel areajoinsel
#define oid_493 493 // <<   f 603 603 16  box_left positionsel positionjoinsel
#define oid_494 494 // &<   f 603 603 16  box_overleft positionsel positionjoinsel
#define oid_495 495 // &>   f 603 603 16  box_overright positionsel positionjoinsel
#define oid_496 496 // >>   f 603 603 16  box_right positionsel positionjoinsel
#define oid_497 497 // <@   f 603 603 16 498 box_contained contsel contjoinsel
#define oid_498 498 // @>   f 603 603 16 497 box_contain contsel contjoinsel
#define oid_499 499 // ~=   f 603 603 16 499 box_same eqsel eqjoinsel
#define oid_500 500 // &&   f 603 603 16 500 box_overlap areasel areajoinsel
#define oid_501 501 // >=   f 603 603 16 505 504 box_ge areasel areajoinsel
#define oid_502 502 // >   f 603 603 16 504 505 box_gt areasel areajoinsel
#define oid_503 503 // =   f 603 603 16 503 box_eq eqsel eqjoinsel
#define oid_504 504 // <   f 603 603 16 502 501 box_lt areasel areajoinsel
#define oid_505 505 // <=   f 603 603 16 501 502 box_le areasel areajoinsel
#define oid_506 506 // >^   f 600 600 16  point_above positionsel positionjoinsel
#define oid_507 507 // <<   f 600 600 16  point_left positionsel positionjoinsel
#define oid_508 508 // >>   f 600 600 16  point_right positionsel positionjoinsel
#define oid_509 509 // <^   f 600 600 16  point_below positionsel positionjoinsel
#define oid_510 510 // ~=   f 600 600 16 510 713 point_eq eqsel eqjoinsel
#define oid_511 511 // <@   f 600 603 16 433 on_pb contsel contjoinsel
#define oid_512 512 // <@   f 600 602 16 755 on_ppath -
#define oid_513 513 // @@   l f 603 600  box_center -
#define oid_514 514 // *   f 23 23 23 514 int4mul -
#define oid_515 515 // array_larger  12 0 f f 2 2277 2277 2277     array_larger
#define oid_516 516 // array_smaller  12 0 f f 2 2277 2277 2277     array_smaller
#define oid_517 517 // <->   f 600 600 701 517 point_distance -
#define oid_518 518 // <>   f 23 23 16 518 96 int4ne neqsel neqjoinsel
#define oid_519 519 // <>   f 21 21 16 519 94 int2ne neqsel neqjoinsel
#define oid_520 520 // >   f 21 21 16 95 522 int2gt scalargtsel scalargtjoinsel
#define oid_521 521 // >   f 23 23 16 97 523 int4gt scalargtsel scalargtjoinsel
#define oid_522 522 // <=   f 21 21 16 524 520 int2le scalarltsel scalarltjoinsel
#define oid_523 523 // <=   f 23 23 16 525 521 int4le scalarltsel scalarltjoinsel
#define oid_524 524 // >=   f 21 21 16 522 95 int2ge scalargtsel scalargtjoinsel
#define oid_525 525 // >=   f 23 23 16 523 97 int4ge scalargtsel scalargtjoinsel
#define oid_526 526 // *   f 21 21 21 526 int2mul -
#define oid_527 527 // /   f 21 21 21  int2div -
#define oid_528 528 // /   f 23 23 23  int4div -
#define oid_529 529 // %   f 21 21 21  int2mod -
#define oid_530 530 // %   f 23 23 23  int4mod -
#define oid_531 531 // <>   f 25 25 16 531 98 textne neqsel neqjoinsel
#define oid_532 532 // =   t 21 23 16 533 538 int24eq eqsel eqjoinsel
#define oid_533 533 // =   t 23 21 16 532 539 int42eq eqsel eqjoinsel
#define oid_534 534 // <   f 21 23 16 537 542 int24lt scalarltsel scalarltjoinsel
#define oid_535 535 // <   f 23 21 16 536 543 int42lt scalarltsel scalarltjoinsel
#define oid_536 536 // >   f 21 23 16 535 540 int24gt scalargtsel scalargtjoinsel
#define oid_537 537 // >   f 23 21 16 534 541 int42gt scalargtsel scalargtjoinsel
#define oid_538 538 // <>   f 21 23 16 539 532 int24ne neqsel neqjoinsel
#define oid_539 539 // <>   f 23 21 16 538 533 int42ne neqsel neqjoinsel
#define oid_540 540 // <=   f 21 23 16 543 536 int24le scalarltsel scalarltjoinsel
#define oid_541 541 // <=   f 23 21 16 542 537 int42le scalarltsel scalarltjoinsel
#define oid_542 542 // >=   f 21 23 16 541 534 int24ge scalargtsel scalargtjoinsel
#define oid_543 543 // >=   f 23 21 16 540 535 int42ge scalargtsel scalargtjoinsel
#define oid_544 544 // *   f 21 23 23 545 int24mul -
#define oid_545 545 // *   f 23 21 23 544 int42mul -
#define oid_546 546 // /   f 21 23 23  int24div -
#define oid_547 547 // /   f 23 21 23  int42div -
#define oid_550 550 // +   f 21 21 21 550 int2pl -
#define oid_551 551 // +   f 23 23 23 551 int4pl -
#define oid_552 552 // +   f 21 23 23 553 int24pl -
#define oid_553 553 // +   f 23 21 23 552 int42pl -
#define oid_554 554 // -   f 21 21 21  int2mi -
#define oid_555 555 // -   f 23 23 23  int4mi -
#define oid_556 556 // -   f 21 23 23  int24mi -
#define oid_557 557 // -   f 23 21 23  int42mi -
#define oid_558 558 // -   l f 23 23  int4um -
#define oid_559 559 // -   l f 21 21  int2um -
#define oid_560 560 // =   t 702 702 16 560 561 abstimeeq eqsel eqjoinsel
#define oid_561 561 // <>   f 702 702 16 561 560 abstimene neqsel neqjoinsel
#define oid_562 562 // <   f 702 702 16 563 565 abstimelt scalarltsel scalarltjoinsel
#define oid_563 563 // >   f 702 702 16 562 564 abstimegt scalargtsel scalargtjoinsel
#define oid_564 564 // <=   f 702 702 16 565 563 abstimele scalarltsel scalarltjoinsel
#define oid_565 565 // >=   f 702 702 16 564 562 abstimege scalargtsel scalargtjoinsel
#define oid_566 566 // =   t 703 703 16 566 567 reltimeeq eqsel eqjoinsel
#define oid_567 567 // <>   f 703 703 16 567 566 reltimene neqsel neqjoinsel
#define oid_568 568 // <   f 703 703 16 569 571 reltimelt scalarltsel scalarltjoinsel
#define oid_569 569 // >   f 703 703 16 568 570 reltimegt scalargtsel scalargtjoinsel
#define oid_570 570 // <=   f 703 703 16 571 569 reltimele scalarltsel scalarltjoinsel
#define oid_571 571 // >=   f 703 703 16 570 568 reltimege scalargtsel scalargtjoinsel
#define oid_572 572 // ~=   f 704 704 16 572 tintervalsame eqsel eqjoinsel
#define oid_573 573 // <<   f 704 704 16  tintervalct -
#define oid_574 574 // &&   f 704 704 16 574 tintervalov -
#define oid_575 575 // #=   f 704 703 16 576 tintervalleneq -
#define oid_576 576 // #<>   f 704 703 16 575 tintervallenne -
#define oid_577 577 // #<   f 704 703 16 580 tintervallenlt -
#define oid_578 578 // #>   f 704 703 16 579 tintervallengt -
#define oid_579 579 // #<=   f 704 703 16 578 tintervallenle -
#define oid_580 580 // #>=   f 704 703 16 577 tintervallenge -
#define oid_581 581 // +   f 702 703 702  timepl -
#define oid_582 582 // -   f 702 703 702  timemi -
#define oid_583 583 // <?>   f 702 704 16  intinterval -
#define oid_584 584 // -   l f 700 700  float4um -
#define oid_585 585 // -   l f 701 701  float8um -
#define oid_586 586 // +   f 700 700 700 586 float4pl -
#define oid_587 587 // -   f 700 700 700  float4mi -
#define oid_588 588 // /   f 700 700 700  float4div -
#define oid_589 589 // *   f 700 700 700 589 float4mul -
#define oid_590 590 // @   l f 700 700  float4abs -
#define oid_591 591 // +   f 701 701 701 591 float8pl -
#define oid_592 592 // -   f 701 701 701  float8mi -
#define oid_593 593 // /   f 701 701 701  float8div -
#define oid_594 594 // *   f 701 701 701 594 float8mul -
#define oid_595 595 // @   l f 701 701  float8abs -
#define oid_596 596 // |/   l f 701 701  dsqrt -
#define oid_597 597 // ||/   l f 701 701  dcbrt -
#define oid_598 598 // abbrev  12 0 f f 25 869     inet_abbrev
#define oid_599 599 // abbrev  12 0 f f 25 650     cidr_abbrev
#define oid_600 600 // point  16 G \054 701 1017 point_in point_out point_recv point_send
#define oid_601 601 // lseg  32 G \054 600 1018 lseg_in lseg_out lseg_recv lseg_send
#define oid_602 602 // path  G \054 0 1019 path_in path_out path_recv path_send - d x 0
#define oid_603 603 // box  32 G \073 600 1020 box_in box_out box_recv box_send
#define oid_604 604 // polygon  G \054 1027 poly_in poly_out poly_recv poly_send - d x 0
#define oid_605 605 // set_masklen 12 0 f f 2 869 869 23     inet_set_masklen
#define oid_606 606 // <#>   f 702 702 704  mktinterval -
#define oid_607 607 // =   t 26 26 16 607 608 oideq eqsel eqjoinsel
#define oid_608 608 // <>   f 26 26 16 608 607 oidne neqsel neqjoinsel
#define oid_609 609 // <   f 26 26 16 610 612 oidlt scalarltsel scalarltjoinsel
#define oid_610 610 // >   f 26 26 16 609 611 oidgt scalargtsel scalargtjoinsel
#define oid_611 611 // <=   f 26 26 16 612 610 oidle scalarltsel scalarltjoinsel
#define oid_612 612 // >=   f 26 26 16 611 609 oidge scalargtsel scalargtjoinsel
#define oid_613 613 // <->   f 600 628 701  dist_pl -
#define oid_614 614 // <->   f 600 601 701  dist_ps -
#define oid_615 615 // <->   f 600 603 701  dist_pb -
#define oid_616 616 // <->   f 601 628 701  dist_sl -
#define oid_617 617 // <->   f 601 603 701  dist_sb -
#define oid_618 618 // <->   f 600 602 701  dist_ppath -
#define oid_619 619 // oidvectorne  12 0 f f 2 16 30 30     oidvectorne
#define oid_620 620 // =   t 700 700 16 620 621 float4eq eqsel eqjoinsel
#define oid_621 621 // <>   f 700 700 16 621 620 float4ne neqsel neqjoinsel
#define oid_622 622 // <   f 700 700 16 623 625 float4lt scalarltsel scalarltjoinsel
#define oid_623 623 // >   f 700 700 16 622 624 float4gt scalargtsel scalargtjoinsel
#define oid_624 624 // <=   f 700 700 16 625 623 float4le scalarltsel scalarltjoinsel
#define oid_625 625 // >=   f 700 700 16 624 622 float4ge scalargtsel scalargtjoinsel
#define oid_626 626 // hash_array   12 0 f f 23 2277     hash_array
#define oid_627 627 // 405 array_ops
#define oid_628 628 // line  24 G \054 701 629 line_in line_out line_recv line_send
#define oid_629 629 // _line  A \054 628 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_630 630 // <>   f 18 18 16 630 92 charne neqsel neqjoinsel
#define oid_631 631 // <   f 18 18 16 633 634 charlt scalarltsel scalarltjoinsel
#define oid_632 632 // <=   f 18 18 16 634 633 charle scalarltsel scalarltjoinsel
#define oid_633 633 // >   f 18 18 16 631 632 chargt scalargtsel scalargtjoinsel
#define oid_634 634 // >=   f 18 18 16 632 631 charge scalargtsel scalargtjoinsel
#define oid_635 635 // set_masklen 12 0 f f 2 650 650 23     cidr_set_masklen
#define oid_636 636 // btgetbitmap  12 0 f f v 2 20 2281 2281     btgetbitmap
#define oid_637 637 // hashgetbitmap  12 0 f f v 2 20 2281 2281     hashgetbitmap
#define oid_638 638 // gistgetbitmap  12 0 f f v 2 20 2281 2281     gistgetbitmap
#define oid_639 639 // ~   f 19 25 16 640 nameregexeq regexeqsel regexeqjoinsel
#define oid_640 640 // !~   f 19 25 16 639 nameregexne regexnesel regexnejoinsel
#define oid_641 641 // ~   f 25 25 16 642 textregexeq regexeqsel regexeqjoinsel
#define oid_642 642 // !~   f 25 25 16 641 textregexne regexnesel regexnejoinsel
#define oid_643 643 // <>   f 19 19 16 643 93 namene neqsel neqjoinsel
#define oid_644 644 // <>   f 30 30 16 644 649 oidvectorne neqsel neqjoinsel
#define oid_645 645 // <   f 30 30 16 646 648 oidvectorlt scalarltsel scalarltjoinsel
#define oid_646 646 // >   f 30 30 16 645 647 oidvectorgt scalargtsel scalargtjoinsel
#define oid_647 647 // <=   f 30 30 16 648 646 oidvectorle scalarltsel scalarltjoinsel
#define oid_648 648 // >=   f 30 30 16 647 645 oidvectorge scalargtsel scalargtjoinsel
#define oid_649 649 // =   t 30 30 16 649 644 oidvectoreq eqsel eqjoinsel
#define oid_650 650 // cidr  I \054 0 651 cidr_in cidr_out cidr_recv cidr_send - m 0
#define oid_651 651 // _cidr  A \054 650 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_652 652 // float4   12 0 f f 700 20     i8tof
#define oid_653 653 // int8   12 0 f f 20 700     ftoi8
#define oid_654 654 // ||   f 25 25 25 0 textcat -
#define oid_655 655 // namelt   12 0 f t 2 16 19 19     namelt
#define oid_656 656 // namele   12 0 f t 2 16 19 19     namele
#define oid_657 657 // namegt   12 0 f t 2 16 19 19     namegt
#define oid_658 658 // namege   12 0 f t 2 16 19 19     namege
#define oid_659 659 // namene   12 0 f t 2 16 19 19     namene
#define oid_660 660 // <   f 19 19 16 662 663 namelt scalarltsel scalarltjoinsel
#define oid_661 661 // <=   f 19 19 16 663 662 namele scalarltsel scalarltjoinsel
#define oid_662 662 // >   f 19 19 16 660 661 namegt scalargtsel scalargtjoinsel
#define oid_663 663 // >=   f 19 19 16 661 660 namege scalargtsel scalargtjoinsel
#define oid_664 664 // <   f 25 25 16 666 667 text_lt scalarltsel scalarltjoinsel
#define oid_665 665 // <=   f 25 25 16 667 666 text_le scalarltsel scalarltjoinsel
#define oid_666 666 // >   f 25 25 16 664 665 text_gt scalargtsel scalargtjoinsel
#define oid_667 667 // >=   f 25 25 16 665 664 text_ge scalargtsel scalargtjoinsel
#define oid_668 668 // bpchar   12 0 f f 3 1042 1042 23 16     bpchar
#define oid_669 669 // varchar   12 0 varchar_transform f f 3 1043 1043 23 16     varchar
#define oid_670 670 // =   t 701 701 16 670 671 float8eq eqsel eqjoinsel
#define oid_671 671 // <>   f 701 701 16 671 670 float8ne neqsel neqjoinsel
#define oid_672 672 // <   f 701 701 16 674 675 float8lt scalarltsel scalarltjoinsel
#define oid_673 673 // <=   f 701 701 16 675 674 float8le scalarltsel scalarltjoinsel
#define oid_674 674 // >   f 701 701 16 672 673 float8gt scalargtsel scalargtjoinsel
#define oid_675 675 // >=   f 701 701 16 673 672 float8ge scalargtsel scalargtjoinsel
#define oid_676 676 // mktinterval  12 0 f f 2 704 702 702     mktinterval
#define oid_677 677 // oidvectorlt  12 0 f f 2 16 30 30     oidvectorlt
#define oid_678 678 // oidvectorle  12 0 f f 2 16 30 30     oidvectorle
#define oid_679 679 // oidvectoreq  12 0 f f 2 16 30 30     oidvectoreq
#define oid_680 680 // oidvectorge  12 0 f f 2 16 30 30     oidvectorge
#define oid_681 681 // oidvectorgt  12 0 f f 2 16 30 30     oidvectorgt
#define oid_682 682 // @   l f 21 21  int2abs -
#define oid_683 683 // network  12 0 f f 650 869     network_network
#define oid_684 684 // +   f 20 20 20 684 int8pl -
#define oid_685 685 // -   f 20 20 20  int8mi -
#define oid_686 686 // *   f 20 20 20 686 int8mul -
#define oid_687 687 // /   f 20 20 20  int8div -
#define oid_688 688 // +   f 20 23 20 692 int84pl -
#define oid_689 689 // -   f 20 23 20  int84mi -
#define oid_690 690 // *   f 20 23 20 694 int84mul -
#define oid_691 691 // /   f 20 23 20  int84div -
#define oid_692 692 // +   f 23 20 20 688 int48pl -
#define oid_693 693 // -   f 23 20 20  int48mi -
#define oid_694 694 // *   f 23 20 20 690 int48mul -
#define oid_695 695 // /   f 23 20 20  int48div -
#define oid_696 696 // netmask  12 0 f f 869 869     network_netmask
#define oid_697 697 // masklen  12 0 f f 23 869     network_masklen
#define oid_698 698 // broadcast  12 0 f f 869 869     network_broadcast
#define oid_699 699 // host  12 0 f f 25 869     network_host
#define oid_700 700 // float4  4 FLOAT4PASSBYVAL \054 1021 float4in float4out float4recv float4send
#define oid_701 701 // float8  8 FLOAT8PASSBYVAL t \054 1022 float8in float8out float8recv float8send
#define oid_702 702 // abstime  4 D \054 1023 abstimein abstimeout abstimerecv abstimesend
#define oid_703 703 // reltime  4 T \054 1024 reltimein reltimeout reltimerecv reltimesend
#define oid_704 704 // tinterval 12 T \054 1025 tintervalin tintervalout tintervalrecv tintervalsend
#define oid_705 705 // unknown  -2 X \054 0 unknownin unknownout unknownrecv unknownsend
#define oid_706 706 // <->   f 603 603 701 706 box_distance -
#define oid_707 707 // <->   f 602 602 701 707 path_distance -
#define oid_708 708 // <->   f 628 628 701 708 line_distance -
#define oid_709 709 // <->   f 601 601 701 709 lseg_distance -
#define oid_710 710 // getpgusername  12 0 f f s 0 19      current_user
#define oid_711 711 // family  12 0 f f 23 869     network_family
#define oid_712 712 // <->   f 604 604 701 712 poly_distance -
#define oid_713 713 // <>   f 600 600 16 713 510 point_ne neqsel neqjoinsel
#define oid_714 714 // int2   12 0 f f 21 20     int82
#define oid_715 715 // lo_create   12 0 f f v 26 26     lo_create
#define oid_716 716 // oidlt   12 0 f t 2 16 26 26     oidlt
#define oid_717 717 // oidle   12 0 f t 2 16 26 26     oidle
#define oid_718 718 // circle  24 G \054 0 719 circle_in circle_out circle_recv circle_send
#define oid_719 719 // _circle  A \054 718 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_720 720 // octet_length  12 0 f f 23 17     byteaoctetlen
#define oid_721 721 // get_byte   12 0 f f 2 23 17 23     byteaGetByte
#define oid_722 722 // set_byte   12 0 f f 3 17 17 23 23     byteaSetByte
#define oid_723 723 // get_bit   12 0 f f 2 23 17 23     byteaGetBit
#define oid_724 724 // set_bit   12 0 f f 3 17 17 23 23     byteaSetBit
#define oid_725 725 // dist_pl   12 0 f f 2 701 600 628     dist_pl
#define oid_726 726 // dist_lb   12 0 f f 2 701 628 603     dist_lb
#define oid_727 727 // dist_sl   12 0 f f 2 701 601 628     dist_sl
#define oid_728 728 // dist_cpoly   12 0 f f 2 701 718 604     dist_cpoly
#define oid_729 729 // poly_distance  12 0 f f 2 701 604 604     poly_distance
#define oid_730 730 // text  12 0 f f 25 869     network_show
#define oid_731 731 // +   f 600 600 600 731 point_add -
#define oid_732 732 // -   f 600 600 600   point_sub -
#define oid_733 733 // *   f 600 600 600 733 point_mul -
#define oid_734 734 // /   f 600 600 600   point_div -
#define oid_735 735 // +   f 602 602 602 735 path_add -
#define oid_736 736 // +   f 602 600 602   path_add_pt -
#define oid_737 737 // -   f 602 600 602   path_sub_pt -
#define oid_738 738 // *   f 602 600 602   path_mul_pt -
#define oid_739 739 // /   f 602 600 602   path_div_pt -
#define oid_740 740 // text_lt   12 0 f f 2 16 25 25     text_lt
#define oid_741 741 // text_le   12 0 f f 2 16 25 25     text_le
#define oid_742 742 // text_gt   12 0 f f 2 16 25 25     text_gt
#define oid_743 743 // text_ge   12 0 f f 2 16 25 25     text_ge
#define oid_744 744 // array_eq   12 0 f f 2 16 2277 2277     array_eq
#define oid_745 745 // current_user  12 0 f f s 0 19      current_user
#define oid_746 746 // session_user  12 0 f f s 0 19      session_user
#define oid_747 747 // array_dims   12 0 f f 25 2277     array_dims
#define oid_748 748 // array_ndims  12 0 f f 23 2277     array_ndims
#define oid_749 749 // overlay   12 0 f f 4 17 17 17 23 23     byteaoverlay
#define oid_750 750 // array_in   12 0 f f s 3 2277 2275 26 23     array_in
#define oid_751 751 // array_out   12 0 f f s 2275 2277     array_out
#define oid_752 752 // overlay   12 0 f f 3 17 17 17 23     byteaoverlay_no_len
#define oid_753 753 // trunc  12 0 f f 829 829     macaddr_trunc
#define oid_754 754 // int8   12 0 f f 20 21     int28
#define oid_755 755 // @>   f 602 600 16 512 path_contain_pt -
#define oid_756 756 // <@   f 600 604 16 757 pt_contained_poly contsel contjoinsel
#define oid_757 757 // @>   f 604 600 16 756 poly_contain_pt contsel contjoinsel
#define oid_758 758 // <@   f 600 718 16 759 pt_contained_circle contsel contjoinsel
#define oid_759 759 // @>   f 718 600 16 758 circle_contain_pt contsel contjoinsel
#define oid_760 760 // smgrin   12 0 f f s 210 2275     smgrin
#define oid_761 761 // smgrout   12 0 f f s 2275 210     smgrout
#define oid_762 762 // smgreq   12 0 f f 2 16 210 210     smgreq
#define oid_763 763 // smgrne   12 0 f f 2 16 210 210     smgrne
#define oid_764 764 // lo_import   12 0 f f v 26 25     lo_import
#define oid_765 765 // lo_export   12 0 f f v 2 23 26 25     lo_export
#define oid_766 766 // int4inc   12 0 f f 23 23     int4inc
#define oid_767 767 // lo_import   12 0 f f v 2 26 25 26     lo_import_with_oid
#define oid_768 768 // int4larger   12 0 f f 2 23 23 23     int4larger
#define oid_769 769 // int4smaller  12 0 f f 2 23 23 23     int4smaller
#define oid_770 770 // int2larger   12 0 f f 2 21 21 21     int2larger
#define oid_771 771 // int2smaller  12 0 f f 2 21 21 21     int2smaller
#define oid_772 772 // gistcostestimate 12 0 f f v 7 2278 2281 2281 2281 2281 2281 2281 2281     gistcostestimate
#define oid_773 773 // @   l f 23 23  int4abs -
#define oid_774 774 // gistgettuple  12 0 f f v 2 16 2281 2281     gistgettuple
#define oid_775 775 // gistinsert   12 0 f f v 6 16 2281 2281 2281 2281 2281 2281     gistinsert
#define oid_776 776 // gistbulkdelete  12 0 f f v 4 2281 2281 2281 2281 2281     gistbulkdelete
#define oid_777 777 // gistbeginscan  12 0 f f v 3 2281 2281 2281 2281     gistbeginscan
#define oid_778 778 // gistrescan   12 0 f f v 5 2278 2281 2281 2281 2281 2281     gistrescan
#define oid_779 779 // gistendscan  12 0 f f v 2278 2281     gistendscan
#define oid_780 780 // gistmarkpos  12 0 f f v 2278 2281     gistmarkpos
#define oid_781 781 // gistrestrpos  12 0 f f v 2278 2281     gistrestrpos
#define oid_782 782 // gistbuild   12 0 f f v 3 2281 2281 2281 2281     gistbuild
#define oid_783 783 // gist 8 f t t gistinsert gistbeginscan gistgettuple gistgetbitmap gistrescan gistendscan gistmarkpos gistrestrpos gistbuild gistbuildempty gistbulkdelete gistvacuumcleanup gistcostestimate gistoptions
#define oid_784 784 // tintervaleq  12 0 f t 2 16 704 704     tintervaleq
#define oid_785 785 // tintervalne  12 0 f t 2 16 704 704     tintervalne
#define oid_786 786 // tintervallt  12 0 f t 2 16 704 704     tintervallt
#define oid_787 787 // tintervalgt  12 0 f t 2 16 704 704     tintervalgt
#define oid_788 788 // tintervalle  12 0 f t 2 16 704 704     tintervalle
#define oid_789 789 // tintervalge  12 0 f t 2 16 704 704     tintervalge
#define oid_790 790 // money   8 FLOAT8PASSBYVAL \054 0 791 cash_in cash_out cash_recv cash_send
#define oid_791 791 // _money  A \054 790 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_792 792 // =   f 602 602 16 792 path_n_eq eqsel eqjoinsel
#define oid_793 793 // <   f 602 602 16 794 path_n_lt -
#define oid_794 794 // >   f 602 602 16 793 path_n_gt -
#define oid_795 795 // <=   f 602 602 16 796 path_n_le -
#define oid_796 796 // >=   f 602 602 16 795 path_n_ge -
#define oid_797 797 // #   l f 602 23   path_npoints -
#define oid_798 798 // ?#   f 602 602 16   path_inter -
#define oid_799 799 // @-@   l f 602 701   path_length -
#define oid_800 800 // >^   f 603 603 16   box_above_eq positionsel positionjoinsel
#define oid_801 801 // <^   f 603 603 16   box_below_eq positionsel positionjoinsel
#define oid_802 802 // ?#   f 603 603 16   box_overlap areasel areajoinsel
#define oid_803 803 // #   f 603 603 603   box_intersect -
#define oid_804 804 // +   f 603 600 603   box_add -
#define oid_805 805 // -   f 603 600 603   box_sub -
#define oid_806 806 // *   f 603 600 603   box_mul -
#define oid_807 807 // /   f 603 600 603   box_div -
#define oid_808 808 // ?-   f 600 600 16 808 point_horiz -
#define oid_809 809 // ?|   f 600 600 16 809 point_vert -
#define oid_810 810 // pg_client_encoding  12 0 f f s 0 19      pg_client_encoding
#define oid_811 811 // =   704 704 16 811 812 tintervaleq eqsel eqjoinsel
#define oid_812 812 // <>   f 704 704 16 812 811 tintervalne neqsel neqjoinsel
#define oid_813 813 // <   f 704 704 16 814 816 tintervallt scalarltsel scalarltjoinsel
#define oid_814 814 // >   f 704 704 16 813 815 tintervalgt scalargtsel scalargtjoinsel
#define oid_815 815 // <=   f 704 704 16 816 814 tintervalle scalarltsel scalarltjoinsel
#define oid_816 816 // >=   f 704 704 16 815 813 tintervalge scalargtsel scalargtjoinsel
#define oid_817 817 // current_query  12 0 f f f v 0 25       current_query
#define oid_818 818 // +   f 20 21 20 822 int82pl -
#define oid_819 819 // -   f 20 21 20  int82mi -
#define oid_820 820 // *   f 20 21 20 824 int82mul -
#define oid_821 821 // /   f 20 21 20  int82div -
#define oid_822 822 // +   f 21 20 20 818 int28pl -
#define oid_823 823 // -   f 21 20 20  int28mi -
#define oid_824 824 // *   f 21 20 20 820 int28mul -
#define oid_825 825 // /   f 21 20 20  int28div -
#define oid_829 829 // macaddr  6 \054 0 1040 macaddr_in macaddr_out macaddr_recv macaddr_send
#define oid_830 830 // macaddr_eq  12 0 f t 2 16 829 829     macaddr_eq
#define oid_831 831 // macaddr_lt  12 0 f t 2 16 829 829     macaddr_lt
#define oid_832 832 // macaddr_le  12 0 f t 2 16 829 829     macaddr_le
#define oid_833 833 // macaddr_gt  12 0 f t 2 16 829 829     macaddr_gt
#define oid_834 834 // macaddr_ge  12 0 f t 2 16 829 829     macaddr_ge
#define oid_835 835 // macaddr_ne  12 0 f t 2 16 829 829     macaddr_ne
#define oid_836 836 // macaddr_cmp 12 0 f f 2 23 829 829     macaddr_cmp
#define oid_837 837 // int82pl   12 0 f f 2 20 20 21     int82pl
#define oid_838 838 // int82mi   12 0 f f 2 20 20 21     int82mi
#define oid_839 839 // int82mul   12 0 f f 2 20 20 21     int82mul
#define oid_840 840 // int82div   12 0 f f 2 20 20 21     int82div
#define oid_841 841 // int28pl   12 0 f f 2 20 21 20     int28pl
#define oid_842 842 // btint8cmp   12 0 f f 2 23 20 20     btint8cmp
#define oid_843 843 // *   f 790 700 790 845  cash_mul_flt4 -
#define oid_844 844 // /   f 790 700 790   cash_div_flt4 -
#define oid_845 845 // *   f 700 790 790 843  flt4_mul_cash -
#define oid_846 846 // cash_mul_flt4  12 0 f f 2 790 790 700     cash_mul_flt4
#define oid_847 847 // cash_div_flt4  12 0 f f 2 790 790 700     cash_div_flt4
#define oid_848 848 // flt4_mul_cash  12 0 f f 2 790 700 790     flt4_mul_cash
#define oid_849 849 // position   12 0 f f 2 23 25 25     textpos
#define oid_850 850 // textlike   12 0 f f 2 16 25 25     textlike
#define oid_851 851 // textnlike   12 0 f f 2 16 25 25     textnlike
#define oid_852 852 // int48eq   12 0 f t 2 16 23 20     int48eq
#define oid_853 853 // int48ne   12 0 f t 2 16 23 20     int48ne
#define oid_854 854 // int48lt   12 0 f t 2 16 23 20     int48lt
#define oid_855 855 // int48gt   12 0 f t 2 16 23 20     int48gt
#define oid_856 856 // int48le   12 0 f t 2 16 23 20     int48le
#define oid_857 857 // int48ge   12 0 f t 2 16 23 20     int48ge
#define oid_858 858 // namelike   12 0 f f 2 16 19 25     namelike
#define oid_859 859 // namenlike   12 0 f f 2 16 19 25     namenlike
#define oid_860 860 // bpchar   12 0 f f 1042 18     char_bpchar
#define oid_861 861 // current_database  12 0 f f s 0 19      current_database
#define oid_862 862 // int4_mul_cash   12 0 f f 2 790 23 790     int4_mul_cash
#define oid_863 863 // int2_mul_cash   12 0 f f 2 790 21 790     int2_mul_cash
#define oid_864 864 // cash_mul_int4   12 0 f f 2 790 790 23     cash_mul_int4
#define oid_865 865 // cash_div_int4   12 0 f f 2 790 790 23     cash_div_int4
#define oid_866 866 // cash_mul_int2   12 0 f f 2 790 790 21     cash_mul_int2
#define oid_867 867 // cash_div_int2   12 0 f f 2 790 790 21     cash_div_int2
#define oid_868 868 // strpos  12 0 f f 2 23 25 25     textpos
#define oid_869 869 // inet  I t \054 0 1041 inet_in inet_out inet_recv inet_send - m 0
#define oid_870 870 // lower   12 0 f f 25 25     lower
#define oid_871 871 // upper   12 0 f f 25 25     upper
#define oid_872 872 // initcap  12 0 f f 25 25     initcap
#define oid_873 873 // lpad   12 0 f f 3 25 25 23 25     lpad
#define oid_874 874 // rpad   12 0 f f 3 25 25 23 25     rpad
#define oid_875 875 // ltrim   12 0 f f 2 25 25 25     ltrim
#define oid_876 876 // rtrim   12 0 f f 2 25 25 25     rtrim
#define oid_877 877 // substr  12 0 f f 3 25 25 23 23     text_substr
#define oid_878 878 // translate  12 0 f f 3 25 25 25 25     translate
#define oid_879 879 // lpad   14 0 f f 2 25 25 23      select pg_catalog.lpad($1, $2, '' '')
#define oid_880 880 // rpad   14 0 f f 2 25 25 23      select pg_catalog.rpad($1, $2, '' '')
#define oid_881 881 // ltrim   12 0 f f 25 25     ltrim1
#define oid_882 882 // rtrim   12 0 f f 25 25     rtrim1
#define oid_883 883 // substr  12 0 f f 2 25 25 23     text_substr_no_len
#define oid_884 884 // btrim   12 0 f f 2 25 25 25     btrim
#define oid_885 885 // btrim   12 0 f f 25 25     btrim1
#define oid_886 886 // cash_in   12 0 f f s 790 2275     cash_in
#define oid_887 887 // cash_out   12 0 f f s 2275 790     cash_out
#define oid_888 888 // cash_eq   12 0 f t 2 16 790 790     cash_eq
#define oid_889 889 // cash_ne   12 0 f t 2 16 790 790     cash_ne
#define oid_890 890 // cash_lt   12 0 f t 2 16 790 790     cash_lt
#define oid_891 891 // cash_le   12 0 f t 2 16 790 790     cash_le
#define oid_892 892 // cash_gt   12 0 f t 2 16 790 790     cash_gt
#define oid_893 893 // cash_ge   12 0 f t 2 16 790 790     cash_ge
#define oid_894 894 // cash_pl   12 0 f f 2 790 790 790     cash_pl
#define oid_895 895 // cash_mi   12 0 f f 2 790 790 790     cash_mi
#define oid_896 896 // cash_mul_flt8  12 0 f f 2 790 790 701     cash_mul_flt8
#define oid_897 897 // cash_div_flt8  12 0 f f 2 790 790 701     cash_div_flt8
#define oid_898 898 // cashlarger  12 0 f f 2 790 790 790     cashlarger
#define oid_899 899 // cashsmaller  12 0 f f 2 790 790 790     cashsmaller
#define oid_900 900 // =   790 790 16 900 901 cash_eq eqsel eqjoinsel
#define oid_901 901 // <>   f 790 790 16 901 900 cash_ne neqsel neqjoinsel
#define oid_902 902 // <   f 790 790 16 903 905 cash_lt scalarltsel scalarltjoinsel
#define oid_903 903 // >   f 790 790 16 902 904 cash_gt scalargtsel scalargtjoinsel
#define oid_904 904 // <=   f 790 790 16 905 903 cash_le scalarltsel scalarltjoinsel
#define oid_905 905 // >=   f 790 790 16 904 902 cash_ge scalargtsel scalargtjoinsel
#define oid_906 906 // +   f 790 790 790 906  cash_pl -
#define oid_907 907 // -   f 790 790 790   cash_mi -
#define oid_908 908 // *   f 790 701 790 916  cash_mul_flt8 -
#define oid_909 909 // /   f 790 701 790   cash_div_flt8 -
#define oid_910 910 // inet_in  12 0 f f 869 2275     inet_in
#define oid_911 911 // inet_out  12 0 f f 2275 869     inet_out
#define oid_912 912 // *   f 790 23 790 917  cash_mul_int4 -
#define oid_913 913 // /   f 790 23 790   cash_div_int4 -
#define oid_914 914 // *   f 790 21 790 918  cash_mul_int2 -
#define oid_915 915 // /   f 790 21 790   cash_div_int2 -
#define oid_916 916 // *   f 701 790 790 908  flt8_mul_cash -
#define oid_917 917 // *   f 23 790 790 912  int4_mul_cash -
#define oid_918 918 // *   f 21 790 790 914  int2_mul_cash -
#define oid_919 919 // flt8_mul_cash  12 0 f f 2 790 701 790     flt8_mul_cash
#define oid_920 920 // network_eq  12 0 f t 2 16 869 869     network_eq
#define oid_921 921 // network_lt  12 0 f t 2 16 869 869     network_lt
#define oid_922 922 // network_le  12 0 f t 2 16 869 869     network_le
#define oid_923 923 // network_gt  12 0 f t 2 16 869 869     network_gt
#define oid_924 924 // network_ge  12 0 f t 2 16 869 869     network_ge
#define oid_925 925 // network_ne  12 0 f t 2 16 869 869     network_ne
#define oid_926 926 // network_cmp 12 0 f f 2 23 869 869     network_cmp
#define oid_927 927 // network_sub 12 0 f f 2 16 869 869     network_sub
#define oid_928 928 // network_subeq 12 0 f f 2 16 869 869     network_subeq
#define oid_929 929 // network_sup 12 0 f f 2 16 869 869     network_sup
#define oid_930 930 // network_supeq 12 0 f f 2 16 869 869     network_supeq
#define oid_931 931 // <<   f 869 869 16 933 network_sub networksel networkjoinsel
#define oid_932 932 // <<=   f 869 869 16 934 network_subeq networksel networkjoinsel
#define oid_933 933 // >>   f 869 869 16 931 network_sup networksel networkjoinsel
#define oid_934 934 // >>=   f 869 869 16 932 network_supeq networksel networkjoinsel
#define oid_935 935 // cash_words  12 0 f f 25 790     cash_words
#define oid_936 936 // substring  12 0 f f 3 25 25 23 23     text_substr
#define oid_937 937 // substring  12 0 f f 2 25 25 23     text_substr_no_len
#define oid_938 938 // generate_series 12 1000 0 f f t 3 1114 1114 1114 1186     generate_series_timestamp
#define oid_939 939 // generate_series 12 1000 0 f f t s 3 1184 1184 1184 1186     generate_series_timestamptz
#define oid_940 940 // mod   12 0 f f 2 21 21 21     int2mod
#define oid_941 941 // mod   12 0 f f 2 23 23 23     int4mod
#define oid_942 942 // int28mi   12 0 f f 2 20 21 20     int28mi
#define oid_943 943 // int28mul   12 0 f f 2 20 21 20     int28mul
#define oid_944 944 // char   12 0 f f 18 25     text_char
#define oid_945 945 // int8mod   12 0 f f 2 20 20 20     int8mod
#define oid_946 946 // text   12 0 f f 25 18     char_text
#define oid_947 947 // mod   12 0 f f 2 20 20 20     int8mod
#define oid_948 948 // int28div   12 0 f f 2 20 21 20     int28div
#define oid_949 949 // hashint8   12 0 f f 23 20     hashint8
#define oid_950 950 // C  C  C
#define oid_951 951 // POSIX  POSIX  POSIX
#define oid_952 952 // lo_open   12 0 f f v 2 23 26 23     lo_open
#define oid_953 953 // lo_close   12 0 f f v 23 23     lo_close
#define oid_954 954 // loread   12 0 f f v 2 17 23 23     loread
#define oid_955 955 // lowrite   12 0 f f v 2 23 23 17     lowrite
#define oid_956 956 // lo_lseek   12 0 f f v 3 23 23 23 23     lo_lseek
#define oid_957 957 // lo_creat   12 0 f f v 26 23     lo_creat
#define oid_958 958 // lo_tell   12 0 f f v 23 23     lo_tell
#define oid_959 959 // on_pl   12 0 f f 2 16 600 628     on_pl
#define oid_960 960 // on_sl   12 0 f f 2 16 601 628     on_sl
#define oid_961 961 // close_pl   12 0 f f 2 600 600 628     close_pl
#define oid_962 962 // close_sl   12 0 f f 2 600 601 628     close_sl
#define oid_963 963 // close_lb   12 0 f f 2 600 628 603     close_lb
#define oid_964 964 // lo_unlink   12 0 f f v 23 26     lo_unlink
#define oid_965 965 // ^   f 701 701 701 0 dpow -
#define oid_966 966 // +   f 1034 1033 1034 0 aclinsert -
#define oid_967 967 // -   f 1034 1033 1034 0 aclremove -
#define oid_968 968 // @>   f 1034 1033 16 0 aclcontains -
#define oid_969 969 // @@   l f 601 600   lseg_center -
#define oid_970 970 // @@   l f 602 600   path_center -
#define oid_971 971 // @@   l f 604 600   poly_center -
#define oid_972 972 // btvacuumcleanup  12 0 f f v 2 2281 2281 2281     btvacuumcleanup
#define oid_973 973 // path_inter   12 0 f f 2 16 602 602     path_inter
#define oid_974 974 // =   1033 1033 16 974 aclitemeq eqsel eqjoinsel
#define oid_975 975 // area   12 0 f f 701 603     box_area
#define oid_976 976 // width   12 0 f f 701 603     box_width
#define oid_977 977 // height   12 0 f f 701 603     box_height
#define oid_978 978 // box_distance  12 0 f f 2 701 603 603     box_distance
#define oid_979 979 // area   12 0 f f 701 602     path_area
#define oid_980 980 // box_intersect  12 0 f f 2 603 603 603     box_intersect
#define oid_981 981 // diagonal   12 0 f f 601 603     box_diagonal
#define oid_982 982 // path_n_lt   12 0 f f 2 16 602 602     path_n_lt
#define oid_983 983 // path_n_gt   12 0 f f 2 16 602 602     path_n_gt
#define oid_984 984 // path_n_eq   12 0 f f 2 16 602 602     path_n_eq
#define oid_985 985 // path_n_le   12 0 f f 2 16 602 602     path_n_le
#define oid_986 986 // path_n_ge   12 0 f f 2 16 602 602     path_n_ge
#define oid_987 987 // path_length  12 0 f f 701 602     path_length
#define oid_988 988 // point_ne   12 0 f f 2 16 600 600     point_ne
#define oid_989 989 // point_vert   12 0 f f 2 16 600 600     point_vert
#define oid_990 990 // point_horiz  12 0 f f 2 16 600 600     point_horiz
#define oid_991 991 // point_distance  12 0 f f 2 701 600 600     point_distance
#define oid_992 992 // slope   12 0 f f 2 701 600 600     point_slope
#define oid_993 993 // lseg   12 0 f f 2 601 600 600     lseg_construct
#define oid_994 994 // lseg_intersect  12 0 f f 2 16 601 601     lseg_intersect
#define oid_995 995 // lseg_parallel  12 0 f f 2 16 601 601     lseg_parallel
#define oid_996 996 // lseg_perp   12 0 f f 2 16 601 601     lseg_perp
#define oid_997 997 // lseg_vertical  12 0 f f 16 601     lseg_vertical
#define oid_998 998 // lseg_horizontal  12 0 f f 16 601     lseg_horizontal
#define oid_999 999 // lseg_eq   12 0 f t 2 16 601 601     lseg_eq
#define oid_1000 1000 // _bool  A \054 16 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1001 1001 // _bytea A \054 17 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1002 1002 // _char  A \054 18 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1003 1003 // _name  A \054 19 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1004 1004 // lo_truncate  12 0 f f v 2 23 23 23     lo_truncate
#define oid_1005 1005 // _int2  A \054 21 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1006 1006 // _int2vector A \054 22 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1007 1007 // _int4  A \054 23 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1008 1008 // _regproc A \054 24 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1009 1009 // _text  A \054 25 array_in array_out array_recv array_send - array_typanalyze x 100
#define oid_1010 1010 // _tid  A \054 27 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1011 1011 // _xid  A \054 28 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1012 1012 // _cid  A \054 29 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1013 1013 // _oidvector A \054 30 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1014 1014 // _bpchar A \054 1042 array_in array_out array_recv array_send bpchartypmodin bpchartypmodout array_typanalyze x 100
#define oid_1015 1015 // _varchar A \054 1043 array_in array_out array_recv array_send varchartypmodin varchartypmodout array_typanalyze x 100
#define oid_1016 1016 // _int8  A \054 20 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_1017 1017 // _point A \054 600 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_1018 1018 // _lseg  A \054 601 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_1019 1019 // _path  A \054 602 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_1020 1020 // _box  A \073 603 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_1021 1021 // _float4 A \054 700 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1022 1022 // _float8 A \054 701 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_1023 1023 // _abstime A \054 702 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1024 1024 // _reltime A \054 703 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1025 1025 // _tinterval A \054 704 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1026 1026 // timezone   12 0 timestamp_izone_transform f f 2 1114 1186 1184     timestamptz_izone
#define oid_1027 1027 // _polygon A \054 604 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_1028 1028 // _oid  A \054 26 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1029 1029 // 783 point_ops
#define oid_1030 1030 // gist_point_compress 12 0 f f 2281 2281     gist_point_compress
#define oid_1031 1031 // aclitemin   12 0 f f s 1033 2275     aclitemin
#define oid_1032 1032 // aclitemout  12 0 f f s 2275 1033     aclitemout
#define oid_1033 1033 // aclitem 12 \054 0 1034 aclitemin aclitemout -
#define oid_1034 1034 // _aclitem A \054 1033 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1035 1035 // aclinsert   12 0 f f 2 1034 1034 1033     aclinsert
#define oid_1036 1036 // aclremove   12 0 f f 2 1034 1034 1033     aclremove
#define oid_1037 1037 // aclcontains  12 0 f f 2 16 1034 1033     aclcontains
#define oid_1038 1038 // ^   f 1700 1700 1700  0 numeric_power -
#define oid_1039 1039 // getdatabaseencoding  12 0 f f s 0 19      getdatabaseencoding
#define oid_1040 1040 // _macaddr A \054 829 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1041 1041 // _inet  A \054 869 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1042 1042 // bpchar  \054 0 1014 bpcharin bpcharout bpcharrecv bpcharsend bpchartypmodin bpchartypmodout x 100
#define oid_1043 1043 // varchar \054 0 1015 varcharin varcharout varcharrecv varcharsend varchartypmodin varchartypmodout x 100
#define oid_1044 1044 // bpcharin   12 0 f f 3 1042 2275 26 23     bpcharin
#define oid_1045 1045 // bpcharout   12 0 f f 2275 1042     bpcharout
#define oid_1046 1046 // varcharin   12 0 f f 3 1043 2275 26 23     varcharin
#define oid_1047 1047 // varcharout  12 0 f f 2275 1043     varcharout
#define oid_1048 1048 // bpchareq   12 0 f t 2 16 1042 1042     bpchareq
#define oid_1049 1049 // bpcharlt   12 0 f f 2 16 1042 1042     bpcharlt
#define oid_1050 1050 // bpcharle   12 0 f f 2 16 1042 1042     bpcharle
#define oid_1051 1051 // bpchargt   12 0 f f 2 16 1042 1042     bpchargt
#define oid_1052 1052 // bpcharge   12 0 f f 2 16 1042 1042     bpcharge
#define oid_1053 1053 // bpcharne   12 0 f t 2 16 1042 1042     bpcharne
#define oid_1054 1054 // =   t 1042 1042 16 1054 1057 bpchareq eqsel eqjoinsel
#define oid_1055 1055 // ~   f 1042 25 16  1056 bpcharregexeq regexeqsel regexeqjoinsel
#define oid_1056 1056 // !~   f 1042 25 16  1055 bpcharregexne regexnesel regexnejoinsel
#define oid_1057 1057 // <>   f 1042 1042 16 1057 1054 bpcharne neqsel neqjoinsel
#define oid_1058 1058 // <   f 1042 1042 16 1060 1061 bpcharlt scalarltsel scalarltjoinsel
#define oid_1059 1059 // <=   f 1042 1042 16 1061 1060 bpcharle scalarltsel scalarltjoinsel
#define oid_1060 1060 // >   f 1042 1042 16 1058 1059 bpchargt scalargtsel scalargtjoinsel
#define oid_1061 1061 // >=   f 1042 1042 16 1059 1058 bpcharge scalargtsel scalargtjoinsel
#define oid_1062 1062 // aclitemeq   12 0 f f 2 16 1033 1033     aclitem_eq
#define oid_1063 1063 // bpchar_larger  12 0 f f 2 1042 1042 1042     bpchar_larger
#define oid_1064 1064 // bpchar_smaller  12 0 f f 2 1042 1042 1042     bpchar_smaller
#define oid_1065 1065 // pg_prepared_xact 12 1000 0 f f t v 0 2249   {28,25,1184,26,26}  {o,o,o,o,o}  {transaction,gid,prepared,ownerid,dbid}  pg_prepared_xact
#define oid_1066 1066 // generate_series 12 1000 0 f f t 3 23 23 23 23     generate_series_step_int4
#define oid_1067 1067 // generate_series 12 1000 0 f f t 2 23 23 23     generate_series_int4
#define oid_1068 1068 // generate_series 12 1000 0 f f t 3 20 20 20 20     generate_series_step_int8
#define oid_1069 1069 // generate_series 12 1000 0 f f t 2 20 20 20     generate_series_int8
#define oid_1070 1070 // =   t 2277 2277 16 1070 1071 array_eq eqsel eqjoinsel
#define oid_1071 1071 // <>   f 2277 2277 16 1071 1070 array_ne neqsel neqjoinsel
#define oid_1072 1072 // <   f 2277 2277 16 1073 1075 array_lt scalarltsel scalarltjoinsel
#define oid_1073 1073 // >   f 2277 2277 16 1072 1074 array_gt scalargtsel scalargtjoinsel
#define oid_1074 1074 // <=   f 2277 2277 16 1075 1073 array_le scalarltsel scalarltjoinsel
#define oid_1075 1075 // >=   f 2277 2277 16 1074 1072 array_ge scalargtsel scalargtjoinsel
#define oid_1076 1076 // +   f 1082 1186 1114 2551 date_pl_interval -
#define oid_1077 1077 // -   f 1082 1186 1114 0 date_mi_interval -
#define oid_1078 1078 // bpcharcmp   12 0 f f 2 23 1042 1042     bpcharcmp
#define oid_1079 1079 // regclass  12 0 f f s 2205 25     text_regclass
#define oid_1080 1080 // hashbpchar  12 0 f f 23 1042     hashbpchar
#define oid_1081 1081 // format_type  12 0 f f f s 2 25 26 23     format_type
#define oid_1082 1082 // date  4 D \054 0 1182 date_in date_out date_recv date_send
#define oid_1083 1083 // time  8 FLOAT8PASSBYVAL D \054 0 1183 time_in time_out time_recv time_send timetypmodin timetypmodout d p 0
#define oid_1084 1084 // date_in   12 0 f f s 1082 2275     date_in
#define oid_1085 1085 // date_out   12 0 f f s 2275 1082     date_out
#define oid_1086 1086 // date_eq   12 0 f t 2 16 1082 1082     date_eq
#define oid_1087 1087 // date_lt   12 0 f t 2 16 1082 1082     date_lt
#define oid_1088 1088 // date_le   12 0 f t 2 16 1082 1082     date_le
#define oid_1089 1089 // date_gt   12 0 f t 2 16 1082 1082     date_gt
#define oid_1090 1090 // date_ge   12 0 f t 2 16 1082 1082     date_ge
#define oid_1091 1091 // date_ne   12 0 f t 2 16 1082 1082     date_ne
#define oid_1092 1092 // date_cmp   12 0 f f 2 23 1082 1082     date_cmp
#define oid_1093 1093 // =   t 1082 1082  16 1093 1094 date_eq eqsel eqjoinsel
#define oid_1094 1094 // <>   f 1082 1082  16 1094 1093 date_ne neqsel neqjoinsel
#define oid_1095 1095 // <   f 1082 1082  16 1097 1098 date_lt scalarltsel scalarltjoinsel
#define oid_1096 1096 // <=   f 1082 1082  16 1098 1097 date_le scalarltsel scalarltjoinsel
#define oid_1097 1097 // >   f 1082 1082  16 1095 1096 date_gt scalargtsel scalargtjoinsel
#define oid_1098 1098 // >=   f 1082 1082  16 1096 1095 date_ge scalargtsel scalargtjoinsel
#define oid_1099 1099 // -   f 1082 1082  23 0 date_mi -
#define oid_1100 1100 // +   f 1082  23 1082 2555 date_pli -
#define oid_1101 1101 // -   f 1082  23 1082 0 date_mii -
#define oid_1102 1102 // time_lt   12 0 f t 2 16 1083 1083     time_lt
#define oid_1103 1103 // time_le   12 0 f t 2 16 1083 1083     time_le
#define oid_1104 1104 // time_gt   12 0 f t 2 16 1083 1083     time_gt
#define oid_1105 1105 // time_ge   12 0 f t 2 16 1083 1083     time_ge
#define oid_1106 1106 // time_ne   12 0 f t 2 16 1083 1083     time_ne
#define oid_1107 1107 // time_cmp   12 0 f f 2 23 1083 1083     time_cmp
#define oid_1108 1108 // =   t 1083 1083 16 1108 1109 time_eq eqsel eqjoinsel
#define oid_1109 1109 // <>   f 1083 1083 16 1109 1108 time_ne neqsel neqjoinsel
#define oid_1110 1110 // <   f 1083 1083 16 1112 1113 time_lt scalarltsel scalarltjoinsel
#define oid_1111 1111 // <=   f 1083 1083 16 1113 1112 time_le scalarltsel scalarltjoinsel
#define oid_1112 1112 // >   f 1083 1083 16 1110 1111 time_gt scalargtsel scalargtjoinsel
#define oid_1113 1113 // >=   f 1083 1083 16 1111 1110 time_ge scalargtsel scalargtjoinsel
#define oid_1114 1114 // timestamp 8 FLOAT8PASSBYVAL D \054 0 1115 timestamp_in timestamp_out timestamp_recv timestamp_send timestamptypmodin timestamptypmodout d p 0
#define oid_1115 1115 // _timestamp A \054 1114 array_in array_out array_recv array_send timestamptypmodin timestamptypmodout array_typanalyze d x 0
#define oid_1116 1116 // +  f 700 701 701 1126 float48pl -
#define oid_1117 1117 // -  f 700 701 701  float48mi -
#define oid_1118 1118 // /  f 700 701 701  float48div -
#define oid_1119 1119 // *  f 700 701 701 1129 float48mul -
#define oid_1120 1120 // =  t 700 701 16 1130 1121 float48eq eqsel eqjoinsel
#define oid_1121 1121 // <>  f 700 701 16 1131 1120 float48ne neqsel neqjoinsel
#define oid_1122 1122 // <  f 700 701 16 1133 1125 float48lt scalarltsel scalarltjoinsel
#define oid_1123 1123 // >  f 700 701 16 1132 1124 float48gt scalargtsel scalargtjoinsel
#define oid_1124 1124 // <=  f 700 701 16 1135 1123 float48le scalarltsel scalarltjoinsel
#define oid_1125 1125 // >=  f 700 701 16 1134 1122 float48ge scalargtsel scalargtjoinsel
#define oid_1126 1126 // +  f 701 700 701 1116 float84pl -
#define oid_1127 1127 // -  f 701 700 701  float84mi -
#define oid_1128 1128 // /  f 701 700 701  float84div -
#define oid_1129 1129 // *  f 701 700 701 1119 float84mul -
#define oid_1130 1130 // =  t 701 700 16 1120 1131 float84eq eqsel eqjoinsel
#define oid_1131 1131 // <>  f 701 700 16 1121 1130 float84ne neqsel neqjoinsel
#define oid_1132 1132 // <  f 701 700 16 1123 1135 float84lt scalarltsel scalarltjoinsel
#define oid_1133 1133 // >  f 701 700 16 1122 1134 float84gt scalargtsel scalargtjoinsel
#define oid_1134 1134 // <=  f 701 700 16 1125 1133 float84le scalarltsel scalarltjoinsel
#define oid_1135 1135 // >=  f 701 700 16 1124 1132 float84ge scalargtsel scalargtjoinsel
#define oid_1138 1138 // date_larger  12 0 f f 2 1082 1082 1082     date_larger
#define oid_1139 1139 // date_smaller  12 0 f f 2 1082 1082 1082     date_smaller
#define oid_1140 1140 // date_mi   12 0 f f 2 23 1082 1082     date_mi
#define oid_1141 1141 // date_pli   12 0 f f 2 1082 1082 23     date_pli
#define oid_1142 1142 // date_mii   12 0 f f 2 1082 1082 23     date_mii
#define oid_1143 1143 // time_in   12 0 f f s 3 1083 2275 26 23     time_in
#define oid_1144 1144 // time_out   12 0 f f 2275 1083     time_out
#define oid_1145 1145 // time_eq   12 0 f t 2 16 1083 1083     time_eq
#define oid_1146 1146 // circle_add_pt  12 0 f f 2 718 718 600     circle_add_pt
#define oid_1147 1147 // circle_sub_pt  12 0 f f 2 718 718 600     circle_sub_pt
#define oid_1148 1148 // circle_mul_pt  12 0 f f 2 718 718 600     circle_mul_pt
#define oid_1149 1149 // circle_div_pt  12 0 f f 2 718 718 600     circle_div_pt
#define oid_1150 1150 // timestamptz_in  12 0 f f s 3 1184 2275 26 23     timestamptz_in
#define oid_1151 1151 // timestamptz_out 12 0 f f s 2275 1184     timestamptz_out
#define oid_1152 1152 // timestamptz_eq  12 0 f t 2 16 1184 1184     timestamp_eq
#define oid_1153 1153 // timestamptz_ne  12 0 f t 2 16 1184 1184     timestamp_ne
#define oid_1154 1154 // timestamptz_lt  12 0 f t 2 16 1184 1184     timestamp_lt
#define oid_1155 1155 // timestamptz_le  12 0 f t 2 16 1184 1184     timestamp_le
#define oid_1156 1156 // timestamptz_ge  12 0 f t 2 16 1184 1184     timestamp_ge
#define oid_1157 1157 // timestamptz_gt  12 0 f t 2 16 1184 1184     timestamp_gt
#define oid_1158 1158 // to_timestamp  14 0 f f 1184 701      select (''epoch''::pg_catalog.timestamptz + $1 * ''1 second''::pg_catalog.interval)
#define oid_1159 1159 // timezone   12 0 timestamp_zone_transform f f 2 1114 25 1184     timestamptz_zone
#define oid_1160 1160 // interval_in  12 0 f f s 3 1186 2275 26 23     interval_in
#define oid_1161 1161 // interval_out  12 0 f f 2275 1186     interval_out
#define oid_1162 1162 // interval_eq  12 0 f t 2 16 1186 1186     interval_eq
#define oid_1163 1163 // interval_ne  12 0 f t 2 16 1186 1186     interval_ne
#define oid_1164 1164 // interval_lt  12 0 f t 2 16 1186 1186     interval_lt
#define oid_1165 1165 // interval_le  12 0 f t 2 16 1186 1186     interval_le
#define oid_1166 1166 // interval_ge  12 0 f t 2 16 1186 1186     interval_ge
#define oid_1167 1167 // interval_gt  12 0 f t 2 16 1186 1186     interval_gt
#define oid_1168 1168 // interval_um  12 0 f f 1186 1186     interval_um
#define oid_1169 1169 // interval_pl  12 0 f f 2 1186 1186 1186     interval_pl
#define oid_1170 1170 // interval_mi  12 0 f f 2 1186 1186 1186     interval_mi
#define oid_1171 1171 // date_part   12 0 f f s 2 701 25 1184     timestamptz_part
#define oid_1172 1172 // date_part   12 0 f f 2 701 25 1186     interval_part
#define oid_1173 1173 // timestamptz  12 0 f f 1184 702     abstime_timestamptz
#define oid_1174 1174 // timestamptz  12 0 f f s 1184 1082     date_timestamptz
#define oid_1175 1175 // justify_hours  12 0 f f 1186 1186     interval_justify_hours
#define oid_1176 1176 // timestamptz  14 0 f f s 2 1184 1082 1083      select cast(($1 + $2) as timestamp with time zone)
#define oid_1177 1177 // interval   12 0 f f 1186 703     reltime_interval
#define oid_1178 1178 // date   12 0 f f s 1082 1184     timestamptz_date
#define oid_1179 1179 // date   12 0 f f s 1082 702     abstime_date
#define oid_1180 1180 // abstime   12 0 f f 702 1184     timestamptz_abstime
#define oid_1181 1181 // age   12 0 f f s 23 28     xid_age
#define oid_1182 1182 // _date  A \054 1082 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1183 1183 // _time  A \054 1083 array_in array_out array_recv array_send timetypmodin timetypmodout array_typanalyze d x 0
#define oid_1184 1184 // timestamptz 8 FLOAT8PASSBYVAL D t \054 0 1185 timestamptz_in timestamptz_out timestamptz_recv timestamptz_send timestamptztypmodin timestamptztypmodout d p 0
#define oid_1185 1185 // _timestamptz A \054 1184 array_in array_out array_recv array_send timestamptztypmodin timestamptztypmodout array_typanalyze d x 0
#define oid_1186 1186 // interval 16 T t \054 0 1187 interval_in interval_out interval_recv interval_send intervaltypmodin intervaltypmodout d p 0
#define oid_1187 1187 // _interval A \054 1186 array_in array_out array_recv array_send intervaltypmodin intervaltypmodout array_typanalyze d x 0
#define oid_1188 1188 // timestamptz_mi  12 0 f f 2 1186 1184 1184     timestamp_mi
#define oid_1189 1189 // timestamptz_pl_interval 12 0 f f s 2 1184 1184 1186     timestamptz_pl_interval
#define oid_1190 1190 // timestamptz_mi_interval 12 0 f f s 2 1184 1184 1186     timestamptz_mi_interval
#define oid_1191 1191 // generate_subscripts 12 1000 0 f f t 3 23 2277 23 16     generate_subscripts
#define oid_1192 1192 // generate_subscripts 12 1000 0 f f t 2 23 2277 23     generate_subscripts_nodir
#define oid_1193 1193 // array_fill 12 0 f f f 2 2277 2283 1007     array_fill
#define oid_1194 1194 // reltime  12 0 f f 703 1186     interval_reltime
#define oid_1195 1195 // timestamptz_smaller 12 0 f f 2 1184 1184 1184     timestamp_smaller
#define oid_1196 1196 // timestamptz_larger 12 0 f f 2 1184 1184 1184     timestamp_larger
#define oid_1197 1197 // interval_smaller 12 0 f f 2 1186 1186 1186     interval_smaller
#define oid_1198 1198 // interval_larger 12 0 f f 2 1186 1186 1186     interval_larger
#define oid_1199 1199 // age  12 0 f f 2 1186 1184 1184     timestamptz_age
#define oid_1200 1200 // interval  12 0 interval_transform f f 2 1186 1186 23     interval_scale
#define oid_1201 1201 // =   t 869 869 16 1201 1202 network_eq eqsel eqjoinsel
#define oid_1202 1202 // <>   f 869 869 16 1202 1201 network_ne neqsel neqjoinsel
#define oid_1203 1203 // <   f 869 869 16 1205 1206 network_lt scalarltsel scalarltjoinsel
#define oid_1204 1204 // <=   f 869 869 16 1206 1205 network_le scalarltsel scalarltjoinsel
#define oid_1205 1205 // >   f 869 869 16 1203 1204 network_gt scalargtsel scalargtjoinsel
#define oid_1206 1206 // >=   f 869 869 16 1204 1203 network_ge scalargtsel scalargtjoinsel
#define oid_1207 1207 // ~~  f 19 25 16 1208 namelike likesel likejoinsel
#define oid_1208 1208 // !~~  f 19 25 16 1207 namenlike nlikesel nlikejoinsel
#define oid_1209 1209 // ~~  f 25 25 16 1210 textlike likesel likejoinsel
#define oid_1210 1210 // !~~  f 25 25 16 1209 textnlike nlikesel nlikejoinsel
#define oid_1211 1211 // ~~  f 1042 25 16 1212 bpcharlike likesel likejoinsel
#define oid_1212 1212 // !~~  f 1042 25 16 1211 bpcharnlike nlikesel nlikejoinsel
#define oid_1215 1215 // obj_description 14 100 0 f f s 2 25 26 19      select description from pg_catalog.pg_description where objoid = $1 and classoid = (select oid from pg_catalog.pg_class where relname = $2 and relnamespace = PGNSP) and objsubid = 0
#define oid_1216 1216 // col_description 14 100 0 f f s 2 25 26 23      select description from pg_catalog.pg_description where objoid = $1 and classoid = ''pg_catalog.pg_class''::pg_catalog.regclass and objsubid = $2
#define oid_1217 1217 // date_trunc  12 0 f f s 2 1184 25 1184     timestamptz_trunc
#define oid_1218 1218 // date_trunc  12 0 f f 2 1186 25 1186     interval_trunc
#define oid_1219 1219 // int8inc   12 0 f f 20 20     int8inc
#define oid_1220 1220 // =   t 829 829 16 1220 1221 macaddr_eq eqsel eqjoinsel
#define oid_1221 1221 // <>   f 829 829 16 1221 1220 macaddr_ne neqsel neqjoinsel
#define oid_1222 1222 // <   f 829 829 16 1224 1225 macaddr_lt scalarltsel scalarltjoinsel
#define oid_1223 1223 // <=   f 829 829 16 1225 1224 macaddr_le scalarltsel scalarltjoinsel
#define oid_1224 1224 // >   f 829 829 16 1222 1223 macaddr_gt scalargtsel scalargtjoinsel
#define oid_1225 1225 // >=   f 829 829 16 1223 1222 macaddr_ge scalargtsel scalargtjoinsel
#define oid_1226 1226 // ~*  f 19 25 16 1227 nameicregexeq icregexeqsel icregexeqjoinsel
#define oid_1227 1227 // !~*  f 19 25 16 1226 nameicregexne icregexnesel icregexnejoinsel
#define oid_1228 1228 // ~*  f 25 25 16 1229 texticregexeq icregexeqsel icregexeqjoinsel
#define oid_1229 1229 // !~*  f 25 25 16 1228 texticregexne icregexnesel icregexnejoinsel
#define oid_1230 1230 // int8abs   12 0 f f 20 20     int8abs
#define oid_1231 1231 // _numeric A \054 1700 array_in array_out array_recv array_send numerictypmodin numerictypmodout array_typanalyze x 0
#define oid_1234 1234 // ~*  f 1042 25 16 1235 bpcharicregexeq icregexeqsel icregexeqjoinsel
#define oid_1235 1235 // !~*  f 1042 25 16 1234 bpcharicregexne icregexnesel icregexnejoinsel
#define oid_1236 1236 // int8larger  12 0 f f 2 20 20 20     int8larger
#define oid_1237 1237 // int8smaller  12 0 f f 2 20 20 20     int8smaller
#define oid_1238 1238 // texticregexeq  12 0 f f 2 16 25 25     texticregexeq
#define oid_1239 1239 // texticregexne  12 0 f f 2 16 25 25     texticregexne
#define oid_1240 1240 // nameicregexeq  12 0 f f 2 16 19 25     nameicregexeq
#define oid_1241 1241 // nameicregexne  12 0 f f 2 16 19 25     nameicregexne
#define oid_1242 1242 // boolin   12 0 f f 16 2275     boolin
#define oid_1243 1243 // boolout   12 0 f f 2275 16     boolout
#define oid_1244 1244 // byteain   12 0 f f 17 2275     byteain
#define oid_1245 1245 // charin   12 0 f f 18 2275     charin
#define oid_1246 1246 // charlt   12 0 f t 2 16 18 18     charlt
#define oid_1247 1247 // pg_type 71 0 0 0 f p r 30 f f n 3
#define oid_1249 1249 // pg_attribute 75 0 0 0 f p r 21 f f f n 3
#define oid_1250 1250 // unique_key_recheck 12 0 f f v 0 2279      unique_key_recheck
#define oid_1251 1251 // int4abs   12 0 f f 23 23     int4abs
#define oid_1252 1252 // nameregexne  12 0 f f 2 16 19 25     nameregexne
#define oid_1253 1253 // int2abs   12 0 f f 21 21     int2abs
#define oid_1254 1254 // textregexeq  12 0 f f 2 16 25 25     textregexeq
#define oid_1255 1255 // pg_proc 81 0 0 0 f p r 27 f f n 3
#define oid_1256 1256 // textregexne  12 0 f f 2 16 25 25     textregexne
#define oid_1257 1257 // textlen   12 0 f f 23 25     textlen
#define oid_1258 1258 // textcat   12 0 f f 2 25 25 25     textcat
#define oid_1259 1259 // pg_class 83 0 0 0 f p r 30 f f n 3
#define oid_1263 1263 // _cstring A \054 2275 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_1264 1264 // pg_char_to_encoding  12 0 f f s 23 19     PG_char_to_encoding
#define oid_1265 1265 // tidne   12 0 f t 2 16 27 27     tidne
#define oid_1266 1266 // timetz  12 D \054 0 1270 timetz_in timetz_out timetz_recv timetz_send timetztypmodin timetztypmodout d p 0
#define oid_1267 1267 // cidr_in  12 0 f f 650 2275     cidr_in
#define oid_1268 1268 // btcostestimate  12 0 f f v 7 2278 2281 2281 2281 2281 2281 2281 2281     btcostestimate
#define oid_1269 1269 // pg_column_size 12 0 f f s 23 2276     pg_column_size
#define oid_1270 1270 // _timetz A \054 1266 array_in array_out array_recv array_send timetztypmodin timetztypmodout array_typanalyze d x 0
#define oid_1271 1271 // overlaps   12 0 f f f 4 16 1266 1266 1266 1266     overlaps_timetz
#define oid_1272 1272 // datetime_pl  12 0 f f 2 1114 1082 1083     datetime_timestamp
#define oid_1273 1273 // date_part   12 0 f f 2 701 25 1266     timetz_part
#define oid_1274 1274 // int84pl   12 0 f f 2 20 20 23     int84pl
#define oid_1275 1275 // int84mi   12 0 f f 2 20 20 23     int84mi
#define oid_1276 1276 // int84mul   12 0 f f 2 20 20 23     int84mul
#define oid_1277 1277 // int84div   12 0 f f 2 20 20 23     int84div
#define oid_1278 1278 // int48pl   12 0 f f 2 20 23 20     int48pl
#define oid_1279 1279 // int48mi   12 0 f f 2 20 23 20     int48mi
#define oid_1280 1280 // int48mul   12 0 f f 2 20 23 20     int48mul
#define oid_1281 1281 // int48div   12 0 f f 2 20 23 20     int48div
#define oid_1282 1282 // quote_ident  12 0 f f 25 25     quote_ident
#define oid_1283 1283 // quote_literal  12 0 f f 25 25     quote_literal
#define oid_1284 1284 // |   l f 704 702  tintervalstart -
#define oid_1285 1285 // quote_literal  14 0 f f s 25 2283      select pg_catalog.quote_literal($1::pg_catalog.text)
#define oid_1286 1286 // array_fill 12 0 f f f 3 2277 2283 1007 1007     array_fill_with_lower_bounds
#define oid_1287 1287 // oid   12 0 f f 26 20     i8tooid
#define oid_1288 1288 // int8   12 0 f f 20 26     oidtoi8
#define oid_1289 1289 // quote_nullable  12 0 f f f 25 25     quote_nullable
#define oid_1290 1290 // quote_nullable  14 0 f f f s 25 2283      select pg_catalog.quote_nullable($1::pg_catalog.text)
#define oid_1291 1291 // suppress_redundant_updates_trigger 12 0 f f v 0 2279      suppress_redundant_updates_trigger
#define oid_1292 1292 // tideq   12 0 f t 2 16 27 27     tideq
#define oid_1293 1293 // currtid   12 0 f f v 2 27 26 27     currtid_byreloid
#define oid_1294 1294 // currtid2   12 0 f f v 2 27 25 27     currtid_byrelname
#define oid_1295 1295 // justify_days  12 0 f f 1186 1186     interval_justify_days
#define oid_1296 1296 // timedate_pl  14 0 f f 2 1114 1083 1082      select ($2 + $1)
#define oid_1297 1297 // datetimetz_pl  12 0 f f 2 1184 1082 1266     datetimetz_timestamptz
#define oid_1298 1298 // timetzdate_pl  14 0 f f 2 1184 1266 1082      select ($2 + $1)
#define oid_1299 1299 // now   12 0 f f s 0 1184      now
#define oid_1300 1300 // positionsel   12 0 f f s 4 701 2281 26 2281 23     positionsel
#define oid_1301 1301 // positionjoinsel  12 0 f f s 5 701 2281 26 2281 21 2281     positionjoinsel
#define oid_1302 1302 // contsel   12 0 f f s 4 701 2281 26 2281 23     contsel
#define oid_1303 1303 // contjoinsel  12 0 f f s 5 701 2281 26 2281 21 2281     contjoinsel
#define oid_1304 1304 // overlaps  12 0 f f f 4 16 1184 1184 1184 1184     overlaps_timestamp
#define oid_1305 1305 // overlaps  14 0 f f f s 4 16 1184 1186 1184 1186      select ($1, ($1 + $2)) overlaps ($3, ($3 + $4))
#define oid_1306 1306 // overlaps  14 0 f f f s 4 16 1184 1184 1184 1186      select ($1, $2) overlaps ($3, ($3 + $4))
#define oid_1307 1307 // overlaps  14 0 f f f s 4 16 1184 1186 1184 1184      select ($1, ($1 + $2)) overlaps ($3, $4)
#define oid_1308 1308 // overlaps  12 0 f f f 4 16 1083 1083 1083 1083     overlaps_time
#define oid_1309 1309 // overlaps  14 0 f f f 4 16 1083 1186 1083 1186      select ($1, ($1 + $2)) overlaps ($3, ($3 + $4))
#define oid_1310 1310 // overlaps  14 0 f f f 4 16 1083 1083 1083 1186      select ($1, $2) overlaps ($3, ($3 + $4))
#define oid_1311 1311 // overlaps  14 0 f f f 4 16 1083 1186 1083 1083      select ($1, ($1 + $2)) overlaps ($3, $4)
#define oid_1312 1312 // timestamp_in  12 0 f f s 3 1114 2275 26 23     timestamp_in
#define oid_1313 1313 // timestamp_out  12 0 f f s 2275 1114     timestamp_out
#define oid_1314 1314 // timestamptz_cmp 12 0 f f 2 23 1184 1184     timestamp_cmp
#define oid_1315 1315 // interval_cmp  12 0 f f 2 23 1186 1186     interval_cmp
#define oid_1316 1316 // time   12 0 f f 1083 1114     timestamp_time
#define oid_1317 1317 // length  12 0 f f 23 25     textlen
#define oid_1318 1318 // length  12 0 f f 23 1042     bpcharlen
#define oid_1319 1319 // xideqint4  12 0 f f 2 16 28 23     xideq
#define oid_1320 1320 // =   t 1184 1184 16 1320 1321 timestamptz_eq eqsel eqjoinsel
#define oid_1321 1321 // <>   f 1184 1184 16 1321 1320 timestamptz_ne neqsel neqjoinsel
#define oid_1322 1322 // <   f 1184 1184 16 1324 1325 timestamptz_lt scalarltsel scalarltjoinsel
#define oid_1323 1323 // <=   f 1184 1184 16 1325 1324 timestamptz_le scalarltsel scalarltjoinsel
#define oid_1324 1324 // >   f 1184 1184 16 1322 1323 timestamptz_gt scalargtsel scalargtjoinsel
#define oid_1325 1325 // >=   f 1184 1184 16 1323 1322 timestamptz_ge scalargtsel scalargtjoinsel
#define oid_1326 1326 // interval_div  12 0 f f 2 1186 1186 701     interval_div
#define oid_1327 1327 // +   f 1184 1186 1184 2554 timestamptz_pl_interval -
#define oid_1328 1328 // -   f 1184 1184 1186 0 timestamptz_mi -
#define oid_1329 1329 // -   f 1184 1186 1184 0 timestamptz_mi_interval -
#define oid_1330 1330 // =   t 1186 1186 16 1330 1331 interval_eq eqsel eqjoinsel
#define oid_1331 1331 // <>   f 1186 1186 16 1331 1330 interval_ne neqsel neqjoinsel
#define oid_1332 1332 // <   f 1186 1186 16 1334 1335 interval_lt scalarltsel scalarltjoinsel
#define oid_1333 1333 // <=   f 1186 1186 16 1335 1334 interval_le scalarltsel scalarltjoinsel
#define oid_1334 1334 // >   f 1186 1186 16 1332 1333 interval_gt scalargtsel scalargtjoinsel
#define oid_1335 1335 // >=   f 1186 1186 16 1333 1332 interval_ge scalargtsel scalargtjoinsel
#define oid_1336 1336 // -   l f 1186 1186  0 interval_um -
#define oid_1337 1337 // +   f 1186 1186 1186 1337 interval_pl -
#define oid_1338 1338 // -   f 1186 1186 1186  0 interval_mi -
#define oid_1339 1339 // dlog10  12 0 f f 701 701     dlog10
#define oid_1340 1340 // log   12 0 f f 701 701     dlog10
#define oid_1341 1341 // ln   12 0 f f 701 701     dlog1
#define oid_1342 1342 // round   12 0 f f 701 701     dround
#define oid_1343 1343 // trunc   12 0 f f 701 701     dtrunc
#define oid_1344 1344 // sqrt   12 0 f f 701 701     dsqrt
#define oid_1345 1345 // cbrt   12 0 f f 701 701     dcbrt
#define oid_1346 1346 // pow   12 0 f f 2 701 701 701     dpow
#define oid_1347 1347 // exp   12 0 f f 701 701     dexp
#define oid_1348 1348 // obj_description 14 100 0 f f s 25 26      select description from pg_catalog.pg_description where objoid = $1 and objsubid = 0
#define oid_1349 1349 // oidvectortypes 12 0 f f s 25 30     oidvectortypes
#define oid_1350 1350 // timetz_in   12 0 f f s 3 1266 2275 26 23     timetz_in
#define oid_1351 1351 // timetz_out  12 0 f f 2275 1266     timetz_out
#define oid_1352 1352 // timetz_eq   12 0 f t 2 16 1266 1266     timetz_eq
#define oid_1353 1353 // timetz_ne   12 0 f t 2 16 1266 1266     timetz_ne
#define oid_1354 1354 // timetz_lt   12 0 f t 2 16 1266 1266     timetz_lt
#define oid_1355 1355 // timetz_le   12 0 f t 2 16 1266 1266     timetz_le
#define oid_1356 1356 // timetz_ge   12 0 f t 2 16 1266 1266     timetz_ge
#define oid_1357 1357 // timetz_gt   12 0 f t 2 16 1266 1266     timetz_gt
#define oid_1358 1358 // timetz_cmp  12 0 f f 2 23 1266 1266     timetz_cmp
#define oid_1359 1359 // timestamptz  12 0 f f 2 1184 1082 1266     datetimetz_timestamptz
#define oid_1360 1360 // +   f 1082 1083 1114 1363 datetime_pl -
#define oid_1361 1361 // +   f 1082 1266 1184 1366 datetimetz_pl -
#define oid_1362 1362 // hostmask  12 0 f f 869 869     network_hostmask
#define oid_1363 1363 // +   f 1083 1082 1114 1360 timedate_pl -
#define oid_1364 1364 // time   14 0 f f s 1083 702      select cast(cast($1 as timestamp without time zone) as pg_catalog.time)
#define oid_1365 1365 // makeaclitem  12 0 f f 4 1033 26 26 25 16     makeaclitem
#define oid_1366 1366 // +   f 1266 1082 1184 1361 timetzdate_pl -
#define oid_1367 1367 // character_length 12 0 f f 23 1042     bpcharlen
#define oid_1368 1368 // power   12 0 f f 2 701 701 701     dpow
#define oid_1369 1369 // character_length 12 0 f f 23 25     textlen
#define oid_1370 1370 // interval  12 0 f f 1186 1083     time_interval
#define oid_1371 1371 // pg_lock_status  12 1000 0 f f t v 0 2249   {25,26,26,23,21,25,28,26,26,21,25,23,25,16,16}  {o,o,o,o,o,o,o,o,o,o,o,o,o,o,o}  {locktype,database,relation,page,tuple,virtualxid,transactionid,classid,objid,objsubid,virtualtransaction,pid,mode,granted,fastpath}  pg_lock_status
#define oid_1372 1372 // char_length  12 0 f f 23 1042     bpcharlen
#define oid_1373 1373 // isfinite  12 0 f f 16 1082     date_finite
#define oid_1374 1374 // octet_length  12 0 f f 23 25     textoctetlen
#define oid_1375 1375 // octet_length  12 0 f f 23 1042     bpcharoctetlen
#define oid_1376 1376 // factorial   12 0 f f 1700 20     numeric_fac
#define oid_1377 1377 // time_larger  12 0 f f 2 1083 1083 1083     time_larger
#define oid_1378 1378 // time_smaller  12 0 f f 2 1083 1083 1083     time_smaller
#define oid_1379 1379 // timetz_larger  12 0 f f 2 1266 1266 1266     timetz_larger
#define oid_1380 1380 // timetz_smaller  12 0 f f 2 1266 1266 1266     timetz_smaller
#define oid_1381 1381 // char_length  12 0 f f 23 25     textlen
#define oid_1382 1382 // date_part  14 0 f f s 2 701 25 702      select pg_catalog.date_part($1, cast($2 as timestamp with time zone))
#define oid_1383 1383 // date_part  14 0 f f s 2 701 25 703      select pg_catalog.date_part($1, cast($2 as pg_catalog.interval))
#define oid_1384 1384 // date_part  14 0 f f 2 701 25 1082      select pg_catalog.date_part($1, cast($2 as timestamp without time zone))
#define oid_1385 1385 // date_part  12 0 f f 2 701 25 1083      time_part
#define oid_1386 1386 // age   14 0 f f s 1186 1184      select pg_catalog.age(cast(current_date as timestamp with time zone), $1)
#define oid_1387 1387 // pg_get_constraintdef 12 0 f f s 25 26     pg_get_constraintdef
#define oid_1388 1388 // timetz  12 0 f f s 1266 1184     timestamptz_timetz
#define oid_1389 1389 // isfinite  12 0 f f 16 1184     timestamp_finite
#define oid_1390 1390 // isfinite  12 0 f f 16 1186     interval_finite
#define oid_1391 1391 // pg_stat_get_backend_start 12 0 f f s 1184 23     pg_stat_get_backend_start
#define oid_1392 1392 // pg_stat_get_backend_client_addr 12 0 f f s 869 23     pg_stat_get_backend_client_addr
#define oid_1393 1393 // pg_stat_get_backend_client_port 12 0 f f s 23 23     pg_stat_get_backend_client_port
#define oid_1394 1394 // abs   12 0 f f 700 700     float4abs
#define oid_1395 1395 // abs   12 0 f f 701 701     float8abs
#define oid_1396 1396 // abs   12 0 f f 20 20     int8abs
#define oid_1397 1397 // abs   12 0 f f 23 23     int4abs
#define oid_1398 1398 // abs   12 0 f f 21 21     int2abs
#define oid_1399 1399 // -   f 1083 1083 1186 0 time_mi_time -
#define oid_1400 1400 // name   12 0 f f 19 1043     text_name
#define oid_1401 1401 // varchar  12 0 f f 1043 19     name_text
#define oid_1402 1402 // current_schema 12 0 f f s 0 19      current_schema
#define oid_1403 1403 // current_schemas 12 0 f f s 1003 16     current_schemas
#define oid_1404 1404 // overlay  12 0 f f 4 25 25 25 23 23     textoverlay
#define oid_1405 1405 // overlay  12 0 f f 3 25 25 25 23     textoverlay_no_len
#define oid_1406 1406 // isvertical 12 0 f f 2 16 600 600      point_vert
#define oid_1407 1407 // ishorizontal 12 0 f f 2 16 600 600      point_horiz
#define oid_1408 1408 // isparallel 12 0 f f 2 16 601 601      lseg_parallel
#define oid_1409 1409 // isperp  12 0 f f 2 16 601 601      lseg_perp
#define oid_1410 1410 // isvertical 12 0 f f 16 601      lseg_vertical
#define oid_1411 1411 // ishorizontal 12 0 f f 16 601      lseg_horizontal
#define oid_1412 1412 // isparallel 12 0 f f 2 16 628 628      line_parallel
#define oid_1413 1413 // isperp  12 0 f f 2 16 628 628      line_perp
#define oid_1414 1414 // isvertical 12 0 f f 16 628      line_vertical
#define oid_1415 1415 // ishorizontal 12 0 f f 16 628      line_horizontal
#define oid_1416 1416 // point  12 0 f f 600 718     circle_center
#define oid_1419 1419 // time  12 0 f f 1083 1186     interval_time
#define oid_1420 1420 // @@  l f 718 600   circle_center -
#define oid_1421 1421 // box  12 0 f f 2 603 600 600     points_box
#define oid_1422 1422 // box_add  12 0 f f 2 603 603 600     box_add
#define oid_1423 1423 // box_sub  12 0 f f 2 603 603 600     box_sub
#define oid_1424 1424 // box_mul  12 0 f f 2 603 603 600     box_mul
#define oid_1425 1425 // box_div  12 0 f f 2 603 603 600     box_div
#define oid_1426 1426 // path_contain_pt 14 0 f f 2 16 602 600      select pg_catalog.on_ppath($2, $1)
#define oid_1427 1427 // cidr_out  12 0 f f 2275 650     cidr_out
#define oid_1428 1428 // poly_contain_pt 12 0 f f 2 16 604 600      poly_contain_pt
#define oid_1429 1429 // pt_contained_poly 12 0 f f 2 16 600 604      pt_contained_poly
#define oid_1430 1430 // isclosed  12 0 f f 16 602      path_isclosed
#define oid_1431 1431 // isopen  12 0 f f 16 602      path_isopen
#define oid_1432 1432 // path_npoints 12 0 f f 23 602      path_npoints
#define oid_1433 1433 // pclose  12 0 f f 602 602     path_close
#define oid_1434 1434 // popen  12 0 f f 602 602     path_open
#define oid_1435 1435 // path_add  12 0 f f 2 602 602 602     path_add
#define oid_1436 1436 // path_add_pt 12 0 f f 2 602 602 600     path_add_pt
#define oid_1437 1437 // path_sub_pt 12 0 f f 2 602 602 600     path_sub_pt
#define oid_1438 1438 // path_mul_pt 12 0 f f 2 602 602 600     path_mul_pt
#define oid_1439 1439 // path_div_pt 12 0 f f 2 602 602 600     path_div_pt
#define oid_1440 1440 // point  12 0 f f 2 600 701 701     construct_point
#define oid_1441 1441 // point_add  12 0 f f 2 600 600 600     point_add
#define oid_1442 1442 // point_sub  12 0 f f 2 600 600 600     point_sub
#define oid_1443 1443 // point_mul  12 0 f f 2 600 600 600     point_mul
#define oid_1444 1444 // point_div  12 0 f f 2 600 600 600     point_div
#define oid_1445 1445 // poly_npoints 12 0 f f 23 604      poly_npoints
#define oid_1446 1446 // box  12 0 f f 603 604     poly_box
#define oid_1447 1447 // path  12 0 f f 602 604     poly_path
#define oid_1448 1448 // polygon  12 0 f f 604 603     box_poly
#define oid_1449 1449 // polygon  12 0 f f 604 602     path_poly
#define oid_1450 1450 // circle_in  12 0 f f 718 2275     circle_in
#define oid_1451 1451 // circle_out 12 0 f f 2275 718     circle_out
#define oid_1452 1452 // circle_same 12 0 f f 2 16 718 718      circle_same
#define oid_1453 1453 // circle_contain 12 0 f f 2 16 718 718      circle_contain
#define oid_1454 1454 // circle_left 12 0 f f 2 16 718 718      circle_left
#define oid_1455 1455 // circle_overleft 12 0 f f 2 16 718 718      circle_overleft
#define oid_1456 1456 // circle_overright 12 0 f f 2 16 718 718      circle_overright
#define oid_1457 1457 // circle_right 12 0 f f 2 16 718 718      circle_right
#define oid_1458 1458 // circle_contained 12 0 f f 2 16 718 718      circle_contained
#define oid_1459 1459 // circle_overlap 12 0 f f 2 16 718 718      circle_overlap
#define oid_1460 1460 // circle_below 12 0 f f 2 16 718 718      circle_below
#define oid_1461 1461 // circle_above 12 0 f f 2 16 718 718      circle_above
#define oid_1462 1462 // circle_eq  12 0 f t 2 16 718 718      circle_eq
#define oid_1463 1463 // circle_ne  12 0 f t 2 16 718 718      circle_ne
#define oid_1464 1464 // circle_lt  12 0 f t 2 16 718 718      circle_lt
#define oid_1465 1465 // circle_gt  12 0 f t 2 16 718 718      circle_gt
#define oid_1466 1466 // circle_le  12 0 f t 2 16 718 718      circle_le
#define oid_1467 1467 // circle_ge  12 0 f t 2 16 718 718      circle_ge
#define oid_1468 1468 // area  12 0 f f 701 718     circle_area
#define oid_1469 1469 // diameter  12 0 f f 701 718     circle_diameter
#define oid_1470 1470 // radius  12 0 f f 701 718     circle_radius
#define oid_1471 1471 // circle_distance 12 0 f f 2 701 718 718     circle_distance
#define oid_1472 1472 // circle_center 12 0 f f 600 718     circle_center
#define oid_1473 1473 // circle  12 0 f f 2 718 600 701     cr_circle
#define oid_1474 1474 // circle  12 0 f f 718 604     poly_circle
#define oid_1475 1475 // polygon  12 0 f f 2 604 23 718     circle_poly
#define oid_1476 1476 // dist_pc  12 0 f f 2 701 600 718     dist_pc
#define oid_1477 1477 // circle_contain_pt 12 0 f f 2 16 718 600      circle_contain_pt
#define oid_1478 1478 // pt_contained_circle 12 0 f f 2 16 600 718      pt_contained_circle
#define oid_1479 1479 // circle  12 0 f f 718 603     box_circle
#define oid_1480 1480 // box  12 0 f f 603 718     circle_box
#define oid_1481 1481 // tinterval  12 0 f f 2 704 702 702     mktinterval
#define oid_1482 1482 // lseg_ne  12 0 f t 2 16 601 601      lseg_ne
#define oid_1483 1483 // lseg_lt  12 0 f t 2 16 601 601      lseg_lt
#define oid_1484 1484 // lseg_le  12 0 f t 2 16 601 601      lseg_le
#define oid_1485 1485 // lseg_gt  12 0 f t 2 16 601 601      lseg_gt
#define oid_1486 1486 // lseg_ge  12 0 f t 2 16 601 601      lseg_ge
#define oid_1487 1487 // lseg_length 12 0 f f 701 601     lseg_length
#define oid_1488 1488 // close_ls  12 0 f f 2 600 628 601     close_ls
#define oid_1489 1489 // close_lseg 12 0 f f 2 600 601 601     close_lseg
#define oid_1490 1490 // line_in  12 0 f f 628 2275     line_in
#define oid_1491 1491 // line_out  12 0 f f 2275 628     line_out
#define oid_1492 1492 // line_eq  12 0 f f 2 16 628 628     line_eq
#define oid_1493 1493 // line  12 0 f f 2 628 600 600     line_construct_pp
#define oid_1494 1494 // line_interpt 12 0 f f 2 600 628 628     line_interpt
#define oid_1495 1495 // line_intersect 12 0 f f 2 16 628 628      line_intersect
#define oid_1496 1496 // line_parallel 12 0 f f 2 16 628 628      line_parallel
#define oid_1497 1497 // line_perp  12 0 f f 2 16 628 628      line_perp
#define oid_1498 1498 // line_vertical 12 0 f f 16 628      line_vertical
#define oid_1499 1499 // line_horizontal 12 0 f f 16 628      line_horizontal
#define oid_1500 1500 // =  f 718 718 16 1500 1501 circle_eq eqsel eqjoinsel
#define oid_1501 1501 // <>  f 718 718 16 1501 1500 circle_ne neqsel neqjoinsel
#define oid_1502 1502 // <  f 718 718 16 1503 1505 circle_lt areasel areajoinsel
#define oid_1503 1503 // >  f 718 718 16 1502 1504 circle_gt areasel areajoinsel
#define oid_1504 1504 // <=  f 718 718 16 1505 1503 circle_le areasel areajoinsel
#define oid_1505 1505 // >=  f 718 718 16 1504 1502 circle_ge areasel areajoinsel
#define oid_1506 1506 // <<  f 718 718 16   circle_left positionsel positionjoinsel
#define oid_1507 1507 // &<  f 718 718 16   circle_overleft positionsel positionjoinsel
#define oid_1508 1508 // &>  f 718 718 16   circle_overright positionsel positionjoinsel
#define oid_1509 1509 // >>  f 718 718 16   circle_right positionsel positionjoinsel
#define oid_1510 1510 // <@  f 718 718 16 1511  circle_contained contsel contjoinsel
#define oid_1511 1511 // @>  f 718 718 16 1510  circle_contain contsel contjoinsel
#define oid_1512 1512 // ~=  f 718 718 16 1512  circle_same eqsel eqjoinsel
#define oid_1513 1513 // &&  f 718 718 16 1513  circle_overlap areasel areajoinsel
#define oid_1514 1514 // |>>  f 718 718 16   circle_above positionsel positionjoinsel
#define oid_1515 1515 // <<|  f 718 718 16   circle_below positionsel positionjoinsel
#define oid_1516 1516 // +  f 718 600 718   circle_add_pt -
#define oid_1517 1517 // -  f 718 600 718   circle_sub_pt -
#define oid_1518 1518 // *  f 718 600 718   circle_mul_pt -
#define oid_1519 1519 // /  f 718 600 718   circle_div_pt -
#define oid_1520 1520 // <->  f 718 718 701  1520  circle_distance -
#define oid_1521 1521 // #  l f  604  23   poly_npoints -
#define oid_1522 1522 // <->  f 600 718 701   dist_pc -
#define oid_1523 1523 // <->  f 718 604 701   dist_cpoly -
#define oid_1524 1524 // <->  f 628 603 701  dist_lb -
#define oid_1525 1525 // ?#  f 601 601 16 1525 lseg_intersect -
#define oid_1526 1526 // ?||  f 601 601 16 1526 lseg_parallel -
#define oid_1527 1527 // ?-|  f 601 601 16 1527 lseg_perp -
#define oid_1528 1528 // ?-  l f 601 16  lseg_horizontal -
#define oid_1529 1529 // ?|  l f 601 16  lseg_vertical -
#define oid_1530 1530 // length  12 0 f f 701 601     lseg_length
#define oid_1531 1531 // length  12 0 f f 701 602     path_length
#define oid_1532 1532 // point  12 0 f f 600 601     lseg_center
#define oid_1533 1533 // point  12 0 f f 600 602     path_center
#define oid_1534 1534 // point  12 0 f f 600 603     box_center
#define oid_1535 1535 // =  f 601 601 16 1535 1586 lseg_eq eqsel eqjoinsel
#define oid_1536 1536 // #  f 601 601 600 1536 lseg_interpt -
#define oid_1537 1537 // ?#  f 601 628 16  inter_sl -
#define oid_1538 1538 // ?#  f 601 603 16  inter_sb -
#define oid_1539 1539 // ?#  f 628 603 16  inter_lb -
#define oid_1540 1540 // point  12 0 f f 600 604     poly_center
#define oid_1541 1541 // lseg  12 0 f f 601 603     box_diagonal
#define oid_1542 1542 // center  12 0 f f 600 603     box_center
#define oid_1543 1543 // center  12 0 f f 600 718     circle_center
#define oid_1544 1544 // polygon  14 0 f f 604 718      select pg_catalog.polygon(12, $1)
#define oid_1545 1545 // npoints  12 0 f f 23 602      path_npoints
#define oid_1546 1546 // <@  f 600 628 16  on_pl -
#define oid_1547 1547 // <@  f 600 601 16  on_ps -
#define oid_1548 1548 // <@  f 601 628 16  on_sl -
#define oid_1549 1549 // <@  f 601 603 16  on_sb -
#define oid_1550 1550 // =   t 1266 1266 16 1550 1551 timetz_eq eqsel eqjoinsel
#define oid_1551 1551 // <>   f 1266 1266 16 1551 1550 timetz_ne neqsel neqjoinsel
#define oid_1552 1552 // <   f 1266 1266 16 1554 1555 timetz_lt scalarltsel scalarltjoinsel
#define oid_1553 1553 // <=   f 1266 1266 16 1555 1554 timetz_le scalarltsel scalarltjoinsel
#define oid_1554 1554 // >   f 1266 1266 16 1552 1553 timetz_gt scalargtsel scalargtjoinsel
#define oid_1555 1555 // >=   f 1266 1266 16 1553 1552 timetz_ge scalargtsel scalargtjoinsel
#define oid_1556 1556 // npoints  12 0 f f 23 604      poly_npoints
#define oid_1557 1557 // ##  f 600 628 600  close_pl -
#define oid_1558 1558 // ##  f 600 601 600  close_ps -
#define oid_1559 1559 // ##  f 600 603 600  close_pb -
#define oid_1560 1560 // bit  V \054 0 1561 bit_in bit_out bit_recv bit_send bittypmodin bittypmodout x 0
#define oid_1561 1561 // _bit  A \054 1560 array_in array_out array_recv array_send bittypmodin bittypmodout array_typanalyze x 0
#define oid_1562 1562 // varbit  V t \054 0 1563 varbit_in varbit_out varbit_recv varbit_send varbittypmodin varbittypmodout x 0
#define oid_1563 1563 // _varbit A \054 1562 array_in array_out array_recv array_send varbittypmodin varbittypmodout array_typanalyze x 0
#define oid_1564 1564 // bit_in  12 0 f f 3 1560 2275 26 23     bit_in
#define oid_1565 1565 // bit_out  12 0 f f 2275 1560     bit_out
#define oid_1566 1566 // ##  f 601 628 600  close_sl -
#define oid_1567 1567 // ##  f 601 603 600  close_sb -
#define oid_1568 1568 // ##  f 628 603 600  close_lb -
#define oid_1569 1569 // like  12 0 f f 2 16 25 25     textlike
#define oid_1570 1570 // notlike  12 0 f f 2 16 25 25     textnlike
#define oid_1571 1571 // like  12 0 f f 2 16 19 25     namelike
#define oid_1572 1572 // notlike  12 0 f f 2 16 19 25     namenlike
#define oid_1573 1573 // pg_get_ruledef  12 0 f f s 25 26     pg_get_ruledef
#define oid_1574 1574 // nextval  12 0 f f v 20 2205     nextval_oid
#define oid_1575 1575 // currval  12 0 f f v 20 2205     currval_oid
#define oid_1576 1576 // setval  12 0 f f v 2 20 2205 20      setval_oid
#define oid_1577 1577 // ##  f 628 601 600  close_ls -
#define oid_1578 1578 // ##  f 601 601 600  close_lseg -
#define oid_1579 1579 // varbit_in  12 0 f f 3 1562 2275 26 23     varbit_in
#define oid_1580 1580 // varbit_out 12 0 f f 2275 1562     varbit_out
#define oid_1581 1581 // biteq  12 0 f t 2 16 1560 1560     biteq
#define oid_1582 1582 // bitne  12 0 f t 2 16 1560 1560     bitne
#define oid_1583 1583 // *  f 1186 701 1186 1584 interval_mul -
#define oid_1584 1584 // *  f 701 1186 1186 1583 mul_d_interval -
#define oid_1585 1585 // /  f 1186 701 1186  interval_div -
#define oid_1586 1586 // <>  f 601 601 16 1586 1535 lseg_ne neqsel neqjoinsel
#define oid_1587 1587 // <  f 601 601 16 1589 1590 lseg_lt -
#define oid_1588 1588 // <=  f 601 601 16 1590 1589 lseg_le -
#define oid_1589 1589 // >  f 601 601 16 1587 1588 lseg_gt -
#define oid_1590 1590 // >=  f 601 601 16 1588 1587 lseg_ge -
#define oid_1591 1591 // @-@  l f 601 701   lseg_length -
#define oid_1592 1592 // bitge  12 0 f t 2 16 1560 1560     bitge
#define oid_1593 1593 // bitgt  12 0 f t 2 16 1560 1560     bitgt
#define oid_1594 1594 // bitle  12 0 f t 2 16 1560 1560     bitle
#define oid_1595 1595 // bitlt  12 0 f t 2 16 1560 1560     bitlt
#define oid_1596 1596 // bitcmp  12 0 f f 2 23 1560 1560     bitcmp
#define oid_1597 1597 // pg_encoding_to_char  12 0 f f s 19 23     PG_encoding_to_char
#define oid_1598 1598 // random  12 0 f f v 0 701      drandom
#define oid_1599 1599 // setseed  12 0 f f v 2278 701     setseed
#define oid_1600 1600 // asin  12 0 f f 701 701     dasin
#define oid_1601 1601 // acos  12 0 f f 701 701     dacos
#define oid_1602 1602 // atan  12 0 f f 701 701     datan
#define oid_1603 1603 // atan2  12 0 f f 2 701 701 701     datan2
#define oid_1604 1604 // sin  12 0 f f 701 701     dsin
#define oid_1605 1605 // cos  12 0 f f 701 701     dcos
#define oid_1606 1606 // tan  12 0 f f 701 701     dtan
#define oid_1607 1607 // cot  12 0 f f 701 701     dcot
#define oid_1608 1608 // degrees  12 0 f f 701 701     degrees
#define oid_1609 1609 // radians  12 0 f f 701 701     radians
#define oid_1610 1610 // pi  12 0 f f 0 701      dpi
#define oid_1611 1611 // ?#  f 628 628 16 1611 line_intersect -
#define oid_1612 1612 // ?||  f 628 628 16 1612 line_parallel -
#define oid_1613 1613 // ?-|  f 628 628 16 1613 line_perp -
#define oid_1614 1614 // ?-  l f 628 16  line_horizontal -
#define oid_1615 1615 // ?|  l f 628 16  line_vertical -
#define oid_1616 1616 // =  f 628 628 16 1616 line_eq eqsel eqjoinsel
#define oid_1617 1617 // #  f 628 628 600 1617 line_interpt -
#define oid_1618 1618 // interval_mul 12 0 f f 2 1186 1186 701     interval_mul
#define oid_1619 1619 // pg_typeof  12 0 f f f s 2206 2276      pg_typeof
#define oid_1620 1620 // ascii  12 0 f f 23 25     ascii
#define oid_1621 1621 // chr  12 0 f f 25 23     chr
#define oid_1622 1622 // repeat  12 0 f f 2 25 25 23     repeat
#define oid_1623 1623 // similar_escape 12 0 f f f 2 25 25 25     similar_escape
#define oid_1624 1624 // mul_d_interval 12 0 f f 2 1186 701 1186     mul_d_interval
#define oid_1625 1625 // ~~*  f 19 25 16 1626 nameiclike iclikesel iclikejoinsel
#define oid_1626 1626 // !~~*  f 19 25 16 1625 nameicnlike icnlikesel icnlikejoinsel
#define oid_1627 1627 // ~~*  f 25 25 16 1628 texticlike iclikesel iclikejoinsel
#define oid_1628 1628 // !~~*  f 25 25 16 1627 texticnlike icnlikesel icnlikejoinsel
#define oid_1629 1629 // ~~*  f 1042 25 16 1630 bpchariclike iclikesel iclikejoinsel
#define oid_1630 1630 // !~~*  f 1042 25 16 1629 bpcharicnlike icnlikesel icnlikejoinsel
#define oid_1631 1631 // bpcharlike  12 0 f f 2 16 1042 25     textlike
#define oid_1632 1632 // bpcharnlike  12 0 f f 2 16 1042 25     textnlike
#define oid_1633 1633 // texticlike 12 0 f f 2 16 25 25     texticlike
#define oid_1634 1634 // texticnlike 12 0 f f 2 16 25 25     texticnlike
#define oid_1635 1635 // nameiclike 12 0 f f 2 16 19 25     nameiclike
#define oid_1636 1636 // nameicnlike 12 0 f f 2 16 19 25     nameicnlike
#define oid_1637 1637 // like_escape 12 0 f f 2 25 25 25     like_escape
#define oid_1638 1638 // oidgt    12 0 f t 2 16 26 26     oidgt
#define oid_1639 1639 // oidge    12 0 f t 2 16 26 26     oidge
#define oid_1640 1640 // pg_get_viewdef  12 0 f f s 25 25     pg_get_viewdef_name
#define oid_1641 1641 // pg_get_viewdef  12 0 f f s 25 26     pg_get_viewdef
#define oid_1642 1642 // pg_get_userbyid  12 0 f f s 19 26     pg_get_userbyid
#define oid_1643 1643 // pg_get_indexdef  12 0 f f s 25 26     pg_get_indexdef
#define oid_1644 1644 // RI_FKey_check_ins 12 0 f f v 0 2279      RI_FKey_check_ins
#define oid_1645 1645 // RI_FKey_check_upd 12 0 f f v 0 2279      RI_FKey_check_upd
#define oid_1646 1646 // RI_FKey_cascade_del 12 0 f f v 0 2279      RI_FKey_cascade_del
#define oid_1647 1647 // RI_FKey_cascade_upd 12 0 f f v 0 2279      RI_FKey_cascade_upd
#define oid_1648 1648 // RI_FKey_restrict_del 12 0 f f v 0 2279      RI_FKey_restrict_del
#define oid_1649 1649 // RI_FKey_restrict_upd 12 0 f f v 0 2279      RI_FKey_restrict_upd
#define oid_1650 1650 // RI_FKey_setnull_del 12 0 f f v 0 2279      RI_FKey_setnull_del
#define oid_1651 1651 // RI_FKey_setnull_upd 12 0 f f v 0 2279      RI_FKey_setnull_upd
#define oid_1652 1652 // RI_FKey_setdefault_del 12 0 f f v 0 2279      RI_FKey_setdefault_del
#define oid_1653 1653 // RI_FKey_setdefault_upd 12 0 f f v 0 2279      RI_FKey_setdefault_upd
#define oid_1654 1654 // RI_FKey_noaction_del 12 0 f f v 0 2279      RI_FKey_noaction_del
#define oid_1655 1655 // RI_FKey_noaction_upd 12 0 f f v 0 2279      RI_FKey_noaction_upd
#define oid_1656 1656 // bpcharicregexeq 12 0 f f 2 16 1042 25     texticregexeq
#define oid_1657 1657 // bpcharicregexne 12 0 f f 2 16 1042 25     texticregexne
#define oid_1658 1658 // bpcharregexeq  12 0 f f 2 16 1042 25     textregexeq
#define oid_1659 1659 // bpcharregexne  12 0 f f 2 16 1042 25     textregexne
#define oid_1660 1660 // bpchariclike 12 0 f f 2 16 1042 25     texticlike
#define oid_1661 1661 // bpcharicnlike 12 0 f f 2 16 1042 25     texticnlike
#define oid_1662 1662 // pg_get_triggerdef  12 0 f f s 25 26     pg_get_triggerdef
#define oid_1663 1663 // pg_default
#define oid_1664 1664 // pg_global
#define oid_1665 1665 // pg_get_serial_sequence 12 0 f f s 2 25 25 25     pg_get_serial_sequence
#define oid_1666 1666 // varbiteq  12 0 f t 2 16 1562 1562     biteq
#define oid_1667 1667 // varbitne  12 0 f t 2 16 1562 1562     bitne
#define oid_1668 1668 // varbitge  12 0 f t 2 16 1562 1562     bitge
#define oid_1669 1669 // varbitgt  12 0 f t 2 16 1562 1562     bitgt
#define oid_1670 1670 // varbitle  12 0 f t 2 16 1562 1562     bitle
#define oid_1671 1671 // varbitlt  12 0 f t 2 16 1562 1562     bitlt
#define oid_1672 1672 // varbitcmp  12 0 f f 2 23 1562 1562     bitcmp
#define oid_1673 1673 // bitand  12 0 f f 2 1560 1560 1560     bit_and
#define oid_1674 1674 // bitor  12 0 f f 2 1560 1560 1560     bit_or
#define oid_1675 1675 // bitxor  12 0 f f 2 1560 1560 1560     bitxor
#define oid_1676 1676 // bitnot  12 0 f f 1560 1560     bitnot
#define oid_1677 1677 // bitshiftleft 12 0 f f 2 1560 1560 23     bitshiftleft
#define oid_1678 1678 // bitshiftright 12 0 f f 2 1560 1560 23     bitshiftright
#define oid_1679 1679 // bitcat  12 0 f f 2 1562 1562 1562     bitcat
#define oid_1680 1680 // substring  12 0 f f 3 1560 1560 23 23     bitsubstr
#define oid_1681 1681 // length  12 0 f f 23 1560     bitlength
#define oid_1682 1682 // octet_length 12 0 f f 23 1560     bitoctetlength
#define oid_1683 1683 // bit  12 0 f f 2 1560 23 23     bitfromint4
#define oid_1684 1684 // int4  12 0 f f 23 1560     bittoint4
#define oid_1685 1685 // bit   12 0 f f 3 1560 1560 23 16     bit
#define oid_1686 1686 // pg_get_keywords 12 10 400 0 f f t s 0 2249   {25,18,25}  {o,o,o}  {word,catcode,catdesc}  pg_get_keywords
#define oid_1687 1687 // varbit   12 0 varbit_transform f f 3 1562 1562 23 16     varbit
#define oid_1688 1688 // time_hash  12 0 f f 23 1083     time_hash
#define oid_1689 1689 // aclexplode 12 10 0 f f t s 2249 1034  {1034,26,26,25,16}  {i,o,o,o,o}  {acl,grantor,grantee,privilege_type,is_grantable}  aclexplode
#define oid_1690 1690 // time_mi_time 12 0 f f 2 1186 1083 1083     time_mi_time
#define oid_1691 1691 // boolle  12 0 f t 2 16 16 16     boolle
#define oid_1692 1692 // boolge  12 0 f t 2 16 16 16     boolge
#define oid_1693 1693 // btboolcmp  12 0 f f 2 23 16 16     btboolcmp
#define oid_1694 1694 // <=   f 16 16 16 1695 59 boolle scalarltsel scalarltjoinsel
#define oid_1695 1695 // >=   f 16 16 16 1694 58 boolge scalargtsel scalargtjoinsel
#define oid_1696 1696 // timetz_hash 12 0 f f 23 1266     timetz_hash
#define oid_1697 1697 // interval_hash 12 0 f f 23 1186     interval_hash
#define oid_1698 1698 // position   12 0 f f 2 23 1560 1560     bitposition
#define oid_1699 1699 // substring   12 0 f f 2 1560 1560 23     bitsubstr_no_len
#define oid_1700 1700 // numeric  \054 0 1231 numeric_in numeric_out numeric_recv numeric_send numerictypmodin numerictypmodout m 0
#define oid_1701 1701 // numeric_in  12 0 f f 3 1700 2275 26 23     numeric_in
#define oid_1702 1702 // numeric_out  12 0 f f 2275 1700     numeric_out
#define oid_1703 1703 // numeric  12 0 numeric_transform f f 2 1700 1700 23     numeric
#define oid_1704 1704 // numeric_abs  12 0 f f 1700 1700     numeric_abs
#define oid_1705 1705 // abs   12 0 f f 1700 1700     numeric_abs
#define oid_1706 1706 // sign   12 0 f f 1700 1700     numeric_sign
#define oid_1707 1707 // round   12 0 f f 2 1700 1700 23     numeric_round
#define oid_1708 1708 // round   14 0 f f 1700 1700      select pg_catalog.round($1,0)
#define oid_1709 1709 // trunc   12 0 f f 2 1700 1700 23     numeric_trunc
#define oid_1710 1710 // trunc   14 0 f f 1700 1700      select pg_catalog.trunc($1,0)
#define oid_1711 1711 // ceil   12 0 f f 1700 1700     numeric_ceil
#define oid_1712 1712 // floor   12 0 f f 1700 1700     numeric_floor
#define oid_1713 1713 // length   12 0 f f s 2 23 17 19     length_in_encoding
#define oid_1714 1714 // convert_from   12 0 f f s 2 25 17 19     pg_convert_from
#define oid_1715 1715 // cidr  12 0 f f 650 869     inet_to_cidr
#define oid_1716 1716 // pg_get_expr   12 0 f f s 2 25 194 26     pg_get_expr
#define oid_1717 1717 // convert_to   12 0 f f s 2 17 25 19     pg_convert_to
#define oid_1718 1718 // numeric_eq  12 0 f f 2 16 1700 1700     numeric_eq
#define oid_1719 1719 // numeric_ne  12 0 f f 2 16 1700 1700     numeric_ne
#define oid_1720 1720 // numeric_gt  12 0 f f 2 16 1700 1700     numeric_gt
#define oid_1721 1721 // numeric_ge  12 0 f f 2 16 1700 1700     numeric_ge
#define oid_1722 1722 // numeric_lt  12 0 f f 2 16 1700 1700     numeric_lt
#define oid_1723 1723 // numeric_le  12 0 f f 2 16 1700 1700     numeric_le
#define oid_1724 1724 // numeric_add  12 0 f f 2 1700 1700 1700     numeric_add
#define oid_1725 1725 // numeric_sub  12 0 f f 2 1700 1700 1700     numeric_sub
#define oid_1726 1726 // numeric_mul  12 0 f f 2 1700 1700 1700     numeric_mul
#define oid_1727 1727 // numeric_div  12 0 f f 2 1700 1700 1700     numeric_div
#define oid_1728 1728 // mod   12 0 f f 2 1700 1700 1700     numeric_mod
#define oid_1729 1729 // numeric_mod  12 0 f f 2 1700 1700 1700     numeric_mod
#define oid_1730 1730 // sqrt   12 0 f f 1700 1700     numeric_sqrt
#define oid_1731 1731 // numeric_sqrt  12 0 f f 1700 1700     numeric_sqrt
#define oid_1732 1732 // exp   12 0 f f 1700 1700     numeric_exp
#define oid_1733 1733 // numeric_exp  12 0 f f 1700 1700     numeric_exp
#define oid_1734 1734 // ln   12 0 f f 1700 1700     numeric_ln
#define oid_1735 1735 // numeric_ln  12 0 f f 1700 1700     numeric_ln
#define oid_1736 1736 // log   12 0 f f 2 1700 1700 1700     numeric_log
#define oid_1737 1737 // numeric_log  12 0 f f 2 1700 1700 1700     numeric_log
#define oid_1738 1738 // pow   12 0 f f 2 1700 1700 1700     numeric_power
#define oid_1739 1739 // numeric_power  12 0 f f 2 1700 1700 1700     numeric_power
#define oid_1740 1740 // numeric  12 0 f f 1700 23     int4_numeric
#define oid_1741 1741 // log   14 0 f f 1700 1700      select pg_catalog.log(10, $1)
#define oid_1742 1742 // numeric  12 0 f f 1700 700     float4_numeric
#define oid_1743 1743 // numeric  12 0 f f 1700 701     float8_numeric
#define oid_1744 1744 // int4   12 0 f f 23 1700     numeric_int4
#define oid_1745 1745 // float4   12 0 f f 700 1700     numeric_float4
#define oid_1746 1746 // float8   12 0 f f 701 1700     numeric_float8
#define oid_1747 1747 // time_pl_interval 12 0 f f 2 1083 1083 1186     time_pl_interval
#define oid_1748 1748 // time_mi_interval 12 0 f f 2 1083 1083 1186     time_mi_interval
#define oid_1749 1749 // timetz_pl_interval 12 0 f f 2 1266 1266 1186     timetz_pl_interval
#define oid_1750 1750 // timetz_mi_interval 12 0 f f 2 1266 1266 1186     timetz_mi_interval
#define oid_1751 1751 // -   l f 1700 1700  0 numeric_uminus -
#define oid_1752 1752 // =   t 1700 1700 16 1752 1753 numeric_eq eqsel eqjoinsel
#define oid_1753 1753 // <>   f 1700 1700 16 1753 1752 numeric_ne neqsel neqjoinsel
#define oid_1754 1754 // <   f 1700 1700 16 1756 1757 numeric_lt scalarltsel scalarltjoinsel
#define oid_1755 1755 // <=   f 1700 1700 16 1757 1756 numeric_le scalarltsel scalarltjoinsel
#define oid_1756 1756 // >   f 1700 1700 16 1754 1755 numeric_gt scalargtsel scalargtjoinsel
#define oid_1757 1757 // >=   f 1700 1700 16 1755 1754 numeric_ge scalargtsel scalargtjoinsel
#define oid_1758 1758 // +   f 1700 1700 1700 1758 numeric_add -
#define oid_1759 1759 // -   f 1700 1700 1700  0 numeric_sub -
#define oid_1760 1760 // *   f 1700 1700 1700 1760 numeric_mul -
#define oid_1761 1761 // /   f 1700 1700 1700  0 numeric_div -
#define oid_1762 1762 // %   f 1700 1700 1700  0 numeric_mod -
#define oid_1763 1763 // @   l f 1700 1700  0 numeric_abs -
#define oid_1764 1764 // numeric_inc  12 0 f f 1700 1700     numeric_inc
#define oid_1765 1765 // setval  12 0 f f v 3 20 2205 20 16     setval3_oid
#define oid_1766 1766 // numeric_smaller 12 0 f f 2 1700 1700 1700     numeric_smaller
#define oid_1767 1767 // numeric_larger  12 0 f f 2 1700 1700 1700     numeric_larger
#define oid_1768 1768 // to_char  12 0 f f s 2 25 1186 25      interval_to_char
#define oid_1769 1769 // numeric_cmp  12 0 f f 2 23 1700 1700     numeric_cmp
#define oid_1770 1770 // to_char  12 0 f f s 2 25 1184 25      timestamptz_to_char
#define oid_1771 1771 // numeric_uminus  12 0 f f 1700 1700     numeric_uminus
#define oid_1772 1772 // to_char  12 0 f f s 2 25 1700 25      numeric_to_char
#define oid_1773 1773 // to_char  12 0 f f s 2 25 23 25     int4_to_char
#define oid_1774 1774 // to_char  12 0 f f s 2 25 20 25     int8_to_char
#define oid_1775 1775 // to_char  12 0 f f s 2 25 700 25     float4_to_char
#define oid_1776 1776 // to_char  12 0 f f s 2 25 701 25     float8_to_char
#define oid_1777 1777 // to_number  12 0 f f s 2 1700 25 25      numeric_to_number
#define oid_1778 1778 // to_timestamp 12 0 f f s 2 1184 25 25      to_timestamp
#define oid_1779 1779 // int8   12 0 f f 20 1700     numeric_int8
#define oid_1780 1780 // to_date  12 0 f f s 2 1082 25 25      to_date
#define oid_1781 1781 // numeric  12 0 f f 1700 20     int8_numeric
#define oid_1782 1782 // numeric  12 0 f f 1700 21     int2_numeric
#define oid_1783 1783 // int2   12 0 f f 21 1700     numeric_int2
#define oid_1784 1784 // =  1560 1560 16 1784 1785 biteq eqsel eqjoinsel
#define oid_1785 1785 // <>  f 1560 1560 16 1785 1784 bitne neqsel neqjoinsel
#define oid_1786 1786 // <  f 1560 1560 16 1787 1789 bitlt scalarltsel scalarltjoinsel
#define oid_1787 1787 // >  f 1560 1560 16 1786 1788 bitgt scalargtsel scalargtjoinsel
#define oid_1788 1788 // <=  f 1560 1560 16 1789 1787 bitle scalarltsel scalarltjoinsel
#define oid_1789 1789 // >=  f 1560 1560 16 1788 1786 bitge scalargtsel scalargtjoinsel
#define oid_1790 1790 // refcursor  \054 0 2201 textin textout textrecv textsend - x 0
#define oid_1791 1791 // &  f 1560 1560 1560 1791 bitand -
#define oid_1792 1792 // |  f 1560 1560 1560 1792 bitor -
#define oid_1793 1793 // #  f 1560 1560 1560 1793 bitxor -
#define oid_1794 1794 // ~  l f  1560 1560  bitnot -
#define oid_1795 1795 // <<  f 1560  23 1560  bitshiftleft -
#define oid_1796 1796 // >>  f 1560  23 1560  bitshiftright -
#define oid_1797 1797 // ||  f 1562 1562 1562  bitcat -
#define oid_1798 1798 // oidin   12 0 f f 26 2275     oidin
#define oid_1799 1799 // oidout   12 0 f f 2275 26     oidout
#define oid_1800 1800 // +   f 1083 1186 1083 1849 time_pl_interval -
#define oid_1801 1801 // -   f 1083 1186 1083 0 time_mi_interval -
#define oid_1802 1802 // +   f 1266 1186 1266 2552 timetz_pl_interval -
#define oid_1803 1803 // -   f 1266 1186 1266 0 timetz_mi_interval -
#define oid_1804 1804 // =  1562 1562 16 1804 1805 varbiteq eqsel eqjoinsel
#define oid_1805 1805 // <>  f 1562 1562 16 1805 1804 varbitne neqsel neqjoinsel
#define oid_1806 1806 // <  f 1562 1562 16 1807 1809 varbitlt scalarltsel scalarltjoinsel
#define oid_1807 1807 // >  f 1562 1562 16 1806 1808 varbitgt scalargtsel scalargtjoinsel
#define oid_1808 1808 // <=  f 1562 1562 16 1809 1807 varbitle scalarltsel scalarltjoinsel
#define oid_1809 1809 // >=  f 1562 1562 16 1808 1806 varbitge scalargtsel scalargtjoinsel
#define oid_1810 1810 // bit_length  14 0 f f 23 17      select pg_catalog.octet_length($1) * 8
#define oid_1811 1811 // bit_length  14 0 f f 23 25      select pg_catalog.octet_length($1) * 8
#define oid_1812 1812 // bit_length  14 0 f f 23 1560      select pg_catalog.length($1)
#define oid_1813 1813 // convert   12 0 f f s 3 17 17 19 19     pg_convert
#define oid_1814 1814 // iclikesel  12 0 f f s 4 701 2281 26 2281 23     iclikesel
#define oid_1815 1815 // icnlikesel  12 0 f f s 4 701 2281 26 2281 23     icnlikesel
#define oid_1816 1816 // iclikejoinsel 12 0 f f s 5 701 2281 26 2281 21 2281      iclikejoinsel
#define oid_1817 1817 // icnlikejoinsel 12 0 f f s 5 701 2281 26 2281 21 2281      icnlikejoinsel
#define oid_1818 1818 // regexeqsel  12 0 f f s 4 701 2281 26 2281 23     regexeqsel
#define oid_1819 1819 // likesel  12 0 f f s 4 701 2281 26 2281 23     likesel
#define oid_1820 1820 // icregexeqsel 12 0 f f s 4 701 2281 26 2281 23     icregexeqsel
#define oid_1821 1821 // regexnesel  12 0 f f s 4 701 2281 26 2281 23     regexnesel
#define oid_1822 1822 // nlikesel  12 0 f f s 4 701 2281 26 2281 23     nlikesel
#define oid_1823 1823 // icregexnesel 12 0 f f s 4 701 2281 26 2281 23     icregexnesel
#define oid_1824 1824 // regexeqjoinsel 12 0 f f s 5 701 2281 26 2281 21 2281      regexeqjoinsel
#define oid_1825 1825 // likejoinsel 12 0 f f s 5 701 2281 26 2281 21 2281      likejoinsel
#define oid_1826 1826 // icregexeqjoinsel 12 0 f f s 5 701 2281 26 2281 21 2281      icregexeqjoinsel
#define oid_1827 1827 // regexnejoinsel 12 0 f f s 5 701 2281 26 2281 21 2281      regexnejoinsel
#define oid_1828 1828 // nlikejoinsel 12 0 f f s 5 701 2281 26 2281 21 2281      nlikejoinsel
#define oid_1829 1829 // icregexnejoinsel 12 0 f f s 5 701 2281 26 2281 21 2281      icregexnejoinsel
#define oid_1830 1830 // float8_avg  12 0 f f 701 1022     float8_avg
#define oid_1831 1831 // float8_var_samp 12 0 f f 701 1022     float8_var_samp
#define oid_1832 1832 // float8_stddev_samp 12 0 f f 701 1022     float8_stddev_samp
#define oid_1833 1833 // numeric_accum  12 0 f f f 2 2281 2281 1700     numeric_accum
#define oid_1834 1834 // int2_accum  12 0 f f f 2 2281 2281 21     int2_accum
#define oid_1835 1835 // int4_accum  12 0 f f f 2 2281 2281 23     int4_accum
#define oid_1836 1836 // int8_accum  12 0 f f f 2 2281 2281 20     int8_accum
#define oid_1837 1837 // numeric_avg  12 0 f f f 1700 2281     numeric_avg
#define oid_1838 1838 // numeric_var_samp 12 0 f f f 1700 2281     numeric_var_samp
#define oid_1839 1839 // numeric_stddev_samp 12 0 f f f 1700 2281     numeric_stddev_samp
#define oid_1840 1840 // int2_sum   12 0 f f f 2 20 20 21     int2_sum
#define oid_1841 1841 // int4_sum   12 0 f f f 2 20 20 23     int4_sum
#define oid_1842 1842 // int8_sum   12 0 f f f 2 1700 1700 20     int8_sum
#define oid_1843 1843 // interval_accum  12 0 f f 2 1187 1187 1186     interval_accum
#define oid_1844 1844 // interval_avg  12 0 f f 1186 1187     interval_avg
#define oid_1845 1845 // to_ascii 12 0 f f 25 25     to_ascii_default
#define oid_1846 1846 // to_ascii 12 0 f f 2 25 25 23     to_ascii_enc
#define oid_1847 1847 // to_ascii 12 0 f f 2 25 25 19     to_ascii_encname
#define oid_1848 1848 // interval_pl_time 14 0 f f 2 1083 1186 1083      select $2 + $1
#define oid_1849 1849 // +   f 1186 1083 1083 1800 interval_pl_time -
#define oid_1850 1850 // int28eq   12 0 f t 2 16 21 20     int28eq
#define oid_1851 1851 // int28ne   12 0 f t 2 16 21 20     int28ne
#define oid_1852 1852 // int28lt   12 0 f t 2 16 21 20     int28lt
#define oid_1853 1853 // int28gt   12 0 f t 2 16 21 20     int28gt
#define oid_1854 1854 // int28le   12 0 f t 2 16 21 20     int28le
#define oid_1855 1855 // int28ge   12 0 f t 2 16 21 20     int28ge
#define oid_1856 1856 // int82eq   12 0 f t 2 16 20 21     int82eq
#define oid_1857 1857 // int82ne   12 0 f t 2 16 20 21     int82ne
#define oid_1858 1858 // int82lt   12 0 f t 2 16 20 21     int82lt
#define oid_1859 1859 // int82gt   12 0 f t 2 16 20 21     int82gt
#define oid_1860 1860 // int82le   12 0 f t 2 16 20 21     int82le
#define oid_1861 1861 // int82ge   12 0 f t 2 16 20 21     int82ge
#define oid_1862 1862 // =   t 21 20 16 1868 1863 int28eq eqsel eqjoinsel
#define oid_1863 1863 // <>   f 21 20 16 1869 1862 int28ne neqsel neqjoinsel
#define oid_1864 1864 // <   f 21 20 16 1871 1867 int28lt scalarltsel scalarltjoinsel
#define oid_1865 1865 // >   f 21 20 16 1870 1866 int28gt scalargtsel scalargtjoinsel
#define oid_1866 1866 // <=   f 21 20 16 1873 1865 int28le scalarltsel scalarltjoinsel
#define oid_1867 1867 // >=   f 21 20 16 1872 1864 int28ge scalargtsel scalargtjoinsel
#define oid_1868 1868 // =   t 20 21 16 1862 1869 int82eq eqsel eqjoinsel
#define oid_1869 1869 // <>   f 20 21 16 1863 1868 int82ne neqsel neqjoinsel
#define oid_1870 1870 // <   f 20 21 16 1865 1873 int82lt scalarltsel scalarltjoinsel
#define oid_1871 1871 // >   f 20 21 16 1864 1872 int82gt scalargtsel scalargtjoinsel
#define oid_1872 1872 // <=   f 20 21 16 1867 1871 int82le scalarltsel scalarltjoinsel
#define oid_1873 1873 // >=   f 20 21 16 1866 1870 int82ge scalargtsel scalargtjoinsel
#define oid_1874 1874 // &   f 21 21 21 1874 int2and -
#define oid_1875 1875 // |   f 21 21 21 1875 int2or -
#define oid_1876 1876 // #   f 21 21 21 1876 int2xor -
#define oid_1877 1877 // ~   l f 21 21  int2not -
#define oid_1878 1878 // <<   f 21 23 21  int2shl -
#define oid_1879 1879 // >>   f 21 23 21  int2shr -
#define oid_1880 1880 // &   f 23 23 23 1880 int4and -
#define oid_1881 1881 // |   f 23 23 23 1881 int4or -
#define oid_1882 1882 // #   f 23 23 23 1882 int4xor -
#define oid_1883 1883 // ~   l f 23 23  int4not -
#define oid_1884 1884 // <<   f 23 23 23  int4shl -
#define oid_1885 1885 // >>   f 23 23 23  int4shr -
#define oid_1886 1886 // &   f 20 20 20 1886 int8and -
#define oid_1887 1887 // |   f 20 20 20 1887 int8or -
#define oid_1888 1888 // #   f 20 20 20 1888 int8xor -
#define oid_1889 1889 // ~   l f 20 20  int8not -
#define oid_1890 1890 // <<   f 20 23 20  int8shl -
#define oid_1891 1891 // >>   f 20 23 20  int8shr -
#define oid_1892 1892 // int2and   12 0 f f 2 21 21 21     int2and
#define oid_1893 1893 // int2or   12 0 f f 2 21 21 21     int2or
#define oid_1894 1894 // int2xor   12 0 f f 2 21 21 21     int2xor
#define oid_1895 1895 // int2not   12 0 f f 21 21     int2not
#define oid_1896 1896 // int2shl   12 0 f f 2 21 21 23     int2shl
#define oid_1897 1897 // int2shr   12 0 f f 2 21 21 23     int2shr
#define oid_1898 1898 // int4and   12 0 f f 2 23 23 23     int4and
#define oid_1899 1899 // int4or   12 0 f f 2 23 23 23     int4or
#define oid_1900 1900 // int4xor   12 0 f f 2 23 23 23     int4xor
#define oid_1901 1901 // int4not   12 0 f f 23 23     int4not
#define oid_1902 1902 // int4shl   12 0 f f 2 23 23 23     int4shl
#define oid_1903 1903 // int4shr   12 0 f f 2 23 23 23     int4shr
#define oid_1904 1904 // int8and   12 0 f f 2 20 20 20     int8and
#define oid_1905 1905 // int8or   12 0 f f 2 20 20 20     int8or
#define oid_1906 1906 // int8xor   12 0 f f 2 20 20 20     int8xor
#define oid_1907 1907 // int8not   12 0 f f 20 20     int8not
#define oid_1908 1908 // int8shl   12 0 f f 2 20 20 23     int8shl
#define oid_1909 1909 // int8shr   12 0 f f 2 20 20 23     int8shr
#define oid_1910 1910 // int8up   12 0 f f 20 20     int8up
#define oid_1911 1911 // int2up   12 0 f f 21 21     int2up
#define oid_1912 1912 // int4up   12 0 f f 23 23     int4up
#define oid_1913 1913 // float4up   12 0 f f 700 700     float4up
#define oid_1914 1914 // float8up   12 0 f f 701 701     float8up
#define oid_1915 1915 // numeric_uplus  12 0 f f 1700 1700     numeric_uplus
#define oid_1916 1916 // +   l f 20 20 0 int8up -
#define oid_1917 1917 // +   l f 21 21 0 int2up -
#define oid_1918 1918 // +   l f 23 23 0 int4up -
#define oid_1919 1919 // +   l f 700 700 0 float4up -
#define oid_1920 1920 // +   l f 701 701 0 float8up -
#define oid_1921 1921 // +   l f 1700 1700 0 numeric_uplus -
#define oid_1922 1922 // has_table_privilege   12 0 f f s 3 16 19 25 25     has_table_privilege_name_name
#define oid_1923 1923 // has_table_privilege   12 0 f f s 3 16 19 26 25     has_table_privilege_name_id
#define oid_1924 1924 // has_table_privilege   12 0 f f s 3 16 26 25 25     has_table_privilege_id_name
#define oid_1925 1925 // has_table_privilege   12 0 f f s 3 16 26 26 25     has_table_privilege_id_id
#define oid_1926 1926 // has_table_privilege   12 0 f f s 2 16 25 25     has_table_privilege_name
#define oid_1927 1927 // has_table_privilege   12 0 f f s 2 16 26 25     has_table_privilege_id
#define oid_1928 1928 // pg_stat_get_numscans  12 0 f f s 20 26     pg_stat_get_numscans
#define oid_1929 1929 // pg_stat_get_tuples_returned 12 0 f f s 20 26     pg_stat_get_tuples_returned
#define oid_1930 1930 // pg_stat_get_tuples_fetched 12 0 f f s 20 26     pg_stat_get_tuples_fetched
#define oid_1931 1931 // pg_stat_get_tuples_inserted 12 0 f f s 20 26     pg_stat_get_tuples_inserted
#define oid_1932 1932 // pg_stat_get_tuples_updated 12 0 f f s 20 26     pg_stat_get_tuples_updated
#define oid_1933 1933 // pg_stat_get_tuples_deleted 12 0 f f s 20 26     pg_stat_get_tuples_deleted
#define oid_1934 1934 // pg_stat_get_blocks_fetched 12 0 f f s 20 26     pg_stat_get_blocks_fetched
#define oid_1935 1935 // pg_stat_get_blocks_hit 12 0 f f s 20 26     pg_stat_get_blocks_hit
#define oid_1936 1936 // pg_stat_get_backend_idset 12 100 0 f f t s 0 23      pg_stat_get_backend_idset
#define oid_1937 1937 // pg_stat_get_backend_pid 12 0 f f s 23 23     pg_stat_get_backend_pid
#define oid_1938 1938 // pg_stat_get_backend_dbid 12 0 f f s 26 23     pg_stat_get_backend_dbid
#define oid_1939 1939 // pg_stat_get_backend_userid 12 0 f f s 26 23     pg_stat_get_backend_userid
#define oid_1940 1940 // pg_stat_get_backend_activity 12 0 f f s 25 23     pg_stat_get_backend_activity
#define oid_1941 1941 // pg_stat_get_db_numbackends 12 0 f f s 23 26     pg_stat_get_db_numbackends
#define oid_1942 1942 // pg_stat_get_db_xact_commit 12 0 f f s 20 26     pg_stat_get_db_xact_commit
#define oid_1943 1943 // pg_stat_get_db_xact_rollback 12 0 f f s 20 26     pg_stat_get_db_xact_rollback
#define oid_1944 1944 // pg_stat_get_db_blocks_fetched 12 0 f f s 20 26     pg_stat_get_db_blocks_fetched
#define oid_1945 1945 // pg_stat_get_db_blocks_hit 12 0 f f s 20 26     pg_stat_get_db_blocks_hit
#define oid_1946 1946 // encode   12 0 f f 2 25 17 25     binary_encode
#define oid_1947 1947 // decode   12 0 f f 2 17 25 25     binary_decode
#define oid_1948 1948 // byteaeq   12 0 f t 2 16 17 17     byteaeq
#define oid_1949 1949 // bytealt   12 0 f t 2 16 17 17     bytealt
#define oid_1950 1950 // byteale   12 0 f t 2 16 17 17     byteale
#define oid_1951 1951 // byteagt   12 0 f t 2 16 17 17     byteagt
#define oid_1952 1952 // byteage   12 0 f t 2 16 17 17     byteage
#define oid_1953 1953 // byteane   12 0 f t 2 16 17 17     byteane
#define oid_1954 1954 // byteacmp   12 0 f f 2 23 17 17     byteacmp
#define oid_1955 1955 // =   t 17 17 16 1955 1956 byteaeq eqsel eqjoinsel
#define oid_1956 1956 // <>   f 17 17 16 1956 1955 byteane neqsel neqjoinsel
#define oid_1957 1957 // <   f 17 17 16 1959 1960 bytealt scalarltsel scalarltjoinsel
#define oid_1958 1958 // <=   f 17 17 16 1960 1959 byteale scalarltsel scalarltjoinsel
#define oid_1959 1959 // >   f 17 17 16 1957 1958 byteagt scalargtsel scalargtjoinsel
#define oid_1960 1960 // >=   f 17 17 16 1958 1957 byteage scalargtsel scalargtjoinsel
#define oid_1961 1961 // timestamp   12 0 timestamp_transform f f 2 1114 1114 23     timestamp_scale
#define oid_1962 1962 // int2_avg_accum  12 0 f f 2 1016 1016 21     int2_avg_accum
#define oid_1963 1963 // int4_avg_accum  12 0 f f 2 1016 1016 23     int4_avg_accum
#define oid_1964 1964 // int8_avg   12 0 f f 1700 1016     int8_avg
#define oid_1965 1965 // oidlarger   12 0 f f 2 26 26 26     oidlarger
#define oid_1966 1966 // oidsmaller  12 0 f f 2 26 26 26     oidsmaller
#define oid_1967 1967 // timestamptz  12 0 timestamp_transform f f 2 1184 1184 23     timestamptz_scale
#define oid_1968 1968 // time   12 0 time_transform f f 2 1083 1083 23     time_scale
#define oid_1969 1969 // timetz   12 0 time_transform f f 2 1266 1266 23     timetz_scale
#define oid_1970 1970 // 403 float_ops
#define oid_1971 1971 // 405 float_ops
#define oid_1972 1972 // pg_stat_get_tuples_hot_updated 12 0 f f s 20 26     pg_stat_get_tuples_hot_updated
#define oid_1973 1973 // div   12 0 f f 2 1700 1700 1700     numeric_div_trunc
#define oid_1974 1974 // 403 network_ops
#define oid_1975 1975 // 405 network_ops
#define oid_1976 1976 // 403 integer_ops
#define oid_1977 1977 // 405 integer_ops
#define oid_1978 1978 // 403 int4_ops 1976  23
#define oid_1979 1979 // 403 int2_ops 1976  21
#define oid_1980 1980 // numeric_div_trunc 12 0 f f 2 1700 1700 1700     numeric_div_trunc
#define oid_1981 1981 // 403 oid_ops 1989  26
#define oid_1982 1982 // 403 interval_ops
#define oid_1983 1983 // 405 interval_ops
#define oid_1984 1984 // 403 macaddr_ops
#define oid_1985 1985 // 405 macaddr_ops
#define oid_1986 1986 // 403 name_ops
#define oid_1987 1987 // 405 name_ops
#define oid_1988 1988 // 403 numeric_ops
#define oid_1989 1989 // 403 oid_ops
#define oid_1990 1990 // 405 oid_ops
#define oid_1991 1991 // 403 oidvector_ops
#define oid_1992 1992 // 405 oidvector_ops
#define oid_1993 1993 // shobj_description 14 100 0 f f s 2 25 26 19      select description from pg_catalog.pg_shdescription where objoid = $1 and classoid = (select oid from pg_catalog.pg_class where relname = $2 and relnamespace = PGNSP)
#define oid_1994 1994 // 403 text_ops
#define oid_1995 1995 // 405 text_ops
#define oid_1996 1996 // 403 time_ops
#define oid_1997 1997 // 405 time_ops
#define oid_1998 1998 // 405 numeric_ops
#define oid_1999 1999 // 405 timestamptz_ops
#define oid_2000 2000 // 403 timetz_ops
#define oid_2001 2001 // 405 timetz_ops
#define oid_2002 2002 // 403 varbit_ops
#define oid_2003 2003 // textanycat  14 0 f f s 2 25 25 2776      select $1 || $2::pg_catalog.text
#define oid_2004 2004 // anytextcat  14 0 f f s 2 25 2776 25      select $1::pg_catalog.text || $2
#define oid_2005 2005 // bytealike   12 0 f f 2 16 17 17     bytealike
#define oid_2006 2006 // byteanlike  12 0 f f 2 16 17 17     byteanlike
#define oid_2007 2007 // like   12 0 f f 2 16 17 17     bytealike
#define oid_2008 2008 // notlike   12 0 f f 2 16 17 17     byteanlike
#define oid_2009 2009 // like_escape  12 0 f f 2 17 17 17     like_escape_bytea
#define oid_2010 2010 // length   12 0 f f 23 17     byteaoctetlen
#define oid_2011 2011 // byteacat   12 0 f f 2 17 17 17     byteacat
#define oid_2012 2012 // substring   12 0 f f 3 17 17 23 23     bytea_substr
#define oid_2013 2013 // substring   12 0 f f 2 17 17 23     bytea_substr_no_len
#define oid_2014 2014 // position   12 0 f f 2 23 17 17     byteapos
#define oid_2015 2015 // btrim   12 0 f f 2 17 17 17     byteatrim
#define oid_2016 2016 // ~~   f 17 17 16 2017 bytealike likesel likejoinsel
#define oid_2017 2017 // !~~   f 17 17 16 2016 byteanlike nlikesel nlikejoinsel
#define oid_2018 2018 // ||   f 17 17 17 0 byteacat -
#define oid_2019 2019 // time  12 0 f f s 1083 1184     timestamptz_time
#define oid_2020 2020 // date_trunc 12 0 f f 2 1114 25 1114     timestamp_trunc
#define oid_2021 2021 // date_part  12 0 f f 2 701 25 1114     timestamp_part
#define oid_2022 2022 // pg_stat_get_activity  12 100 0 f f s 2249 23  {23,26,23,26,25,25,25,16,1184,1184,1184,1184,869,25,23,28,28}  {i,o,o,o,o,o,o,o,o,o,o,o,o,o,o,o,o}  {pid,datid,pid,usesysid,application_name,state,query,waiting,xact_start,query_start,backend_start,state_change,client_addr,client_hostname,client_port,backend_xid,backend_xmin}  pg_stat_get_activity
#define oid_2023 2023 // timestamp  12 0 f f s 1114 702     abstime_timestamp
#define oid_2024 2024 // timestamp  12 0 f f 1114 1082     date_timestamp
#define oid_2025 2025 // timestamp  12 0 f f 2 1114 1082 1083     datetime_timestamp
#define oid_2026 2026 // pg_backend_pid  12 0 f f s 0 23      pg_backend_pid
#define oid_2027 2027 // timestamp  12 0 f f s 1114 1184     timestamptz_timestamp
#define oid_2028 2028 // timestamptz 12 0 f f s 1184 1114     timestamp_timestamptz
#define oid_2029 2029 // date  12 0 f f 1082 1114     timestamp_date
#define oid_2030 2030 // abstime  12 0 f f s 702 1114     timestamp_abstime
#define oid_2031 2031 // timestamp_mi 12 0 f f 2 1186 1114 1114     timestamp_mi
#define oid_2032 2032 // timestamp_pl_interval 12 0 f f 2 1114 1114 1186     timestamp_pl_interval
#define oid_2033 2033 // timestamp_mi_interval 12 0 f f 2 1114 1114 1186     timestamp_mi_interval
#define oid_2034 2034 // pg_conf_load_time  12 0 f f s 0 1184      pg_conf_load_time
#define oid_2035 2035 // timestamp_smaller 12 0 f f 2 1114 1114 1114     timestamp_smaller
#define oid_2036 2036 // timestamp_larger 12 0 f f 2 1114 1114 1114     timestamp_larger
#define oid_2037 2037 // timezone  12 0 f f v 2 1266 25 1266     timetz_zone
#define oid_2038 2038 // timezone  12 0 f f 2 1266 1186 1266     timetz_izone
#define oid_2039 2039 // timestamp_hash 12 0 f f 23 1114     timestamp_hash
#define oid_2040 2040 // 405 timestamp_ops
#define oid_2041 2041 // overlaps  12 0 f f f 4 16 1114 1114 1114 1114     overlaps_timestamp
#define oid_2042 2042 // overlaps  14 0 f f f 4 16 1114 1186 1114 1186      select ($1, ($1 + $2)) overlaps ($3, ($3 + $4))
#define oid_2043 2043 // overlaps  14 0 f f f 4 16 1114 1114 1114 1186      select ($1, $2) overlaps ($3, ($3 + $4))
#define oid_2044 2044 // overlaps  14 0 f f f 4 16 1114 1186 1114 1114      select ($1, ($1 + $2)) overlaps ($3, $4)
#define oid_2045 2045 // timestamp_cmp 12 0 f f 2 23 1114 1114     timestamp_cmp
#define oid_2046 2046 // time  12 0 f f 1083 1266     timetz_time
#define oid_2047 2047 // timetz  12 0 f f s 1266 1083     time_timetz
#define oid_2048 2048 // isfinite  12 0 f f 16 1114     timestamp_finite
#define oid_2049 2049 // to_char  12 0 f f s 2 25 1114 25      timestamp_to_char
#define oid_2050 2050 // max  12 0 f f 2277 2277     aggregate_dummy
#define oid_2051 2051 // min  12 0 f f 2277 2277     aggregate_dummy
#define oid_2052 2052 // timestamp_eq 12 0 f t 2 16 1114 1114     timestamp_eq
#define oid_2053 2053 // timestamp_ne 12 0 f t 2 16 1114 1114     timestamp_ne
#define oid_2054 2054 // timestamp_lt 12 0 f t 2 16 1114 1114     timestamp_lt
#define oid_2055 2055 // timestamp_le 12 0 f t 2 16 1114 1114     timestamp_le
#define oid_2056 2056 // timestamp_ge 12 0 f t 2 16 1114 1114     timestamp_ge
#define oid_2057 2057 // timestamp_gt 12 0 f t 2 16 1114 1114     timestamp_gt
#define oid_2058 2058 // age  12 0 f f 2 1186 1114 1114     timestamp_age
#define oid_2059 2059 // age  14 0 f f s 1186 1114      select pg_catalog.age(cast(current_date as timestamp without time zone), $1)
#define oid_2060 2060 // =   t 1114 1114 16 2060 2061 timestamp_eq eqsel eqjoinsel
#define oid_2061 2061 // <>   f 1114 1114 16 2061 2060 timestamp_ne neqsel neqjoinsel
#define oid_2062 2062 // <   f 1114 1114 16 2064 2065 timestamp_lt scalarltsel scalarltjoinsel
#define oid_2063 2063 // <=   f 1114 1114 16 2065 2064 timestamp_le scalarltsel scalarltjoinsel
#define oid_2064 2064 // >   f 1114 1114 16 2062 2063 timestamp_gt scalargtsel scalargtjoinsel
#define oid_2065 2065 // >=   f 1114 1114 16 2063 2062 timestamp_ge scalargtsel scalargtjoinsel
#define oid_2066 2066 // +   f 1114 1186 1114 2553 timestamp_pl_interval -
#define oid_2067 2067 // -   f 1114 1114 1186 0 timestamp_mi -
#define oid_2068 2068 // -   f 1114 1186 1114 0 timestamp_mi_interval -
#define oid_2069 2069 // timezone  12 0 timestamp_zone_transform f f 2 1184 25 1114     timestamp_zone
#define oid_2070 2070 // timezone  12 0 timestamp_izone_transform f f 2 1184 1186 1114     timestamp_izone
#define oid_2071 2071 // date_pl_interval 12 0 f f 2 1114 1082 1186     date_pl_interval
#define oid_2072 2072 // date_mi_interval 12 0 f f 2 1114 1082 1186     date_mi_interval
#define oid_2073 2073 // substring  12 0 f f 2 25 25 25     textregexsubstr
#define oid_2074 2074 // substring  14 0 f f 3 25 25 25 25      select pg_catalog.substring($1, pg_catalog.similar_escape($2, $3))
#define oid_2075 2075 // bit  12 0 f f 2 1560 20 23     bitfromint8
#define oid_2076 2076 // int8  12 0 f f 20 1560     bittoint8
#define oid_2077 2077 // current_setting 12 0 f f s 25 25     show_config_by_name
#define oid_2078 2078 // set_config 12 0 f f f v 3 25 25 25 16     set_config_by_name
#define oid_2079 2079 // pg_table_is_visible 12 10 0 f f s 16 26     pg_table_is_visible
#define oid_2080 2080 // pg_type_is_visible 12 10 0 f f s 16 26     pg_type_is_visible
#define oid_2081 2081 // pg_function_is_visible 12 10 0 f f s 16 26     pg_function_is_visible
#define oid_2082 2082 // pg_operator_is_visible 12 10 0 f f s 16 26     pg_operator_is_visible
#define oid_2083 2083 // pg_opclass_is_visible 12 10 0 f f s 16 26     pg_opclass_is_visible
#define oid_2084 2084 // pg_show_all_settings 12 1000 0 f f t s 0 2249   {25,25,25,25,25,25,25,25,25,25,25,1009,25,25,25,23}  {o,o,o,o,o,o,o,o,o,o,o,o,o,o,o,o}  {name,setting,unit,category,short_desc,extra_desc,context,vartype,source,min_val,max_val,enumvals,boot_val,reset_val,sourcefile,sourceline}  show_all_settings
#define oid_2085 2085 // substr   12 0 f f 3 17 17 23 23     bytea_substr
#define oid_2086 2086 // substr   12 0 f f 2 17 17 23     bytea_substr_no_len
#define oid_2087 2087 // replace  12 0 f f 3 25 25 25 25     replace_text
#define oid_2088 2088 // split_part  12 0 f f 3 25 25 25 23     split_text
#define oid_2089 2089 // to_hex  12 0 f f 25 23     to_hex32
#define oid_2090 2090 // to_hex  12 0 f f 25 20     to_hex64
#define oid_2091 2091 // array_lower  12 0 f f 2 23 2277 23     array_lower
#define oid_2092 2092 // array_upper  12 0 f f 2 23 2277 23     array_upper
#define oid_2093 2093 // pg_conversion_is_visible 12 10 0 f f s 16 26     pg_conversion_is_visible
#define oid_2094 2094 // pg_stat_get_backend_activity_start 12 0 f f s 1184 23     pg_stat_get_backend_activity_start
#define oid_2095 2095 // 403 text_pattern_ops
#define oid_2096 2096 // pg_terminate_backend 12 0 f f v 16 23     pg_terminate_backend
#define oid_2097 2097 // 403 bpchar_pattern_ops
#define oid_2098 2098 // pg_get_functiondef 12 0 f f s 25 26     pg_get_functiondef
#define oid_2099 2099 // 403 money_ops
#define oid_2100 2100 // avg  12 0 f f 1700 20     aggregate_dummy
#define oid_2101 2101 // avg  12 0 f f 1700 23     aggregate_dummy
#define oid_2102 2102 // avg  12 0 f f 1700 21     aggregate_dummy
#define oid_2103 2103 // avg  12 0 f f 1700 1700     aggregate_dummy
#define oid_2104 2104 // avg  12 0 f f 701 700     aggregate_dummy
#define oid_2105 2105 // avg  12 0 f f 701 701     aggregate_dummy
#define oid_2106 2106 // avg  12 0 f f 1186 1186     aggregate_dummy
#define oid_2107 2107 // sum  12 0 f f 1700 20     aggregate_dummy
#define oid_2108 2108 // sum  12 0 f f 20 23     aggregate_dummy
#define oid_2109 2109 // sum  12 0 f f 20 21     aggregate_dummy
#define oid_2110 2110 // sum  12 0 f f 700 700     aggregate_dummy
#define oid_2111 2111 // sum  12 0 f f 701 701     aggregate_dummy
#define oid_2112 2112 // sum  12 0 f f 790 790     aggregate_dummy
#define oid_2113 2113 // sum  12 0 f f 1186 1186     aggregate_dummy
#define oid_2114 2114 // sum  12 0 f f 1700 1700     aggregate_dummy
#define oid_2115 2115 // max  12 0 f f 20 20     aggregate_dummy
#define oid_2116 2116 // max  12 0 f f 23 23     aggregate_dummy
#define oid_2117 2117 // max  12 0 f f 21 21     aggregate_dummy
#define oid_2118 2118 // max  12 0 f f 26 26     aggregate_dummy
#define oid_2119 2119 // max  12 0 f f 700 700     aggregate_dummy
#define oid_2120 2120 // max  12 0 f f 701 701     aggregate_dummy
#define oid_2121 2121 // max  12 0 f f 702 702     aggregate_dummy
#define oid_2122 2122 // max  12 0 f f 1082 1082     aggregate_dummy
#define oid_2123 2123 // max  12 0 f f 1083 1083     aggregate_dummy
#define oid_2124 2124 // max  12 0 f f 1266 1266     aggregate_dummy
#define oid_2125 2125 // max  12 0 f f 790 790     aggregate_dummy
#define oid_2126 2126 // max  12 0 f f 1114 1114     aggregate_dummy
#define oid_2127 2127 // max  12 0 f f 1184 1184     aggregate_dummy
#define oid_2128 2128 // max  12 0 f f 1186 1186     aggregate_dummy
#define oid_2129 2129 // max  12 0 f f 25 25     aggregate_dummy
#define oid_2130 2130 // max  12 0 f f 1700 1700     aggregate_dummy
#define oid_2131 2131 // min  12 0 f f 20 20     aggregate_dummy
#define oid_2132 2132 // min  12 0 f f 23 23     aggregate_dummy
#define oid_2133 2133 // min  12 0 f f 21 21     aggregate_dummy
#define oid_2134 2134 // min  12 0 f f 26 26     aggregate_dummy
#define oid_2135 2135 // min  12 0 f f 700 700     aggregate_dummy
#define oid_2136 2136 // min  12 0 f f 701 701     aggregate_dummy
#define oid_2137 2137 // min  12 0 f f 702 702     aggregate_dummy
#define oid_2138 2138 // min  12 0 f f 1082 1082     aggregate_dummy
#define oid_2139 2139 // min  12 0 f f 1083 1083     aggregate_dummy
#define oid_2140 2140 // min  12 0 f f 1266 1266     aggregate_dummy
#define oid_2141 2141 // min  12 0 f f 790 790     aggregate_dummy
#define oid_2142 2142 // min  12 0 f f 1114 1114     aggregate_dummy
#define oid_2143 2143 // min  12 0 f f 1184 1184     aggregate_dummy
#define oid_2144 2144 // min  12 0 f f 1186 1186     aggregate_dummy
#define oid_2145 2145 // min  12 0 f f 25 25     aggregate_dummy
#define oid_2146 2146 // min  12 0 f f 1700 1700     aggregate_dummy
#define oid_2147 2147 // count  12 0 f f 20 2276     aggregate_dummy
#define oid_2148 2148 // variance  12 0 f f 1700 20     aggregate_dummy
#define oid_2149 2149 // variance  12 0 f f 1700 23     aggregate_dummy
#define oid_2150 2150 // variance  12 0 f f 1700 21     aggregate_dummy
#define oid_2151 2151 // variance  12 0 f f 701 700     aggregate_dummy
#define oid_2152 2152 // variance  12 0 f f 701 701     aggregate_dummy
#define oid_2153 2153 // variance  12 0 f f 1700 1700     aggregate_dummy
#define oid_2154 2154 // stddev  12 0 f f 1700 20     aggregate_dummy
#define oid_2155 2155 // stddev  12 0 f f 1700 23     aggregate_dummy
#define oid_2156 2156 // stddev  12 0 f f 1700 21     aggregate_dummy
#define oid_2157 2157 // stddev  12 0 f f 701 700     aggregate_dummy
#define oid_2158 2158 // stddev  12 0 f f 701 701     aggregate_dummy
#define oid_2159 2159 // stddev  12 0 f f 1700 1700     aggregate_dummy
#define oid_2160 2160 // text_pattern_lt 12 0 f f 2 16 25 25     text_pattern_lt
#define oid_2161 2161 // text_pattern_le 12 0 f f 2 16 25 25     text_pattern_le
#define oid_2162 2162 // pg_get_function_arguments  12 0 f f s 25 26     pg_get_function_arguments
#define oid_2163 2163 // text_pattern_ge 12 0 f f 2 16 25 25     text_pattern_ge
#define oid_2164 2164 // text_pattern_gt 12 0 f f 2 16 25 25     text_pattern_gt
#define oid_2165 2165 // pg_get_function_result  12 0 f f s 25 26     pg_get_function_result
#define oid_2166 2166 // bttext_pattern_cmp 12 0 f f 2 23 25 25     bttext_pattern_cmp
#define oid_2167 2167 // ceiling  12 0 f f 1700 1700     numeric_ceil
#define oid_2168 2168 // pg_database_size 12 0 f f v 20 19     pg_database_size_name
#define oid_2169 2169 // power   12 0 f f 2 1700 1700 1700     numeric_power
#define oid_2170 2170 // width_bucket  12 0 f f 4 23 1700 1700 1700 23     width_bucket_numeric
#define oid_2171 2171 // pg_cancel_backend 12 0 f f v 16 23     pg_cancel_backend
#define oid_2172 2172 // pg_start_backup 12 0 f f v 2 3220 25 16     pg_start_backup
#define oid_2173 2173 // pg_stop_backup  12 0 f f v 0 3220      pg_stop_backup
#define oid_2174 2174 // bpchar_pattern_lt  12 0 f f 2 16 1042 1042     bpchar_pattern_lt
#define oid_2175 2175 // bpchar_pattern_le  12 0 f f 2 16 1042 1042     bpchar_pattern_le
#define oid_2176 2176 // array_length  12 0 f f 2 23 2277 23     array_length
#define oid_2177 2177 // bpchar_pattern_ge  12 0 f f 2 16 1042 1042     bpchar_pattern_ge
#define oid_2178 2178 // bpchar_pattern_gt  12 0 f f 2 16 1042 1042     bpchar_pattern_gt
#define oid_2179 2179 // gist_point_consistent 12 0 f f 5 16 2281 600 23 26 2281     gist_point_consistent
#define oid_2180 2180 // btbpchar_pattern_cmp 12 0 f f 2 23 1042 1042     btbpchar_pattern_cmp
#define oid_2181 2181 // has_sequence_privilege   12 0 f f s 3 16 19 25 25     has_sequence_privilege_name_name
#define oid_2182 2182 // has_sequence_privilege   12 0 f f s 3 16 19 26 25     has_sequence_privilege_name_id
#define oid_2183 2183 // has_sequence_privilege   12 0 f f s 3 16 26 25 25     has_sequence_privilege_id_name
#define oid_2184 2184 // has_sequence_privilege   12 0 f f s 3 16 26 26 25     has_sequence_privilege_id_id
#define oid_2185 2185 // has_sequence_privilege   12 0 f f s 2 16 25 25     has_sequence_privilege_name
#define oid_2186 2186 // has_sequence_privilege   12 0 f f s 2 16 26 25     has_sequence_privilege_id
#define oid_2188 2188 // btint48cmp  12 0 f f 2 23 23 20     btint48cmp
#define oid_2189 2189 // btint84cmp  12 0 f f 2 23 20 23     btint84cmp
#define oid_2190 2190 // btint24cmp  12 0 f f 2 23 21 23     btint24cmp
#define oid_2191 2191 // btint42cmp  12 0 f f 2 23 23 21     btint42cmp
#define oid_2192 2192 // btint28cmp  12 0 f f 2 23 21 20     btint28cmp
#define oid_2193 2193 // btint82cmp  12 0 f f 2 23 20 21     btint82cmp
#define oid_2194 2194 // btfloat48cmp 12 0 f f 2 23 700 701     btfloat48cmp
#define oid_2195 2195 // btfloat84cmp 12 0 f f 2 23 701 700     btfloat84cmp
#define oid_2196 2196 // inet_client_addr 12 0 f f f s 0 869      inet_client_addr
#define oid_2197 2197 // inet_client_port 12 0 f f f s 0 23      inet_client_port
#define oid_2198 2198 // inet_server_addr 12 0 f f f s 0 869      inet_server_addr
#define oid_2199 2199 // inet_server_port 12 0 f f f s 0 23      inet_server_port
#define oid_2200 2200 // public
#define oid_2201 2201 // _refcursor  A \054 1790 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_2202 2202 // regprocedure 4 t \054 2207 regprocedurein regprocedureout regprocedurerecv regproceduresend
#define oid_2203 2203 // regoper  4 t \054 2208 regoperin regoperout regoperrecv regopersend
#define oid_2204 2204 // regoperator  4 t \054 2209 regoperatorin regoperatorout regoperatorrecv regoperatorsend
#define oid_2205 2205 // regclass  4 t \054 2210 regclassin regclassout regclassrecv regclasssend
#define oid_2206 2206 // regtype  4 t \054 2211 regtypein regtypeout regtyperecv regtypesend
#define oid_2207 2207 // _regprocedure A \054 2202 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_2208 2208 // _regoper  A \054 2203 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_2209 2209 // _regoperator A \054 2204 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_2210 2210 // _regclass  A \054 2205 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_2211 2211 // _regtype  A \054 2206 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_2212 2212 // regprocedurein 12 0 f f s 2202 2275     regprocedurein
#define oid_2213 2213 // regprocedureout 12 0 f f s 2275 2202     regprocedureout
#define oid_2214 2214 // regoperin  12 0 f f s 2203 2275     regoperin
#define oid_2215 2215 // regoperout 12 0 f f s 2275 2203     regoperout
#define oid_2216 2216 // regoperatorin 12 0 f f s 2204 2275     regoperatorin
#define oid_2217 2217 // regoperatorout 12 0 f f s 2275 2204     regoperatorout
#define oid_2218 2218 // regclassin 12 0 f f s 2205 2275     regclassin
#define oid_2219 2219 // regclassout 12 0 f f s 2275 2205     regclassout
#define oid_2220 2220 // regtypein  12 0 f f s 2206 2275     regtypein
#define oid_2221 2221 // regtypeout 12 0 f f s 2275 2206     regtypeout
#define oid_2222 2222 // 405 bool_ops
#define oid_2223 2223 // 405 bytea_ops
#define oid_2224 2224 // 405 int2vector_ops
#define oid_2225 2225 // 405 xid_ops
#define oid_2226 2226 // 405 cid_ops
#define oid_2227 2227 // 405 abstime_ops
#define oid_2228 2228 // 405 reltime_ops
#define oid_2229 2229 // 405 text_pattern_ops
#define oid_2230 2230 // pg_stat_clear_snapshot 12 0 f f f v 0 2278      pg_stat_clear_snapshot
#define oid_2231 2231 // 405 bpchar_pattern_ops
#define oid_2232 2232 // pg_get_function_identity_arguments  12 0 f f s 25 26     pg_get_function_identity_arguments
#define oid_2233 2233 // 403 reltime_ops
#define oid_2234 2234 // 403 tinterval_ops
#define oid_2235 2235 // 405 aclitem_ops
#define oid_2236 2236 // bit_and    12 0 f f 21 21     aggregate_dummy
#define oid_2237 2237 // bit_or     12 0 f f 21 21     aggregate_dummy
#define oid_2238 2238 // bit_and    12 0 f f 23 23     aggregate_dummy
#define oid_2239 2239 // bit_or     12 0 f f 23 23     aggregate_dummy
#define oid_2240 2240 // bit_and    12 0 f f 20 20     aggregate_dummy
#define oid_2241 2241 // bit_or     12 0 f f 20 20     aggregate_dummy
#define oid_2242 2242 // bit_and    12 0 f f 1560 1560     aggregate_dummy
#define oid_2243 2243 // bit_or     12 0 f f 1560 1560     aggregate_dummy
#define oid_2244 2244 // max  12 0 f f 1042 1042     aggregate_dummy
#define oid_2245 2245 // min  12 0 f f 1042 1042     aggregate_dummy
#define oid_2246 2246 // fmgr_internal_validator 12 0 f f s 2278 26     fmgr_internal_validator
#define oid_2247 2247 // fmgr_c_validator 12 0 f f s 2278 26     fmgr_c_validator
#define oid_2248 2248 // fmgr_sql_validator 12 0 f f s 2278 26     fmgr_sql_validator
#define oid_2249 2249 // record  p P \054 0 2287 record_in record_out record_recv record_send - d x 0
#define oid_2250 2250 // has_database_privilege   12 0 f f s 3 16 19 25 25     has_database_privilege_name_name
#define oid_2251 2251 // has_database_privilege   12 0 f f s 3 16 19 26 25     has_database_privilege_name_id
#define oid_2252 2252 // has_database_privilege   12 0 f f s 3 16 26 25 25     has_database_privilege_id_name
#define oid_2253 2253 // has_database_privilege   12 0 f f s 3 16 26 26 25     has_database_privilege_id_id
#define oid_2254 2254 // has_database_privilege   12 0 f f s 2 16 25 25     has_database_privilege_name
#define oid_2255 2255 // has_database_privilege   12 0 f f s 2 16 26 25     has_database_privilege_id
#define oid_2256 2256 // has_function_privilege   12 0 f f s 3 16 19 25 25     has_function_privilege_name_name
#define oid_2257 2257 // has_function_privilege   12 0 f f s 3 16 19 26 25     has_function_privilege_name_id
#define oid_2258 2258 // has_function_privilege   12 0 f f s 3 16 26 25 25     has_function_privilege_id_name
#define oid_2259 2259 // has_function_privilege   12 0 f f s 3 16 26 26 25     has_function_privilege_id_id
#define oid_2260 2260 // has_function_privilege   12 0 f f s 2 16 25 25     has_function_privilege_name
#define oid_2261 2261 // has_function_privilege   12 0 f f s 2 16 26 25     has_function_privilege_id
#define oid_2262 2262 // has_language_privilege   12 0 f f s 3 16 19 25 25     has_language_privilege_name_name
#define oid_2263 2263 // has_language_privilege   12 0 f f s 3 16 19 26 25     has_language_privilege_name_id
#define oid_2264 2264 // has_language_privilege   12 0 f f s 3 16 26 25 25     has_language_privilege_id_name
#define oid_2265 2265 // has_language_privilege   12 0 f f s 3 16 26 26 25     has_language_privilege_id_id
#define oid_2266 2266 // has_language_privilege   12 0 f f s 2 16 25 25     has_language_privilege_name
#define oid_2267 2267 // has_language_privilege   12 0 f f s 2 16 26 25     has_language_privilege_id
#define oid_2268 2268 // has_schema_privilege   12 0 f f s 3 16 19 25 25     has_schema_privilege_name_name
#define oid_2269 2269 // has_schema_privilege   12 0 f f s 3 16 19 26 25     has_schema_privilege_name_id
#define oid_2270 2270 // has_schema_privilege   12 0 f f s 3 16 26 25 25     has_schema_privilege_id_name
#define oid_2271 2271 // has_schema_privilege   12 0 f f s 3 16 26 26 25     has_schema_privilege_id_id
#define oid_2272 2272 // has_schema_privilege   12 0 f f s 2 16 25 25     has_schema_privilege_name
#define oid_2273 2273 // has_schema_privilege   12 0 f f s 2 16 26 25     has_schema_privilege_id
#define oid_2274 2274 // pg_stat_reset   12 0 f f f v 0 2278      pg_stat_reset
#define oid_2275 2275 // cstring -2 p P \054 0 1263 cstring_in cstring_out cstring_recv cstring_send
#define oid_2276 2276 // any  4 p P \054 0 any_in any_out -
#define oid_2277 2277 // anyarray p P \054 0 anyarray_in anyarray_out anyarray_recv anyarray_send - d x 0
#define oid_2278 2278 // void  4 p P \054 0 void_in void_out void_recv void_send
#define oid_2279 2279 // trigger  4 p P \054 0 trigger_in trigger_out -
#define oid_2280 2280 // language_handler 4 p P \054 0 language_handler_in language_handler_out -
#define oid_2281 2281 // internal  SIZEOF_POINTER p P \054 0 internal_in internal_out - - ALIGNOF_POINTER p 0
#define oid_2282 2282 // opaque  4 p P \054 0 opaque_in opaque_out -
#define oid_2283 2283 // anyelement  4 p P \054 0 anyelement_in anyelement_out -
#define oid_2284 2284 // regexp_replace  12 0 f f 3 25 25 25 25     textregexreplace_noopt
#define oid_2285 2285 // regexp_replace  12 0 f f 4 25 25 25 25 25     textregexreplace
#define oid_2286 2286 // pg_total_relation_size 12 0 f f v 20 2205     pg_total_relation_size
#define oid_2287 2287 // _record p P \054 2249 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_2288 2288 // pg_size_pretty  12 0 f f v 25 20     pg_size_pretty
#define oid_2289 2289 // pg_options_to_table 12 3 0 f f t s 2249 1009  {1009,25,25}  {i,o,o}  {options_array,option_name,option_value}  pg_options_to_table
#define oid_2290 2290 // record_in  12 0 f f s 3 2249 2275 26 23     record_in
#define oid_2291 2291 // record_out 12 0 f f s 2275 2249     record_out
#define oid_2292 2292 // cstring_in 12 0 f f 2275 2275     cstring_in
#define oid_2293 2293 // cstring_out 12 0 f f 2275 2275     cstring_out
#define oid_2294 2294 // any_in  12 0 f f 2276 2275     any_in
#define oid_2295 2295 // any_out  12 0 f f 2275 2276     any_out
#define oid_2296 2296 // anyarray_in 12 0 f f 2277 2275     anyarray_in
#define oid_2297 2297 // anyarray_out 12 0 f f s 2275 2277     anyarray_out
#define oid_2298 2298 // void_in  12 0 f f 2278 2275     void_in
#define oid_2299 2299 // void_out  12 0 f f 2275 2278     void_out
#define oid_2300 2300 // trigger_in 12 0 f f f 2279 2275     trigger_in
#define oid_2301 2301 // trigger_out 12 0 f f 2275 2279     trigger_out
#define oid_2302 2302 // language_handler_in 12 0 f f f 2280 2275     language_handler_in
#define oid_2303 2303 // language_handler_out 12 0 f f 2275 2280     language_handler_out
#define oid_2304 2304 // internal_in 12 0 f f f 2281 2275     internal_in
#define oid_2305 2305 // internal_out 12 0 f f 2275 2281     internal_out
#define oid_2306 2306 // opaque_in  12 0 f f f 2282 2275     opaque_in
#define oid_2307 2307 // opaque_out 12 0 f f 2275 2282     opaque_out
#define oid_2308 2308 // ceil   12 0 f f 701 701     dceil
#define oid_2309 2309 // floor   12 0 f f 701 701     dfloor
#define oid_2310 2310 // sign   12 0 f f 701 701     dsign
#define oid_2311 2311 // md5  12 0 f f 25 25     md5_text
#define oid_2312 2312 // anyelement_in 12 0 f f 2283 2275     anyelement_in
#define oid_2313 2313 // anyelement_out 12 0 f f 2275 2283     anyelement_out
#define oid_2314 2314 // ~<~ f 25 25 16 2318 2317 text_pattern_lt scalarltsel scalarltjoinsel
#define oid_2315 2315 // ~<=~ f 25 25 16 2317 2318 text_pattern_le scalarltsel scalarltjoinsel
#define oid_2316 2316 // postgresql_fdw_validator 12 0 f f 2 16 1009 26     postgresql_fdw_validator
#define oid_2317 2317 // ~>=~ f 25 25 16 2315 2314 text_pattern_ge scalargtsel scalargtjoinsel
#define oid_2318 2318 // ~>~ f 25 25 16 2314 2315 text_pattern_gt scalargtsel scalargtjoinsel
#define oid_2319 2319 // pg_encoding_max_length  12 0 f f 23 23     pg_encoding_max_length_sql
#define oid_2320 2320 // ceiling   12 0 f f 701 701     dceil
#define oid_2321 2321 // md5  12 0 f f 25 17     md5_bytea
#define oid_2322 2322 // pg_tablespace_size 12 0 f f v 20 26     pg_tablespace_size_oid
#define oid_2323 2323 // pg_tablespace_size 12 0 f f v 20 19     pg_tablespace_size_name
#define oid_2324 2324 // pg_database_size 12 0 f f v 20 26     pg_database_size_oid
#define oid_2325 2325 // pg_relation_size 14 0 f f v 20 2205      select pg_catalog.pg_relation_size($1, ''main'')
#define oid_2326 2326 // ~<~ f 1042 1042 16 2330 2329 bpchar_pattern_lt scalarltsel scalarltjoinsel
#define oid_2327 2327 // ~<=~ f 1042 1042 16 2329 2330 bpchar_pattern_le scalarltsel scalarltjoinsel
#define oid_2329 2329 // ~>=~ f 1042 1042 16 2327 2326 bpchar_pattern_ge scalargtsel scalargtjoinsel
#define oid_2330 2330 // ~>~ f 1042 1042 16 2326 2327 bpchar_pattern_gt scalargtsel scalargtjoinsel
#define oid_2331 2331 // unnest   12 100 0 f f t 2283 2277     array_unnest
#define oid_2332 2332 // pg_relation_size 12 0 f f v 2 20 2205 25     pg_relation_size
#define oid_2333 2333 // array_agg_transfn  12 0 f f f 2 2281 2281 2776     array_agg_transfn
#define oid_2334 2334 // array_agg_finalfn  12 0 f f f 2 2277 2281 2776     array_agg_finalfn
#define oid_2335 2335 // array_agg   12 0 f f 2277 2776     aggregate_dummy
#define oid_2338 2338 // date_lt_timestamp   12 0 f f 2 16 1082 1114     date_lt_timestamp
#define oid_2339 2339 // date_le_timestamp   12 0 f f 2 16 1082 1114     date_le_timestamp
#define oid_2340 2340 // date_eq_timestamp   12 0 f f 2 16 1082 1114     date_eq_timestamp
#define oid_2341 2341 // date_gt_timestamp   12 0 f f 2 16 1082 1114     date_gt_timestamp
#define oid_2342 2342 // date_ge_timestamp   12 0 f f 2 16 1082 1114     date_ge_timestamp
#define oid_2343 2343 // date_ne_timestamp   12 0 f f 2 16 1082 1114     date_ne_timestamp
#define oid_2344 2344 // date_cmp_timestamp  12 0 f f 2 23 1082 1114     date_cmp_timestamp
#define oid_2345 2345 // <   f 1082 1114  16 2375 2348 date_lt_timestamp scalarltsel scalarltjoinsel
#define oid_2346 2346 // <=   f 1082 1114  16 2374 2349 date_le_timestamp scalarltsel scalarltjoinsel
#define oid_2347 2347 // =   1082 1114  16 2373 2350 date_eq_timestamp eqsel eqjoinsel
#define oid_2348 2348 // >=   f 1082 1114  16 2372 2345 date_ge_timestamp scalargtsel scalargtjoinsel
#define oid_2349 2349 // >   f 1082 1114  16 2371 2346 date_gt_timestamp scalargtsel scalargtjoinsel
#define oid_2350 2350 // <>   f 1082 1114  16 2376 2347 date_ne_timestamp neqsel neqjoinsel
#define oid_2351 2351 // date_lt_timestamptz  12 0 f f s 2 16 1082 1184     date_lt_timestamptz
#define oid_2352 2352 // date_le_timestamptz  12 0 f f s 2 16 1082 1184     date_le_timestamptz
#define oid_2353 2353 // date_eq_timestamptz  12 0 f f s 2 16 1082 1184     date_eq_timestamptz
#define oid_2354 2354 // date_gt_timestamptz  12 0 f f s 2 16 1082 1184     date_gt_timestamptz
#define oid_2355 2355 // date_ge_timestamptz  12 0 f f s 2 16 1082 1184     date_ge_timestamptz
#define oid_2356 2356 // date_ne_timestamptz  12 0 f f s 2 16 1082 1184     date_ne_timestamptz
#define oid_2357 2357 // date_cmp_timestamptz  12 0 f f s 2 23 1082 1184     date_cmp_timestamptz
#define oid_2358 2358 // <   f 1082 1184  16 2388 2361 date_lt_timestamptz scalarltsel scalarltjoinsel
#define oid_2359 2359 // <=   f 1082 1184  16 2387 2362 date_le_timestamptz scalarltsel scalarltjoinsel
#define oid_2360 2360 // =   1082 1184  16 2386 2363 date_eq_timestamptz eqsel eqjoinsel
#define oid_2361 2361 // >=   f 1082 1184  16 2385 2358 date_ge_timestamptz scalargtsel scalargtjoinsel
#define oid_2362 2362 // >   f 1082 1184  16 2384 2359 date_gt_timestamptz scalargtsel scalargtjoinsel
#define oid_2363 2363 // <>   f 1082 1184  16 2389 2360 date_ne_timestamptz neqsel neqjoinsel
#define oid_2364 2364 // timestamp_lt_date   12 0 f f 2 16 1114 1082     timestamp_lt_date
#define oid_2365 2365 // timestamp_le_date   12 0 f f 2 16 1114 1082     timestamp_le_date
#define oid_2366 2366 // timestamp_eq_date   12 0 f f 2 16 1114 1082     timestamp_eq_date
#define oid_2367 2367 // timestamp_gt_date   12 0 f f 2 16 1114 1082     timestamp_gt_date
#define oid_2368 2368 // timestamp_ge_date   12 0 f f 2 16 1114 1082     timestamp_ge_date
#define oid_2369 2369 // timestamp_ne_date   12 0 f f 2 16 1114 1082     timestamp_ne_date
#define oid_2370 2370 // timestamp_cmp_date  12 0 f f 2 23 1114 1082     timestamp_cmp_date
#define oid_2371 2371 // <   f 1114 1082  16 2349 2374 timestamp_lt_date scalarltsel scalarltjoinsel
#define oid_2372 2372 // <=   f 1114 1082  16 2348 2375 timestamp_le_date scalarltsel scalarltjoinsel
#define oid_2373 2373 // =   1114 1082  16 2347 2376 timestamp_eq_date eqsel eqjoinsel
#define oid_2374 2374 // >=   f 1114 1082  16 2346 2371 timestamp_ge_date scalargtsel scalargtjoinsel
#define oid_2375 2375 // >   f 1114 1082  16 2345 2372 timestamp_gt_date scalargtsel scalargtjoinsel
#define oid_2376 2376 // <>   f 1114 1082  16 2350 2373 timestamp_ne_date neqsel neqjoinsel
#define oid_2377 2377 // timestamptz_lt_date  12 0 f f s 2 16 1184 1082     timestamptz_lt_date
#define oid_2378 2378 // timestamptz_le_date  12 0 f f s 2 16 1184 1082     timestamptz_le_date
#define oid_2379 2379 // timestamptz_eq_date  12 0 f f s 2 16 1184 1082     timestamptz_eq_date
#define oid_2380 2380 // timestamptz_gt_date  12 0 f f s 2 16 1184 1082     timestamptz_gt_date
#define oid_2381 2381 // timestamptz_ge_date  12 0 f f s 2 16 1184 1082     timestamptz_ge_date
#define oid_2382 2382 // timestamptz_ne_date  12 0 f f s 2 16 1184 1082     timestamptz_ne_date
#define oid_2383 2383 // timestamptz_cmp_date  12 0 f f s 2 23 1184 1082     timestamptz_cmp_date
#define oid_2384 2384 // <   f 1184 1082  16 2362 2387 timestamptz_lt_date scalarltsel scalarltjoinsel
#define oid_2385 2385 // <=   f 1184 1082  16 2361 2388 timestamptz_le_date scalarltsel scalarltjoinsel
#define oid_2386 2386 // =   1184 1082  16 2360 2389 timestamptz_eq_date eqsel eqjoinsel
#define oid_2387 2387 // >=   f 1184 1082  16 2359 2384 timestamptz_ge_date scalargtsel scalargtjoinsel
#define oid_2388 2388 // >   f 1184 1082  16 2358 2385 timestamptz_gt_date scalargtsel scalargtjoinsel
#define oid_2389 2389 // <>   f 1184 1082  16 2363 2386 timestamptz_ne_date neqsel neqjoinsel
#define oid_2390 2390 // has_tablespace_privilege   12 0 f f s 3 16 19 25 25     has_tablespace_privilege_name_name
#define oid_2391 2391 // has_tablespace_privilege   12 0 f f s 3 16 19 26 25     has_tablespace_privilege_name_id
#define oid_2392 2392 // has_tablespace_privilege   12 0 f f s 3 16 26 25 25     has_tablespace_privilege_id_name
#define oid_2393 2393 // has_tablespace_privilege   12 0 f f s 3 16 26 26 25     has_tablespace_privilege_id_id
#define oid_2394 2394 // has_tablespace_privilege   12 0 f f s 2 16 25 25     has_tablespace_privilege_name
#define oid_2395 2395 // has_tablespace_privilege   12 0 f f s 2 16 26 25     has_tablespace_privilege_id
#define oid_2398 2398 // shell_in  12 0 f f f 2282 2275     shell_in
#define oid_2399 2399 // shell_out  12 0 f f 2275 2282     shell_out
#define oid_2400 2400 // array_recv   12 0 f f s 3 2277 2281 26 23      array_recv
#define oid_2401 2401 // array_send   12 0 f f s 17 2277     array_send
#define oid_2402 2402 // record_recv   12 0 f f s 3 2249 2281 26 23      record_recv
#define oid_2403 2403 // record_send   12 0 f f s 17 2249      record_send
#define oid_2404 2404 // int2recv   12 0 f f 21 2281     int2recv
#define oid_2405 2405 // int2send   12 0 f f 17 21     int2send
#define oid_2406 2406 // int4recv   12 0 f f 23 2281     int4recv
#define oid_2407 2407 // int4send   12 0 f f 17 23     int4send
#define oid_2408 2408 // int8recv   12 0 f f 20 2281     int8recv
#define oid_2409 2409 // int8send   12 0 f f 17 20     int8send
#define oid_2410 2410 // int2vectorrecv  12 0 f f 22 2281     int2vectorrecv
#define oid_2411 2411 // int2vectorsend  12 0 f f 17 22     int2vectorsend
#define oid_2412 2412 // bytearecv   12 0 f f 17 2281     bytearecv
#define oid_2413 2413 // byteasend   12 0 f f 17 17     byteasend
#define oid_2414 2414 // textrecv   12 0 f f s 25 2281     textrecv
#define oid_2415 2415 // textsend   12 0 f f s 17 25     textsend
#define oid_2416 2416 // unknownrecv   12 0 f f 705 2281     unknownrecv
#define oid_2417 2417 // unknownsend   12 0 f f 17 705     unknownsend
#define oid_2418 2418 // oidrecv   12 0 f f 26 2281     oidrecv
#define oid_2419 2419 // oidsend   12 0 f f 17 26     oidsend
#define oid_2420 2420 // oidvectorrecv   12 0 f f 30 2281     oidvectorrecv
#define oid_2421 2421 // oidvectorsend   12 0 f f 17 30     oidvectorsend
#define oid_2422 2422 // namerecv   12 0 f f s 19 2281     namerecv
#define oid_2423 2423 // namesend   12 0 f f s 17 19     namesend
#define oid_2424 2424 // float4recv   12 0 f f 700 2281     float4recv
#define oid_2425 2425 // float4send   12 0 f f 17 700     float4send
#define oid_2426 2426 // float8recv   12 0 f f 701 2281     float8recv
#define oid_2427 2427 // float8send   12 0 f f 17 701     float8send
#define oid_2428 2428 // point_recv   12 0 f f 600 2281     point_recv
#define oid_2429 2429 // point_send   12 0 f f 17 600     point_send
#define oid_2430 2430 // bpcharrecv   12 0 f f s 3 1042 2281 26 23      bpcharrecv
#define oid_2431 2431 // bpcharsend   12 0 f f s 17 1042     bpcharsend
#define oid_2432 2432 // varcharrecv   12 0 f f s 3 1043 2281 26 23      varcharrecv
#define oid_2433 2433 // varcharsend   12 0 f f s 17 1043     varcharsend
#define oid_2434 2434 // charrecv   12 0 f f 18 2281     charrecv
#define oid_2435 2435 // charsend   12 0 f f 17 18     charsend
#define oid_2436 2436 // boolrecv   12 0 f f 16 2281     boolrecv
#define oid_2437 2437 // boolsend   12 0 f f 17 16     boolsend
#define oid_2438 2438 // tidrecv   12 0 f f 27 2281     tidrecv
#define oid_2439 2439 // tidsend   12 0 f f 17 27     tidsend
#define oid_2440 2440 // xidrecv   12 0 f f 28 2281     xidrecv
#define oid_2441 2441 // xidsend   12 0 f f 17 28     xidsend
#define oid_2442 2442 // cidrecv   12 0 f f 29 2281     cidrecv
#define oid_2443 2443 // cidsend   12 0 f f 17 29     cidsend
#define oid_2444 2444 // regprocrecv   12 0 f f 24 2281     regprocrecv
#define oid_2445 2445 // regprocsend   12 0 f f 17 24     regprocsend
#define oid_2446 2446 // regprocedurerecv  12 0 f f 2202 2281     regprocedurerecv
#define oid_2447 2447 // regproceduresend  12 0 f f 17 2202     regproceduresend
#define oid_2448 2448 // regoperrecv   12 0 f f 2203 2281     regoperrecv
#define oid_2449 2449 // regopersend   12 0 f f 17 2203     regopersend
#define oid_2450 2450 // regoperatorrecv  12 0 f f 2204 2281     regoperatorrecv
#define oid_2451 2451 // regoperatorsend  12 0 f f 17 2204     regoperatorsend
#define oid_2452 2452 // regclassrecv   12 0 f f 2205 2281     regclassrecv
#define oid_2453 2453 // regclasssend   12 0 f f 17 2205     regclasssend
#define oid_2454 2454 // regtyperecv   12 0 f f 2206 2281     regtyperecv
#define oid_2455 2455 // regtypesend   12 0 f f 17 2206     regtypesend
#define oid_2456 2456 // bit_recv   12 0 f f 3 1560 2281 26 23      bit_recv
#define oid_2457 2457 // bit_send   12 0 f f 17 1560     bit_send
#define oid_2458 2458 // varbit_recv   12 0 f f 3 1562 2281 26 23      varbit_recv
#define oid_2459 2459 // varbit_send   12 0 f f 17 1562     varbit_send
#define oid_2460 2460 // numeric_recv   12 0 f f 3 1700 2281 26 23      numeric_recv
#define oid_2461 2461 // numeric_send   12 0 f f 17 1700     numeric_send
#define oid_2462 2462 // abstimerecv   12 0 f f 702 2281     abstimerecv
#define oid_2463 2463 // abstimesend   12 0 f f 17 702     abstimesend
#define oid_2464 2464 // reltimerecv   12 0 f f 703 2281     reltimerecv
#define oid_2465 2465 // reltimesend   12 0 f f 17 703     reltimesend
#define oid_2466 2466 // tintervalrecv   12 0 f f 704 2281     tintervalrecv
#define oid_2467 2467 // tintervalsend   12 0 f f 17 704     tintervalsend
#define oid_2468 2468 // date_recv   12 0 f f 1082 2281     date_recv
#define oid_2469 2469 // date_send   12 0 f f 17 1082     date_send
#define oid_2470 2470 // time_recv   12 0 f f 3 1083 2281 26 23      time_recv
#define oid_2471 2471 // time_send   12 0 f f 17 1083     time_send
#define oid_2472 2472 // timetz_recv   12 0 f f 3 1266 2281 26 23      timetz_recv
#define oid_2473 2473 // timetz_send   12 0 f f 17 1266     timetz_send
#define oid_2474 2474 // timestamp_recv  12 0 f f 3 1114 2281 26 23      timestamp_recv
#define oid_2475 2475 // timestamp_send  12 0 f f 17 1114     timestamp_send
#define oid_2476 2476 // timestamptz_recv  12 0 f f 3 1184 2281 26 23      timestamptz_recv
#define oid_2477 2477 // timestamptz_send  12 0 f f 17 1184     timestamptz_send
#define oid_2478 2478 // interval_recv   12 0 f f 3 1186 2281 26 23      interval_recv
#define oid_2479 2479 // interval_send   12 0 f f 17 1186     interval_send
#define oid_2480 2480 // lseg_recv   12 0 f f 601 2281     lseg_recv
#define oid_2481 2481 // lseg_send   12 0 f f 17 601     lseg_send
#define oid_2482 2482 // path_recv   12 0 f f 602 2281     path_recv
#define oid_2483 2483 // path_send   12 0 f f 17 602     path_send
#define oid_2484 2484 // box_recv   12 0 f f 603 2281     box_recv
#define oid_2485 2485 // box_send   12 0 f f 17 603     box_send
#define oid_2486 2486 // poly_recv   12 0 f f 604 2281     poly_recv
#define oid_2487 2487 // poly_send   12 0 f f 17 604     poly_send
#define oid_2488 2488 // line_recv   12 0 f f 628 2281     line_recv
#define oid_2489 2489 // line_send   12 0 f f 17 628     line_send
#define oid_2490 2490 // circle_recv   12 0 f f 718 2281     circle_recv
#define oid_2491 2491 // circle_send   12 0 f f 17 718     circle_send
#define oid_2492 2492 // cash_recv   12 0 f f 790 2281     cash_recv
#define oid_2493 2493 // cash_send   12 0 f f 17 790     cash_send
#define oid_2494 2494 // macaddr_recv   12 0 f f 829 2281     macaddr_recv
#define oid_2495 2495 // macaddr_send   12 0 f f 17 829     macaddr_send
#define oid_2496 2496 // inet_recv   12 0 f f 869 2281     inet_recv
#define oid_2497 2497 // inet_send   12 0 f f 17 869     inet_send
#define oid_2498 2498 // cidr_recv   12 0 f f 650 2281     cidr_recv
#define oid_2499 2499 // cidr_send   12 0 f f 17 650     cidr_send
#define oid_2500 2500 // cstring_recv   12 0 f f s 2275 2281     cstring_recv
#define oid_2501 2501 // cstring_send   12 0 f f s 17 2275     cstring_send
#define oid_2502 2502 // anyarray_recv   12 0 f f s 2277 2281     anyarray_recv
#define oid_2503 2503 // anyarray_send   12 0 f f s 17 2277     anyarray_send
#define oid_2504 2504 // pg_get_ruledef  12 0 f f s 2 25 26 16     pg_get_ruledef_ext
#define oid_2505 2505 // pg_get_viewdef  12 0 f f s 2 25 25 16     pg_get_viewdef_name_ext
#define oid_2506 2506 // pg_get_viewdef  12 0 f f s 2 25 26 16     pg_get_viewdef_ext
#define oid_2507 2507 // pg_get_indexdef  12 0 f f s 3 25 26 23 16     pg_get_indexdef_ext
#define oid_2508 2508 // pg_get_constraintdef 12 0 f f s 2 25 26 16     pg_get_constraintdef_ext
#define oid_2509 2509 // pg_get_expr   12 0 f f s 3 25 194 26 16     pg_get_expr_ext
#define oid_2510 2510 // pg_prepared_statement 12 1000 0 f f t s 0 2249   {25,25,1184,2211,16}  {o,o,o,o,o}  {name,statement,prepare_time,parameter_types,from_sql}  pg_prepared_statement
#define oid_2511 2511 // pg_cursor 12 1000 0 f f t s 0 2249   {25,25,16,16,16,1184}  {o,o,o,o,o,o}  {name,statement,is_holdable,is_binary,is_scrollable,creation_time}  pg_cursor
#define oid_2512 2512 // float8_var_pop  12 0 f f 701 1022     float8_var_pop
#define oid_2513 2513 // float8_stddev_pop 12 0 f f 701 1022     float8_stddev_pop
#define oid_2514 2514 // numeric_var_pop 12 0 f f f 1700 2281     numeric_var_pop
#define oid_2515 2515 // booland_statefunc   12 0 f f 2 16 16 16     booland_statefunc
#define oid_2516 2516 // boolor_statefunc   12 0 f f 2 16 16 16     boolor_statefunc
#define oid_2517 2517 // bool_and    12 0 f f 16 16     aggregate_dummy
#define oid_2518 2518 // bool_or    12 0 f f 16 16     aggregate_dummy
#define oid_2519 2519 // every     12 0 f f 16 16     aggregate_dummy
#define oid_2520 2520 // timestamp_lt_timestamptz 12 0 f f s 2 16 1114 1184     timestamp_lt_timestamptz
#define oid_2521 2521 // timestamp_le_timestamptz 12 0 f f s 2 16 1114 1184     timestamp_le_timestamptz
#define oid_2522 2522 // timestamp_eq_timestamptz 12 0 f f s 2 16 1114 1184     timestamp_eq_timestamptz
#define oid_2523 2523 // timestamp_gt_timestamptz 12 0 f f s 2 16 1114 1184     timestamp_gt_timestamptz
#define oid_2524 2524 // timestamp_ge_timestamptz 12 0 f f s 2 16 1114 1184     timestamp_ge_timestamptz
#define oid_2525 2525 // timestamp_ne_timestamptz 12 0 f f s 2 16 1114 1184     timestamp_ne_timestamptz
#define oid_2526 2526 // timestamp_cmp_timestamptz 12 0 f f s 2 23 1114 1184     timestamp_cmp_timestamptz
#define oid_2527 2527 // timestamptz_lt_timestamp 12 0 f f s 2 16 1184 1114     timestamptz_lt_timestamp
#define oid_2528 2528 // timestamptz_le_timestamp 12 0 f f s 2 16 1184 1114     timestamptz_le_timestamp
#define oid_2529 2529 // timestamptz_eq_timestamp 12 0 f f s 2 16 1184 1114     timestamptz_eq_timestamp
#define oid_2530 2530 // timestamptz_gt_timestamp 12 0 f f s 2 16 1184 1114     timestamptz_gt_timestamp
#define oid_2531 2531 // timestamptz_ge_timestamp 12 0 f f s 2 16 1184 1114     timestamptz_ge_timestamp
#define oid_2532 2532 // timestamptz_ne_timestamp 12 0 f f s 2 16 1184 1114     timestamptz_ne_timestamp
#define oid_2533 2533 // timestamptz_cmp_timestamp 12 0 f f s 2 23 1184 1114     timestamptz_cmp_timestamp
#define oid_2534 2534 // <   f 1114 1184  16 2544 2537 timestamp_lt_timestamptz scalarltsel scalarltjoinsel
#define oid_2535 2535 // <=   f 1114 1184  16 2543 2538 timestamp_le_timestamptz scalarltsel scalarltjoinsel
#define oid_2536 2536 // =   1114 1184  16 2542 2539 timestamp_eq_timestamptz eqsel eqjoinsel
#define oid_2537 2537 // >=   f 1114 1184  16 2541 2534 timestamp_ge_timestamptz scalargtsel scalargtjoinsel
#define oid_2538 2538 // >   f 1114 1184  16 2540 2535 timestamp_gt_timestamptz scalargtsel scalargtjoinsel
#define oid_2539 2539 // <>   f 1114 1184  16 2545 2536 timestamp_ne_timestamptz neqsel neqjoinsel
#define oid_2540 2540 // <   f 1184 1114  16 2538 2543 timestamptz_lt_timestamp scalarltsel scalarltjoinsel
#define oid_2541 2541 // <=   f 1184 1114  16 2537 2544 timestamptz_le_timestamp scalarltsel scalarltjoinsel
#define oid_2542 2542 // =   1184 1114  16 2536 2545 timestamptz_eq_timestamp eqsel eqjoinsel
#define oid_2543 2543 // >=   f 1184 1114  16 2535 2540 timestamptz_ge_timestamp scalargtsel scalargtjoinsel
#define oid_2544 2544 // >   f 1184 1114  16 2534 2541 timestamptz_gt_timestamp scalargtsel scalargtjoinsel
#define oid_2545 2545 // <>   f 1184 1114  16 2539 2542 timestamptz_ne_timestamp neqsel neqjoinsel
#define oid_2546 2546 // interval_pl_date  14 0 f f 2 1114 1186 1082      select $2 + $1
#define oid_2547 2547 // interval_pl_timetz  14 0 f f 2 1266 1186 1266      select $2 + $1
#define oid_2548 2548 // interval_pl_timestamp 14 0 f f 2 1114 1186 1114      select $2 + $1
#define oid_2549 2549 // interval_pl_timestamptz 14 0 f f s 2 1184 1186 1184      select $2 + $1
#define oid_2550 2550 // integer_pl_date  14 0 f f 2 1082 23 1082      select $2 + $1
#define oid_2551 2551 // +   f 1186 1082 1114 1076 interval_pl_date -
#define oid_2552 2552 // +   f 1186 1266 1266 1802 interval_pl_timetz -
#define oid_2553 2553 // +   f 1186 1114 1114 2066 interval_pl_timestamp -
#define oid_2554 2554 // +   f 1186 1184 1184 1327 interval_pl_timestamptz -
#define oid_2555 2555 // +   f 23 1082 1082 1100 integer_pl_date -
#define oid_2556 2556 // pg_tablespace_databases 12 1000 0 f f t s 26 26     pg_tablespace_databases
#define oid_2557 2557 // bool    12 0 f f 16 23     int4_bool
#define oid_2558 2558 // int4    12 0 f f 23 16     bool_int4
#define oid_2559 2559 // lastval   12 0 f f v 0 20      lastval
#define oid_2560 2560 // pg_postmaster_start_time 12 0 f f s 0 1184      pg_postmaster_start_time
#define oid_2561 2561 // gistvacuumcleanup  12 0 f f v 2 2281 2281 2281     gistvacuumcleanup
#define oid_2562 2562 // box_below   12 0 f f 2 16 603 603     box_below
#define oid_2563 2563 // box_overbelow  12 0 f f 2 16 603 603     box_overbelow
#define oid_2564 2564 // box_overabove  12 0 f f 2 16 603 603     box_overabove
#define oid_2565 2565 // box_above   12 0 f f 2 16 603 603     box_above
#define oid_2566 2566 // poly_below  12 0 f f 2 16 604 604     poly_below
#define oid_2567 2567 // poly_overbelow  12 0 f f 2 16 604 604     poly_overbelow
#define oid_2568 2568 // poly_overabove  12 0 f f 2 16 604 604     poly_overabove
#define oid_2569 2569 // poly_above  12 0 f f 2 16 604 604     poly_above
#define oid_2570 2570 // <<|   f 603 603 16  box_below positionsel positionjoinsel
#define oid_2571 2571 // &<|   f 603 603 16  box_overbelow positionsel positionjoinsel
#define oid_2572 2572 // |&>   f 603 603 16  box_overabove positionsel positionjoinsel
#define oid_2573 2573 // |>>   f 603 603 16  box_above positionsel positionjoinsel
#define oid_2574 2574 // <<|   f 604 604 16  poly_below positionsel positionjoinsel
#define oid_2575 2575 // &<|   f 604 604 16  poly_overbelow positionsel positionjoinsel
#define oid_2576 2576 // |&>   f 604 604 16  poly_overabove positionsel positionjoinsel
#define oid_2577 2577 // |>>   f 604 604 16  poly_above positionsel positionjoinsel
#define oid_2578 2578 // gist_box_consistent 12 0 f f 5 16 2281 603 23 26 2281     gist_box_consistent
#define oid_2579 2579 // gist_box_compress 12 0 f f 2281 2281     gist_box_compress
#define oid_2580 2580 // gist_box_decompress 12 0 f f 2281 2281     gist_box_decompress
#define oid_2581 2581 // gist_box_penalty 12 0 f f 3 2281 2281 2281 2281     gist_box_penalty
#define oid_2582 2582 // gist_box_picksplit 12 0 f f 2 2281 2281 2281     gist_box_picksplit
#define oid_2583 2583 // gist_box_union 12 0 f f 2 603 2281 2281     gist_box_union
#define oid_2584 2584 // gist_box_same  12 0 f f 3 2281 603 603 2281     gist_box_same
#define oid_2585 2585 // gist_poly_consistent 12 0 f f 5 16 2281 604 23 26 2281     gist_poly_consistent
#define oid_2586 2586 // gist_poly_compress 12 0 f f 2281 2281     gist_poly_compress
#define oid_2587 2587 // circle_overbelow 12 0 f f 2 16 718 718      circle_overbelow
#define oid_2588 2588 // circle_overabove 12 0 f f 2 16 718 718      circle_overabove
#define oid_2589 2589 // &<|   f 718 718 16  circle_overbelow positionsel positionjoinsel
#define oid_2590 2590 // |&>   f 718 718 16  circle_overabove positionsel positionjoinsel
#define oid_2591 2591 // gist_circle_consistent 12 0 f f 5 16 2281 718 23 26 2281     gist_circle_consistent
#define oid_2592 2592 // gist_circle_compress 12 0 f f 2281 2281     gist_circle_compress
#define oid_2593 2593 // 783 box_ops
#define oid_2594 2594 // 783 poly_ops
#define oid_2595 2595 // 783 circle_ops
#define oid_2596 2596 // numeric_stddev_pop 12 0 f f f 1700 2281     numeric_stddev_pop
#define oid_2597 2597 // domain_in  12 0 f f f s 3 2276 2275 26 23     domain_in
#define oid_2598 2598 // domain_recv 12 0 f f f s 3 2276 2281 26 23     domain_recv
#define oid_2599 2599 // pg_timezone_abbrevs 12 1000 0 f f t s 0 2249   {25,1186,16}  {o,o,o}  {abbrev,utc_offset,is_dst}  pg_timezone_abbrevs
#define oid_2614 2614 // xmlexists 12 0 f f 2 16 25 142     xmlexists
#define oid_2621 2621 // pg_reload_conf  12 0 f f v 0 16      pg_reload_conf
#define oid_2622 2622 // pg_rotate_logfile 12 0 f f v 0 16      pg_rotate_logfile
#define oid_2623 2623 // pg_stat_file 12 0 f f v 2249 25  {25,20,1184,1184,1184,1184,16}  {i,o,o,o,o,o,o}  {filename,size,access,modification,change,creation,isdir}  pg_stat_file
#define oid_2624 2624 // pg_read_file 12 0 f f v 3 25 25 20 20     pg_read_file
#define oid_2625 2625 // pg_ls_dir  12 1000 0 f f t v 25 25     pg_ls_dir
#define oid_2626 2626 // pg_sleep  12 0 f f v 2278 701     pg_sleep
#define oid_2627 2627 // inetnot  12 0 f f 869 869     inetnot
#define oid_2628 2628 // inetand  12 0 f f 2 869 869 869     inetand
#define oid_2629 2629 // inetor  12 0 f f 2 869 869 869     inetor
#define oid_2630 2630 // inetpl  12 0 f f 2 869 869 20     inetpl
#define oid_2631 2631 // int8pl_inet 14 0 f f 2 869 20 869      select $2 + $1
#define oid_2632 2632 // inetmi_int8 12 0 f f 2 869 869 20     inetmi_int8
#define oid_2633 2633 // inetmi  12 0 f f 2 20 869 869     inetmi
#define oid_2634 2634 // ~   l f  869 869 0 inetnot -
#define oid_2635 2635 // &   f 869 869 869 0 inetand -
#define oid_2636 2636 // |   f 869 869 869 0 inetor -
#define oid_2637 2637 // +   f 869 20 869 2638 inetpl -
#define oid_2638 2638 // +   f 20 869 869 2637 int8pl_inet -
#define oid_2639 2639 // -   f 869 20 869 0 inetmi_int8 -
#define oid_2640 2640 // -   f 869 869 20 0 inetmi -
#define oid_2641 2641 // var_samp  12 0 f f 1700 20     aggregate_dummy
#define oid_2642 2642 // var_samp  12 0 f f 1700 23     aggregate_dummy
#define oid_2643 2643 // var_samp  12 0 f f 1700 21     aggregate_dummy
#define oid_2644 2644 // var_samp  12 0 f f 701 700     aggregate_dummy
#define oid_2645 2645 // var_samp  12 0 f f 701 701     aggregate_dummy
#define oid_2646 2646 // var_samp  12 0 f f 1700 1700     aggregate_dummy
#define oid_2647 2647 // transaction_timestamp 12 0 f f s 0 1184      now
#define oid_2648 2648 // statement_timestamp 12 0 f f s 0 1184      statement_timestamp
#define oid_2649 2649 // clock_timestamp 12 0 f f v 0 1184      clock_timestamp
#define oid_2700 2700 // gin_cmp_prefix 12 0 f f 4 23 25 25 21 2281     gin_cmp_prefix
#define oid_2705 2705 // pg_has_role 12 0 f f s 3 16 19 19 25     pg_has_role_name_name
#define oid_2706 2706 // pg_has_role 12 0 f f s 3 16 19 26 25     pg_has_role_name_id
#define oid_2707 2707 // pg_has_role 12 0 f f s 3 16 26 19 25     pg_has_role_id_name
#define oid_2708 2708 // pg_has_role 12 0 f f s 3 16 26 26 25     pg_has_role_id_id
#define oid_2709 2709 // pg_has_role 12 0 f f s 2 16 19 25     pg_has_role_name
#define oid_2710 2710 // pg_has_role 12 0 f f s 2 16 26 25     pg_has_role_id
#define oid_2711 2711 // justify_interval 12 0 f f 1186 1186     interval_justify_interval
#define oid_2712 2712 // stddev_samp 12 0 f f 1700 20     aggregate_dummy
#define oid_2713 2713 // stddev_samp 12 0 f f 1700 23     aggregate_dummy
#define oid_2714 2714 // stddev_samp 12 0 f f 1700 21     aggregate_dummy
#define oid_2715 2715 // stddev_samp 12 0 f f 701 700     aggregate_dummy
#define oid_2716 2716 // stddev_samp 12 0 f f 701 701     aggregate_dummy
#define oid_2717 2717 // stddev_samp 12 0 f f 1700 1700     aggregate_dummy
#define oid_2718 2718 // var_pop  12 0 f f 1700 20     aggregate_dummy
#define oid_2719 2719 // var_pop  12 0 f f 1700 23     aggregate_dummy
#define oid_2720 2720 // var_pop  12 0 f f 1700 21     aggregate_dummy
#define oid_2721 2721 // var_pop  12 0 f f 701 700     aggregate_dummy
#define oid_2722 2722 // var_pop  12 0 f f 701 701     aggregate_dummy
#define oid_2723 2723 // var_pop  12 0 f f 1700 1700     aggregate_dummy
#define oid_2724 2724 // stddev_pop 12 0 f f 1700 20     aggregate_dummy
#define oid_2725 2725 // stddev_pop 12 0 f f 1700 23     aggregate_dummy
#define oid_2726 2726 // stddev_pop 12 0 f f 1700 21     aggregate_dummy
#define oid_2727 2727 // stddev_pop 12 0 f f 701 700     aggregate_dummy
#define oid_2728 2728 // stddev_pop 12 0 f f 701 701     aggregate_dummy
#define oid_2729 2729 // stddev_pop 12 0 f f 1700 1700     aggregate_dummy
#define oid_2730 2730 // pg_get_triggerdef 12 0 f f s 2 25 26 16     pg_get_triggerdef_ext
#define oid_2731 2731 // gingetbitmap  12 0 f f v 2 20 2281 2281     gingetbitmap
#define oid_2732 2732 // gininsert   12 0 f f v 6 16 2281 2281 2281 2281 2281 2281     gininsert
#define oid_2733 2733 // ginbeginscan  12 0 f f v 3 2281 2281 2281 2281     ginbeginscan
#define oid_2734 2734 // ginrescan   12 0 f f v 5 2278 2281 2281 2281 2281 2281     ginrescan
#define oid_2735 2735 // ginendscan  12 0 f f v 2278 2281     ginendscan
#define oid_2736 2736 // ginmarkpos  12 0 f f v 2278 2281     ginmarkpos
#define oid_2737 2737 // ginrestrpos  12 0 f f v 2278 2281     ginrestrpos
#define oid_2738 2738 // ginbuild   12 0 f f v 3 2281 2281 2281 2281     ginbuild
#define oid_2739 2739 // ginbulkdelete  12 0 f f v 4 2281 2281 2281 2281 2281     ginbulkdelete
#define oid_2740 2740 // ginvacuumcleanup 12 0 f f v 2 2281 2281 2281     ginvacuumcleanup
#define oid_2741 2741 // gincostestimate 12 0 f f v 7 2278 2281 2281 2281 2281 2281 2281 2281     gincostestimate
#define oid_2742 2742 // gin 6 f f t f f gininsert ginbeginscan gingetbitmap ginrescan ginendscan ginmarkpos ginrestrpos ginbuild ginbuildempty ginbulkdelete ginvacuumcleanup gincostestimate ginoptions
#define oid_2743 2743 // ginarrayextract 12 0 f f 3 2281 2277 2281 2281     ginarrayextract
#define oid_2744 2744 // ginarrayconsistent 12 0 f f 8 16 2281 21 2277 23 2281 2281 2281 2281     ginarrayconsistent
#define oid_2745 2745 // 2742 array_ops
#define oid_2746 2746 // int8_avg_accum  12 0 f f f 2 2281 2281 20     int8_avg_accum
#define oid_2747 2747 // arrayoverlap   12 0 f f 2 16 2277 2277     arrayoverlap
#define oid_2748 2748 // arraycontains   12 0 f f 2 16 2277 2277     arraycontains
#define oid_2749 2749 // arraycontained  12 0 f f 2 16 2277 2277     arraycontained
#define oid_2750 2750 // &&   f 2277 2277 16 2750 arrayoverlap arraycontsel arraycontjoinsel
#define oid_2751 2751 // @>   f 2277 2277 16 2752 arraycontains arraycontsel arraycontjoinsel
#define oid_2752 2752 // <@   f 2277 2277 16 2751 arraycontained arraycontsel arraycontjoinsel
#define oid_2758 2758 // pg_stat_get_db_tuples_returned 12 0 f f s 20 26     pg_stat_get_db_tuples_returned
#define oid_2759 2759 // pg_stat_get_db_tuples_fetched 12 0 f f s 20 26     pg_stat_get_db_tuples_fetched
#define oid_2760 2760 // pg_stat_get_db_tuples_inserted 12 0 f f s 20 26     pg_stat_get_db_tuples_inserted
#define oid_2761 2761 // pg_stat_get_db_tuples_updated 12 0 f f s 20 26     pg_stat_get_db_tuples_updated
#define oid_2762 2762 // pg_stat_get_db_tuples_deleted 12 0 f f s 20 26     pg_stat_get_db_tuples_deleted
#define oid_2763 2763 // regexp_matches  12 1 0 f f t 2 1009 25 25     regexp_matches_no_flags
#define oid_2764 2764 // regexp_matches  12 10 0 f f t 3 1009 25 25 25     regexp_matches
#define oid_2765 2765 // regexp_split_to_table 12 1000 0 f f t 2 25 25 25     regexp_split_to_table_no_flags
#define oid_2766 2766 // regexp_split_to_table 12 1000 0 f f t 3 25 25 25 25     regexp_split_to_table
#define oid_2767 2767 // regexp_split_to_array 12 0 f f 2 1009 25 25     regexp_split_to_array_no_flags
#define oid_2768 2768 // regexp_split_to_array 12 0 f f 3 1009 25 25 25     regexp_split_to_array
#define oid_2769 2769 // pg_stat_get_bgwriter_timed_checkpoints 12 0 f f s 0 20      pg_stat_get_bgwriter_timed_checkpoints
#define oid_2770 2770 // pg_stat_get_bgwriter_requested_checkpoints 12 0 f f s 0 20      pg_stat_get_bgwriter_requested_checkpoints
#define oid_2771 2771 // pg_stat_get_bgwriter_buf_written_checkpoints 12 0 f f s 0 20      pg_stat_get_bgwriter_buf_written_checkpoints
#define oid_2772 2772 // pg_stat_get_bgwriter_buf_written_clean 12 0 f f s 0 20      pg_stat_get_bgwriter_buf_written_clean
#define oid_2773 2773 // pg_stat_get_bgwriter_maxwritten_clean 12 0 f f s 0 20      pg_stat_get_bgwriter_maxwritten_clean
#define oid_2774 2774 // ginqueryarrayextract 12 0 f f 7 2281 2277 2281 21 2281 2281 2281 2281     ginqueryarrayextract
#define oid_2775 2775 // pg_stat_get_buf_written_backend 12 0 f f s 0 20      pg_stat_get_buf_written_backend
#define oid_2776 2776 // anynonarray 4 p P \054 0 anynonarray_in anynonarray_out -
#define oid_2777 2777 // anynonarray_in 12 0 f f 2776 2275     anynonarray_in
#define oid_2778 2778 // anynonarray_out 12 0 f f 2275 2776     anynonarray_out
#define oid_2779 2779 // ||   f 25 2776 25 0 textanycat -
#define oid_2780 2780 // ||   f 2776 25 25 0 anytextcat -
#define oid_2781 2781 // pg_stat_get_last_vacuum_time 12 0 f f s 1184 26     pg_stat_get_last_vacuum_time
#define oid_2782 2782 // pg_stat_get_last_autovacuum_time 12 0 f f s 1184 26     pg_stat_get_last_autovacuum_time
#define oid_2783 2783 // pg_stat_get_last_analyze_time 12 0 f f s 1184 26     pg_stat_get_last_analyze_time
#define oid_2784 2784 // pg_stat_get_last_autoanalyze_time 12 0 f f s 1184 26     pg_stat_get_last_autoanalyze_time
#define oid_2785 2785 // btoptions   12 0 f f s 2 17 1009 16      btoptions
#define oid_2786 2786 // hashoptions  12 0 f f s 2 17 1009 16      hashoptions
#define oid_2787 2787 // gistoptions  12 0 f f s 2 17 1009 16      gistoptions
#define oid_2788 2788 // ginoptions  12 0 f f s 2 17 1009 16      ginoptions
#define oid_2789 2789 // 403 tid_ops
#define oid_2790 2790 // tidgt   12 0 f t 2 16 27 27     tidgt
#define oid_2791 2791 // tidlt   12 0 f t 2 16 27 27     tidlt
#define oid_2792 2792 // tidge   12 0 f t 2 16 27 27     tidge
#define oid_2793 2793 // tidle   12 0 f t 2 16 27 27     tidle
#define oid_2794 2794 // bttidcmp   12 0 f f 2 23 27 27     bttidcmp
#define oid_2795 2795 // tidlarger   12 0 f f 2 27 27 27     tidlarger
#define oid_2796 2796 // tidsmaller   12 0 f f 2 27 27 27     tidsmaller
#define oid_2797 2797 // max  12 0 f f 27 27     aggregate_dummy
#define oid_2798 2798 // min  12 0 f f 27 27     aggregate_dummy
#define oid_2799 2799 // <   f 27 27 16 2800 2802 tidlt scalarltsel scalarltjoinsel
#define oid_2800 2800 // >   f 27 27 16 2799 2801 tidgt scalargtsel scalargtjoinsel
#define oid_2801 2801 // <=   f 27 27 16 2802 2800 tidle scalarltsel scalarltjoinsel
#define oid_2802 2802 // >=   f 27 27 16 2801 2799 tidge scalargtsel scalargtjoinsel
#define oid_2803 2803 // count  12 0 f f 0 20      aggregate_dummy
#define oid_2804 2804 // int8inc_any  12 0 f f 2 20 20 2276     int8inc_any
#define oid_2805 2805 // int8inc_float8_float8 12 0 f f 3 20 20 701 701     int8inc_float8_float8
#define oid_2806 2806 // float8_regr_accum  12 0 f f 3 1022 1022 701 701     float8_regr_accum
#define oid_2807 2807 // float8_regr_sxx  12 0 f f 701 1022     float8_regr_sxx
#define oid_2808 2808 // float8_regr_syy  12 0 f f 701 1022     float8_regr_syy
#define oid_2809 2809 // float8_regr_sxy  12 0 f f 701 1022     float8_regr_sxy
#define oid_2810 2810 // float8_regr_avgx  12 0 f f 701 1022     float8_regr_avgx
#define oid_2811 2811 // float8_regr_avgy  12 0 f f 701 1022     float8_regr_avgy
#define oid_2812 2812 // float8_regr_r2  12 0 f f 701 1022     float8_regr_r2
#define oid_2813 2813 // float8_regr_slope  12 0 f f 701 1022     float8_regr_slope
#define oid_2814 2814 // float8_regr_intercept 12 0 f f 701 1022     float8_regr_intercept
#define oid_2815 2815 // float8_covar_pop  12 0 f f 701 1022     float8_covar_pop
#define oid_2816 2816 // float8_covar_samp  12 0 f f 701 1022     float8_covar_samp
#define oid_2817 2817 // float8_corr  12 0 f f 701 1022     float8_corr
#define oid_2818 2818 // regr_count 12 0 f f 2 20 701 701      aggregate_dummy
#define oid_2819 2819 // regr_sxx  12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2820 2820 // regr_syy  12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2821 2821 // regr_sxy  12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2822 2822 // regr_avgx  12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2823 2823 // regr_avgy  12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2824 2824 // regr_r2  12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2825 2825 // regr_slope 12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2826 2826 // regr_intercept 12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2827 2827 // covar_pop  12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2828 2828 // covar_samp 12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2829 2829 // corr  12 0 f f 2 701 701 701     aggregate_dummy
#define oid_2844 2844 // pg_stat_get_db_blk_read_time 12 0 f f s 701 26     pg_stat_get_db_blk_read_time
#define oid_2845 2845 // pg_stat_get_db_blk_write_time 12 0 f f s 701 26     pg_stat_get_db_blk_write_time
#define oid_2848 2848 // pg_switch_xlog  12 0 f f v 0 3220      pg_switch_xlog
#define oid_2849 2849 // pg_current_xlog_location 12 0 f f v 0 3220      pg_current_xlog_location
#define oid_2850 2850 // pg_xlogfile_name_offset 12 0 f f 2249 3220  {3220,25,23}  {i,o,o}  {wal_location,file_name,file_offset}  pg_xlogfile_name_offset
#define oid_2851 2851 // pg_xlogfile_name  12 0 f f 25 3220     pg_xlogfile_name
#define oid_2852 2852 // pg_current_xlog_insert_location 12 0 f f v 0 3220      pg_current_xlog_insert_location
#define oid_2853 2853 // pg_stat_get_backend_waiting 12 0 f f s 16 23     pg_stat_get_backend_waiting
#define oid_2854 2854 // pg_my_temp_schema  12 0 f f s 0 26      pg_my_temp_schema
#define oid_2855 2855 // pg_is_other_temp_schema 12 0 f f s 16 26     pg_is_other_temp_schema
#define oid_2856 2856 // pg_timezone_names 12 1000 0 f f t s 0 2249   {25,25,1186,16}  {o,o,o,o}  {name,abbrev,utc_offset,is_dst}  pg_timezone_names
#define oid_2857 2857 // pg_stat_get_backend_xact_start 12 0 f f s 1184 23     pg_stat_get_backend_xact_start
#define oid_2858 2858 // numeric_avg_accum  12 0 f f f 2 2281 2281 1700     numeric_avg_accum
#define oid_2859 2859 // pg_stat_get_buf_alloc  12 0 f f s 0 20      pg_stat_get_buf_alloc
#define oid_2860 2860 // @   f 604 604 16 2861 poly_contained contsel contjoinsel
#define oid_2861 2861 // ~   f 604 604 16 2860 poly_contain contsel contjoinsel
#define oid_2862 2862 // @   f 603 603 16 2863 box_contained contsel contjoinsel
#define oid_2863 2863 // ~   f 603 603 16 2862 box_contain contsel contjoinsel
#define oid_2864 2864 // @   f 718 718 16 2865 circle_contained contsel contjoinsel
#define oid_2865 2865 // ~   f 718 718 16 2864 circle_contain contsel contjoinsel
#define oid_2866 2866 // @   f 600 603 16  on_pb -
#define oid_2867 2867 // @   f 600 602 16 2868 on_ppath -
#define oid_2868 2868 // ~   f 602 600 16 2867 path_contain_pt -
#define oid_2869 2869 // @   f 600 604 16 2870 pt_contained_poly -
#define oid_2870 2870 // ~   f 604 600 16 2869 poly_contain_pt -
#define oid_2871 2871 // @   f 600 718 16 2872 pt_contained_circle -
#define oid_2872 2872 // ~   f 718 600 16 2871 circle_contain_pt -
#define oid_2873 2873 // @   f 600 628 16  on_pl -
#define oid_2874 2874 // @   f 600 601 16  on_ps -
#define oid_2875 2875 // @   f 601 628 16  on_sl -
#define oid_2876 2876 // @   f 601 603 16  on_sb -
#define oid_2877 2877 // ~   f 1034 1033 16 0 aclcontains -
#define oid_2878 2878 // pg_stat_get_live_tuples 12 0 f f s 20 26     pg_stat_get_live_tuples
#define oid_2879 2879 // pg_stat_get_dead_tuples 12 0 f f s 20 26     pg_stat_get_dead_tuples
#define oid_2880 2880 // pg_advisory_lock  12 0 f f v 2278 20     pg_advisory_lock_int8
#define oid_2881 2881 // pg_advisory_lock_shared 12 0 f f v 2278 20     pg_advisory_lock_shared_int8
#define oid_2882 2882 // pg_try_advisory_lock  12 0 f f v 16 20     pg_try_advisory_lock_int8
#define oid_2883 2883 // pg_try_advisory_lock_shared 12 0 f f v 16 20     pg_try_advisory_lock_shared_int8
#define oid_2884 2884 // pg_advisory_unlock  12 0 f f v 16 20     pg_advisory_unlock_int8
#define oid_2885 2885 // pg_advisory_unlock_shared 12 0 f f v 16 20     pg_advisory_unlock_shared_int8
#define oid_2886 2886 // pg_advisory_lock  12 0 f f v 2 2278 23 23     pg_advisory_lock_int4
#define oid_2887 2887 // pg_advisory_lock_shared 12 0 f f v 2 2278 23 23     pg_advisory_lock_shared_int4
#define oid_2888 2888 // pg_try_advisory_lock  12 0 f f v 2 16 23 23     pg_try_advisory_lock_int4
#define oid_2889 2889 // pg_try_advisory_lock_shared 12 0 f f v 2 16 23 23     pg_try_advisory_lock_shared_int4
#define oid_2890 2890 // pg_advisory_unlock  12 0 f f v 2 16 23 23     pg_advisory_unlock_int4
#define oid_2891 2891 // pg_advisory_unlock_shared 12 0 f f v 2 16 23 23     pg_advisory_unlock_shared_int4
#define oid_2892 2892 // pg_advisory_unlock_all 12 0 f f v 0 2278      pg_advisory_unlock_all
#define oid_2893 2893 // xml_in   12 0 f f s 142 2275     xml_in
#define oid_2894 2894 // xml_out   12 0 f f 2275 142     xml_out
#define oid_2895 2895 // xmlcomment  12 0 f f 142 25     xmlcomment
#define oid_2896 2896 // xml   12 0 f f s 142 25     texttoxml
#define oid_2897 2897 // xmlvalidate  12 0 f f 2 16 142 25     xmlvalidate
#define oid_2898 2898 // xml_recv   12 0 f f s 142 2281     xml_recv
#define oid_2899 2899 // xml_send   12 0 f f s 17 142     xml_send
#define oid_2900 2900 // xmlconcat2  12 0 f f f 2 142 142 142     xmlconcat2
#define oid_2901 2901 // xmlagg   12 0 f f 142 142     aggregate_dummy
#define oid_2902 2902 // varbittypmodin 12 0 f f 23 1263     varbittypmodin
#define oid_2903 2903 // intervaltypmodin 12 0 f f 23 1263     intervaltypmodin
#define oid_2904 2904 // intervaltypmodout 12 0 f f 2275 23     intervaltypmodout
#define oid_2905 2905 // timestamptypmodin 12 0 f f 23 1263     timestamptypmodin
#define oid_2906 2906 // timestamptypmodout 12 0 f f 2275 23     timestamptypmodout
#define oid_2907 2907 // timestamptztypmodin 12 0 f f 23 1263     timestamptztypmodin
#define oid_2908 2908 // timestamptztypmodout 12 0 f f 2275 23     timestamptztypmodout
#define oid_2909 2909 // timetypmodin 12 0 f f 23 1263     timetypmodin
#define oid_2910 2910 // timetypmodout 12 0 f f 2275 23     timetypmodout
#define oid_2911 2911 // timetztypmodin 12 0 f f 23 1263     timetztypmodin
#define oid_2912 2912 // timetztypmodout 12 0 f f 2275 23     timetztypmodout
#define oid_2913 2913 // bpchartypmodin  12 0 f f 23 1263     bpchartypmodin
#define oid_2914 2914 // bpchartypmodout 12 0 f f 2275 23     bpchartypmodout
#define oid_2915 2915 // varchartypmodin 12 0 f f 23 1263     varchartypmodin
#define oid_2916 2916 // varchartypmodout 12 0 f f 2275 23     varchartypmodout
#define oid_2917 2917 // numerictypmodin 12 0 f f 23 1263     numerictypmodin
#define oid_2918 2918 // numerictypmodout 12 0 f f 2275 23     numerictypmodout
#define oid_2919 2919 // bittypmodin 12 0 f f 23 1263     bittypmodin
#define oid_2920 2920 // bittypmodout 12 0 f f 2275 23     bittypmodout
#define oid_2921 2921 // varbittypmodout 12 0 f f 2275 23     varbittypmodout
#define oid_2922 2922 // text   12 0 f f 25 142     xmltotext
#define oid_2923 2923 // table_to_xml   12 100 0 f f s 4 142 2205 16 16 25    {tbl,nulls,tableforest,targetns}  table_to_xml
#define oid_2924 2924 // query_to_xml   12 100 0 f f s 4 142 25 16 16 25    {query,nulls,tableforest,targetns}  query_to_xml
#define oid_2925 2925 // cursor_to_xml   12 100 0 f f s 5 142 1790 23 16 16 25    {cursor,count,nulls,tableforest,targetns}  cursor_to_xml
#define oid_2926 2926 // table_to_xmlschema  12 100 0 f f s 4 142 2205 16 16 25    {tbl,nulls,tableforest,targetns}  table_to_xmlschema
#define oid_2927 2927 // query_to_xmlschema  12 100 0 f f s 4 142 25 16 16 25    {query,nulls,tableforest,targetns}  query_to_xmlschema
#define oid_2928 2928 // cursor_to_xmlschema  12 100 0 f f s 4 142 1790 16 16 25    {cursor,nulls,tableforest,targetns}  cursor_to_xmlschema
#define oid_2929 2929 // table_to_xml_and_xmlschema 12 100 0 f f s 4 142 2205 16 16 25    {tbl,nulls,tableforest,targetns}  table_to_xml_and_xmlschema
#define oid_2930 2930 // query_to_xml_and_xmlschema 12 100 0 f f s 4 142 25 16 16 25    {query,nulls,tableforest,targetns}  query_to_xml_and_xmlschema
#define oid_2931 2931 // xpath  12 0 f f 3 143 25 142 1009     xpath
#define oid_2932 2932 // xpath  14 0 f f 2 143 25 142      select pg_catalog.xpath($1, $2, ''{}''::pg_catalog.text[])
#define oid_2933 2933 // schema_to_xml   12 100 0 f f s 4 142 19 16 16 25    {schema,nulls,tableforest,targetns}  schema_to_xml
#define oid_2934 2934 // schema_to_xmlschema  12 100 0 f f s 4 142 19 16 16 25    {schema,nulls,tableforest,targetns}  schema_to_xmlschema
#define oid_2935 2935 // schema_to_xml_and_xmlschema 12 100 0 f f s 4 142 19 16 16 25    {schema,nulls,tableforest,targetns}  schema_to_xml_and_xmlschema
#define oid_2936 2936 // database_to_xml   12 100 0 f f s 3 142 16 16 25    {nulls,tableforest,targetns}  database_to_xml
#define oid_2937 2937 // database_to_xmlschema  12 100 0 f f s 3 142 16 16 25    {nulls,tableforest,targetns}  database_to_xmlschema
#define oid_2938 2938 // database_to_xml_and_xmlschema 12 100 0 f f s 3 142 16 16 25    {nulls,tableforest,targetns}  database_to_xml_and_xmlschema
#define oid_2939 2939 // txid_snapshot_in  12 0 f f 2970 2275     txid_snapshot_in
#define oid_2940 2940 // txid_snapshot_out  12 0 f f 2275 2970     txid_snapshot_out
#define oid_2941 2941 // txid_snapshot_recv 12 0 f f 2970 2281     txid_snapshot_recv
#define oid_2942 2942 // txid_snapshot_send 12 0 f f 17 2970     txid_snapshot_send
#define oid_2943 2943 // txid_current  12 0 f f s 0 20      txid_current
#define oid_2944 2944 // txid_current_snapshot 12 0 f f s 0 2970      txid_current_snapshot
#define oid_2945 2945 // txid_snapshot_xmin 12 0 f f 20 2970     txid_snapshot_xmin
#define oid_2946 2946 // txid_snapshot_xmax 12 0 f f 20 2970     txid_snapshot_xmax
#define oid_2947 2947 // txid_snapshot_xip  12 50 0 f f t 20 2970     txid_snapshot_xip
#define oid_2948 2948 // txid_visible_in_snapshot 12 0 f f 2 16 20 2970     txid_visible_in_snapshot
#define oid_2949 2949 // _txid_snapshot A \054 2970 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_2950 2950 // uuid  16 \054 0 2951 uuid_in uuid_out uuid_recv uuid_send
#define oid_2951 2951 // _uuid  A \054 2950 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_2952 2952 // uuid_in   12 0 f f 2950 2275     uuid_in
#define oid_2953 2953 // uuid_out   12 0 f f 2275 2950     uuid_out
#define oid_2954 2954 // uuid_lt   12 0 f t 2 16 2950 2950     uuid_lt
#define oid_2955 2955 // uuid_le   12 0 f t 2 16 2950 2950     uuid_le
#define oid_2956 2956 // uuid_eq   12 0 f t 2 16 2950 2950     uuid_eq
#define oid_2957 2957 // uuid_ge   12 0 f t 2 16 2950 2950     uuid_ge
#define oid_2958 2958 // uuid_gt   12 0 f t 2 16 2950 2950     uuid_gt
#define oid_2959 2959 // uuid_ne   12 0 f t 2 16 2950 2950     uuid_ne
#define oid_2960 2960 // uuid_cmp   12 0 f f 2 23 2950 2950     uuid_cmp
#define oid_2961 2961 // uuid_recv   12 0 f f 2950 2281     uuid_recv
#define oid_2962 2962 // uuid_send   12 0 f f 17 2950     uuid_send
#define oid_2963 2963 // uuid_hash   12 0 f f 23 2950     uuid_hash
#define oid_2968 2968 // 403 uuid_ops
#define oid_2969 2969 // 405 uuid_ops
#define oid_2970 2970 // txid_snapshot \054 0 2949 txid_snapshot_in txid_snapshot_out txid_snapshot_recv txid_snapshot_send - d x 0
#define oid_2971 2971 // text  12 0 f f 25 16     booltext
#define oid_2972 2972 // =   t 2950 2950 16 2972 2973 uuid_eq eqsel eqjoinsel
#define oid_2973 2973 // <>   f 2950 2950 16 2973 2972 uuid_ne neqsel neqjoinsel
#define oid_2974 2974 // <   f 2950 2950 16 2975 2977 uuid_lt scalarltsel scalarltjoinsel
#define oid_2975 2975 // >   f 2950 2950 16 2974 2976 uuid_gt scalargtsel scalargtjoinsel
#define oid_2976 2976 // <=   f 2950 2950 16 2977 2975 uuid_le scalarltsel scalarltjoinsel
#define oid_2977 2977 // >=   f 2950 2950 16 2976 2974 uuid_ge scalargtsel scalargtjoinsel
#define oid_2978 2978 // pg_stat_get_function_calls 12 0 f f s 20 26     pg_stat_get_function_calls
#define oid_2979 2979 // pg_stat_get_function_total_time 12 0 f f s 701 26     pg_stat_get_function_total_time
#define oid_2980 2980 // pg_stat_get_function_self_time 12 0 f f s 701 26     pg_stat_get_function_self_time
#define oid_2981 2981 // record_eq   12 0 f f 2 16 2249 2249     record_eq
#define oid_2982 2982 // record_ne   12 0 f f 2 16 2249 2249     record_ne
#define oid_2983 2983 // record_lt   12 0 f f 2 16 2249 2249     record_lt
#define oid_2984 2984 // record_gt   12 0 f f 2 16 2249 2249     record_gt
#define oid_2985 2985 // record_le   12 0 f f 2 16 2249 2249     record_le
#define oid_2986 2986 // record_ge   12 0 f f 2 16 2249 2249     record_ge
#define oid_2987 2987 // btrecordcmp  12 0 f f 2 23 2249 2249     btrecordcmp
#define oid_2988 2988 // =   2249 2249 16 2988 2989 record_eq eqsel eqjoinsel
#define oid_2989 2989 // <>   f 2249 2249 16 2989 2988 record_ne neqsel neqjoinsel
#define oid_2990 2990 // <   f 2249 2249 16 2991 2993 record_lt scalarltsel scalarltjoinsel
#define oid_2991 2991 // >   f 2249 2249 16 2990 2992 record_gt scalargtsel scalargtjoinsel
#define oid_2992 2992 // <=   f 2249 2249 16 2993 2991 record_le scalarltsel scalarltjoinsel
#define oid_2993 2993 // >=   f 2249 2249 16 2992 2990 record_ge scalargtsel scalargtjoinsel
#define oid_2994 2994 // 403 record_ops
#define oid_2997 2997 // pg_table_size  12 0 f f v 20 2205     pg_table_size
#define oid_2998 2998 // pg_indexes_size 12 0 f f v 20 2205     pg_indexes_size
#define oid_2999 2999 // pg_relation_filenode 12 0 f f s 26 2205     pg_relation_filenode
#define oid_3000 3000 // has_foreign_data_wrapper_privilege   12 0 f f s 3 16 19 25 25     has_foreign_data_wrapper_privilege_name_name
#define oid_3001 3001 // has_foreign_data_wrapper_privilege   12 0 f f s 3 16 19 26 25     has_foreign_data_wrapper_privilege_name_id
#define oid_3002 3002 // has_foreign_data_wrapper_privilege   12 0 f f s 3 16 26 25 25     has_foreign_data_wrapper_privilege_id_name
#define oid_3003 3003 // has_foreign_data_wrapper_privilege   12 0 f f s 3 16 26 26 25     has_foreign_data_wrapper_privilege_id_id
#define oid_3004 3004 // has_foreign_data_wrapper_privilege   12 0 f f s 2 16 25 25     has_foreign_data_wrapper_privilege_name
#define oid_3005 3005 // has_foreign_data_wrapper_privilege   12 0 f f s 2 16 26 25     has_foreign_data_wrapper_privilege_id
#define oid_3006 3006 // has_server_privilege   12 0 f f s 3 16 19 25 25     has_server_privilege_name_name
#define oid_3007 3007 // has_server_privilege   12 0 f f s 3 16 19 26 25     has_server_privilege_name_id
#define oid_3008 3008 // has_server_privilege   12 0 f f s 3 16 26 25 25     has_server_privilege_id_name
#define oid_3009 3009 // has_server_privilege   12 0 f f s 3 16 26 26 25     has_server_privilege_id_id
#define oid_3010 3010 // has_server_privilege   12 0 f f s 2 16 25 25     has_server_privilege_name
#define oid_3011 3011 // has_server_privilege   12 0 f f s 2 16 26 25     has_server_privilege_id
#define oid_3012 3012 // has_column_privilege   12 0 f f s 4 16 19 25 25 25     has_column_privilege_name_name_name
#define oid_3013 3013 // has_column_privilege   12 0 f f s 4 16 19 25 21 25     has_column_privilege_name_name_attnum
#define oid_3014 3014 // has_column_privilege   12 0 f f s 4 16 19 26 25 25     has_column_privilege_name_id_name
#define oid_3015 3015 // has_column_privilege   12 0 f f s 4 16 19 26 21 25     has_column_privilege_name_id_attnum
#define oid_3016 3016 // has_column_privilege   12 0 f f s 4 16 26 25 25 25     has_column_privilege_id_name_name
#define oid_3017 3017 // has_column_privilege   12 0 f f s 4 16 26 25 21 25     has_column_privilege_id_name_attnum
#define oid_3018 3018 // has_column_privilege   12 0 f f s 4 16 26 26 25 25     has_column_privilege_id_id_name
#define oid_3019 3019 // has_column_privilege   12 0 f f s 4 16 26 26 21 25     has_column_privilege_id_id_attnum
#define oid_3020 3020 // has_column_privilege   12 0 f f s 3 16 25 25 25     has_column_privilege_name_name
#define oid_3021 3021 // has_column_privilege   12 0 f f s 3 16 25 21 25     has_column_privilege_name_attnum
#define oid_3022 3022 // has_column_privilege   12 0 f f s 3 16 26 25 25     has_column_privilege_id_name
#define oid_3023 3023 // has_column_privilege   12 0 f f s 3 16 26 21 25     has_column_privilege_id_attnum
#define oid_3024 3024 // has_any_column_privilege  12 10 0 f f s 3 16 19 25 25     has_any_column_privilege_name_name
#define oid_3025 3025 // has_any_column_privilege  12 10 0 f f s 3 16 19 26 25     has_any_column_privilege_name_id
#define oid_3026 3026 // has_any_column_privilege  12 10 0 f f s 3 16 26 25 25     has_any_column_privilege_id_name
#define oid_3027 3027 // has_any_column_privilege  12 10 0 f f s 3 16 26 26 25     has_any_column_privilege_id_id
#define oid_3028 3028 // has_any_column_privilege  12 10 0 f f s 2 16 25 25     has_any_column_privilege_name
#define oid_3029 3029 // has_any_column_privilege  12 10 0 f f s 2 16 26 25     has_any_column_privilege_id
#define oid_3030 3030 // overlay   12 0 f f 4 1560 1560 1560 23 23     bitoverlay
#define oid_3031 3031 // overlay   12 0 f f 3 1560 1560 1560 23     bitoverlay_no_len
#define oid_3032 3032 // get_bit   12 0 f f 2 23 1560 23     bitgetbit
#define oid_3033 3033 // set_bit   12 0 f f 3 1560 1560 23 23     bitsetbit
#define oid_3034 3034 // pg_relation_filepath 12 0 f f s 25 2205     pg_relation_filepath
#define oid_3035 3035 // pg_listening_channels 12 10 0 f f t s 0 25      pg_listening_channels
#define oid_3036 3036 // pg_notify  12 0 f f f v 2 2278 25 25     pg_notify
#define oid_3037 3037 // pg_stat_get_xact_numscans  12 0 f f v 20 26     pg_stat_get_xact_numscans
#define oid_3038 3038 // pg_stat_get_xact_tuples_returned 12 0 f f v 20 26     pg_stat_get_xact_tuples_returned
#define oid_3039 3039 // pg_stat_get_xact_tuples_fetched 12 0 f f v 20 26     pg_stat_get_xact_tuples_fetched
#define oid_3040 3040 // pg_stat_get_xact_tuples_inserted 12 0 f f v 20 26     pg_stat_get_xact_tuples_inserted
#define oid_3041 3041 // pg_stat_get_xact_tuples_updated 12 0 f f v 20 26     pg_stat_get_xact_tuples_updated
#define oid_3042 3042 // pg_stat_get_xact_tuples_deleted 12 0 f f v 20 26     pg_stat_get_xact_tuples_deleted
#define oid_3043 3043 // pg_stat_get_xact_tuples_hot_updated 12 0 f f v 20 26     pg_stat_get_xact_tuples_hot_updated
#define oid_3044 3044 // pg_stat_get_xact_blocks_fetched 12 0 f f v 20 26     pg_stat_get_xact_blocks_fetched
#define oid_3045 3045 // pg_stat_get_xact_blocks_hit  12 0 f f v 20 26     pg_stat_get_xact_blocks_hit
#define oid_3046 3046 // pg_stat_get_xact_function_calls 12 0 f f v 20 26     pg_stat_get_xact_function_calls
#define oid_3047 3047 // pg_stat_get_xact_function_total_time 12 0 f f v 701 26     pg_stat_get_xact_function_total_time
#define oid_3048 3048 // pg_stat_get_xact_function_self_time 12 0 f f v 701 26     pg_stat_get_xact_function_self_time
#define oid_3049 3049 // xpath_exists 12 0 f f 3 16 25 142 1009     xpath_exists
#define oid_3050 3050 // xpath_exists 14 0 f f 2 16 25 142      select pg_catalog.xpath_exists($1, $2, ''{}''::pg_catalog.text[])
#define oid_3051 3051 // xml_is_well_formed  12 0 f f s 16 25     xml_is_well_formed
#define oid_3052 3052 // xml_is_well_formed_document 12 0 f f 16 25     xml_is_well_formed_document
#define oid_3053 3053 // xml_is_well_formed_content 12 0 f f 16 25     xml_is_well_formed_content
#define oid_3054 3054 // pg_stat_get_vacuum_count 12 0 f f s 20 26     pg_stat_get_vacuum_count
#define oid_3055 3055 // pg_stat_get_autovacuum_count 12 0 f f s 20 26     pg_stat_get_autovacuum_count
#define oid_3056 3056 // pg_stat_get_analyze_count 12 0 f f s 20 26     pg_stat_get_analyze_count
#define oid_3057 3057 // pg_stat_get_autoanalyze_count 12 0 f f s 20 26     pg_stat_get_autoanalyze_count
#define oid_3058 3058 // concat 12 2276 f f f s 25 2276  {2276}  {v}   text_concat
#define oid_3059 3059 // concat_ws 12 2276 f f f s 2 25 25 2276  {25,2276}  {i,v}   text_concat_ws
#define oid_3060 3060 // left 12 0 f f 2 25 25 23      text_left
#define oid_3061 3061 // right 12 0 f f 2 25 25 23      text_right
#define oid_3062 3062 // reverse 12 0 f f 25 25      text_reverse
#define oid_3063 3063 // pg_stat_get_buf_fsync_backend 12 0 f f s 0 20      pg_stat_get_buf_fsync_backend
#define oid_3064 3064 // gist_point_distance 12 0 f f 4 701 2281 600 23 26     gist_point_distance
#define oid_3065 3065 // pg_stat_get_db_conflict_tablespace 12 0 f f s 20 26     pg_stat_get_db_conflict_tablespace
#define oid_3066 3066 // pg_stat_get_db_conflict_lock 12 0 f f s 20 26     pg_stat_get_db_conflict_lock
#define oid_3067 3067 // pg_stat_get_db_conflict_snapshot 12 0 f f s 20 26     pg_stat_get_db_conflict_snapshot
#define oid_3068 3068 // pg_stat_get_db_conflict_bufferpin 12 0 f f s 20 26     pg_stat_get_db_conflict_bufferpin
#define oid_3069 3069 // pg_stat_get_db_conflict_startup_deadlock 12 0 f f s 20 26     pg_stat_get_db_conflict_startup_deadlock
#define oid_3070 3070 // pg_stat_get_db_conflict_all 12 0 f f s 20 26     pg_stat_get_db_conflict_all
#define oid_3071 3071 // pg_xlog_replay_pause 12 0 f f v 0 2278      pg_xlog_replay_pause
#define oid_3072 3072 // pg_xlog_replay_resume 12 0 f f v 0 2278      pg_xlog_replay_resume
#define oid_3073 3073 // pg_is_xlog_replay_paused 12 0 f f v 0 16      pg_is_xlog_replay_paused
#define oid_3074 3074 // pg_stat_get_db_stat_reset_time 12 0 f f s 1184 26     pg_stat_get_db_stat_reset_time
#define oid_3075 3075 // pg_stat_get_bgwriter_stat_reset_time 12 0 f f s 0 1184      pg_stat_get_bgwriter_stat_reset_time
#define oid_3076 3076 // ginarrayextract 12 0 f f 2 2281 2277 2281     ginarrayextract_2args
#define oid_3077 3077 // gin_extract_tsvector 12 0 f f 2 2281 3614 2281     gin_extract_tsvector_2args
#define oid_3078 3078 // pg_sequence_parameters 12 0 f f s 2249 26  {26,20,20,20,20,16}  {i,o,o,o,o,o}  {sequence_oid,start_value,minimum_value,maximum_value,increment,cycle_option}  pg_sequence_parameters
#define oid_3082 3082 // pg_available_extensions 12 10 100 0 f f t s 0 2249   {19,25,25}  {o,o,o}  {name,default_version,comment}  pg_available_extensions
#define oid_3083 3083 // pg_available_extension_versions 12 10 100 0 f f t s 0 2249   {19,25,16,16,19,1003,25}  {o,o,o,o,o,o,o}  {name,version,superuser,relocatable,schema,requires,comment}  pg_available_extension_versions
#define oid_3084 3084 // pg_extension_update_paths 12 10 100 0 f f t s 2249 19  {19,25,25,25}  {i,o,o,o}  {name,source,target,path}  pg_extension_update_paths
#define oid_3086 3086 // pg_extension_config_dump 12 0 f f v 2 2278 2205 25     pg_extension_config_dump
#define oid_3087 3087 // gin_extract_tsquery 12 0 f f 5 2281 3615 2281 21 2281 2281     gin_extract_tsquery_5args
#define oid_3088 3088 // gin_tsquery_consistent 12 0 f f 6 16 2281 21 3615 23 2281 2281     gin_tsquery_consistent_6args
#define oid_3089 3089 // pg_advisory_xact_lock  12 0 f f v 2278 20     pg_advisory_xact_lock_int8
#define oid_3090 3090 // pg_advisory_xact_lock_shared 12 0 f f v 2278 20     pg_advisory_xact_lock_shared_int8
#define oid_3091 3091 // pg_try_advisory_xact_lock  12 0 f f v 16 20     pg_try_advisory_xact_lock_int8
#define oid_3092 3092 // pg_try_advisory_xact_lock_shared 12 0 f f v 16 20     pg_try_advisory_xact_lock_shared_int8
#define oid_3093 3093 // pg_advisory_xact_lock  12 0 f f v 2 2278 23 23     pg_advisory_xact_lock_int4
#define oid_3094 3094 // pg_advisory_xact_lock_shared 12 0 f f v 2 2278 23 23     pg_advisory_xact_lock_shared_int4
#define oid_3095 3095 // pg_try_advisory_xact_lock  12 0 f f v 2 16 23 23     pg_try_advisory_xact_lock_int4
#define oid_3096 3096 // pg_try_advisory_xact_lock_shared 12 0 f f v 2 16 23 23     pg_try_advisory_xact_lock_shared_int4
#define oid_3097 3097 // varchar_transform 12 0 f f 2281 2281     varchar_transform
#define oid_3098 3098 // pg_create_restore_point 12 0 f f v 3220 25     pg_create_restore_point
#define oid_3099 3099 // pg_stat_get_wal_senders 12 10 0 f f s 0 2249   {23,25,3220,3220,3220,3220,23,25}  {o,o,o,o,o,o,o,o}  {pid,state,sent_location,write_location,flush_location,replay_location,sync_priority,sync_state}  pg_stat_get_wal_senders
#define oid_3100 3100 // row_number 12 0 f f 0 20      window_row_number
#define oid_3101 3101 // rank  12 0 f f 0 20      window_rank
#define oid_3102 3102 // dense_rank 12 0 f f 0 20      window_dense_rank
#define oid_3103 3103 // percent_rank 12 0 f f 0 701      window_percent_rank
#define oid_3104 3104 // cume_dist 12 0 f f 0 701      window_cume_dist
#define oid_3105 3105 // ntile  12 0 f 23 23     window_ntile
#define oid_3106 3106 // lag  12 0 f 2283 2283     window_lag
#define oid_3107 3107 // lag  12 0 f 2 2283 2283 23     window_lag_with_offset
#define oid_3108 3108 // lag  12 0 f 3 2283 2283 23 2283     window_lag_with_offset_and_default
#define oid_3109 3109 // lead  12 0 f 2283 2283     window_lead
#define oid_3110 3110 // lead  12 0 f 2 2283 2283 23     window_lead_with_offset
#define oid_3111 3111 // lead  12 0 f 3 2283 2283 23 2283     window_lead_with_offset_and_default
#define oid_3112 3112 // first_value 12 0 f 2283 2283     window_first_value
#define oid_3113 3113 // last_value 12 0 f 2283 2283     window_last_value
#define oid_3114 3114 // nth_value 12 0 f 2 2283 2283 23     window_nth_value
#define oid_3115 3115 // fdw_handler 4 p P \054 0 fdw_handler_in fdw_handler_out -
#define oid_3116 3116 // fdw_handler_in 12 0 f f f 3115 2275     fdw_handler_in
#define oid_3117 3117 // fdw_handler_out 12 0 f f 2275 3115     fdw_handler_out
#define oid_3120 3120 // void_recv   12 0 f f 2278 2281     void_recv
#define oid_3121 3121 // void_send   12 0 f f 17 2278     void_send
#define oid_3122 3122 // 403 date_ops 434 1082
#define oid_3123 3123 // 403 float8_ops 1970 701
#define oid_3124 3124 // 403 int8_ops 1976  20
#define oid_3125 3125 // 403 numeric_ops 1988 1700
#define oid_3126 3126 // 403 text_ops 1994  25
#define oid_3127 3127 // 403 timestamptz_ops 434 1184
#define oid_3128 3128 // 403 timestamp_ops 434 1114
#define oid_3129 3129 // btint2sortsupport 12 0 f f 2278 2281     btint2sortsupport
#define oid_3130 3130 // btint4sortsupport 12 0 f f 2278 2281     btint4sortsupport
#define oid_3131 3131 // btint8sortsupport 12 0 f f 2278 2281     btint8sortsupport
#define oid_3132 3132 // btfloat4sortsupport 12 0 f f 2278 2281     btfloat4sortsupport
#define oid_3133 3133 // btfloat8sortsupport 12 0 f f 2278 2281     btfloat8sortsupport
#define oid_3134 3134 // btoidsortsupport 12 0 f f 2278 2281     btoidsortsupport
#define oid_3135 3135 // btnamesortsupport 12 0 f f 2278 2281     btnamesortsupport
#define oid_3136 3136 // date_sortsupport 12 0 f f 2278 2281     date_sortsupport
#define oid_3137 3137 // timestamp_sortsupport 12 0 f f 2278 2281     timestamp_sortsupport
#define oid_3138 3138 // has_type_privilege   12 0 f f s 3 16 19 25 25     has_type_privilege_name_name
#define oid_3139 3139 // has_type_privilege   12 0 f f s 3 16 19 26 25     has_type_privilege_name_id
#define oid_3140 3140 // has_type_privilege   12 0 f f s 3 16 26 25 25     has_type_privilege_id_name
#define oid_3141 3141 // has_type_privilege   12 0 f f s 3 16 26 26 25     has_type_privilege_id_id
#define oid_3142 3142 // has_type_privilege   12 0 f f s 2 16 25 25     has_type_privilege_name
#define oid_3143 3143 // has_type_privilege   12 0 f f s 2 16 26 25     has_type_privilege_id
#define oid_3144 3144 // macaddr_not 12 0 f f 829 829     macaddr_not
#define oid_3145 3145 // macaddr_and 12 0 f f 2 829 829 829     macaddr_and
#define oid_3146 3146 // macaddr_or 12 0 f f 2 829 829 829     macaddr_or
#define oid_3147 3147 // ~   l f  829 829 0 macaddr_not -
#define oid_3148 3148 // &   f 829 829 829 0 macaddr_and -
#define oid_3149 3149 // |   f 829 829 829 0 macaddr_or -
#define oid_3150 3150 // pg_stat_get_db_temp_files 12 0 f f s 20 26     pg_stat_get_db_temp_files
#define oid_3151 3151 // pg_stat_get_db_temp_bytes 12 0 f f s 20 26     pg_stat_get_db_temp_bytes
#define oid_3152 3152 // pg_stat_get_db_deadlocks 12 0 f f s 20 26     pg_stat_get_db_deadlocks
#define oid_3153 3153 // array_to_json  12 0 f f s 114 2277     array_to_json
#define oid_3154 3154 // array_to_json  12 0 f f s 2 114 2277 16     array_to_json_pretty
#define oid_3155 3155 // row_to_json  12 0 f f s 114 2249     row_to_json
#define oid_3156 3156 // row_to_json  12 0 f f s 2 114 2249 16     row_to_json_pretty
#define oid_3157 3157 // numeric_transform 12 0 f f 2281 2281     numeric_transform
#define oid_3158 3158 // varbit_transform 12 0 f f 2281 2281     varbit_transform
#define oid_3159 3159 // pg_get_viewdef  12 0 f f s 2 25 26 23     pg_get_viewdef_wrap
#define oid_3160 3160 // pg_stat_get_checkpoint_write_time 12 0 f f s 0 701      pg_stat_get_checkpoint_write_time
#define oid_3161 3161 // pg_stat_get_checkpoint_sync_time 12 0 f f s 0 701      pg_stat_get_checkpoint_sync_time
#define oid_3162 3162 // pg_collation_for 12 0 f f f s  25 2276      pg_collation_for
#define oid_3163 3163 // pg_trigger_depth  12 0 f f s 0 23      pg_trigger_depth
#define oid_3165 3165 // pg_xlog_location_diff 12 0 f f 2 1700 3220 3220     pg_xlog_location_diff
#define oid_3166 3166 // pg_size_pretty  12 0 f f v 25 1700     pg_size_pretty_numeric
#define oid_3167 3167 // array_remove  12 0 f f f 2 2277 2277 2283     array_remove
#define oid_3168 3168 // array_replace  12 0 f f f 3 2277 2277 2283 2283     array_replace
#define oid_3169 3169 // rangesel  12 0 f f s 4 701 2281 26 2281 23     rangesel
#define oid_3170 3170 // lo_lseek64  12 0 f f v 3 20 23 20 23     lo_lseek64
#define oid_3171 3171 // lo_tell64   12 0 f f v 20 23     lo_tell64
#define oid_3172 3172 // lo_truncate64  12 0 f f v 2 23 23 20     lo_truncate64
#define oid_3173 3173 // json_agg_transfn 12 0 f f f s 2 2281 2281 2283     json_agg_transfn
#define oid_3174 3174 // json_agg_finalfn 12 0 f f f 114 2281     json_agg_finalfn
#define oid_3175 3175 // json_agg   12 0 f f s 114 2283     aggregate_dummy
#define oid_3176 3176 // to_json  12 0 f f s 114 2283     to_json
#define oid_3177 3177 // pg_stat_get_mod_since_analyze 12 0 f f s 20 26     pg_stat_get_mod_since_analyze
#define oid_3178 3178 // numeric_sum  12 0 f f f 1700 2281     numeric_sum
#define oid_3179 3179 // cardinality  12 0 f f 23 2277     array_cardinality
#define oid_3180 3180 // json_object_agg_transfn 12 0 f f f s 3 2281 2281 2276 2276     json_object_agg_transfn
#define oid_3181 3181 // record_image_eq  12 0 f f 2 16 2249 2249     record_image_eq
#define oid_3182 3182 // record_image_ne  12 0 f f 2 16 2249 2249     record_image_ne
#define oid_3183 3183 // record_image_lt  12 0 f f 2 16 2249 2249     record_image_lt
#define oid_3184 3184 // record_image_gt  12 0 f f 2 16 2249 2249     record_image_gt
#define oid_3185 3185 // record_image_le  12 0 f f 2 16 2249 2249     record_image_le
#define oid_3186 3186 // record_image_ge  12 0 f f 2 16 2249 2249     record_image_ge
#define oid_3187 3187 // btrecordimagecmp  12 0 f f 2 23 2249 2249     btrecordimagecmp
#define oid_3188 3188 // *=   2249 2249 16 3188 3189 record_image_eq eqsel eqjoinsel
#define oid_3189 3189 // *<>  f 2249 2249 16 3189 3188 record_image_ne neqsel neqjoinsel
#define oid_3190 3190 // *<   f 2249 2249 16 3191 3193 record_image_lt scalarltsel scalarltjoinsel
#define oid_3191 3191 // *>   f 2249 2249 16 3190 3192 record_image_gt scalargtsel scalargtjoinsel
#define oid_3192 3192 // *<=  f 2249 2249 16 3193 3191 record_image_le scalarltsel scalarltjoinsel
#define oid_3193 3193 // *>=  f 2249 2249 16 3192 3190 record_image_ge scalargtsel scalargtjoinsel
#define oid_3194 3194 // 403 record_image_ops
#define oid_3195 3195 // pg_stat_get_archiver 12 0 f f f s 0 2249   {20,25,1184,20,25,1184,1184}  {o,o,o,o,o,o,o}  {archived_count,last_archived_wal,last_archived_time,failed_count,last_failed_wal,last_failed_time,stats_reset}  pg_stat_get_archiver
#define oid_3196 3196 // json_object_agg_finalfn 12 0 f f f 114 2281     json_object_agg_finalfn
#define oid_3197 3197 // json_object_agg   12 0 f f s 2 114 2276 2276     aggregate_dummy
#define oid_3198 3198 // json_build_array  12 2276 f f f s 114 2276  {2276}  {v}   json_build_array
#define oid_3199 3199 // json_build_array  12 0 f f f s 0 114       json_build_array_noargs
#define oid_3200 3200 // json_build_object  12 2276 f f f s 114 2276  {2276}  {v}   json_build_object
#define oid_3201 3201 // json_build_object  12 0 f f f s 0 114       json_build_object_noargs
#define oid_3202 3202 // json_object 12 0 f f 114 1009     json_object
#define oid_3203 3203 // json_object 12 0 f f 2 114 1009 1009     json_object_two_arg
#define oid_3204 3204 // json_to_record   12 0 f f s 2249 114     json_to_record
#define oid_3205 3205 // json_to_recordset   12 100 0 f f s 2249 114     json_to_recordset
#define oid_3206 3206 // #>>   f 3802 1009 25 0 jsonb_extract_path_text -
#define oid_3207 3207 // jsonb_array_length  12 0 f f 23 3802     jsonb_array_length
#define oid_3208 3208 // jsonb_each    12 100 0 f f t 2249 3802  {3802,25,3802}  {i,o,o}  {from_json,key,value}  jsonb_each
#define oid_3209 3209 // jsonb_populate_record  12 0 f f f s 2 2283 2283 3802     jsonb_populate_record
#define oid_3210 3210 // jsonb_typeof  12 0 f f 25 3802     jsonb_typeof
#define oid_3211 3211 // ->   f 3802 25 3802 0 jsonb_object_field -
#define oid_3212 3212 // ->   f 3802 23 3802 0 jsonb_array_element -
#define oid_3213 3213 // #>   f 3802 1009 3802 0 jsonb_extract_path -
#define oid_3214 3214 // jsonb_object_field_text 12 0 f f 2 25  3802 25    {from_json, field_name}  jsonb_object_field_text
#define oid_3215 3215 // jsonb_array_element 12 0 f f 2 3802 3802 23    {from_json, element_index}  jsonb_array_element
#define oid_3216 3216 // jsonb_array_element_text 12 0 f f 2 25  3802 23    {from_json, element_index}  jsonb_array_element_text
#define oid_3217 3217 // jsonb_extract_path  12 25 f f 2 3802 3802 1009  {3802,1009}  {i,v}  {from_json,path_elems}  jsonb_extract_path
#define oid_3218 3218 // width_bucket  12 0 f f 2 23 2283 2277     width_bucket_array
#define oid_3219 3219 // jsonb_array_elements 12 100 0 f f t 3802 3802  {3802,3802}  {i,o}  {from_json,value}  jsonb_array_elements
#define oid_3220 3220 // pg_lsn  8 FLOAT8PASSBYVAL \054 0 3221 pg_lsn_in pg_lsn_out pg_lsn_recv pg_lsn_send
#define oid_3221 3221 // _pg_lsn  A \054 3220 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_3222 3222 // =   t 3220 3220 16 3222 3223 pg_lsn_eq eqsel eqjoinsel
#define oid_3223 3223 // <>   f 3220 3220 16 3223 3222 pg_lsn_ne neqsel neqjoinsel
#define oid_3224 3224 // <   f 3220 3220 16 3225 3227 pg_lsn_lt scalarltsel scalarltjoinsel
#define oid_3225 3225 // >   f 3220 3220 16 3224 3226 pg_lsn_gt scalargtsel scalargtjoinsel
#define oid_3226 3226 // <=   f 3220 3220 16 3227 3225 pg_lsn_le scalarltsel scalarltjoinsel
#define oid_3227 3227 // >=   f 3220 3220 16 3226 3224 pg_lsn_ge scalargtsel scalargtjoinsel
#define oid_3228 3228 // -   f 3220 3220 1700  0 pg_lsn_mi -
#define oid_3229 3229 // pg_lsn_in 12 0 f f 3220 2275     pg_lsn_in
#define oid_3230 3230 // pg_lsn_out 12 0 f f 2275 3220     pg_lsn_out
#define oid_3231 3231 // pg_lsn_lt 12 0 f f 2 16 3220 3220     pg_lsn_lt
#define oid_3232 3232 // pg_lsn_le 12 0 f f 2 16 3220 3220     pg_lsn_le
#define oid_3233 3233 // pg_lsn_eq 12 0 f f 2 16 3220 3220     pg_lsn_eq
#define oid_3234 3234 // pg_lsn_ge 12 0 f f 2 16 3220 3220     pg_lsn_ge
#define oid_3235 3235 // pg_lsn_gt 12 0 f f 2 16 3220 3220     pg_lsn_gt
#define oid_3236 3236 // pg_lsn_ne 12 0 f f 2 16 3220 3220     pg_lsn_ne
#define oid_3237 3237 // pg_lsn_mi 12 0 f f 2 1700 3220 3220     pg_lsn_mi
#define oid_3238 3238 // pg_lsn_recv 12 0 f f 3220 2281     pg_lsn_recv
#define oid_3239 3239 // pg_lsn_send 12 0 f f 17 3220     pg_lsn_send
#define oid_3240 3240 // =  t 3802 3802 16 3240 3241 jsonb_eq eqsel eqjoinsel
#define oid_3241 3241 // <>  f 3802 3802 16 3241 3240 jsonb_ne neqsel neqjoinsel
#define oid_3242 3242 // <  f 3802 3802 16 3243 3245 jsonb_lt scalarltsel scalarltjoinsel
#define oid_3243 3243 // >  f 3802 3802 16 3242 3244 jsonb_gt scalargtsel scalargtjoinsel
#define oid_3244 3244 // <= f 3802 3802 16 3245 3243 jsonb_le scalarltsel scalarltjoinsel
#define oid_3245 3245 // >= f 3802 3802 16 3244 3242 jsonb_ge scalargtsel scalargtjoinsel
#define oid_3246 3246 // @>   f 3802 3802 16 3250 jsonb_contains contsel contjoinsel
#define oid_3247 3247 // ?   f 3802 25 16 0 jsonb_exists contsel contjoinsel
#define oid_3248 3248 // ?|   f 3802 1009 16 0 jsonb_exists_any contsel contjoinsel
#define oid_3249 3249 // ?&   f 3802 1009 16 0 jsonb_exists_all contsel contjoinsel
#define oid_3250 3250 // <@   f 3802 3802 16 3246 jsonb_contained contsel contjoinsel
#define oid_3251 3251 // pg_lsn_cmp 12 0 f f 2 23 3220 3220     pg_lsn_cmp
#define oid_3252 3252 // pg_lsn_hash 12 0 f f 23 3220     pg_lsn_hash
#define oid_3253 3253 // 403 pg_lsn_ops
#define oid_3254 3254 // 405 pg_lsn_ops
#define oid_3255 3255 // bttextsortsupport 12 0 f f 2278 2281     bttextsortsupport
#define oid_3259 3259 // generate_series 12 1000 0 f f t 3 1700 1700 1700 1700     generate_series_step_numeric
#define oid_3260 3260 // generate_series 12 1000 0 f f t 2 1700 1700 1700     generate_series_numeric
#define oid_3261 3261 // json_strip_nulls  12 0 f f 114 114     json_strip_nulls
#define oid_3262 3262 // jsonb_strip_nulls  12 0 f f 3802 3802     jsonb_strip_nulls
#define oid_3263 3263 // jsonb_object 12 0 f f 3802 1009     jsonb_object
#define oid_3264 3264 // jsonb_object 12 0 f f 2 3802 1009 1009     jsonb_object_two_arg
#define oid_3265 3265 // jsonb_agg_transfn 12 0 f f f s 2 2281 2281 2283     jsonb_agg_transfn
#define oid_3266 3266 // jsonb_agg_finalfn 12 0 f f f s 3802 2281     jsonb_agg_finalfn
#define oid_3267 3267 // jsonb_agg   12 0 f f s 3802 2283     aggregate_dummy
#define oid_3268 3268 // jsonb_object_agg_transfn 12 0 f f f s 3 2281 2281 2276 2276     jsonb_object_agg_transfn
#define oid_3269 3269 // jsonb_object_agg_finalfn 12 0 f f f s 3802 2281     jsonb_object_agg_finalfn
#define oid_3270 3270 // jsonb_object_agg   12 0 f f 2 3802 2276 2276     aggregate_dummy
#define oid_3271 3271 // jsonb_build_array  12 2276 f f f s 3802 2276  {2276}  {v}   jsonb_build_array
#define oid_3272 3272 // jsonb_build_array  12 0 f f f s 0 3802       jsonb_build_array_noargs
#define oid_3273 3273 // jsonb_build_object  12 2276 f f f s 3802 2276  {2276}  {v}   jsonb_build_object
#define oid_3274 3274 // jsonb_build_object  12 0 f f f s 0 3802       jsonb_build_object_noargs
#define oid_3275 3275 // dist_ppoly  12 0 f f 2 701 600 604     dist_ppoly
#define oid_3276 3276 // <->  f 600 604 701   dist_ppoly -
#define oid_3382 3382 // pg_identify_object_as_address 12 0 f f s 3 2249 26 26 23  {26,26,23,25,1009,1009}  {i,i,i,o,o,o}  {classid,objid,subobjid,type,object_names,object_args}  pg_identify_object_as_address
#define oid_3383 3383 // brin_minmax_opcinfo 12 0 f f 2281 2281     brin_minmax_opcinfo
#define oid_3384 3384 // brin_minmax_add_value 12 0 f f 4 16 2281 2281 2281 2281     brin_minmax_add_value
#define oid_3385 3385 // brin_minmax_consistent 12 0 f f 3 16 2281 2281 2281     brin_minmax_consistent
#define oid_3386 3386 // brin_minmax_union 12 0 f f 3 16 2281 2281 2281     brin_minmax_union
#define oid_3454 3454 // pg_filenode_relation 12 0 f f s 2 2205 26 26     pg_filenode_relation
#define oid_3457 3457 // lo_from_bytea  12 0 f f v 2 26 26 17     lo_from_bytea
#define oid_3458 3458 // lo_get   12 0 f f v 17 26     lo_get
#define oid_3459 3459 // lo_get   12 0 f f v 3 17 26 20 23     lo_get_fragment
#define oid_3460 3460 // lo_put   12 0 f f v 3 2278 26 20 17     lo_put
#define oid_3461 3461 // make_timestamp 12 0 f f 6 1114 23 23 23 23 23 701    {year,month,mday,hour,min,sec}  make_timestamp
#define oid_3462 3462 // make_timestamptz 12 0 f f s 6 1184 23 23 23 23 23 701    {year,month,mday,hour,min,sec}  make_timestamptz
#define oid_3463 3463 // make_timestamptz 12 0 f f s 7 1184 23 23 23 23 23 701 25    {year,month,mday,hour,min,sec,timezone}  make_timestamptz_at_timezone
#define oid_3464 3464 // make_interval 12 0 f f 7 1186 23 23 23 23 23 23 701    {years,months,weeks,days,hours,mins,secs}  make_interval
#define oid_3465 3465 // jsonb_array_elements_text 12 100 0 f f t 25 3802  {3802,25}  {i,o}  {from_json,value}  jsonb_array_elements_text
#define oid_3469 3469 // spg_range_quad_config 12 0 f f 2 2278 2281 2281      spg_range_quad_config
#define oid_3470 3470 // spg_range_quad_choose 12 0 f f 2 2278 2281 2281      spg_range_quad_choose
#define oid_3471 3471 // spg_range_quad_picksplit 12 0 f f 2 2278 2281 2281      spg_range_quad_picksplit
#define oid_3472 3472 // spg_range_quad_inner_consistent 12 0 f f 2 2278 2281 2281      spg_range_quad_inner_consistent
#define oid_3473 3473 // spg_range_quad_leaf_consistent 12 0 f f 2 16 2281 2281      spg_range_quad_leaf_consistent
#define oid_3474 3474 // 4000 range_ops
#define oid_3475 3475 // jsonb_populate_recordset 12 100 0 f f s 2 2283 2283 3802     jsonb_populate_recordset
#define oid_3476 3476 // to_regoperator 12 0 f f s 2204 2275     to_regoperator
#define oid_3477 3477 // ->>   f 3802 25 25 0 jsonb_object_field_text -
#define oid_3478 3478 // jsonb_object_field  12 0 f f 2 3802 3802 25    {from_json, field_name}  jsonb_object_field
#define oid_3479 3479 // to_regprocedure 12 0 f f s 2202 2275     to_regprocedure
#define oid_3480 3480 // gin_compare_jsonb 12 0 f f 2 23 25 25     gin_compare_jsonb
#define oid_3481 3481 // ->>   f 3802 23 25 0 jsonb_array_element_text -
#define oid_3482 3482 // gin_extract_jsonb 12 0 f f 3 2281 2281 2281 2281     gin_extract_jsonb
#define oid_3483 3483 // gin_extract_jsonb_query 12 0 f f 7 2281 2277 2281 21 2281 2281 2281 2281     gin_extract_jsonb_query
#define oid_3484 3484 // gin_consistent_jsonb 12 0 f f 8 16 2281 21 2277 23 2281 2281 2281 2281     gin_consistent_jsonb
#define oid_3485 3485 // gin_extract_jsonb_path 12 0 f f 3 2281 2281 2281 2281     gin_extract_jsonb_path
#define oid_3486 3486 // gin_extract_jsonb_query_path 12 0 f f 7 2281 2277 2281 21 2281 2281 2281 2281     gin_extract_jsonb_query_path
#define oid_3487 3487 // gin_consistent_jsonb_path 12 0 f f 8 16 2281 21 2277 23 2281 2281 2281 2281     gin_consistent_jsonb_path
#define oid_3488 3488 // gin_triconsistent_jsonb 12 0 f f 7 18 2281 21 2277 23 2281 2281 2281     gin_triconsistent_jsonb
#define oid_3489 3489 // gin_triconsistent_jsonb_path 12 0 f f 7 18 2281 21 2277 23 2281 2281 2281     gin_triconsistent_jsonb_path
#define oid_3490 3490 // jsonb_to_record  12 0 f f s 2249 3802     jsonb_to_record
#define oid_3491 3491 // jsonb_to_recordset 12 100 0 f f s 2249 3802     jsonb_to_recordset
#define oid_3492 3492 // to_regoper 12 0 f f s 2203 2275     to_regoper
#define oid_3493 3493 // to_regtype 12 0 f f s 2206 2275     to_regtype
#define oid_3494 3494 // to_regproc 12 0 f f s 24 2275     to_regproc
#define oid_3495 3495 // to_regclass 12 0 f f s 2205 2275     to_regclass
#define oid_3496 3496 // bool_accum    12 0 f f f 2 2281 2281 16     bool_accum
#define oid_3497 3497 // bool_accum_inv    12 0 f f f 2 2281 2281 16     bool_accum_inv
#define oid_3498 3498 // bool_alltrue    12 0 f f 16 2281     bool_alltrue
#define oid_3499 3499 // bool_anytrue    12 0 f f 16 2281     bool_anytrue
#define oid_3500 3500 // anyenum  4 p P \054 0 anyenum_in anyenum_out -
#define oid_3504 3504 // anyenum_in 12 0 f f 3500 2275     anyenum_in
#define oid_3505 3505 // anyenum_out 12 0 f f s 2275 3500     anyenum_out
#define oid_3506 3506 // enum_in 12 0 f f s 2 3500 2275 26     enum_in
#define oid_3507 3507 // enum_out 12 0 f f s 2275 3500     enum_out
#define oid_3508 3508 // enum_eq 12 0 f f 2 16 3500 3500     enum_eq
#define oid_3509 3509 // enum_ne 12 0 f f 2 16 3500 3500     enum_ne
#define oid_3510 3510 // enum_lt 12 0 f f 2 16 3500 3500     enum_lt
#define oid_3511 3511 // enum_gt 12 0 f f 2 16 3500 3500     enum_gt
#define oid_3512 3512 // enum_le 12 0 f f 2 16 3500 3500     enum_le
#define oid_3513 3513 // enum_ge 12 0 f f 2 16 3500 3500     enum_ge
#define oid_3514 3514 // enum_cmp 12 0 f f 2 23 3500 3500     enum_cmp
#define oid_3515 3515 // hashenum 12 0 f f 23 3500     hashenum
#define oid_3516 3516 // =   t 3500 3500 16 3516 3517 enum_eq eqsel eqjoinsel
#define oid_3517 3517 // <>   f 3500 3500 16 3517 3516 enum_ne neqsel neqjoinsel
#define oid_3518 3518 // <   f 3500 3500 16 3519 3521 enum_lt scalarltsel scalarltjoinsel
#define oid_3519 3519 // >   f 3500 3500 16 3518 3520 enum_gt scalargtsel scalargtjoinsel
#define oid_3520 3520 // <=   f 3500 3500 16 3521 3519 enum_le scalarltsel scalarltjoinsel
#define oid_3521 3521 // >=   f 3500 3500 16 3520 3518 enum_ge scalargtsel scalargtjoinsel
#define oid_3522 3522 // 403 enum_ops
#define oid_3523 3523 // 405 enum_ops
#define oid_3524 3524 // enum_smaller 12 0 f f 2 3500 3500 3500     enum_smaller
#define oid_3525 3525 // enum_larger 12 0 f f 2 3500 3500 3500     enum_larger
#define oid_3526 3526 // max  12 0 f f 3500 3500     aggregate_dummy
#define oid_3527 3527 // min  12 0 f f 3500 3500     aggregate_dummy
#define oid_3528 3528 // enum_first 12 0 f f f s 3500 3500     enum_first
#define oid_3529 3529 // enum_last 12 0 f f f s 3500 3500     enum_last
#define oid_3530 3530 // enum_range 12 0 f f f s 2 2277 3500 3500     enum_range_bounds
#define oid_3531 3531 // enum_range 12 0 f f f s 2277 3500     enum_range_all
#define oid_3532 3532 // enum_recv 12 0 f f s 2 3500 2281 26     enum_recv
#define oid_3533 3533 // enum_send 12 0 f f s 17 3500     enum_send
#define oid_3535 3535 // string_agg_transfn 12 0 f f f 3 2281 2281 25 25     string_agg_transfn
#define oid_3536 3536 // string_agg_finalfn 12 0 f f f 25 2281     string_agg_finalfn
#define oid_3537 3537 // pg_describe_object 12 0 f f s 3 25 26 26 23     pg_describe_object
#define oid_3538 3538 // string_agg  12 0 f f 2 25 25 25     aggregate_dummy
#define oid_3539 3539 // format 12 2276 f f f s 2 25 25 2276  {25,2276}  {i,v}   text_format
#define oid_3540 3540 // format 12 0 f f f s 25 25      text_format_nv
#define oid_3543 3543 // bytea_string_agg_transfn 12 0 f f f 3 2281 2281 17 17     bytea_string_agg_transfn
#define oid_3544 3544 // bytea_string_agg_finalfn 12 0 f f f 17 2281     bytea_string_agg_finalfn
#define oid_3545 3545 // string_agg  12 0 f f 2 17 17 17     aggregate_dummy
#define oid_3546 3546 // int8dec   12 0 f f 20 20     int8dec
#define oid_3547 3547 // int8dec_any  12 0 f f 2 20 20 2276     int8dec_any
#define oid_3548 3548 // numeric_accum_inv  12 0 f f f 2 2281 2281 1700     numeric_accum_inv
#define oid_3549 3549 // interval_accum_inv  12 0 f f 2 1187 1187 1186     interval_accum_inv
#define oid_3550 3550 // 783 network_ops
#define oid_3551 3551 // network_overlap 12 0 f f 2 16 869 869     network_overlap
#define oid_3552 3552 // &&   f 869 869 16 3552 network_overlap networksel networkjoinsel
#define oid_3553 3553 // inet_gist_consistent 12 0 f f 5 16 2281 869 23 26 2281     inet_gist_consistent
#define oid_3554 3554 // inet_gist_union 12 0 f f 2 2281 2281 2281     inet_gist_union
#define oid_3555 3555 // inet_gist_compress 12 0 f f 2281 2281     inet_gist_compress
#define oid_3556 3556 // inet_gist_decompress 12 0 f f 2281 2281     inet_gist_decompress
#define oid_3557 3557 // inet_gist_penalty 12 0 f f 3 2281 2281 2281 2281     inet_gist_penalty
#define oid_3558 3558 // inet_gist_picksplit 12 0 f f 2 2281 2281 2281     inet_gist_picksplit
#define oid_3559 3559 // inet_gist_same 12 0 f f 3 2281 869 869 2281     inet_gist_same
#define oid_3560 3560 // networksel   12 0 f f s 4 701 2281 26 2281 23     networksel
#define oid_3561 3561 // networkjoinsel  12 0 f f s 5 701 2281 26 2281 21 2281     networkjoinsel
#define oid_3562 3562 // network_larger 12 0 f f 2 869 869 869     network_larger
#define oid_3563 3563 // network_smaller 12 0 f f 2 869 869 869     network_smaller
#define oid_3564 3564 // max  12 0 f f 869 869     aggregate_dummy
#define oid_3565 3565 // min  12 0 f f 869 869     aggregate_dummy
#define oid_3566 3566 // pg_event_trigger_dropped_objects 12 10 100 0 f f t s 0 2249   {26,26,23,16,16,25,25,25,25,1009,1009}  {o,o,o,o,o,o,o,o,o,o,o}  {classid, objid, objsubid, original, normal, object_type, schema_name, object_name, object_identity, address_names, address_args}  pg_event_trigger_dropped_objects
#define oid_3567 3567 // int2_accum_inv  12 0 f f f 2 2281 2281 21     int2_accum_inv
#define oid_3568 3568 // int4_accum_inv  12 0 f f f 2 2281 2281 23     int4_accum_inv
#define oid_3569 3569 // int8_accum_inv  12 0 f f f 2 2281 2281 20     int8_accum_inv
#define oid_3570 3570 // int2_avg_accum_inv  12 0 f f 2 1016 1016 21     int2_avg_accum_inv
#define oid_3571 3571 // int4_avg_accum_inv  12 0 f f 2 1016 1016 23     int4_avg_accum_inv
#define oid_3572 3572 // int2int4_sum  12 0 f f 20 1016     int2int4_sum
#define oid_3580 3580 // brin 5 14 f f t t f brininsert brinbeginscan bringetbitmap brinrescan brinendscan brinmarkpos brinrestrpos brinbuild brinbuildempty brinbulkdelete brinvacuumcleanup brincostestimate brinoptions
#define oid_3581 3581 // pg_xact_commit_timestamp 12 0 f f s 1184 28     pg_xact_commit_timestamp
#define oid_3583 3583 // pg_last_committed_xact 12 0 f f s 0 2249   {28,1184}  {o,o}  {xid,timestamp}  pg_last_committed_xact
#define oid_3594 3594 // event_trigger_in 12 0 f f f 3838 2275     event_trigger_in
#define oid_3595 3595 // event_trigger_out 12 0 f f 2275 3838     event_trigger_out
#define oid_3610 3610 // tsvectorin  12 0 f f 3614 2275     tsvectorin
#define oid_3611 3611 // tsvectorout  12 0 f f 2275 3614     tsvectorout
#define oid_3612 3612 // tsqueryin  12 0 f f 3615 2275     tsqueryin
#define oid_3613 3613 // tsqueryout  12 0 f f 2275 3615     tsqueryout
#define oid_3614 3614 // tsvector \054 0 3643 tsvectorin tsvectorout tsvectorrecv tsvectorsend - ts_typanalyze x 0
#define oid_3615 3615 // tsquery \054 0 3645 tsqueryin tsqueryout tsqueryrecv tsquerysend
#define oid_3616 3616 // tsvector_lt  12 0 f f 2 16 3614 3614     tsvector_lt
#define oid_3617 3617 // tsvector_le  12 0 f f 2 16 3614 3614     tsvector_le
#define oid_3618 3618 // tsvector_eq  12 0 f f 2 16 3614 3614     tsvector_eq
#define oid_3619 3619 // tsvector_ne  12 0 f f 2 16 3614 3614     tsvector_ne
#define oid_3620 3620 // tsvector_ge  12 0 f f 2 16 3614 3614     tsvector_ge
#define oid_3621 3621 // tsvector_gt  12 0 f f 2 16 3614 3614     tsvector_gt
#define oid_3622 3622 // tsvector_cmp  12 0 f f 2 23 3614 3614     tsvector_cmp
#define oid_3623 3623 // strip   12 0 f f 3614 3614     tsvector_strip
#define oid_3624 3624 // setweight  12 0 f f 2 3614 3614 18     tsvector_setweight
#define oid_3625 3625 // tsvector_concat 12 0 f f 2 3614 3614 3614     tsvector_concat
#define oid_3626 3626 // 403 tsvector_ops
#define oid_3627 3627 // <   f 3614 3614 16 3632 3631 tsvector_lt scalarltsel scalarltjoinsel
#define oid_3628 3628 // <=   f 3614 3614 16 3631 3632 tsvector_le scalarltsel scalarltjoinsel
#define oid_3629 3629 // =   3614 3614 16 3629 3630 tsvector_eq eqsel eqjoinsel
#define oid_3630 3630 // <>   f 3614 3614 16 3630 3629 tsvector_ne neqsel neqjoinsel
#define oid_3631 3631 // >=   f 3614 3614 16 3628 3627 tsvector_ge scalargtsel scalargtjoinsel
#define oid_3632 3632 // >   f 3614 3614 16 3627 3628 tsvector_gt scalargtsel scalargtjoinsel
#define oid_3633 3633 // ||   f 3614 3614 3614 0 tsvector_concat  -
#define oid_3634 3634 // ts_match_vq  12 0 f f 2 16 3614 3615     ts_match_vq
#define oid_3635 3635 // ts_match_qv  12 0 f f 2 16 3615 3614     ts_match_qv
#define oid_3636 3636 // @@   f 3614 3615 16 3637 ts_match_vq  tsmatchsel tsmatchjoinsel
#define oid_3637 3637 // @@   f 3615 3614 16 3636 ts_match_qv  tsmatchsel tsmatchjoinsel
#define oid_3638 3638 // tsvectorsend  12 0 f f 17 3614     tsvectorsend
#define oid_3639 3639 // tsvectorrecv  12 0 f f 3614 2281     tsvectorrecv
#define oid_3640 3640 // tsquerysend  12 0 f f 17 3615     tsquerysend
#define oid_3641 3641 // tsqueryrecv  12 0 f f 3615 2281     tsqueryrecv
#define oid_3642 3642 // gtsvector \054 0 3644 gtsvectorin gtsvectorout -
#define oid_3643 3643 // _tsvector A \054 3614 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3644 3644 // _gtsvector A \054 3642 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3645 3645 // _tsquery A \054 3615 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3646 3646 // gtsvectorin  12 0 f f 3642 2275     gtsvectorin
#define oid_3647 3647 // gtsvectorout  12 0 f f 2275 3642     gtsvectorout
#define oid_3648 3648 // gtsvector_compress 12 0 f f 2281 2281     gtsvector_compress
#define oid_3649 3649 // gtsvector_decompress 12 0 f f 2281 2281     gtsvector_decompress
#define oid_3650 3650 // gtsvector_picksplit 12 0 f f 2 2281 2281 2281     gtsvector_picksplit
#define oid_3651 3651 // gtsvector_union 12 0 f f 2 2281 2281 2281     gtsvector_union
#define oid_3652 3652 // gtsvector_same 12 0 f f 3 2281 3642 3642 2281     gtsvector_same
#define oid_3653 3653 // gtsvector_penalty 12 0 f f 3 2281 2281 2281 2281     gtsvector_penalty
#define oid_3654 3654 // gtsvector_consistent 12 0 f f 5 16 2281 3642 23 26 2281     gtsvector_consistent
#define oid_3655 3655 // 783 tsvector_ops
#define oid_3656 3656 // gin_extract_tsvector 12 0 f f 3 2281 3614 2281 2281     gin_extract_tsvector
#define oid_3657 3657 // gin_extract_tsquery 12 0 f f 7 2281 3615 2281 21 2281 2281 2281 2281     gin_extract_tsquery
#define oid_3658 3658 // gin_tsquery_consistent 12 0 f f 8 16 2281 21 3615 23 2281 2281 2281 2281     gin_tsquery_consistent
#define oid_3659 3659 // 2742 tsvector_ops
#define oid_3660 3660 // @@@   f 3614 3615 16 3661 ts_match_vq  tsmatchsel tsmatchjoinsel
#define oid_3661 3661 // @@@   f 3615 3614 16 3660 ts_match_qv  tsmatchsel tsmatchjoinsel
#define oid_3662 3662 // tsquery_lt  12 0 f f 2 16 3615 3615     tsquery_lt
#define oid_3663 3663 // tsquery_le  12 0 f f 2 16 3615 3615     tsquery_le
#define oid_3664 3664 // tsquery_eq  12 0 f f 2 16 3615 3615     tsquery_eq
#define oid_3665 3665 // tsquery_ne  12 0 f f 2 16 3615 3615     tsquery_ne
#define oid_3666 3666 // tsquery_ge  12 0 f f 2 16 3615 3615     tsquery_ge
#define oid_3667 3667 // tsquery_gt  12 0 f f 2 16 3615 3615     tsquery_gt
#define oid_3668 3668 // tsquery_cmp  12 0 f f 2 23 3615 3615     tsquery_cmp
#define oid_3669 3669 // tsquery_and 12 0 f f 2 3615 3615 3615     tsquery_and
#define oid_3670 3670 // tsquery_or 12 0 f f 2 3615 3615 3615     tsquery_or
#define oid_3671 3671 // tsquery_not 12 0 f f 3615 3615     tsquery_not
#define oid_3672 3672 // numnode  12 0 f f 23 3615     tsquery_numnode
#define oid_3673 3673 // querytree  12 0 f f 25 3615     tsquerytree
#define oid_3674 3674 // <   f 3615 3615 16 3679 3678 tsquery_lt scalarltsel scalarltjoinsel
#define oid_3675 3675 // <=   f 3615 3615 16 3678 3679 tsquery_le scalarltsel scalarltjoinsel
#define oid_3676 3676 // =   3615 3615 16 3676 3677 tsquery_eq eqsel eqjoinsel
#define oid_3677 3677 // <>   f 3615 3615 16 3677 3676 tsquery_ne neqsel neqjoinsel
#define oid_3678 3678 // >=   f 3615 3615 16 3675 3674 tsquery_ge scalargtsel scalargtjoinsel
#define oid_3679 3679 // >   f 3615 3615 16 3674 3675 tsquery_gt scalargtsel scalargtjoinsel
#define oid_3680 3680 // &&   f 3615 3615 3615 0 tsquery_and  -
#define oid_3681 3681 // ||   f 3615 3615 3615 0 tsquery_or
#define oid_3682 3682 // !!   l f  3615 3615 0 tsquery_not  -
#define oid_3683 3683 // 403 tsquery_ops
#define oid_3684 3684 // ts_rewrite 12 0 f f 3 3615 3615 3615 3615     tsquery_rewrite
#define oid_3685 3685 // ts_rewrite 12 0 f f v 2 3615 3615 25     tsquery_rewrite_query
#define oid_3686 3686 // tsmatchsel 12 0 f f s 4 701 2281 26 2281 23     tsmatchsel
#define oid_3687 3687 // tsmatchjoinsel 12 0 f f s 5 701 2281 26 2281 21 2281     tsmatchjoinsel
#define oid_3688 3688 // ts_typanalyze 12 0 f f s 16 2281     ts_typanalyze
#define oid_3689 3689 // ts_stat 12 10 10000 0 f f t v 2249 25  {25,25,23,23}  {i,o,o,o}  {query,word,ndoc,nentry}  ts_stat1
#define oid_3690 3690 // ts_stat 12 10 10000 0 f f t v 2 2249 25 25  {25,25,25,23,23}  {i,i,o,o,o}  {query,weights,word,ndoc,nentry}  ts_stat2
#define oid_3691 3691 // tsq_mcontains 12 0 f f 2 16 3615 3615     tsq_mcontains
#define oid_3692 3692 // tsq_mcontained 12 0 f f 2 16 3615 3615     tsq_mcontained
#define oid_3693 3693 // @>   f 3615 3615 16 3694 tsq_mcontains contsel  contjoinsel
#define oid_3694 3694 // <@   f 3615 3615 16 3693 tsq_mcontained contsel  contjoinsel
#define oid_3695 3695 // gtsquery_compress  12 0 f f 2281 2281     gtsquery_compress
#define oid_3696 3696 // gtsquery_decompress  12 0 f f 2281 2281     gtsquery_decompress
#define oid_3697 3697 // gtsquery_picksplit  12 0 f f 2 2281 2281 2281     gtsquery_picksplit
#define oid_3698 3698 // gtsquery_union  12 0 f f 2 2281 2281 2281     gtsquery_union
#define oid_3699 3699 // gtsquery_same   12 0 f f 3 2281 20 20 2281     gtsquery_same
#define oid_3700 3700 // gtsquery_penalty  12 0 f f 3 2281 2281 2281 2281     gtsquery_penalty
#define oid_3701 3701 // gtsquery_consistent  12 0 f f 5 16 2281 2281 23 26 2281     gtsquery_consistent
#define oid_3702 3702 // 783 tsquery_ops
#define oid_3703 3703 // ts_rank 12 0 f f 4 700 1021 3614 3615 23     ts_rank_wttf
#define oid_3704 3704 // ts_rank 12 0 f f 3 700 1021 3614 3615     ts_rank_wtt
#define oid_3705 3705 // ts_rank 12 0 f f 3 700 3614 3615 23     ts_rank_ttf
#define oid_3706 3706 // ts_rank 12 0 f f 2 700 3614 3615     ts_rank_tt
#define oid_3707 3707 // ts_rank_cd 12 0 f f 4 700 1021 3614 3615 23     ts_rankcd_wttf
#define oid_3708 3708 // ts_rank_cd 12 0 f f 3 700 1021 3614 3615     ts_rankcd_wtt
#define oid_3709 3709 // ts_rank_cd 12 0 f f 3 700 3614 3615 23     ts_rankcd_ttf
#define oid_3710 3710 // ts_rank_cd 12 0 f f 2 700 3614 3615     ts_rankcd_tt
#define oid_3711 3711 // length  12 0 f f 23 3614     tsvector_length
#define oid_3713 3713 // ts_token_type 12 16 0 f f t 2249 26  {26,23,25,25}  {i,o,o,o}  {parser_oid,tokid,alias,description}  ts_token_type_byid
#define oid_3714 3714 // ts_token_type 12 16 0 f f t s 2249 25  {25,23,25,25}  {i,o,o,o}  {parser_name,tokid,alias,description}  ts_token_type_byname
#define oid_3715 3715 // ts_parse 12 1000 0 f f t 2 2249 26 25  {26,25,23,25}  {i,i,o,o}  {parser_oid,txt,tokid,token}  ts_parse_byid
#define oid_3716 3716 // ts_parse 12 1000 0 f f t s 2 2249 25 25  {25,25,23,25}  {i,i,o,o}  {parser_name,txt,tokid,token}  ts_parse_byname
#define oid_3717 3717 // prsd_start 12 0 f f 2 2281 2281 23     prsd_start
#define oid_3718 3718 // prsd_nexttoken 12 0 f f 3 2281 2281 2281 2281     prsd_nexttoken
#define oid_3719 3719 // prsd_end  12 0 f f 2278 2281     prsd_end
#define oid_3720 3720 // prsd_headline 12 0 f f 3 2281 2281 2281 3615     prsd_headline
#define oid_3721 3721 // prsd_lextype 12 0 f f 2281 2281     prsd_lextype
#define oid_3722 3722 // default prsd_start prsd_nexttoken prsd_end prsd_headline prsd_lextype
#define oid_3723 3723 // ts_lexize  12 0 f f 2 1009 3769 25     ts_lexize
#define oid_3724 3724 // gin_cmp_tslexeme 12 0 f f 2 23 25 25     gin_cmp_tslexeme
#define oid_3725 3725 // dsimple_init 12 0 f f 2281 2281     dsimple_init
#define oid_3726 3726 // dsimple_lexize 12 0 f f 4 2281 2281 2281 2281 2281     dsimple_lexize
#define oid_3727 3727 // simple dsimple_init dsimple_lexize
#define oid_3728 3728 // dsynonym_init 12 0 f f 2281 2281     dsynonym_init
#define oid_3729 3729 // dsynonym_lexize 12 0 f f 4 2281 2281 2281 2281 2281     dsynonym_lexize
#define oid_3730 3730 // synonym dsynonym_init dsynonym_lexize
#define oid_3731 3731 // dispell_init 12 0 f f 2281 2281     dispell_init
#define oid_3732 3732 // dispell_lexize 12 0 f f 4 2281 2281 2281 2281 2281     dispell_lexize
#define oid_3733 3733 // ispell dispell_init dispell_lexize
#define oid_3734 3734 // regconfig 4 t \054 0 3735 regconfigin regconfigout regconfigrecv regconfigsend
#define oid_3735 3735 // _regconfig A \054 3734 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3736 3736 // regconfigin 12 0 f f s 3734 2275     regconfigin
#define oid_3737 3737 // regconfigout 12 0 f f s 2275 3734     regconfigout
#define oid_3738 3738 // regconfigrecv 12 0 f f 3734 2281     regconfigrecv
#define oid_3739 3739 // regconfigsend 12 0 f f 17 3734     regconfigsend
#define oid_3740 3740 // thesaurus_init 12 0 f f 2281 2281     thesaurus_init
#define oid_3741 3741 // thesaurus_lexize 12 0 f f 4 2281 2281 2281 2281 2281     thesaurus_lexize
#define oid_3742 3742 // thesaurus thesaurus_init thesaurus_lexize
#define oid_3743 3743 // ts_headline 12 0 f f 4 25 3734 25 3615 25     ts_headline_byid_opt
#define oid_3744 3744 // ts_headline 12 0 f f 3 25 3734 25 3615     ts_headline_byid
#define oid_3745 3745 // to_tsvector 12 0 f f 2 3614 3734 25     to_tsvector_byid
#define oid_3746 3746 // to_tsquery 12 0 f f 2 3615 3734 25     to_tsquery_byid
#define oid_3747 3747 // plainto_tsquery 12 0 f f 2 3615 3734 25     plainto_tsquery_byid
#define oid_3748 3748 // simple 3722
#define oid_3749 3749 // to_tsvector 12 0 f f s 3614 25     to_tsvector
#define oid_3750 3750 // to_tsquery 12 0 f f s 3615 25     to_tsquery
#define oid_3751 3751 // plainto_tsquery 12 0 f f s 3615 25     plainto_tsquery
#define oid_3752 3752 // tsvector_update_trigger  12 0 f f f v 0 2279      tsvector_update_trigger_byid
#define oid_3753 3753 // tsvector_update_trigger_column 12 0 f f f v 0 2279      tsvector_update_trigger_bycolumn
#define oid_3754 3754 // ts_headline 12 0 f f s 3 25 25 3615 25     ts_headline_opt
#define oid_3755 3755 // ts_headline 12 0 f f s 2 25 25 3615     ts_headline
#define oid_3756 3756 // pg_ts_parser_is_visible 12 10 0 f f s 16 26     pg_ts_parser_is_visible
#define oid_3757 3757 // pg_ts_dict_is_visible 12 10 0 f f s 16 26     pg_ts_dict_is_visible
#define oid_3758 3758 // pg_ts_config_is_visible 12 10 0 f f s 16 26     pg_ts_config_is_visible
#define oid_3759 3759 // get_current_ts_config 12 0 f f s 0 3734      get_current_ts_config
#define oid_3760 3760 // ts_match_tt  12 3 0 f f s 2 16 25 25     ts_match_tt
#define oid_3761 3761 // ts_match_tq  12 2 0 f f s 2 16 25 3615     ts_match_tq
#define oid_3762 3762 // @@   f 25  25  16  0 ts_match_tt contsel  contjoinsel
#define oid_3763 3763 // @@   f 25  3615 16  0 ts_match_tq contsel  contjoinsel
#define oid_3765 3765 // simple 3727
#define oid_3768 3768 // pg_ts_template_is_visible 12 10 0 f f s 16 26     pg_ts_template_is_visible
#define oid_3769 3769 // regdictionary 4 t \054 0 3770 regdictionaryin regdictionaryout regdictionaryrecv regdictionarysend
#define oid_3770 3770 // _regdictionary A \054 3769 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3771 3771 // regdictionaryin 12 0 f f s 3769 2275     regdictionaryin
#define oid_3772 3772 // regdictionaryout 12 0 f f s 2275 3769     regdictionaryout
#define oid_3773 3773 // regdictionaryrecv 12 0 f f 3769 2281     regdictionaryrecv
#define oid_3774 3774 // regdictionarysend 12 0 f f 17 3769     regdictionarysend
#define oid_3775 3775 // pg_stat_reset_shared  12 0 f f v 2278 25     pg_stat_reset_shared
#define oid_3776 3776 // pg_stat_reset_single_table_counters 12 0 f f f v 2278 26     pg_stat_reset_single_table_counters
#define oid_3777 3777 // pg_stat_reset_single_function_counters 12 0 f f f v 2278 26     pg_stat_reset_single_function_counters
#define oid_3778 3778 // pg_tablespace_location 12 0 f f s 25 26     pg_tablespace_location
#define oid_3779 3779 // pg_create_physical_replication_slot 12 0 f f f v 2249 19  {19,19,3220}  {i,o,o}  {slot_name,slot_name,xlog_position}  pg_create_physical_replication_slot
#define oid_3780 3780 // pg_drop_replication_slot 12 0 f f f v 2278 19     pg_drop_replication_slot
#define oid_3781 3781 // pg_get_replication_slots 12 10 0 f f s 0 2249   {19,19,25,26,16,28,28,3220}  {o,o,o,o,o,o,o,o}  {slot_name,plugin,slot_type,datoid,active,xmin,catalog_xmin,restart_lsn}  pg_get_replication_slots
#define oid_3782 3782 // pg_logical_slot_get_changes 12 1000 1000 25 f f v 4 2249 19 3220 23 1009  {19,3220,23,1009,3220,28,25}  {i,i,i,v,o,o,o}  {slot_name,upto_lsn,upto_nchanges,options,location,xid,data}  pg_logical_slot_get_changes
#define oid_3783 3783 // pg_logical_slot_get_binary_changes 12 1000 1000 25 f f v 4 2249 19 3220 23 1009  {19,3220,23,1009,3220,28,17}  {i,i,i,v,o,o,o}  {slot_name,upto_lsn,upto_nchanges,options,location,xid,data}  pg_logical_slot_get_binary_changes
#define oid_3784 3784 // pg_logical_slot_peek_changes 12 1000 1000 25 f f v 4 2249 19 3220 23 1009  {19,3220,23,1009,3220,28,25}  {i,i,i,v,o,o,o}  {slot_name,upto_lsn,upto_nchanges,options,location,xid,data}  pg_logical_slot_peek_changes
#define oid_3785 3785 // pg_logical_slot_peek_binary_changes 12 1000 1000 25 f f v 4 2249 19 3220 23 1009  {19,3220,23,1009,3220,28,17}  {i,i,i,v,o,o,o}  {slot_name,upto_lsn,upto_nchanges,options,location,xid,data}  pg_logical_slot_peek_binary_changes
#define oid_3786 3786 // pg_create_logical_replication_slot 12 0 f f f v 2 2249 19 19  {19,19,25,3220}  {i,i,o,o}  {slot_name,plugin,slot_name,xlog_position}  pg_create_logical_replication_slot
#define oid_3787 3787 // to_jsonb  12 0 f f s 3802 2283     to_jsonb
#define oid_3788 3788 // pg_stat_get_snapshot_timestamp 12 0 f f s 0 1184      pg_stat_get_snapshot_timestamp
#define oid_3789 3789 // bringetbitmap  12 0 f f v 2 20 2281 2281     bringetbitmap
#define oid_3790 3790 // brininsert   12 0 f f v 6 16 2281 2281 2281 2281 2281 2281     brininsert
#define oid_3791 3791 // brinbeginscan  12 0 f f v 3 2281 2281 2281 2281     brinbeginscan
#define oid_3792 3792 // brinrescan   12 0 f f v 5 2278 2281 2281 2281 2281 2281     brinrescan
#define oid_3793 3793 // brinendscan   12 0 f f v 2278 2281     brinendscan
#define oid_3794 3794 // brinmarkpos   12 0 f f v 2278 2281     brinmarkpos
#define oid_3795 3795 // brinrestrpos   12 0 f f v 2278 2281     brinrestrpos
#define oid_3796 3796 // brinbuild   12 0 f f v 3 2281 2281 2281 2281     brinbuild
#define oid_3797 3797 // brinbuildempty  12 0 f f v 2278 2281     brinbuildempty
#define oid_3798 3798 // brinbulkdelete  12 0 f f v 4 2281 2281 2281 2281 2281     brinbulkdelete
#define oid_3799 3799 // brinvacuumcleanup  12 0 f f v 2 2281 2281 2281     brinvacuumcleanup
#define oid_3800 3800 // brincostestimate 12 0 f f v 7 2278 2281 2281 2281 2281 2281 2281 2281     brincostestimate
#define oid_3801 3801 // brinoptions   12 0 f f s 2 17 1009 16      brinoptions
#define oid_3802 3802 // jsonb  \054 0 3807 jsonb_in jsonb_out jsonb_recv jsonb_send - x 0
#define oid_3803 3803 // jsonb_send 12 0 f f 17 3802     jsonb_send
#define oid_3804 3804 // jsonb_out 12 0 f f 2275 3802     jsonb_out
#define oid_3805 3805 // jsonb_recv 12 0 f f 3802 2281     jsonb_recv
#define oid_3806 3806 // jsonb_in  12 0 f f 3802 2275     jsonb_in
#define oid_3807 3807 // _jsonb  A \054 3802 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3808 3808 // pg_get_function_arg_default 12 0 f f s 2 25 26 23     pg_get_function_arg_default
#define oid_3809 3809 // pg_export_snapshot 12 0 f f v 0 25      pg_export_snapshot
#define oid_3810 3810 // pg_is_in_recovery 12 0 f f v 0 16      pg_is_in_recovery
#define oid_3811 3811 // money   12 0 f f s 790 23     int4_cash
#define oid_3812 3812 // money   12 0 f f s 790 20     int8_cash
#define oid_3813 3813 // pg_is_in_backup 12 0 f f v 0 16      pg_is_in_backup
#define oid_3814 3814 // pg_backup_start_time 12 0 f f s 0 1184      pg_backup_start_time
#define oid_3815 3815 // pg_collation_is_visible 12 10 0 f f s 16 26     pg_collation_is_visible
#define oid_3816 3816 // array_typanalyze 12 0 f f s 16 2281     array_typanalyze
#define oid_3817 3817 // arraycontsel  12 0 f f s 4 701 2281 26 2281 23     arraycontsel
#define oid_3818 3818 // arraycontjoinsel 12 0 f f s 5 701 2281 26 2281 21 2281     arraycontjoinsel
#define oid_3819 3819 // pg_get_multixact_members 12 1000 0 f f t v 2249 28  {28,28,25}  {i,o,o}  {multixid,xid,mode}  pg_get_multixact_members
#define oid_3820 3820 // pg_last_xlog_receive_location 12 0 f f v 0 3220      pg_last_xlog_receive_location
#define oid_3821 3821 // pg_last_xlog_replay_location 12 0 f f v 0 3220      pg_last_xlog_replay_location
#define oid_3822 3822 // cash_div_cash  12 0 f f 2 701 790 790     cash_div_cash
#define oid_3823 3823 // numeric   12 0 f f s 1700 790     cash_numeric
#define oid_3824 3824 // money   12 0 f f s 790 1700     numeric_cash
#define oid_3825 3825 // /   f 790 790 701   cash_div_cash -
#define oid_3826 3826 // pg_read_file 12 0 f f v 25 25     pg_read_file_all
#define oid_3827 3827 // pg_read_binary_file 12 0 f f v 3 17 25 20 20     pg_read_binary_file
#define oid_3828 3828 // pg_read_binary_file 12 0 f f v 17 25     pg_read_binary_file_all
#define oid_3829 3829 // pg_opfamily_is_visible 12 10 0 f f s 16 26     pg_opfamily_is_visible
#define oid_3830 3830 // pg_last_xact_replay_timestamp 12 0 f f v 0 1184      pg_last_xact_replay_timestamp
#define oid_3831 3831 // anyrange  p P \054 0 anyrange_in anyrange_out - - d x 0
#define oid_3832 3832 // anyrange_in 12 0 f f s 3 3831 2275 26 23     anyrange_in
#define oid_3833 3833 // anyrange_out 12 0 f f s 2275 3831     anyrange_out
#define oid_3834 3834 // range_in 12 0 f f s 3 3831 2275 26 23     range_in
#define oid_3835 3835 // range_out 12 0 f f s 2275 3831     range_out
#define oid_3836 3836 // range_recv 12 0 f f s 3 3831 2281 26 23     range_recv
#define oid_3837 3837 // range_send 12 0 f f s 17 3831     range_send
#define oid_3838 3838 // event_trigger  4 p P \054 0 event_trigger_in event_trigger_out -
#define oid_3839 3839 // pg_identify_object 12 0 f f s 3 2249 26 26 23  {26,26,23,25,25,25,25}  {i,i,i,o,o,o,o}  {classid,objid,subobjid,type,schema,name,identity}  pg_identify_object
#define oid_3840 3840 // int4range 12 0 f f f 2 3904 23 23     range_constructor2
#define oid_3841 3841 // int4range 12 0 f f f 3 3904 23 23 25     range_constructor3
#define oid_3842 3842 // pg_relation_is_updatable 12 10 0 f f s 2 23 2205 16     pg_relation_is_updatable
#define oid_3843 3843 // pg_column_is_updatable 12 10 0 f f s 3 16 2205 21 16     pg_column_is_updatable
#define oid_3844 3844 // numrange 12 0 f f f 2 3906 1700 1700     range_constructor2
#define oid_3845 3845 // numrange 12 0 f f f 3 3906 1700 1700 25     range_constructor3
#define oid_3846 3846 // make_date 12 0 f f 3 1082 23 23 23    {year,month,day}  make_date
#define oid_3847 3847 // make_time 12 0 f f 3 1083 23 23 701    {hour,min,sec}  make_time
#define oid_3848 3848 // lower 12 0 f f 2283 3831     range_lower
#define oid_3849 3849 // upper 12 0 f f 2283 3831     range_upper
#define oid_3850 3850 // isempty 12 0 f f 16 3831     range_empty
#define oid_3851 3851 // lower_inc 12 0 f f 16 3831     range_lower_inc
#define oid_3852 3852 // upper_inc 12 0 f f 16 3831     range_upper_inc
#define oid_3853 3853 // lower_inf 12 0 f f 16 3831     range_lower_inf
#define oid_3854 3854 // upper_inf 12 0 f f 16 3831     range_upper_inf
#define oid_3855 3855 // range_eq 12 0 f f 2 16 3831 3831     range_eq
#define oid_3856 3856 // range_ne 12 0 f f 2 16 3831 3831     range_ne
#define oid_3857 3857 // range_overlaps 12 0 f f 2 16 3831 3831     range_overlaps
#define oid_3858 3858 // range_contains_elem 12 0 f f 2 16 3831 2283     range_contains_elem
#define oid_3859 3859 // range_contains 12 0 f f 2 16 3831 3831     range_contains
#define oid_3860 3860 // elem_contained_by_range 12 0 f f 2 16 2283 3831     elem_contained_by_range
#define oid_3861 3861 // range_contained_by 12 0 f f 2 16 3831 3831     range_contained_by
#define oid_3862 3862 // range_adjacent 12 0 f f 2 16 3831 3831     range_adjacent
#define oid_3863 3863 // range_before 12 0 f f 2 16 3831 3831     range_before
#define oid_3864 3864 // range_after 12 0 f f 2 16 3831 3831     range_after
#define oid_3865 3865 // range_overleft 12 0 f f 2 16 3831 3831     range_overleft
#define oid_3866 3866 // range_overright 12 0 f f 2 16 3831 3831     range_overright
#define oid_3867 3867 // range_union 12 0 f f 2 3831 3831 3831     range_union
#define oid_3868 3868 // range_intersect 12 0 f f 2 3831 3831 3831     range_intersect
#define oid_3869 3869 // range_minus 12 0 f f 2 3831 3831 3831     range_minus
#define oid_3870 3870 // range_cmp 12 0 f f 2 23 3831 3831     range_cmp
#define oid_3871 3871 // range_lt 12 0 f f 2 16 3831 3831     range_lt
#define oid_3872 3872 // range_le 12 0 f f 2 16 3831 3831     range_le
#define oid_3873 3873 // range_ge 12 0 f f 2 16 3831 3831     range_ge
#define oid_3874 3874 // range_gt 12 0 f f 2 16 3831 3831     range_gt
#define oid_3875 3875 // range_gist_consistent 12 0 f f 5 16 2281 3831 23 26 2281     range_gist_consistent
#define oid_3876 3876 // range_gist_union 12 0 f f 2 2281 2281 2281     range_gist_union
#define oid_3877 3877 // range_gist_compress 12 0 f f 2281 2281     range_gist_compress
#define oid_3878 3878 // range_gist_decompress 12 0 f f 2281 2281     range_gist_decompress
#define oid_3879 3879 // range_gist_penalty 12 0 f f 3 2281 2281 2281 2281     range_gist_penalty
#define oid_3880 3880 // range_gist_picksplit 12 0 f f 2 2281 2281 2281     range_gist_picksplit
#define oid_3881 3881 // range_gist_same 12 0 f f 3 2281 3831 3831 2281     range_gist_same
#define oid_3882 3882 // =   t 3831 3831 16 3882 3883 range_eq eqsel eqjoinsel
#define oid_3883 3883 // <>   f 3831 3831 16 3883 3882 range_ne neqsel neqjoinsel
#define oid_3884 3884 // <   f 3831 3831 16 3887 3886 range_lt rangesel scalarltjoinsel
#define oid_3885 3885 // <=   f 3831 3831 16 3886 3887 range_le rangesel scalarltjoinsel
#define oid_3886 3886 // >=   f 3831 3831 16 3885 3884 range_ge rangesel scalargtjoinsel
#define oid_3887 3887 // >   f 3831 3831 16 3884 3885 range_gt rangesel scalargtjoinsel
#define oid_3888 3888 // &&   f 3831 3831 16 3888 range_overlaps rangesel areajoinsel
#define oid_3889 3889 // @>   f 3831 2283 16 3891 range_contains_elem rangesel contjoinsel
#define oid_3890 3890 // @>   f 3831 3831 16 3892 range_contains rangesel contjoinsel
#define oid_3891 3891 // <@   f 2283 3831 16 3889 elem_contained_by_range rangesel contjoinsel
#define oid_3892 3892 // <@   f 3831 3831 16 3890 range_contained_by rangesel contjoinsel
#define oid_3893 3893 // <<   f 3831 3831 16 3894 range_before rangesel scalarltjoinsel
#define oid_3894 3894 // >>   f 3831 3831 16 3893 range_after rangesel scalargtjoinsel
#define oid_3895 3895 // &<   f 3831 3831 16 0 range_overleft rangesel scalarltjoinsel
#define oid_3896 3896 // &>   f 3831 3831 16 0 range_overright rangesel scalargtjoinsel
#define oid_3897 3897 // -|-   f 3831 3831 16 3897 range_adjacent contsel contjoinsel
#define oid_3898 3898 // +   f 3831 3831 3831 3898 range_union -
#define oid_3899 3899 // -   f 3831 3831 3831 0 range_minus -
#define oid_3900 3900 // *   f 3831 3831 3831 3900 range_intersect -
#define oid_3901 3901 // 403 range_ops
#define oid_3902 3902 // hash_range  12 0 f f 23 3831     hash_range
#define oid_3903 3903 // 405 range_ops
#define oid_3904 3904 // int4range  r R \054 0 3905 range_in range_out range_recv range_send - range_typanalyze x 0
#define oid_3905 3905 // _int4range  A \054 3904 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3906 3906 // numrange  r R \054 0 3907 range_in range_out range_recv range_send - range_typanalyze x 0
#define oid_3907 3907 // _numrange  A \054 3906 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3908 3908 // tsrange  r R \054 0 3909 range_in range_out range_recv range_send - range_typanalyze d x 0
#define oid_3909 3909 // _tsrange  A \054 3908 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_3910 3910 // tstzrange  r R \054 0 3911 range_in range_out range_recv range_send - range_typanalyze d x 0
#define oid_3911 3911 // _tstzrange  A \054 3910 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_3912 3912 // daterange  r R \054 0 3913 range_in range_out range_recv range_send - range_typanalyze x 0
#define oid_3913 3913 // _daterange  A \054 3912 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_3914 3914 // int4range_canonical   12 0 f f 3904 3904     int4range_canonical
#define oid_3915 3915 // daterange_canonical   12 0 f f 3912 3912     daterange_canonical
#define oid_3916 3916 // range_typanalyze 12 0 f f s 16 2281     range_typanalyze
#define oid_3917 3917 // timestamp_transform 12 0 f f 2281 2281     timestamp_transform
#define oid_3918 3918 // interval_transform 12 0 f f 2281 2281     interval_transform
#define oid_3919 3919 // 783 range_ops
#define oid_3920 3920 // ginarraytriconsistent 12 0 f f 7 18 2281 21 2277 23 2281 2281 2281     ginarraytriconsistent
#define oid_3921 3921 // gin_tsquery_triconsistent 12 0 f f 7 18 2281 21 3615 23 2281 2281 2281     gin_tsquery_triconsistent
#define oid_3922 3922 // int4range_subdiff   12 0 f f 2 701 23 23     int4range_subdiff
#define oid_3923 3923 // int8range_subdiff   12 0 f f 2 701 20 20     int8range_subdiff
#define oid_3924 3924 // numrange_subdiff   12 0 f f 2 701 1700 1700     numrange_subdiff
#define oid_3925 3925 // daterange_subdiff   12 0 f f 2 701 1082 1082     daterange_subdiff
#define oid_3926 3926 // int8range  r R \054 0 3927 range_in range_out range_recv range_send - range_typanalyze d x 0
#define oid_3927 3927 // _int8range  A \054 3926 array_in array_out array_recv array_send - array_typanalyze d x 0
#define oid_3928 3928 // int8range_canonical   12 0 f f 3926 3926     int8range_canonical
#define oid_3929 3929 // tsrange_subdiff   12 0 f f 2 701 1114 1114     tsrange_subdiff
#define oid_3930 3930 // tstzrange_subdiff   12 0 f f 2 701 1184 1184     tstzrange_subdiff
#define oid_3931 3931 // jsonb_object_keys  12 100 0 f f t 25 3802     jsonb_object_keys
#define oid_3932 3932 // jsonb_each_text   12 100 0 f f t 2249 3802  {3802,25,25}  {i,o,o}  {from_json,key,value}  jsonb_each_text
#define oid_3933 3933 // tsrange 12 0 f f f 2 3908 1114 1114     range_constructor2
#define oid_3934 3934 // tsrange 12 0 f f f 3 3908 1114 1114 25     range_constructor3
#define oid_3935 3935 // pg_sleep_for  14 0 f f v 2278 1186      select pg_catalog.pg_sleep(extract(epoch from pg_catalog.clock_timestamp() operator(pg_catalog.+) $1) operator(pg_catalog.-) extract(epoch from pg_catalog.clock_timestamp()))
#define oid_3936 3936 // pg_sleep_until  14 0 f f v 2278 1184      select pg_catalog.pg_sleep(extract(epoch from $1) operator(pg_catalog.-) extract(epoch from pg_catalog.clock_timestamp()))
#define oid_3937 3937 // tstzrange 12 0 f f f 2 3910 1184 1184     range_constructor2
#define oid_3938 3938 // tstzrange 12 0 f f f 3 3910 1184 1184 25     range_constructor3
#define oid_3939 3939 // mxid_age   12 0 f f s 23 28     mxid_age
#define oid_3940 3940 // jsonb_extract_path_text 12 25 f f 2 25 3802 1009  {3802,1009}  {i,v}  {from_json,path_elems}  jsonb_extract_path_text
#define oid_3941 3941 // daterange 12 0 f f f 2 3912 1082 1082     range_constructor2
#define oid_3942 3942 // daterange 12 0 f f f 3 3912 1082 1082 25     range_constructor3
#define oid_3943 3943 // acldefault 12 0 f f 2 1034 18 26      acldefault_sql
#define oid_3944 3944 // time_transform  12 0 f f 2281 2281     time_transform
#define oid_3945 3945 // int8range 12 0 f f f 2 3926 20 20     range_constructor2
#define oid_3946 3946 // int8range 12 0 f f f 3 3926 20 20 25     range_constructor3
#define oid_3947 3947 // json_object_field  12 0 f f 2 114 114 25    {from_json, field_name}  json_object_field
#define oid_3948 3948 // json_object_field_text 12 0 f f 2 25  114 25    {from_json, field_name}  json_object_field_text
#define oid_3949 3949 // json_array_element 12 0 f f 2 114 114 23    {from_json, element_index}  json_array_element
#define oid_3950 3950 // json_array_element_text 12 0 f f 2 25  114 23    {from_json, element_index}  json_array_element_text
#define oid_3951 3951 // json_extract_path  12 25 f f 2 114 114 1009  {114,1009}  {i,v}  {from_json,path_elems}  json_extract_path
#define oid_3952 3952 // brin_summarize_new_values 12 0 f f f v 23 2205     brin_summarize_new_values
#define oid_3953 3953 // json_extract_path_text 12 25 f f 2 25 114 1009  {114,1009}  {i,v}  {from_json,path_elems}  json_extract_path_text
#define oid_3954 3954 // pg_get_object_address  12 0 f f s 3 2249 25 1009 1009  {25,1009,1009,26,26,23}  {i,i,i,o,o,o}  {type,name,args,classid,objid,subobjid}  pg_get_object_address
#define oid_3955 3955 // json_array_elements 12 100 0 f f t 114 114  {114,114}  {i,o}  {from_json,value}  json_array_elements
#define oid_3956 3956 // json_array_length  12 0 f f 23 114     json_array_length
#define oid_3957 3957 // json_object_keys  12 100 0 f f t 25 114     json_object_keys
#define oid_3958 3958 // json_each    12 100 0 f f t 2249 114  {114,25,114}  {i,o,o}  {from_json,key,value}  json_each
#define oid_3959 3959 // json_each_text   12 100 0 f f t 2249 114  {114,25,25}  {i,o,o}  {from_json,key,value}  json_each_text
#define oid_3960 3960 // json_populate_record  12 0 f f f s 3 2283 2283 114 16     json_populate_record
#define oid_3961 3961 // json_populate_recordset 12 100 0 f f s 3 2283 2283 114 16     json_populate_recordset
#define oid_3962 3962 // ->   f 114 25 114 0 json_object_field -
#define oid_3963 3963 // ->>   f 114 25 25 0 json_object_field_text -
#define oid_3964 3964 // ->   f 114 23 114 0 json_array_element -
#define oid_3965 3965 // ->>   f 114 23 25 0 json_array_element_text -
#define oid_3966 3966 // #>   f 114 1009 114 0 json_extract_path -
#define oid_3967 3967 // #>>   f 114 1009 25 0 json_extract_path_text -
#define oid_3968 3968 // json_typeof   12 0 f f 25 114     json_typeof
#define oid_3969 3969 // json_array_elements_text 12 100 0 f f t 25 114  {114,25}  {i,o}  {from_json,value}  json_array_elements_text
#define oid_3970 3970 // ordered_set_transition  12 0 f f f 2 2281 2281 2276     ordered_set_transition
#define oid_3971 3971 // ordered_set_transition_multi 12 2276 f f f 2 2281 2281 2276  {2281,2276}  {i,v}   ordered_set_transition_multi
#define oid_3972 3972 // percentile_disc 12 0 f f 2 2283 701 2283     aggregate_dummy
#define oid_3973 3973 // percentile_disc_final 12 0 f f f 3 2283 2281 701 2283     percentile_disc_final
#define oid_3974 3974 // percentile_cont 12 0 f f 2 701 701 701     aggregate_dummy
#define oid_3975 3975 // percentile_cont_float8_final 12 0 f f f 2 701 2281 701     percentile_cont_float8_final
#define oid_3976 3976 // percentile_cont 12 0 f f 2 1186 701 1186     aggregate_dummy
#define oid_3977 3977 // percentile_cont_interval_final 12 0 f f f 2 1186 2281 701     percentile_cont_interval_final
#define oid_3978 3978 // percentile_disc 12 0 f f 2 2277 1022 2283     aggregate_dummy
#define oid_3979 3979 // percentile_disc_multi_final 12 0 f f f 3 2277 2281 1022 2283     percentile_disc_multi_final
#define oid_3980 3980 // percentile_cont 12 0 f f 2 1022 1022 701     aggregate_dummy
#define oid_3981 3981 // percentile_cont_float8_multi_final 12 0 f f f 2 1022 2281 1022     percentile_cont_float8_multi_final
#define oid_3982 3982 // percentile_cont 12 0 f f 2 1187 1022 1186     aggregate_dummy
#define oid_3983 3983 // percentile_cont_interval_multi_final 12 0 f f f 2 1187 2281 1022     percentile_cont_interval_multi_final
#define oid_3984 3984 // mode   12 0 f f 2283 2283     aggregate_dummy
#define oid_3985 3985 // mode_final  12 0 f f f 2 2283 2281 2283     mode_final
#define oid_3986 3986 // rank  12 2276 f f 20 2276  {2276}  {v}   aggregate_dummy
#define oid_3987 3987 // rank_final  12 2276 f f f 2 20 2281 2276  {2281,2276}  {i,v}   hypothetical_rank_final
#define oid_3988 3988 // percent_rank 12 2276 f f 701 2276  {2276}  {v}   aggregate_dummy
#define oid_3989 3989 // percent_rank_final 12 2276 f f f 2 701 2281 2276  {2281,2276}  {i,v}   hypothetical_percent_rank_final
#define oid_3990 3990 // cume_dist  12 2276 f f 701 2276  {2276}  {v}   aggregate_dummy
#define oid_3991 3991 // cume_dist_final 12 2276 f f f 2 701 2281 2276  {2281,2276}  {i,v}   hypothetical_cume_dist_final
#define oid_3992 3992 // dense_rank  12 2276 f f 20 2276  {2276}  {v}   aggregate_dummy
#define oid_3993 3993 // dense_rank_final 12 2276 f f f 2 20 2281 2276  {2281,2276}  {i,v}   hypothetical_dense_rank_final
#define oid_3994 3994 // timestamp_izone_transform 12 0 f f 2281 2281     timestamp_izone_transform
#define oid_3995 3995 // timestamp_zone_transform 12 0 f f 2281 2281     timestamp_zone_transform
#define oid_4000 4000 // spgist 5 f f t f spginsert spgbeginscan spggettuple spggetbitmap spgrescan spgendscan spgmarkpos spgrestrpos spgbuild spgbuildempty spgbulkdelete spgvacuumcleanup spgcanreturn spgcostestimate spgoptions
#define oid_4001 4001 // spggettuple  12 0 f f v 2 16 2281 2281     spggettuple
#define oid_4002 4002 // spggetbitmap  12 0 f f v 2 20 2281 2281     spggetbitmap
#define oid_4003 4003 // spginsert   12 0 f f v 6 16 2281 2281 2281 2281 2281 2281     spginsert
#define oid_4004 4004 // spgbeginscan  12 0 f f v 3 2281 2281 2281 2281     spgbeginscan
#define oid_4005 4005 // spgrescan   12 0 f f v 5 2278 2281 2281 2281 2281 2281     spgrescan
#define oid_4006 4006 // spgendscan  12 0 f f v 2278 2281     spgendscan
#define oid_4007 4007 // spgmarkpos  12 0 f f v 2278 2281     spgmarkpos
#define oid_4008 4008 // spgrestrpos  12 0 f f v 2278 2281     spgrestrpos
#define oid_4009 4009 // spgbuild   12 0 f f v 3 2281 2281 2281 2281     spgbuild
#define oid_4010 4010 // spgbuildempty  12 0 f f v 2278 2281     spgbuildempty
#define oid_4011 4011 // spgbulkdelete  12 0 f f v 4 2281 2281 2281 2281 2281     spgbulkdelete
#define oid_4012 4012 // spgvacuumcleanup 12 0 f f v 2 2281 2281 2281     spgvacuumcleanup
#define oid_4013 4013 // spgcostestimate 12 0 f f v 7 2278 2281 2281 2281 2281 2281 2281 2281     spgcostestimate
#define oid_4014 4014 // spgoptions  12 0 f f s 2 17 1009 16      spgoptions
#define oid_4015 4015 // 4000 quad_point_ops
#define oid_4016 4016 // 4000 kd_point_ops
#define oid_4017 4017 // 4000 text_ops
#define oid_4018 4018 // spg_quad_config 12 0 f f 2 2278 2281 2281      spg_quad_config
#define oid_4019 4019 // spg_quad_choose 12 0 f f 2 2278 2281 2281      spg_quad_choose
#define oid_4020 4020 // spg_quad_picksplit 12 0 f f 2 2278 2281 2281      spg_quad_picksplit
#define oid_4021 4021 // spg_quad_inner_consistent 12 0 f f 2 2278 2281 2281      spg_quad_inner_consistent
#define oid_4022 4022 // spg_quad_leaf_consistent 12 0 f f 2 16 2281 2281      spg_quad_leaf_consistent
#define oid_4023 4023 // spg_kd_config 12 0 f f 2 2278 2281 2281      spg_kd_config
#define oid_4024 4024 // spg_kd_choose 12 0 f f 2 2278 2281 2281      spg_kd_choose
#define oid_4025 4025 // spg_kd_picksplit 12 0 f f 2 2278 2281 2281      spg_kd_picksplit
#define oid_4026 4026 // spg_kd_inner_consistent 12 0 f f 2 2278 2281 2281      spg_kd_inner_consistent
#define oid_4027 4027 // spg_text_config 12 0 f f 2 2278 2281 2281      spg_text_config
#define oid_4028 4028 // spg_text_choose 12 0 f f 2 2278 2281 2281      spg_text_choose
#define oid_4029 4029 // spg_text_picksplit 12 0 f f 2 2278 2281 2281      spg_text_picksplit
#define oid_4030 4030 // spg_text_inner_consistent 12 0 f f 2 2278 2281 2281      spg_text_inner_consistent
#define oid_4031 4031 // spg_text_leaf_consistent 12 0 f f 2 16 2281 2281      spg_text_leaf_consistent
#define oid_4032 4032 // spgcanreturn  12 0 f f s 16 2281     spgcanreturn
#define oid_4033 4033 // 403 jsonb_ops
#define oid_4034 4034 // 405 jsonb_ops
#define oid_4035 4035 // 783 jsonb_ops
#define oid_4036 4036 // 2742 jsonb_ops
#define oid_4037 4037 // 2742 jsonb_path_ops
#define oid_4038 4038 // jsonb_ne   12 0 f f 2 16 3802 3802     jsonb_ne
#define oid_4039 4039 // jsonb_lt   12 0 f f 2 16 3802 3802     jsonb_lt
#define oid_4040 4040 // jsonb_gt   12 0 f f 2 16 3802 3802     jsonb_gt
#define oid_4041 4041 // jsonb_le   12 0 f f 2 16 3802 3802     jsonb_le
#define oid_4042 4042 // jsonb_ge   12 0 f f 2 16 3802 3802     jsonb_ge
#define oid_4043 4043 // jsonb_eq   12 0 f f 2 16 3802 3802     jsonb_eq
#define oid_4044 4044 // jsonb_cmp   12 0 f f 2 23 3802 3802     jsonb_cmp
#define oid_4045 4045 // jsonb_hash  12 0 f f 23 3802     jsonb_hash
#define oid_4046 4046 // jsonb_contains  12 0 f f 2 16 3802 3802     jsonb_contains
#define oid_4047 4047 // jsonb_exists 12 0 f f 2 16 3802 25     jsonb_exists
#define oid_4048 4048 // jsonb_exists_any 12 0 f f 2 16 3802 1009     jsonb_exists_any
#define oid_4049 4049 // jsonb_exists_all 12 0 f f 2 16 3802 1009     jsonb_exists_all
#define oid_4050 4050 // jsonb_contained 12 0 f f 2 16 3802 3802     jsonb_contained
#define oid_4051 4051 // array_agg_array_transfn 12 0 f f f 2 2281 2281 2277     array_agg_array_transfn
#define oid_4052 4052 // array_agg_array_finalfn 12 0 f f f 2 2277 2281 2277     array_agg_array_finalfn
#define oid_4053 4053 // array_agg   12 0 f f 2277 2277     aggregate_dummy
#define oid_4054 4054 // 3580 integer_minmax_ops
#define oid_4055 4055 // 3580 numeric_minmax_ops
#define oid_4056 4056 // 3580 text_minmax_ops
#define oid_4058 4058 // 3580 timetz_minmax_ops
#define oid_4059 4059 // 3580 datetime_minmax_ops
#define oid_4062 4062 // 3580 char_minmax_ops
#define oid_4064 4064 // 3580 bytea_minmax_ops
#define oid_4065 4065 // 3580 name_minmax_ops
#define oid_4068 4068 // 3580 oid_minmax_ops
#define oid_4069 4069 // 3580 tid_minmax_ops
#define oid_4070 4070 // 3580 float_minmax_ops
#define oid_4072 4072 // 3580 abstime_minmax_ops
#define oid_4073 4073 // 3580 reltime_minmax_ops
#define oid_4074 4074 // 3580 macaddr_minmax_ops
#define oid_4075 4075 // 3580 network_minmax_ops
#define oid_4076 4076 // 3580 bpchar_minmax_ops
#define oid_4077 4077 // 3580 time_minmax_ops
#define oid_4078 4078 // 3580 interval_minmax_ops
#define oid_4079 4079 // 3580 bit_minmax_ops
#define oid_4080 4080 // 3580 varbit_minmax_ops
#define oid_4081 4081 // 3580 uuid_minmax_ops
#define oid_4082 4082 // 3580 pg_lsn_minmax_ops
#define oid_4566 4566 // pg_event_trigger_table_rewrite_oid 12 0 f f s 0 26   {26}  {o}  {oid}  pg_event_trigger_table_rewrite_oid
#define oid_4567 4567 // pg_event_trigger_table_rewrite_reason 12 0 f f s 0 23      pg_event_trigger_table_rewrite_reason
#define oid_6021 6021 // int1  t \054 1004 int1in int1out int1recv int1send
#define oid_6038 6038 // int1in   12 0 f f 6021 2275     int1in
#define oid_6039 6039 // int1out   12 0 f f 2275 6021     int1out
#define oid_6063 6063 // int1eq   12 0 f t 2 16 6021 6021     int1eq
#define oid_6064 6064 // int1lt   12 0 f t 2 16 6021 6021     int1lt
#define oid_6094 6094 // =   t 6021 6021 16 6094 6519 int1eq eqsel eqjoinsel
#define oid_6095 6095 // <   f 6021 6021 16 6520 6524 int1lt scalarltsel scalarltjoinsel
#define oid_6105 6105 // eqjoinsel   12 0 f f s 5 701 2281 26 2281 6021 2281     eqjoinsel
#define oid_6106 6106 // neqjoinsel   12 0 f f s 5 701 2281 26 2281 6021 2281     neqjoinsel
#define oid_6107 6107 // scalarltjoinsel  12 0 f f s 5 701 2281 26 2281 6021 2281     scalarltjoinsel
#define oid_6108 6108 // scalargtjoinsel  12 0 f f s 5 701 2281 26 2281 6021 2281     scalargtjoinsel
#define oid_6145 6145 // int1ne   12 0 f t 2 16 6021 6021     int1ne
#define oid_6146 6146 // int1gt   12 0 f t 2 16 6021 6021     int1gt
#define oid_6148 6148 // int1le   12 0 f t 2 16 6021 6021     int1le
#define oid_6151 6151 // int1ge   12 0 f t 2 16 6021 6021     int1ge
#define oid_6152 6152 // int1mul   12 0 f f 2 6021 6021 6021     int1mul
#define oid_6153 6153 // int1div   12 0 f f 2 6021 6021 6021     int1div
#define oid_6155 6155 // int1mod   12 0 f f 2 6021 6021 6021     int1mod
#define oid_6158 6158 // int14eq   12 0 f t 2 16 6021 23     int14eq
#define oid_6159 6159 // int41eq   12 0 f t 2 16 23 6021     int41eq
#define oid_6160 6160 // int14lt   12 0 f t 2 16 6021 23     int14lt
#define oid_6161 6161 // int41lt   12 0 f t 2 16 23 6021     int41lt
#define oid_6162 6162 // int14gt   12 0 f t 2 16 6021 23     int14gt
#define oid_6163 6163 // int41gt   12 0 f t 2 16 23 6021     int41gt
#define oid_6164 6164 // int14ne   12 0 f t 2 16 6021 23     int14ne
#define oid_6165 6165 // int41ne   12 0 f t 2 16 23 6021     int41ne
#define oid_6166 6166 // int14le   12 0 f t 2 16 6021 23     int14le
#define oid_6167 6167 // int41le   12 0 f t 2 16 23 6021     int41le
#define oid_6168 6168 // int14ge   12 0 f t 2 16 6021 23     int14ge
#define oid_6169 6169 // int41ge   12 0 f t 2 16 23 6021     int41ge
#define oid_6170 6170 // int14mul   12 0 f f 2 23 6021 23     int14mul
#define oid_6171 6171 // int41mul   12 0 f f 2 23 23 6021     int41mul
#define oid_6172 6172 // int14div   12 0 f f 2 23 6021 23     int14div
#define oid_6173 6173 // int41div   12 0 f f 2 23 23 6021     int41div
#define oid_6176 6176 // int1pl   12 0 f f 2 6021 6021 6021     int1pl
#define oid_6178 6178 // int14pl   12 0 f f 2 23 6021 23     int14pl
#define oid_6179 6179 // int41pl   12 0 f f 2 23 23 6021     int41pl
#define oid_6180 6180 // int1mi   12 0 f f 2 6021 6021 6021     int1mi
#define oid_6182 6182 // int14mi   12 0 f f 2 23 6021 23     int14mi
#define oid_6183 6183 // int41mi   12 0 f f 2 23 23 6021     int41mi
#define oid_6213 6213 // int1um   12 0 f f 6021 6021     int1um
#define oid_6235 6235 // float8   12 0 f f 701 6021     i1tod
#define oid_6236 6236 // float4   12 0 f f 700 6021     i1tof
#define oid_6237 6237 // int1   12 0 f f 6021 701     dtoi1
#define oid_6238 6238 // int1   12 0 f f 6021 700     ftoi1
#define oid_6313 6313 // int4   12 0 f f 23 6021     i1toi4
#define oid_6314 6314 // int1   12 0 f f 6021 23     i4toi1
#define oid_6449 6449 // hashint1   12 0 f f 23 6021     hashint1
#define oid_6519 6519 // <>   f 6021 6021 16 6519 6094 int1ne neqsel neqjoinsel
#define oid_6520 6520 // >   f 6021 6021 16 6095 6522 int1gt scalargtsel scalargtjoinsel
#define oid_6522 6522 // <=   f 6021 6021 16 6524 6520 int1le scalarltsel scalarltjoinsel
#define oid_6524 6524 // >=   f 6021 6021 16 6522 6095 int1ge scalargtsel scalargtjoinsel
#define oid_6526 6526 // *   f 6021 6021 6021 6526 int1mul -
#define oid_6527 6527 // /   f 6021 6021 6021  int1div -
#define oid_6529 6529 // %   f 6021 6021 6021  int2mod -
#define oid_6532 6532 // =   t 6021 23 16 6533 6538 int14eq eqsel eqjoinsel
#define oid_6533 6533 // =   t 23 6021 16 6532 6539 int41eq eqsel eqjoinsel
#define oid_6534 6534 // <   f 6021 23 16 6537 6542 int14lt scalarltsel scalarltjoinsel
#define oid_6535 6535 // <   f 23 6021 16 6536 6543 int41lt scalarltsel scalarltjoinsel
#define oid_6536 6536 // >   f 6021 23 16 6535 6540 int14gt scalargtsel scalargtjoinsel
#define oid_6537 6537 // >   f 23 6021 16 6534 6541 int41gt scalargtsel scalargtjoinsel
#define oid_6538 6538 // <>   f 6021 23 16 6539 6532 int14ne neqsel neqjoinsel
#define oid_6539 6539 // <>   f 23 6021 16 6538 6533 int41ne neqsel neqjoinsel
#define oid_6540 6540 // <=   f 6021 23 16 6543 6536 int14le scalarltsel scalarltjoinsel
#define oid_6541 6541 // <=   f 23 6021 16 6542 6537 int41le scalarltsel scalarltjoinsel
#define oid_6542 6542 // >=   f 6021 23 16 6541 6534 int14ge scalargtsel scalargtjoinsel
#define oid_6543 6543 // >=   f 23 6021 16 6540 6535 int41ge scalargtsel scalargtjoinsel
#define oid_6544 6544 // *   f 6021 23 23 6545 int14mul -
#define oid_6545 6545 // *   f 23 6021 23 6544 int41mul -
#define oid_6546 6546 // /   f 6021 23 23  int14div -
#define oid_6547 6547 // /   f 23 6021 23  int41div -
#define oid_6550 6550 // +   f 6021 6021 6021 6550 int1pl -
#define oid_6552 6552 // +   f 6021 23 23 553 int14pl -
#define oid_6553 6553 // +   f 23 6021 23 6552 int41pl -
#define oid_6554 6554 // -   f 6021 6021 6021  int1mi -
#define oid_6556 6556 // -   f 6021 23 23  int14mi -
#define oid_6557 6557 // -   f 23 6021 23  int41mi -
#define oid_6559 6559 // -   l f 6021 6021  int1um -
#define oid_6682 6682 // @   l f 6021 6021  int1abs -
#define oid_6714 6714 // int1   12 0 f f 6021 20     int81
#define oid_6754 6754 // int8   12 0 f f 20 6021     int18
#define oid_6770 6770 // int1larger   12 0 f f 2 6021 6021 6021     int1larger
#define oid_6771 6771 // int1smaller  12 0 f f 2 6021 6021 6021     int1smaller
#define oid_6818 6818 // +   f 20 6021 20 822 int81pl -
#define oid_6819 6819 // -   f 20 6021 20  int81mi -
#define oid_6820 6820 // *   f 20 6021 20 824 int81mul -
#define oid_6821 6821 // /   f 20 6021 20  int81div -
#define oid_6822 6822 // +   f 6021 20 20 818 int18pl -
#define oid_6823 6823 // -   f 6021 20 20  int18mi -
#define oid_6824 6824 // *   f 6021 20 20 820 int18mul -
#define oid_6825 6825 // /   f 6021 20 20  int18div -
#define oid_6837 6837 // int81pl   12 0 f f 2 20 20 6021     int81pl
#define oid_6838 6838 // int81mi   12 0 f f 2 20 20 6021     int81mi
#define oid_6839 6839 // int81mul   12 0 f f 2 20 20 6021     int81mul
#define oid_6840 6840 // int81div   12 0 f f 2 20 20 6021     int81div
#define oid_6841 6841 // int18pl   12 0 f f 2 20 6021 20     int18pl
#define oid_6863 6863 // int1_mul_cash   12 0 f f 2 790 6021 790     int1_mul_cash
#define oid_6866 6866 // cash_mul_int1   12 0 f f 2 790 790 6021     cash_mul_int1
#define oid_6867 6867 // cash_div_int1   12 0 f f 2 790 790 6021     cash_div_int1
#define oid_6914 6914 // *   f 790 6021 790 918  cash_mul_int1 -
#define oid_6915 6915 // /   f 790 6021 790   cash_div_int1 -
#define oid_6918 6918 // *   f 6021 790 790 6914  int1_mul_cash -
#define oid_6940 6940 // mod   12 0 f f 2 6021 6021 6021     int1mod
#define oid_6942 6942 // int18mi   12 0 f f 2 20 6021 20     int18mi
#define oid_6943 6943 // int18mul   12 0 f f 2 20 6021 20     int18mul
#define oid_6948 6948 // int18div   12 0 f f 2 20 6021 20     int18div
#define oid_7005 7005 // _int1  A \054 6021 array_in array_out array_recv array_send - array_typanalyze x 0
#define oid_7253 7253 // int1abs   12 0 f f 6021 6021     int2abs
#define oid_7301 7301 // positionjoinsel  12 0 f f s 5 701 2281 26 2281 6021 2281     positionjoinsel
#define oid_7303 7303 // contjoinsel  12 0 f f s 5 701 2281 26 2281 6021 2281     contjoinsel
#define oid_7398 7398 // abs   12 0 f f 6021 6021     int1abs
#define oid_7782 7782 // numeric  12 0 f f 1700 6021     int1_numeric
#define oid_7783 7783 // int1   12 0 f f 6021 1700     numeric_int1
#define oid_7834 7834 // int1_accum  12 0 f f f 2 2281 2281 6021     int1_accum
#define oid_7840 7840 // int1_sum   12 0 f f f 2 20 20 6021     int1_sum
#define oid_7862 7862 // =   t 6021 20 16 7868 7863 int18eq eqsel eqjoinsel
#define oid_7863 7863 // <>   f 6021 20 16 7869 7862 int18ne neqsel neqjoinsel
#define oid_7864 7864 // <   f 6021 20 16 7871 7867 int18lt scalarltsel scalarltjoinsel
#define oid_7865 7865 // >   f 6021 20 16 7870 7866 int18gt scalargtsel scalargtjoinsel
#define oid_7866 7866 // <=   f 6021 20 16 7873 7865 int18le scalarltsel scalarltjoinsel
#define oid_7867 7867 // >=   f 6021 20 16 7872 7864 int18ge scalargtsel scalargtjoinsel
#define oid_7868 7868 // =   t 20 6021 16 7862 7869 int81eq eqsel eqjoinsel
#define oid_7869 7869 // <>   f 20 6021 16 7863 7868 int81ne neqsel neqjoinsel
#define oid_7870 7870 // <   f 20 6021 16 7865 7873 int81lt scalarltsel scalarltjoinsel
#define oid_7871 7871 // >   f 20 6021 16 7864 7872 int81gt scalargtsel scalargtjoinsel
#define oid_7872 7872 // <=   f 20 6021 16 7867 7871 int81le scalarltsel scalarltjoinsel
#define oid_7873 7873 // >=   f 20 6021 16 7866 7870 int81ge scalargtsel scalargtjoinsel
#define oid_7874 7874 // &   f 6021 6021 6021 7874 int1and -
#define oid_7875 7875 // |   f 6021 6021 6021 7875 int1or -
#define oid_7876 7876 // #   f 6021 6021 6021 7876 int1xor -
#define oid_7877 7877 // ~   l f 6021 6021  int1not -
#define oid_7878 7878 // <<   f 6021 23 6021  int1shl -
#define oid_7879 7879 // >>   f 6021 23 6021  int1shr -
#define oid_7892 7892 // int1and   12 0 f f 2 6021 6021 6021     int1and
#define oid_7893 7893 // int1or   12 0 f f 2 6021 6021 6021     int1or
#define oid_7894 7894 // int1xor   12 0 f f 2 6021 6021 6021     int1xor
#define oid_7895 7895 // int1not   12 0 f f 6021 6021     int1not
#define oid_7896 7896 // int1shl   12 0 f f 2 6021 6021 23     int1shl
#define oid_7897 7897 // int1shr   12 0 f f 2 6021 6021 23     int1shr
#define oid_7911 7911 // int1up   12 0 f f 6021 6021     int1up
#define oid_7917 7917 // +   l f 6021 6021 0 int1up -
#define oid_7962 7962 // int1_avg_accum  12 0 f f 2 1016 1016 6021     int1_avg_accum
#define oid_7979 7979 // 403 int1_ops 1976  6021
#define oid_8102 8102 // avg  12 0 f f 1700 6021     aggregate_dummy
#define oid_8117 8117 // max  12 0 f f 6021 6021     aggregate_dummy
#define oid_8133 8133 // min  12 0 f f 6021 6021     aggregate_dummy
#define oid_8236 8236 // bit_and    12 0 f f 6021 6021     aggregate_dummy
#define oid_8237 8237 // bit_or     12 0 f f 6021 6021     aggregate_dummy
#define oid_8404 8404 // int1recv   12 0 f f 6021 2281     int1recv
#define oid_8405 8405 // int1send   12 0 f f 17 6021     int1send
#define oid_8567 8567 // int1_accum_inv  12 0 f f f 2 2281 2281 6021     int1_accum_inv
#define oid_8570 8570 // int1_avg_accum_inv  12 0 f f 2 1016 1016 6021     int1_avg_accum_inv
