/*
 * Automatically Generated from Mathematica.
 * Sat 9 Mar 2019 14:38:00 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t192;
  double t242;
  double t423;
  double t456;
  double t235;
  double t561;
  double t568;
  double t569;
  double t649;
  double t651;
  double t654;
  double t659;
  double t707;
  double t732;
  double t748;
  double t577;
  double t587;
  double t592;
  double t613;
  double t663;
  double t766;
  double t767;
  double t769;
  double t770;
  double t772;
  double t773;
  double t905;
  double t782;
  double t861;
  double t877;
  double t880;
  double t883;
  double t890;
  double t895;
  double t906;
  double t648;
  double t787;
  double t656;
  double t800;
  double t801;
  double t915;
  double t900;
  double t1002;
  double t1003;
  double t1004;
  double t1022;
  double t1027;
  double t1028;
  double t1034;
  double t1035;
  double t1006;
  double t1039;
  double t1040;
  double t1050;
  double t1036;
  double t1037;
  double t1056;
  double t1043;
  double t1044;
  double t1045;
  double t1046;
  double t1047;
  double t1048;
  double t1070;
  double t1071;
  double t1072;
  double t1073;
  double t1080;
  double t1081;
  double t1082;
  double t1083;
  double t1084;
  double t1085;
  double t1095;
  double t1105;
  double t1106;
  double t1102;
  double t1061;
  double t1100;
  double t1110;
  double t1137;
  double t1138;
  double t1139;
  double t1145;
  double t1146;
  double t1147;
  double t1149;
  double t1150;
  double t1141;
  double t1164;
  double t1169;
  double t1183;
  double t1154;
  double t1158;
  double t1185;
  double t1176;
  double t1177;
  double t1178;
  double t1179;
  double t1180;
  double t1181;
  double t1191;
  double t1192;
  double t1193;
  double t1198;
  double t1213;
  double t1214;
  double t1215;
  double t1216;
  double t1217;
  double t1218;
  double t1220;
  double t1226;
  double t1227;
  double t1223;
  double t1186;
  double t1221;
  double t1243;
  double t1258;
  double t1259;
  double t1260;
  double t1278;
  double t1279;
  double t1280;
  double t1282;
  double t1283;
  double t1266;
  double t1287;
  double t1288;
  double t1298;
  double t1284;
  double t1285;
  double t1300;
  double t1291;
  double t1292;
  double t1293;
  double t1294;
  double t1295;
  double t1296;
  double t1306;
  double t1307;
  double t1308;
  double t1309;
  double t1316;
  double t1317;
  double t1318;
  double t1319;
  double t1320;
  double t1321;
  double t1323;
  double t1329;
  double t1330;
  double t1326;
  double t1301;
  double t1324;
  double t1334;
  double t1351;
  double t1349;
  double t1350;
  double t1352;
  double t1353;
  double t1355;
  double t1356;
  double t1357;
  double t655;
  double t670;
  double t674;
  double t759;
  double t762;
  double t774;
  double t777;
  double t792;
  double t793;
  double t794;
  double t1360;
  double t1361;
  double t1362;
  double t1363;
  double t902;
  double t1365;
  double t1366;
  double t1367;
  double t1368;
  double t912;
  double t913;
  double t1371;
  double t1372;
  double t1373;
  double t1374;
  double t968;
  double t980;
  double t983;
  double t986;
  double t989;
  double t994;
  double t1017;
  double t1033;
  double t1038;
  double t1041;
  double t1042;
  double t1051;
  double t1066;
  double t1067;
  double t1068;
  double t1069;
  double t1075;
  double t1076;
  double t1077;
  double t1078;
  double t1079;
  double t1394;
  double t1395;
  double t1396;
  double t1397;
  double t1103;
  double t1399;
  double t1400;
  double t1401;
  double t1402;
  double t1404;
  double t1405;
  double t1406;
  double t1407;
  double t1113;
  double t1117;
  double t1118;
  double t1144;
  double t1148;
  double t1159;
  double t1170;
  double t1175;
  double t1184;
  double t1187;
  double t1188;
  double t1189;
  double t1190;
  double t1208;
  double t1209;
  double t1210;
  double t1211;
  double t1212;
  double t1428;
  double t1429;
  double t1430;
  double t1431;
  double t1224;
  double t1433;
  double t1434;
  double t1435;
  double t1436;
  double t1438;
  double t1439;
  double t1440;
  double t1441;
  double t1246;
  double t1250;
  double t1251;
  double t1277;
  double t1281;
  double t1286;
  double t1289;
  double t1290;
  double t1299;
  double t1302;
  double t1303;
  double t1304;
  double t1305;
  double t1311;
  double t1312;
  double t1313;
  double t1314;
  double t1315;
  double t1462;
  double t1463;
  double t1464;
  double t1465;
  double t1327;
  double t1467;
  double t1468;
  double t1469;
  double t1470;
  double t1472;
  double t1473;
  double t1474;
  double t1475;
  double t1337;
  double t1341;
  double t1342;
  double t1493;
  double t1494;
  double t1495;
  double t1497;
  double t1498;
  double t1499;
  double t1502;
  double t1503;
  double t1504;
  double t1505;
  double t1507;
  double t1508;
  double t1509;
  double t1510;
  double t1513;
  double t1514;
  double t1515;
  double t1516;
  double t1536;
  double t1537;
  double t1538;
  double t1539;
  double t1541;
  double t1542;
  double t1543;
  double t1544;
  double t1546;
  double t1547;
  double t1548;
  double t1549;
  double t1570;
  double t1571;
  double t1572;
  double t1573;
  double t1575;
  double t1576;
  double t1577;
  double t1578;
  double t1580;
  double t1581;
  double t1582;
  double t1583;
  double t1604;
  double t1605;
  double t1606;
  double t1607;
  double t1609;
  double t1610;
  double t1611;
  double t1612;
  double t1614;
  double t1615;
  double t1616;
  double t1617;
  t192 = Cos(var1[4]);
  t242 = Cos(var1[6]);
  t423 = -1.*t242;
  t456 = 1. + t423;
  t235 = Cos(var1[5]);
  t561 = Sin(var1[5]);
  t568 = Sin(var1[4]);
  t569 = Sin(var1[6]);
  t649 = Cos(var1[8]);
  t651 = -1.*t649;
  t654 = 1. + t651;
  t659 = Sin(var1[8]);
  t707 = -3.e-6*t654;
  t732 = 3.e-6*t659;
  t748 = t707 + t732;
  t577 = t192*t235*t242;
  t587 = -3.e-6*t192*t456*t561;
  t592 = t568*t569;
  t613 = t577 + t587 + t592;
  t663 = -1.*t659;
  t766 = 3.e-6*t192*t235*t456;
  t767 = -9.e-12*t456;
  t769 = 1. + t767;
  t770 = -1.*t192*t769*t561;
  t772 = -3.e-6*t568*t569;
  t773 = t766 + t770 + t772;
  t905 = 3.e-6*t654;
  t782 = -3.e-6*t659;
  t861 = -1.000000000009*t456;
  t877 = 1. + t861;
  t880 = t877*t568;
  t883 = -1.*t192*t235*t569;
  t890 = -3.e-6*t192*t561*t569;
  t895 = t880 + t883 + t890;
  t906 = t905 + t732;
  t648 = 1.125e-12*var1[8];
  t787 = t707 + t782;
  t656 = -9.e-12*t654;
  t800 = -1.000000000009*t654;
  t801 = 1. + t800;
  t915 = t905 + t782;
  t900 = 9.e-12*t654;
  t1002 = Cos(var1[10]);
  t1003 = -1.*t1002;
  t1004 = 1. + t1003;
  t1022 = Cos(var1[12]);
  t1027 = -1.*t1022;
  t1028 = 1. + t1027;
  t1034 = -3.e-6*t1028;
  t1035 = Sin(var1[12]);
  t1006 = Sin(var1[10]);
  t1039 = 3.e-6*t1035;
  t1040 = t1034 + t1039;
  t1050 = 7.5e-14*var1[12];
  t1036 = -3.e-6*t1035;
  t1037 = t1034 + t1036;
  t1056 = -9.e-12*t1028;
  t1043 = 3.e-6*t1004*t192*t235;
  t1044 = -3.e-6*t1006*t568;
  t1045 = -9.e-12*t1004;
  t1046 = 1. + t1045;
  t1047 = -1.*t1046*t192*t561;
  t1048 = t1043 + t1044 + t1047;
  t1070 = t1002*t192*t235;
  t1071 = t1006*t568;
  t1072 = -3.e-6*t1004*t192*t561;
  t1073 = t1070 + t1071 + t1072;
  t1080 = -1.*t192*t235*t1006;
  t1081 = -1.000000000009*t1004;
  t1082 = 1. + t1081;
  t1083 = t1082*t568;
  t1084 = -3.e-6*t192*t1006*t561;
  t1085 = t1080 + t1083 + t1084;
  t1095 = 3.e-6*t1028;
  t1105 = -1.000000000009*t1028;
  t1106 = 1. + t1105;
  t1102 = 9.e-12*t1028;
  t1061 = -1.*t1035;
  t1100 = t1095 + t1036;
  t1110 = t1095 + t1039;
  t1137 = Cos(var1[15]);
  t1138 = -1.*t1137;
  t1139 = 1. + t1138;
  t1145 = Cos(var1[17]);
  t1146 = -1.*t1145;
  t1147 = 1. + t1146;
  t1149 = -3.e-6*t1147;
  t1150 = Sin(var1[17]);
  t1141 = Sin(var1[15]);
  t1164 = 3.e-6*t1150;
  t1169 = t1149 + t1164;
  t1183 = 1.125e-12*var1[17];
  t1154 = -3.e-6*t1150;
  t1158 = t1149 + t1154;
  t1185 = -9.e-12*t1147;
  t1176 = 3.e-6*t1139*t192*t235;
  t1177 = -3.e-6*t1141*t568;
  t1178 = -9.e-12*t1139;
  t1179 = 1. + t1178;
  t1180 = -1.*t1179*t192*t561;
  t1181 = t1176 + t1177 + t1180;
  t1191 = t1137*t192*t235;
  t1192 = t1141*t568;
  t1193 = -3.e-6*t1139*t192*t561;
  t1198 = t1191 + t1192 + t1193;
  t1213 = -1.*t192*t235*t1141;
  t1214 = -1.000000000009*t1139;
  t1215 = 1. + t1214;
  t1216 = t1215*t568;
  t1217 = -3.e-6*t192*t1141*t561;
  t1218 = t1213 + t1216 + t1217;
  t1220 = 3.e-6*t1147;
  t1226 = -1.000000000009*t1147;
  t1227 = 1. + t1226;
  t1223 = 9.e-12*t1147;
  t1186 = -1.*t1150;
  t1221 = t1220 + t1154;
  t1243 = t1220 + t1164;
  t1258 = Cos(var1[19]);
  t1259 = -1.*t1258;
  t1260 = 1. + t1259;
  t1278 = Cos(var1[21]);
  t1279 = -1.*t1278;
  t1280 = 1. + t1279;
  t1282 = -3.e-6*t1280;
  t1283 = Sin(var1[21]);
  t1266 = Sin(var1[19]);
  t1287 = 3.e-6*t1283;
  t1288 = t1282 + t1287;
  t1298 = 7.5e-14*var1[21];
  t1284 = -3.e-6*t1283;
  t1285 = t1282 + t1284;
  t1300 = -9.e-12*t1280;
  t1291 = 3.e-6*t1260*t192*t235;
  t1292 = -3.e-6*t1266*t568;
  t1293 = -9.e-12*t1260;
  t1294 = 1. + t1293;
  t1295 = -1.*t1294*t192*t561;
  t1296 = t1291 + t1292 + t1295;
  t1306 = t1258*t192*t235;
  t1307 = t1266*t568;
  t1308 = -3.e-6*t1260*t192*t561;
  t1309 = t1306 + t1307 + t1308;
  t1316 = -1.*t192*t235*t1266;
  t1317 = -1.000000000009*t1260;
  t1318 = 1. + t1317;
  t1319 = t1318*t568;
  t1320 = -3.e-6*t192*t1266*t561;
  t1321 = t1316 + t1319 + t1320;
  t1323 = 3.e-6*t1280;
  t1329 = -1.000000000009*t1280;
  t1330 = 1. + t1329;
  t1326 = 9.e-12*t1280;
  t1301 = -1.*t1283;
  t1324 = t1323 + t1284;
  t1334 = t1323 + t1287;
  t1351 = Cos(var1[3]);
  t1349 = Sin(var1[3]);
  t1350 = t235*t1349*t568;
  t1352 = t1351*t561;
  t1353 = t1350 + t1352;
  t1355 = t1351*t235;
  t1356 = -1.*t1349*t568*t561;
  t1357 = t1355 + t1356;
  t655 = 0.225000000002025*t654;
  t670 = t656 + t663;
  t674 = 0.1*t670;
  t759 = -9.75e-7*t748;
  t762 = t648 + t655 + t674 + t759;
  t774 = 3.75e-7*var1[8];
  t777 = -1.755e-17*t654;
  t792 = 0.225*t787;
  t793 = 0.1*t748;
  t794 = t774 + t777 + t792 + t793;
  t1360 = t242*t1353;
  t1361 = 3.e-6*t456*t1357;
  t1362 = -1.*t192*t1349*t569;
  t1363 = t1360 + t1361 + t1362;
  t902 = t900 + t663;
  t1365 = 3.e-6*t456*t1353;
  t1366 = t769*t1357;
  t1367 = 3.e-6*t192*t1349*t569;
  t1368 = t1365 + t1366 + t1367;
  t912 = -1.8e-11*t654;
  t913 = 1. + t912;
  t1371 = -1.*t192*t877*t1349;
  t1372 = -1.*t1353*t569;
  t1373 = 3.e-6*t1357*t569;
  t1374 = t1371 + t1372 + t1373;
  t968 = 0.1000000000009*t654;
  t980 = -9.75e-7*t787;
  t983 = t656 + t659;
  t986 = 0.225*t983;
  t989 = t648 + t968 + t980 + t986;
  t994 = t900 + t659;
  t1017 = 2.5e-8*var1[12];
  t1033 = 6.75e-18*t1028;
  t1038 = -0.225000000003*t1037;
  t1041 = 0.100000000003*t1040;
  t1042 = t1017 + t1033 + t1038 + t1041;
  t1051 = -0.225000000005025*t1028;
  t1066 = t1056 + t1061;
  t1067 = 0.100000000003*t1066;
  t1068 = 3.75e-7*t1040;
  t1069 = t1050 + t1051 + t1067 + t1068;
  t1075 = 0.1000000000039*t1028;
  t1076 = 3.75e-7*t1037;
  t1077 = t1056 + t1035;
  t1078 = -0.225000000003*t1077;
  t1079 = t1050 + t1075 + t1076 + t1078;
  t1394 = 3.e-6*t192*t1006*t1349;
  t1395 = 3.e-6*t1004*t1353;
  t1396 = t1046*t1357;
  t1397 = t1394 + t1395 + t1396;
  t1103 = t1102 + t1035;
  t1399 = -1.*t192*t1006*t1349;
  t1400 = t1002*t1353;
  t1401 = 3.e-6*t1004*t1357;
  t1402 = t1399 + t1400 + t1401;
  t1404 = -1.*t1082*t192*t1349;
  t1405 = -1.*t1006*t1353;
  t1406 = 3.e-6*t1006*t1357;
  t1407 = t1404 + t1405 + t1406;
  t1113 = t1102 + t1061;
  t1117 = -1.8e-11*t1028;
  t1118 = 1. + t1117;
  t1144 = 3.75e-7*var1[17];
  t1148 = -1.755e-17*t1147;
  t1159 = 0.225*t1158;
  t1170 = 0.1*t1169;
  t1175 = t1144 + t1148 + t1159 + t1170;
  t1184 = 0.225000000002025*t1147;
  t1187 = t1185 + t1186;
  t1188 = 0.1*t1187;
  t1189 = -9.75e-7*t1169;
  t1190 = t1183 + t1184 + t1188 + t1189;
  t1208 = 0.1000000000009*t1147;
  t1209 = -9.75e-7*t1158;
  t1210 = t1185 + t1150;
  t1211 = 0.225*t1210;
  t1212 = t1183 + t1208 + t1209 + t1211;
  t1428 = 3.e-6*t192*t1141*t1349;
  t1429 = 3.e-6*t1139*t1353;
  t1430 = t1179*t1357;
  t1431 = t1428 + t1429 + t1430;
  t1224 = t1223 + t1150;
  t1433 = -1.*t192*t1141*t1349;
  t1434 = t1137*t1353;
  t1435 = 3.e-6*t1139*t1357;
  t1436 = t1433 + t1434 + t1435;
  t1438 = -1.*t1215*t192*t1349;
  t1439 = -1.*t1141*t1353;
  t1440 = 3.e-6*t1141*t1357;
  t1441 = t1438 + t1439 + t1440;
  t1246 = t1223 + t1186;
  t1250 = -1.8e-11*t1147;
  t1251 = 1. + t1250;
  t1277 = 2.5e-8*var1[21];
  t1281 = 6.75e-18*t1280;
  t1286 = -0.225000000003*t1285;
  t1289 = 0.100000000003*t1288;
  t1290 = t1277 + t1281 + t1286 + t1289;
  t1299 = -0.225000000005025*t1280;
  t1302 = t1300 + t1301;
  t1303 = 0.100000000003*t1302;
  t1304 = 3.75e-7*t1288;
  t1305 = t1298 + t1299 + t1303 + t1304;
  t1311 = 0.1000000000039*t1280;
  t1312 = 3.75e-7*t1285;
  t1313 = t1300 + t1283;
  t1314 = -0.225000000003*t1313;
  t1315 = t1298 + t1311 + t1312 + t1314;
  t1462 = 3.e-6*t192*t1266*t1349;
  t1463 = 3.e-6*t1260*t1353;
  t1464 = t1294*t1357;
  t1465 = t1462 + t1463 + t1464;
  t1327 = t1326 + t1283;
  t1467 = -1.*t192*t1266*t1349;
  t1468 = t1258*t1353;
  t1469 = 3.e-6*t1260*t1357;
  t1470 = t1467 + t1468 + t1469;
  t1472 = -1.*t1318*t192*t1349;
  t1473 = -1.*t1266*t1353;
  t1474 = 3.e-6*t1266*t1357;
  t1475 = t1472 + t1473 + t1474;
  t1337 = t1326 + t1301;
  t1341 = -1.8e-11*t1280;
  t1342 = 1. + t1341;
  t1493 = -1.*t1351*t235*t568;
  t1494 = t1349*t561;
  t1495 = t1493 + t1494;
  t1497 = t235*t1349;
  t1498 = t1351*t568*t561;
  t1499 = t1497 + t1498;
  t1502 = t242*t1495;
  t1503 = 3.e-6*t456*t1499;
  t1504 = t1351*t192*t569;
  t1505 = t1502 + t1503 + t1504;
  t1507 = 3.e-6*t456*t1495;
  t1508 = t769*t1499;
  t1509 = -3.e-6*t1351*t192*t569;
  t1510 = t1507 + t1508 + t1509;
  t1513 = t1351*t192*t877;
  t1514 = -1.*t1495*t569;
  t1515 = 3.e-6*t1499*t569;
  t1516 = t1513 + t1514 + t1515;
  t1536 = -3.e-6*t1351*t192*t1006;
  t1537 = 3.e-6*t1004*t1495;
  t1538 = t1046*t1499;
  t1539 = t1536 + t1537 + t1538;
  t1541 = t1351*t192*t1006;
  t1542 = t1002*t1495;
  t1543 = 3.e-6*t1004*t1499;
  t1544 = t1541 + t1542 + t1543;
  t1546 = t1082*t1351*t192;
  t1547 = -1.*t1006*t1495;
  t1548 = 3.e-6*t1006*t1499;
  t1549 = t1546 + t1547 + t1548;
  t1570 = -3.e-6*t1351*t192*t1141;
  t1571 = 3.e-6*t1139*t1495;
  t1572 = t1179*t1499;
  t1573 = t1570 + t1571 + t1572;
  t1575 = t1351*t192*t1141;
  t1576 = t1137*t1495;
  t1577 = 3.e-6*t1139*t1499;
  t1578 = t1575 + t1576 + t1577;
  t1580 = t1215*t1351*t192;
  t1581 = -1.*t1141*t1495;
  t1582 = 3.e-6*t1141*t1499;
  t1583 = t1580 + t1581 + t1582;
  t1604 = -3.e-6*t1351*t192*t1266;
  t1605 = 3.e-6*t1260*t1495;
  t1606 = t1294*t1499;
  t1607 = t1604 + t1605 + t1606;
  t1609 = t1351*t192*t1266;
  t1610 = t1258*t1495;
  t1611 = 3.e-6*t1260*t1499;
  t1612 = t1609 + t1610 + t1611;
  t1614 = t1318*t1351*t192;
  t1615 = -1.*t1266*t1495;
  t1616 = 3.e-6*t1266*t1499;
  t1617 = t1614 + t1615 + t1616;
  p_output1[0]=0.225000000002025*t192*t235*t456 + 6.75000000006075e-7*t192*t456*t561 - 0.225000000002025*t568*t569 + t613*t762 + t773*t794 + 0.225*(t613*t801 + t895*t902 + t773*t906) + 0.130001*(t895*t906 + t773*t913 + t613*t915) + t895*t989 - 0.14*(t801*t895 + t773*t915 + t613*t994) + var1[0];
  p_output1[1]=t1042*t1048 + t1069*t1073 + t1079*t1085 - 0.14*(t1048*t1100 + t1073*t1103 + t1085*t1106) - 0.225*(t1073*t1106 + t1048*t1110 + t1085*t1113) + 0.130001*(t1073*t1100 + t1085*t1110 + t1048*t1118) - 0.225000000002025*t1004*t192*t235 - 6.75000000006075e-7*t1004*t192*t561 + 0.225000000002025*t1006*t568 + var1[0];
  p_output1[2]=t1175*t1181 + t1190*t1198 + t1212*t1218 - 0.14*(t1181*t1221 + t1198*t1224 + t1218*t1227) + 0.225*(t1198*t1227 + t1181*t1243 + t1218*t1246) - 0.129999*(t1198*t1221 + t1218*t1243 + t1181*t1251) + 0.225000000002025*t1139*t192*t235 + 6.75000000006075e-7*t1139*t192*t561 - 0.225000000002025*t1141*t568 + var1[0];
  p_output1[3]=t1290*t1296 + t1305*t1309 + t1315*t1321 - 0.14*(t1296*t1324 + t1309*t1327 + t1321*t1330) - 0.225*(t1309*t1330 + t1296*t1334 + t1321*t1337) - 0.129999*(t1309*t1324 + t1321*t1334 + t1296*t1342) - 0.225000000002025*t1260*t192*t235 - 6.75000000006075e-7*t1260*t192*t561 + 0.225000000002025*t1266*t568 + var1[0];
  p_output1[4]=0.225000000002025*t1353*t456 - 6.75000000006075e-7*t1357*t456 + 0.225000000002025*t1349*t192*t569 + t1363*t762 + t1368*t794 + 0.225*(t1363*t801 + t1374*t902 + t1368*t906) + 0.130001*(t1374*t906 + t1368*t913 + t1363*t915) + t1374*t989 - 0.14*(t1374*t801 + t1368*t915 + t1363*t994) + var1[1];
  p_output1[5]=-0.225000000002025*t1004*t1353 + 6.75000000006075e-7*t1004*t1357 + t1042*t1397 + t1069*t1402 + t1079*t1407 - 0.14*(t1100*t1397 + t1103*t1402 + t1106*t1407) + 0.130001*(t1118*t1397 + t1100*t1402 + t1110*t1407) - 0.225*(t1110*t1397 + t1106*t1402 + t1113*t1407) - 0.225000000002025*t1006*t1349*t192 + var1[1];
  p_output1[6]=0.225000000002025*t1139*t1353 - 6.75000000006075e-7*t1139*t1357 + t1175*t1431 + t1190*t1436 + t1212*t1441 - 0.14*(t1221*t1431 + t1224*t1436 + t1227*t1441) - 0.129999*(t1251*t1431 + t1221*t1436 + t1243*t1441) + 0.225*(t1243*t1431 + t1227*t1436 + t1246*t1441) + 0.225000000002025*t1141*t1349*t192 + var1[1];
  p_output1[7]=-0.225000000002025*t1260*t1353 + 6.75000000006075e-7*t1260*t1357 + t1290*t1465 + t1305*t1470 + t1315*t1475 - 0.14*(t1324*t1465 + t1327*t1470 + t1330*t1475) - 0.129999*(t1342*t1465 + t1324*t1470 + t1334*t1475) - 0.225*(t1334*t1465 + t1330*t1470 + t1337*t1475) - 0.225000000002025*t1266*t1349*t192 + var1[1];
  p_output1[8]=0.225000000002025*t1495*t456 - 6.75000000006075e-7*t1499*t456 - 0.225000000002025*t1351*t192*t569 + t1505*t762 + t1510*t794 + 0.225*(t1505*t801 + t1516*t902 + t1510*t906) + 0.130001*(t1516*t906 + t1510*t913 + t1505*t915) + t1516*t989 - 0.14*(t1516*t801 + t1510*t915 + t1505*t994) + var1[2];
  p_output1[9]=-0.225000000002025*t1004*t1495 + 6.75000000006075e-7*t1004*t1499 + t1042*t1539 + t1069*t1544 + t1079*t1549 - 0.14*(t1100*t1539 + t1103*t1544 + t1106*t1549) + 0.130001*(t1118*t1539 + t1100*t1544 + t1110*t1549) - 0.225*(t1110*t1539 + t1106*t1544 + t1113*t1549) + 0.225000000002025*t1006*t1351*t192 + var1[2];
  p_output1[10]=0.225000000002025*t1139*t1495 - 6.75000000006075e-7*t1139*t1499 + t1175*t1573 + t1190*t1578 + t1212*t1583 - 0.14*(t1221*t1573 + t1224*t1578 + t1227*t1583) - 0.129999*(t1251*t1573 + t1221*t1578 + t1243*t1583) + 0.225*(t1243*t1573 + t1227*t1578 + t1246*t1583) - 0.225000000002025*t1141*t1351*t192 + var1[2];
  p_output1[11]=-0.225000000002025*t1260*t1495 + 6.75000000006075e-7*t1260*t1499 + t1290*t1607 + t1305*t1612 + t1315*t1617 - 0.14*(t1324*t1607 + t1327*t1612 + t1330*t1617) - 0.129999*(t1342*t1607 + t1324*t1612 + t1334*t1617) - 0.225*(t1334*t1607 + t1330*t1612 + t1337*t1617) + 0.225000000002025*t1266*t1351*t192 + var1[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "computeFeetPos.hh"

namespace SymFunction
{

void computeFeetPos_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
