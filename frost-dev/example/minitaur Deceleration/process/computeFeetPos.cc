/*
 * Automatically Generated from Mathematica.
 * Thu 18 Jul 2019 17:15:46 GMT-04:00
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
  double t216;
  double t2611;
  double t2663;
  double t2900;
  double t2577;
  double t4925;
  double t5104;
  double t5354;
  double t7318;
  double t7380;
  double t7472;
  double t8170;
  double t8414;
  double t8724;
  double t8730;
  double t6105;
  double t6207;
  double t6338;
  double t6528;
  double t8272;
  double t8751;
  double t8769;
  double t9024;
  double t9051;
  double t9101;
  double t9494;
  double t10812;
  double t10063;
  double t10566;
  double t10606;
  double t10607;
  double t10687;
  double t10690;
  double t10699;
  double t10815;
  double t6634;
  double t10314;
  double t7531;
  double t10477;
  double t10480;
  double t11910;
  double t10702;
  double t16911;
  double t17739;
  double t18152;
  double t27274;
  double t29974;
  double t30163;
  double t32064;
  double t32586;
  double t25792;
  double t33557;
  double t33654;
  double t33874;
  double t32994;
  double t33189;
  double t33997;
  double t33770;
  double t33773;
  double t33784;
  double t33789;
  double t33822;
  double t33861;
  double t34595;
  double t34599;
  double t34646;
  double t34848;
  double t35055;
  double t35115;
  double t35119;
  double t35120;
  double t35132;
  double t35133;
  double t35143;
  double t35158;
  double t35177;
  double t35149;
  double t34045;
  double t35146;
  double t35294;
  double t35583;
  double t35612;
  double t35617;
  double t35963;
  double t35970;
  double t35978;
  double t36029;
  double t36074;
  double t35679;
  double t36143;
  double t36146;
  double t36300;
  double t36134;
  double t36138;
  double t36343;
  double t36162;
  double t36173;
  double t36176;
  double t36180;
  double t36191;
  double t36199;
  double t36606;
  double t36612;
  double t36626;
  double t36631;
  double t36748;
  double t36848;
  double t36926;
  double t36962;
  double t37115;
  double t37149;
  double t37217;
  double t37622;
  double t37726;
  double t37402;
  double t36366;
  double t37230;
  double t37796;
  double t37977;
  double t38020;
  double t38099;
  double t38165;
  double t38184;
  double t38185;
  double t38196;
  double t38203;
  double t38139;
  double t38220;
  double t38222;
  double t39015;
  double t38204;
  double t38205;
  double t39337;
  double t38392;
  double t38439;
  double t38484;
  double t38525;
  double t38575;
  double t38676;
  double t40308;
  double t40315;
  double t40328;
  double t40352;
  double t40735;
  double t40926;
  double t41028;
  double t41069;
  double t41718;
  double t41729;
  double t42622;
  double t43147;
  double t43152;
  double t42976;
  double t39365;
  double t42929;
  double t43261;
  double t44322;
  double t44244;
  double t44263;
  double t44381;
  double t44419;
  double t44527;
  double t44532;
  double t44535;
  double t7480;
  double t8273;
  double t8352;
  double t8731;
  double t8745;
  double t9631;
  double t9958;
  double t10347;
  double t10377;
  double t10382;
  double t44723;
  double t44724;
  double t44747;
  double t44767;
  double t10729;
  double t44913;
  double t44934;
  double t44951;
  double t44973;
  double t11272;
  double t11809;
  double t45063;
  double t45074;
  double t45154;
  double t45165;
  double t12256;
  double t12263;
  double t12408;
  double t12430;
  double t12432;
  double t13179;
  double t18777;
  double t19901;
  double t19943;
  double t19952;
  double t27171;
  double t31587;
  double t33240;
  double t33735;
  double t33767;
  double t33891;
  double t34073;
  double t34098;
  double t34153;
  double t34255;
  double t34885;
  double t35001;
  double t35044;
  double t35045;
  double t35050;
  double t45723;
  double t45744;
  double t45790;
  double t45864;
  double t35154;
  double t46028;
  double t46038;
  double t46039;
  double t46060;
  double t46078;
  double t46082;
  double t46088;
  double t46124;
  double t35333;
  double t35428;
  double t35434;
  double t35952;
  double t35981;
  double t36139;
  double t36156;
  double t36157;
  double t36334;
  double t36496;
  double t36511;
  double t36594;
  double t36600;
  double t36641;
  double t36643;
  double t36657;
  double t36717;
  double t36744;
  double t46572;
  double t46577;
  double t46585;
  double t46613;
  double t37554;
  double t46631;
  double t46633;
  double t46655;
  double t46673;
  double t46698;
  double t46701;
  double t46727;
  double t46795;
  double t37853;
  double t37891;
  double t37897;
  double t38121;
  double t38129;
  double t38130;
  double t38132;
  double t38158;
  double t38192;
  double t38217;
  double t38243;
  double t38279;
  double t39331;
  double t39398;
  double t39526;
  double t40060;
  double t40144;
  double t40513;
  double t40557;
  double t40564;
  double t40645;
  double t40724;
  double t47284;
  double t47286;
  double t47291;
  double t47296;
  double t43003;
  double t47307;
  double t47318;
  double t47324;
  double t47368;
  double t47396;
  double t47398;
  double t47399;
  double t47402;
  double t43321;
  double t43803;
  double t43914;
  double t47565;
  double t47573;
  double t47599;
  double t47672;
  double t47743;
  double t47745;
  double t47868;
  double t47887;
  double t47935;
  double t47936;
  double t47976;
  double t48007;
  double t48018;
  double t48020;
  double t48121;
  double t48124;
  double t48186;
  double t48213;
  double t49752;
  double t49765;
  double t49853;
  double t49973;
  double t50300;
  double t50540;
  double t50544;
  double t50594;
  double t50748;
  double t50785;
  double t50942;
  double t50946;
  double t51668;
  double t51680;
  double t51685;
  double t51686;
  double t51730;
  double t51734;
  double t51736;
  double t51737;
  double t51743;
  double t51759;
  double t51771;
  double t51772;
  double t52172;
  double t52175;
  double t52202;
  double t52231;
  double t52260;
  double t52273;
  double t52299;
  double t52314;
  double t52323;
  double t52327;
  double t52329;
  double t52380;
  t216 = Cos(var1[4]);
  t2611 = Cos(var1[6]);
  t2663 = -1.*t2611;
  t2900 = 1. + t2663;
  t2577 = Cos(var1[5]);
  t4925 = Sin(var1[5]);
  t5104 = Sin(var1[4]);
  t5354 = Sin(var1[6]);
  t7318 = Cos(var1[8]);
  t7380 = -1.*t7318;
  t7472 = 1. + t7380;
  t8170 = Sin(var1[8]);
  t8414 = -3.e-6*t7472;
  t8724 = 3.e-6*t8170;
  t8730 = t8414 + t8724;
  t6105 = t216*t2577*t2611;
  t6207 = -3.e-6*t216*t2900*t4925;
  t6338 = t5104*t5354;
  t6528 = t6105 + t6207 + t6338;
  t8272 = -1.*t8170;
  t8751 = 3.e-6*t216*t2577*t2900;
  t8769 = -9.e-12*t2900;
  t9024 = 1. + t8769;
  t9051 = -1.*t216*t9024*t4925;
  t9101 = -3.e-6*t5104*t5354;
  t9494 = t8751 + t9051 + t9101;
  t10812 = 3.e-6*t7472;
  t10063 = -3.e-6*t8170;
  t10566 = -1.000000000009*t2900;
  t10606 = 1. + t10566;
  t10607 = t10606*t5104;
  t10687 = -1.*t216*t2577*t5354;
  t10690 = -3.e-6*t216*t4925*t5354;
  t10699 = t10607 + t10687 + t10690;
  t10815 = t10812 + t8724;
  t6634 = 9.e-13*var1[8];
  t10314 = t8414 + t10063;
  t7531 = -9.e-12*t7472;
  t10477 = -1.000000000009*t7472;
  t10480 = 1. + t10477;
  t11910 = t10812 + t10063;
  t10702 = 9.e-12*t7472;
  t16911 = Cos(var1[10]);
  t17739 = -1.*t16911;
  t18152 = 1. + t17739;
  t27274 = Cos(var1[12]);
  t29974 = -1.*t27274;
  t30163 = 1. + t29974;
  t32064 = -3.e-6*t30163;
  t32586 = Sin(var1[12]);
  t25792 = Sin(var1[10]);
  t33557 = 3.e-6*t32586;
  t33654 = t32064 + t33557;
  t33874 = 3.e-13*var1[12];
  t32994 = -3.e-6*t32586;
  t33189 = t32064 + t32994;
  t33997 = -9.e-12*t30163;
  t33770 = 3.e-6*t18152*t216*t2577;
  t33773 = -3.e-6*t25792*t5104;
  t33784 = -9.e-12*t18152;
  t33789 = 1. + t33784;
  t33822 = -1.*t33789*t216*t4925;
  t33861 = t33770 + t33773 + t33822;
  t34595 = t16911*t216*t2577;
  t34599 = t25792*t5104;
  t34646 = -3.e-6*t18152*t216*t4925;
  t34848 = t34595 + t34599 + t34646;
  t35055 = -1.*t216*t2577*t25792;
  t35115 = -1.000000000009*t18152;
  t35119 = 1. + t35115;
  t35120 = t35119*t5104;
  t35132 = -3.e-6*t216*t25792*t4925;
  t35133 = t35055 + t35120 + t35132;
  t35143 = 3.e-6*t30163;
  t35158 = -1.000000000009*t30163;
  t35177 = 1. + t35158;
  t35149 = 9.e-12*t30163;
  t34045 = -1.*t32586;
  t35146 = t35143 + t32994;
  t35294 = t35143 + t33557;
  t35583 = Cos(var1[15]);
  t35612 = -1.*t35583;
  t35617 = 1. + t35612;
  t35963 = Cos(var1[17]);
  t35970 = -1.*t35963;
  t35978 = 1. + t35970;
  t36029 = -3.e-6*t35978;
  t36074 = Sin(var1[17]);
  t35679 = Sin(var1[15]);
  t36143 = 3.e-6*t36074;
  t36146 = t36029 + t36143;
  t36300 = 9.e-13*var1[17];
  t36134 = -3.e-6*t36074;
  t36138 = t36029 + t36134;
  t36343 = -9.e-12*t35978;
  t36162 = 3.e-6*t35617*t216*t2577;
  t36173 = -3.e-6*t35679*t5104;
  t36176 = -9.e-12*t35617;
  t36180 = 1. + t36176;
  t36191 = -1.*t36180*t216*t4925;
  t36199 = t36162 + t36173 + t36191;
  t36606 = t35583*t216*t2577;
  t36612 = t35679*t5104;
  t36626 = -3.e-6*t35617*t216*t4925;
  t36631 = t36606 + t36612 + t36626;
  t36748 = -1.*t216*t2577*t35679;
  t36848 = -1.000000000009*t35617;
  t36926 = 1. + t36848;
  t36962 = t36926*t5104;
  t37115 = -3.e-6*t216*t35679*t4925;
  t37149 = t36748 + t36962 + t37115;
  t37217 = 3.e-6*t35978;
  t37622 = -1.000000000009*t35978;
  t37726 = 1. + t37622;
  t37402 = 9.e-12*t35978;
  t36366 = -1.*t36074;
  t37230 = t37217 + t36134;
  t37796 = t37217 + t36143;
  t37977 = Cos(var1[19]);
  t38020 = -1.*t37977;
  t38099 = 1. + t38020;
  t38165 = Cos(var1[21]);
  t38184 = -1.*t38165;
  t38185 = 1. + t38184;
  t38196 = -3.e-6*t38185;
  t38203 = Sin(var1[21]);
  t38139 = Sin(var1[19]);
  t38220 = 3.e-6*t38203;
  t38222 = t38196 + t38220;
  t39015 = 3.e-13*var1[21];
  t38204 = -3.e-6*t38203;
  t38205 = t38196 + t38204;
  t39337 = -9.e-12*t38185;
  t38392 = 3.e-6*t38099*t216*t2577;
  t38439 = -3.e-6*t38139*t5104;
  t38484 = -9.e-12*t38099;
  t38525 = 1. + t38484;
  t38575 = -1.*t38525*t216*t4925;
  t38676 = t38392 + t38439 + t38575;
  t40308 = t37977*t216*t2577;
  t40315 = t38139*t5104;
  t40328 = -3.e-6*t38099*t216*t4925;
  t40352 = t40308 + t40315 + t40328;
  t40735 = -1.*t216*t2577*t38139;
  t40926 = -1.000000000009*t38099;
  t41028 = 1. + t40926;
  t41069 = t41028*t5104;
  t41718 = -3.e-6*t216*t38139*t4925;
  t41729 = t40735 + t41069 + t41718;
  t42622 = 3.e-6*t38185;
  t43147 = -1.000000000009*t38185;
  t43152 = 1. + t43147;
  t42976 = 9.e-12*t38185;
  t39365 = -1.*t38203;
  t42929 = t42622 + t38204;
  t43261 = t42622 + t38220;
  t44322 = Cos(var1[3]);
  t44244 = Sin(var1[3]);
  t44263 = t2577*t44244*t5104;
  t44381 = t44322*t4925;
  t44419 = t44263 + t44381;
  t44527 = t44322*t2577;
  t44532 = -1.*t44244*t5104*t4925;
  t44535 = t44527 + t44532;
  t7480 = 0.2000000000018*t7472;
  t8273 = t7531 + t8272;
  t8352 = 0.1*t8273;
  t8731 = -9.e-7*t8730;
  t8745 = t6634 + t7480 + t8352 + t8731;
  t9631 = 3.e-7*var1[8];
  t9958 = -1.62e-17*t7472;
  t10347 = 0.2*t10314;
  t10377 = 0.1*t8730;
  t10382 = t9631 + t9958 + t10347 + t10377;
  t44723 = t2611*t44419;
  t44724 = 3.e-6*t2900*t44535;
  t44747 = -1.*t216*t44244*t5354;
  t44767 = t44723 + t44724 + t44747;
  t10729 = t10702 + t8272;
  t44913 = 3.e-6*t2900*t44419;
  t44934 = t9024*t44535;
  t44951 = 3.e-6*t216*t44244*t5354;
  t44973 = t44913 + t44934 + t44951;
  t11272 = -1.8e-11*t7472;
  t11809 = 1. + t11272;
  t45063 = -1.*t216*t10606*t44244;
  t45074 = -1.*t44419*t5354;
  t45154 = 3.e-6*t44535*t5354;
  t45165 = t45063 + t45074 + t45154;
  t12256 = 0.1000000000009*t7472;
  t12263 = -9.e-7*t10314;
  t12408 = t7531 + t8170;
  t12430 = 0.2*t12408;
  t12432 = t6634 + t12256 + t12263 + t12430;
  t13179 = t10702 + t8170;
  t18777 = -1.8e-12*t18152;
  t19901 = -1. + t16911;
  t19943 = 0.2*t19901;
  t19952 = t18777 + t19943;
  t27171 = 1.e-7*var1[12];
  t31587 = 5.4e-18*t30163;
  t33240 = -0.200000000003*t33189;
  t33735 = 0.100000000003*t33654;
  t33767 = t27171 + t31587 + t33240 + t33735;
  t33891 = -0.2000000000048*t30163;
  t34073 = t33997 + t34045;
  t34098 = 0.100000000003*t34073;
  t34153 = 3.e-7*t33654;
  t34255 = t33874 + t33891 + t34098 + t34153;
  t34885 = 0.1000000000039*t30163;
  t35001 = 3.e-7*t33189;
  t35044 = t33997 + t32586;
  t35045 = -0.200000000003*t35044;
  t35050 = t33874 + t34885 + t35001 + t35045;
  t45723 = 3.e-6*t216*t25792*t44244;
  t45744 = 3.e-6*t18152*t44419;
  t45790 = t33789*t44535;
  t45864 = t45723 + t45744 + t45790;
  t35154 = t35149 + t32586;
  t46028 = -1.*t216*t25792*t44244;
  t46038 = t16911*t44419;
  t46039 = 3.e-6*t18152*t44535;
  t46060 = t46028 + t46038 + t46039;
  t46078 = -1.*t35119*t216*t44244;
  t46082 = -1.*t25792*t44419;
  t46088 = 3.e-6*t25792*t44535;
  t46124 = t46078 + t46082 + t46088;
  t35333 = t35149 + t34045;
  t35428 = -1.8e-11*t30163;
  t35434 = 1. + t35428;
  t35952 = 3.e-7*var1[17];
  t35981 = -1.62e-17*t35978;
  t36139 = 0.2*t36138;
  t36156 = 0.1*t36146;
  t36157 = t35952 + t35981 + t36139 + t36156;
  t36334 = 0.2000000000018*t35978;
  t36496 = t36343 + t36366;
  t36511 = 0.1*t36496;
  t36594 = -9.e-7*t36146;
  t36600 = t36300 + t36334 + t36511 + t36594;
  t36641 = 0.1000000000009*t35978;
  t36643 = -9.e-7*t36138;
  t36657 = t36343 + t36074;
  t36717 = 0.2*t36657;
  t36744 = t36300 + t36641 + t36643 + t36717;
  t46572 = 3.e-6*t216*t35679*t44244;
  t46577 = 3.e-6*t35617*t44419;
  t46585 = t36180*t44535;
  t46613 = t46572 + t46577 + t46585;
  t37554 = t37402 + t36074;
  t46631 = -1.*t216*t35679*t44244;
  t46633 = t35583*t44419;
  t46655 = 3.e-6*t35617*t44535;
  t46673 = t46631 + t46633 + t46655;
  t46698 = -1.*t36926*t216*t44244;
  t46701 = -1.*t35679*t44419;
  t46727 = 3.e-6*t35679*t44535;
  t46795 = t46698 + t46701 + t46727;
  t37853 = t37402 + t36366;
  t37891 = -1.8e-11*t35978;
  t37897 = 1. + t37891;
  t38121 = -1.8e-12*t38099;
  t38129 = -1. + t37977;
  t38130 = 0.2*t38129;
  t38132 = t38121 + t38130;
  t38158 = 1.e-7*var1[21];
  t38192 = 5.4e-18*t38185;
  t38217 = -0.200000000003*t38205;
  t38243 = 0.100000000003*t38222;
  t38279 = t38158 + t38192 + t38217 + t38243;
  t39331 = -0.2000000000048*t38185;
  t39398 = t39337 + t39365;
  t39526 = 0.100000000003*t39398;
  t40060 = 3.e-7*t38222;
  t40144 = t39015 + t39331 + t39526 + t40060;
  t40513 = 0.1000000000039*t38185;
  t40557 = 3.e-7*t38205;
  t40564 = t39337 + t38203;
  t40645 = -0.200000000003*t40564;
  t40724 = t39015 + t40513 + t40557 + t40645;
  t47284 = 3.e-6*t216*t38139*t44244;
  t47286 = 3.e-6*t38099*t44419;
  t47291 = t38525*t44535;
  t47296 = t47284 + t47286 + t47291;
  t43003 = t42976 + t38203;
  t47307 = -1.*t216*t38139*t44244;
  t47318 = t37977*t44419;
  t47324 = 3.e-6*t38099*t44535;
  t47368 = t47307 + t47318 + t47324;
  t47396 = -1.*t41028*t216*t44244;
  t47398 = -1.*t38139*t44419;
  t47399 = 3.e-6*t38139*t44535;
  t47402 = t47396 + t47398 + t47399;
  t43321 = t42976 + t39365;
  t43803 = -1.8e-11*t38185;
  t43914 = 1. + t43803;
  t47565 = -1.*t44322*t2577*t5104;
  t47573 = t44244*t4925;
  t47599 = t47565 + t47573;
  t47672 = t2577*t44244;
  t47743 = t44322*t5104*t4925;
  t47745 = t47672 + t47743;
  t47868 = t2611*t47599;
  t47887 = 3.e-6*t2900*t47745;
  t47935 = t44322*t216*t5354;
  t47936 = t47868 + t47887 + t47935;
  t47976 = 3.e-6*t2900*t47599;
  t48007 = t9024*t47745;
  t48018 = -3.e-6*t44322*t216*t5354;
  t48020 = t47976 + t48007 + t48018;
  t48121 = t44322*t216*t10606;
  t48124 = -1.*t47599*t5354;
  t48186 = 3.e-6*t47745*t5354;
  t48213 = t48121 + t48124 + t48186;
  t49752 = -3.e-6*t44322*t216*t25792;
  t49765 = 3.e-6*t18152*t47599;
  t49853 = t33789*t47745;
  t49973 = t49752 + t49765 + t49853;
  t50300 = t44322*t216*t25792;
  t50540 = t16911*t47599;
  t50544 = 3.e-6*t18152*t47745;
  t50594 = t50300 + t50540 + t50544;
  t50748 = t35119*t44322*t216;
  t50785 = -1.*t25792*t47599;
  t50942 = 3.e-6*t25792*t47745;
  t50946 = t50748 + t50785 + t50942;
  t51668 = -3.e-6*t44322*t216*t35679;
  t51680 = 3.e-6*t35617*t47599;
  t51685 = t36180*t47745;
  t51686 = t51668 + t51680 + t51685;
  t51730 = t44322*t216*t35679;
  t51734 = t35583*t47599;
  t51736 = 3.e-6*t35617*t47745;
  t51737 = t51730 + t51734 + t51736;
  t51743 = t36926*t44322*t216;
  t51759 = -1.*t35679*t47599;
  t51771 = 3.e-6*t35679*t47745;
  t51772 = t51743 + t51759 + t51771;
  t52172 = -3.e-6*t44322*t216*t38139;
  t52175 = 3.e-6*t38099*t47599;
  t52202 = t38525*t47745;
  t52231 = t52172 + t52175 + t52202;
  t52260 = t44322*t216*t38139;
  t52273 = t37977*t47599;
  t52299 = 3.e-6*t38099*t47745;
  t52314 = t52260 + t52273 + t52299;
  t52323 = t41028*t44322*t216;
  t52327 = -1.*t38139*t47599;
  t52329 = 3.e-6*t38139*t47745;
  t52380 = t52323 + t52327 + t52329;
  p_output1[0]=t10699*t12432 + 0.2000000000018*t216*t2577*t2900 + 6.000000000054e-7*t216*t2900*t4925 - 0.2000000000018*t5104*t5354 + t6528*t8745 + t10382*t9494 + 0.2*(t10699*t10729 + t10480*t6528 + t10815*t9494) + 0.125001*(t10699*t10815 + t11910*t6528 + t11809*t9494) - 0.14*(t10480*t10699 + t13179*t6528 + t11910*t9494) + var1[0];
  p_output1[1]=t19952*t216*t2577 + t33767*t33861 + t34255*t34848 + t35050*t35133 - 0.14*(t33861*t35146 + t34848*t35154 + t35133*t35177) + 0.2*(-1.*t34848*t35177 - 1.*t33861*t35294 - 1.*t35133*t35333) + 0.125001*(t34848*t35146 + t35133*t35294 + t33861*t35434) - 6.000000000054e-7*t18152*t216*t4925 + 0.2000000000018*t25792*t5104 + var1[0];
  p_output1[2]=0.2000000000018*t216*t2577*t35617 + t36157*t36199 + t36600*t36631 + t36744*t37149 - 0.14*(t36199*t37230 + t36631*t37554 + t37149*t37726) + 0.2*(t36631*t37726 + t36199*t37796 + t37149*t37853) - 0.124999*(t36631*t37230 + t37149*t37796 + t36199*t37897) + 6.000000000054e-7*t216*t35617*t4925 - 0.2000000000018*t35679*t5104 + var1[0];
  p_output1[3]=t216*t2577*t38132 + t38279*t38676 + t40144*t40352 + t40724*t41729 - 0.14*(t38676*t42929 + t40352*t43003 + t41729*t43152) + 0.2*(-1.*t40352*t43152 - 1.*t38676*t43261 - 1.*t41729*t43321) - 0.124999*(t40352*t42929 + t41729*t43261 + t38676*t43914) - 6.000000000054e-7*t216*t38099*t4925 + 0.2000000000018*t38139*t5104 + var1[0];
  p_output1[4]=0.2000000000018*t2900*t44419 - 6.000000000054e-7*t2900*t44535 + t10382*t44973 + t12432*t45165 - 0.14*(t13179*t44767 + t11910*t44973 + t10480*t45165) + 0.2*(t10480*t44767 + t10815*t44973 + t10729*t45165) + 0.125001*(t11910*t44767 + t11809*t44973 + t10815*t45165) + 0.2000000000018*t216*t44244*t5354 + t44767*t8745 + var1[1];
  p_output1[5]=-0.2000000000018*t216*t25792*t44244 + t19952*t44419 + 6.000000000054e-7*t18152*t44535 + t33767*t45864 + t34255*t46060 + t35050*t46124 - 0.14*(t35146*t45864 + t35154*t46060 + t35177*t46124) + 0.125001*(t35434*t45864 + t35146*t46060 + t35294*t46124) + 0.2*(-1.*t35294*t45864 - 1.*t35177*t46060 - 1.*t35333*t46124) + var1[1];
  p_output1[6]=0.2000000000018*t216*t35679*t44244 + 0.2000000000018*t35617*t44419 - 6.000000000054e-7*t35617*t44535 + t36157*t46613 + t36600*t46673 + t36744*t46795 - 0.14*(t37230*t46613 + t37554*t46673 + t37726*t46795) - 0.124999*(t37897*t46613 + t37230*t46673 + t37796*t46795) + 0.2*(t37796*t46613 + t37726*t46673 + t37853*t46795) + var1[1];
  p_output1[7]=-0.2000000000018*t216*t38139*t44244 + t38132*t44419 + 6.000000000054e-7*t38099*t44535 + t38279*t47296 + t40144*t47368 + t40724*t47402 - 0.14*(t42929*t47296 + t43003*t47368 + t43152*t47402) - 0.124999*(t43914*t47296 + t42929*t47368 + t43261*t47402) + 0.2*(-1.*t43261*t47296 - 1.*t43152*t47368 - 1.*t43321*t47402) + var1[1];
  p_output1[8]=0.2000000000018*t2900*t47599 - 6.000000000054e-7*t2900*t47745 + t10382*t48020 + t12432*t48213 - 0.14*(t13179*t47936 + t11910*t48020 + t10480*t48213) + 0.2*(t10480*t47936 + t10815*t48020 + t10729*t48213) + 0.125001*(t11910*t47936 + t11809*t48020 + t10815*t48213) - 0.2000000000018*t216*t44322*t5354 + t47936*t8745 + var1[2];
  p_output1[9]=0.2000000000018*t216*t25792*t44322 + t19952*t47599 + 6.000000000054e-7*t18152*t47745 + t33767*t49973 + t34255*t50594 + t35050*t50946 - 0.14*(t35146*t49973 + t35154*t50594 + t35177*t50946) + 0.125001*(t35434*t49973 + t35146*t50594 + t35294*t50946) + 0.2*(-1.*t35294*t49973 - 1.*t35177*t50594 - 1.*t35333*t50946) + var1[2];
  p_output1[10]=-0.2000000000018*t216*t35679*t44322 + 0.2000000000018*t35617*t47599 - 6.000000000054e-7*t35617*t47745 + t36157*t51686 + t36600*t51737 + t36744*t51772 - 0.14*(t37230*t51686 + t37554*t51737 + t37726*t51772) - 0.124999*(t37897*t51686 + t37230*t51737 + t37796*t51772) + 0.2*(t37796*t51686 + t37726*t51737 + t37853*t51772) + var1[2];
  p_output1[11]=0.2000000000018*t216*t38139*t44322 + t38132*t47599 + 6.000000000054e-7*t38099*t47745 + t38279*t52231 + t40144*t52314 + t40724*t52380 - 0.14*(t42929*t52231 + t43003*t52314 + t43152*t52380) - 0.124999*(t43914*t52231 + t42929*t52314 + t43261*t52380) + 0.2*(-1.*t43261*t52231 - 1.*t43152*t52314 - 1.*t43321*t52380) + var1[2];
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
