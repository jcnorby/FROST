/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:25 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t3285;
  double t27561;
  double t1546;
  double t28636;
  double t3441;
  double t5332;
  double t6656;
  double t27354;
  double t27601;
  double t27602;
  double t31682;
  double t32166;
  double t40415;
  double t41085;
  double t42428;
  double t42429;
  double t42432;
  double t47224;
  double t47253;
  double t47256;
  double t47265;
  double t32260;
  double t32760;
  double t32771;
  double t48010;
  double t48300;
  double t48369;
  double t48371;
  double t48375;
  double t48376;
  double t31951;
  double t32236;
  double t32254;
  double t42457;
  double t46270;
  double t47932;
  double t48009;
  double t63295;
  double t63296;
  double t63316;
  double t63320;
  double t63338;
  double t63342;
  double t63352;
  double t63357;
  double t63400;
  double t63444;
  double t63448;
  double t63294;
  double t63351;
  double t63450;
  double t63457;
  double t63463;
  double t63464;
  double t63466;
  double t63467;
  double t63481;
  double t63482;
  double t63485;
  double t63488;
  double t63491;
  double t63493;
  double t63494;
  double t63543;
  double t63569;
  double t63640;
  double t63487;
  double t63496;
  double t63520;
  double t63521;
  double t63522;
  double t63500;
  double t63501;
  double t63508;
  double t63656;
  double t63659;
  double t63460;
  double t63473;
  double t63480;
  double t63667;
  double t63671;
  double t63683;
  double t27607;
  double t28188;
  double t28214;
  double t28634;
  double t29321;
  double t29401;
  double t30031;
  double t30343;
  double t30349;
  double t30378;
  double t31660;
  double t63800;
  double t63834;
  double t63835;
  double t63844;
  double t63845;
  double t63847;
  double t49142;
  double t49399;
  double t50998;
  double t48370;
  double t48377;
  double t48386;
  double t32935;
  double t63857;
  double t63861;
  double t63862;
  double t63867;
  double t63851;
  double t63852;
  double t63900;
  double t63901;
  double t63906;
  double t63498;
  double t63523;
  double t63524;
  double t63977;
  double t63978;
  double t63979;
  double t63743;
  double t63753;
  double t63755;
  double t63990;
  double t63991;
  double t63992;
  double t63951;
  double t63964;
  double t63983;
  double t63889;
  double t63850;
  double t63883;
  double t63891;
  double t63907;
  double t63910;
  double t63911;
  double t63919;
  double t63932;
  double t63936;
  double t64039;
  double t64041;
  double t64043;
  double t64045;
  double t64047;
  double t64048;
  double t63943;
  double t64010;
  double t64012;
  double t64014;
  double t64073;
  double t64074;
  double t64079;
  double t64082;
  double t64083;
  double t64087;
  double t64088;
  double t64108;
  double t64111;
  double t64112;
  double t63998;
  double t63999;
  double t64000;
  double t64096;
  double t64098;
  double t64101;
  double t64075;
  double t64089;
  double t64090;
  double t64113;
  double t64116;
  double t64118;
  double t64120;
  double t64070;
  double t64072;
  double t64094;
  double t64146;
  double t64147;
  double t64148;
  double t64152;
  double t64156;
  double t64157;
  double t64117;
  double t64121;
  double t64125;
  double t64126;
  double t64149;
  double t64160;
  double t64162;
  double t64167;
  double t64168;
  double t64171;
  double t64132;
  double t64135;
  double t30042;
  double t30287;
  double t30322;
  double t63763;
  double t63764;
  double t63765;
  double t48392;
  double t64194;
  double t63839;
  double t63840;
  double t63841;
  double t63842;
  double t32258;
  double t36542;
  double t63853;
  double t63882;
  double t63886;
  double t48388;
  double t48424;
  double t63933;
  double t63941;
  double t63944;
  double t63982;
  double t63988;
  double t63993;
  double t63994;
  double t63996;
  double t63660;
  double t63684;
  double t63685;
  double t63716;
  double t63722;
  double t63723;
  double t64015;
  double t64016;
  double t64017;
  double t64020;
  double t64023;
  double t64248;
  double t64044;
  double t64052;
  double t64054;
  double t64252;
  double t64255;
  double t64256;
  double t64060;
  double t64061;
  double t64065;
  double t64093;
  double t64104;
  double t64106;
  double t64127;
  double t64131;
  double t64136;
  double t64283;
  double t64164;
  double t64173;
  double t64176;
  double t64289;
  double t64290;
  double t64293;
  double t64294;
  double t64180;
  double t64181;
  double t64182;
  double t64341;
  double t64342;
  double t64346;
  double t64350;
  double t64355;
  double t64356;
  double t64372;
  double t64371;
  double t64373;
  double t64374;
  double t64358;
  double t64360;
  double t64365;
  double t64366;
  double t64407;
  double t64413;
  double t64428;
  double t64429;
  double t64437;
  double t64499;
  double t64502;
  double t64503;
  double t64504;
  double t64509;
  double t64486;
  double t64488;
  double t64490;
  double t64491;
  double t64492;
  t3285 = Cos(var1[3]);
  t27561 = Sin(var1[3]);
  t1546 = Cos(var1[2]);
  t28636 = Sin(var1[2]);
  t3441 = -1.*t3285;
  t5332 = 1. + t3441;
  t6656 = -0.15*t5332;
  t27354 = -0.15*t3285;
  t27601 = -0.16*t27561;
  t27602 = t6656 + t27354 + t27601;
  t31682 = Cos(var1[4]);
  t32166 = Sin(var1[4]);
  t40415 = -1.*t31682;
  t41085 = 1. + t40415;
  t42428 = 0.4*t41085;
  t42429 = 0.69*t31682;
  t42432 = t42428 + t42429;
  t47224 = -0.15*t41085;
  t47253 = -0.15*t31682;
  t47256 = -0.29*t32166;
  t47265 = t47224 + t47253 + t47256;
  t32260 = t3285*t31682;
  t32760 = -1.*t27561*t32166;
  t32771 = t32260 + t32760;
  t48010 = t31682*t27561;
  t48300 = t3285*t32166;
  t48369 = t48010 + t48300;
  t48371 = -1.*t42432*t27561;
  t48375 = t3285*t47265;
  t48376 = t6656 + t48371 + t48375;
  t31951 = -1.*t31682*t27561;
  t32236 = -1.*t3285*t32166;
  t32254 = t31951 + t32236;
  t42457 = t3285*t42432;
  t46270 = 0.15*t27561;
  t47932 = t27561*t47265;
  t48009 = t42457 + t46270 + t47932;
  t63295 = Cos(var1[5]);
  t63296 = -1.*t63295;
  t63316 = 1. + t63296;
  t63320 = 0.8*t63316;
  t63338 = 1.04*t63295;
  t63342 = t63320 + t63338;
  t63352 = -0.15*t63316;
  t63357 = -0.15*t63295;
  t63400 = Sin(var1[5]);
  t63444 = -0.24*t63400;
  t63448 = t63352 + t63357 + t63444;
  t63294 = 0.4*t32166;
  t63351 = -1.*t63342*t32166;
  t63450 = t31682*t63448;
  t63457 = t47224 + t63294 + t63351 + t63450;
  t63463 = t31682*t63342;
  t63464 = 0.15*t32166;
  t63466 = t32166*t63448;
  t63467 = t42428 + t63463 + t63464 + t63466;
  t63481 = -1.*t63295*t32166;
  t63482 = -1.*t31682*t63400;
  t63485 = t63481 + t63482;
  t63488 = t31682*t63295;
  t63491 = -1.*t32166*t63400;
  t63493 = t63488 + t63491;
  t63494 = t3285*t63493;
  t63543 = t63295*t32166;
  t63569 = t31682*t63400;
  t63640 = t63543 + t63569;
  t63487 = t27561*t63485;
  t63496 = t63487 + t63494;
  t63520 = t3285*t63485;
  t63521 = -1.*t27561*t63493;
  t63522 = t63520 + t63521;
  t63500 = t3285*t63457;
  t63501 = -1.*t27561*t63467;
  t63508 = t6656 + t63500 + t63501;
  t63656 = -1.*t27561*t63640;
  t63659 = t63656 + t63494;
  t63460 = t27561*t63457;
  t63473 = t3285*t63467;
  t63480 = t46270 + t63460 + t63473;
  t63667 = t3285*t63640;
  t63671 = t27561*t63493;
  t63683 = t63667 + t63671;
  t27607 = -1.*t3285*t27602;
  t28188 = -0.16*t3285*t27561;
  t28214 = t27607 + t28188;
  t28634 = t1546*t3285;
  t29321 = t28636*t27561;
  t29401 = t28634 + t29321;
  t30031 = 6.4*t28214*t29401;
  t30343 = Power(t3285,2);
  t30349 = 0.16*t30343;
  t30378 = -1.*t27602*t27561;
  t31660 = t30349 + t30378;
  t63800 = t3285*t28636;
  t63834 = -1.*t1546*t27561;
  t63835 = t63800 + t63834;
  t63844 = t1546*t32254;
  t63845 = t28636*t32771;
  t63847 = t63844 + t63845;
  t49142 = t48376*t32254;
  t49399 = t48009*t32771;
  t50998 = t49142 + t49399;
  t48370 = -1.*t48009*t48369;
  t48377 = -1.*t48376*t32771;
  t48386 = t48370 + t48377;
  t32935 = t1546*t32771;
  t63857 = -1.*t3285*t42432;
  t63861 = -0.15*t27561;
  t63862 = -1.*t27561*t47265;
  t63867 = t63857 + t63861 + t63862;
  t63851 = 0.15*t3285;
  t63852 = t63851 + t48371 + t48375;
  t63900 = -1.*t3285*t31682;
  t63901 = t27561*t32166;
  t63906 = t63900 + t63901;
  t63498 = t63480*t63496;
  t63523 = t63508*t63522;
  t63524 = t63498 + t63523;
  t63977 = -1.*t27561*t63485;
  t63978 = -1.*t3285*t63493;
  t63979 = t63977 + t63978;
  t63743 = -1.*t63508*t63659;
  t63753 = -1.*t63480*t63683;
  t63755 = t63743 + t63753;
  t63990 = -1.*t27561*t63457;
  t63991 = -1.*t3285*t63467;
  t63992 = t63861 + t63990 + t63991;
  t63951 = -1.*t3285*t63640;
  t63964 = t63951 + t63521;
  t63983 = t63851 + t63500 + t63501;
  t63889 = 13.6*t63847*t50998;
  t63850 = -1.*t48376*t32254;
  t63883 = -1.*t48009*t32771;
  t63891 = t28636*t32254;
  t63907 = t1546*t63906;
  t63910 = t63891 + t63907;
  t63911 = 13.6*t48386*t63910;
  t63919 = t28636*t48369;
  t63932 = t63919 + t32935;
  t63936 = t48009*t32254;
  t64039 = -0.29*t31682*t27561;
  t64041 = -0.29*t3285*t32166;
  t64043 = t64039 + t64041;
  t64045 = -0.29*t3285*t31682;
  t64047 = 0.29*t27561*t32166;
  t64048 = t64045 + t64047;
  t63943 = t48376*t63906;
  t64010 = t28636*t63496;
  t64012 = t1546*t63522;
  t64014 = t64010 + t64012;
  t64073 = 0.15*t31682;
  t64074 = t64073 + t63294 + t63351 + t63450;
  t64079 = 0.4*t31682;
  t64082 = -1.*t31682*t63342;
  t64083 = -0.15*t32166;
  t64087 = -1.*t32166*t63448;
  t64088 = t64079 + t64082 + t64083 + t64087;
  t64108 = -1.*t31682*t63295;
  t64111 = t32166*t63400;
  t64112 = t64108 + t64111;
  t63998 = t1546*t63659;
  t63999 = t28636*t63683;
  t64000 = t63998 + t63999;
  t64096 = t3285*t64074;
  t64098 = t27561*t64088;
  t64101 = t64096 + t64098;
  t64075 = -1.*t27561*t64074;
  t64089 = t3285*t64088;
  t64090 = t64075 + t64089;
  t64113 = t3285*t64112;
  t64116 = t63977 + t64113;
  t64118 = t27561*t64112;
  t64120 = t63520 + t64118;
  t64070 = 12.*t64014*t63524;
  t64072 = -1.*t63480*t63496;
  t64094 = -1.*t63508*t63522;
  t64146 = -0.24*t63295*t32166;
  t64147 = -0.24*t31682*t63400;
  t64148 = t64146 + t64147;
  t64152 = -0.24*t31682*t63295;
  t64156 = 0.24*t32166*t63400;
  t64157 = t64152 + t64156;
  t64117 = t1546*t64116;
  t64121 = t28636*t64120;
  t64125 = t64117 + t64121;
  t64126 = 12.*t63755*t64125;
  t64149 = -1.*t27561*t64148;
  t64160 = t3285*t64157;
  t64162 = t64149 + t64160;
  t64167 = t3285*t64148;
  t64168 = t27561*t64157;
  t64171 = t64167 + t64168;
  t64132 = t63508*t64116;
  t64135 = t63480*t64120;
  t30042 = -1.*t3285*t28636;
  t30287 = t1546*t27561;
  t30322 = t30042 + t30287;
  t63763 = -1.*t1546*t3285;
  t63764 = -1.*t28636*t27561;
  t63765 = t63763 + t63764;
  t48392 = -1.*t28636*t32771;
  t64194 = 6.4*t30322*t28214;
  t63839 = t27602*t27561;
  t63840 = Power(t27561,2);
  t63841 = 0.16*t63840;
  t63842 = t63839 + t63841;
  t32258 = -1.*t28636*t32254;
  t36542 = t32258 + t32935;
  t63853 = -1.*t63852*t48369;
  t63882 = -1.*t63867*t32771;
  t63886 = t63850 + t63853 + t63882 + t63883;
  t48388 = t1546*t48369;
  t48424 = t48388 + t48392;
  t63933 = t63867*t32254;
  t63941 = t63852*t32771;
  t63944 = t63933 + t63936 + t63941 + t63943;
  t63982 = t63508*t63979;
  t63988 = t63983*t63496;
  t63993 = t63992*t63522;
  t63994 = t63480*t63522;
  t63996 = t63982 + t63988 + t63993 + t63994;
  t63660 = -1.*t28636*t63659;
  t63684 = t1546*t63683;
  t63685 = t63660 + t63684;
  t63716 = t1546*t63496;
  t63722 = -1.*t28636*t63522;
  t63723 = t63716 + t63722;
  t64015 = -1.*t63992*t63659;
  t64016 = -1.*t63480*t63659;
  t64017 = -1.*t63508*t63964;
  t64020 = -1.*t63983*t63683;
  t64023 = t64015 + t64016 + t64017 + t64020;
  t64248 = 13.6*t36542*t50998;
  t64044 = -1.*t64043*t48369;
  t64052 = -1.*t32771*t64048;
  t64054 = t63850 + t64044 + t63883 + t64052;
  t64252 = -1.*t28636*t63906;
  t64255 = t63844 + t64252;
  t64256 = 13.6*t48386*t64255;
  t64060 = t64043*t32771;
  t64061 = t32254*t64048;
  t64065 = t63936 + t64060 + t64061 + t63943;
  t64093 = -1.*t64090*t63659;
  t64104 = -1.*t64101*t63683;
  t64106 = t64072 + t64093 + t64094 + t64104;
  t64127 = t64101*t63496;
  t64131 = t64090*t63522;
  t64136 = t64127 + t64131 + t64132 + t64135;
  t64283 = 12.*t63723*t63524;
  t64164 = -1.*t63659*t64162;
  t64173 = -1.*t63683*t64171;
  t64176 = t64072 + t64094 + t64164 + t64173;
  t64289 = -1.*t28636*t64116;
  t64290 = t1546*t64120;
  t64293 = t64289 + t64290;
  t64294 = 12.*t63755*t64293;
  t64180 = t63522*t64162;
  t64181 = t63496*t64171;
  t64182 = t64180 + t64181 + t64132 + t64135;
  t64341 = t31682*t47265;
  t64342 = t42432*t32166;
  t64346 = t64073 + t64341 + t64342;
  t64350 = -1.*t42432*t31682;
  t64355 = t47265*t32166;
  t64356 = t64350 + t63464 + t64355;
  t64372 = 0.15*t63493;
  t64371 = t63467*t63640;
  t64373 = t63457*t63493;
  t64374 = t64371 + t64372 + t64373;
  t64358 = -1.*t63457*t63485;
  t64360 = 0.15*t63640;
  t64365 = -1.*t63467*t63493;
  t64366 = t64358 + t64360 + t64365;
  t64407 = -1.*t63467*t63485;
  t64413 = -1.*t63457*t64112;
  t64428 = 0.15*t63485;
  t64429 = t63457*t63485;
  t64437 = t63467*t63493;
  t64499 = 0.15*t63295;
  t64502 = t63295*t63448;
  t64503 = -0.4*t63400;
  t64504 = t63342*t63400;
  t64509 = t64499 + t64502 + t64503 + t64504;
  t64486 = 0.4*t63295;
  t64488 = -1.*t63295*t63342;
  t64490 = 0.15*t63400;
  t64491 = t63448*t63400;
  t64492 = t64486 + t64488 + t64490 + t64491;
  p_output1[0]=var2[2]*(-0.5*(0.048*t1546 + t30031 + 6.4*t30322*t31660 + 13.6*t36542*t48386 + 13.6*t48424*t50998 + 12.*t63524*t63685 + 12.*t63723*t63755)*var2[2] - 0.5*(t30031 + 6.4*t28214*t63765 + 6.4*t31660*t63835 + 6.4*t63835*t63842 + 13.6*t63847*t63886 + t63889 + t63911 + 13.6*t63932*t63944 + 12.*t63524*(t28636*t63659 + t1546*t63964) + 12.*t63755*(t28636*t63522 + t1546*t63979) + 12.*t63996*t64000 + 12.*t64014*t64023)*var2[3] - 0.5*(t63889 + t63911 + 13.6*t63847*t64054 + 13.6*t63932*t64065 + t64070 + 12.*t64014*t64106 + t64126 + 12.*t64000*t64136)*var2[4] - 0.5*(t64070 + t64126 + 12.*t64014*t64176 + 12.*t64000*t64182)*var2[5]);
  p_output1[1]=var2[2]*(-0.5*(-0.048*t28636 + 13.6*t48386*(-1.*t1546*t32254 + t48392) + 13.6*(-1.*t1546*t32771 - 1.*t28636*t48369)*t50998 + 12.*t63524*(-1.*t1546*t63659 - 1.*t28636*t63683) + 12.*(-1.*t28636*t63496 - 1.*t1546*t63522)*t63755 + 6.4*t31660*t63765 + t64194)*var2[2] - 0.5*(6.4*t29401*t31660 + 6.4*t28214*t63835 + 6.4*t29401*t63842 + 13.6*t36542*t63886 + 13.6*t48424*t63944 + 12.*t63685*t63996 + 12.*t63524*(-1.*t28636*t63964 + t63998) + 12.*t63755*(-1.*t28636*t63979 + t64012) + 12.*t63723*t64023 + t64194 + t64248 + t64256)*var2[3] - 0.5*(13.6*t36542*t64054 + 13.6*t48424*t64065 + 12.*t63723*t64106 + 12.*t63685*t64136 + t64248 + t64256 + t64283 + t64294)*var2[4] - 0.5*(12.*t63723*t64176 + 12.*t63685*t64182 + t64283 + t64294)*var2[5]);
  p_output1[2]=var2[2]*(-0.5*(12.8*t28214*t31660 + 12.8*t28214*t63842 + 27.2*t48386*t63886 + 27.2*t50998*t63944 + 24.*t63524*t63996 + 24.*t63755*t64023)*var2[3] - 0.5*(27.2*t48386*t64054 + 27.2*t50998*t64065 + 24.*t63755*t64106 + 24.*t63524*t64136)*var2[4] - 0.5*(24.*t63755*t64176 + 24.*t63524*t64182)*var2[5]);
  p_output1[3]=var2[2]*(-0.5*(-1.024*t28214 + 13.6*t63886*t64346 + 13.6*t63944*t64356 + 12.*t63996*t64366 + 12.*t64023*t64374)*var2[3] - 0.5*(13.6*t48386*(-0.29*Power(t31682,2) - 0.29*Power(t32166,2) + t31682*t42432 - 1.*t32166*t47265 + t64083) + 13.6*t50998*t64346 + 13.6*t64054*t64346 + 13.6*t64065*t64356 + 12.*t64136*t64366 + 12.*t64106*t64374 + 12.*t63524*(-1.*t63493*t64074 - 1.*t63485*t64088 + t64372 + t64407 + t64413) + 12.*t63755*(t63640*t64074 + t63493*t64088 + t64428 + t64429 + t64437))*var2[4] - 0.5*(12.*t64182*t64366 + 12.*t64176*t64374 + 12.*t63524*(-1.*t63493*t64148 - 1.*t63485*t64157 + t64372 + t64407 + t64413) + 12.*t63755*(t63640*t64148 + t63493*t64157 + t64428 + t64429 + t64437))*var2[5]);
  p_output1[4]=var2[2]*(-0.5*(-3.944*t63944 + 12.*t63996*t64492 + 12.*t64023*t64509)*var2[3] - 0.5*(-3.944*t64065 + 12.*t64136*t64492 + 12.*t64106*t64509)*var2[4] - 0.5*(12.*(-0.4*t63295 - 0.24*Power(t63295,2) + t63295*t63342 - 0.15*t63400 - 0.24*Power(t63400,2) - 1.*t63400*t63448)*t63755 + 12.*t64182*t64492 + 12.*t63524*t64509 + 12.*t64176*t64509)*var2[5]);
  p_output1[5]=var2[2]*(1.44*t63996*var2[3] + 1.44*t64136*var2[4] + 1.44*t64182*var2[5]);
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec3_acrobot.hh"

namespace SymFunction
{

void Ce1_vec3_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
