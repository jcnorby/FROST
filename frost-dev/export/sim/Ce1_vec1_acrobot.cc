/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:23 GMT-05:00
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
  double t19060;
  double t5469;
  double t5478;
  double t22479;
  double t16042;
  double t23731;
  double t47292;
  double t63026;
  double t63031;
  double t63037;
  double t63038;
  double t63039;
  double t63076;
  double t63077;
  double t63080;
  double t63082;
  double t63084;
  double t63087;
  double t63156;
  double t63169;
  double t63168;
  double t63171;
  double t63175;
  double t63178;
  double t63200;
  double t63203;
  double t63242;
  double t63244;
  double t63251;
  double t63206;
  double t63269;
  double t63270;
  double t63272;
  double t63273;
  double t63274;
  double t61172;
  double t61302;
  double t61318;
  double t63022;
  double t63027;
  double t63032;
  double t63034;
  double t63035;
  double t63041;
  double t63075;
  double t63176;
  double t63212;
  double t63236;
  double t63257;
  double t63258;
  double t63287;
  double t63289;
  double t63290;
  double t63285;
  double t63291;
  double t63293;
  double t63259;
  double t63364;
  double t63365;
  double t63366;
  double t63089;
  double t63090;
  double t63091;
  double t63103;
  double t63106;
  double t63112;
  double t63147;
  double t63150;
  double t63363;
  double t63367;
  double t63368;
  double t63369;
  double t63372;
  double t63373;
  double t63375;
  double t63379;
  double t63387;
  double t63298;
  double t63303;
  double t63310;
  double t50115;
  double t53563;
  double t60320;
  double t63327;
  double t63330;
  double t63317;
  double t63318;
  double t63319;
  double t63260;
  double t63261;
  double t63339;
  double t63340;
  double t63341;
  double t63264;
  double t63266;
  double t63267;
  double t63277;
  double t63278;
  double t63279;
  double t63282;
  double t63283;
  double t63343;
  double t63346;
  double t63350;
  double t63408;
  double t63409;
  double t63410;
  double t63411;
  double t63412;
  double t63414;
  double t63415;
  double t63416;
  double t63429;
  double t63437;
  double t63510;
  double t63512;
  double t63513;
  double t63514;
  double t63515;
  double t63516;
  double t63517;
  double t63525;
  double t63526;
  double t63528;
  double t63530;
  double t63531;
  double t63532;
  double t63544;
  double t63545;
  double t63547;
  double t63548;
  double t63549;
  double t63553;
  double t63554;
  double t63555;
  double t63556;
  double t63564;
  double t63565;
  double t63566;
  double t63551;
  double t63552;
  double t63558;
  double t63559;
  double t63577;
  double t63579;
  double t63582;
  double t63584;
  double t63585;
  double t63587;
  double t63588;
  double t63589;
  double t63591;
  double t63576;
  double t63586;
  double t63592;
  double t63593;
  double t63597;
  double t63598;
  double t63599;
  double t63601;
  double t63609;
  double t63610;
  double t63613;
  double t63594;
  double t63602;
  double t63603;
  double t63533;
  double t63534;
  double t63535;
  double t63537;
  double t63539;
  double t63540;
  double t63541;
  double t63542;
  double t63570;
  double t63571;
  double t63572;
  double t63563;
  double t63567;
  double t63568;
  double t63641;
  double t63642;
  double t63644;
  double t63645;
  double t63638;
  double t63639;
  double t63608;
  double t63614;
  double t63616;
  double t63618;
  double t63619;
  double t63621;
  double t63672;
  double t63673;
  double t63678;
  double t63669;
  double t63651;
  double t63637;
  double t63648;
  double t63652;
  double t63655;
  double t63701;
  double t63702;
  double t63704;
  double t63707;
  double t63709;
  double t63712;
  double t63657;
  double t63728;
  double t63729;
  double t63731;
  double t63732;
  double t63735;
  double t63736;
  double t63739;
  double t63745;
  double t63747;
  double t63748;
  double t63730;
  double t63740;
  double t63742;
  double t63726;
  double t63727;
  double t63744;
  double t63770;
  double t63771;
  double t63773;
  double t63775;
  double t63776;
  double t63777;
  double t63757;
  double t63774;
  double t63778;
  double t63779;
  double t63782;
  double t63783;
  double t63784;
  double t63760;
  double t63762;
  double t63809;
  double t63811;
  double t63812;
  double t63801;
  double t63802;
  double t63804;
  double t63814;
  double t63816;
  double t63818;
  double t63822;
  double t63824;
  double t63826;
  double t63827;
  double t63828;
  double t63807;
  double t63813;
  double t63858;
  double t63859;
  double t63860;
  double t63866;
  double t63873;
  double t63881;
  double t63884;
  double t63914;
  double t63915;
  double t63916;
  double t63917;
  double t63918;
  double t63921;
  double t63922;
  double t63925;
  double t63928;
  double t63929;
  double t63912;
  double t63949;
  double t63950;
  t19060 = Cos(var1[2]);
  t5469 = Cos(var1[3]);
  t5478 = Sin(var1[2]);
  t22479 = Sin(var1[3]);
  t16042 = t5469*t5478;
  t23731 = -1.*t19060*t22479;
  t47292 = t16042 + t23731;
  t63026 = Cos(var1[4]);
  t63031 = Sin(var1[4]);
  t63037 = t5469*t63026;
  t63038 = -1.*t22479*t63031;
  t63039 = t63037 + t63038;
  t63076 = -1.*t63026*t22479;
  t63077 = -1.*t5469*t63031;
  t63080 = t63076 + t63077;
  t63082 = t19060*t63080;
  t63084 = t5478*t63039;
  t63087 = t63082 + t63084;
  t63156 = Cos(var1[5]);
  t63169 = Sin(var1[5]);
  t63168 = -1.*t63156*t63031;
  t63171 = -1.*t63026*t63169;
  t63175 = t63168 + t63171;
  t63178 = t63026*t63156;
  t63200 = -1.*t63031*t63169;
  t63203 = t63178 + t63200;
  t63242 = t5469*t63175;
  t63244 = -1.*t22479*t63203;
  t63251 = t63242 + t63244;
  t63206 = t5469*t63203;
  t63269 = t63156*t63031;
  t63270 = t63026*t63169;
  t63272 = t63269 + t63270;
  t63273 = -1.*t22479*t63272;
  t63274 = t63273 + t63206;
  t61172 = t19060*t5469;
  t61302 = t5478*t22479;
  t61318 = t61172 + t61302;
  t63022 = 12.8*t47292*t61318;
  t63027 = t63026*t22479;
  t63032 = t5469*t63031;
  t63034 = t63027 + t63032;
  t63035 = t5478*t63034;
  t63041 = t19060*t63039;
  t63075 = t63035 + t63041;
  t63176 = t22479*t63175;
  t63212 = t63176 + t63206;
  t63236 = t5478*t63212;
  t63257 = t19060*t63251;
  t63258 = t63236 + t63257;
  t63287 = t5469*t63272;
  t63289 = t22479*t63203;
  t63290 = t63287 + t63289;
  t63285 = t19060*t63274;
  t63291 = t5478*t63290;
  t63293 = t63285 + t63291;
  t63259 = -1.*t22479*t63175;
  t63364 = -1.*t63026*t63156;
  t63365 = t63031*t63169;
  t63366 = t63364 + t63365;
  t63089 = 27.2*t63075*t63087;
  t63090 = t5478*t63080;
  t63091 = -1.*t5469*t63026;
  t63103 = t22479*t63031;
  t63106 = t63091 + t63103;
  t63112 = t19060*t63106;
  t63147 = t63090 + t63112;
  t63150 = 27.2*t63087*t63147;
  t63363 = 24.*t63258*t63293;
  t63367 = t5469*t63366;
  t63368 = t63259 + t63367;
  t63369 = t19060*t63368;
  t63372 = t22479*t63366;
  t63373 = t63242 + t63372;
  t63375 = t5478*t63373;
  t63379 = t63369 + t63375;
  t63387 = 24.*t63258*t63379;
  t63298 = -1.*t5469*t5478;
  t63303 = t19060*t22479;
  t63310 = t63298 + t63303;
  t50115 = -1.*t19060*t5469;
  t53563 = -1.*t5478*t22479;
  t60320 = t50115 + t53563;
  t63327 = -1.*t5478*t63080;
  t63330 = t63327 + t63041;
  t63317 = t19060*t63034;
  t63318 = -1.*t5478*t63039;
  t63319 = t63317 + t63318;
  t63260 = -1.*t5469*t63203;
  t63261 = t63259 + t63260;
  t63339 = t19060*t63212;
  t63340 = -1.*t5478*t63251;
  t63341 = t63339 + t63340;
  t63264 = t19060*t63261;
  t63266 = t5478*t63251;
  t63267 = t63264 + t63266;
  t63277 = t5478*t63274;
  t63278 = -1.*t5469*t63272;
  t63279 = t63278 + t63244;
  t63282 = t19060*t63279;
  t63283 = t63277 + t63282;
  t63343 = -1.*t5478*t63274;
  t63346 = t19060*t63290;
  t63350 = t63343 + t63346;
  t63408 = 6.4*t47292*t63310;
  t63409 = 6.4*t60320*t61318;
  t63410 = Power(t61318,2);
  t63411 = 6.4*t63410;
  t63412 = 13.6*t63330*t63075;
  t63414 = 13.6*t63319*t63087;
  t63415 = 13.6*t63330*t63147;
  t63416 = -1.*t5478*t63106;
  t63429 = t63082 + t63416;
  t63437 = 13.6*t63087*t63429;
  t63510 = 12.*t63258*t63350;
  t63512 = 12.*t63341*t63293;
  t63513 = -1.*t5478*t63368;
  t63514 = t19060*t63373;
  t63515 = t63513 + t63514;
  t63516 = 12.*t63258*t63515;
  t63517 = 12.*t63341*t63379;
  t63525 = -1.*t5469;
  t63526 = 1. + t63525;
  t63528 = -0.15*t63526;
  t63530 = -0.15*t5469;
  t63531 = -0.16*t22479;
  t63532 = t63528 + t63530 + t63531;
  t63544 = -1.*t63026;
  t63545 = 1. + t63544;
  t63547 = 0.4*t63545;
  t63548 = 0.69*t63026;
  t63549 = t63547 + t63548;
  t63553 = -0.15*t63545;
  t63554 = -0.15*t63026;
  t63555 = -0.29*t63031;
  t63556 = t63553 + t63554 + t63555;
  t63564 = -1.*t63549*t22479;
  t63565 = t5469*t63556;
  t63566 = t63528 + t63564 + t63565;
  t63551 = t5469*t63549;
  t63552 = 0.15*t22479;
  t63558 = t22479*t63556;
  t63559 = t63551 + t63552 + t63558;
  t63577 = -1.*t63156;
  t63579 = 1. + t63577;
  t63582 = 0.8*t63579;
  t63584 = 1.04*t63156;
  t63585 = t63582 + t63584;
  t63587 = -0.15*t63579;
  t63588 = -0.15*t63156;
  t63589 = -0.24*t63169;
  t63591 = t63587 + t63588 + t63589;
  t63576 = 0.4*t63031;
  t63586 = -1.*t63585*t63031;
  t63592 = t63026*t63591;
  t63593 = t63553 + t63576 + t63586 + t63592;
  t63597 = t63026*t63585;
  t63598 = 0.15*t63031;
  t63599 = t63031*t63591;
  t63601 = t63547 + t63597 + t63598 + t63599;
  t63609 = t5469*t63593;
  t63610 = -1.*t22479*t63601;
  t63613 = t63528 + t63609 + t63610;
  t63594 = t22479*t63593;
  t63602 = t5469*t63601;
  t63603 = t63552 + t63594 + t63602;
  t63533 = -1.*t5469*t63532;
  t63534 = -0.16*t5469*t22479;
  t63535 = t63533 + t63534;
  t63537 = 6.4*t63535*t61318;
  t63539 = Power(t5469,2);
  t63540 = 0.16*t63539;
  t63541 = -1.*t63532*t22479;
  t63542 = t63540 + t63541;
  t63570 = t63566*t63080;
  t63571 = t63559*t63039;
  t63572 = t63570 + t63571;
  t63563 = -1.*t63559*t63034;
  t63567 = -1.*t63566*t63039;
  t63568 = t63563 + t63567;
  t63641 = -1.*t5469*t63549;
  t63642 = -0.15*t22479;
  t63644 = -1.*t22479*t63556;
  t63645 = t63641 + t63642 + t63644;
  t63638 = 0.15*t5469;
  t63639 = t63638 + t63564 + t63565;
  t63608 = t63603*t63212;
  t63614 = t63613*t63251;
  t63616 = t63608 + t63614;
  t63618 = -1.*t63613*t63274;
  t63619 = -1.*t63603*t63290;
  t63621 = t63618 + t63619;
  t63672 = -1.*t22479*t63593;
  t63673 = -1.*t5469*t63601;
  t63678 = t63642 + t63672 + t63673;
  t63669 = t63638 + t63609 + t63610;
  t63651 = 13.6*t63087*t63572;
  t63637 = -1.*t63566*t63080;
  t63648 = -1.*t63559*t63039;
  t63652 = 13.6*t63568*t63147;
  t63655 = t63559*t63080;
  t63701 = -0.29*t63026*t22479;
  t63702 = -0.29*t5469*t63031;
  t63704 = t63701 + t63702;
  t63707 = -0.29*t5469*t63026;
  t63709 = 0.29*t22479*t63031;
  t63712 = t63707 + t63709;
  t63657 = t63566*t63106;
  t63728 = 0.15*t63026;
  t63729 = t63728 + t63576 + t63586 + t63592;
  t63731 = 0.4*t63026;
  t63732 = -1.*t63026*t63585;
  t63735 = -0.15*t63031;
  t63736 = -1.*t63031*t63591;
  t63739 = t63731 + t63732 + t63735 + t63736;
  t63745 = t5469*t63729;
  t63747 = t22479*t63739;
  t63748 = t63745 + t63747;
  t63730 = -1.*t22479*t63729;
  t63740 = t5469*t63739;
  t63742 = t63730 + t63740;
  t63726 = 12.*t63258*t63616;
  t63727 = -1.*t63603*t63212;
  t63744 = -1.*t63613*t63251;
  t63770 = -0.24*t63156*t63031;
  t63771 = -0.24*t63026*t63169;
  t63773 = t63770 + t63771;
  t63775 = -0.24*t63026*t63156;
  t63776 = 0.24*t63031*t63169;
  t63777 = t63775 + t63776;
  t63757 = 12.*t63621*t63379;
  t63774 = -1.*t22479*t63773;
  t63778 = t5469*t63777;
  t63779 = t63774 + t63778;
  t63782 = t5469*t63773;
  t63783 = t22479*t63777;
  t63784 = t63782 + t63783;
  t63760 = t63613*t63368;
  t63762 = t63603*t63373;
  t63809 = t63026*t63556;
  t63811 = t63549*t63031;
  t63812 = t63728 + t63809 + t63811;
  t63801 = -1.*t63549*t63026;
  t63802 = t63556*t63031;
  t63804 = t63801 + t63598 + t63802;
  t63814 = t63601*t63272;
  t63816 = 0.15*t63203;
  t63818 = t63593*t63203;
  t63822 = t63814 + t63816 + t63818;
  t63824 = -1.*t63593*t63175;
  t63826 = 0.15*t63272;
  t63827 = -1.*t63601*t63203;
  t63828 = t63824 + t63826 + t63827;
  t63807 = 13.6*t63804*t63087;
  t63813 = 13.6*t63812*t63147;
  t63858 = 12.*t63828*t63258;
  t63859 = 0.15*t63175;
  t63860 = t63593*t63175;
  t63866 = t63601*t63203;
  t63873 = -1.*t63601*t63175;
  t63881 = -1.*t63593*t63366;
  t63884 = 12.*t63822*t63379;
  t63914 = 0.15*t63156;
  t63915 = t63156*t63591;
  t63916 = -0.4*t63169;
  t63917 = t63585*t63169;
  t63918 = t63914 + t63915 + t63916 + t63917;
  t63921 = 0.4*t63156;
  t63922 = -1.*t63156*t63585;
  t63925 = 0.15*t63169;
  t63928 = t63591*t63169;
  t63929 = t63921 + t63922 + t63925 + t63928;
  t63912 = -3.944*t63087;
  t63949 = 12.*t63929*t63258;
  t63950 = 12.*t63918*t63379;
  p_output1[0]=var2[0]*(-0.5*(t63022 + 12.8*t61318*t63310 + 27.2*t63075*t63319 + 27.2*t63087*t63330 + 24.*t63258*t63341 + 24.*t63293*t63350)*var2[2] - 0.5*(12.8*t47292*t60320 + t63022 + t63089 + t63150 + 24.*t63258*t63267 + 24.*t63283*t63293)*var2[3] - 0.5*(t63089 + t63150 + t63363 + t63387)*var2[4] - 0.5*(t63363 + t63387)*var2[5]);
  p_output1[1]=var2[0]*(-0.5*(13.6*(-1.*t5478*t63034 - 1.*t19060*t63039)*t63075 + 12.*(-1.*t5478*t63212 - 1.*t19060*t63251)*t63258 + 12.*(-1.*t19060*t63274 - 1.*t5478*t63290)*t63293 + 6.4*Power(t63310,2) + 13.6*t63087*(-1.*t19060*t63080 + t63318) + 13.6*Power(t63319,2) + 13.6*Power(t63330,2) + 12.*Power(t63341,2) + 12.*Power(t63350,2) + t63408 + t63409 + t63411)*var2[2] - 0.5*(6.4*Power(t47292,2) + 12.*t63258*(t63257 - 1.*t5478*t63261) + 12.*(-1.*t5478*t63279 + t63285)*t63293 + 12.*t63267*t63341 + 12.*t63283*t63350 + t63408 + t63409 + t63411 + t63412 + t63414 + t63415 + t63437)*var2[3] - 0.5*(t63412 + t63414 + t63415 + t63437 + t63510 + t63512 + t63516 + t63517)*var2[4] - 0.5*(t63510 + t63512 + t63516 + t63517)*var2[5]);
  p_output1[2]=var2[0]*(-0.5*(0.048*t19060 + t63537 + 6.4*t63310*t63542 + 13.6*t63330*t63568 + 13.6*t63319*t63572 + 12.*t63350*t63616 + 12.*t63341*t63621)*var2[2] - 0.5*(6.4*t47292*(0.16*Power(t22479,2) + t22479*t63532) + 6.4*t60320*t63535 + t63537 + 6.4*t47292*t63542 + 12.*t63283*t63616 + 12.*t63267*t63621 + 13.6*t63087*(t63637 - 1.*t63034*t63639 - 1.*t63039*t63645 + t63648) + t63651 + t63652 + 13.6*t63075*(t63039*t63639 + t63080*t63645 + t63655 + t63657) + 12.*t63293*(t63251*t63603 + t63261*t63613 + t63212*t63669 + t63251*t63678) + 12.*t63258*(-1.*t63274*t63603 - 1.*t63279*t63613 - 1.*t63290*t63669 - 1.*t63274*t63678))*var2[3] - 0.5*(t63651 + t63652 + 13.6*t63087*(t63637 + t63648 - 1.*t63034*t63704 - 1.*t63039*t63712) + 13.6*t63075*(t63655 + t63657 + t63039*t63704 + t63080*t63712) + t63726 + 12.*t63258*(t63727 - 1.*t63274*t63742 + t63744 - 1.*t63290*t63748) + t63757 + 12.*t63293*(t63251*t63742 + t63212*t63748 + t63760 + t63762))*var2[4] - 0.5*(t63726 + t63757 + 12.*t63293*(t63760 + t63762 + t63251*t63779 + t63212*t63784) + 12.*t63258*(t63727 + t63744 - 1.*t63274*t63779 - 1.*t63290*t63784))*var2[5]);
  p_output1[3]=var2[0]*(-0.5*(-1.024*t63310 + 13.6*t63319*t63804 + 13.6*t63330*t63812 + 12.*t63341*t63822 + 12.*t63350*t63828)*var2[2] - 0.5*(-1.024*t47292 + t63807 + t63813 + 12.*t63267*t63822 + 12.*t63283*t63828)*var2[3] - 0.5*(13.6*t63087*(-0.29*Power(t63026,2) - 0.29*Power(t63031,2) + t63026*t63549 - 1.*t63031*t63556 + t63735) + t63807 + 13.6*t63075*t63812 + t63813 + t63858 + 12.*t63258*(t63272*t63729 + t63203*t63739 + t63859 + t63860 + t63866) + 12.*t63293*(-1.*t63203*t63729 - 1.*t63175*t63739 + t63816 + t63873 + t63881) + t63884)*var2[4] - 0.5*(t63858 + 12.*t63258*(t63272*t63773 + t63203*t63777 + t63859 + t63860 + t63866) + 12.*t63293*(-1.*t63203*t63773 - 1.*t63175*t63777 + t63816 + t63873 + t63881) + t63884)*var2[5]);
  p_output1[4]=var2[0]*(-0.5*(-3.944*t63319 + 12.*t63341*t63918 + 12.*t63350*t63929)*var2[2] - 0.5*(t63912 + 12.*t63267*t63918 + 12.*t63283*t63929)*var2[3] - 0.5*(t63912 + t63949 + t63950)*var2[4] - 0.5*(12.*t63258*(-0.4*t63156 - 0.24*Power(t63156,2) - 0.15*t63169 - 0.24*Power(t63169,2) + t63156*t63585 - 1.*t63169*t63591) + 12.*t63293*t63918 + t63949 + t63950)*var2[5]);
  p_output1[5]=var2[0]*(1.44*t63350*var2[2] + 1.44*t63283*var2[3] + 1.44*t63258*var2[4] + 1.44*t63258*var2[5]);
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

#include "Ce1_vec1_acrobot.hh"

namespace SymFunction
{

void Ce1_vec1_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
