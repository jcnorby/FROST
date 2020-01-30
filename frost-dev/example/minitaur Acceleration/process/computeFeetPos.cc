/*
 * Automatically Generated from Mathematica.
 * Thu 8 Aug 2019 17:04:57 GMT-04:00
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
  double t3;
  double t5;
  double t6;
  double t7;
  double t4;
  double t9;
  double t11;
  double t12;
  double t19;
  double t20;
  double t21;
  double t24;
  double t28;
  double t29;
  double t30;
  double t14;
  double t15;
  double t16;
  double t17;
  double t25;
  double t34;
  double t35;
  double t36;
  double t37;
  double t38;
  double t39;
  double t60;
  double t42;
  double t51;
  double t52;
  double t53;
  double t54;
  double t55;
  double t56;
  double t61;
  double t18;
  double t43;
  double t23;
  double t48;
  double t49;
  double t68;
  double t57;
  double t86;
  double t87;
  double t88;
  double t98;
  double t99;
  double t100;
  double t102;
  double t103;
  double t94;
  double t107;
  double t108;
  double t118;
  double t104;
  double t105;
  double t120;
  double t111;
  double t112;
  double t113;
  double t114;
  double t115;
  double t116;
  double t126;
  double t127;
  double t128;
  double t129;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t143;
  double t149;
  double t150;
  double t146;
  double t121;
  double t144;
  double t154;
  double t169;
  double t170;
  double t171;
  double t177;
  double t178;
  double t179;
  double t181;
  double t182;
  double t173;
  double t186;
  double t187;
  double t197;
  double t183;
  double t184;
  double t199;
  double t190;
  double t191;
  double t192;
  double t193;
  double t194;
  double t195;
  double t205;
  double t206;
  double t207;
  double t208;
  double t215;
  double t216;
  double t217;
  double t218;
  double t219;
  double t220;
  double t222;
  double t228;
  double t229;
  double t225;
  double t200;
  double t223;
  double t233;
  double t248;
  double t249;
  double t250;
  double t260;
  double t261;
  double t262;
  double t264;
  double t265;
  double t256;
  double t269;
  double t270;
  double t280;
  double t266;
  double t267;
  double t282;
  double t273;
  double t274;
  double t275;
  double t276;
  double t277;
  double t278;
  double t288;
  double t289;
  double t290;
  double t291;
  double t298;
  double t299;
  double t300;
  double t301;
  double t302;
  double t303;
  double t305;
  double t311;
  double t312;
  double t308;
  double t283;
  double t306;
  double t316;
  double t333;
  double t331;
  double t332;
  double t334;
  double t335;
  double t337;
  double t338;
  double t339;
  double t22;
  double t26;
  double t27;
  double t31;
  double t32;
  double t40;
  double t41;
  double t44;
  double t45;
  double t46;
  double t342;
  double t343;
  double t344;
  double t345;
  double t58;
  double t347;
  double t348;
  double t349;
  double t350;
  double t65;
  double t66;
  double t353;
  double t354;
  double t355;
  double t356;
  double t73;
  double t74;
  double t75;
  double t76;
  double t77;
  double t81;
  double t89;
  double t90;
  double t91;
  double t92;
  double t97;
  double t101;
  double t106;
  double t109;
  double t110;
  double t119;
  double t122;
  double t123;
  double t124;
  double t125;
  double t131;
  double t132;
  double t133;
  double t134;
  double t135;
  double t376;
  double t377;
  double t378;
  double t379;
  double t147;
  double t381;
  double t382;
  double t383;
  double t384;
  double t386;
  double t387;
  double t388;
  double t389;
  double t157;
  double t161;
  double t162;
  double t176;
  double t180;
  double t185;
  double t188;
  double t189;
  double t198;
  double t201;
  double t202;
  double t203;
  double t204;
  double t210;
  double t211;
  double t212;
  double t213;
  double t214;
  double t410;
  double t411;
  double t412;
  double t413;
  double t226;
  double t415;
  double t416;
  double t417;
  double t418;
  double t420;
  double t421;
  double t422;
  double t423;
  double t236;
  double t240;
  double t241;
  double t251;
  double t252;
  double t253;
  double t254;
  double t259;
  double t263;
  double t268;
  double t271;
  double t272;
  double t281;
  double t284;
  double t285;
  double t286;
  double t287;
  double t293;
  double t294;
  double t295;
  double t296;
  double t297;
  double t444;
  double t445;
  double t446;
  double t447;
  double t309;
  double t449;
  double t450;
  double t451;
  double t452;
  double t454;
  double t455;
  double t456;
  double t457;
  double t319;
  double t323;
  double t324;
  double t475;
  double t476;
  double t477;
  double t479;
  double t480;
  double t481;
  double t484;
  double t485;
  double t486;
  double t487;
  double t489;
  double t490;
  double t491;
  double t492;
  double t495;
  double t496;
  double t497;
  double t498;
  double t518;
  double t519;
  double t520;
  double t521;
  double t523;
  double t524;
  double t525;
  double t526;
  double t528;
  double t529;
  double t530;
  double t531;
  double t552;
  double t553;
  double t554;
  double t555;
  double t557;
  double t558;
  double t559;
  double t560;
  double t562;
  double t563;
  double t564;
  double t565;
  double t586;
  double t587;
  double t588;
  double t589;
  double t591;
  double t592;
  double t593;
  double t594;
  double t596;
  double t597;
  double t598;
  double t599;
  t3 = Cos(var1[4]);
  t5 = Cos(var1[6]);
  t6 = -1.*t5;
  t7 = 1. + t6;
  t4 = Cos(var1[5]);
  t9 = Sin(var1[5]);
  t11 = Sin(var1[4]);
  t12 = Sin(var1[6]);
  t19 = Cos(var1[8]);
  t20 = -1.*t19;
  t21 = 1. + t20;
  t24 = Sin(var1[8]);
  t28 = -3.e-6*t21;
  t29 = 3.e-6*t24;
  t30 = t28 + t29;
  t14 = t3*t4*t5;
  t15 = -3.e-6*t3*t7*t9;
  t16 = t11*t12;
  t17 = t14 + t15 + t16;
  t25 = -1.*t24;
  t34 = 3.e-6*t3*t4*t7;
  t35 = -9.e-12*t7;
  t36 = 1. + t35;
  t37 = -1.*t3*t36*t9;
  t38 = -3.e-6*t11*t12;
  t39 = t34 + t37 + t38;
  t60 = 3.e-6*t21;
  t42 = -3.e-6*t24;
  t51 = -1.000000000009*t7;
  t52 = 1. + t51;
  t53 = t52*t11;
  t54 = -1.*t3*t4*t12;
  t55 = -3.e-6*t3*t9*t12;
  t56 = t53 + t54 + t55;
  t61 = t60 + t29;
  t18 = 9.e-13*var1[8];
  t43 = t28 + t42;
  t23 = -9.e-12*t21;
  t48 = -1.000000000009*t21;
  t49 = 1. + t48;
  t68 = t60 + t42;
  t57 = 9.e-12*t21;
  t86 = Cos(var1[10]);
  t87 = -1.*t86;
  t88 = 1. + t87;
  t98 = Cos(var1[12]);
  t99 = -1.*t98;
  t100 = 1. + t99;
  t102 = -3.e-6*t100;
  t103 = Sin(var1[12]);
  t94 = Sin(var1[10]);
  t107 = 3.e-6*t103;
  t108 = t102 + t107;
  t118 = 3.e-13*var1[12];
  t104 = -3.e-6*t103;
  t105 = t102 + t104;
  t120 = -9.e-12*t100;
  t111 = 3.e-6*t88*t3*t4;
  t112 = -3.e-6*t94*t11;
  t113 = -9.e-12*t88;
  t114 = 1. + t113;
  t115 = -1.*t114*t3*t9;
  t116 = t111 + t112 + t115;
  t126 = t86*t3*t4;
  t127 = t94*t11;
  t128 = -3.e-6*t88*t3*t9;
  t129 = t126 + t127 + t128;
  t136 = -1.*t3*t4*t94;
  t137 = -1.000000000009*t88;
  t138 = 1. + t137;
  t139 = t138*t11;
  t140 = -3.e-6*t3*t94*t9;
  t141 = t136 + t139 + t140;
  t143 = 3.e-6*t100;
  t149 = -1.000000000009*t100;
  t150 = 1. + t149;
  t146 = 9.e-12*t100;
  t121 = -1.*t103;
  t144 = t143 + t104;
  t154 = t143 + t107;
  t169 = Cos(var1[15]);
  t170 = -1.*t169;
  t171 = 1. + t170;
  t177 = Cos(var1[17]);
  t178 = -1.*t177;
  t179 = 1. + t178;
  t181 = -3.e-6*t179;
  t182 = Sin(var1[17]);
  t173 = Sin(var1[15]);
  t186 = 3.e-6*t182;
  t187 = t181 + t186;
  t197 = 9.e-13*var1[17];
  t183 = -3.e-6*t182;
  t184 = t181 + t183;
  t199 = -9.e-12*t179;
  t190 = 3.e-6*t171*t3*t4;
  t191 = -3.e-6*t173*t11;
  t192 = -9.e-12*t171;
  t193 = 1. + t192;
  t194 = -1.*t193*t3*t9;
  t195 = t190 + t191 + t194;
  t205 = t169*t3*t4;
  t206 = t173*t11;
  t207 = -3.e-6*t171*t3*t9;
  t208 = t205 + t206 + t207;
  t215 = -1.*t3*t4*t173;
  t216 = -1.000000000009*t171;
  t217 = 1. + t216;
  t218 = t217*t11;
  t219 = -3.e-6*t3*t173*t9;
  t220 = t215 + t218 + t219;
  t222 = 3.e-6*t179;
  t228 = -1.000000000009*t179;
  t229 = 1. + t228;
  t225 = 9.e-12*t179;
  t200 = -1.*t182;
  t223 = t222 + t183;
  t233 = t222 + t186;
  t248 = Cos(var1[19]);
  t249 = -1.*t248;
  t250 = 1. + t249;
  t260 = Cos(var1[21]);
  t261 = -1.*t260;
  t262 = 1. + t261;
  t264 = -3.e-6*t262;
  t265 = Sin(var1[21]);
  t256 = Sin(var1[19]);
  t269 = 3.e-6*t265;
  t270 = t264 + t269;
  t280 = 3.e-13*var1[21];
  t266 = -3.e-6*t265;
  t267 = t264 + t266;
  t282 = -9.e-12*t262;
  t273 = 3.e-6*t250*t3*t4;
  t274 = -3.e-6*t256*t11;
  t275 = -9.e-12*t250;
  t276 = 1. + t275;
  t277 = -1.*t276*t3*t9;
  t278 = t273 + t274 + t277;
  t288 = t248*t3*t4;
  t289 = t256*t11;
  t290 = -3.e-6*t250*t3*t9;
  t291 = t288 + t289 + t290;
  t298 = -1.*t3*t4*t256;
  t299 = -1.000000000009*t250;
  t300 = 1. + t299;
  t301 = t300*t11;
  t302 = -3.e-6*t3*t256*t9;
  t303 = t298 + t301 + t302;
  t305 = 3.e-6*t262;
  t311 = -1.000000000009*t262;
  t312 = 1. + t311;
  t308 = 9.e-12*t262;
  t283 = -1.*t265;
  t306 = t305 + t266;
  t316 = t305 + t269;
  t333 = Cos(var1[3]);
  t331 = Sin(var1[3]);
  t332 = t4*t331*t11;
  t334 = t333*t9;
  t335 = t332 + t334;
  t337 = t333*t4;
  t338 = -1.*t331*t11*t9;
  t339 = t337 + t338;
  t22 = 0.2000000000018*t21;
  t26 = t23 + t25;
  t27 = 0.1*t26;
  t31 = -9.e-7*t30;
  t32 = t18 + t22 + t27 + t31;
  t40 = 3.e-7*var1[8];
  t41 = -1.62e-17*t21;
  t44 = 0.2*t43;
  t45 = 0.1*t30;
  t46 = t40 + t41 + t44 + t45;
  t342 = t5*t335;
  t343 = 3.e-6*t7*t339;
  t344 = -1.*t3*t331*t12;
  t345 = t342 + t343 + t344;
  t58 = t57 + t25;
  t347 = 3.e-6*t7*t335;
  t348 = t36*t339;
  t349 = 3.e-6*t3*t331*t12;
  t350 = t347 + t348 + t349;
  t65 = -1.8e-11*t21;
  t66 = 1. + t65;
  t353 = -1.*t3*t52*t331;
  t354 = -1.*t335*t12;
  t355 = 3.e-6*t339*t12;
  t356 = t353 + t354 + t355;
  t73 = 0.1000000000009*t21;
  t74 = -9.e-7*t43;
  t75 = t23 + t24;
  t76 = 0.2*t75;
  t77 = t18 + t73 + t74 + t76;
  t81 = t57 + t24;
  t89 = -1.8e-12*t88;
  t90 = -1. + t86;
  t91 = 0.2*t90;
  t92 = t89 + t91;
  t97 = 1.e-7*var1[12];
  t101 = 5.4e-18*t100;
  t106 = -0.200000000003*t105;
  t109 = 0.100000000003*t108;
  t110 = t97 + t101 + t106 + t109;
  t119 = -0.2000000000048*t100;
  t122 = t120 + t121;
  t123 = 0.100000000003*t122;
  t124 = 3.e-7*t108;
  t125 = t118 + t119 + t123 + t124;
  t131 = 0.1000000000039*t100;
  t132 = 3.e-7*t105;
  t133 = t120 + t103;
  t134 = -0.200000000003*t133;
  t135 = t118 + t131 + t132 + t134;
  t376 = 3.e-6*t3*t94*t331;
  t377 = 3.e-6*t88*t335;
  t378 = t114*t339;
  t379 = t376 + t377 + t378;
  t147 = t146 + t103;
  t381 = -1.*t3*t94*t331;
  t382 = t86*t335;
  t383 = 3.e-6*t88*t339;
  t384 = t381 + t382 + t383;
  t386 = -1.*t138*t3*t331;
  t387 = -1.*t94*t335;
  t388 = 3.e-6*t94*t339;
  t389 = t386 + t387 + t388;
  t157 = t146 + t121;
  t161 = -1.8e-11*t100;
  t162 = 1. + t161;
  t176 = 3.e-7*var1[17];
  t180 = -1.62e-17*t179;
  t185 = 0.2*t184;
  t188 = 0.1*t187;
  t189 = t176 + t180 + t185 + t188;
  t198 = 0.2000000000018*t179;
  t201 = t199 + t200;
  t202 = 0.1*t201;
  t203 = -9.e-7*t187;
  t204 = t197 + t198 + t202 + t203;
  t210 = 0.1000000000009*t179;
  t211 = -9.e-7*t184;
  t212 = t199 + t182;
  t213 = 0.2*t212;
  t214 = t197 + t210 + t211 + t213;
  t410 = 3.e-6*t3*t173*t331;
  t411 = 3.e-6*t171*t335;
  t412 = t193*t339;
  t413 = t410 + t411 + t412;
  t226 = t225 + t182;
  t415 = -1.*t3*t173*t331;
  t416 = t169*t335;
  t417 = 3.e-6*t171*t339;
  t418 = t415 + t416 + t417;
  t420 = -1.*t217*t3*t331;
  t421 = -1.*t173*t335;
  t422 = 3.e-6*t173*t339;
  t423 = t420 + t421 + t422;
  t236 = t225 + t200;
  t240 = -1.8e-11*t179;
  t241 = 1. + t240;
  t251 = -1.8e-12*t250;
  t252 = -1. + t248;
  t253 = 0.2*t252;
  t254 = t251 + t253;
  t259 = 1.e-7*var1[21];
  t263 = 5.4e-18*t262;
  t268 = -0.200000000003*t267;
  t271 = 0.100000000003*t270;
  t272 = t259 + t263 + t268 + t271;
  t281 = -0.2000000000048*t262;
  t284 = t282 + t283;
  t285 = 0.100000000003*t284;
  t286 = 3.e-7*t270;
  t287 = t280 + t281 + t285 + t286;
  t293 = 0.1000000000039*t262;
  t294 = 3.e-7*t267;
  t295 = t282 + t265;
  t296 = -0.200000000003*t295;
  t297 = t280 + t293 + t294 + t296;
  t444 = 3.e-6*t3*t256*t331;
  t445 = 3.e-6*t250*t335;
  t446 = t276*t339;
  t447 = t444 + t445 + t446;
  t309 = t308 + t265;
  t449 = -1.*t3*t256*t331;
  t450 = t248*t335;
  t451 = 3.e-6*t250*t339;
  t452 = t449 + t450 + t451;
  t454 = -1.*t300*t3*t331;
  t455 = -1.*t256*t335;
  t456 = 3.e-6*t256*t339;
  t457 = t454 + t455 + t456;
  t319 = t308 + t283;
  t323 = -1.8e-11*t262;
  t324 = 1. + t323;
  t475 = -1.*t333*t4*t11;
  t476 = t331*t9;
  t477 = t475 + t476;
  t479 = t4*t331;
  t480 = t333*t11*t9;
  t481 = t479 + t480;
  t484 = t5*t477;
  t485 = 3.e-6*t7*t481;
  t486 = t333*t3*t12;
  t487 = t484 + t485 + t486;
  t489 = 3.e-6*t7*t477;
  t490 = t36*t481;
  t491 = -3.e-6*t333*t3*t12;
  t492 = t489 + t490 + t491;
  t495 = t333*t3*t52;
  t496 = -1.*t477*t12;
  t497 = 3.e-6*t481*t12;
  t498 = t495 + t496 + t497;
  t518 = -3.e-6*t333*t3*t94;
  t519 = 3.e-6*t88*t477;
  t520 = t114*t481;
  t521 = t518 + t519 + t520;
  t523 = t333*t3*t94;
  t524 = t86*t477;
  t525 = 3.e-6*t88*t481;
  t526 = t523 + t524 + t525;
  t528 = t138*t333*t3;
  t529 = -1.*t94*t477;
  t530 = 3.e-6*t94*t481;
  t531 = t528 + t529 + t530;
  t552 = -3.e-6*t333*t3*t173;
  t553 = 3.e-6*t171*t477;
  t554 = t193*t481;
  t555 = t552 + t553 + t554;
  t557 = t333*t3*t173;
  t558 = t169*t477;
  t559 = 3.e-6*t171*t481;
  t560 = t557 + t558 + t559;
  t562 = t217*t333*t3;
  t563 = -1.*t173*t477;
  t564 = 3.e-6*t173*t481;
  t565 = t562 + t563 + t564;
  t586 = -3.e-6*t333*t3*t256;
  t587 = 3.e-6*t250*t477;
  t588 = t276*t481;
  t589 = t586 + t587 + t588;
  t591 = t333*t3*t256;
  t592 = t248*t477;
  t593 = 3.e-6*t250*t481;
  t594 = t591 + t592 + t593;
  t596 = t300*t333*t3;
  t597 = -1.*t256*t477;
  t598 = 3.e-6*t256*t481;
  t599 = t596 + t597 + t598;
  p_output1[0]=-0.2000000000018*t11*t12 + t17*t32 + t39*t46 + 0.2*(t17*t49 + t56*t58 + t39*t61) + 0.125001*(t56*t61 + t39*t66 + t17*t68) + 0.2000000000018*t3*t4*t7 + t56*t77 - 0.14*(t49*t56 + t39*t68 + t17*t81) + 6.000000000054e-7*t3*t7*t9 + var1[0];
  p_output1[1]=t110*t116 + t125*t129 + t135*t141 - 0.14*(t116*t144 + t129*t147 + t141*t150) + 0.2*(-1.*t129*t150 - 1.*t116*t154 - 1.*t141*t157) + 0.125001*(t129*t144 + t141*t154 + t116*t162) - 6.000000000054e-7*t3*t88*t9 + t3*t4*t92 + 0.2000000000018*t11*t94 + var1[0];
  p_output1[2]=-0.2000000000018*t11*t173 + t189*t195 + t204*t208 + t214*t220 - 0.14*(t195*t223 + t208*t226 + t220*t229) + 0.2*(t208*t229 + t195*t233 + t220*t236) - 0.124999*(t208*t223 + t220*t233 + t195*t241) + 0.2000000000018*t171*t3*t4 + 6.000000000054e-7*t171*t3*t9 + var1[0];
  p_output1[3]=0.2000000000018*t11*t256 + t272*t278 + t287*t291 + t297*t303 - 0.14*(t278*t306 + t291*t309 + t303*t312) + 0.2*(-1.*t291*t312 - 1.*t278*t316 - 1.*t303*t319) - 0.124999*(t291*t306 + t303*t316 + t278*t324) + t254*t3*t4 - 6.000000000054e-7*t250*t3*t9 + var1[0];
  p_output1[4]=0.2000000000018*t12*t3*t331 + t32*t345 + t350*t46 + 0.2*(t345*t49 + t356*t58 + t350*t61) + 0.125001*(t356*t61 + t350*t66 + t345*t68) + 0.2000000000018*t335*t7 - 6.000000000054e-7*t339*t7 + t356*t77 - 0.14*(t356*t49 + t350*t68 + t345*t81) + var1[1];
  p_output1[5]=t110*t379 + t125*t384 + t135*t389 - 0.14*(t144*t379 + t147*t384 + t150*t389) + 0.125001*(t162*t379 + t144*t384 + t154*t389) + 0.2*(-1.*t154*t379 - 1.*t150*t384 - 1.*t157*t389) + 6.000000000054e-7*t339*t88 + t335*t92 - 0.2000000000018*t3*t331*t94 + var1[1];
  p_output1[6]=0.2000000000018*t173*t3*t331 + 0.2000000000018*t171*t335 - 6.000000000054e-7*t171*t339 + t189*t413 + t204*t418 + t214*t423 - 0.14*(t223*t413 + t226*t418 + t229*t423) - 0.124999*(t241*t413 + t223*t418 + t233*t423) + 0.2*(t233*t413 + t229*t418 + t236*t423) + var1[1];
  p_output1[7]=-0.2000000000018*t256*t3*t331 + t254*t335 + 6.000000000054e-7*t250*t339 + t272*t447 + t287*t452 + t297*t457 - 0.14*(t306*t447 + t309*t452 + t312*t457) - 0.124999*(t324*t447 + t306*t452 + t316*t457) + 0.2*(-1.*t316*t447 - 1.*t312*t452 - 1.*t319*t457) + var1[1];
  p_output1[8]=-0.2000000000018*t12*t3*t333 + t32*t487 + t46*t492 + 0.2*(t487*t49 + t498*t58 + t492*t61) + 0.125001*(t498*t61 + t492*t66 + t487*t68) + 0.2000000000018*t477*t7 - 6.000000000054e-7*t481*t7 + t498*t77 - 0.14*(t49*t498 + t492*t68 + t487*t81) + var1[2];
  p_output1[9]=t110*t521 + t125*t526 + t135*t531 - 0.14*(t144*t521 + t147*t526 + t150*t531) + 0.125001*(t162*t521 + t144*t526 + t154*t531) + 0.2*(-1.*t154*t521 - 1.*t150*t526 - 1.*t157*t531) + 6.000000000054e-7*t481*t88 + t477*t92 + 0.2000000000018*t3*t333*t94 + var1[2];
  p_output1[10]=-0.2000000000018*t173*t3*t333 + 0.2000000000018*t171*t477 - 6.000000000054e-7*t171*t481 + t189*t555 + t204*t560 + t214*t565 - 0.14*(t223*t555 + t226*t560 + t229*t565) - 0.124999*(t241*t555 + t223*t560 + t233*t565) + 0.2*(t233*t555 + t229*t560 + t236*t565) + var1[2];
  p_output1[11]=0.2000000000018*t256*t3*t333 + t254*t477 + 6.000000000054e-7*t250*t481 + t272*t589 + t287*t594 + t297*t599 - 0.14*(t306*t589 + t309*t594 + t312*t599) - 0.124999*(t324*t589 + t306*t594 + t316*t599) + 0.2*(-1.*t316*t589 - 1.*t312*t594 - 1.*t319*t599) + var1[2];
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
