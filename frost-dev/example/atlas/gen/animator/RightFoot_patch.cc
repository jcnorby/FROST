/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:18 GMT-06:00
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
  double t30;
  double t117;
  double t141;
  double t183;
  double t369;
  double t153;
  double t165;
  double t406;
  double t513;
  double t553;
  double t555;
  double t573;
  double t635;
  double t638;
  double t651;
  double t660;
  double t668;
  double t730;
  double t731;
  double t733;
  double t773;
  double t763;
  double t765;
  double t767;
  double t736;
  double t774;
  double t779;
  double t784;
  double t673;
  double t686;
  double t692;
  double t699;
  double t786;
  double t787;
  double t789;
  double t790;
  double t795;
  double t800;
  double t804;
  double t808;
  double t712;
  double t714;
  double t715;
  double t817;
  double t818;
  double t819;
  double t145;
  double t169;
  double t304;
  double t367;
  double t401;
  double t448;
  double t483;
  double t557;
  double t601;
  double t623;
  double t631;
  double t650;
  double t669;
  double t693;
  double t701;
  double t711;
  double t716;
  double t718;
  double t720;
  double t728;
  double t735;
  double t737;
  double t740;
  double t769;
  double t785;
  double t793;
  double t796;
  double t797;
  double t811;
  double t812;
  double t814;
  double t816;
  double t820;
  double t822;
  double t825;
  double t827;
  double t832;
  double t833;
  double t835;
  double t848;
  double t849;
  double t850;
  double t864;
  double t868;
  double t880;
  double t887;
  double t869;
  double t892;
  double t930;
  double t918;
  double t932;
  double t936;
  double t941;
  double t943;
  double t944;
  double t964;
  double t965;
  double t967;
  double t973;
  double t974;
  double t975;
  double t999;
  double t1002;
  double t1007;
  double t1017;
  double t1023;
  double t1025;
  double t1029;
  double t1036;
  double t1037;
  double t1070;
  double t1071;
  double t1074;
  double t1080;
  double t1084;
  double t1086;
  double t986;
  double t992;
  double t993;
  double t1089;
  double t1090;
  double t1095;
  double t912;
  double t938;
  double t963;
  double t971;
  double t979;
  double t994;
  double t1015;
  double t1027;
  double t1042;
  double t1078;
  double t1088;
  double t1179;
  double t1182;
  double t1190;
  double t1193;
  double t1196;
  double t1197;
  double t1208;
  double t1221;
  double t1227;
  double t1228;
  double t1282;
  double t1294;
  double t1310;
  double t1314;
  double t1296;
  double t1323;
  double t1330;
  double t1332;
  double t1335;
  double t1339;
  double t1341;
  double t1345;
  double t1347;
  double t1349;
  double t1352;
  double t1353;
  double t1354;
  double t1398;
  double t1401;
  double t1402;
  double t1406;
  double t1416;
  double t1417;
  double t1421;
  double t1424;
  double t1428;
  double t1432;
  double t1436;
  double t1439;
  double t1441;
  double t1442;
  double t1443;
  double t1388;
  double t1390;
  double t1395;
  double t1452;
  double t1453;
  double t1506;
  double t1320;
  double t1333;
  double t1343;
  double t1350;
  double t1374;
  double t1397;
  double t1404;
  double t1418;
  double t1430;
  double t1440;
  double t1447;
  double t1509;
  double t1510;
  double t1533;
  double t1538;
  double t1547;
  double t1549;
  double t1553;
  double t1565;
  double t1590;
  double t1591;
  double t1594;
  double t1623;
  double t1633;
  double t1643;
  double t1626;
  t30 = Cos(var1[4]);
  t117 = Cos(var1[5]);
  t141 = Sin(var1[19]);
  t183 = Cos(var1[19]);
  t369 = Sin(var1[5]);
  t153 = Sin(var1[17]);
  t165 = Sin(var1[4]);
  t406 = Cos(var1[17]);
  t513 = -1.*t30*t117*t141;
  t553 = -1.*t183*t30*t369;
  t555 = t513 + t553;
  t573 = Cos(var1[18]);
  t635 = Sin(var1[18]);
  t638 = 0.05*t635;
  t651 = t183*t30*t117;
  t660 = -1.*t30*t141*t369;
  t668 = t651 + t660;
  t730 = t406*t165;
  t731 = -1.*t153*t555;
  t733 = t730 + t731;
  t773 = Sin(var1[20]);
  t763 = t635*t668;
  t765 = t573*t733;
  t767 = t763 + t765;
  t736 = Cos(var1[20]);
  t774 = t573*t668;
  t779 = -1.*t635*t733;
  t784 = t774 + t779;
  t673 = Cos(var1[15]);
  t686 = -1.*t673;
  t692 = 1. + t686;
  t699 = Sin(var1[15]);
  t786 = Sin(var1[16]);
  t787 = -1.*t773*t767;
  t789 = t736*t784;
  t790 = t787 + t789;
  t795 = Cos(var1[16]);
  t800 = t736*t767;
  t804 = t773*t784;
  t808 = t800 + t804;
  t712 = t153*t165;
  t714 = t406*t555;
  t715 = t712 + t714;
  t817 = t786*t790;
  t818 = t795*t808;
  t819 = t817 + t818;
  t145 = -0.089*t30*t117*t141;
  t169 = 0.089*t153*t165;
  t304 = -1.*t183;
  t367 = 1. + t304;
  t401 = 0.089*t367*t30*t369;
  t448 = -1.*t406;
  t483 = 1. + t448;
  t557 = -0.089*t483*t555;
  t601 = -1.*t573;
  t623 = 1. + t601;
  t631 = 0.05*t623;
  t650 = t631 + t638;
  t669 = t650*t668;
  t693 = -0.089*t692;
  t701 = -0.846*t699;
  t711 = t693 + t701;
  t716 = t711*t715;
  t718 = -1. + t573;
  t720 = 0.05*t718;
  t728 = t720 + t638;
  t735 = t728*t733;
  t737 = -1.*t736;
  t740 = 1. + t737;
  t769 = -0.424*t740*t767;
  t785 = 0.424*t773*t784;
  t793 = 0.846*t786*t790;
  t796 = -1.*t795;
  t797 = 1. + t796;
  t811 = -0.846*t797*t808;
  t812 = -0.846*t692;
  t814 = 0.089*t699;
  t816 = t812 + t814;
  t820 = t816*t819;
  t822 = -1.*t699*t715;
  t825 = t673*t819;
  t827 = t822 + t825;
  t832 = t673*t715;
  t833 = t699*t819;
  t835 = t832 + t833;
  t848 = t795*t790;
  t849 = -1.*t786*t808;
  t850 = t848 + t849;
  t864 = 0.1728*t850;
  t868 = -0.92245*t827;
  t880 = -0.0128*t835;
  t887 = -0.082*t850;
  t869 = -0.1652*t835;
  t892 = Sin(var1[3]);
  t930 = Cos(var1[3]);
  t918 = t117*t892*t165;
  t932 = t930*t369;
  t936 = t918 + t932;
  t941 = t930*t117;
  t943 = -1.*t892*t165*t369;
  t944 = t941 + t943;
  t964 = -1.*t141*t936;
  t965 = t183*t944;
  t967 = t964 + t965;
  t973 = t183*t936;
  t974 = t141*t944;
  t975 = t973 + t974;
  t999 = -1.*t406*t30*t892;
  t1002 = -1.*t153*t967;
  t1007 = t999 + t1002;
  t1017 = t635*t975;
  t1023 = t573*t1007;
  t1025 = t1017 + t1023;
  t1029 = t573*t975;
  t1036 = -1.*t635*t1007;
  t1037 = t1029 + t1036;
  t1070 = -1.*t773*t1025;
  t1071 = t736*t1037;
  t1074 = t1070 + t1071;
  t1080 = t736*t1025;
  t1084 = t773*t1037;
  t1086 = t1080 + t1084;
  t986 = -1.*t30*t153*t892;
  t992 = t406*t967;
  t993 = t986 + t992;
  t1089 = t786*t1074;
  t1090 = t795*t1086;
  t1095 = t1089 + t1090;
  t912 = -0.089*t30*t153*t892;
  t938 = -0.089*t141*t936;
  t963 = -0.089*t367*t944;
  t971 = -0.089*t483*t967;
  t979 = t650*t975;
  t994 = t711*t993;
  t1015 = t728*t1007;
  t1027 = -0.424*t740*t1025;
  t1042 = 0.424*t773*t1037;
  t1078 = 0.846*t786*t1074;
  t1088 = -0.846*t797*t1086;
  t1179 = t816*t1095;
  t1182 = -1.*t699*t993;
  t1190 = t673*t1095;
  t1193 = t1182 + t1190;
  t1196 = t673*t993;
  t1197 = t699*t1095;
  t1208 = t1196 + t1197;
  t1221 = t795*t1074;
  t1227 = -1.*t786*t1086;
  t1228 = t1221 + t1227;
  t1282 = 0.1728*t1228;
  t1294 = -0.92245*t1193;
  t1310 = -0.0128*t1208;
  t1314 = -0.082*t1228;
  t1296 = -0.1652*t1208;
  t1323 = -1.*t930*t117*t165;
  t1330 = t892*t369;
  t1332 = t1323 + t1330;
  t1335 = t117*t892;
  t1339 = t930*t165*t369;
  t1341 = t1335 + t1339;
  t1345 = -1.*t141*t1332;
  t1347 = t183*t1341;
  t1349 = t1345 + t1347;
  t1352 = t183*t1332;
  t1353 = t141*t1341;
  t1354 = t1352 + t1353;
  t1398 = t406*t930*t30;
  t1401 = -1.*t153*t1349;
  t1402 = t1398 + t1401;
  t1406 = t635*t1354;
  t1416 = t573*t1402;
  t1417 = t1406 + t1416;
  t1421 = t573*t1354;
  t1424 = -1.*t635*t1402;
  t1428 = t1421 + t1424;
  t1432 = -1.*t773*t1417;
  t1436 = t736*t1428;
  t1439 = t1432 + t1436;
  t1441 = t736*t1417;
  t1442 = t773*t1428;
  t1443 = t1441 + t1442;
  t1388 = t930*t30*t153;
  t1390 = t406*t1349;
  t1395 = t1388 + t1390;
  t1452 = t786*t1439;
  t1453 = t795*t1443;
  t1506 = t1452 + t1453;
  t1320 = 0.089*t930*t30*t153;
  t1333 = -0.089*t141*t1332;
  t1343 = -0.089*t367*t1341;
  t1350 = -0.089*t483*t1349;
  t1374 = t650*t1354;
  t1397 = t711*t1395;
  t1404 = t728*t1402;
  t1418 = -0.424*t740*t1417;
  t1430 = 0.424*t773*t1428;
  t1440 = 0.846*t786*t1439;
  t1447 = -0.846*t797*t1443;
  t1509 = t816*t1506;
  t1510 = -1.*t699*t1395;
  t1533 = t673*t1506;
  t1538 = t1510 + t1533;
  t1547 = t673*t1395;
  t1549 = t699*t1506;
  t1553 = t1547 + t1549;
  t1565 = t795*t1439;
  t1590 = -1.*t786*t1443;
  t1591 = t1565 + t1590;
  t1594 = 0.1728*t1591;
  t1623 = -0.92245*t1538;
  t1633 = -0.0128*t1553;
  t1643 = -0.082*t1591;
  t1626 = -0.1652*t1553;
  p_output1[0]=t145 + t169 + t401 + t557 + t669 + t716 + t735 + t769 + t785 + t793 + t811 + t820 - 0.846*t827 - 0.089*t835 + var1[0];
  p_output1[1]=t145 + t169 + t401 + t557 + t669 + t716 + t735 + t769 + t785 + t793 + t811 + t820 + t864 + t868 + t869 + var1[0];
  p_output1[2]=t145 + t169 + t401 + t557 + t669 + t716 + t735 + t769 + t785 + t793 + t811 + t820 + t864 + t868 + t880 + var1[0];
  p_output1[3]=t145 + t169 + t401 + t557 + t669 + t716 + t735 + t769 + t785 + t793 + t811 + t820 + t868 + t880 + t887 + var1[0];
  p_output1[4]=t145 + t169 + t401 + t557 + t669 + t716 + t735 + t769 + t785 + t793 + t811 + t820 + t868 + t869 + t887 + var1[0];
  p_output1[5]=t1015 + t1027 + t1042 + t1078 + t1088 + t1179 - 0.846*t1193 - 0.089*t1208 + t912 + t938 + t963 + t971 + t979 + t994 + var1[1];
  p_output1[6]=t1015 + t1027 + t1042 + t1078 + t1088 + t1179 + t1282 + t1294 + t1296 + t912 + t938 + t963 + t971 + t979 + t994 + var1[1];
  p_output1[7]=t1015 + t1027 + t1042 + t1078 + t1088 + t1179 + t1282 + t1294 + t1310 + t912 + t938 + t963 + t971 + t979 + t994 + var1[1];
  p_output1[8]=t1015 + t1027 + t1042 + t1078 + t1088 + t1179 + t1294 + t1310 + t1314 + t912 + t938 + t963 + t971 + t979 + t994 + var1[1];
  p_output1[9]=t1015 + t1027 + t1042 + t1078 + t1088 + t1179 + t1294 + t1296 + t1314 + t912 + t938 + t963 + t971 + t979 + t994 + var1[1];
  p_output1[10]=t1320 + t1333 + t1343 + t1350 + t1374 + t1397 + t1404 + t1418 + t1430 + t1440 + t1447 + t1509 - 0.846*t1538 - 0.089*t1553 + var1[2];
  p_output1[11]=t1320 + t1333 + t1343 + t1350 + t1374 + t1397 + t1404 + t1418 + t1430 + t1440 + t1447 + t1509 + t1594 + t1623 + t1626 + var1[2];
  p_output1[12]=t1320 + t1333 + t1343 + t1350 + t1374 + t1397 + t1404 + t1418 + t1430 + t1440 + t1447 + t1509 + t1594 + t1623 + t1633 + var1[2];
  p_output1[13]=t1320 + t1333 + t1343 + t1350 + t1374 + t1397 + t1404 + t1418 + t1430 + t1440 + t1447 + t1509 + t1623 + t1633 + t1643 + var1[2];
  p_output1[14]=t1320 + t1333 + t1343 + t1350 + t1374 + t1397 + t1404 + t1418 + t1430 + t1440 + t1447 + t1509 + t1623 + t1626 + t1643 + var1[2];
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
    ( !(mrows == 21 && ncols == 1) && 
      !(mrows == 1 && ncols == 21))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "RightFoot_patch.hh"

namespace SymFunction
{

void RightFoot_patch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
