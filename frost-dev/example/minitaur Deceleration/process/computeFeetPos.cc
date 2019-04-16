/*
 * Automatically Generated from Mathematica.
 * Tue 16 Apr 2019 16:06:43 GMT-04:00
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
  double t2201;
  double t15809;
  double t22305;
  double t24409;
  double t6580;
  double t34759;
  double t36035;
  double t36081;
  double t37088;
  double t37156;
  double t37265;
  double t39969;
  double t41238;
  double t41472;
  double t42153;
  double t36293;
  double t36438;
  double t36515;
  double t36522;
  double t39970;
  double t43269;
  double t43370;
  double t43475;
  double t43501;
  double t43505;
  double t66858;
  double t74653;
  double t72529;
  double t74608;
  double t74629;
  double t74632;
  double t74636;
  double t74637;
  double t74640;
  double t74655;
  double t36986;
  double t73202;
  double t39857;
  double t74295;
  double t74300;
  double t75031;
  double t74643;
  double t75151;
  double t75195;
  double t75211;
  double t75238;
  double t75241;
  double t75242;
  double t75245;
  double t75247;
  double t75228;
  double t75253;
  double t75254;
  double t75287;
  double t75250;
  double t75251;
  double t75289;
  double t75266;
  double t75267;
  double t75274;
  double t75279;
  double t75280;
  double t75285;
  double t75295;
  double t75296;
  double t75297;
  double t75299;
  double t75318;
  double t75346;
  double t75347;
  double t75348;
  double t75349;
  double t75350;
  double t75353;
  double t75360;
  double t75361;
  double t75356;
  double t75290;
  double t75354;
  double t75365;
  double t75399;
  double t75400;
  double t75402;
  double t75408;
  double t75410;
  double t75412;
  double t75424;
  double t75432;
  double t75404;
  double t75436;
  double t75437;
  double t75448;
  double t75433;
  double t75434;
  double t75453;
  double t75440;
  double t75441;
  double t75442;
  double t75443;
  double t75445;
  double t75446;
  double t75478;
  double t75479;
  double t75482;
  double t75483;
  double t75492;
  double t75493;
  double t75494;
  double t75495;
  double t75496;
  double t75497;
  double t75499;
  double t75535;
  double t75536;
  double t75516;
  double t75457;
  double t75500;
  double t75541;
  double t75566;
  double t75574;
  double t75576;
  double t75608;
  double t75609;
  double t75610;
  double t75613;
  double t75616;
  double t75579;
  double t75621;
  double t75622;
  double t75694;
  double t75617;
  double t75618;
  double t75705;
  double t75631;
  double t75650;
  double t75669;
  double t75673;
  double t75676;
  double t75677;
  double t75715;
  double t75716;
  double t75717;
  double t75718;
  double t75729;
  double t75731;
  double t75732;
  double t75735;
  double t75736;
  double t75741;
  double t75746;
  double t75756;
  double t75757;
  double t75751;
  double t75706;
  double t75747;
  double t75789;
  double t75824;
  double t75820;
  double t75821;
  double t75825;
  double t75827;
  double t75831;
  double t75833;
  double t75839;
  double t39113;
  double t39976;
  double t40478;
  double t42466;
  double t42757;
  double t67830;
  double t69171;
  double t74095;
  double t74251;
  double t74289;
  double t75851;
  double t75852;
  double t75857;
  double t75866;
  double t74647;
  double t75868;
  double t75881;
  double t75882;
  double t75885;
  double t74860;
  double t74917;
  double t75888;
  double t75890;
  double t75892;
  double t75895;
  double t75107;
  double t75108;
  double t75110;
  double t75111;
  double t75112;
  double t75139;
  double t75237;
  double t75244;
  double t75252;
  double t75255;
  double t75262;
  double t75288;
  double t75291;
  double t75292;
  double t75293;
  double t75294;
  double t75301;
  double t75302;
  double t75303;
  double t75305;
  double t75311;
  double t75983;
  double t75986;
  double t75988;
  double t75989;
  double t75357;
  double t75992;
  double t75993;
  double t75994;
  double t75995;
  double t75998;
  double t76001;
  double t76002;
  double t76003;
  double t75373;
  double t75389;
  double t75390;
  double t75407;
  double t75419;
  double t75435;
  double t75438;
  double t75439;
  double t75449;
  double t75458;
  double t75465;
  double t75472;
  double t75473;
  double t75485;
  double t75486;
  double t75487;
  double t75489;
  double t75491;
  double t76027;
  double t76223;
  double t76437;
  double t76499;
  double t75532;
  double t76507;
  double t76535;
  double t76557;
  double t76558;
  double t76561;
  double t76567;
  double t76586;
  double t76620;
  double t75544;
  double t75548;
  double t75549;
  double t75601;
  double t75612;
  double t75620;
  double t75623;
  double t75626;
  double t75695;
  double t75707;
  double t75708;
  double t75709;
  double t75710;
  double t75723;
  double t75724;
  double t75725;
  double t75727;
  double t75728;
  double t77071;
  double t77072;
  double t77077;
  double t77081;
  double t75753;
  double t77087;
  double t77088;
  double t77093;
  double t77097;
  double t77106;
  double t77242;
  double t77250;
  double t77258;
  double t75792;
  double t75804;
  double t75805;
  double t77352;
  double t77356;
  double t77360;
  double t77365;
  double t77366;
  double t77367;
  double t77380;
  double t77381;
  double t77385;
  double t77386;
  double t77388;
  double t77389;
  double t77392;
  double t77393;
  double t77407;
  double t77411;
  double t77415;
  double t77417;
  double t77459;
  double t77460;
  double t77462;
  double t77464;
  double t77466;
  double t77467;
  double t77469;
  double t77470;
  double t77473;
  double t77475;
  double t77477;
  double t77480;
  double t77511;
  double t77512;
  double t77513;
  double t77517;
  double t77520;
  double t77521;
  double t77522;
  double t77523;
  double t77525;
  double t77527;
  double t77529;
  double t77531;
  double t77566;
  double t77567;
  double t77569;
  double t77570;
  double t77573;
  double t77574;
  double t77575;
  double t77576;
  double t77578;
  double t77580;
  double t77583;
  double t77585;
  t2201 = Cos(var1[4]);
  t15809 = Cos(var1[6]);
  t22305 = -1.*t15809;
  t24409 = 1. + t22305;
  t6580 = Cos(var1[5]);
  t34759 = Sin(var1[5]);
  t36035 = Sin(var1[4]);
  t36081 = Sin(var1[6]);
  t37088 = Cos(var1[8]);
  t37156 = -1.*t37088;
  t37265 = 1. + t37156;
  t39969 = Sin(var1[8]);
  t41238 = -3.e-6*t37265;
  t41472 = 3.e-6*t39969;
  t42153 = t41238 + t41472;
  t36293 = t2201*t6580*t15809;
  t36438 = -3.e-6*t2201*t24409*t34759;
  t36515 = t36035*t36081;
  t36522 = t36293 + t36438 + t36515;
  t39970 = -1.*t39969;
  t43269 = 3.e-6*t2201*t6580*t24409;
  t43370 = -9.e-12*t24409;
  t43475 = 1. + t43370;
  t43501 = -1.*t2201*t43475*t34759;
  t43505 = -3.e-6*t36035*t36081;
  t66858 = t43269 + t43501 + t43505;
  t74653 = 3.e-6*t37265;
  t72529 = -3.e-6*t39969;
  t74608 = -1.000000000009*t24409;
  t74629 = 1. + t74608;
  t74632 = t74629*t36035;
  t74636 = -1.*t2201*t6580*t36081;
  t74637 = -3.e-6*t2201*t34759*t36081;
  t74640 = t74632 + t74636 + t74637;
  t74655 = t74653 + t41472;
  t36986 = 1.125e-12*var1[8];
  t73202 = t41238 + t72529;
  t39857 = -9.e-12*t37265;
  t74295 = -1.000000000009*t37265;
  t74300 = 1. + t74295;
  t75031 = t74653 + t72529;
  t74643 = 9.e-12*t37265;
  t75151 = Cos(var1[10]);
  t75195 = -1.*t75151;
  t75211 = 1. + t75195;
  t75238 = Cos(var1[12]);
  t75241 = -1.*t75238;
  t75242 = 1. + t75241;
  t75245 = -3.e-6*t75242;
  t75247 = Sin(var1[12]);
  t75228 = Sin(var1[10]);
  t75253 = 3.e-6*t75247;
  t75254 = t75245 + t75253;
  t75287 = 7.5e-14*var1[12];
  t75250 = -3.e-6*t75247;
  t75251 = t75245 + t75250;
  t75289 = -9.e-12*t75242;
  t75266 = 3.e-6*t75211*t2201*t6580;
  t75267 = -3.e-6*t75228*t36035;
  t75274 = -9.e-12*t75211;
  t75279 = 1. + t75274;
  t75280 = -1.*t75279*t2201*t34759;
  t75285 = t75266 + t75267 + t75280;
  t75295 = t75151*t2201*t6580;
  t75296 = t75228*t36035;
  t75297 = -3.e-6*t75211*t2201*t34759;
  t75299 = t75295 + t75296 + t75297;
  t75318 = -1.*t2201*t6580*t75228;
  t75346 = -1.000000000009*t75211;
  t75347 = 1. + t75346;
  t75348 = t75347*t36035;
  t75349 = -3.e-6*t2201*t75228*t34759;
  t75350 = t75318 + t75348 + t75349;
  t75353 = 3.e-6*t75242;
  t75360 = -1.000000000009*t75242;
  t75361 = 1. + t75360;
  t75356 = 9.e-12*t75242;
  t75290 = -1.*t75247;
  t75354 = t75353 + t75250;
  t75365 = t75353 + t75253;
  t75399 = Cos(var1[15]);
  t75400 = -1.*t75399;
  t75402 = 1. + t75400;
  t75408 = Cos(var1[17]);
  t75410 = -1.*t75408;
  t75412 = 1. + t75410;
  t75424 = -3.e-6*t75412;
  t75432 = Sin(var1[17]);
  t75404 = Sin(var1[15]);
  t75436 = 3.e-6*t75432;
  t75437 = t75424 + t75436;
  t75448 = 1.125e-12*var1[17];
  t75433 = -3.e-6*t75432;
  t75434 = t75424 + t75433;
  t75453 = -9.e-12*t75412;
  t75440 = 3.e-6*t75402*t2201*t6580;
  t75441 = -3.e-6*t75404*t36035;
  t75442 = -9.e-12*t75402;
  t75443 = 1. + t75442;
  t75445 = -1.*t75443*t2201*t34759;
  t75446 = t75440 + t75441 + t75445;
  t75478 = t75399*t2201*t6580;
  t75479 = t75404*t36035;
  t75482 = -3.e-6*t75402*t2201*t34759;
  t75483 = t75478 + t75479 + t75482;
  t75492 = -1.*t2201*t6580*t75404;
  t75493 = -1.000000000009*t75402;
  t75494 = 1. + t75493;
  t75495 = t75494*t36035;
  t75496 = -3.e-6*t2201*t75404*t34759;
  t75497 = t75492 + t75495 + t75496;
  t75499 = 3.e-6*t75412;
  t75535 = -1.000000000009*t75412;
  t75536 = 1. + t75535;
  t75516 = 9.e-12*t75412;
  t75457 = -1.*t75432;
  t75500 = t75499 + t75433;
  t75541 = t75499 + t75436;
  t75566 = Cos(var1[19]);
  t75574 = -1.*t75566;
  t75576 = 1. + t75574;
  t75608 = Cos(var1[21]);
  t75609 = -1.*t75608;
  t75610 = 1. + t75609;
  t75613 = -3.e-6*t75610;
  t75616 = Sin(var1[21]);
  t75579 = Sin(var1[19]);
  t75621 = 3.e-6*t75616;
  t75622 = t75613 + t75621;
  t75694 = 7.5e-14*var1[21];
  t75617 = -3.e-6*t75616;
  t75618 = t75613 + t75617;
  t75705 = -9.e-12*t75610;
  t75631 = 3.e-6*t75576*t2201*t6580;
  t75650 = -3.e-6*t75579*t36035;
  t75669 = -9.e-12*t75576;
  t75673 = 1. + t75669;
  t75676 = -1.*t75673*t2201*t34759;
  t75677 = t75631 + t75650 + t75676;
  t75715 = t75566*t2201*t6580;
  t75716 = t75579*t36035;
  t75717 = -3.e-6*t75576*t2201*t34759;
  t75718 = t75715 + t75716 + t75717;
  t75729 = -1.*t2201*t6580*t75579;
  t75731 = -1.000000000009*t75576;
  t75732 = 1. + t75731;
  t75735 = t75732*t36035;
  t75736 = -3.e-6*t2201*t75579*t34759;
  t75741 = t75729 + t75735 + t75736;
  t75746 = 3.e-6*t75610;
  t75756 = -1.000000000009*t75610;
  t75757 = 1. + t75756;
  t75751 = 9.e-12*t75610;
  t75706 = -1.*t75616;
  t75747 = t75746 + t75617;
  t75789 = t75746 + t75621;
  t75824 = Cos(var1[3]);
  t75820 = Sin(var1[3]);
  t75821 = t6580*t75820*t36035;
  t75825 = t75824*t34759;
  t75827 = t75821 + t75825;
  t75831 = t75824*t6580;
  t75833 = -1.*t75820*t36035*t34759;
  t75839 = t75831 + t75833;
  t39113 = 0.225000000002025*t37265;
  t39976 = t39857 + t39970;
  t40478 = 0.1*t39976;
  t42466 = -9.75e-7*t42153;
  t42757 = t36986 + t39113 + t40478 + t42466;
  t67830 = 3.75e-7*var1[8];
  t69171 = -1.755e-17*t37265;
  t74095 = 0.225*t73202;
  t74251 = 0.1*t42153;
  t74289 = t67830 + t69171 + t74095 + t74251;
  t75851 = t15809*t75827;
  t75852 = 3.e-6*t24409*t75839;
  t75857 = -1.*t2201*t75820*t36081;
  t75866 = t75851 + t75852 + t75857;
  t74647 = t74643 + t39970;
  t75868 = 3.e-6*t24409*t75827;
  t75881 = t43475*t75839;
  t75882 = 3.e-6*t2201*t75820*t36081;
  t75885 = t75868 + t75881 + t75882;
  t74860 = -1.8e-11*t37265;
  t74917 = 1. + t74860;
  t75888 = -1.*t2201*t74629*t75820;
  t75890 = -1.*t75827*t36081;
  t75892 = 3.e-6*t75839*t36081;
  t75895 = t75888 + t75890 + t75892;
  t75107 = 0.1000000000009*t37265;
  t75108 = -9.75e-7*t73202;
  t75110 = t39857 + t39969;
  t75111 = 0.225*t75110;
  t75112 = t36986 + t75107 + t75108 + t75111;
  t75139 = t74643 + t39969;
  t75237 = 2.5e-8*var1[12];
  t75244 = 6.75e-18*t75242;
  t75252 = -0.225000000003*t75251;
  t75255 = 0.100000000003*t75254;
  t75262 = t75237 + t75244 + t75252 + t75255;
  t75288 = -0.225000000005025*t75242;
  t75291 = t75289 + t75290;
  t75292 = 0.100000000003*t75291;
  t75293 = 3.75e-7*t75254;
  t75294 = t75287 + t75288 + t75292 + t75293;
  t75301 = 0.1000000000039*t75242;
  t75302 = 3.75e-7*t75251;
  t75303 = t75289 + t75247;
  t75305 = -0.225000000003*t75303;
  t75311 = t75287 + t75301 + t75302 + t75305;
  t75983 = 3.e-6*t2201*t75228*t75820;
  t75986 = 3.e-6*t75211*t75827;
  t75988 = t75279*t75839;
  t75989 = t75983 + t75986 + t75988;
  t75357 = t75356 + t75247;
  t75992 = -1.*t2201*t75228*t75820;
  t75993 = t75151*t75827;
  t75994 = 3.e-6*t75211*t75839;
  t75995 = t75992 + t75993 + t75994;
  t75998 = -1.*t75347*t2201*t75820;
  t76001 = -1.*t75228*t75827;
  t76002 = 3.e-6*t75228*t75839;
  t76003 = t75998 + t76001 + t76002;
  t75373 = t75356 + t75290;
  t75389 = -1.8e-11*t75242;
  t75390 = 1. + t75389;
  t75407 = 3.75e-7*var1[17];
  t75419 = -1.755e-17*t75412;
  t75435 = 0.225*t75434;
  t75438 = 0.1*t75437;
  t75439 = t75407 + t75419 + t75435 + t75438;
  t75449 = 0.225000000002025*t75412;
  t75458 = t75453 + t75457;
  t75465 = 0.1*t75458;
  t75472 = -9.75e-7*t75437;
  t75473 = t75448 + t75449 + t75465 + t75472;
  t75485 = 0.1000000000009*t75412;
  t75486 = -9.75e-7*t75434;
  t75487 = t75453 + t75432;
  t75489 = 0.225*t75487;
  t75491 = t75448 + t75485 + t75486 + t75489;
  t76027 = 3.e-6*t2201*t75404*t75820;
  t76223 = 3.e-6*t75402*t75827;
  t76437 = t75443*t75839;
  t76499 = t76027 + t76223 + t76437;
  t75532 = t75516 + t75432;
  t76507 = -1.*t2201*t75404*t75820;
  t76535 = t75399*t75827;
  t76557 = 3.e-6*t75402*t75839;
  t76558 = t76507 + t76535 + t76557;
  t76561 = -1.*t75494*t2201*t75820;
  t76567 = -1.*t75404*t75827;
  t76586 = 3.e-6*t75404*t75839;
  t76620 = t76561 + t76567 + t76586;
  t75544 = t75516 + t75457;
  t75548 = -1.8e-11*t75412;
  t75549 = 1. + t75548;
  t75601 = 2.5e-8*var1[21];
  t75612 = 6.75e-18*t75610;
  t75620 = -0.225000000003*t75618;
  t75623 = 0.100000000003*t75622;
  t75626 = t75601 + t75612 + t75620 + t75623;
  t75695 = -0.225000000005025*t75610;
  t75707 = t75705 + t75706;
  t75708 = 0.100000000003*t75707;
  t75709 = 3.75e-7*t75622;
  t75710 = t75694 + t75695 + t75708 + t75709;
  t75723 = 0.1000000000039*t75610;
  t75724 = 3.75e-7*t75618;
  t75725 = t75705 + t75616;
  t75727 = -0.225000000003*t75725;
  t75728 = t75694 + t75723 + t75724 + t75727;
  t77071 = 3.e-6*t2201*t75579*t75820;
  t77072 = 3.e-6*t75576*t75827;
  t77077 = t75673*t75839;
  t77081 = t77071 + t77072 + t77077;
  t75753 = t75751 + t75616;
  t77087 = -1.*t2201*t75579*t75820;
  t77088 = t75566*t75827;
  t77093 = 3.e-6*t75576*t75839;
  t77097 = t77087 + t77088 + t77093;
  t77106 = -1.*t75732*t2201*t75820;
  t77242 = -1.*t75579*t75827;
  t77250 = 3.e-6*t75579*t75839;
  t77258 = t77106 + t77242 + t77250;
  t75792 = t75751 + t75706;
  t75804 = -1.8e-11*t75610;
  t75805 = 1. + t75804;
  t77352 = -1.*t75824*t6580*t36035;
  t77356 = t75820*t34759;
  t77360 = t77352 + t77356;
  t77365 = t6580*t75820;
  t77366 = t75824*t36035*t34759;
  t77367 = t77365 + t77366;
  t77380 = t15809*t77360;
  t77381 = 3.e-6*t24409*t77367;
  t77385 = t75824*t2201*t36081;
  t77386 = t77380 + t77381 + t77385;
  t77388 = 3.e-6*t24409*t77360;
  t77389 = t43475*t77367;
  t77392 = -3.e-6*t75824*t2201*t36081;
  t77393 = t77388 + t77389 + t77392;
  t77407 = t75824*t2201*t74629;
  t77411 = -1.*t77360*t36081;
  t77415 = 3.e-6*t77367*t36081;
  t77417 = t77407 + t77411 + t77415;
  t77459 = -3.e-6*t75824*t2201*t75228;
  t77460 = 3.e-6*t75211*t77360;
  t77462 = t75279*t77367;
  t77464 = t77459 + t77460 + t77462;
  t77466 = t75824*t2201*t75228;
  t77467 = t75151*t77360;
  t77469 = 3.e-6*t75211*t77367;
  t77470 = t77466 + t77467 + t77469;
  t77473 = t75347*t75824*t2201;
  t77475 = -1.*t75228*t77360;
  t77477 = 3.e-6*t75228*t77367;
  t77480 = t77473 + t77475 + t77477;
  t77511 = -3.e-6*t75824*t2201*t75404;
  t77512 = 3.e-6*t75402*t77360;
  t77513 = t75443*t77367;
  t77517 = t77511 + t77512 + t77513;
  t77520 = t75824*t2201*t75404;
  t77521 = t75399*t77360;
  t77522 = 3.e-6*t75402*t77367;
  t77523 = t77520 + t77521 + t77522;
  t77525 = t75494*t75824*t2201;
  t77527 = -1.*t75404*t77360;
  t77529 = 3.e-6*t75404*t77367;
  t77531 = t77525 + t77527 + t77529;
  t77566 = -3.e-6*t75824*t2201*t75579;
  t77567 = 3.e-6*t75576*t77360;
  t77569 = t75673*t77367;
  t77570 = t77566 + t77567 + t77569;
  t77573 = t75824*t2201*t75579;
  t77574 = t75566*t77360;
  t77575 = 3.e-6*t75576*t77367;
  t77576 = t77573 + t77574 + t77575;
  t77578 = t75732*t75824*t2201;
  t77580 = -1.*t75579*t77360;
  t77583 = 3.e-6*t75579*t77367;
  t77585 = t77578 + t77580 + t77583;
  p_output1[0]=6.75000000006075e-7*t2201*t24409*t34759 - 0.225000000002025*t36035*t36081 + t36522*t42757 + 0.225000000002025*t2201*t24409*t6580 + t66858*t74289 + 0.225*(t36522*t74300 + t74640*t74647 + t66858*t74655) + 0.130001*(t74640*t74655 + t66858*t74917 + t36522*t75031) + t74640*t75112 - 0.14*(t74300*t74640 + t66858*t75031 + t36522*t75139) + var1[0];
  p_output1[1]=-6.75000000006075e-7*t2201*t34759*t75211 - 0.225000000002025*t2201*t6580*t75211 + 0.225000000002025*t36035*t75228 + t75262*t75285 + t75294*t75299 + t75311*t75350 - 0.14*(t75285*t75354 + t75299*t75357 + t75350*t75361) - 0.225*(t75299*t75361 + t75285*t75365 + t75350*t75373) + 0.130001*(t75299*t75354 + t75350*t75365 + t75285*t75390) + var1[0];
  p_output1[2]=6.75000000006075e-7*t2201*t34759*t75402 + 0.225000000002025*t2201*t6580*t75402 - 0.225000000002025*t36035*t75404 + t75439*t75446 + t75473*t75483 + t75491*t75497 - 0.14*(t75446*t75500 + t75483*t75532 + t75497*t75536) + 0.225*(t75483*t75536 + t75446*t75541 + t75497*t75544) - 0.129999*(t75483*t75500 + t75497*t75541 + t75446*t75549) + var1[0];
  p_output1[3]=-6.75000000006075e-7*t2201*t34759*t75576 - 0.225000000002025*t2201*t6580*t75576 + 0.225000000002025*t36035*t75579 + t75626*t75677 + t75710*t75718 + t75728*t75741 - 0.14*(t75677*t75747 + t75718*t75753 + t75741*t75757) - 0.225*(t75718*t75757 + t75677*t75789 + t75741*t75792) - 0.129999*(t75718*t75747 + t75741*t75789 + t75677*t75805) + var1[0];
  p_output1[4]=0.225000000002025*t2201*t36081*t75820 + 0.225000000002025*t24409*t75827 - 6.75000000006075e-7*t24409*t75839 + t42757*t75866 + t74289*t75885 + t75112*t75895 - 0.14*(t75139*t75866 + t75031*t75885 + t74300*t75895) + 0.225*(t74300*t75866 + t74655*t75885 + t74647*t75895) + 0.130001*(t75031*t75866 + t74917*t75885 + t74655*t75895) + var1[1];
  p_output1[5]=-0.225000000002025*t2201*t75228*t75820 - 0.225000000002025*t75211*t75827 + 6.75000000006075e-7*t75211*t75839 + t75262*t75989 + t75294*t75995 + t75311*t76003 - 0.14*(t75354*t75989 + t75357*t75995 + t75361*t76003) + 0.130001*(t75390*t75989 + t75354*t75995 + t75365*t76003) - 0.225*(t75365*t75989 + t75361*t75995 + t75373*t76003) + var1[1];
  p_output1[6]=0.225000000002025*t2201*t75404*t75820 + 0.225000000002025*t75402*t75827 - 6.75000000006075e-7*t75402*t75839 + t75439*t76499 + t75473*t76558 + t75491*t76620 - 0.14*(t75500*t76499 + t75532*t76558 + t75536*t76620) - 0.129999*(t75549*t76499 + t75500*t76558 + t75541*t76620) + 0.225*(t75541*t76499 + t75536*t76558 + t75544*t76620) + var1[1];
  p_output1[7]=-0.225000000002025*t2201*t75579*t75820 - 0.225000000002025*t75576*t75827 + 6.75000000006075e-7*t75576*t75839 + t75626*t77081 + t75710*t77097 + t75728*t77258 - 0.14*(t75747*t77081 + t75753*t77097 + t75757*t77258) - 0.129999*(t75805*t77081 + t75747*t77097 + t75789*t77258) - 0.225*(t75789*t77081 + t75757*t77097 + t75792*t77258) + var1[1];
  p_output1[8]=-0.225000000002025*t2201*t36081*t75824 + 0.225000000002025*t24409*t77360 - 6.75000000006075e-7*t24409*t77367 + t42757*t77386 + t74289*t77393 + t75112*t77417 - 0.14*(t75139*t77386 + t75031*t77393 + t74300*t77417) + 0.225*(t74300*t77386 + t74655*t77393 + t74647*t77417) + 0.130001*(t75031*t77386 + t74917*t77393 + t74655*t77417) + var1[2];
  p_output1[9]=0.225000000002025*t2201*t75228*t75824 - 0.225000000002025*t75211*t77360 + 6.75000000006075e-7*t75211*t77367 + t75262*t77464 + t75294*t77470 + t75311*t77480 - 0.14*(t75354*t77464 + t75357*t77470 + t75361*t77480) + 0.130001*(t75390*t77464 + t75354*t77470 + t75365*t77480) - 0.225*(t75365*t77464 + t75361*t77470 + t75373*t77480) + var1[2];
  p_output1[10]=-0.225000000002025*t2201*t75404*t75824 + 0.225000000002025*t75402*t77360 - 6.75000000006075e-7*t75402*t77367 + t75439*t77517 + t75473*t77523 + t75491*t77531 - 0.14*(t75500*t77517 + t75532*t77523 + t75536*t77531) - 0.129999*(t75549*t77517 + t75500*t77523 + t75541*t77531) + 0.225*(t75541*t77517 + t75536*t77523 + t75544*t77531) + var1[2];
  p_output1[11]=0.225000000002025*t2201*t75579*t75824 - 0.225000000002025*t75576*t77360 + 6.75000000006075e-7*t75576*t77367 + t75626*t77570 + t75710*t77576 + t75728*t77585 - 0.14*(t75747*t77570 + t75753*t77576 + t75757*t77585) - 0.129999*(t75805*t77570 + t75747*t77576 + t75789*t77585) - 0.225*(t75789*t77570 + t75757*t77576 + t75792*t77585) + var1[2];
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
