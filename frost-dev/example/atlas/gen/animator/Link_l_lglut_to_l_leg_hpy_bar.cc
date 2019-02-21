/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:54 GMT-06:00
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
  double t8498;
  double t8771;
  double t8873;
  double t8926;
  double t9013;
  double t8915;
  double t8919;
  double t9081;
  double t9103;
  double t9130;
  double t9147;
  double t8912;
  double t8925;
  double t8961;
  double t8972;
  double t9075;
  double t9096;
  double t9102;
  double t9214;
  double t9248;
  double t9260;
  double t9265;
  double t9293;
  double t9321;
  double t9444;
  double t9570;
  double t9681;
  double t9722;
  double t9290;
  double t9503;
  double t9727;
  double t9734;
  double t10873;
  double t10898;
  double t10887;
  double t10938;
  double t10994;
  double t11018;
  double t11025;
  double t11031;
  double t11063;
  double t11069;
  double t11075;
  double t10884;
  double t10999;
  double t11037;
  double t11079;
  double t11084;
  double t11095;
  double t11103;
  double t11277;
  double t11286;
  double t11298;
  double t11319;
  double t11366;
  double t11442;
  double t11110;
  double t11315;
  double t11462;
  double t11468;
  double t13709;
  double t13747;
  double t13805;
  double t13875;
  double t13888;
  double t13896;
  double t13907;
  double t13919;
  double t14000;
  double t13704;
  double t13856;
  double t13901;
  double t14061;
  double t14154;
  double t14159;
  double t14252;
  double t14303;
  double t14305;
  double t14688;
  double t15101;
  double t15124;
  double t15220;
  double t14272;
  double t14790;
  double t15223;
  double t15231;
  double t9804;
  double t9873;
  double t9910;
  double t9937;
  double t9969;
  double t9994;
  double t10151;
  double t10220;
  double t10344;
  double t10390;
  double t10436;
  double t10479;
  double t10565;
  double t10614;
  double t10686;
  double t10776;
  double t10820;
  double t10854;
  double t17893;
  double t17898;
  double t17900;
  double t11563;
  double t11735;
  double t11848;
  double t12053;
  double t12081;
  double t12158;
  double t12311;
  double t12364;
  double t12474;
  double t12594;
  double t12793;
  double t12831;
  double t12979;
  double t13169;
  double t13238;
  double t13276;
  double t13580;
  double t13635;
  double t19416;
  double t19434;
  double t19444;
  double t15331;
  double t15375;
  double t15425;
  double t15533;
  double t16112;
  double t16244;
  double t16345;
  double t16466;
  double t16526;
  double t16640;
  double t16759;
  double t16794;
  double t16996;
  double t17252;
  double t17352;
  double t17516;
  double t17841;
  double t17862;
  double t20227;
  double t20232;
  double t20234;
  t8498 = Cos(var1[4]);
  t8771 = Cos(var1[5]);
  t8873 = Sin(var1[13]);
  t8926 = Cos(var1[13]);
  t9013 = Sin(var1[5]);
  t8915 = Sin(var1[11]);
  t8919 = Sin(var1[4]);
  t9081 = Cos(var1[11]);
  t9103 = -1.*t8498*t8771*t8873;
  t9130 = -1.*t8926*t8498*t9013;
  t9147 = t9103 + t9130;
  t8912 = 0.089*t8498*t8771*t8873;
  t8925 = -0.089*t8915*t8919;
  t8961 = -1.*t8926;
  t8972 = 1. + t8961;
  t9075 = -0.089*t8972*t8498*t9013;
  t9096 = -1.*t9081;
  t9102 = 1. + t9096;
  t9214 = 0.089*t9102*t9147;
  t9248 = t8926*t8498*t8771;
  t9260 = -1.*t8498*t8873*t9013;
  t9265 = t9248 + t9260;
  t9293 = t8915*t8919;
  t9321 = t9081*t9147;
  t9444 = t9293 + t9321;
  t9570 = t9081*t8919;
  t9681 = -1.*t8915*t9147;
  t9722 = t9570 + t9681;
  t9290 = -0.00988*t9265;
  t9503 = 0.083543*t9444;
  t9727 = -0.00988*t9722;
  t9734 = var1[0] + t8912 + t8925 + t9075 + t9214 + t9290 + t9503 + t9727;
  t10873 = Sin(var1[3]);
  t10898 = Cos(var1[3]);
  t10887 = t8771*t10873*t8919;
  t10938 = t10898*t9013;
  t10994 = t10887 + t10938;
  t11018 = t10898*t8771;
  t11025 = -1.*t10873*t8919*t9013;
  t11031 = t11018 + t11025;
  t11063 = -1.*t8873*t10994;
  t11069 = t8926*t11031;
  t11075 = t11063 + t11069;
  t10884 = 0.089*t8498*t8915*t10873;
  t10999 = 0.089*t8873*t10994;
  t11037 = 0.089*t8972*t11031;
  t11079 = 0.089*t9102*t11075;
  t11084 = t8926*t10994;
  t11095 = t8873*t11031;
  t11103 = t11084 + t11095;
  t11277 = -1.*t8498*t8915*t10873;
  t11286 = t9081*t11075;
  t11298 = t11277 + t11286;
  t11319 = -1.*t9081*t8498*t10873;
  t11366 = -1.*t8915*t11075;
  t11442 = t11319 + t11366;
  t11110 = -0.00988*t11103;
  t11315 = 0.083543*t11298;
  t11462 = -0.00988*t11442;
  t11468 = var1[1] + t10884 + t10999 + t11037 + t11079 + t11110 + t11315 + t11462;
  t13709 = -1.*t10898*t8771*t8919;
  t13747 = t10873*t9013;
  t13805 = t13709 + t13747;
  t13875 = t8771*t10873;
  t13888 = t10898*t8919*t9013;
  t13896 = t13875 + t13888;
  t13907 = -1.*t8873*t13805;
  t13919 = t8926*t13896;
  t14000 = t13907 + t13919;
  t13704 = -0.089*t10898*t8498*t8915;
  t13856 = 0.089*t8873*t13805;
  t13901 = 0.089*t8972*t13896;
  t14061 = 0.089*t9102*t14000;
  t14154 = t8926*t13805;
  t14159 = t8873*t13896;
  t14252 = t14154 + t14159;
  t14303 = t10898*t8498*t8915;
  t14305 = t9081*t14000;
  t14688 = t14303 + t14305;
  t15101 = t9081*t10898*t8498;
  t15124 = -1.*t8915*t14000;
  t15220 = t15101 + t15124;
  t14272 = -0.00988*t14252;
  t14790 = 0.083543*t14688;
  t15223 = -0.00988*t15220;
  t15231 = var1[2] + t13704 + t13856 + t13901 + t14061 + t14272 + t14790 + t15223;
  t9804 = 0.088375*t9444;
  t9873 = 0.093275*t9444;
  t9910 = 0.097712*t9444;
  t9937 = 0.101205*t9444;
  t9969 = 0.103375*t9444;
  t9994 = 0.103987*t9444;
  t10151 = 0.102976*t9444;
  t10220 = 0.100449*t9444;
  t10344 = 0.096683*t9444;
  t10390 = 0.092083*t9444;
  t10436 = 0.08715*t9444;
  t10479 = 0.082416*t9444;
  t10565 = 0.078397*t9444;
  t10614 = 0.075526*t9444;
  t10686 = 0.074116*t9444;
  t10776 = 0.074318*t9444;
  t10820 = 0.076112*t9444;
  t10854 = 0.079302*t9444;
  t17893 = 0.04012*t9265;
  t17898 = -0.05988*t9722;
  t17900 = var1[0] + t8912 + t8925 + t9075 + t9214 + t17893 + t9503 + t17898;
  t11563 = 0.088375*t11298;
  t11735 = 0.093275*t11298;
  t11848 = 0.097712*t11298;
  t12053 = 0.101205*t11298;
  t12081 = 0.103375*t11298;
  t12158 = 0.103987*t11298;
  t12311 = 0.102976*t11298;
  t12364 = 0.100449*t11298;
  t12474 = 0.096683*t11298;
  t12594 = 0.092083*t11298;
  t12793 = 0.08715*t11298;
  t12831 = 0.082416*t11298;
  t12979 = 0.078397*t11298;
  t13169 = 0.075526*t11298;
  t13238 = 0.074116*t11298;
  t13276 = 0.074318*t11298;
  t13580 = 0.076112*t11298;
  t13635 = 0.079302*t11298;
  t19416 = 0.04012*t11103;
  t19434 = -0.05988*t11442;
  t19444 = var1[1] + t10884 + t10999 + t11037 + t11079 + t19416 + t11315 + t19434;
  t15331 = 0.088375*t14688;
  t15375 = 0.093275*t14688;
  t15425 = 0.097712*t14688;
  t15533 = 0.101205*t14688;
  t16112 = 0.103375*t14688;
  t16244 = 0.103987*t14688;
  t16345 = 0.102976*t14688;
  t16466 = 0.100449*t14688;
  t16526 = 0.096683*t14688;
  t16640 = 0.092083*t14688;
  t16759 = 0.08715*t14688;
  t16794 = 0.082416*t14688;
  t16996 = 0.078397*t14688;
  t17252 = 0.075526*t14688;
  t17352 = 0.074116*t14688;
  t17516 = 0.074318*t14688;
  t17841 = 0.076112*t14688;
  t17862 = 0.079302*t14688;
  t20227 = 0.04012*t14252;
  t20232 = -0.05988*t15220;
  t20234 = var1[2] + t13704 + t13856 + t13901 + t14061 + t20227 + t14790 + t20232;
  p_output1[0]=t9734;
  p_output1[1]=t8912 + t8925 + t9075 + t9214 - 0.010597*t9265 - 0.010597*t9722 + t9804 + var1[0];
  p_output1[2]=t8912 + t8925 + t9075 + t9214 - 0.010167*t9265 - 0.010167*t9722 + t9873 + var1[0];
  p_output1[3]=t8912 + t8925 + t9075 + t9214 - 0.008634*t9265 - 0.008634*t9722 + t9910 + var1[0];
  p_output1[4]=t8912 + t8925 + t9075 + t9214 - 0.006166*t9265 - 0.006166*t9722 + t9937 + var1[0];
  p_output1[5]=t8912 + t8925 + t9075 + t9214 - 0.00303*t9265 - 0.00303*t9722 + t9969 + var1[0];
  p_output1[6]=t8912 + t8925 + t9075 + t9214 + 0.000435*t9265 + 0.000435*t9722 + t9994 + var1[0];
  p_output1[7]=t10151 + t8912 + t8925 + t9075 + t9214 + 0.003852*t9265 + 0.003852*t9722 + var1[0];
  p_output1[8]=t10220 + t8912 + t8925 + t9075 + t9214 + 0.006852*t9265 + 0.006852*t9722 + var1[0];
  p_output1[9]=t10344 + t8912 + t8925 + t9075 + t9214 + 0.00911*t9265 + 0.00911*t9722 + var1[0];
  p_output1[10]=t10390 + t8912 + t8925 + t9075 + t9214 + 0.01038*t9265 + 0.01038*t9722 + var1[0];
  p_output1[11]=t10436 + t8912 + t8925 + t9075 + t9214 + 0.010526*t9265 + 0.010526*t9722 + var1[0];
  p_output1[12]=t10479 + t8912 + t8925 + t9075 + t9214 + 0.00953*t9265 + 0.00953*t9722 + var1[0];
  p_output1[13]=t10565 + t8912 + t8925 + t9075 + t9214 + 0.007502*t9265 + 0.007502*t9722 + var1[0];
  p_output1[14]=t10614 + t8912 + t8925 + t9075 + t9214 + 0.004662*t9265 + 0.004662*t9722 + var1[0];
  p_output1[15]=t10686 + t8912 + t8925 + t9075 + t9214 + 0.001315*t9265 + 0.001315*t9722 + var1[0];
  p_output1[16]=t10776 + t8912 + t8925 + t9075 + t9214 - 0.002173*t9265 - 0.002173*t9722 + var1[0];
  p_output1[17]=t10820 + t8912 + t8925 + t9075 + t9214 - 0.005426*t9265 - 0.005426*t9722 + var1[0];
  p_output1[18]=t10854 + t8912 + t8925 + t9075 + t9214 - 0.008091*t9265 - 0.008091*t9722 + var1[0];
  p_output1[19]=t9734;
  p_output1[20]=t11468;
  p_output1[21]=t10884 + t10999 + t11037 + t11079 - 0.010597*t11103 - 0.010597*t11442 + t11563 + var1[1];
  p_output1[22]=t10884 + t10999 + t11037 + t11079 - 0.010167*t11103 - 0.010167*t11442 + t11735 + var1[1];
  p_output1[23]=t10884 + t10999 + t11037 + t11079 - 0.008634*t11103 - 0.008634*t11442 + t11848 + var1[1];
  p_output1[24]=t10884 + t10999 + t11037 + t11079 - 0.006166*t11103 - 0.006166*t11442 + t12053 + var1[1];
  p_output1[25]=t10884 + t10999 + t11037 + t11079 - 0.00303*t11103 - 0.00303*t11442 + t12081 + var1[1];
  p_output1[26]=t10884 + t10999 + t11037 + t11079 + 0.000435*t11103 + 0.000435*t11442 + t12158 + var1[1];
  p_output1[27]=t10884 + t10999 + t11037 + t11079 + 0.003852*t11103 + 0.003852*t11442 + t12311 + var1[1];
  p_output1[28]=t10884 + t10999 + t11037 + t11079 + 0.006852*t11103 + 0.006852*t11442 + t12364 + var1[1];
  p_output1[29]=t10884 + t10999 + t11037 + t11079 + 0.00911*t11103 + 0.00911*t11442 + t12474 + var1[1];
  p_output1[30]=t10884 + t10999 + t11037 + t11079 + 0.01038*t11103 + 0.01038*t11442 + t12594 + var1[1];
  p_output1[31]=t10884 + t10999 + t11037 + t11079 + 0.010526*t11103 + 0.010526*t11442 + t12793 + var1[1];
  p_output1[32]=t10884 + t10999 + t11037 + t11079 + 0.00953*t11103 + 0.00953*t11442 + t12831 + var1[1];
  p_output1[33]=t10884 + t10999 + t11037 + t11079 + 0.007502*t11103 + 0.007502*t11442 + t12979 + var1[1];
  p_output1[34]=t10884 + t10999 + t11037 + t11079 + 0.004662*t11103 + 0.004662*t11442 + t13169 + var1[1];
  p_output1[35]=t10884 + t10999 + t11037 + t11079 + 0.001315*t11103 + 0.001315*t11442 + t13238 + var1[1];
  p_output1[36]=t10884 + t10999 + t11037 + t11079 - 0.002173*t11103 - 0.002173*t11442 + t13276 + var1[1];
  p_output1[37]=t10884 + t10999 + t11037 + t11079 - 0.005426*t11103 - 0.005426*t11442 + t13580 + var1[1];
  p_output1[38]=t10884 + t10999 + t11037 + t11079 - 0.008091*t11103 - 0.008091*t11442 + t13635 + var1[1];
  p_output1[39]=t11468;
  p_output1[40]=t15231;
  p_output1[41]=t13704 + t13856 + t13901 + t14061 - 0.010597*t14252 - 0.010597*t15220 + t15331 + var1[2];
  p_output1[42]=t13704 + t13856 + t13901 + t14061 - 0.010167*t14252 - 0.010167*t15220 + t15375 + var1[2];
  p_output1[43]=t13704 + t13856 + t13901 + t14061 - 0.008634*t14252 - 0.008634*t15220 + t15425 + var1[2];
  p_output1[44]=t13704 + t13856 + t13901 + t14061 - 0.006166*t14252 - 0.006166*t15220 + t15533 + var1[2];
  p_output1[45]=t13704 + t13856 + t13901 + t14061 - 0.00303*t14252 - 0.00303*t15220 + t16112 + var1[2];
  p_output1[46]=t13704 + t13856 + t13901 + t14061 + 0.000435*t14252 + 0.000435*t15220 + t16244 + var1[2];
  p_output1[47]=t13704 + t13856 + t13901 + t14061 + 0.003852*t14252 + 0.003852*t15220 + t16345 + var1[2];
  p_output1[48]=t13704 + t13856 + t13901 + t14061 + 0.006852*t14252 + 0.006852*t15220 + t16466 + var1[2];
  p_output1[49]=t13704 + t13856 + t13901 + t14061 + 0.00911*t14252 + 0.00911*t15220 + t16526 + var1[2];
  p_output1[50]=t13704 + t13856 + t13901 + t14061 + 0.01038*t14252 + 0.01038*t15220 + t16640 + var1[2];
  p_output1[51]=t13704 + t13856 + t13901 + t14061 + 0.010526*t14252 + 0.010526*t15220 + t16759 + var1[2];
  p_output1[52]=t13704 + t13856 + t13901 + t14061 + 0.00953*t14252 + 0.00953*t15220 + t16794 + var1[2];
  p_output1[53]=t13704 + t13856 + t13901 + t14061 + 0.007502*t14252 + 0.007502*t15220 + t16996 + var1[2];
  p_output1[54]=t13704 + t13856 + t13901 + t14061 + 0.004662*t14252 + 0.004662*t15220 + t17252 + var1[2];
  p_output1[55]=t13704 + t13856 + t13901 + t14061 + 0.001315*t14252 + 0.001315*t15220 + t17352 + var1[2];
  p_output1[56]=t13704 + t13856 + t13901 + t14061 - 0.002173*t14252 - 0.002173*t15220 + t17516 + var1[2];
  p_output1[57]=t13704 + t13856 + t13901 + t14061 - 0.005426*t14252 - 0.005426*t15220 + t17841 + var1[2];
  p_output1[58]=t13704 + t13856 + t13901 + t14061 - 0.008091*t14252 - 0.008091*t15220 + t17862 + var1[2];
  p_output1[59]=t15231;
  p_output1[60]=t17900;
  p_output1[61]=t8912 + t8925 + t9075 + t9214 + 0.039403*t9265 - 0.060597*t9722 + t9804 + var1[0];
  p_output1[62]=t8912 + t8925 + t9075 + t9214 + 0.039833*t9265 - 0.060167*t9722 + t9873 + var1[0];
  p_output1[63]=t8912 + t8925 + t9075 + t9214 + 0.041366*t9265 - 0.058634*t9722 + t9910 + var1[0];
  p_output1[64]=t8912 + t8925 + t9075 + t9214 + 0.043834*t9265 - 0.056166*t9722 + t9937 + var1[0];
  p_output1[65]=t8912 + t8925 + t9075 + t9214 + 0.04697*t9265 - 0.05303*t9722 + t9969 + var1[0];
  p_output1[66]=t8912 + t8925 + t9075 + t9214 + 0.050435*t9265 - 0.049565*t9722 + t9994 + var1[0];
  p_output1[67]=t10151 + t8912 + t8925 + t9075 + t9214 + 0.053852*t9265 - 0.046148*t9722 + var1[0];
  p_output1[68]=t10220 + t8912 + t8925 + t9075 + t9214 + 0.056852*t9265 - 0.043148*t9722 + var1[0];
  p_output1[69]=t10344 + t8912 + t8925 + t9075 + t9214 + 0.05911*t9265 - 0.04089*t9722 + var1[0];
  p_output1[70]=t10390 + t8912 + t8925 + t9075 + t9214 + 0.06038*t9265 - 0.03962*t9722 + var1[0];
  p_output1[71]=t10436 + t8912 + t8925 + t9075 + t9214 + 0.060526*t9265 - 0.039474*t9722 + var1[0];
  p_output1[72]=t10479 + t8912 + t8925 + t9075 + t9214 + 0.05953*t9265 - 0.04047*t9722 + var1[0];
  p_output1[73]=t10565 + t8912 + t8925 + t9075 + t9214 + 0.057502*t9265 - 0.042498*t9722 + var1[0];
  p_output1[74]=t10614 + t8912 + t8925 + t9075 + t9214 + 0.054662*t9265 - 0.045338*t9722 + var1[0];
  p_output1[75]=t10686 + t8912 + t8925 + t9075 + t9214 + 0.051315*t9265 - 0.048685*t9722 + var1[0];
  p_output1[76]=t10776 + t8912 + t8925 + t9075 + t9214 + 0.047827*t9265 - 0.052173*t9722 + var1[0];
  p_output1[77]=t10820 + t8912 + t8925 + t9075 + t9214 + 0.044574*t9265 - 0.055426*t9722 + var1[0];
  p_output1[78]=t10854 + t8912 + t8925 + t9075 + t9214 + 0.041909*t9265 - 0.058091*t9722 + var1[0];
  p_output1[79]=t17900;
  p_output1[80]=t19444;
  p_output1[81]=t10884 + t10999 + t11037 + t11079 + 0.039403*t11103 - 0.060597*t11442 + t11563 + var1[1];
  p_output1[82]=t10884 + t10999 + t11037 + t11079 + 0.039833*t11103 - 0.060167*t11442 + t11735 + var1[1];
  p_output1[83]=t10884 + t10999 + t11037 + t11079 + 0.041366*t11103 - 0.058634*t11442 + t11848 + var1[1];
  p_output1[84]=t10884 + t10999 + t11037 + t11079 + 0.043834*t11103 - 0.056166*t11442 + t12053 + var1[1];
  p_output1[85]=t10884 + t10999 + t11037 + t11079 + 0.04697*t11103 - 0.05303*t11442 + t12081 + var1[1];
  p_output1[86]=t10884 + t10999 + t11037 + t11079 + 0.050435*t11103 - 0.049565*t11442 + t12158 + var1[1];
  p_output1[87]=t10884 + t10999 + t11037 + t11079 + 0.053852*t11103 - 0.046148*t11442 + t12311 + var1[1];
  p_output1[88]=t10884 + t10999 + t11037 + t11079 + 0.056852*t11103 - 0.043148*t11442 + t12364 + var1[1];
  p_output1[89]=t10884 + t10999 + t11037 + t11079 + 0.05911*t11103 - 0.04089*t11442 + t12474 + var1[1];
  p_output1[90]=t10884 + t10999 + t11037 + t11079 + 0.06038*t11103 - 0.03962*t11442 + t12594 + var1[1];
  p_output1[91]=t10884 + t10999 + t11037 + t11079 + 0.060526*t11103 - 0.039474*t11442 + t12793 + var1[1];
  p_output1[92]=t10884 + t10999 + t11037 + t11079 + 0.05953*t11103 - 0.04047*t11442 + t12831 + var1[1];
  p_output1[93]=t10884 + t10999 + t11037 + t11079 + 0.057502*t11103 - 0.042498*t11442 + t12979 + var1[1];
  p_output1[94]=t10884 + t10999 + t11037 + t11079 + 0.054662*t11103 - 0.045338*t11442 + t13169 + var1[1];
  p_output1[95]=t10884 + t10999 + t11037 + t11079 + 0.051315*t11103 - 0.048685*t11442 + t13238 + var1[1];
  p_output1[96]=t10884 + t10999 + t11037 + t11079 + 0.047827*t11103 - 0.052173*t11442 + t13276 + var1[1];
  p_output1[97]=t10884 + t10999 + t11037 + t11079 + 0.044574*t11103 - 0.055426*t11442 + t13580 + var1[1];
  p_output1[98]=t10884 + t10999 + t11037 + t11079 + 0.041909*t11103 - 0.058091*t11442 + t13635 + var1[1];
  p_output1[99]=t19444;
  p_output1[100]=t20234;
  p_output1[101]=t13704 + t13856 + t13901 + t14061 + 0.039403*t14252 - 0.060597*t15220 + t15331 + var1[2];
  p_output1[102]=t13704 + t13856 + t13901 + t14061 + 0.039833*t14252 - 0.060167*t15220 + t15375 + var1[2];
  p_output1[103]=t13704 + t13856 + t13901 + t14061 + 0.041366*t14252 - 0.058634*t15220 + t15425 + var1[2];
  p_output1[104]=t13704 + t13856 + t13901 + t14061 + 0.043834*t14252 - 0.056166*t15220 + t15533 + var1[2];
  p_output1[105]=t13704 + t13856 + t13901 + t14061 + 0.04697*t14252 - 0.05303*t15220 + t16112 + var1[2];
  p_output1[106]=t13704 + t13856 + t13901 + t14061 + 0.050435*t14252 - 0.049565*t15220 + t16244 + var1[2];
  p_output1[107]=t13704 + t13856 + t13901 + t14061 + 0.053852*t14252 - 0.046148*t15220 + t16345 + var1[2];
  p_output1[108]=t13704 + t13856 + t13901 + t14061 + 0.056852*t14252 - 0.043148*t15220 + t16466 + var1[2];
  p_output1[109]=t13704 + t13856 + t13901 + t14061 + 0.05911*t14252 - 0.04089*t15220 + t16526 + var1[2];
  p_output1[110]=t13704 + t13856 + t13901 + t14061 + 0.06038*t14252 - 0.03962*t15220 + t16640 + var1[2];
  p_output1[111]=t13704 + t13856 + t13901 + t14061 + 0.060526*t14252 - 0.039474*t15220 + t16759 + var1[2];
  p_output1[112]=t13704 + t13856 + t13901 + t14061 + 0.05953*t14252 - 0.04047*t15220 + t16794 + var1[2];
  p_output1[113]=t13704 + t13856 + t13901 + t14061 + 0.057502*t14252 - 0.042498*t15220 + t16996 + var1[2];
  p_output1[114]=t13704 + t13856 + t13901 + t14061 + 0.054662*t14252 - 0.045338*t15220 + t17252 + var1[2];
  p_output1[115]=t13704 + t13856 + t13901 + t14061 + 0.051315*t14252 - 0.048685*t15220 + t17352 + var1[2];
  p_output1[116]=t13704 + t13856 + t13901 + t14061 + 0.047827*t14252 - 0.052173*t15220 + t17516 + var1[2];
  p_output1[117]=t13704 + t13856 + t13901 + t14061 + 0.044574*t14252 - 0.055426*t15220 + t17841 + var1[2];
  p_output1[118]=t13704 + t13856 + t13901 + t14061 + 0.041909*t14252 - 0.058091*t15220 + t17862 + var1[2];
  p_output1[119]=t20234;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_l_lglut_to_l_leg_hpy_bar.hh"

namespace SymFunction
{

void Link_l_lglut_to_l_leg_hpy_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE