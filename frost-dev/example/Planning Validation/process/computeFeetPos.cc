/*
 * Automatically Generated from Mathematica.
 * Wed 5 Aug 2020 10:37:31 GMT-04:00
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
  double t511;
  double t36134;
  double t37220;
  double t49119;
  double t50067;
  double t4928;
  double t5461;
  double t57507;
  double t57627;
  double t57630;
  double t57676;
  double t50472;
  double t51215;
  double t51348;
  double t52971;
  double t57687;
  double t57720;
  double t57791;
  double t57842;
  double t58100;
  double t58237;
  double t59466;
  double t59845;
  double t53451;
  double t54747;
  double t55168;
  double t60645;
  double t60651;
  double t60652;
  double t61502;
  double t61617;
  double t61915;
  double t61403;
  double t61917;
  double t61918;
  double t61938;
  double t61662;
  double t61798;
  double t61812;
  double t61861;
  double t61952;
  double t61956;
  double t61965;
  double t61973;
  double t61982;
  double t61993;
  double t61994;
  double t61995;
  double t61893;
  double t61895;
  double t61896;
  double t62003;
  double t62006;
  double t62007;
  double t62059;
  double t62072;
  double t62106;
  double t62046;
  double t62110;
  double t62114;
  double t62118;
  double t62085;
  double t62087;
  double t62088;
  double t62091;
  double t62124;
  double t62125;
  double t62127;
  double t62131;
  double t62133;
  double t62135;
  double t62139;
  double t62144;
  double t62095;
  double t62096;
  double t62097;
  double t62168;
  double t62173;
  double t62179;
  double t62220;
  double t62222;
  double t62276;
  double t62209;
  double t62277;
  double t62278;
  double t62279;
  double t62229;
  double t62230;
  double t62233;
  double t62236;
  double t62281;
  double t62283;
  double t62284;
  double t62285;
  double t62288;
  double t62301;
  double t62308;
  double t62316;
  double t62249;
  double t62256;
  double t62274;
  double t62323;
  double t62324;
  double t62325;
  double t27133;
  double t34041;
  double t36386;
  double t37013;
  double t62350;
  double t62348;
  double t52657;
  double t53033;
  double t53320;
  double t62361;
  double t62362;
  double t62363;
  double t57701;
  double t62349;
  double t62351;
  double t62352;
  double t62372;
  double t62373;
  double t62375;
  double t60207;
  double t60643;
  double t60644;
  double t62378;
  double t62379;
  double t62380;
  double t62382;
  double t62383;
  double t62384;
  double t62366;
  double t62367;
  double t62368;
  double t62386;
  double t62387;
  double t62388;
  double t61407;
  double t61408;
  double t61618;
  double t61640;
  double t61822;
  double t61874;
  double t61887;
  double t62413;
  double t62414;
  double t62415;
  double t61991;
  double t61992;
  double t61997;
  double t61998;
  double t61999;
  double t62417;
  double t62418;
  double t62419;
  double t62422;
  double t62423;
  double t62424;
  double t62408;
  double t62409;
  double t62411;
  double t62427;
  double t62428;
  double t62429;
  double t62047;
  double t62048;
  double t62077;
  double t62082;
  double t62089;
  double t62092;
  double t62094;
  double t62463;
  double t62464;
  double t62465;
  double t62134;
  double t62151;
  double t62158;
  double t62162;
  double t62467;
  double t62470;
  double t62471;
  double t62473;
  double t62474;
  double t62475;
  double t62459;
  double t62460;
  double t62461;
  double t62479;
  double t62480;
  double t62481;
  double t62213;
  double t62218;
  double t62223;
  double t62224;
  double t62235;
  double t62240;
  double t62244;
  double t62511;
  double t62518;
  double t62519;
  double t62292;
  double t62296;
  double t62318;
  double t62319;
  double t62320;
  double t62521;
  double t62523;
  double t62524;
  double t62526;
  double t62527;
  double t62528;
  double t62505;
  double t62508;
  double t62509;
  double t62532;
  double t62533;
  double t62534;
  double t62570;
  double t62571;
  double t62572;
  double t62560;
  double t62561;
  double t62563;
  double t62592;
  double t62593;
  double t62594;
  double t62596;
  double t62598;
  double t62600;
  double t62607;
  double t62608;
  double t62609;
  double t62588;
  double t62589;
  double t62590;
  double t62618;
  double t62619;
  double t62620;
  double t62687;
  double t62689;
  double t62690;
  double t62692;
  double t62695;
  double t62696;
  double t62700;
  double t62710;
  double t62711;
  double t62679;
  double t62681;
  double t62682;
  double t62713;
  double t62714;
  double t62717;
  double t62852;
  double t62853;
  double t62854;
  double t62857;
  double t62858;
  double t62860;
  double t62862;
  double t62864;
  double t62865;
  double t62847;
  double t62848;
  double t62849;
  double t62870;
  double t62871;
  double t62872;
  double t62898;
  double t62899;
  double t62900;
  double t62902;
  double t62904;
  double t62905;
  double t62908;
  double t62910;
  double t62911;
  double t62893;
  double t62894;
  double t62895;
  double t62915;
  double t62916;
  double t62918;
  t511 = Cos(var1[4]);
  t36134 = Cos(var1[6]);
  t37220 = Sin(var1[5]);
  t49119 = Sin(var1[4]);
  t50067 = Sin(var1[6]);
  t4928 = Cos(var1[5]);
  t5461 = Cos(var1[7]);
  t57507 = t36134*t49119;
  t57627 = t511*t37220*t50067;
  t57630 = t57507 + t57627;
  t57676 = Sin(var1[7]);
  t50472 = Cos(var1[9]);
  t51215 = -1.*t50472;
  t51348 = 1. + t51215;
  t52971 = Sin(var1[9]);
  t57687 = Cos(var1[8]);
  t57720 = t511*t4928*t5461;
  t57791 = t57630*t57676;
  t57842 = t57720 + t57791;
  t58100 = t5461*t57630;
  t58237 = -1.*t511*t4928*t57676;
  t59466 = t58100 + t58237;
  t59845 = Sin(var1[8]);
  t53451 = -1.*t511*t36134*t37220;
  t54747 = t49119*t50067;
  t55168 = t53451 + t54747;
  t60645 = t57687*t57842;
  t60651 = -1.*t59466*t59845;
  t60652 = t60645 + t60651;
  t61502 = Sin(var1[10]);
  t61617 = Cos(var1[10]);
  t61915 = Sin(var1[11]);
  t61403 = Cos(var1[11]);
  t61917 = t61617*t49119;
  t61918 = t511*t61502*t37220;
  t61938 = t61917 + t61918;
  t61662 = Cos(var1[13]);
  t61798 = -1.*t61662;
  t61812 = 1. + t61798;
  t61861 = Sin(var1[13]);
  t61952 = Sin(var1[12]);
  t61956 = -1.*t511*t4928*t61915;
  t61965 = t61403*t61938;
  t61973 = t61956 + t61965;
  t61982 = Cos(var1[12]);
  t61993 = t61403*t511*t4928;
  t61994 = t61915*t61938;
  t61995 = t61993 + t61994;
  t61893 = t61502*t49119;
  t61895 = -1.*t61617*t511*t37220;
  t61896 = t61893 + t61895;
  t62003 = -1.*t61952*t61973;
  t62006 = t61982*t61995;
  t62007 = t62003 + t62006;
  t62059 = Sin(var1[14]);
  t62072 = Cos(var1[14]);
  t62106 = Sin(var1[15]);
  t62046 = Cos(var1[15]);
  t62110 = t62072*t49119;
  t62114 = t511*t62059*t37220;
  t62118 = t62110 + t62114;
  t62085 = Cos(var1[17]);
  t62087 = -1.*t62085;
  t62088 = 1. + t62087;
  t62091 = Sin(var1[17]);
  t62124 = Sin(var1[16]);
  t62125 = -1.*t511*t4928*t62106;
  t62127 = t62046*t62118;
  t62131 = t62125 + t62127;
  t62133 = Cos(var1[16]);
  t62135 = t62046*t511*t4928;
  t62139 = t62106*t62118;
  t62144 = t62135 + t62139;
  t62095 = t62059*t49119;
  t62096 = -1.*t62072*t511*t37220;
  t62097 = t62095 + t62096;
  t62168 = -1.*t62124*t62131;
  t62173 = t62133*t62144;
  t62179 = t62168 + t62173;
  t62220 = Sin(var1[18]);
  t62222 = Cos(var1[18]);
  t62276 = Sin(var1[19]);
  t62209 = Cos(var1[19]);
  t62277 = t62222*t49119;
  t62278 = t511*t62220*t37220;
  t62279 = t62277 + t62278;
  t62229 = Cos(var1[21]);
  t62230 = -1.*t62229;
  t62233 = 1. + t62230;
  t62236 = Sin(var1[21]);
  t62281 = Sin(var1[20]);
  t62283 = -1.*t511*t4928*t62276;
  t62284 = t62209*t62279;
  t62285 = t62283 + t62284;
  t62288 = Cos(var1[20]);
  t62301 = t62209*t511*t4928;
  t62308 = t62276*t62279;
  t62316 = t62301 + t62308;
  t62249 = t62220*t49119;
  t62256 = -1.*t62222*t511*t37220;
  t62274 = t62249 + t62256;
  t62323 = -1.*t62281*t62285;
  t62324 = t62288*t62316;
  t62325 = t62323 + t62324;
  t27133 = -1.*t5461;
  t34041 = 1. + t27133;
  t36386 = -1.*t36134;
  t37013 = 1. + t36386;
  t62350 = Cos(var1[3]);
  t62348 = Sin(var1[3]);
  t52657 = 0.196*t51348;
  t53033 = -0.3*t52971;
  t53320 = t52657 + t53033;
  t62361 = t62350*t4928;
  t62362 = -1.*t62348*t49119*t37220;
  t62363 = t62361 + t62362;
  t57701 = -1. + t57687;
  t62349 = t4928*t62348*t49119;
  t62351 = t62350*t37220;
  t62352 = t62349 + t62351;
  t62372 = -1.*t511*t36134*t62348;
  t62373 = -1.*t62363*t50067;
  t62375 = t62372 + t62373;
  t60207 = 0.3*t51348;
  t60643 = 0.196*t52971;
  t60644 = t60207 + t60643;
  t62378 = t5461*t62352;
  t62379 = t62375*t57676;
  t62380 = t62378 + t62379;
  t62382 = t5461*t62375;
  t62383 = -1.*t62352*t57676;
  t62384 = t62382 + t62383;
  t62366 = t36134*t62363;
  t62367 = -1.*t511*t62348*t50067;
  t62368 = t62366 + t62367;
  t62386 = t57687*t62380;
  t62387 = -1.*t62384*t59845;
  t62388 = t62386 + t62387;
  t61407 = -1.*t61403;
  t61408 = 1. + t61407;
  t61618 = -1.*t61617;
  t61640 = 1. + t61618;
  t61822 = 0.196*t61812;
  t61874 = 0.3*t61861;
  t61887 = t61822 + t61874;
  t62413 = -1.*t61617*t511*t62348;
  t62414 = -1.*t61502*t62363;
  t62415 = t62413 + t62414;
  t61991 = -1.*t61982;
  t61992 = 1. + t61991;
  t61997 = -0.3*t61812;
  t61998 = 0.196*t61861;
  t61999 = t61997 + t61998;
  t62417 = -1.*t61915*t62352;
  t62418 = t61403*t62415;
  t62419 = t62417 + t62418;
  t62422 = t61403*t62352;
  t62423 = t61915*t62415;
  t62424 = t62422 + t62423;
  t62408 = -1.*t511*t61502*t62348;
  t62409 = t61617*t62363;
  t62411 = t62408 + t62409;
  t62427 = -1.*t61952*t62419;
  t62428 = t61982*t62424;
  t62429 = t62427 + t62428;
  t62047 = -1.*t62046;
  t62048 = 1. + t62047;
  t62077 = -1.*t62072;
  t62082 = 1. + t62077;
  t62089 = -0.196*t62088;
  t62092 = -0.3*t62091;
  t62094 = t62089 + t62092;
  t62463 = -1.*t62072*t511*t62348;
  t62464 = -1.*t62059*t62363;
  t62465 = t62463 + t62464;
  t62134 = -1. + t62133;
  t62151 = 0.3*t62088;
  t62158 = -0.196*t62091;
  t62162 = t62151 + t62158;
  t62467 = -1.*t62106*t62352;
  t62470 = t62046*t62465;
  t62471 = t62467 + t62470;
  t62473 = t62046*t62352;
  t62474 = t62106*t62465;
  t62475 = t62473 + t62474;
  t62459 = -1.*t511*t62059*t62348;
  t62460 = t62072*t62363;
  t62461 = t62459 + t62460;
  t62479 = -1.*t62124*t62471;
  t62480 = t62133*t62475;
  t62481 = t62479 + t62480;
  t62213 = -1.*t62209;
  t62218 = 1. + t62213;
  t62223 = -1.*t62222;
  t62224 = 1. + t62223;
  t62235 = -0.196*t62233;
  t62240 = 0.3*t62236;
  t62244 = t62235 + t62240;
  t62511 = -1.*t62222*t511*t62348;
  t62518 = -1.*t62220*t62363;
  t62519 = t62511 + t62518;
  t62292 = -1.*t62288;
  t62296 = 1. + t62292;
  t62318 = -0.3*t62233;
  t62319 = -0.196*t62236;
  t62320 = t62318 + t62319;
  t62521 = -1.*t62276*t62352;
  t62523 = t62209*t62519;
  t62524 = t62521 + t62523;
  t62526 = t62209*t62352;
  t62527 = t62276*t62519;
  t62528 = t62526 + t62527;
  t62505 = -1.*t511*t62220*t62348;
  t62508 = t62222*t62363;
  t62509 = t62505 + t62508;
  t62532 = -1.*t62281*t62524;
  t62533 = t62288*t62528;
  t62534 = t62532 + t62533;
  t62570 = t4928*t62348;
  t62571 = t62350*t49119*t37220;
  t62572 = t62570 + t62571;
  t62560 = -1.*t62350*t4928*t49119;
  t62561 = t62348*t37220;
  t62563 = t62560 + t62561;
  t62592 = t62350*t511*t36134;
  t62593 = -1.*t62572*t50067;
  t62594 = t62592 + t62593;
  t62596 = t5461*t62563;
  t62598 = t62594*t57676;
  t62600 = t62596 + t62598;
  t62607 = t5461*t62594;
  t62608 = -1.*t62563*t57676;
  t62609 = t62607 + t62608;
  t62588 = t36134*t62572;
  t62589 = t62350*t511*t50067;
  t62590 = t62588 + t62589;
  t62618 = t57687*t62600;
  t62619 = -1.*t62609*t59845;
  t62620 = t62618 + t62619;
  t62687 = t61617*t62350*t511;
  t62689 = -1.*t61502*t62572;
  t62690 = t62687 + t62689;
  t62692 = -1.*t61915*t62563;
  t62695 = t61403*t62690;
  t62696 = t62692 + t62695;
  t62700 = t61403*t62563;
  t62710 = t61915*t62690;
  t62711 = t62700 + t62710;
  t62679 = t62350*t511*t61502;
  t62681 = t61617*t62572;
  t62682 = t62679 + t62681;
  t62713 = -1.*t61952*t62696;
  t62714 = t61982*t62711;
  t62717 = t62713 + t62714;
  t62852 = t62072*t62350*t511;
  t62853 = -1.*t62059*t62572;
  t62854 = t62852 + t62853;
  t62857 = -1.*t62106*t62563;
  t62858 = t62046*t62854;
  t62860 = t62857 + t62858;
  t62862 = t62046*t62563;
  t62864 = t62106*t62854;
  t62865 = t62862 + t62864;
  t62847 = t62350*t511*t62059;
  t62848 = t62072*t62572;
  t62849 = t62847 + t62848;
  t62870 = -1.*t62124*t62860;
  t62871 = t62133*t62865;
  t62872 = t62870 + t62871;
  t62898 = t62222*t62350*t511;
  t62899 = -1.*t62220*t62572;
  t62900 = t62898 + t62899;
  t62902 = -1.*t62276*t62563;
  t62904 = t62209*t62900;
  t62905 = t62902 + t62904;
  t62908 = t62209*t62563;
  t62910 = t62276*t62900;
  t62911 = t62908 + t62910;
  t62893 = t62350*t511*t62220;
  t62894 = t62222*t62572;
  t62895 = t62893 + t62894;
  t62915 = -1.*t62281*t62905;
  t62916 = t62288*t62911;
  t62918 = t62915 + t62916;
  p_output1[0]=-0.128*t49119*t50067 - 0.128*t37013*t37220*t511 + 0.3*t34041*t4928*t511 + t53320*t55168 - 0.3*t57630*t57676 + 0.04*t57701*t57842 - 0.04*t59466*t59845 - 0.0461*(t57687*t59466 + t57842*t59845) + t60644*t60652 + 0.3*(t52971*t55168 + t50472*t60652) + 0.196*(t50472*t55168 - 1.*t52971*t60652) + var1[0];
  p_output1[1]=-0.3*t4928*t511*t61408 - 0.128*t49119*t61502 - 0.128*t37220*t511*t61640 + t61887*t61896 + 0.3*t61915*t61938 - 0.64*t61952*t61973 - 0.64*t61992*t61995 - 0.0461*(t61973*t61982 + t61952*t61995) + t61999*t62007 - 0.3*(t61861*t61896 + t61662*t62007) + 0.196*(t61662*t61896 - 1.*t61861*t62007) + var1[0];
  p_output1[2]=0.3*t4928*t511*t62048 + 0.128*t49119*t62059 + 0.128*t37220*t511*t62082 + t62094*t62097 - 0.3*t62106*t62118 - 0.04*t62124*t62131 + 0.04*t62134*t62144 - 0.0461*(t62131*t62133 + t62124*t62144) + t62162*t62179 + 0.3*(t62091*t62097 + t62085*t62179) - 0.196*(t62085*t62097 - 1.*t62091*t62179) + var1[0];
  p_output1[3]=-0.3*t4928*t511*t62218 + 0.128*t49119*t62220 + 0.128*t37220*t511*t62224 + t62244*t62274 + 0.3*t62276*t62279 - 0.64*t62281*t62285 - 0.64*t62296*t62316 - 0.0461*(t62285*t62288 + t62281*t62316) + t62320*t62325 - 0.3*(t62236*t62274 + t62229*t62325) - 0.196*(t62229*t62274 - 1.*t62236*t62325) + var1[0];
  p_output1[4]=0.128*t50067*t511*t62348 + 0.3*t34041*t62352 + 0.128*t37013*t62363 + t53320*t62368 - 0.3*t57676*t62375 + 0.04*t57701*t62380 - 0.04*t59845*t62384 - 0.0461*(t59845*t62380 + t57687*t62384) + t60644*t62388 + 0.3*(t52971*t62368 + t50472*t62388) + 0.196*(t50472*t62368 - 1.*t52971*t62388) + var1[1];
  p_output1[5]=0.128*t511*t61502*t62348 - 0.3*t61408*t62352 + 0.128*t61640*t62363 + t61887*t62411 + 0.3*t61915*t62415 - 0.64*t61952*t62419 - 0.64*t61992*t62424 - 0.0461*(t61982*t62419 + t61952*t62424) + t61999*t62429 - 0.3*(t61861*t62411 + t61662*t62429) + 0.196*(t61662*t62411 - 1.*t61861*t62429) + var1[1];
  p_output1[6]=-0.128*t511*t62059*t62348 + 0.3*t62048*t62352 - 0.128*t62082*t62363 + t62094*t62461 - 0.3*t62106*t62465 - 0.04*t62124*t62471 + 0.04*t62134*t62475 - 0.0461*(t62133*t62471 + t62124*t62475) + t62162*t62481 + 0.3*(t62091*t62461 + t62085*t62481) - 0.196*(t62085*t62461 - 1.*t62091*t62481) + var1[1];
  p_output1[7]=-0.128*t511*t62220*t62348 - 0.3*t62218*t62352 - 0.128*t62224*t62363 + t62244*t62509 + 0.3*t62276*t62519 - 0.64*t62281*t62524 - 0.64*t62296*t62528 - 0.0461*(t62288*t62524 + t62281*t62528) + t62320*t62534 - 0.3*(t62236*t62509 + t62229*t62534) - 0.196*(t62229*t62509 - 1.*t62236*t62534) + var1[1];
  p_output1[8]=-0.128*t50067*t511*t62350 + 0.3*t34041*t62563 + 0.128*t37013*t62572 + t53320*t62590 - 0.3*t57676*t62594 + 0.04*t57701*t62600 - 0.04*t59845*t62609 - 0.0461*(t59845*t62600 + t57687*t62609) + t60644*t62620 + 0.3*(t52971*t62590 + t50472*t62620) + 0.196*(t50472*t62590 - 1.*t52971*t62620) + var1[2];
  p_output1[9]=-0.128*t511*t61502*t62350 - 0.3*t61408*t62563 + 0.128*t61640*t62572 + t61887*t62682 + 0.3*t61915*t62690 - 0.64*t61952*t62696 - 0.64*t61992*t62711 - 0.0461*(t61982*t62696 + t61952*t62711) + t61999*t62717 - 0.3*(t61861*t62682 + t61662*t62717) + 0.196*(t61662*t62682 - 1.*t61861*t62717) + var1[2];
  p_output1[10]=0.128*t511*t62059*t62350 + 0.3*t62048*t62563 - 0.128*t62082*t62572 + t62094*t62849 - 0.3*t62106*t62854 - 0.04*t62124*t62860 + 0.04*t62134*t62865 - 0.0461*(t62133*t62860 + t62124*t62865) + t62162*t62872 + 0.3*(t62091*t62849 + t62085*t62872) - 0.196*(t62085*t62849 - 1.*t62091*t62872) + var1[2];
  p_output1[11]=0.128*t511*t62220*t62350 - 0.3*t62218*t62563 - 0.128*t62224*t62572 + t62244*t62895 + 0.3*t62276*t62900 - 0.64*t62281*t62905 - 0.64*t62296*t62911 - 0.0461*(t62288*t62905 + t62281*t62911) + t62320*t62918 - 0.3*(t62236*t62895 + t62229*t62918) - 0.196*(t62229*t62895 - 1.*t62236*t62918) + var1[2];
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
