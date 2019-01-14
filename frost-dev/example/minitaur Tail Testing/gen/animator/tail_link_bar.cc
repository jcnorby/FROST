/*
 * Automatically Generated from Mathematica.
 * Mon 6 Aug 2018 16:06:39 GMT-04:00
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
  double t108617;
  double t15570;
  double t108541;
  double t108651;
  double t108664;
  double t78931;
  double t108496;
  double t108608;
  double t108629;
  double t108816;
  double t108858;
  double t108915;
  double t108918;
  double t108964;
  double t108967;
  double t109002;
  double t109008;
  double t108648;
  double t109073;
  double t109240;
  double t110154;
  double t110158;
  double t110178;
  double t110194;
  double t110203;
  double t110155;
  double t110159;
  double t110165;
  double t110166;
  double t110205;
  double t110235;
  double t110241;
  double t110252;
  double t110275;
  double t110278;
  double t110282;
  double t110301;
  double t110167;
  double t110259;
  double t110369;
  double t110957;
  double t110959;
  double t110981;
  double t110859;
  double t110868;
  double t110911;
  double t110919;
  double t110987;
  double t110990;
  double t110992;
  double t110994;
  double t111035;
  double t111053;
  double t111054;
  double t111057;
  double t110949;
  double t111000;
  double t111089;
  double t109258;
  double t111480;
  double t109259;
  double t109289;
  double t109292;
  double t109316;
  double t109319;
  double t109321;
  double t109327;
  double t109332;
  double t109357;
  double t109360;
  double t109363;
  double t109375;
  double t109378;
  double t109392;
  double t109454;
  double t109459;
  double t109464;
  double t109469;
  double t109476;
  double t109512;
  double t109535;
  double t109610;
  double t109613;
  double t109746;
  double t109809;
  double t109821;
  double t109844;
  double t109855;
  double t109923;
  double t109980;
  double t110125;
  double t110133;
  double t110136;
  double t110140;
  double t110141;
  double t111481;
  double t110378;
  double t110380;
  double t111758;
  double t110427;
  double t110430;
  double t110438;
  double t110439;
  double t110451;
  double t110453;
  double t110456;
  double t110457;
  double t110467;
  double t110468;
  double t110470;
  double t110473;
  double t110511;
  double t110512;
  double t110514;
  double t110515;
  double t110517;
  double t110518;
  double t110520;
  double t110521;
  double t110523;
  double t110562;
  double t110580;
  double t110581;
  double t110605;
  double t110606;
  double t110675;
  double t110693;
  double t110773;
  double t110786;
  double t110835;
  double t110842;
  double t110846;
  double t110847;
  double t111759;
  double t111099;
  double t111105;
  double t112034;
  double t111109;
  double t111124;
  double t111147;
  double t111153;
  double t111158;
  double t111165;
  double t111175;
  double t111178;
  double t111184;
  double t111198;
  double t111204;
  double t111242;
  double t111257;
  double t111263;
  double t111288;
  double t111359;
  double t111367;
  double t111373;
  double t111378;
  double t111379;
  double t111382;
  double t111383;
  double t111385;
  double t111386;
  double t111389;
  double t111390;
  double t111407;
  double t111409;
  double t111432;
  double t111435;
  double t111440;
  double t111445;
  double t111449;
  double t111451;
  double t112035;
  t108617 = Cos(var1[4]);
  t15570 = Cos(var1[6]);
  t108541 = Sin(var1[4]);
  t108651 = Cos(var1[5]);
  t108664 = Sin(var1[6]);
  t78931 = -1.*t15570;
  t108496 = 1. + t78931;
  t108608 = 0.1*t108496*t108541;
  t108629 = Sin(var1[5]);
  t108816 = -0.1*t108617*t108651*t108664;
  t108858 = t15570*t108541;
  t108915 = t108617*t108651*t108664;
  t108918 = t108858 + t108915;
  t108964 = 0.1*t108918;
  t108967 = t108617*t108651*t15570;
  t109002 = -1.*t108541*t108664;
  t109008 = t108967 + t109002;
  t108648 = 0.009547*t108617*t108629;
  t109073 = -0.011569*t109008;
  t109240 = var1[0] + t108608 + t108648 + t108816 + t108964 + t109073;
  t110154 = Sin(var1[3]);
  t110158 = Cos(var1[3]);
  t110178 = t108651*t110154*t108541;
  t110194 = t110158*t108629;
  t110203 = t110178 + t110194;
  t110155 = -0.1*t108617*t108496*t110154;
  t110159 = t110158*t108651;
  t110165 = -1.*t110154*t108541*t108629;
  t110166 = t110159 + t110165;
  t110205 = -0.1*t110203*t108664;
  t110235 = t15570*t110203;
  t110241 = t108617*t110154*t108664;
  t110252 = t110235 + t110241;
  t110275 = -1.*t108617*t15570*t110154;
  t110278 = t110203*t108664;
  t110282 = t110275 + t110278;
  t110301 = 0.1*t110282;
  t110167 = -0.009547*t110166;
  t110259 = -0.011569*t110252;
  t110369 = var1[1] + t110155 + t110167 + t110205 + t110259 + t110301;
  t110957 = -1.*t110158*t108651*t108541;
  t110959 = t110154*t108629;
  t110981 = t110957 + t110959;
  t110859 = 0.1*t110158*t108617*t108496;
  t110868 = t108651*t110154;
  t110911 = t110158*t108541*t108629;
  t110919 = t110868 + t110911;
  t110987 = -0.1*t110981*t108664;
  t110990 = t15570*t110981;
  t110992 = -1.*t110158*t108617*t108664;
  t110994 = t110990 + t110992;
  t111035 = t110158*t108617*t15570;
  t111053 = t110981*t108664;
  t111054 = t111035 + t111053;
  t111057 = 0.1*t111054;
  t110949 = -0.009547*t110919;
  t111000 = -0.011569*t110994;
  t111089 = var1[2] + t110859 + t110949 + t110987 + t111000 + t111057;
  t109258 = 0.012786*t108617*t108629;
  t111480 = 0.6*t108918;
  t109259 = -0.007843*t109008;
  t109289 = 0.01464*t108617*t108629;
  t109292 = -0.003266*t109008;
  t109316 = 0.014907*t108617*t108629;
  t109319 = 0.001665*t109008;
  t109321 = 0.013559*t108617*t108629;
  t109327 = 0.006415*t109008;
  t109332 = 0.010742*t108617*t108629;
  t109357 = 0.01047*t109008;
  t109360 = 0.00676*t108617*t108629;
  t109363 = 0.01339*t109008;
  t109375 = 0.002046*t108617*t108629;
  t109378 = 0.01486*t109008;
  t109392 = -0.00289*t108617*t108629;
  t109454 = 0.014719*t109008;
  t109459 = -0.007513*t108617*t108629;
  t109464 = 0.012983*t109008;
  t109469 = -0.011321*t108617*t108629;
  t109476 = 0.00984*t109008;
  t109512 = -0.013903*t108617*t108629;
  t109535 = 0.005631*t109008;
  t109610 = -0.014978*t108617*t108629;
  t109613 = 0.000812*t109008;
  t109746 = -0.01443*t108617*t108629;
  t109809 = -0.004096*t109008;
  t109821 = -0.012318*t108617*t108629;
  t109844 = -0.008559*t109008;
  t109855 = -0.008872*t108617*t108629;
  t109923 = -0.012095*t109008;
  t109980 = -0.004464*t108617*t108629;
  t110125 = -0.01432*t109008;
  t110133 = 0.000428*t108617*t108629;
  t110136 = -0.014994*t109008;
  t110140 = 0.005273*t108617*t108629;
  t110141 = -0.014043*t109008;
  t111481 = var1[0] + t108608 + t108648 + t108816 + t111480 + t109073;
  t110378 = -0.012786*t110166;
  t110380 = -0.007843*t110252;
  t111758 = 0.6*t110282;
  t110427 = -0.01464*t110166;
  t110430 = -0.003266*t110252;
  t110438 = -0.014907*t110166;
  t110439 = 0.001665*t110252;
  t110451 = -0.013559*t110166;
  t110453 = 0.006415*t110252;
  t110456 = -0.010742*t110166;
  t110457 = 0.01047*t110252;
  t110467 = -0.00676*t110166;
  t110468 = 0.01339*t110252;
  t110470 = -0.002046*t110166;
  t110473 = 0.01486*t110252;
  t110511 = 0.00289*t110166;
  t110512 = 0.014719*t110252;
  t110514 = 0.007513*t110166;
  t110515 = 0.012983*t110252;
  t110517 = 0.011321*t110166;
  t110518 = 0.00984*t110252;
  t110520 = 0.013903*t110166;
  t110521 = 0.005631*t110252;
  t110523 = 0.014978*t110166;
  t110562 = 0.000812*t110252;
  t110580 = 0.01443*t110166;
  t110581 = -0.004096*t110252;
  t110605 = 0.012318*t110166;
  t110606 = -0.008559*t110252;
  t110675 = 0.008872*t110166;
  t110693 = -0.012095*t110252;
  t110773 = 0.004464*t110166;
  t110786 = -0.01432*t110252;
  t110835 = -0.000428*t110166;
  t110842 = -0.014994*t110252;
  t110846 = -0.005273*t110166;
  t110847 = -0.014043*t110252;
  t111759 = var1[1] + t110155 + t110167 + t110205 + t110259 + t111758;
  t111099 = -0.012786*t110919;
  t111105 = -0.007843*t110994;
  t112034 = 0.6*t111054;
  t111109 = -0.01464*t110919;
  t111124 = -0.003266*t110994;
  t111147 = -0.014907*t110919;
  t111153 = 0.001665*t110994;
  t111158 = -0.013559*t110919;
  t111165 = 0.006415*t110994;
  t111175 = -0.010742*t110919;
  t111178 = 0.01047*t110994;
  t111184 = -0.00676*t110919;
  t111198 = 0.01339*t110994;
  t111204 = -0.002046*t110919;
  t111242 = 0.01486*t110994;
  t111257 = 0.00289*t110919;
  t111263 = 0.014719*t110994;
  t111288 = 0.007513*t110919;
  t111359 = 0.012983*t110994;
  t111367 = 0.011321*t110919;
  t111373 = 0.00984*t110994;
  t111378 = 0.013903*t110919;
  t111379 = 0.005631*t110994;
  t111382 = 0.014978*t110919;
  t111383 = 0.000812*t110994;
  t111385 = 0.01443*t110919;
  t111386 = -0.004096*t110994;
  t111389 = 0.012318*t110919;
  t111390 = -0.008559*t110994;
  t111407 = 0.008872*t110919;
  t111409 = -0.012095*t110994;
  t111432 = 0.004464*t110919;
  t111435 = -0.01432*t110994;
  t111440 = -0.000428*t110919;
  t111445 = -0.014994*t110994;
  t111449 = -0.005273*t110919;
  t111451 = -0.014043*t110994;
  t112035 = var1[2] + t110859 + t110949 + t110987 + t111000 + t112034;
  p_output1[0]=t109240;
  p_output1[1]=t108608 + t108816 + t108964 + t109258 + t109259 + var1[0];
  p_output1[2]=t108608 + t108816 + t108964 + t109289 + t109292 + var1[0];
  p_output1[3]=t108608 + t108816 + t108964 + t109316 + t109319 + var1[0];
  p_output1[4]=t108608 + t108816 + t108964 + t109321 + t109327 + var1[0];
  p_output1[5]=t108608 + t108816 + t108964 + t109332 + t109357 + var1[0];
  p_output1[6]=t108608 + t108816 + t108964 + t109360 + t109363 + var1[0];
  p_output1[7]=t108608 + t108816 + t108964 + t109375 + t109378 + var1[0];
  p_output1[8]=t108608 + t108816 + t108964 + t109392 + t109454 + var1[0];
  p_output1[9]=t108608 + t108816 + t108964 + t109459 + t109464 + var1[0];
  p_output1[10]=t108608 + t108816 + t108964 + t109469 + t109476 + var1[0];
  p_output1[11]=t108608 + t108816 + t108964 + t109512 + t109535 + var1[0];
  p_output1[12]=t108608 + t108816 + t108964 + t109610 + t109613 + var1[0];
  p_output1[13]=t108608 + t108816 + t108964 + t109746 + t109809 + var1[0];
  p_output1[14]=t108608 + t108816 + t108964 + t109821 + t109844 + var1[0];
  p_output1[15]=t108608 + t108816 + t108964 + t109855 + t109923 + var1[0];
  p_output1[16]=t108608 + t108816 + t108964 + t109980 + t110125 + var1[0];
  p_output1[17]=t108608 + t108816 + t108964 + t110133 + t110136 + var1[0];
  p_output1[18]=t108608 + t108816 + t108964 + t110140 + t110141 + var1[0];
  p_output1[19]=t109240;
  p_output1[20]=t110369;
  p_output1[21]=t110155 + t110205 + t110301 + t110378 + t110380 + var1[1];
  p_output1[22]=t110155 + t110205 + t110301 + t110427 + t110430 + var1[1];
  p_output1[23]=t110155 + t110205 + t110301 + t110438 + t110439 + var1[1];
  p_output1[24]=t110155 + t110205 + t110301 + t110451 + t110453 + var1[1];
  p_output1[25]=t110155 + t110205 + t110301 + t110456 + t110457 + var1[1];
  p_output1[26]=t110155 + t110205 + t110301 + t110467 + t110468 + var1[1];
  p_output1[27]=t110155 + t110205 + t110301 + t110470 + t110473 + var1[1];
  p_output1[28]=t110155 + t110205 + t110301 + t110511 + t110512 + var1[1];
  p_output1[29]=t110155 + t110205 + t110301 + t110514 + t110515 + var1[1];
  p_output1[30]=t110155 + t110205 + t110301 + t110517 + t110518 + var1[1];
  p_output1[31]=t110155 + t110205 + t110301 + t110520 + t110521 + var1[1];
  p_output1[32]=t110155 + t110205 + t110301 + t110523 + t110562 + var1[1];
  p_output1[33]=t110155 + t110205 + t110301 + t110580 + t110581 + var1[1];
  p_output1[34]=t110155 + t110205 + t110301 + t110605 + t110606 + var1[1];
  p_output1[35]=t110155 + t110205 + t110301 + t110675 + t110693 + var1[1];
  p_output1[36]=t110155 + t110205 + t110301 + t110773 + t110786 + var1[1];
  p_output1[37]=t110155 + t110205 + t110301 + t110835 + t110842 + var1[1];
  p_output1[38]=t110155 + t110205 + t110301 + t110846 + t110847 + var1[1];
  p_output1[39]=t110369;
  p_output1[40]=t111089;
  p_output1[41]=t110859 + t110987 + t111057 + t111099 + t111105 + var1[2];
  p_output1[42]=t110859 + t110987 + t111057 + t111109 + t111124 + var1[2];
  p_output1[43]=t110859 + t110987 + t111057 + t111147 + t111153 + var1[2];
  p_output1[44]=t110859 + t110987 + t111057 + t111158 + t111165 + var1[2];
  p_output1[45]=t110859 + t110987 + t111057 + t111175 + t111178 + var1[2];
  p_output1[46]=t110859 + t110987 + t111057 + t111184 + t111198 + var1[2];
  p_output1[47]=t110859 + t110987 + t111057 + t111204 + t111242 + var1[2];
  p_output1[48]=t110859 + t110987 + t111057 + t111257 + t111263 + var1[2];
  p_output1[49]=t110859 + t110987 + t111057 + t111288 + t111359 + var1[2];
  p_output1[50]=t110859 + t110987 + t111057 + t111367 + t111373 + var1[2];
  p_output1[51]=t110859 + t110987 + t111057 + t111378 + t111379 + var1[2];
  p_output1[52]=t110859 + t110987 + t111057 + t111382 + t111383 + var1[2];
  p_output1[53]=t110859 + t110987 + t111057 + t111385 + t111386 + var1[2];
  p_output1[54]=t110859 + t110987 + t111057 + t111389 + t111390 + var1[2];
  p_output1[55]=t110859 + t110987 + t111057 + t111407 + t111409 + var1[2];
  p_output1[56]=t110859 + t110987 + t111057 + t111432 + t111435 + var1[2];
  p_output1[57]=t110859 + t110987 + t111057 + t111440 + t111445 + var1[2];
  p_output1[58]=t110859 + t110987 + t111057 + t111449 + t111451 + var1[2];
  p_output1[59]=t111089;
  p_output1[60]=t111481;
  p_output1[61]=t108608 + t108816 + t109258 + t109259 + t111480 + var1[0];
  p_output1[62]=t108608 + t108816 + t109289 + t109292 + t111480 + var1[0];
  p_output1[63]=t108608 + t108816 + t109316 + t109319 + t111480 + var1[0];
  p_output1[64]=t108608 + t108816 + t109321 + t109327 + t111480 + var1[0];
  p_output1[65]=t108608 + t108816 + t109332 + t109357 + t111480 + var1[0];
  p_output1[66]=t108608 + t108816 + t109360 + t109363 + t111480 + var1[0];
  p_output1[67]=t108608 + t108816 + t109375 + t109378 + t111480 + var1[0];
  p_output1[68]=t108608 + t108816 + t109392 + t109454 + t111480 + var1[0];
  p_output1[69]=t108608 + t108816 + t109459 + t109464 + t111480 + var1[0];
  p_output1[70]=t108608 + t108816 + t109469 + t109476 + t111480 + var1[0];
  p_output1[71]=t108608 + t108816 + t109512 + t109535 + t111480 + var1[0];
  p_output1[72]=t108608 + t108816 + t109610 + t109613 + t111480 + var1[0];
  p_output1[73]=t108608 + t108816 + t109746 + t109809 + t111480 + var1[0];
  p_output1[74]=t108608 + t108816 + t109821 + t109844 + t111480 + var1[0];
  p_output1[75]=t108608 + t108816 + t109855 + t109923 + t111480 + var1[0];
  p_output1[76]=t108608 + t108816 + t109980 + t110125 + t111480 + var1[0];
  p_output1[77]=t108608 + t108816 + t110133 + t110136 + t111480 + var1[0];
  p_output1[78]=t108608 + t108816 + t110140 + t110141 + t111480 + var1[0];
  p_output1[79]=t111481;
  p_output1[80]=t111759;
  p_output1[81]=t110155 + t110205 + t110378 + t110380 + t111758 + var1[1];
  p_output1[82]=t110155 + t110205 + t110427 + t110430 + t111758 + var1[1];
  p_output1[83]=t110155 + t110205 + t110438 + t110439 + t111758 + var1[1];
  p_output1[84]=t110155 + t110205 + t110451 + t110453 + t111758 + var1[1];
  p_output1[85]=t110155 + t110205 + t110456 + t110457 + t111758 + var1[1];
  p_output1[86]=t110155 + t110205 + t110467 + t110468 + t111758 + var1[1];
  p_output1[87]=t110155 + t110205 + t110470 + t110473 + t111758 + var1[1];
  p_output1[88]=t110155 + t110205 + t110511 + t110512 + t111758 + var1[1];
  p_output1[89]=t110155 + t110205 + t110514 + t110515 + t111758 + var1[1];
  p_output1[90]=t110155 + t110205 + t110517 + t110518 + t111758 + var1[1];
  p_output1[91]=t110155 + t110205 + t110520 + t110521 + t111758 + var1[1];
  p_output1[92]=t110155 + t110205 + t110523 + t110562 + t111758 + var1[1];
  p_output1[93]=t110155 + t110205 + t110580 + t110581 + t111758 + var1[1];
  p_output1[94]=t110155 + t110205 + t110605 + t110606 + t111758 + var1[1];
  p_output1[95]=t110155 + t110205 + t110675 + t110693 + t111758 + var1[1];
  p_output1[96]=t110155 + t110205 + t110773 + t110786 + t111758 + var1[1];
  p_output1[97]=t110155 + t110205 + t110835 + t110842 + t111758 + var1[1];
  p_output1[98]=t110155 + t110205 + t110846 + t110847 + t111758 + var1[1];
  p_output1[99]=t111759;
  p_output1[100]=t112035;
  p_output1[101]=t110859 + t110987 + t111099 + t111105 + t112034 + var1[2];
  p_output1[102]=t110859 + t110987 + t111109 + t111124 + t112034 + var1[2];
  p_output1[103]=t110859 + t110987 + t111147 + t111153 + t112034 + var1[2];
  p_output1[104]=t110859 + t110987 + t111158 + t111165 + t112034 + var1[2];
  p_output1[105]=t110859 + t110987 + t111175 + t111178 + t112034 + var1[2];
  p_output1[106]=t110859 + t110987 + t111184 + t111198 + t112034 + var1[2];
  p_output1[107]=t110859 + t110987 + t111204 + t111242 + t112034 + var1[2];
  p_output1[108]=t110859 + t110987 + t111257 + t111263 + t112034 + var1[2];
  p_output1[109]=t110859 + t110987 + t111288 + t111359 + t112034 + var1[2];
  p_output1[110]=t110859 + t110987 + t111367 + t111373 + t112034 + var1[2];
  p_output1[111]=t110859 + t110987 + t111378 + t111379 + t112034 + var1[2];
  p_output1[112]=t110859 + t110987 + t111382 + t111383 + t112034 + var1[2];
  p_output1[113]=t110859 + t110987 + t111385 + t111386 + t112034 + var1[2];
  p_output1[114]=t110859 + t110987 + t111389 + t111390 + t112034 + var1[2];
  p_output1[115]=t110859 + t110987 + t111407 + t111409 + t112034 + var1[2];
  p_output1[116]=t110859 + t110987 + t111432 + t111435 + t112034 + var1[2];
  p_output1[117]=t110859 + t110987 + t111440 + t111445 + t112034 + var1[2];
  p_output1[118]=t110859 + t110987 + t111449 + t111451 + t112034 + var1[2];
  p_output1[119]=t112035;
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
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

#include "tail_link_bar.hh"

namespace SymFunction
{

void tail_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
