/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:45 GMT-04:00
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
  double t14;
  double t1755;
  double t1770;
  double t1825;
  double t2202;
  double t517;
  double t2511;
  double t488;
  double t3052;
  double t2477;
  double t3310;
  double t3386;
  double t3400;
  double t3559;
  double t3560;
  double t3563;
  double t518;
  double t1569;
  double t1590;
  double t1676;
  double t1892;
  double t2454;
  double t2472;
  double t2502;
  double t3076;
  double t3120;
  double t3191;
  double t3307;
  double t3308;
  double t3481;
  double t3497;
  double t3512;
  double t3558;
  double t3564;
  double t3567;
  double t3569;
  double t3572;
  double t3578;
  double t3594;
  double t3624;
  double t3633;
  double t3641;
  double t3643;
  double t3644;
  double t3649;
  double t3666;
  double t3669;
  double t3681;
  double t3719;
  double t3730;
  double t3751;
  double t3632;
  double t3781;
  double t3784;
  double t5998;
  double t5995;
  double t5996;
  double t6000;
  double t6013;
  double t6034;
  double t6035;
  double t6047;
  double t6062;
  double t6067;
  double t6068;
  double t6073;
  double t6074;
  double t6075;
  double t6028;
  double t6056;
  double t6061;
  double t6069;
  double t6091;
  double t6104;
  double t6130;
  double t6138;
  double t6140;
  double t6156;
  double t6157;
  double t6160;
  double t6164;
  double t6168;
  double t6172;
  double t6179;
  double t6180;
  double t6203;
  double t6151;
  double t6206;
  double t6219;
  double t6404;
  double t6405;
  double t6406;
  double t6416;
  double t6430;
  double t6431;
  double t6446;
  double t6447;
  double t6461;
  double t6469;
  double t6470;
  double t6471;
  double t6412;
  double t6443;
  double t6444;
  double t6464;
  double t6481;
  double t6490;
  double t6501;
  double t6518;
  double t6520;
  double t6526;
  double t6527;
  double t6554;
  double t6558;
  double t6560;
  double t6562;
  double t6564;
  double t6608;
  double t6610;
  double t6523;
  double t6616;
  double t6617;
  double t3786;
  double t7296;
  double t7302;
  double t7306;
  double t7309;
  double t7311;
  double t3808;
  double t3874;
  double t3924;
  double t3960;
  double t4019;
  double t5017;
  double t5112;
  double t5175;
  double t5193;
  double t5377;
  double t5478;
  double t5839;
  double t5901;
  double t5930;
  double t5938;
  double t5939;
  double t5951;
  double t5953;
  double t5958;
  double t5962;
  double t5971;
  double t5987;
  double t5992;
  double t7293;
  double t7315;
  double t8609;
  double t8611;
  double t8625;
  double t8626;
  double t8627;
  double t6232;
  double t6247;
  double t6249;
  double t6258;
  double t6261;
  double t6264;
  double t6274;
  double t6275;
  double t6278;
  double t6283;
  double t6292;
  double t6308;
  double t6314;
  double t6320;
  double t6337;
  double t6345;
  double t6346;
  double t6350;
  double t6352;
  double t6360;
  double t6365;
  double t6369;
  double t6383;
  double t6396;
  double t8596;
  double t8633;
  double t8770;
  double t8772;
  double t8778;
  double t8779;
  double t8785;
  double t6648;
  double t6651;
  double t6655;
  double t6674;
  double t6676;
  double t6684;
  double t6690;
  double t6725;
  double t6763;
  double t6803;
  double t6864;
  double t6900;
  double t6940;
  double t6982;
  double t6997;
  double t7013;
  double t7028;
  double t7046;
  double t7060;
  double t7125;
  double t7126;
  double t7262;
  double t7269;
  double t7284;
  double t8761;
  double t8792;
  t14 = Cos(var1[4]);
  t1755 = Cos(var1[9]);
  t1770 = -1.*t1755;
  t1825 = 1. + t1770;
  t2202 = Sin(var1[9]);
  t517 = Cos(var1[7]);
  t2511 = Sin(var1[4]);
  t488 = Cos(var1[5]);
  t3052 = Sin(var1[7]);
  t2477 = Sin(var1[5]);
  t3310 = t517*t2511;
  t3386 = t14*t488*t3052;
  t3400 = t3310 + t3386;
  t3559 = t14*t488*t517;
  t3560 = -1.*t2511*t3052;
  t3563 = t3559 + t3560;
  t518 = -1.*t517;
  t1569 = 1. + t518;
  t1590 = 0.225*t14*t488*t1569;
  t1676 = -3.25e-7*var1[9];
  t1892 = 3.000000000027e-7*t1825;
  t2454 = -6.75000000009e-7*t2202;
  t2472 = t1676 + t1892 + t2454;
  t2502 = -1.*t14*t2472*t2477;
  t3076 = 0.225*t2511*t3052;
  t3120 = 9.75e-13*var1[9];
  t3191 = 0.1000000000009*t1825;
  t3307 = -0.225000000003*t2202;
  t3308 = t3120 + t3191 + t3307;
  t3481 = t3308*t3400;
  t3497 = 0.225000000005025*t1825;
  t3512 = 0.1000000000009*t2202;
  t3558 = t3497 + t3512;
  t3564 = t3558*t3563;
  t3567 = -3.e-6*t14*t2202*t2477;
  t3569 = t2202*t3400;
  t3572 = -1.000000000009*t1825;
  t3578 = 1. + t3572;
  t3594 = t3578*t3563;
  t3624 = t3567 + t3569 + t3594;
  t3633 = 3.e-6*t1825*t14*t2477;
  t3641 = t1755*t3400;
  t3643 = -1.*t2202*t3563;
  t3644 = t3633 + t3641 + t3643;
  t3649 = 0.1*t3644;
  t3666 = -9.e-12*t1825;
  t3669 = 1. + t3666;
  t3681 = -1.*t3669*t14*t2477;
  t3719 = -3.e-6*t1825*t3400;
  t3730 = -3.e-6*t2202*t3563;
  t3751 = t3681 + t3719 + t3730;
  t3632 = 0.210519*t3624;
  t3781 = 0.133912*t3751;
  t3784 = var1[0] + t1590 + t2502 + t3076 + t3481 + t3564 + t3632 + t3649 + t3781;
  t5998 = Cos(var1[3]);
  t5995 = Sin(var1[3]);
  t5996 = t488*t5995*t2511;
  t6000 = t5998*t2477;
  t6013 = t5996 + t6000;
  t6034 = t5998*t488;
  t6035 = -1.*t5995*t2511*t2477;
  t6047 = t6034 + t6035;
  t6062 = t517*t6013;
  t6067 = t14*t5995*t3052;
  t6068 = t6062 + t6067;
  t6073 = -1.*t14*t517*t5995;
  t6074 = t6013*t3052;
  t6075 = t6073 + t6074;
  t6028 = 0.225*t1569*t6013;
  t6056 = t2472*t6047;
  t6061 = -0.225*t14*t5995*t3052;
  t6069 = t3558*t6068;
  t6091 = t3308*t6075;
  t6104 = t3669*t6047;
  t6130 = -3.e-6*t2202*t6068;
  t6138 = -3.e-6*t1825*t6075;
  t6140 = t6104 + t6130 + t6138;
  t6156 = -3.e-6*t1825*t6047;
  t6157 = -1.*t2202*t6068;
  t6160 = t1755*t6075;
  t6164 = t6156 + t6157 + t6160;
  t6168 = 0.1*t6164;
  t6172 = 3.e-6*t2202*t6047;
  t6179 = t3578*t6068;
  t6180 = t2202*t6075;
  t6203 = t6172 + t6179 + t6180;
  t6151 = 0.133912*t6140;
  t6206 = 0.210519*t6203;
  t6219 = var1[1] + t6028 + t6056 + t6061 + t6069 + t6091 + t6151 + t6168 + t6206;
  t6404 = -1.*t5998*t488*t2511;
  t6405 = t5995*t2477;
  t6406 = t6404 + t6405;
  t6416 = t488*t5995;
  t6430 = t5998*t2511*t2477;
  t6431 = t6416 + t6430;
  t6446 = t517*t6406;
  t6447 = -1.*t5998*t14*t3052;
  t6461 = t6446 + t6447;
  t6469 = t5998*t14*t517;
  t6470 = t6406*t3052;
  t6471 = t6469 + t6470;
  t6412 = 0.225*t1569*t6406;
  t6443 = t2472*t6431;
  t6444 = 0.225*t5998*t14*t3052;
  t6464 = t3558*t6461;
  t6481 = t3308*t6471;
  t6490 = t3669*t6431;
  t6501 = -3.e-6*t2202*t6461;
  t6518 = -3.e-6*t1825*t6471;
  t6520 = t6490 + t6501 + t6518;
  t6526 = -3.e-6*t1825*t6431;
  t6527 = -1.*t2202*t6461;
  t6554 = t1755*t6471;
  t6558 = t6526 + t6527 + t6554;
  t6560 = 0.1*t6558;
  t6562 = 3.e-6*t2202*t6431;
  t6564 = t3578*t6461;
  t6608 = t2202*t6471;
  t6610 = t6562 + t6564 + t6608;
  t6523 = 0.133912*t6520;
  t6616 = 0.210519*t6610;
  t6617 = var1[2] + t6412 + t6443 + t6444 + t6464 + t6481 + t6523 + t6560 + t6616;
  t3786 = 0.212574*t3624;
  t7296 = -3.e-6*t1825*t14*t2477;
  t7302 = -1.*t1755*t3400;
  t7306 = t2202*t3563;
  t7309 = t7296 + t7302 + t7306;
  t7311 = 0.1*t7309;
  t3808 = 0.215975*t3624;
  t3874 = 0.141981*t3751;
  t3924 = 0.220354*t3624;
  t3960 = 0.225237*t3624;
  t4019 = 0.144998*t3751;
  t5017 = 0.230094*t3624;
  t5112 = 0.144108*t3751;
  t5175 = 0.234399*t3624;
  t5193 = 0.237686*t3624;
  t5377 = 0.239597*t3624;
  t5478 = 0.239927*t3624;
  t5839 = 0.23864*t3624;
  t5901 = 0.235874*t3624;
  t5930 = 0.23193*t3624;
  t5938 = 0.227235*t3624;
  t5939 = 0.115167*t3751;
  t5951 = 0.222297*t3624;
  t5953 = 0.115245*t3751;
  t5958 = 0.217653*t3624;
  t5962 = 0.116922*t3751;
  t5971 = 0.213805*t3624;
  t5987 = 0.21117*t3624;
  t5992 = 0.210034*t3624;
  t7293 = 0.133911*t3751;
  t7315 = var1[0] + t1590 + t2502 + t3076 + t3481 + t3564 + t3632 + t7293 + t7311;
  t8609 = 3.e-6*t1825*t6047;
  t8611 = t2202*t6068;
  t8625 = -1.*t1755*t6075;
  t8626 = t8609 + t8611 + t8625;
  t8627 = 0.1*t8626;
  t6232 = 0.212574*t6203;
  t6247 = 0.141981*t6140;
  t6249 = 0.215975*t6203;
  t6258 = 0.220354*t6203;
  t6261 = 0.144998*t6140;
  t6264 = 0.225237*t6203;
  t6274 = 0.144108*t6140;
  t6275 = 0.230094*t6203;
  t6278 = 0.234399*t6203;
  t6283 = 0.237686*t6203;
  t6292 = 0.239597*t6203;
  t6308 = 0.239927*t6203;
  t6314 = 0.23864*t6203;
  t6320 = 0.235874*t6203;
  t6337 = 0.23193*t6203;
  t6345 = 0.115167*t6140;
  t6346 = 0.227235*t6203;
  t6350 = 0.115245*t6140;
  t6352 = 0.222297*t6203;
  t6360 = 0.116922*t6140;
  t6365 = 0.217653*t6203;
  t6369 = 0.213805*t6203;
  t6383 = 0.21117*t6203;
  t6396 = 0.210034*t6203;
  t8596 = 0.133911*t6140;
  t8633 = var1[1] + t6028 + t6056 + t6061 + t6069 + t6091 + t8596 + t8627 + t6206;
  t8770 = 3.e-6*t1825*t6431;
  t8772 = t2202*t6461;
  t8778 = -1.*t1755*t6471;
  t8779 = t8770 + t8772 + t8778;
  t8785 = 0.1*t8779;
  t6648 = 0.212574*t6610;
  t6651 = 0.141981*t6520;
  t6655 = 0.215975*t6610;
  t6674 = 0.220354*t6610;
  t6676 = 0.144998*t6520;
  t6684 = 0.225237*t6610;
  t6690 = 0.144108*t6520;
  t6725 = 0.230094*t6610;
  t6763 = 0.234399*t6610;
  t6803 = 0.237686*t6610;
  t6864 = 0.239597*t6610;
  t6900 = 0.239927*t6610;
  t6940 = 0.23864*t6610;
  t6982 = 0.235874*t6610;
  t6997 = 0.23193*t6610;
  t7013 = 0.115167*t6520;
  t7028 = 0.227235*t6610;
  t7046 = 0.115245*t6520;
  t7060 = 0.222297*t6610;
  t7125 = 0.116922*t6520;
  t7126 = 0.217653*t6610;
  t7262 = 0.213805*t6610;
  t7269 = 0.21117*t6610;
  t7284 = 0.210034*t6610;
  t8761 = 0.133911*t6520;
  t8792 = var1[2] + t6412 + t6443 + t6444 + t6464 + t6481 + t8761 + t8785 + t6616;
  p_output1[0]=t3784;
  p_output1[1]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.138402*t3751 + t3786 + var1[0];
  p_output1[2]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + t3808 + t3874 + var1[0];
  p_output1[3]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.144263*t3751 + t3924 + var1[0];
  p_output1[4]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + t3960 + t4019 + var1[0];
  p_output1[5]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + t5017 + t5112 + var1[0];
  p_output1[6]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.14169*t3751 + t5175 + var1[0];
  p_output1[7]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.138005*t3751 + t5193 + var1[0];
  p_output1[8]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.133452*t3751 + t5377 + var1[0];
  p_output1[9]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.128525*t3751 + t5478 + var1[0];
  p_output1[10]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.123758*t3751 + t5839 + var1[0];
  p_output1[11]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.119668*t3751 + t5901 + var1[0];
  p_output1[12]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.116697*t3751 + t5930 + var1[0];
  p_output1[13]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + t5938 + t5939 + var1[0];
  p_output1[14]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + t5951 + t5953 + var1[0];
  p_output1[15]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + t5958 + t5962 + var1[0];
  p_output1[16]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.120017*t3751 + t5971 + var1[0];
  p_output1[17]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.124193*t3751 + t5987 + var1[0];
  p_output1[18]=t1590 + t2502 + t3076 + t3481 + t3564 + t3649 + 0.128998*t3751 + t5992 + var1[0];
  p_output1[19]=t3784;
  p_output1[20]=t6219;
  p_output1[21]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.138402*t6140 + t6168 + t6232 + var1[1];
  p_output1[22]=t6028 + t6056 + t6061 + t6069 + t6091 + t6168 + t6247 + t6249 + var1[1];
  p_output1[23]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.144263*t6140 + t6168 + t6258 + var1[1];
  p_output1[24]=t6028 + t6056 + t6061 + t6069 + t6091 + t6168 + t6261 + t6264 + var1[1];
  p_output1[25]=t6028 + t6056 + t6061 + t6069 + t6091 + t6168 + t6274 + t6275 + var1[1];
  p_output1[26]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.14169*t6140 + t6168 + t6278 + var1[1];
  p_output1[27]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.138005*t6140 + t6168 + t6283 + var1[1];
  p_output1[28]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.133452*t6140 + t6168 + t6292 + var1[1];
  p_output1[29]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.128525*t6140 + t6168 + t6308 + var1[1];
  p_output1[30]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.123758*t6140 + t6168 + t6314 + var1[1];
  p_output1[31]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.119668*t6140 + t6168 + t6320 + var1[1];
  p_output1[32]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.116697*t6140 + t6168 + t6337 + var1[1];
  p_output1[33]=t6028 + t6056 + t6061 + t6069 + t6091 + t6168 + t6345 + t6346 + var1[1];
  p_output1[34]=t6028 + t6056 + t6061 + t6069 + t6091 + t6168 + t6350 + t6352 + var1[1];
  p_output1[35]=t6028 + t6056 + t6061 + t6069 + t6091 + t6168 + t6360 + t6365 + var1[1];
  p_output1[36]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.120017*t6140 + t6168 + t6369 + var1[1];
  p_output1[37]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.124193*t6140 + t6168 + t6383 + var1[1];
  p_output1[38]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.128998*t6140 + t6168 + t6396 + var1[1];
  p_output1[39]=t6219;
  p_output1[40]=t6617;
  p_output1[41]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.138402*t6520 + t6560 + t6648 + var1[2];
  p_output1[42]=t6412 + t6443 + t6444 + t6464 + t6481 + t6560 + t6651 + t6655 + var1[2];
  p_output1[43]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.144263*t6520 + t6560 + t6674 + var1[2];
  p_output1[44]=t6412 + t6443 + t6444 + t6464 + t6481 + t6560 + t6676 + t6684 + var1[2];
  p_output1[45]=t6412 + t6443 + t6444 + t6464 + t6481 + t6560 + t6690 + t6725 + var1[2];
  p_output1[46]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.14169*t6520 + t6560 + t6763 + var1[2];
  p_output1[47]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.138005*t6520 + t6560 + t6803 + var1[2];
  p_output1[48]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.133452*t6520 + t6560 + t6864 + var1[2];
  p_output1[49]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.128525*t6520 + t6560 + t6900 + var1[2];
  p_output1[50]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.123758*t6520 + t6560 + t6940 + var1[2];
  p_output1[51]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.119668*t6520 + t6560 + t6982 + var1[2];
  p_output1[52]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.116697*t6520 + t6560 + t6997 + var1[2];
  p_output1[53]=t6412 + t6443 + t6444 + t6464 + t6481 + t6560 + t7013 + t7028 + var1[2];
  p_output1[54]=t6412 + t6443 + t6444 + t6464 + t6481 + t6560 + t7046 + t7060 + var1[2];
  p_output1[55]=t6412 + t6443 + t6444 + t6464 + t6481 + t6560 + t7125 + t7126 + var1[2];
  p_output1[56]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.120017*t6520 + t6560 + t7262 + var1[2];
  p_output1[57]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.124193*t6520 + t6560 + t7269 + var1[2];
  p_output1[58]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.128998*t6520 + t6560 + t7284 + var1[2];
  p_output1[59]=t6617;
  p_output1[60]=t7315;
  p_output1[61]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.138401*t3751 + t3786 + t7311 + var1[0];
  p_output1[62]=t1590 + t2502 + t3076 + t3481 + t3564 + t3808 + t3874 + t7311 + var1[0];
  p_output1[63]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.144262*t3751 + t3924 + t7311 + var1[0];
  p_output1[64]=t1590 + t2502 + t3076 + t3481 + t3564 + t3960 + t4019 + t7311 + var1[0];
  p_output1[65]=t1590 + t2502 + t3076 + t3481 + t3564 + t5017 + t5112 + t7311 + var1[0];
  p_output1[66]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.141689*t3751 + t5175 + t7311 + var1[0];
  p_output1[67]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.138004*t3751 + t5193 + t7311 + var1[0];
  p_output1[68]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.133451*t3751 + t5377 + t7311 + var1[0];
  p_output1[69]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.128524*t3751 + t5478 + t7311 + var1[0];
  p_output1[70]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.123757*t3751 + t5839 + t7311 + var1[0];
  p_output1[71]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.119667*t3751 + t5901 + t7311 + var1[0];
  p_output1[72]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.116696*t3751 + t5930 + t7311 + var1[0];
  p_output1[73]=t1590 + t2502 + t3076 + t3481 + t3564 + t5938 + t5939 + t7311 + var1[0];
  p_output1[74]=t1590 + t2502 + t3076 + t3481 + t3564 + t5951 + t5953 + t7311 + var1[0];
  p_output1[75]=t1590 + t2502 + t3076 + t3481 + t3564 + t5958 + t5962 + t7311 + var1[0];
  p_output1[76]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.120016*t3751 + t5971 + t7311 + var1[0];
  p_output1[77]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.124192*t3751 + t5987 + t7311 + var1[0];
  p_output1[78]=t1590 + t2502 + t3076 + t3481 + t3564 + 0.128997*t3751 + t5992 + t7311 + var1[0];
  p_output1[79]=t7315;
  p_output1[80]=t8633;
  p_output1[81]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.138401*t6140 + t6232 + t8627 + var1[1];
  p_output1[82]=t6028 + t6056 + t6061 + t6069 + t6091 + t6247 + t6249 + t8627 + var1[1];
  p_output1[83]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.144262*t6140 + t6258 + t8627 + var1[1];
  p_output1[84]=t6028 + t6056 + t6061 + t6069 + t6091 + t6261 + t6264 + t8627 + var1[1];
  p_output1[85]=t6028 + t6056 + t6061 + t6069 + t6091 + t6274 + t6275 + t8627 + var1[1];
  p_output1[86]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.141689*t6140 + t6278 + t8627 + var1[1];
  p_output1[87]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.138004*t6140 + t6283 + t8627 + var1[1];
  p_output1[88]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.133451*t6140 + t6292 + t8627 + var1[1];
  p_output1[89]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.128524*t6140 + t6308 + t8627 + var1[1];
  p_output1[90]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.123757*t6140 + t6314 + t8627 + var1[1];
  p_output1[91]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.119667*t6140 + t6320 + t8627 + var1[1];
  p_output1[92]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.116696*t6140 + t6337 + t8627 + var1[1];
  p_output1[93]=t6028 + t6056 + t6061 + t6069 + t6091 + t6345 + t6346 + t8627 + var1[1];
  p_output1[94]=t6028 + t6056 + t6061 + t6069 + t6091 + t6350 + t6352 + t8627 + var1[1];
  p_output1[95]=t6028 + t6056 + t6061 + t6069 + t6091 + t6360 + t6365 + t8627 + var1[1];
  p_output1[96]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.120016*t6140 + t6369 + t8627 + var1[1];
  p_output1[97]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.124192*t6140 + t6383 + t8627 + var1[1];
  p_output1[98]=t6028 + t6056 + t6061 + t6069 + t6091 + 0.128997*t6140 + t6396 + t8627 + var1[1];
  p_output1[99]=t8633;
  p_output1[100]=t8792;
  p_output1[101]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.138401*t6520 + t6648 + t8785 + var1[2];
  p_output1[102]=t6412 + t6443 + t6444 + t6464 + t6481 + t6651 + t6655 + t8785 + var1[2];
  p_output1[103]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.144262*t6520 + t6674 + t8785 + var1[2];
  p_output1[104]=t6412 + t6443 + t6444 + t6464 + t6481 + t6676 + t6684 + t8785 + var1[2];
  p_output1[105]=t6412 + t6443 + t6444 + t6464 + t6481 + t6690 + t6725 + t8785 + var1[2];
  p_output1[106]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.141689*t6520 + t6763 + t8785 + var1[2];
  p_output1[107]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.138004*t6520 + t6803 + t8785 + var1[2];
  p_output1[108]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.133451*t6520 + t6864 + t8785 + var1[2];
  p_output1[109]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.128524*t6520 + t6900 + t8785 + var1[2];
  p_output1[110]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.123757*t6520 + t6940 + t8785 + var1[2];
  p_output1[111]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.119667*t6520 + t6982 + t8785 + var1[2];
  p_output1[112]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.116696*t6520 + t6997 + t8785 + var1[2];
  p_output1[113]=t6412 + t6443 + t6444 + t6464 + t6481 + t7013 + t7028 + t8785 + var1[2];
  p_output1[114]=t6412 + t6443 + t6444 + t6464 + t6481 + t7046 + t7060 + t8785 + var1[2];
  p_output1[115]=t6412 + t6443 + t6444 + t6464 + t6481 + t7125 + t7126 + t8785 + var1[2];
  p_output1[116]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.120016*t6520 + t7262 + t8785 + var1[2];
  p_output1[117]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.124192*t6520 + t7269 + t8785 + var1[2];
  p_output1[118]=t6412 + t6443 + t6444 + t6464 + t6481 + 0.128997*t6520 + t7284 + t8785 + var1[2];
  p_output1[119]=t8792;
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
    ( !(mrows == 25 && ncols == 1) && 
      !(mrows == 1 && ncols == 25))) 
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

#include "lower_leg_front_leftR_link_bar.hh"

namespace SymFunction
{

void lower_leg_front_leftR_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
