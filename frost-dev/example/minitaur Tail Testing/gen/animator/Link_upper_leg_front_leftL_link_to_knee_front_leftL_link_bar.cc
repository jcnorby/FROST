/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:51 GMT-04:00
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
  double t582;
  double t1938;
  double t2087;
  double t2311;
  double t1606;
  double t2354;
  double t2376;
  double t2382;
  double t2327;
  double t2369;
  double t2392;
  double t2393;
  double t2394;
  double t2409;
  double t2414;
  double t2440;
  double t2444;
  double t2620;
  double t3060;
  double t3063;
  double t3064;
  double t2455;
  double t3067;
  double t3084;
  double t3688;
  double t3678;
  double t3685;
  double t3731;
  double t3749;
  double t3827;
  double t3909;
  double t3951;
  double t3760;
  double t4022;
  double t4028;
  double t4038;
  double t4041;
  double t4045;
  double t4052;
  double t4079;
  double t4155;
  double t4191;
  double t4434;
  double t4076;
  double t4772;
  double t4803;
  double t6058;
  double t6059;
  double t6084;
  double t6087;
  double t6100;
  double t6101;
  double t6086;
  double t6102;
  double t6108;
  double t6113;
  double t6124;
  double t6139;
  double t6142;
  double t6144;
  double t6145;
  double t6146;
  double t6147;
  double t6143;
  double t6149;
  double t6150;
  double t3085;
  double t3094;
  double t6411;
  double t6413;
  double t6414;
  double t6418;
  double t6419;
  double t6425;
  double t6426;
  double t3121;
  double t3125;
  double t3145;
  double t3148;
  double t3194;
  double t3196;
  double t3257;
  double t3266;
  double t3289;
  double t3291;
  double t3301;
  double t3315;
  double t3334;
  double t3366;
  double t3470;
  double t3471;
  double t3494;
  double t3502;
  double t3517;
  double t3525;
  double t3537;
  double t3539;
  double t3581;
  double t3584;
  double t3591;
  double t3614;
  double t3620;
  double t3627;
  double t3631;
  double t3645;
  double t3648;
  double t3650;
  double t3663;
  double t3672;
  double t6427;
  double t4832;
  double t4842;
  double t6497;
  double t6500;
  double t6502;
  double t6505;
  double t6508;
  double t4868;
  double t4895;
  double t4934;
  double t4954;
  double t5056;
  double t5065;
  double t5093;
  double t5124;
  double t5194;
  double t5266;
  double t5421;
  double t5452;
  double t5508;
  double t5521;
  double t5558;
  double t5752;
  double t5759;
  double t5761;
  double t5772;
  double t5773;
  double t5820;
  double t5838;
  double t5866;
  double t5877;
  double t5909;
  double t5917;
  double t5946;
  double t5956;
  double t5973;
  double t5977;
  double t5988;
  double t5999;
  double t6042;
  double t6048;
  double t6509;
  double t6153;
  double t6155;
  double t6545;
  double t6546;
  double t6556;
  double t6557;
  double t6561;
  double t6162;
  double t6163;
  double t6165;
  double t6167;
  double t6204;
  double t6208;
  double t6211;
  double t6213;
  double t6215;
  double t6216;
  double t6221;
  double t6223;
  double t6226;
  double t6230;
  double t6235;
  double t6251;
  double t6263;
  double t6267;
  double t6269;
  double t6270;
  double t6272;
  double t6281;
  double t6287;
  double t6291;
  double t6321;
  double t6322;
  double t6339;
  double t6340;
  double t6353;
  double t6372;
  double t6397;
  double t6398;
  double t6407;
  double t6409;
  double t6563;
  t582 = Cos(var1[4]);
  t1938 = Cos(var1[6]);
  t2087 = -1.*t1938;
  t2311 = 1. + t2087;
  t1606 = Cos(var1[5]);
  t2354 = Sin(var1[5]);
  t2376 = Sin(var1[4]);
  t2382 = Sin(var1[6]);
  t2327 = 0.225000000002025*t582*t1606*t2311;
  t2369 = 6.75000000006075e-7*t582*t2311*t2354;
  t2392 = -0.225000000002025*t2376*t2382;
  t2393 = 3.e-6*t582*t1606*t2311;
  t2394 = -9.e-12*t2311;
  t2409 = 1. + t2394;
  t2414 = -1.*t582*t2409*t2354;
  t2440 = -3.e-6*t2376*t2382;
  t2444 = t2393 + t2414 + t2440;
  t2620 = t582*t1606*t1938;
  t3060 = -3.e-6*t582*t2311*t2354;
  t3063 = t2376*t2382;
  t3064 = t2620 + t3060 + t3063;
  t2455 = 0.144618*t2444;
  t3067 = 0.228364*t3064;
  t3084 = var1[0] + t2327 + t2369 + t2392 + t2455 + t3067;
  t3688 = Cos(var1[3]);
  t3678 = Sin(var1[3]);
  t3685 = t1606*t3678*t2376;
  t3731 = t3688*t2354;
  t3749 = t3685 + t3731;
  t3827 = t3688*t1606;
  t3909 = -1.*t3678*t2376*t2354;
  t3951 = t3827 + t3909;
  t3760 = 0.225000000002025*t2311*t3749;
  t4022 = -6.75000000006075e-7*t2311*t3951;
  t4028 = 0.225000000002025*t582*t3678*t2382;
  t4038 = t1938*t3749;
  t4041 = 3.e-6*t2311*t3951;
  t4045 = -1.*t582*t3678*t2382;
  t4052 = t4038 + t4041 + t4045;
  t4079 = 3.e-6*t2311*t3749;
  t4155 = t2409*t3951;
  t4191 = 3.e-6*t582*t3678*t2382;
  t4434 = t4079 + t4155 + t4191;
  t4076 = 0.228364*t4052;
  t4772 = 0.144618*t4434;
  t4803 = var1[1] + t3760 + t4022 + t4028 + t4076 + t4772;
  t6058 = -1.*t3688*t1606*t2376;
  t6059 = t3678*t2354;
  t6084 = t6058 + t6059;
  t6087 = t1606*t3678;
  t6100 = t3688*t2376*t2354;
  t6101 = t6087 + t6100;
  t6086 = 0.225000000002025*t2311*t6084;
  t6102 = -6.75000000006075e-7*t2311*t6101;
  t6108 = -0.225000000002025*t3688*t582*t2382;
  t6113 = 3.e-6*t2311*t6084;
  t6124 = t2409*t6101;
  t6139 = -3.e-6*t3688*t582*t2382;
  t6142 = t6113 + t6124 + t6139;
  t6144 = t1938*t6084;
  t6145 = 3.e-6*t2311*t6101;
  t6146 = t3688*t582*t2382;
  t6147 = t6144 + t6145 + t6146;
  t6143 = 0.144618*t6142;
  t6149 = 0.228364*t6147;
  t6150 = var1[2] + t6086 + t6102 + t6108 + t6143 + t6149;
  t3085 = 0.144918*t2444;
  t3094 = 0.223435*t3064;
  t6411 = -1.000000000009*t2311;
  t6413 = 1. + t6411;
  t6414 = t6413*t2376;
  t6418 = -1.*t582*t1606*t2382;
  t6419 = -3.e-6*t582*t2354*t2382;
  t6425 = t6414 + t6418 + t6419;
  t6426 = 0.1*t6425;
  t3121 = 0.143602*t2444;
  t3125 = 0.218676*t3064;
  t3145 = 0.140811*t2444;
  t3148 = 0.214602*t3064;
  t3194 = 0.13685*t2444;
  t3196 = 0.211655*t3064;
  t3257 = 0.132145*t2444;
  t3266 = 0.210154*t3064;
  t3289 = 0.127209*t2444;
  t3291 = 0.210262*t3064;
  t3301 = 0.122575*t2444;
  t3315 = 0.211967*t3064;
  t3334 = 0.118745*t2444;
  t3366 = 0.215084*t3064;
  t3470 = 0.116135*t2444;
  t3471 = 0.219276*t3064;
  t3494 = 0.115028*t2444;
  t3502 = 0.224088*t3064;
  t3517 = 0.115543*t2444;
  t3525 = 0.228999*t3064;
  t3537 = 0.117625*t2444;
  t3539 = 0.233476*t3064;
  t3581 = 0.121047*t2444;
  t3584 = 0.237035*t3064;
  t3591 = 0.12544*t2444;
  t3614 = 0.23929*t3064;
  t3620 = 0.130327*t2444;
  t3627 = 0.239996*t3064;
  t3631 = 0.135179*t2444;
  t3645 = 0.239078*t3064;
  t3648 = 0.139469*t2444;
  t3650 = 0.236633*t3064;
  t3663 = 0.142734*t2444;
  t3672 = 0.232928*t3064;
  t6427 = var1[0] + t2327 + t2369 + t2392 + t2455 + t3067 + t6426;
  t4832 = 0.223435*t4052;
  t4842 = 0.144918*t4434;
  t6497 = -1.*t582*t6413*t3678;
  t6500 = -1.*t3749*t2382;
  t6502 = 3.e-6*t3951*t2382;
  t6505 = t6497 + t6500 + t6502;
  t6508 = 0.1*t6505;
  t4868 = 0.218676*t4052;
  t4895 = 0.143602*t4434;
  t4934 = 0.214602*t4052;
  t4954 = 0.140811*t4434;
  t5056 = 0.211655*t4052;
  t5065 = 0.13685*t4434;
  t5093 = 0.210154*t4052;
  t5124 = 0.132145*t4434;
  t5194 = 0.210262*t4052;
  t5266 = 0.127209*t4434;
  t5421 = 0.211967*t4052;
  t5452 = 0.122575*t4434;
  t5508 = 0.215084*t4052;
  t5521 = 0.118745*t4434;
  t5558 = 0.219276*t4052;
  t5752 = 0.116135*t4434;
  t5759 = 0.224088*t4052;
  t5761 = 0.115028*t4434;
  t5772 = 0.228999*t4052;
  t5773 = 0.115543*t4434;
  t5820 = 0.233476*t4052;
  t5838 = 0.117625*t4434;
  t5866 = 0.237035*t4052;
  t5877 = 0.121047*t4434;
  t5909 = 0.23929*t4052;
  t5917 = 0.12544*t4434;
  t5946 = 0.239996*t4052;
  t5956 = 0.130327*t4434;
  t5973 = 0.239078*t4052;
  t5977 = 0.135179*t4434;
  t5988 = 0.236633*t4052;
  t5999 = 0.139469*t4434;
  t6042 = 0.232928*t4052;
  t6048 = 0.142734*t4434;
  t6509 = var1[1] + t3760 + t4022 + t4028 + t4076 + t4772 + t6508;
  t6153 = 0.144918*t6142;
  t6155 = 0.223435*t6147;
  t6545 = t3688*t582*t6413;
  t6546 = -1.*t6084*t2382;
  t6556 = 3.e-6*t6101*t2382;
  t6557 = t6545 + t6546 + t6556;
  t6561 = 0.1*t6557;
  t6162 = 0.143602*t6142;
  t6163 = 0.218676*t6147;
  t6165 = 0.140811*t6142;
  t6167 = 0.214602*t6147;
  t6204 = 0.13685*t6142;
  t6208 = 0.211655*t6147;
  t6211 = 0.132145*t6142;
  t6213 = 0.210154*t6147;
  t6215 = 0.127209*t6142;
  t6216 = 0.210262*t6147;
  t6221 = 0.122575*t6142;
  t6223 = 0.211967*t6147;
  t6226 = 0.118745*t6142;
  t6230 = 0.215084*t6147;
  t6235 = 0.116135*t6142;
  t6251 = 0.219276*t6147;
  t6263 = 0.115028*t6142;
  t6267 = 0.224088*t6147;
  t6269 = 0.115543*t6142;
  t6270 = 0.228999*t6147;
  t6272 = 0.117625*t6142;
  t6281 = 0.233476*t6147;
  t6287 = 0.121047*t6142;
  t6291 = 0.237035*t6147;
  t6321 = 0.12544*t6142;
  t6322 = 0.23929*t6147;
  t6339 = 0.130327*t6142;
  t6340 = 0.239996*t6147;
  t6353 = 0.135179*t6142;
  t6372 = 0.239078*t6147;
  t6397 = 0.139469*t6142;
  t6398 = 0.236633*t6147;
  t6407 = 0.142734*t6142;
  t6409 = 0.232928*t6147;
  t6563 = var1[2] + t6086 + t6102 + t6108 + t6143 + t6149 + t6561;
  p_output1[0]=t3084;
  p_output1[1]=t2327 + t2369 + t2392 + t3085 + t3094 + var1[0];
  p_output1[2]=t2327 + t2369 + t2392 + t3121 + t3125 + var1[0];
  p_output1[3]=t2327 + t2369 + t2392 + t3145 + t3148 + var1[0];
  p_output1[4]=t2327 + t2369 + t2392 + t3194 + t3196 + var1[0];
  p_output1[5]=t2327 + t2369 + t2392 + t3257 + t3266 + var1[0];
  p_output1[6]=t2327 + t2369 + t2392 + t3289 + t3291 + var1[0];
  p_output1[7]=t2327 + t2369 + t2392 + t3301 + t3315 + var1[0];
  p_output1[8]=t2327 + t2369 + t2392 + t3334 + t3366 + var1[0];
  p_output1[9]=t2327 + t2369 + t2392 + t3470 + t3471 + var1[0];
  p_output1[10]=t2327 + t2369 + t2392 + t3494 + t3502 + var1[0];
  p_output1[11]=t2327 + t2369 + t2392 + t3517 + t3525 + var1[0];
  p_output1[12]=t2327 + t2369 + t2392 + t3537 + t3539 + var1[0];
  p_output1[13]=t2327 + t2369 + t2392 + t3581 + t3584 + var1[0];
  p_output1[14]=t2327 + t2369 + t2392 + t3591 + t3614 + var1[0];
  p_output1[15]=t2327 + t2369 + t2392 + t3620 + t3627 + var1[0];
  p_output1[16]=t2327 + t2369 + t2392 + t3631 + t3645 + var1[0];
  p_output1[17]=t2327 + t2369 + t2392 + t3648 + t3650 + var1[0];
  p_output1[18]=t2327 + t2369 + t2392 + t3663 + t3672 + var1[0];
  p_output1[19]=t3084;
  p_output1[20]=t4803;
  p_output1[21]=t3760 + t4022 + t4028 + t4832 + t4842 + var1[1];
  p_output1[22]=t3760 + t4022 + t4028 + t4868 + t4895 + var1[1];
  p_output1[23]=t3760 + t4022 + t4028 + t4934 + t4954 + var1[1];
  p_output1[24]=t3760 + t4022 + t4028 + t5056 + t5065 + var1[1];
  p_output1[25]=t3760 + t4022 + t4028 + t5093 + t5124 + var1[1];
  p_output1[26]=t3760 + t4022 + t4028 + t5194 + t5266 + var1[1];
  p_output1[27]=t3760 + t4022 + t4028 + t5421 + t5452 + var1[1];
  p_output1[28]=t3760 + t4022 + t4028 + t5508 + t5521 + var1[1];
  p_output1[29]=t3760 + t4022 + t4028 + t5558 + t5752 + var1[1];
  p_output1[30]=t3760 + t4022 + t4028 + t5759 + t5761 + var1[1];
  p_output1[31]=t3760 + t4022 + t4028 + t5772 + t5773 + var1[1];
  p_output1[32]=t3760 + t4022 + t4028 + t5820 + t5838 + var1[1];
  p_output1[33]=t3760 + t4022 + t4028 + t5866 + t5877 + var1[1];
  p_output1[34]=t3760 + t4022 + t4028 + t5909 + t5917 + var1[1];
  p_output1[35]=t3760 + t4022 + t4028 + t5946 + t5956 + var1[1];
  p_output1[36]=t3760 + t4022 + t4028 + t5973 + t5977 + var1[1];
  p_output1[37]=t3760 + t4022 + t4028 + t5988 + t5999 + var1[1];
  p_output1[38]=t3760 + t4022 + t4028 + t6042 + t6048 + var1[1];
  p_output1[39]=t4803;
  p_output1[40]=t6150;
  p_output1[41]=t6086 + t6102 + t6108 + t6153 + t6155 + var1[2];
  p_output1[42]=t6086 + t6102 + t6108 + t6162 + t6163 + var1[2];
  p_output1[43]=t6086 + t6102 + t6108 + t6165 + t6167 + var1[2];
  p_output1[44]=t6086 + t6102 + t6108 + t6204 + t6208 + var1[2];
  p_output1[45]=t6086 + t6102 + t6108 + t6211 + t6213 + var1[2];
  p_output1[46]=t6086 + t6102 + t6108 + t6215 + t6216 + var1[2];
  p_output1[47]=t6086 + t6102 + t6108 + t6221 + t6223 + var1[2];
  p_output1[48]=t6086 + t6102 + t6108 + t6226 + t6230 + var1[2];
  p_output1[49]=t6086 + t6102 + t6108 + t6235 + t6251 + var1[2];
  p_output1[50]=t6086 + t6102 + t6108 + t6263 + t6267 + var1[2];
  p_output1[51]=t6086 + t6102 + t6108 + t6269 + t6270 + var1[2];
  p_output1[52]=t6086 + t6102 + t6108 + t6272 + t6281 + var1[2];
  p_output1[53]=t6086 + t6102 + t6108 + t6287 + t6291 + var1[2];
  p_output1[54]=t6086 + t6102 + t6108 + t6321 + t6322 + var1[2];
  p_output1[55]=t6086 + t6102 + t6108 + t6339 + t6340 + var1[2];
  p_output1[56]=t6086 + t6102 + t6108 + t6353 + t6372 + var1[2];
  p_output1[57]=t6086 + t6102 + t6108 + t6397 + t6398 + var1[2];
  p_output1[58]=t6086 + t6102 + t6108 + t6407 + t6409 + var1[2];
  p_output1[59]=t6150;
  p_output1[60]=t6427;
  p_output1[61]=t2327 + t2369 + t2392 + t3085 + t3094 + t6426 + var1[0];
  p_output1[62]=t2327 + t2369 + t2392 + t3121 + t3125 + t6426 + var1[0];
  p_output1[63]=t2327 + t2369 + t2392 + t3145 + t3148 + t6426 + var1[0];
  p_output1[64]=t2327 + t2369 + t2392 + t3194 + t3196 + t6426 + var1[0];
  p_output1[65]=t2327 + t2369 + t2392 + t3257 + t3266 + t6426 + var1[0];
  p_output1[66]=t2327 + t2369 + t2392 + t3289 + t3291 + t6426 + var1[0];
  p_output1[67]=t2327 + t2369 + t2392 + t3301 + t3315 + t6426 + var1[0];
  p_output1[68]=t2327 + t2369 + t2392 + t3334 + t3366 + t6426 + var1[0];
  p_output1[69]=t2327 + t2369 + t2392 + t3470 + t3471 + t6426 + var1[0];
  p_output1[70]=t2327 + t2369 + t2392 + t3494 + t3502 + t6426 + var1[0];
  p_output1[71]=t2327 + t2369 + t2392 + t3517 + t3525 + t6426 + var1[0];
  p_output1[72]=t2327 + t2369 + t2392 + t3537 + t3539 + t6426 + var1[0];
  p_output1[73]=t2327 + t2369 + t2392 + t3581 + t3584 + t6426 + var1[0];
  p_output1[74]=t2327 + t2369 + t2392 + t3591 + t3614 + t6426 + var1[0];
  p_output1[75]=t2327 + t2369 + t2392 + t3620 + t3627 + t6426 + var1[0];
  p_output1[76]=t2327 + t2369 + t2392 + t3631 + t3645 + t6426 + var1[0];
  p_output1[77]=t2327 + t2369 + t2392 + t3648 + t3650 + t6426 + var1[0];
  p_output1[78]=t2327 + t2369 + t2392 + t3663 + t3672 + t6426 + var1[0];
  p_output1[79]=t6427;
  p_output1[80]=t6509;
  p_output1[81]=t3760 + t4022 + t4028 + t4832 + t4842 + t6508 + var1[1];
  p_output1[82]=t3760 + t4022 + t4028 + t4868 + t4895 + t6508 + var1[1];
  p_output1[83]=t3760 + t4022 + t4028 + t4934 + t4954 + t6508 + var1[1];
  p_output1[84]=t3760 + t4022 + t4028 + t5056 + t5065 + t6508 + var1[1];
  p_output1[85]=t3760 + t4022 + t4028 + t5093 + t5124 + t6508 + var1[1];
  p_output1[86]=t3760 + t4022 + t4028 + t5194 + t5266 + t6508 + var1[1];
  p_output1[87]=t3760 + t4022 + t4028 + t5421 + t5452 + t6508 + var1[1];
  p_output1[88]=t3760 + t4022 + t4028 + t5508 + t5521 + t6508 + var1[1];
  p_output1[89]=t3760 + t4022 + t4028 + t5558 + t5752 + t6508 + var1[1];
  p_output1[90]=t3760 + t4022 + t4028 + t5759 + t5761 + t6508 + var1[1];
  p_output1[91]=t3760 + t4022 + t4028 + t5772 + t5773 + t6508 + var1[1];
  p_output1[92]=t3760 + t4022 + t4028 + t5820 + t5838 + t6508 + var1[1];
  p_output1[93]=t3760 + t4022 + t4028 + t5866 + t5877 + t6508 + var1[1];
  p_output1[94]=t3760 + t4022 + t4028 + t5909 + t5917 + t6508 + var1[1];
  p_output1[95]=t3760 + t4022 + t4028 + t5946 + t5956 + t6508 + var1[1];
  p_output1[96]=t3760 + t4022 + t4028 + t5973 + t5977 + t6508 + var1[1];
  p_output1[97]=t3760 + t4022 + t4028 + t5988 + t5999 + t6508 + var1[1];
  p_output1[98]=t3760 + t4022 + t4028 + t6042 + t6048 + t6508 + var1[1];
  p_output1[99]=t6509;
  p_output1[100]=t6563;
  p_output1[101]=t6086 + t6102 + t6108 + t6153 + t6155 + t6561 + var1[2];
  p_output1[102]=t6086 + t6102 + t6108 + t6162 + t6163 + t6561 + var1[2];
  p_output1[103]=t6086 + t6102 + t6108 + t6165 + t6167 + t6561 + var1[2];
  p_output1[104]=t6086 + t6102 + t6108 + t6204 + t6208 + t6561 + var1[2];
  p_output1[105]=t6086 + t6102 + t6108 + t6211 + t6213 + t6561 + var1[2];
  p_output1[106]=t6086 + t6102 + t6108 + t6215 + t6216 + t6561 + var1[2];
  p_output1[107]=t6086 + t6102 + t6108 + t6221 + t6223 + t6561 + var1[2];
  p_output1[108]=t6086 + t6102 + t6108 + t6226 + t6230 + t6561 + var1[2];
  p_output1[109]=t6086 + t6102 + t6108 + t6235 + t6251 + t6561 + var1[2];
  p_output1[110]=t6086 + t6102 + t6108 + t6263 + t6267 + t6561 + var1[2];
  p_output1[111]=t6086 + t6102 + t6108 + t6269 + t6270 + t6561 + var1[2];
  p_output1[112]=t6086 + t6102 + t6108 + t6272 + t6281 + t6561 + var1[2];
  p_output1[113]=t6086 + t6102 + t6108 + t6287 + t6291 + t6561 + var1[2];
  p_output1[114]=t6086 + t6102 + t6108 + t6321 + t6322 + t6561 + var1[2];
  p_output1[115]=t6086 + t6102 + t6108 + t6339 + t6340 + t6561 + var1[2];
  p_output1[116]=t6086 + t6102 + t6108 + t6353 + t6372 + t6561 + var1[2];
  p_output1[117]=t6086 + t6102 + t6108 + t6397 + t6398 + t6561 + var1[2];
  p_output1[118]=t6086 + t6102 + t6108 + t6407 + t6409 + t6561 + var1[2];
  p_output1[119]=t6563;
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

#include "Link_upper_leg_front_leftL_link_to_knee_front_leftL_link_bar.hh"

namespace SymFunction
{

void Link_upper_leg_front_leftL_link_to_knee_front_leftL_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
