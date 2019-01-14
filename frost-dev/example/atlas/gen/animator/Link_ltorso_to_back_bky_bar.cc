/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:43 GMT-06:00
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
  double t1611;
  double t2438;
  double t3007;
  double t2239;
  double t3018;
  double t2961;
  double t2998;
  double t3023;
  double t3032;
  double t3044;
  double t3163;
  double t3318;
  double t3342;
  double t3346;
  double t3180;
  double t3351;
  double t3364;
  double t3786;
  double t3777;
  double t3778;
  double t3809;
  double t3810;
  double t3818;
  double t3779;
  double t3789;
  double t3791;
  double t3808;
  double t3823;
  double t3839;
  double t3840;
  double t3846;
  double t3848;
  double t3849;
  double t3850;
  double t3847;
  double t3857;
  double t3859;
  double t4098;
  double t4101;
  double t4104;
  double t4084;
  double t4087;
  double t4091;
  double t4092;
  double t4108;
  double t4125;
  double t4127;
  double t4131;
  double t4144;
  double t4145;
  double t4153;
  double t4142;
  double t4155;
  double t4163;
  double t4315;
  double t3412;
  double t3413;
  double t3427;
  double t3458;
  double t3508;
  double t3515;
  double t3518;
  double t3519;
  double t3525;
  double t3530;
  double t3534;
  double t3535;
  double t3545;
  double t3546;
  double t3551;
  double t3553;
  double t3559;
  double t3574;
  double t3607;
  double t3618;
  double t3646;
  double t3661;
  double t3675;
  double t3677;
  double t3691;
  double t3692;
  double t3702;
  double t3712;
  double t3714;
  double t3723;
  double t3728;
  double t3729;
  double t3742;
  double t3745;
  double t3762;
  double t3763;
  double t4317;
  double t4361;
  double t3860;
  double t3861;
  double t3869;
  double t3871;
  double t3882;
  double t3883;
  double t3902;
  double t3905;
  double t3917;
  double t3919;
  double t3936;
  double t3937;
  double t3948;
  double t3954;
  double t3970;
  double t3973;
  double t3982;
  double t3986;
  double t3991;
  double t4000;
  double t4005;
  double t4006;
  double t4010;
  double t4013;
  double t4019;
  double t4020;
  double t4026;
  double t4027;
  double t4035;
  double t4042;
  double t4048;
  double t4051;
  double t4067;
  double t4071;
  double t4077;
  double t4081;
  double t4363;
  double t4512;
  double t4167;
  double t4169;
  double t4176;
  double t4182;
  double t4192;
  double t4193;
  double t4196;
  double t4205;
  double t4207;
  double t4211;
  double t4214;
  double t4216;
  double t4221;
  double t4224;
  double t4234;
  double t4236;
  double t4243;
  double t4246;
  double t4251;
  double t4257;
  double t4262;
  double t4263;
  double t4265;
  double t4267;
  double t4271;
  double t4275;
  double t4284;
  double t4287;
  double t4293;
  double t4300;
  double t4303;
  double t4304;
  double t4308;
  double t4309;
  double t4312;
  double t4313;
  double t4527;
  t1611 = Cos(var1[4]);
  t2438 = Cos(var1[8]);
  t3007 = Sin(var1[5]);
  t2239 = Cos(var1[5]);
  t3018 = Sin(var1[8]);
  t2961 = -1. + t2438;
  t2998 = 0.0125*t1611*t2239*t2961;
  t3023 = -0.0125*t1611*t3007*t3018;
  t3032 = -1.*t1611*t2438*t3007;
  t3044 = -1.*t1611*t2239*t3018;
  t3163 = t3032 + t3044;
  t3318 = t1611*t2239*t2438;
  t3342 = -1.*t1611*t3007*t3018;
  t3346 = t3318 + t3342;
  t3180 = -0.008538*t3163;
  t3351 = -0.024833*t3346;
  t3364 = var1[0] + t2998 + t3023 + t3180 + t3351;
  t3786 = Cos(var1[3]);
  t3777 = Sin(var1[3]);
  t3778 = Sin(var1[4]);
  t3809 = t3786*t2239;
  t3810 = -1.*t3777*t3778*t3007;
  t3818 = t3809 + t3810;
  t3779 = t2239*t3777*t3778;
  t3789 = t3786*t3007;
  t3791 = t3779 + t3789;
  t3808 = 0.0125*t2961*t3791;
  t3823 = 0.0125*t3818*t3018;
  t3839 = t2438*t3818;
  t3840 = -1.*t3791*t3018;
  t3846 = t3839 + t3840;
  t3848 = t2438*t3791;
  t3849 = t3818*t3018;
  t3850 = t3848 + t3849;
  t3847 = -0.008538*t3846;
  t3857 = -0.024833*t3850;
  t3859 = var1[1] + t3808 + t3823 + t3847 + t3857;
  t4098 = t2239*t3777;
  t4101 = t3786*t3778*t3007;
  t4104 = t4098 + t4101;
  t4084 = -1.*t3786*t2239*t3778;
  t4087 = t3777*t3007;
  t4091 = t4084 + t4087;
  t4092 = 0.0125*t2961*t4091;
  t4108 = 0.0125*t4104*t3018;
  t4125 = t2438*t4104;
  t4127 = -1.*t4091*t3018;
  t4131 = t4125 + t4127;
  t4144 = t2438*t4091;
  t4145 = t4104*t3018;
  t4153 = t4144 + t4145;
  t4142 = -0.008538*t4131;
  t4155 = -0.024833*t4153;
  t4163 = var1[2] + t4092 + t4108 + t4142 + t4155;
  t4315 = 0.16197*t3778;
  t3412 = -0.01208*t3163;
  t3413 = -0.021392*t3346;
  t3427 = -0.014313*t3163;
  t3458 = -0.016988*t3346;
  t3508 = -0.014995*t3163;
  t3515 = -0.012097*t3346;
  t3518 = -0.014051*t3163;
  t3519 = -0.00725*t3346;
  t3525 = -0.011586*t3163;
  t3530 = -0.002972*t3346;
  t3534 = -0.007864*t3163;
  t3535 = 0.000273*t3346;
  t3545 = -0.003291*t3163;
  t3546 = 0.002135*t3346;
  t3551 = 0.00164*t3163;
  t3553 = 0.00241*t3346;
  t3559 = 0.006392*t3163;
  t3574 = 0.00107*t3346;
  t3607 = 0.010452*t3163;
  t3618 = -0.001741*t3346;
  t3646 = 0.013379*t3163;
  t3661 = -0.005717*t3346;
  t3675 = 0.014856*t3163;
  t3677 = -0.010429*t3346;
  t3691 = 0.014724*t3163;
  t3692 = -0.015365*t3346;
  t3702 = 0.012996*t3163;
  t3712 = -0.019991*t3346;
  t3714 = 0.009859*t3163;
  t3723 = -0.023805*t3346;
  t3728 = 0.005655*t3163;
  t3729 = -0.026393*t3346;
  t3742 = 0.000837*t3163;
  t3745 = -0.027477*t3346;
  t3762 = -0.004071*t3163;
  t3763 = -0.026937*t3346;
  t4317 = var1[0] + t2998 + t4315 + t3023 + t3180 + t3351;
  t4361 = -0.16197*t1611*t3777;
  t3860 = -0.01208*t3846;
  t3861 = -0.021392*t3850;
  t3869 = -0.014313*t3846;
  t3871 = -0.016988*t3850;
  t3882 = -0.014995*t3846;
  t3883 = -0.012097*t3850;
  t3902 = -0.014051*t3846;
  t3905 = -0.00725*t3850;
  t3917 = -0.011586*t3846;
  t3919 = -0.002972*t3850;
  t3936 = -0.007864*t3846;
  t3937 = 0.000273*t3850;
  t3948 = -0.003291*t3846;
  t3954 = 0.002135*t3850;
  t3970 = 0.00164*t3846;
  t3973 = 0.00241*t3850;
  t3982 = 0.006392*t3846;
  t3986 = 0.00107*t3850;
  t3991 = 0.010452*t3846;
  t4000 = -0.001741*t3850;
  t4005 = 0.013379*t3846;
  t4006 = -0.005717*t3850;
  t4010 = 0.014856*t3846;
  t4013 = -0.010429*t3850;
  t4019 = 0.014724*t3846;
  t4020 = -0.015365*t3850;
  t4026 = 0.012996*t3846;
  t4027 = -0.019991*t3850;
  t4035 = 0.009859*t3846;
  t4042 = -0.023805*t3850;
  t4048 = 0.005655*t3846;
  t4051 = -0.026393*t3850;
  t4067 = 0.000837*t3846;
  t4071 = -0.027477*t3850;
  t4077 = -0.004071*t3846;
  t4081 = -0.026937*t3850;
  t4363 = var1[1] + t4361 + t3808 + t3823 + t3847 + t3857;
  t4512 = 0.16197*t3786*t1611;
  t4167 = -0.01208*t4131;
  t4169 = -0.021392*t4153;
  t4176 = -0.014313*t4131;
  t4182 = -0.016988*t4153;
  t4192 = -0.014995*t4131;
  t4193 = -0.012097*t4153;
  t4196 = -0.014051*t4131;
  t4205 = -0.00725*t4153;
  t4207 = -0.011586*t4131;
  t4211 = -0.002972*t4153;
  t4214 = -0.007864*t4131;
  t4216 = 0.000273*t4153;
  t4221 = -0.003291*t4131;
  t4224 = 0.002135*t4153;
  t4234 = 0.00164*t4131;
  t4236 = 0.00241*t4153;
  t4243 = 0.006392*t4131;
  t4246 = 0.00107*t4153;
  t4251 = 0.010452*t4131;
  t4257 = -0.001741*t4153;
  t4262 = 0.013379*t4131;
  t4263 = -0.005717*t4153;
  t4265 = 0.014856*t4131;
  t4267 = -0.010429*t4153;
  t4271 = 0.014724*t4131;
  t4275 = -0.015365*t4153;
  t4284 = 0.012996*t4131;
  t4287 = -0.019991*t4153;
  t4293 = 0.009859*t4131;
  t4300 = -0.023805*t4153;
  t4303 = 0.005655*t4131;
  t4304 = -0.026393*t4153;
  t4308 = 0.000837*t4131;
  t4309 = -0.027477*t4153;
  t4312 = -0.004071*t4131;
  t4313 = -0.026937*t4153;
  t4527 = var1[2] + t4512 + t4092 + t4108 + t4142 + t4155;
  p_output1[0]=t3364;
  p_output1[1]=t2998 + t3023 + t3412 + t3413 + var1[0];
  p_output1[2]=t2998 + t3023 + t3427 + t3458 + var1[0];
  p_output1[3]=t2998 + t3023 + t3508 + t3515 + var1[0];
  p_output1[4]=t2998 + t3023 + t3518 + t3519 + var1[0];
  p_output1[5]=t2998 + t3023 + t3525 + t3530 + var1[0];
  p_output1[6]=t2998 + t3023 + t3534 + t3535 + var1[0];
  p_output1[7]=t2998 + t3023 + t3545 + t3546 + var1[0];
  p_output1[8]=t2998 + t3023 + t3551 + t3553 + var1[0];
  p_output1[9]=t2998 + t3023 + t3559 + t3574 + var1[0];
  p_output1[10]=t2998 + t3023 + t3607 + t3618 + var1[0];
  p_output1[11]=t2998 + t3023 + t3646 + t3661 + var1[0];
  p_output1[12]=t2998 + t3023 + t3675 + t3677 + var1[0];
  p_output1[13]=t2998 + t3023 + t3691 + t3692 + var1[0];
  p_output1[14]=t2998 + t3023 + t3702 + t3712 + var1[0];
  p_output1[15]=t2998 + t3023 + t3714 + t3723 + var1[0];
  p_output1[16]=t2998 + t3023 + t3728 + t3729 + var1[0];
  p_output1[17]=t2998 + t3023 + t3742 + t3745 + var1[0];
  p_output1[18]=t2998 + t3023 + t3762 + t3763 + var1[0];
  p_output1[19]=t3364;
  p_output1[20]=t3859;
  p_output1[21]=t3808 + t3823 + t3860 + t3861 + var1[1];
  p_output1[22]=t3808 + t3823 + t3869 + t3871 + var1[1];
  p_output1[23]=t3808 + t3823 + t3882 + t3883 + var1[1];
  p_output1[24]=t3808 + t3823 + t3902 + t3905 + var1[1];
  p_output1[25]=t3808 + t3823 + t3917 + t3919 + var1[1];
  p_output1[26]=t3808 + t3823 + t3936 + t3937 + var1[1];
  p_output1[27]=t3808 + t3823 + t3948 + t3954 + var1[1];
  p_output1[28]=t3808 + t3823 + t3970 + t3973 + var1[1];
  p_output1[29]=t3808 + t3823 + t3982 + t3986 + var1[1];
  p_output1[30]=t3808 + t3823 + t3991 + t4000 + var1[1];
  p_output1[31]=t3808 + t3823 + t4005 + t4006 + var1[1];
  p_output1[32]=t3808 + t3823 + t4010 + t4013 + var1[1];
  p_output1[33]=t3808 + t3823 + t4019 + t4020 + var1[1];
  p_output1[34]=t3808 + t3823 + t4026 + t4027 + var1[1];
  p_output1[35]=t3808 + t3823 + t4035 + t4042 + var1[1];
  p_output1[36]=t3808 + t3823 + t4048 + t4051 + var1[1];
  p_output1[37]=t3808 + t3823 + t4067 + t4071 + var1[1];
  p_output1[38]=t3808 + t3823 + t4077 + t4081 + var1[1];
  p_output1[39]=t3859;
  p_output1[40]=t4163;
  p_output1[41]=t4092 + t4108 + t4167 + t4169 + var1[2];
  p_output1[42]=t4092 + t4108 + t4176 + t4182 + var1[2];
  p_output1[43]=t4092 + t4108 + t4192 + t4193 + var1[2];
  p_output1[44]=t4092 + t4108 + t4196 + t4205 + var1[2];
  p_output1[45]=t4092 + t4108 + t4207 + t4211 + var1[2];
  p_output1[46]=t4092 + t4108 + t4214 + t4216 + var1[2];
  p_output1[47]=t4092 + t4108 + t4221 + t4224 + var1[2];
  p_output1[48]=t4092 + t4108 + t4234 + t4236 + var1[2];
  p_output1[49]=t4092 + t4108 + t4243 + t4246 + var1[2];
  p_output1[50]=t4092 + t4108 + t4251 + t4257 + var1[2];
  p_output1[51]=t4092 + t4108 + t4262 + t4263 + var1[2];
  p_output1[52]=t4092 + t4108 + t4265 + t4267 + var1[2];
  p_output1[53]=t4092 + t4108 + t4271 + t4275 + var1[2];
  p_output1[54]=t4092 + t4108 + t4284 + t4287 + var1[2];
  p_output1[55]=t4092 + t4108 + t4293 + t4300 + var1[2];
  p_output1[56]=t4092 + t4108 + t4303 + t4304 + var1[2];
  p_output1[57]=t4092 + t4108 + t4308 + t4309 + var1[2];
  p_output1[58]=t4092 + t4108 + t4312 + t4313 + var1[2];
  p_output1[59]=t4163;
  p_output1[60]=t4317;
  p_output1[61]=t2998 + t3023 + t3412 + t3413 + t4315 + var1[0];
  p_output1[62]=t2998 + t3023 + t3427 + t3458 + t4315 + var1[0];
  p_output1[63]=t2998 + t3023 + t3508 + t3515 + t4315 + var1[0];
  p_output1[64]=t2998 + t3023 + t3518 + t3519 + t4315 + var1[0];
  p_output1[65]=t2998 + t3023 + t3525 + t3530 + t4315 + var1[0];
  p_output1[66]=t2998 + t3023 + t3534 + t3535 + t4315 + var1[0];
  p_output1[67]=t2998 + t3023 + t3545 + t3546 + t4315 + var1[0];
  p_output1[68]=t2998 + t3023 + t3551 + t3553 + t4315 + var1[0];
  p_output1[69]=t2998 + t3023 + t3559 + t3574 + t4315 + var1[0];
  p_output1[70]=t2998 + t3023 + t3607 + t3618 + t4315 + var1[0];
  p_output1[71]=t2998 + t3023 + t3646 + t3661 + t4315 + var1[0];
  p_output1[72]=t2998 + t3023 + t3675 + t3677 + t4315 + var1[0];
  p_output1[73]=t2998 + t3023 + t3691 + t3692 + t4315 + var1[0];
  p_output1[74]=t2998 + t3023 + t3702 + t3712 + t4315 + var1[0];
  p_output1[75]=t2998 + t3023 + t3714 + t3723 + t4315 + var1[0];
  p_output1[76]=t2998 + t3023 + t3728 + t3729 + t4315 + var1[0];
  p_output1[77]=t2998 + t3023 + t3742 + t3745 + t4315 + var1[0];
  p_output1[78]=t2998 + t3023 + t3762 + t3763 + t4315 + var1[0];
  p_output1[79]=t4317;
  p_output1[80]=t4363;
  p_output1[81]=t3808 + t3823 + t3860 + t3861 + t4361 + var1[1];
  p_output1[82]=t3808 + t3823 + t3869 + t3871 + t4361 + var1[1];
  p_output1[83]=t3808 + t3823 + t3882 + t3883 + t4361 + var1[1];
  p_output1[84]=t3808 + t3823 + t3902 + t3905 + t4361 + var1[1];
  p_output1[85]=t3808 + t3823 + t3917 + t3919 + t4361 + var1[1];
  p_output1[86]=t3808 + t3823 + t3936 + t3937 + t4361 + var1[1];
  p_output1[87]=t3808 + t3823 + t3948 + t3954 + t4361 + var1[1];
  p_output1[88]=t3808 + t3823 + t3970 + t3973 + t4361 + var1[1];
  p_output1[89]=t3808 + t3823 + t3982 + t3986 + t4361 + var1[1];
  p_output1[90]=t3808 + t3823 + t3991 + t4000 + t4361 + var1[1];
  p_output1[91]=t3808 + t3823 + t4005 + t4006 + t4361 + var1[1];
  p_output1[92]=t3808 + t3823 + t4010 + t4013 + t4361 + var1[1];
  p_output1[93]=t3808 + t3823 + t4019 + t4020 + t4361 + var1[1];
  p_output1[94]=t3808 + t3823 + t4026 + t4027 + t4361 + var1[1];
  p_output1[95]=t3808 + t3823 + t4035 + t4042 + t4361 + var1[1];
  p_output1[96]=t3808 + t3823 + t4048 + t4051 + t4361 + var1[1];
  p_output1[97]=t3808 + t3823 + t4067 + t4071 + t4361 + var1[1];
  p_output1[98]=t3808 + t3823 + t4077 + t4081 + t4361 + var1[1];
  p_output1[99]=t4363;
  p_output1[100]=t4527;
  p_output1[101]=t4092 + t4108 + t4167 + t4169 + t4512 + var1[2];
  p_output1[102]=t4092 + t4108 + t4176 + t4182 + t4512 + var1[2];
  p_output1[103]=t4092 + t4108 + t4192 + t4193 + t4512 + var1[2];
  p_output1[104]=t4092 + t4108 + t4196 + t4205 + t4512 + var1[2];
  p_output1[105]=t4092 + t4108 + t4207 + t4211 + t4512 + var1[2];
  p_output1[106]=t4092 + t4108 + t4214 + t4216 + t4512 + var1[2];
  p_output1[107]=t4092 + t4108 + t4221 + t4224 + t4512 + var1[2];
  p_output1[108]=t4092 + t4108 + t4234 + t4236 + t4512 + var1[2];
  p_output1[109]=t4092 + t4108 + t4243 + t4246 + t4512 + var1[2];
  p_output1[110]=t4092 + t4108 + t4251 + t4257 + t4512 + var1[2];
  p_output1[111]=t4092 + t4108 + t4262 + t4263 + t4512 + var1[2];
  p_output1[112]=t4092 + t4108 + t4265 + t4267 + t4512 + var1[2];
  p_output1[113]=t4092 + t4108 + t4271 + t4275 + t4512 + var1[2];
  p_output1[114]=t4092 + t4108 + t4284 + t4287 + t4512 + var1[2];
  p_output1[115]=t4092 + t4108 + t4293 + t4300 + t4512 + var1[2];
  p_output1[116]=t4092 + t4108 + t4303 + t4304 + t4512 + var1[2];
  p_output1[117]=t4092 + t4108 + t4308 + t4309 + t4512 + var1[2];
  p_output1[118]=t4092 + t4108 + t4312 + t4313 + t4512 + var1[2];
  p_output1[119]=t4527;
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

#include "Link_ltorso_to_back_bky_bar.hh"

namespace SymFunction
{

void Link_ltorso_to_back_bky_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
