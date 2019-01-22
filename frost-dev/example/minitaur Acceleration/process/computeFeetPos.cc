/*
 * Automatically Generated from Mathematica.
 * Tue 22 Jan 2019 10:41:01 GMT-05:00
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
  double t8;
  double t13;
  double t33;
  double t47;
  double t10;
  double t59;
  double t63;
  double t64;
  double t79;
  double t80;
  double t82;
  double t85;
  double t113;
  double t126;
  double t138;
  double t69;
  double t70;
  double t71;
  double t72;
  double t89;
  double t148;
  double t149;
  double t151;
  double t152;
  double t154;
  double t155;
  double t233;
  double t160;
  double t205;
  double t217;
  double t220;
  double t223;
  double t226;
  double t227;
  double t234;
  double t78;
  double t161;
  double t84;
  double t170;
  double t171;
  double t243;
  double t228;
  double t318;
  double t319;
  double t320;
  double t338;
  double t343;
  double t344;
  double t350;
  double t351;
  double t322;
  double t355;
  double t356;
  double t366;
  double t352;
  double t353;
  double t372;
  double t359;
  double t360;
  double t361;
  double t362;
  double t363;
  double t364;
  double t386;
  double t387;
  double t388;
  double t389;
  double t396;
  double t397;
  double t398;
  double t399;
  double t400;
  double t401;
  double t411;
  double t421;
  double t422;
  double t418;
  double t377;
  double t416;
  double t426;
  double t453;
  double t454;
  double t455;
  double t461;
  double t462;
  double t463;
  double t465;
  double t466;
  double t457;
  double t480;
  double t485;
  double t499;
  double t470;
  double t474;
  double t501;
  double t492;
  double t493;
  double t494;
  double t495;
  double t496;
  double t497;
  double t507;
  double t508;
  double t509;
  double t514;
  double t529;
  double t530;
  double t531;
  double t532;
  double t533;
  double t534;
  double t536;
  double t542;
  double t543;
  double t539;
  double t502;
  double t537;
  double t559;
  double t574;
  double t575;
  double t576;
  double t594;
  double t595;
  double t596;
  double t598;
  double t599;
  double t582;
  double t603;
  double t604;
  double t614;
  double t600;
  double t601;
  double t616;
  double t607;
  double t608;
  double t609;
  double t610;
  double t611;
  double t612;
  double t622;
  double t623;
  double t624;
  double t625;
  double t632;
  double t633;
  double t634;
  double t635;
  double t636;
  double t637;
  double t639;
  double t645;
  double t646;
  double t642;
  double t617;
  double t640;
  double t650;
  double t667;
  double t665;
  double t666;
  double t668;
  double t669;
  double t671;
  double t672;
  double t673;
  double t83;
  double t91;
  double t92;
  double t141;
  double t144;
  double t156;
  double t159;
  double t162;
  double t163;
  double t164;
  double t676;
  double t677;
  double t678;
  double t679;
  double t230;
  double t681;
  double t682;
  double t683;
  double t684;
  double t240;
  double t241;
  double t687;
  double t688;
  double t689;
  double t690;
  double t284;
  double t296;
  double t299;
  double t302;
  double t305;
  double t310;
  double t333;
  double t349;
  double t354;
  double t357;
  double t358;
  double t367;
  double t382;
  double t383;
  double t384;
  double t385;
  double t391;
  double t392;
  double t393;
  double t394;
  double t395;
  double t710;
  double t711;
  double t712;
  double t713;
  double t419;
  double t715;
  double t716;
  double t717;
  double t718;
  double t720;
  double t721;
  double t722;
  double t723;
  double t429;
  double t433;
  double t434;
  double t460;
  double t464;
  double t475;
  double t486;
  double t491;
  double t500;
  double t503;
  double t504;
  double t505;
  double t506;
  double t524;
  double t525;
  double t526;
  double t527;
  double t528;
  double t744;
  double t745;
  double t746;
  double t747;
  double t540;
  double t749;
  double t750;
  double t751;
  double t752;
  double t754;
  double t755;
  double t756;
  double t757;
  double t562;
  double t566;
  double t567;
  double t593;
  double t597;
  double t602;
  double t605;
  double t606;
  double t615;
  double t618;
  double t619;
  double t620;
  double t621;
  double t627;
  double t628;
  double t629;
  double t630;
  double t631;
  double t778;
  double t779;
  double t780;
  double t781;
  double t643;
  double t783;
  double t784;
  double t785;
  double t786;
  double t788;
  double t789;
  double t790;
  double t791;
  double t653;
  double t657;
  double t658;
  double t809;
  double t810;
  double t811;
  double t813;
  double t814;
  double t815;
  double t818;
  double t819;
  double t820;
  double t821;
  double t823;
  double t824;
  double t825;
  double t826;
  double t829;
  double t830;
  double t831;
  double t832;
  double t852;
  double t853;
  double t854;
  double t855;
  double t857;
  double t858;
  double t859;
  double t860;
  double t862;
  double t863;
  double t864;
  double t865;
  double t886;
  double t887;
  double t888;
  double t889;
  double t891;
  double t892;
  double t893;
  double t894;
  double t896;
  double t897;
  double t898;
  double t899;
  double t920;
  double t921;
  double t922;
  double t923;
  double t925;
  double t926;
  double t927;
  double t928;
  double t930;
  double t931;
  double t932;
  double t933;
  t8 = Cos(var1[4]);
  t13 = Cos(var1[6]);
  t33 = -1.*t13;
  t47 = 1. + t33;
  t10 = Cos(var1[5]);
  t59 = Sin(var1[5]);
  t63 = Sin(var1[4]);
  t64 = Sin(var1[6]);
  t79 = Cos(var1[8]);
  t80 = -1.*t79;
  t82 = 1. + t80;
  t85 = Sin(var1[8]);
  t113 = -3.e-6*t82;
  t126 = 3.e-6*t85;
  t138 = t113 + t126;
  t69 = t8*t10*t13;
  t70 = -3.e-6*t8*t47*t59;
  t71 = t63*t64;
  t72 = t69 + t70 + t71;
  t89 = -1.*t85;
  t148 = 3.e-6*t8*t10*t47;
  t149 = -9.e-12*t47;
  t151 = 1. + t149;
  t152 = -1.*t8*t151*t59;
  t154 = -3.e-6*t63*t64;
  t155 = t148 + t152 + t154;
  t233 = 3.e-6*t82;
  t160 = -3.e-6*t85;
  t205 = -1.000000000009*t47;
  t217 = 1. + t205;
  t220 = t217*t63;
  t223 = -1.*t8*t10*t64;
  t226 = -3.e-6*t8*t59*t64;
  t227 = t220 + t223 + t226;
  t234 = t233 + t126;
  t78 = 1.125e-12*var1[8];
  t161 = t113 + t160;
  t84 = -9.e-12*t82;
  t170 = -1.000000000009*t82;
  t171 = 1. + t170;
  t243 = t233 + t160;
  t228 = 9.e-12*t82;
  t318 = Cos(var1[10]);
  t319 = -1.*t318;
  t320 = 1. + t319;
  t338 = Cos(var1[12]);
  t343 = -1.*t338;
  t344 = 1. + t343;
  t350 = -3.e-6*t344;
  t351 = Sin(var1[12]);
  t322 = Sin(var1[10]);
  t355 = 3.e-6*t351;
  t356 = t350 + t355;
  t366 = 7.5e-14*var1[12];
  t352 = -3.e-6*t351;
  t353 = t350 + t352;
  t372 = -9.e-12*t344;
  t359 = 3.e-6*t320*t8*t10;
  t360 = -3.e-6*t322*t63;
  t361 = -9.e-12*t320;
  t362 = 1. + t361;
  t363 = -1.*t362*t8*t59;
  t364 = t359 + t360 + t363;
  t386 = t318*t8*t10;
  t387 = t322*t63;
  t388 = -3.e-6*t320*t8*t59;
  t389 = t386 + t387 + t388;
  t396 = -1.*t8*t10*t322;
  t397 = -1.000000000009*t320;
  t398 = 1. + t397;
  t399 = t398*t63;
  t400 = -3.e-6*t8*t322*t59;
  t401 = t396 + t399 + t400;
  t411 = 3.e-6*t344;
  t421 = -1.000000000009*t344;
  t422 = 1. + t421;
  t418 = 9.e-12*t344;
  t377 = -1.*t351;
  t416 = t411 + t352;
  t426 = t411 + t355;
  t453 = Cos(var1[15]);
  t454 = -1.*t453;
  t455 = 1. + t454;
  t461 = Cos(var1[17]);
  t462 = -1.*t461;
  t463 = 1. + t462;
  t465 = -3.e-6*t463;
  t466 = Sin(var1[17]);
  t457 = Sin(var1[15]);
  t480 = 3.e-6*t466;
  t485 = t465 + t480;
  t499 = 1.125e-12*var1[17];
  t470 = -3.e-6*t466;
  t474 = t465 + t470;
  t501 = -9.e-12*t463;
  t492 = 3.e-6*t455*t8*t10;
  t493 = -3.e-6*t457*t63;
  t494 = -9.e-12*t455;
  t495 = 1. + t494;
  t496 = -1.*t495*t8*t59;
  t497 = t492 + t493 + t496;
  t507 = t453*t8*t10;
  t508 = t457*t63;
  t509 = -3.e-6*t455*t8*t59;
  t514 = t507 + t508 + t509;
  t529 = -1.*t8*t10*t457;
  t530 = -1.000000000009*t455;
  t531 = 1. + t530;
  t532 = t531*t63;
  t533 = -3.e-6*t8*t457*t59;
  t534 = t529 + t532 + t533;
  t536 = 3.e-6*t463;
  t542 = -1.000000000009*t463;
  t543 = 1. + t542;
  t539 = 9.e-12*t463;
  t502 = -1.*t466;
  t537 = t536 + t470;
  t559 = t536 + t480;
  t574 = Cos(var1[19]);
  t575 = -1.*t574;
  t576 = 1. + t575;
  t594 = Cos(var1[21]);
  t595 = -1.*t594;
  t596 = 1. + t595;
  t598 = -3.e-6*t596;
  t599 = Sin(var1[21]);
  t582 = Sin(var1[19]);
  t603 = 3.e-6*t599;
  t604 = t598 + t603;
  t614 = 7.5e-14*var1[21];
  t600 = -3.e-6*t599;
  t601 = t598 + t600;
  t616 = -9.e-12*t596;
  t607 = 3.e-6*t576*t8*t10;
  t608 = -3.e-6*t582*t63;
  t609 = -9.e-12*t576;
  t610 = 1. + t609;
  t611 = -1.*t610*t8*t59;
  t612 = t607 + t608 + t611;
  t622 = t574*t8*t10;
  t623 = t582*t63;
  t624 = -3.e-6*t576*t8*t59;
  t625 = t622 + t623 + t624;
  t632 = -1.*t8*t10*t582;
  t633 = -1.000000000009*t576;
  t634 = 1. + t633;
  t635 = t634*t63;
  t636 = -3.e-6*t8*t582*t59;
  t637 = t632 + t635 + t636;
  t639 = 3.e-6*t596;
  t645 = -1.000000000009*t596;
  t646 = 1. + t645;
  t642 = 9.e-12*t596;
  t617 = -1.*t599;
  t640 = t639 + t600;
  t650 = t639 + t603;
  t667 = Cos(var1[3]);
  t665 = Sin(var1[3]);
  t666 = t10*t665*t63;
  t668 = t667*t59;
  t669 = t666 + t668;
  t671 = t667*t10;
  t672 = -1.*t665*t63*t59;
  t673 = t671 + t672;
  t83 = 0.225000000002025*t82;
  t91 = t84 + t89;
  t92 = 0.1*t91;
  t141 = -9.75e-7*t138;
  t144 = t78 + t83 + t92 + t141;
  t156 = 3.75e-7*var1[8];
  t159 = -1.755e-17*t82;
  t162 = 0.225*t161;
  t163 = 0.1*t138;
  t164 = t156 + t159 + t162 + t163;
  t676 = t13*t669;
  t677 = 3.e-6*t47*t673;
  t678 = -1.*t8*t665*t64;
  t679 = t676 + t677 + t678;
  t230 = t228 + t89;
  t681 = 3.e-6*t47*t669;
  t682 = t151*t673;
  t683 = 3.e-6*t8*t665*t64;
  t684 = t681 + t682 + t683;
  t240 = -1.8e-11*t82;
  t241 = 1. + t240;
  t687 = -1.*t8*t217*t665;
  t688 = -1.*t669*t64;
  t689 = 3.e-6*t673*t64;
  t690 = t687 + t688 + t689;
  t284 = 0.1000000000009*t82;
  t296 = -9.75e-7*t161;
  t299 = t84 + t85;
  t302 = 0.225*t299;
  t305 = t78 + t284 + t296 + t302;
  t310 = t228 + t85;
  t333 = 2.5e-8*var1[12];
  t349 = 6.75e-18*t344;
  t354 = -0.225000000003*t353;
  t357 = 0.100000000003*t356;
  t358 = t333 + t349 + t354 + t357;
  t367 = -0.225000000005025*t344;
  t382 = t372 + t377;
  t383 = 0.100000000003*t382;
  t384 = 3.75e-7*t356;
  t385 = t366 + t367 + t383 + t384;
  t391 = 0.1000000000039*t344;
  t392 = 3.75e-7*t353;
  t393 = t372 + t351;
  t394 = -0.225000000003*t393;
  t395 = t366 + t391 + t392 + t394;
  t710 = 3.e-6*t8*t322*t665;
  t711 = 3.e-6*t320*t669;
  t712 = t362*t673;
  t713 = t710 + t711 + t712;
  t419 = t418 + t351;
  t715 = -1.*t8*t322*t665;
  t716 = t318*t669;
  t717 = 3.e-6*t320*t673;
  t718 = t715 + t716 + t717;
  t720 = -1.*t398*t8*t665;
  t721 = -1.*t322*t669;
  t722 = 3.e-6*t322*t673;
  t723 = t720 + t721 + t722;
  t429 = t418 + t377;
  t433 = -1.8e-11*t344;
  t434 = 1. + t433;
  t460 = 3.75e-7*var1[17];
  t464 = -1.755e-17*t463;
  t475 = 0.225*t474;
  t486 = 0.1*t485;
  t491 = t460 + t464 + t475 + t486;
  t500 = 0.225000000002025*t463;
  t503 = t501 + t502;
  t504 = 0.1*t503;
  t505 = -9.75e-7*t485;
  t506 = t499 + t500 + t504 + t505;
  t524 = 0.1000000000009*t463;
  t525 = -9.75e-7*t474;
  t526 = t501 + t466;
  t527 = 0.225*t526;
  t528 = t499 + t524 + t525 + t527;
  t744 = 3.e-6*t8*t457*t665;
  t745 = 3.e-6*t455*t669;
  t746 = t495*t673;
  t747 = t744 + t745 + t746;
  t540 = t539 + t466;
  t749 = -1.*t8*t457*t665;
  t750 = t453*t669;
  t751 = 3.e-6*t455*t673;
  t752 = t749 + t750 + t751;
  t754 = -1.*t531*t8*t665;
  t755 = -1.*t457*t669;
  t756 = 3.e-6*t457*t673;
  t757 = t754 + t755 + t756;
  t562 = t539 + t502;
  t566 = -1.8e-11*t463;
  t567 = 1. + t566;
  t593 = 2.5e-8*var1[21];
  t597 = 6.75e-18*t596;
  t602 = -0.225000000003*t601;
  t605 = 0.100000000003*t604;
  t606 = t593 + t597 + t602 + t605;
  t615 = -0.225000000005025*t596;
  t618 = t616 + t617;
  t619 = 0.100000000003*t618;
  t620 = 3.75e-7*t604;
  t621 = t614 + t615 + t619 + t620;
  t627 = 0.1000000000039*t596;
  t628 = 3.75e-7*t601;
  t629 = t616 + t599;
  t630 = -0.225000000003*t629;
  t631 = t614 + t627 + t628 + t630;
  t778 = 3.e-6*t8*t582*t665;
  t779 = 3.e-6*t576*t669;
  t780 = t610*t673;
  t781 = t778 + t779 + t780;
  t643 = t642 + t599;
  t783 = -1.*t8*t582*t665;
  t784 = t574*t669;
  t785 = 3.e-6*t576*t673;
  t786 = t783 + t784 + t785;
  t788 = -1.*t634*t8*t665;
  t789 = -1.*t582*t669;
  t790 = 3.e-6*t582*t673;
  t791 = t788 + t789 + t790;
  t653 = t642 + t617;
  t657 = -1.8e-11*t596;
  t658 = 1. + t657;
  t809 = -1.*t667*t10*t63;
  t810 = t665*t59;
  t811 = t809 + t810;
  t813 = t10*t665;
  t814 = t667*t63*t59;
  t815 = t813 + t814;
  t818 = t13*t811;
  t819 = 3.e-6*t47*t815;
  t820 = t667*t8*t64;
  t821 = t818 + t819 + t820;
  t823 = 3.e-6*t47*t811;
  t824 = t151*t815;
  t825 = -3.e-6*t667*t8*t64;
  t826 = t823 + t824 + t825;
  t829 = t667*t8*t217;
  t830 = -1.*t811*t64;
  t831 = 3.e-6*t815*t64;
  t832 = t829 + t830 + t831;
  t852 = -3.e-6*t667*t8*t322;
  t853 = 3.e-6*t320*t811;
  t854 = t362*t815;
  t855 = t852 + t853 + t854;
  t857 = t667*t8*t322;
  t858 = t318*t811;
  t859 = 3.e-6*t320*t815;
  t860 = t857 + t858 + t859;
  t862 = t398*t667*t8;
  t863 = -1.*t322*t811;
  t864 = 3.e-6*t322*t815;
  t865 = t862 + t863 + t864;
  t886 = -3.e-6*t667*t8*t457;
  t887 = 3.e-6*t455*t811;
  t888 = t495*t815;
  t889 = t886 + t887 + t888;
  t891 = t667*t8*t457;
  t892 = t453*t811;
  t893 = 3.e-6*t455*t815;
  t894 = t891 + t892 + t893;
  t896 = t531*t667*t8;
  t897 = -1.*t457*t811;
  t898 = 3.e-6*t457*t815;
  t899 = t896 + t897 + t898;
  t920 = -3.e-6*t667*t8*t582;
  t921 = 3.e-6*t576*t811;
  t922 = t610*t815;
  t923 = t920 + t921 + t922;
  t925 = t667*t8*t582;
  t926 = t574*t811;
  t927 = 3.e-6*t576*t815;
  t928 = t925 + t926 + t927;
  t930 = t634*t667*t8;
  t931 = -1.*t582*t811;
  t932 = 3.e-6*t582*t815;
  t933 = t930 + t931 + t932;
  p_output1[0]=t155*t164 + t227*t305 - 0.225000000002025*t63*t64 + t144*t72 + 0.225*(t227*t230 + t155*t234 + t171*t72) + 0.130001*(t227*t234 + t155*t241 + t243*t72) - 0.14*(t171*t227 + t155*t243 + t310*t72) + 0.225000000002025*t10*t47*t8 + 6.75000000006075e-7*t47*t59*t8 + var1[0];
  p_output1[1]=t358*t364 + t385*t389 + t395*t401 - 0.14*(t364*t416 + t389*t419 + t401*t422) - 0.225*(t389*t422 + t364*t426 + t401*t429) + 0.130001*(t389*t416 + t401*t426 + t364*t434) + 0.225000000002025*t322*t63 - 0.225000000002025*t10*t320*t8 - 6.75000000006075e-7*t320*t59*t8 + var1[0];
  p_output1[2]=t491*t497 + t506*t514 + t528*t534 - 0.14*(t497*t537 + t514*t540 + t534*t543) + 0.225*(t514*t543 + t497*t559 + t534*t562) - 0.129999*(t514*t537 + t534*t559 + t497*t567) - 0.225000000002025*t457*t63 + 0.225000000002025*t10*t455*t8 + 6.75000000006075e-7*t455*t59*t8 + var1[0];
  p_output1[3]=t606*t612 + t621*t625 + 0.225000000002025*t582*t63 + t631*t637 - 0.14*(t612*t640 + t625*t643 + t637*t646) - 0.225*(t625*t646 + t612*t650 + t637*t653) - 0.129999*(t625*t640 + t637*t650 + t612*t658) - 0.225000000002025*t10*t576*t8 - 6.75000000006075e-7*t576*t59*t8 + var1[0];
  p_output1[4]=0.225000000002025*t47*t669 - 6.75000000006075e-7*t47*t673 + t144*t679 + t164*t684 + t305*t690 - 0.14*(t310*t679 + t243*t684 + t171*t690) + 0.225*(t171*t679 + t234*t684 + t230*t690) + 0.130001*(t243*t679 + t241*t684 + t234*t690) + 0.225000000002025*t64*t665*t8 + var1[1];
  p_output1[5]=-0.225000000002025*t320*t669 + 6.75000000006075e-7*t320*t673 + t358*t713 + t385*t718 + t395*t723 - 0.14*(t416*t713 + t419*t718 + t422*t723) + 0.130001*(t434*t713 + t416*t718 + t426*t723) - 0.225*(t426*t713 + t422*t718 + t429*t723) - 0.225000000002025*t322*t665*t8 + var1[1];
  p_output1[6]=0.225000000002025*t455*t669 - 6.75000000006075e-7*t455*t673 + t491*t747 + t506*t752 + t528*t757 - 0.14*(t537*t747 + t540*t752 + t543*t757) - 0.129999*(t567*t747 + t537*t752 + t559*t757) + 0.225*(t559*t747 + t543*t752 + t562*t757) + 0.225000000002025*t457*t665*t8 + var1[1];
  p_output1[7]=-0.225000000002025*t576*t669 + 6.75000000006075e-7*t576*t673 + t606*t781 + t621*t786 + t631*t791 - 0.14*(t640*t781 + t643*t786 + t646*t791) - 0.129999*(t658*t781 + t640*t786 + t650*t791) - 0.225*(t650*t781 + t646*t786 + t653*t791) - 0.225000000002025*t582*t665*t8 + var1[1];
  p_output1[8]=-0.225000000002025*t64*t667*t8 + 0.225000000002025*t47*t811 - 6.75000000006075e-7*t47*t815 + t144*t821 + t164*t826 + t305*t832 - 0.14*(t310*t821 + t243*t826 + t171*t832) + 0.225*(t171*t821 + t234*t826 + t230*t832) + 0.130001*(t243*t821 + t241*t826 + t234*t832) + var1[2];
  p_output1[9]=0.225000000002025*t322*t667*t8 - 0.225000000002025*t320*t811 + 6.75000000006075e-7*t320*t815 + t358*t855 + t385*t860 + t395*t865 - 0.14*(t416*t855 + t419*t860 + t422*t865) + 0.130001*(t434*t855 + t416*t860 + t426*t865) - 0.225*(t426*t855 + t422*t860 + t429*t865) + var1[2];
  p_output1[10]=-0.225000000002025*t457*t667*t8 + 0.225000000002025*t455*t811 - 6.75000000006075e-7*t455*t815 + t491*t889 + t506*t894 + t528*t899 - 0.14*(t537*t889 + t540*t894 + t543*t899) - 0.129999*(t567*t889 + t537*t894 + t559*t899) + 0.225*(t559*t889 + t543*t894 + t562*t899) + var1[2];
  p_output1[11]=0.225000000002025*t582*t667*t8 - 0.225000000002025*t576*t811 + 6.75000000006075e-7*t576*t815 + t606*t923 + t621*t928 + t631*t933 - 0.14*(t640*t923 + t643*t928 + t646*t933) - 0.129999*(t658*t923 + t640*t928 + t650*t933) - 0.225*(t650*t923 + t646*t928 + t653*t933) + var1[2];
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
