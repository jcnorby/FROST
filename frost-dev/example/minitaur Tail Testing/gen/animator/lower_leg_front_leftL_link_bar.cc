/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:43 GMT-04:00
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
  double t548;
  double t1838;
  double t2027;
  double t3576;
  double t1786;
  double t6629;
  double t6953;
  double t7555;
  double t7936;
  double t7939;
  double t7951;
  double t8042;
  double t8238;
  double t8413;
  double t8456;
  double t7753;
  double t7766;
  double t7778;
  double t7813;
  double t8105;
  double t8496;
  double t8517;
  double t8519;
  double t8555;
  double t8574;
  double t8579;
  double t9061;
  double t8705;
  double t9018;
  double t9023;
  double t9024;
  double t9030;
  double t9036;
  double t9038;
  double t9062;
  double t7923;
  double t8711;
  double t8012;
  double t9009;
  double t9010;
  double t9074;
  double t9046;
  double t5464;
  double t6707;
  double t7707;
  double t7967;
  double t8135;
  double t8156;
  double t8479;
  double t8487;
  double t8491;
  double t8632;
  double t8683;
  double t8723;
  double t8735;
  double t8736;
  double t8750;
  double t9017;
  double t9047;
  double t9059;
  double t9064;
  double t9065;
  double t9068;
  double t9071;
  double t9073;
  double t9077;
  double t9080;
  double t9083;
  double t9086;
  double t9088;
  double t9095;
  double t9101;
  double t9159;
  double t9160;
  double t9168;
  double t9169;
  double t9171;
  double t9172;
  double t9176;
  double t9178;
  double t9067;
  double t9085;
  double t9179;
  double t9276;
  double t9273;
  double t9274;
  double t9277;
  double t9278;
  double t9281;
  double t9282;
  double t9283;
  double t9286;
  double t9287;
  double t9289;
  double t9294;
  double t9297;
  double t9299;
  double t9301;
  double t9302;
  double t9306;
  double t9307;
  double t9312;
  double t9313;
  double t9280;
  double t9284;
  double t9285;
  double t9295;
  double t9303;
  double t9305;
  double t9314;
  double t9315;
  double t9316;
  double t9321;
  double t9322;
  double t9323;
  double t9324;
  double t9327;
  double t9329;
  double t9330;
  double t9331;
  double t9332;
  double t9333;
  double t9317;
  double t9325;
  double t9335;
  double t9415;
  double t9416;
  double t9417;
  double t9419;
  double t9420;
  double t9422;
  double t9425;
  double t9426;
  double t9427;
  double t9428;
  double t9431;
  double t9432;
  double t9433;
  double t9434;
  double t9438;
  double t9439;
  double t9440;
  double t9442;
  double t9418;
  double t9423;
  double t9424;
  double t9429;
  double t9435;
  double t9436;
  double t9444;
  double t9445;
  double t9446;
  double t9448;
  double t9449;
  double t9450;
  double t9451;
  double t9453;
  double t9455;
  double t9457;
  double t9461;
  double t9463;
  double t9464;
  double t9447;
  double t9452;
  double t9465;
  double t9181;
  double t9560;
  double t9187;
  double t9194;
  double t9203;
  double t9212;
  double t9215;
  double t9220;
  double t9224;
  double t9232;
  double t9233;
  double t9235;
  double t9238;
  double t9239;
  double t9241;
  double t9242;
  double t9244;
  double t9245;
  double t9247;
  double t9248;
  double t9250;
  double t9254;
  double t9257;
  double t9258;
  double t9261;
  double t9265;
  double t9267;
  double t9268;
  double t9562;
  double t9338;
  double t9604;
  double t9341;
  double t9344;
  double t9347;
  double t9350;
  double t9351;
  double t9353;
  double t9359;
  double t9363;
  double t9364;
  double t9366;
  double t9370;
  double t9371;
  double t9374;
  double t9375;
  double t9377;
  double t9378;
  double t9380;
  double t9381;
  double t9384;
  double t9390;
  double t9401;
  double t9402;
  double t9405;
  double t9406;
  double t9411;
  double t9412;
  double t9605;
  double t9466;
  double t9642;
  double t9474;
  double t9479;
  double t9482;
  double t9485;
  double t9486;
  double t9488;
  double t9491;
  double t9496;
  double t9498;
  double t9502;
  double t9508;
  double t9509;
  double t9512;
  double t9513;
  double t9516;
  double t9517;
  double t9519;
  double t9521;
  double t9535;
  double t9539;
  double t9547;
  double t9550;
  double t9552;
  double t9553;
  double t9556;
  double t9557;
  double t9644;
  t548 = Cos(var1[4]);
  t1838 = Cos(var1[6]);
  t2027 = -1.*t1838;
  t3576 = 1. + t2027;
  t1786 = Cos(var1[5]);
  t6629 = Sin(var1[5]);
  t6953 = Sin(var1[4]);
  t7555 = Sin(var1[6]);
  t7936 = Cos(var1[8]);
  t7939 = -1.*t7936;
  t7951 = 1. + t7939;
  t8042 = Sin(var1[8]);
  t8238 = -3.e-6*t7951;
  t8413 = 3.e-6*t8042;
  t8456 = t8238 + t8413;
  t7753 = t548*t1786*t1838;
  t7766 = -3.e-6*t548*t3576*t6629;
  t7778 = t6953*t7555;
  t7813 = t7753 + t7766 + t7778;
  t8105 = -1.*t8042;
  t8496 = 3.e-6*t548*t1786*t3576;
  t8517 = -9.e-12*t3576;
  t8519 = 1. + t8517;
  t8555 = -1.*t548*t8519*t6629;
  t8574 = -3.e-6*t6953*t7555;
  t8579 = t8496 + t8555 + t8574;
  t9061 = 3.e-6*t7951;
  t8705 = -3.e-6*t8042;
  t9018 = -1.000000000009*t3576;
  t9023 = 1. + t9018;
  t9024 = t9023*t6953;
  t9030 = -1.*t548*t1786*t7555;
  t9036 = -3.e-6*t548*t6629*t7555;
  t9038 = t9024 + t9030 + t9036;
  t9062 = t9061 + t8413;
  t7923 = 1.125e-12*var1[8];
  t8711 = t8238 + t8705;
  t8012 = -9.e-12*t7951;
  t9009 = -1.000000000009*t7951;
  t9010 = 1. + t9009;
  t9074 = t9061 + t8705;
  t9046 = 9.e-12*t7951;
  t5464 = 0.225000000002025*t548*t1786*t3576;
  t6707 = 6.75000000006075e-7*t548*t3576*t6629;
  t7707 = -0.225000000002025*t6953*t7555;
  t7967 = 0.225000000002025*t7951;
  t8135 = t8012 + t8105;
  t8156 = 0.1*t8135;
  t8479 = -9.75e-7*t8456;
  t8487 = t7923 + t7967 + t8156 + t8479;
  t8491 = t7813*t8487;
  t8632 = 3.75e-7*var1[8];
  t8683 = -1.755e-17*t7951;
  t8723 = 0.225*t8711;
  t8735 = 0.1*t8456;
  t8736 = t8632 + t8683 + t8723 + t8735;
  t8750 = t8579*t8736;
  t9017 = t9010*t7813;
  t9047 = t9046 + t8105;
  t9059 = t9038*t9047;
  t9064 = t8579*t9062;
  t9065 = t9017 + t9059 + t9064;
  t9068 = -1.8e-11*t7951;
  t9071 = 1. + t9068;
  t9073 = t9071*t8579;
  t9077 = t7813*t9074;
  t9080 = t9038*t9062;
  t9083 = t9073 + t9077 + t9080;
  t9086 = 0.1000000000009*t7951;
  t9088 = -9.75e-7*t8711;
  t9095 = t8012 + t8042;
  t9101 = 0.225*t9095;
  t9159 = t7923 + t9086 + t9088 + t9101;
  t9160 = t9038*t9159;
  t9168 = t9010*t9038;
  t9169 = t8579*t9074;
  t9171 = t9046 + t8042;
  t9172 = t7813*t9171;
  t9176 = t9168 + t9169 + t9172;
  t9178 = 0.1*t9176;
  t9067 = 0.235579*t9065;
  t9085 = 0.119366*t9083;
  t9179 = var1[0] + t5464 + t6707 + t7707 + t8491 + t8750 + t9067 + t9085 + t9160 + t9178;
  t9276 = Cos(var1[3]);
  t9273 = Sin(var1[3]);
  t9274 = t1786*t9273*t6953;
  t9277 = t9276*t6629;
  t9278 = t9274 + t9277;
  t9281 = t9276*t1786;
  t9282 = -1.*t9273*t6953*t6629;
  t9283 = t9281 + t9282;
  t9286 = t1838*t9278;
  t9287 = 3.e-6*t3576*t9283;
  t9289 = -1.*t548*t9273*t7555;
  t9294 = t9286 + t9287 + t9289;
  t9297 = 3.e-6*t3576*t9278;
  t9299 = t8519*t9283;
  t9301 = 3.e-6*t548*t9273*t7555;
  t9302 = t9297 + t9299 + t9301;
  t9306 = -1.*t548*t9023*t9273;
  t9307 = -1.*t9278*t7555;
  t9312 = 3.e-6*t9283*t7555;
  t9313 = t9306 + t9307 + t9312;
  t9280 = 0.225000000002025*t3576*t9278;
  t9284 = -6.75000000006075e-7*t3576*t9283;
  t9285 = 0.225000000002025*t548*t9273*t7555;
  t9295 = t9294*t8487;
  t9303 = t9302*t8736;
  t9305 = t9010*t9294;
  t9314 = t9313*t9047;
  t9315 = t9302*t9062;
  t9316 = t9305 + t9314 + t9315;
  t9321 = t9071*t9302;
  t9322 = t9294*t9074;
  t9323 = t9313*t9062;
  t9324 = t9321 + t9322 + t9323;
  t9327 = t9313*t9159;
  t9329 = t9010*t9313;
  t9330 = t9302*t9074;
  t9331 = t9294*t9171;
  t9332 = t9329 + t9330 + t9331;
  t9333 = 0.1*t9332;
  t9317 = 0.235579*t9316;
  t9325 = 0.119366*t9324;
  t9335 = var1[1] + t9280 + t9284 + t9285 + t9295 + t9303 + t9317 + t9325 + t9327 + t9333;
  t9415 = -1.*t9276*t1786*t6953;
  t9416 = t9273*t6629;
  t9417 = t9415 + t9416;
  t9419 = t1786*t9273;
  t9420 = t9276*t6953*t6629;
  t9422 = t9419 + t9420;
  t9425 = t1838*t9417;
  t9426 = 3.e-6*t3576*t9422;
  t9427 = t9276*t548*t7555;
  t9428 = t9425 + t9426 + t9427;
  t9431 = 3.e-6*t3576*t9417;
  t9432 = t8519*t9422;
  t9433 = -3.e-6*t9276*t548*t7555;
  t9434 = t9431 + t9432 + t9433;
  t9438 = t9276*t548*t9023;
  t9439 = -1.*t9417*t7555;
  t9440 = 3.e-6*t9422*t7555;
  t9442 = t9438 + t9439 + t9440;
  t9418 = 0.225000000002025*t3576*t9417;
  t9423 = -6.75000000006075e-7*t3576*t9422;
  t9424 = -0.225000000002025*t9276*t548*t7555;
  t9429 = t9428*t8487;
  t9435 = t9434*t8736;
  t9436 = t9010*t9428;
  t9444 = t9442*t9047;
  t9445 = t9434*t9062;
  t9446 = t9436 + t9444 + t9445;
  t9448 = t9071*t9434;
  t9449 = t9428*t9074;
  t9450 = t9442*t9062;
  t9451 = t9448 + t9449 + t9450;
  t9453 = t9442*t9159;
  t9455 = t9010*t9442;
  t9457 = t9434*t9074;
  t9461 = t9428*t9171;
  t9463 = t9455 + t9457 + t9461;
  t9464 = 0.1*t9463;
  t9447 = 0.235579*t9446;
  t9452 = 0.119366*t9451;
  t9465 = var1[2] + t9418 + t9423 + t9424 + t9429 + t9435 + t9447 + t9452 + t9453 + t9464;
  t9181 = 0.231553*t9065;
  t9560 = -0.14*t9176;
  t9187 = 0.226816*t9065;
  t9194 = 0.221883*t9065;
  t9203 = 0.217288*t9065;
  t9212 = 0.213528*t9065;
  t9215 = 0.120336*t9083;
  t9220 = 0.211012*t9065;
  t9224 = 0.210011*t9065;
  t9232 = 0.210635*t9065;
  t9233 = 0.134318*t9083;
  t9235 = 0.212815*t9065;
  t9238 = 0.216316*t9065;
  t9239 = 0.142231*t9083;
  t9241 = 0.220758*t9065;
  t9242 = 0.144388*t9083;
  t9244 = 0.225659*t9065;
  t9245 = 0.144986*t9083;
  t9247 = 0.230489*t9065;
  t9248 = 0.14396*t9083;
  t9250 = 0.234724*t9065;
  t9254 = 0.237906*t9065;
  t9257 = 0.239689*t9065;
  t9258 = 0.13304*t9083;
  t9261 = 0.23988*t9065;
  t9265 = 0.128106*t9083;
  t9267 = 0.238459*t9065;
  t9268 = 0.123377*t9083;
  t9562 = var1[0] + t5464 + t6707 + t7707 + t8491 + t8750 + t9067 + t9085 + t9160 + t9560;
  t9338 = 0.231553*t9316;
  t9604 = -0.14*t9332;
  t9341 = 0.226816*t9316;
  t9344 = 0.221883*t9316;
  t9347 = 0.217288*t9316;
  t9350 = 0.213528*t9316;
  t9351 = 0.120336*t9324;
  t9353 = 0.211012*t9316;
  t9359 = 0.210011*t9316;
  t9363 = 0.210635*t9316;
  t9364 = 0.134318*t9324;
  t9366 = 0.212815*t9316;
  t9370 = 0.216316*t9316;
  t9371 = 0.142231*t9324;
  t9374 = 0.220758*t9316;
  t9375 = 0.144388*t9324;
  t9377 = 0.225659*t9316;
  t9378 = 0.144986*t9324;
  t9380 = 0.230489*t9316;
  t9381 = 0.14396*t9324;
  t9384 = 0.234724*t9316;
  t9390 = 0.237906*t9316;
  t9401 = 0.239689*t9316;
  t9402 = 0.13304*t9324;
  t9405 = 0.23988*t9316;
  t9406 = 0.128106*t9324;
  t9411 = 0.238459*t9316;
  t9412 = 0.123377*t9324;
  t9605 = var1[1] + t9280 + t9284 + t9285 + t9295 + t9303 + t9317 + t9325 + t9327 + t9604;
  t9466 = 0.231553*t9446;
  t9642 = -0.14*t9463;
  t9474 = 0.226816*t9446;
  t9479 = 0.221883*t9446;
  t9482 = 0.217288*t9446;
  t9485 = 0.213528*t9446;
  t9486 = 0.120336*t9451;
  t9488 = 0.211012*t9446;
  t9491 = 0.210011*t9446;
  t9496 = 0.210635*t9446;
  t9498 = 0.134318*t9451;
  t9502 = 0.212815*t9446;
  t9508 = 0.216316*t9446;
  t9509 = 0.142231*t9451;
  t9512 = 0.220758*t9446;
  t9513 = 0.144388*t9451;
  t9516 = 0.225659*t9446;
  t9517 = 0.144986*t9451;
  t9519 = 0.230489*t9446;
  t9521 = 0.14396*t9451;
  t9535 = 0.234724*t9446;
  t9539 = 0.237906*t9446;
  t9547 = 0.239689*t9446;
  t9550 = 0.13304*t9451;
  t9552 = 0.23988*t9446;
  t9553 = 0.128106*t9451;
  t9556 = 0.238459*t9446;
  t9557 = 0.123377*t9451;
  t9644 = var1[2] + t9418 + t9423 + t9424 + t9429 + t9435 + t9447 + t9452 + t9453 + t9642;
  p_output1[0]=t9179;
  p_output1[1]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.116507*t9083 + t9160 + t9178 + t9181 + var1[0];
  p_output1[2]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.11511*t9083 + t9160 + t9178 + t9187 + var1[0];
  p_output1[3]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.115327*t9083 + t9160 + t9178 + t9194 + var1[0];
  p_output1[4]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.117134*t9083 + t9160 + t9178 + t9203 + var1[0];
  p_output1[5]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9212 + t9215 + var1[0];
  p_output1[6]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.124584*t9083 + t9160 + t9178 + t9220 + var1[0];
  p_output1[7]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.129419*t9083 + t9160 + t9178 + t9224 + var1[0];
  p_output1[8]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9232 + t9233 + var1[0];
  p_output1[9]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.138748*t9083 + t9160 + t9178 + t9235 + var1[0];
  p_output1[10]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9238 + t9239 + var1[0];
  p_output1[11]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9241 + t9242 + var1[0];
  p_output1[12]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9244 + t9245 + var1[0];
  p_output1[13]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9247 + t9248 + var1[0];
  p_output1[14]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.141421*t9083 + t9160 + t9178 + t9250 + var1[0];
  p_output1[15]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.137644*t9083 + t9160 + t9178 + t9254 + var1[0];
  p_output1[16]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9257 + t9258 + var1[0];
  p_output1[17]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9261 + t9265 + var1[0];
  p_output1[18]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9178 + t9267 + t9268 + var1[0];
  p_output1[19]=t9179;
  p_output1[20]=t9335;
  p_output1[21]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.116507*t9324 + t9327 + t9333 + t9338 + var1[1];
  p_output1[22]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.11511*t9324 + t9327 + t9333 + t9341 + var1[1];
  p_output1[23]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.115327*t9324 + t9327 + t9333 + t9344 + var1[1];
  p_output1[24]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.117134*t9324 + t9327 + t9333 + t9347 + var1[1];
  p_output1[25]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9350 + t9351 + var1[1];
  p_output1[26]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.124584*t9324 + t9327 + t9333 + t9353 + var1[1];
  p_output1[27]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.129419*t9324 + t9327 + t9333 + t9359 + var1[1];
  p_output1[28]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9363 + t9364 + var1[1];
  p_output1[29]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.138748*t9324 + t9327 + t9333 + t9366 + var1[1];
  p_output1[30]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9370 + t9371 + var1[1];
  p_output1[31]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9374 + t9375 + var1[1];
  p_output1[32]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9377 + t9378 + var1[1];
  p_output1[33]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9380 + t9381 + var1[1];
  p_output1[34]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.141421*t9324 + t9327 + t9333 + t9384 + var1[1];
  p_output1[35]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.137644*t9324 + t9327 + t9333 + t9390 + var1[1];
  p_output1[36]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9401 + t9402 + var1[1];
  p_output1[37]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9405 + t9406 + var1[1];
  p_output1[38]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9333 + t9411 + t9412 + var1[1];
  p_output1[39]=t9335;
  p_output1[40]=t9465;
  p_output1[41]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.116507*t9451 + t9453 + t9464 + t9466 + var1[2];
  p_output1[42]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.11511*t9451 + t9453 + t9464 + t9474 + var1[2];
  p_output1[43]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.115327*t9451 + t9453 + t9464 + t9479 + var1[2];
  p_output1[44]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.117134*t9451 + t9453 + t9464 + t9482 + var1[2];
  p_output1[45]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9485 + t9486 + var1[2];
  p_output1[46]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.124584*t9451 + t9453 + t9464 + t9488 + var1[2];
  p_output1[47]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.129419*t9451 + t9453 + t9464 + t9491 + var1[2];
  p_output1[48]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9496 + t9498 + var1[2];
  p_output1[49]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.138748*t9451 + t9453 + t9464 + t9502 + var1[2];
  p_output1[50]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9508 + t9509 + var1[2];
  p_output1[51]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9512 + t9513 + var1[2];
  p_output1[52]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9516 + t9517 + var1[2];
  p_output1[53]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9519 + t9521 + var1[2];
  p_output1[54]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.141421*t9451 + t9453 + t9464 + t9535 + var1[2];
  p_output1[55]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.137644*t9451 + t9453 + t9464 + t9539 + var1[2];
  p_output1[56]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9547 + t9550 + var1[2];
  p_output1[57]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9552 + t9553 + var1[2];
  p_output1[58]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9464 + t9556 + t9557 + var1[2];
  p_output1[59]=t9465;
  p_output1[60]=t9562;
  p_output1[61]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.116508*t9083 + t9160 + t9181 + t9560 + var1[0];
  p_output1[62]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.115111*t9083 + t9160 + t9187 + t9560 + var1[0];
  p_output1[63]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.115328*t9083 + t9160 + t9194 + t9560 + var1[0];
  p_output1[64]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.117135*t9083 + t9160 + t9203 + t9560 + var1[0];
  p_output1[65]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9212 + t9215 + t9560 + var1[0];
  p_output1[66]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.124585*t9083 + t9160 + t9220 + t9560 + var1[0];
  p_output1[67]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.12942*t9083 + t9160 + t9224 + t9560 + var1[0];
  p_output1[68]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9232 + t9233 + t9560 + var1[0];
  p_output1[69]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.138749*t9083 + t9160 + t9235 + t9560 + var1[0];
  p_output1[70]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9238 + t9239 + t9560 + var1[0];
  p_output1[71]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9241 + t9242 + t9560 + var1[0];
  p_output1[72]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9244 + t9245 + t9560 + var1[0];
  p_output1[73]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9247 + t9248 + t9560 + var1[0];
  p_output1[74]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.141422*t9083 + t9160 + t9250 + t9560 + var1[0];
  p_output1[75]=t5464 + t6707 + t7707 + t8491 + t8750 + 0.137645*t9083 + t9160 + t9254 + t9560 + var1[0];
  p_output1[76]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9257 + t9258 + t9560 + var1[0];
  p_output1[77]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9261 + t9265 + t9560 + var1[0];
  p_output1[78]=t5464 + t6707 + t7707 + t8491 + t8750 + t9160 + t9267 + t9268 + t9560 + var1[0];
  p_output1[79]=t9562;
  p_output1[80]=t9605;
  p_output1[81]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.116508*t9324 + t9327 + t9338 + t9604 + var1[1];
  p_output1[82]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.115111*t9324 + t9327 + t9341 + t9604 + var1[1];
  p_output1[83]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.115328*t9324 + t9327 + t9344 + t9604 + var1[1];
  p_output1[84]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.117135*t9324 + t9327 + t9347 + t9604 + var1[1];
  p_output1[85]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9350 + t9351 + t9604 + var1[1];
  p_output1[86]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.124585*t9324 + t9327 + t9353 + t9604 + var1[1];
  p_output1[87]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.12942*t9324 + t9327 + t9359 + t9604 + var1[1];
  p_output1[88]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9363 + t9364 + t9604 + var1[1];
  p_output1[89]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.138749*t9324 + t9327 + t9366 + t9604 + var1[1];
  p_output1[90]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9370 + t9371 + t9604 + var1[1];
  p_output1[91]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9374 + t9375 + t9604 + var1[1];
  p_output1[92]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9377 + t9378 + t9604 + var1[1];
  p_output1[93]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9380 + t9381 + t9604 + var1[1];
  p_output1[94]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.141422*t9324 + t9327 + t9384 + t9604 + var1[1];
  p_output1[95]=t9280 + t9284 + t9285 + t9295 + t9303 + 0.137645*t9324 + t9327 + t9390 + t9604 + var1[1];
  p_output1[96]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9401 + t9402 + t9604 + var1[1];
  p_output1[97]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9405 + t9406 + t9604 + var1[1];
  p_output1[98]=t9280 + t9284 + t9285 + t9295 + t9303 + t9327 + t9411 + t9412 + t9604 + var1[1];
  p_output1[99]=t9605;
  p_output1[100]=t9644;
  p_output1[101]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.116508*t9451 + t9453 + t9466 + t9642 + var1[2];
  p_output1[102]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.115111*t9451 + t9453 + t9474 + t9642 + var1[2];
  p_output1[103]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.115328*t9451 + t9453 + t9479 + t9642 + var1[2];
  p_output1[104]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.117135*t9451 + t9453 + t9482 + t9642 + var1[2];
  p_output1[105]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9485 + t9486 + t9642 + var1[2];
  p_output1[106]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.124585*t9451 + t9453 + t9488 + t9642 + var1[2];
  p_output1[107]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.12942*t9451 + t9453 + t9491 + t9642 + var1[2];
  p_output1[108]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9496 + t9498 + t9642 + var1[2];
  p_output1[109]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.138749*t9451 + t9453 + t9502 + t9642 + var1[2];
  p_output1[110]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9508 + t9509 + t9642 + var1[2];
  p_output1[111]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9512 + t9513 + t9642 + var1[2];
  p_output1[112]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9516 + t9517 + t9642 + var1[2];
  p_output1[113]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9519 + t9521 + t9642 + var1[2];
  p_output1[114]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.141422*t9451 + t9453 + t9535 + t9642 + var1[2];
  p_output1[115]=t9418 + t9423 + t9424 + t9429 + t9435 + 0.137645*t9451 + t9453 + t9539 + t9642 + var1[2];
  p_output1[116]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9547 + t9550 + t9642 + var1[2];
  p_output1[117]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9552 + t9553 + t9642 + var1[2];
  p_output1[118]=t9418 + t9423 + t9424 + t9429 + t9435 + t9453 + t9556 + t9557 + t9642 + var1[2];
  p_output1[119]=t9644;
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

#include "lower_leg_front_leftL_link_bar.hh"

namespace SymFunction
{

void lower_leg_front_leftL_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
