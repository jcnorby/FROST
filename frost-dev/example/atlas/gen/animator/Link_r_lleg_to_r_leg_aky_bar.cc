/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:03 GMT-06:00
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
  double t48;
  double t333;
  double t616;
  double t9609;
  double t13459;
  double t1728;
  double t5188;
  double t18185;
  double t18450;
  double t18935;
  double t18936;
  double t18938;
  double t20003;
  double t20012;
  double t20170;
  double t20202;
  double t20203;
  double t20238;
  double t20239;
  double t20242;
  double t20317;
  double t20278;
  double t20287;
  double t20293;
  double t20259;
  double t20344;
  double t20346;
  double t20362;
  double t752;
  double t9605;
  double t9986;
  double t9987;
  double t18159;
  double t18364;
  double t18413;
  double t18937;
  double t19292;
  double t19415;
  double t19635;
  double t20058;
  double t20204;
  double t20211;
  double t20213;
  double t20214;
  double t20221;
  double t20223;
  double t20236;
  double t20258;
  double t20264;
  double t20265;
  double t20303;
  double t20368;
  double t20376;
  double t21171;
  double t21175;
  double t21308;
  double t21381;
  double t21477;
  double t22184;
  double t20217;
  double t21257;
  double t22807;
  double t31594;
  double t31648;
  double t31599;
  double t31663;
  double t31667;
  double t31683;
  double t31725;
  double t31933;
  double t32008;
  double t32068;
  double t32098;
  double t32145;
  double t32165;
  double t32333;
  double t32498;
  double t32526;
  double t32528;
  double t32632;
  double t32637;
  double t32638;
  double t32672;
  double t32697;
  double t32698;
  double t31596;
  double t31669;
  double t31990;
  double t32117;
  double t32350;
  double t32464;
  double t32465;
  double t32477;
  double t32627;
  double t32646;
  double t32727;
  double t32734;
  double t32737;
  double t32766;
  double t32841;
  double t32863;
  double t32904;
  double t32906;
  double t32497;
  double t32836;
  double t32950;
  double t33290;
  double t33293;
  double t33294;
  double t33311;
  double t33318;
  double t33324;
  double t33329;
  double t33333;
  double t33334;
  double t33340;
  double t33341;
  double t33346;
  double t33371;
  double t33374;
  double t33377;
  double t33407;
  double t33408;
  double t33409;
  double t33417;
  double t33420;
  double t33421;
  double t33273;
  double t33297;
  double t33325;
  double t33338;
  double t33347;
  double t33349;
  double t33350;
  double t33365;
  double t33403;
  double t33416;
  double t33426;
  double t33427;
  double t33428;
  double t33430;
  double t33438;
  double t33441;
  double t33444;
  double t33445;
  double t33369;
  double t33437;
  double t33446;
  double t22851;
  double t22877;
  double t33558;
  double t23013;
  double t23546;
  double t24015;
  double t24176;
  double t24205;
  double t24356;
  double t24361;
  double t24379;
  double t24384;
  double t24428;
  double t24524;
  double t24722;
  double t24797;
  double t25008;
  double t25838;
  double t25855;
  double t26068;
  double t26102;
  double t26640;
  double t26648;
  double t26663;
  double t26821;
  double t26829;
  double t26854;
  double t27403;
  double t27601;
  double t29026;
  double t29853;
  double t30891;
  double t31085;
  double t31184;
  double t31258;
  double t31489;
  double t31577;
  double t33559;
  double t32962;
  double t32965;
  double t33597;
  double t32968;
  double t32973;
  double t32976;
  double t32986;
  double t32997;
  double t33029;
  double t33031;
  double t33049;
  double t33064;
  double t33066;
  double t33084;
  double t33088;
  double t33096;
  double t33100;
  double t33122;
  double t33133;
  double t33137;
  double t33141;
  double t33143;
  double t33152;
  double t33157;
  double t33169;
  double t33173;
  double t33184;
  double t33189;
  double t33215;
  double t33234;
  double t33243;
  double t33248;
  double t33250;
  double t33255;
  double t33259;
  double t33263;
  double t33264;
  double t33598;
  double t33447;
  double t33448;
  double t33663;
  double t33456;
  double t33458;
  double t33461;
  double t33462;
  double t33466;
  double t33470;
  double t33472;
  double t33473;
  double t33478;
  double t33479;
  double t33486;
  double t33490;
  double t33492;
  double t33493;
  double t33497;
  double t33498;
  double t33500;
  double t33501;
  double t33507;
  double t33510;
  double t33515;
  double t33516;
  double t33519;
  double t33521;
  double t33528;
  double t33530;
  double t33532;
  double t33535;
  double t33540;
  double t33541;
  double t33544;
  double t33546;
  double t33553;
  double t33555;
  double t33664;
  t48 = Cos(var1[4]);
  t333 = Cos(var1[5]);
  t616 = Sin(var1[19]);
  t9609 = Cos(var1[19]);
  t13459 = Sin(var1[5]);
  t1728 = Sin(var1[17]);
  t5188 = Sin(var1[4]);
  t18185 = Cos(var1[17]);
  t18450 = -1.*t48*t333*t616;
  t18935 = -1.*t9609*t48*t13459;
  t18936 = t18450 + t18935;
  t18938 = Cos(var1[18]);
  t20003 = Sin(var1[18]);
  t20012 = 0.05*t20003;
  t20170 = t9609*t48*t333;
  t20202 = -1.*t48*t616*t13459;
  t20203 = t20170 + t20202;
  t20238 = t18185*t5188;
  t20239 = -1.*t1728*t18936;
  t20242 = t20238 + t20239;
  t20317 = Sin(var1[20]);
  t20278 = t20003*t20203;
  t20287 = t18938*t20242;
  t20293 = t20278 + t20287;
  t20259 = Cos(var1[20]);
  t20344 = t18938*t20203;
  t20346 = -1.*t20003*t20242;
  t20362 = t20344 + t20346;
  t752 = -0.089*t48*t333*t616;
  t9605 = 0.089*t1728*t5188;
  t9986 = -1.*t9609;
  t9987 = 1. + t9986;
  t18159 = 0.089*t9987*t48*t13459;
  t18364 = -1.*t18185;
  t18413 = 1. + t18364;
  t18937 = -0.089*t18413*t18936;
  t19292 = -1.*t18938;
  t19415 = 1. + t19292;
  t19635 = 0.05*t19415;
  t20058 = t19635 + t20012;
  t20204 = t20058*t20203;
  t20211 = t1728*t5188;
  t20213 = t18185*t18936;
  t20214 = t20211 + t20213;
  t20221 = -1. + t18938;
  t20223 = 0.05*t20221;
  t20236 = t20223 + t20012;
  t20258 = t20236*t20242;
  t20264 = -1.*t20259;
  t20265 = 1. + t20264;
  t20303 = -0.424*t20265*t20293;
  t20368 = 0.424*t20317*t20362;
  t20376 = -1.*t20317*t20293;
  t21171 = t20259*t20362;
  t21175 = t20376 + t21171;
  t21308 = t20259*t20293;
  t21381 = t20317*t20362;
  t21477 = t21308 + t21381;
  t22184 = -0.424*t21477;
  t20217 = -0.074013*t20214;
  t21257 = 0.00063*t21175;
  t22807 = var1[0] + t752 + t9605 + t18159 + t18937 + t20204 + t20217 + t20258 + t20303 + t20368 + t21257 + t22184;
  t31594 = Sin(var1[3]);
  t31648 = Cos(var1[3]);
  t31599 = t333*t31594*t5188;
  t31663 = t31648*t13459;
  t31667 = t31599 + t31663;
  t31683 = t31648*t333;
  t31725 = -1.*t31594*t5188*t13459;
  t31933 = t31683 + t31725;
  t32008 = -1.*t616*t31667;
  t32068 = t9609*t31933;
  t32098 = t32008 + t32068;
  t32145 = t9609*t31667;
  t32165 = t616*t31933;
  t32333 = t32145 + t32165;
  t32498 = -1.*t18185*t48*t31594;
  t32526 = -1.*t1728*t32098;
  t32528 = t32498 + t32526;
  t32632 = t20003*t32333;
  t32637 = t18938*t32528;
  t32638 = t32632 + t32637;
  t32672 = t18938*t32333;
  t32697 = -1.*t20003*t32528;
  t32698 = t32672 + t32697;
  t31596 = -0.089*t48*t1728*t31594;
  t31669 = -0.089*t616*t31667;
  t31990 = -0.089*t9987*t31933;
  t32117 = -0.089*t18413*t32098;
  t32350 = t20058*t32333;
  t32464 = -1.*t48*t1728*t31594;
  t32465 = t18185*t32098;
  t32477 = t32464 + t32465;
  t32627 = t20236*t32528;
  t32646 = -0.424*t20265*t32638;
  t32727 = 0.424*t20317*t32698;
  t32734 = -1.*t20317*t32638;
  t32737 = t20259*t32698;
  t32766 = t32734 + t32737;
  t32841 = t20259*t32638;
  t32863 = t20317*t32698;
  t32904 = t32841 + t32863;
  t32906 = -0.424*t32904;
  t32497 = -0.074013*t32477;
  t32836 = 0.00063*t32766;
  t32950 = var1[1] + t31596 + t31669 + t31990 + t32117 + t32350 + t32497 + t32627 + t32646 + t32727 + t32836 + t32906;
  t33290 = -1.*t31648*t333*t5188;
  t33293 = t31594*t13459;
  t33294 = t33290 + t33293;
  t33311 = t333*t31594;
  t33318 = t31648*t5188*t13459;
  t33324 = t33311 + t33318;
  t33329 = -1.*t616*t33294;
  t33333 = t9609*t33324;
  t33334 = t33329 + t33333;
  t33340 = t9609*t33294;
  t33341 = t616*t33324;
  t33346 = t33340 + t33341;
  t33371 = t18185*t31648*t48;
  t33374 = -1.*t1728*t33334;
  t33377 = t33371 + t33374;
  t33407 = t20003*t33346;
  t33408 = t18938*t33377;
  t33409 = t33407 + t33408;
  t33417 = t18938*t33346;
  t33420 = -1.*t20003*t33377;
  t33421 = t33417 + t33420;
  t33273 = 0.089*t31648*t48*t1728;
  t33297 = -0.089*t616*t33294;
  t33325 = -0.089*t9987*t33324;
  t33338 = -0.089*t18413*t33334;
  t33347 = t20058*t33346;
  t33349 = t31648*t48*t1728;
  t33350 = t18185*t33334;
  t33365 = t33349 + t33350;
  t33403 = t20236*t33377;
  t33416 = -0.424*t20265*t33409;
  t33426 = 0.424*t20317*t33421;
  t33427 = -1.*t20317*t33409;
  t33428 = t20259*t33421;
  t33430 = t33427 + t33428;
  t33438 = t20259*t33409;
  t33441 = t20317*t33421;
  t33444 = t33438 + t33441;
  t33445 = -0.424*t33444;
  t33369 = -0.074013*t33365;
  t33437 = 0.00063*t33430;
  t33446 = var1[2] + t33273 + t33297 + t33325 + t33338 + t33347 + t33369 + t33403 + t33416 + t33426 + t33437 + t33445;
  t22851 = -0.07503*t20214;
  t22877 = 0.005462*t21175;
  t33558 = -0.846*t21477;
  t23013 = -0.07756*t20214;
  t23546 = 0.009702*t21175;
  t24015 = -0.081331*t20214;
  t24176 = 0.012891*t21175;
  t24205 = -0.085932*t20214;
  t24356 = 0.014683*t21175;
  t24361 = -0.090866*t20214;
  t24379 = 0.014884*t21175;
  t24384 = -0.095597*t20214;
  t24428 = 0.013471*t21175;
  t24524 = -0.099614*t20214;
  t24722 = 0.010599*t21175;
  t24797 = -0.10248*t20214;
  t25008 = 0.006579*t21175;
  t25838 = -0.103886*t20214;
  t25855 = 0.001845*t21175;
  t26068 = -0.103679*t20214;
  t26102 = -0.003088*t21175;
  t26640 = -0.10188*t20214;
  t26648 = -0.007687*t21175;
  t26663 = -0.098687*t20214;
  t26821 = -0.011453*t21175;
  t26829 = -0.094443*t20214;
  t26854 = -0.013978*t21175;
  t27403 = -0.089609*t20214;
  t27601 = -0.014988*t21175;
  t29026 = -0.08471*t20214;
  t29853 = -0.014373*t21175;
  t30891 = -0.080275*t20214;
  t31085 = -0.012202*t21175;
  t31184 = -0.076786*t20214;
  t31258 = -0.008708*t21175;
  t31489 = -0.074621*t20214;
  t31577 = -0.00427*t21175;
  t33559 = var1[0] + t752 + t9605 + t18159 + t18937 + t20204 + t20217 + t20258 + t20303 + t20368 + t21257 + t33558;
  t32962 = -0.07503*t32477;
  t32965 = 0.005462*t32766;
  t33597 = -0.846*t32904;
  t32968 = -0.07756*t32477;
  t32973 = 0.009702*t32766;
  t32976 = -0.081331*t32477;
  t32986 = 0.012891*t32766;
  t32997 = -0.085932*t32477;
  t33029 = 0.014683*t32766;
  t33031 = -0.090866*t32477;
  t33049 = 0.014884*t32766;
  t33064 = -0.095597*t32477;
  t33066 = 0.013471*t32766;
  t33084 = -0.099614*t32477;
  t33088 = 0.010599*t32766;
  t33096 = -0.10248*t32477;
  t33100 = 0.006579*t32766;
  t33122 = -0.103886*t32477;
  t33133 = 0.001845*t32766;
  t33137 = -0.103679*t32477;
  t33141 = -0.003088*t32766;
  t33143 = -0.10188*t32477;
  t33152 = -0.007687*t32766;
  t33157 = -0.098687*t32477;
  t33169 = -0.011453*t32766;
  t33173 = -0.094443*t32477;
  t33184 = -0.013978*t32766;
  t33189 = -0.089609*t32477;
  t33215 = -0.014988*t32766;
  t33234 = -0.08471*t32477;
  t33243 = -0.014373*t32766;
  t33248 = -0.080275*t32477;
  t33250 = -0.012202*t32766;
  t33255 = -0.076786*t32477;
  t33259 = -0.008708*t32766;
  t33263 = -0.074621*t32477;
  t33264 = -0.00427*t32766;
  t33598 = var1[1] + t31596 + t31669 + t31990 + t32117 + t32350 + t32497 + t32627 + t32646 + t32727 + t32836 + t33597;
  t33447 = -0.07503*t33365;
  t33448 = 0.005462*t33430;
  t33663 = -0.846*t33444;
  t33456 = -0.07756*t33365;
  t33458 = 0.009702*t33430;
  t33461 = -0.081331*t33365;
  t33462 = 0.012891*t33430;
  t33466 = -0.085932*t33365;
  t33470 = 0.014683*t33430;
  t33472 = -0.090866*t33365;
  t33473 = 0.014884*t33430;
  t33478 = -0.095597*t33365;
  t33479 = 0.013471*t33430;
  t33486 = -0.099614*t33365;
  t33490 = 0.010599*t33430;
  t33492 = -0.10248*t33365;
  t33493 = 0.006579*t33430;
  t33497 = -0.103886*t33365;
  t33498 = 0.001845*t33430;
  t33500 = -0.103679*t33365;
  t33501 = -0.003088*t33430;
  t33507 = -0.10188*t33365;
  t33510 = -0.007687*t33430;
  t33515 = -0.098687*t33365;
  t33516 = -0.011453*t33430;
  t33519 = -0.094443*t33365;
  t33521 = -0.013978*t33430;
  t33528 = -0.089609*t33365;
  t33530 = -0.014988*t33430;
  t33532 = -0.08471*t33365;
  t33535 = -0.014373*t33430;
  t33540 = -0.080275*t33365;
  t33541 = -0.012202*t33430;
  t33544 = -0.076786*t33365;
  t33546 = -0.008708*t33430;
  t33553 = -0.074621*t33365;
  t33555 = -0.00427*t33430;
  t33664 = var1[2] + t33273 + t33297 + t33325 + t33338 + t33347 + t33369 + t33403 + t33416 + t33426 + t33437 + t33663;
  p_output1[0]=t22807;
  p_output1[1]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t22851 + t22877 + t752 + t9605 + var1[0];
  p_output1[2]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t23013 + t23546 + t752 + t9605 + var1[0];
  p_output1[3]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t24015 + t24176 + t752 + t9605 + var1[0];
  p_output1[4]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t24205 + t24356 + t752 + t9605 + var1[0];
  p_output1[5]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t24361 + t24379 + t752 + t9605 + var1[0];
  p_output1[6]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t24384 + t24428 + t752 + t9605 + var1[0];
  p_output1[7]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t24524 + t24722 + t752 + t9605 + var1[0];
  p_output1[8]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t24797 + t25008 + t752 + t9605 + var1[0];
  p_output1[9]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t25838 + t25855 + t752 + t9605 + var1[0];
  p_output1[10]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t26068 + t26102 + t752 + t9605 + var1[0];
  p_output1[11]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t26640 + t26648 + t752 + t9605 + var1[0];
  p_output1[12]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t26663 + t26821 + t752 + t9605 + var1[0];
  p_output1[13]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t26829 + t26854 + t752 + t9605 + var1[0];
  p_output1[14]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t27403 + t27601 + t752 + t9605 + var1[0];
  p_output1[15]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t29026 + t29853 + t752 + t9605 + var1[0];
  p_output1[16]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t30891 + t31085 + t752 + t9605 + var1[0];
  p_output1[17]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t31184 + t31258 + t752 + t9605 + var1[0];
  p_output1[18]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22184 + t31489 + t31577 + t752 + t9605 + var1[0];
  p_output1[19]=t22807;
  p_output1[20]=t32950;
  p_output1[21]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t32962 + t32965 + var1[1];
  p_output1[22]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t32968 + t32973 + var1[1];
  p_output1[23]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t32976 + t32986 + var1[1];
  p_output1[24]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t32997 + t33029 + var1[1];
  p_output1[25]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33031 + t33049 + var1[1];
  p_output1[26]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33064 + t33066 + var1[1];
  p_output1[27]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33084 + t33088 + var1[1];
  p_output1[28]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33096 + t33100 + var1[1];
  p_output1[29]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33122 + t33133 + var1[1];
  p_output1[30]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33137 + t33141 + var1[1];
  p_output1[31]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33143 + t33152 + var1[1];
  p_output1[32]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33157 + t33169 + var1[1];
  p_output1[33]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33173 + t33184 + var1[1];
  p_output1[34]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33189 + t33215 + var1[1];
  p_output1[35]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33234 + t33243 + var1[1];
  p_output1[36]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33248 + t33250 + var1[1];
  p_output1[37]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33255 + t33259 + var1[1];
  p_output1[38]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32906 + t33263 + t33264 + var1[1];
  p_output1[39]=t32950;
  p_output1[40]=t33446;
  p_output1[41]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33447 + t33448 + var1[2];
  p_output1[42]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33456 + t33458 + var1[2];
  p_output1[43]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33461 + t33462 + var1[2];
  p_output1[44]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33466 + t33470 + var1[2];
  p_output1[45]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33472 + t33473 + var1[2];
  p_output1[46]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33478 + t33479 + var1[2];
  p_output1[47]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33486 + t33490 + var1[2];
  p_output1[48]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33492 + t33493 + var1[2];
  p_output1[49]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33497 + t33498 + var1[2];
  p_output1[50]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33500 + t33501 + var1[2];
  p_output1[51]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33507 + t33510 + var1[2];
  p_output1[52]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33515 + t33516 + var1[2];
  p_output1[53]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33519 + t33521 + var1[2];
  p_output1[54]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33528 + t33530 + var1[2];
  p_output1[55]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33532 + t33535 + var1[2];
  p_output1[56]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33540 + t33541 + var1[2];
  p_output1[57]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33544 + t33546 + var1[2];
  p_output1[58]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33445 + t33553 + t33555 + var1[2];
  p_output1[59]=t33446;
  p_output1[60]=t33559;
  p_output1[61]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t22851 + t22877 + t33558 + t752 + t9605 + var1[0];
  p_output1[62]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t23013 + t23546 + t33558 + t752 + t9605 + var1[0];
  p_output1[63]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t24015 + t24176 + t33558 + t752 + t9605 + var1[0];
  p_output1[64]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t24205 + t24356 + t33558 + t752 + t9605 + var1[0];
  p_output1[65]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t24361 + t24379 + t33558 + t752 + t9605 + var1[0];
  p_output1[66]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t24384 + t24428 + t33558 + t752 + t9605 + var1[0];
  p_output1[67]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t24524 + t24722 + t33558 + t752 + t9605 + var1[0];
  p_output1[68]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t24797 + t25008 + t33558 + t752 + t9605 + var1[0];
  p_output1[69]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t25838 + t25855 + t33558 + t752 + t9605 + var1[0];
  p_output1[70]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t26068 + t26102 + t33558 + t752 + t9605 + var1[0];
  p_output1[71]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t26640 + t26648 + t33558 + t752 + t9605 + var1[0];
  p_output1[72]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t26663 + t26821 + t33558 + t752 + t9605 + var1[0];
  p_output1[73]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t26829 + t26854 + t33558 + t752 + t9605 + var1[0];
  p_output1[74]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t27403 + t27601 + t33558 + t752 + t9605 + var1[0];
  p_output1[75]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t29026 + t29853 + t33558 + t752 + t9605 + var1[0];
  p_output1[76]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t30891 + t31085 + t33558 + t752 + t9605 + var1[0];
  p_output1[77]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t31184 + t31258 + t33558 + t752 + t9605 + var1[0];
  p_output1[78]=t18159 + t18937 + t20204 + t20258 + t20303 + t20368 + t31489 + t31577 + t33558 + t752 + t9605 + var1[0];
  p_output1[79]=t33559;
  p_output1[80]=t33598;
  p_output1[81]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32962 + t32965 + t33597 + var1[1];
  p_output1[82]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32968 + t32973 + t33597 + var1[1];
  p_output1[83]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32976 + t32986 + t33597 + var1[1];
  p_output1[84]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t32997 + t33029 + t33597 + var1[1];
  p_output1[85]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33031 + t33049 + t33597 + var1[1];
  p_output1[86]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33064 + t33066 + t33597 + var1[1];
  p_output1[87]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33084 + t33088 + t33597 + var1[1];
  p_output1[88]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33096 + t33100 + t33597 + var1[1];
  p_output1[89]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33122 + t33133 + t33597 + var1[1];
  p_output1[90]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33137 + t33141 + t33597 + var1[1];
  p_output1[91]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33143 + t33152 + t33597 + var1[1];
  p_output1[92]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33157 + t33169 + t33597 + var1[1];
  p_output1[93]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33173 + t33184 + t33597 + var1[1];
  p_output1[94]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33189 + t33215 + t33597 + var1[1];
  p_output1[95]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33234 + t33243 + t33597 + var1[1];
  p_output1[96]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33248 + t33250 + t33597 + var1[1];
  p_output1[97]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33255 + t33259 + t33597 + var1[1];
  p_output1[98]=t31596 + t31669 + t31990 + t32117 + t32350 + t32627 + t32646 + t32727 + t33263 + t33264 + t33597 + var1[1];
  p_output1[99]=t33598;
  p_output1[100]=t33664;
  p_output1[101]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33447 + t33448 + t33663 + var1[2];
  p_output1[102]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33456 + t33458 + t33663 + var1[2];
  p_output1[103]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33461 + t33462 + t33663 + var1[2];
  p_output1[104]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33466 + t33470 + t33663 + var1[2];
  p_output1[105]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33472 + t33473 + t33663 + var1[2];
  p_output1[106]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33478 + t33479 + t33663 + var1[2];
  p_output1[107]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33486 + t33490 + t33663 + var1[2];
  p_output1[108]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33492 + t33493 + t33663 + var1[2];
  p_output1[109]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33497 + t33498 + t33663 + var1[2];
  p_output1[110]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33500 + t33501 + t33663 + var1[2];
  p_output1[111]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33507 + t33510 + t33663 + var1[2];
  p_output1[112]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33515 + t33516 + t33663 + var1[2];
  p_output1[113]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33519 + t33521 + t33663 + var1[2];
  p_output1[114]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33528 + t33530 + t33663 + var1[2];
  p_output1[115]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33532 + t33535 + t33663 + var1[2];
  p_output1[116]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33540 + t33541 + t33663 + var1[2];
  p_output1[117]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33544 + t33546 + t33663 + var1[2];
  p_output1[118]=t33273 + t33297 + t33325 + t33338 + t33347 + t33403 + t33416 + t33426 + t33553 + t33555 + t33663 + var1[2];
  p_output1[119]=t33664;
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

#include "Link_r_lleg_to_r_leg_aky_bar.hh"

namespace SymFunction
{

void Link_r_lleg_to_r_leg_aky_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE