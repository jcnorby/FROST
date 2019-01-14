/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:32 GMT-05:00
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
  double t6108;
  double t4959;
  double t5749;
  double t6145;
  double t6220;
  double t6044;
  double t6168;
  double t6176;
  double t3335;
  double t6238;
  double t6780;
  double t9104;
  double t9241;
  double t729;
  double t10056;
  double t10062;
  double t10286;
  double t10291;
  double t10297;
  double t9553;
  double t10165;
  double t10192;
  double t10193;
  double t10107;
  double t10108;
  double t10113;
  double t10116;
  double t6212;
  double t9109;
  double t9122;
  double t9136;
  double t9531;
  double t9559;
  double t9565;
  double t9567;
  double t10767;
  double t10780;
  double t9629;
  double t9633;
  double t9646;
  double t9897;
  double t9906;
  double t9948;
  double t9958;
  double t10000;
  double t10004;
  double t10924;
  double t10925;
  double t10926;
  double t10930;
  double t10783;
  double t10788;
  double t10892;
  double t10899;
  double t10307;
  double t10370;
  double t10381;
  double t10393;
  double t10402;
  double t10460;
  double t10478;
  double t10484;
  double t11360;
  double t11513;
  double t11518;
  double t11537;
  double t11295;
  double t11340;
  double t11349;
  double t10629;
  double t10733;
  double t10739;
  double t11136;
  double t11147;
  double t11150;
  double t11224;
  double t11226;
  double t11228;
  double t12190;
  double t12238;
  double t12243;
  double t12302;
  double t12339;
  double t12365;
  double t12605;
  double t12433;
  double t12438;
  double t12500;
  double t12519;
  double t12624;
  double t13669;
  double t13670;
  double t13160;
  double t12962;
  double t13070;
  double t13071;
  double t13168;
  double t13259;
  double t13318;
  double t13351;
  double t13185;
  double t13417;
  double t13421;
  double t15975;
  double t15979;
  double t16001;
  double t16011;
  double t16025;
  double t16032;
  double t16098;
  double t16102;
  double t16104;
  double t16234;
  double t16240;
  double t16241;
  double t16355;
  double t16359;
  double t16361;
  double t16365;
  double t16256;
  double t16259;
  double t16264;
  double t16265;
  double t16247;
  double t16250;
  double t16562;
  double t16567;
  double t16568;
  double t16550;
  double t16553;
  double t16557;
  double t16662;
  double t16664;
  double t16668;
  double t16628;
  double t15931;
  double t15937;
  double t10051;
  double t10160;
  double t10162;
  double t10194;
  double t10198;
  double t14853;
  double t14873;
  double t10562;
  double t10572;
  double t10573;
  double t10584;
  double t10586;
  double t10897;
  double t10949;
  double t10958;
  double t11029;
  double t11058;
  double t11073;
  double t11107;
  double t14326;
  double t14327;
  double t11350;
  double t11351;
  double t11590;
  double t11676;
  double t11760;
  double t11773;
  double t11967;
  double t12009;
  double t12429;
  double t13517;
  double t13578;
  double t13587;
  double t13951;
  double t14128;
  double t14169;
  double t15100;
  double t15210;
  double t15286;
  double t15622;
  double t15921;
  double t15925;
  double t13502;
  double t13507;
  double t13588;
  double t13593;
  double t13621;
  double t13664;
  double t13860;
  double t14275;
  double t14325;
  double t14493;
  double t15046;
  double t15608;
  double t15927;
  double t15947;
  double t15953;
  double t16118;
  double t16121;
  double t16125;
  double t16127;
  double t16135;
  double t16136;
  double t16157;
  double t16228;
  double t16245;
  double t16254;
  double t16345;
  double t16381;
  double t16382;
  double t16403;
  double t16409;
  double t16413;
  double t16445;
  double t16459;
  double t16465;
  double t16531;
  double t16535;
  double t16537;
  double t16544;
  double t16547;
  double t16559;
  double t16612;
  double t16613;
  double t16626;
  double t16658;
  double t16669;
  double t16673;
  double t16684;
  double t16706;
  double t16712;
  double t16716;
  double t16752;
  double t16762;
  double t16768;
  double t16833;
  double t16839;
  double t16112;
  double t16116;
  double t16130;
  double t16232;
  double t16387;
  double t16441;
  double t16506;
  double t16548;
  double t16619;
  double t16690;
  double t16748;
  double t16846;
  double t16850;
  double t17051;
  double t17055;
  double t17059;
  double t17061;
  double t17065;
  double t17069;
  double t17071;
  double t17087;
  double t17158;
  double t17166;
  double t17212;
  double t17220;
  double t17223;
  double t10749;
  double t11023;
  double t11233;
  double t11737;
  double t12119;
  double t12125;
  double t16932;
  double t16933;
  double t16938;
  double t16939;
  double t16962;
  double t16966;
  double t18198;
  double t18204;
  double t18215;
  double t18221;
  double t18227;
  double t18232;
  double t10047;
  double t10515;
  double t10618;
  double t10619;
  double t16877;
  double t16881;
  double t16885;
  double t16887;
  double t17723;
  double t17738;
  double t17915;
  double t18181;
  t6108 = Cos(var1[4]);
  t4959 = Cos(var1[5]);
  t5749 = Sin(var1[4]);
  t6145 = Sin(var1[5]);
  t6220 = Cos(var1[3]);
  t6044 = t4959*t5749;
  t6168 = t6108*t6145;
  t6176 = t6044 + t6168;
  t3335 = Sin(var1[3]);
  t6238 = t6108*t4959;
  t6780 = -1.*t5749*t6145;
  t9104 = t6238 + t6780;
  t9241 = Cos(var1[2]);
  t729 = Sin(var1[2]);
  t10056 = -1.*t4959;
  t10062 = 1. + t10056;
  t10286 = -1.*t4959*t5749;
  t10291 = -1.*t6108*t6145;
  t10297 = t10286 + t10291;
  t9553 = -1.*t3335*t9104;
  t10165 = 0.8*t10062;
  t10192 = 1.04*t4959;
  t10193 = t10165 + t10192;
  t10107 = -0.15*t10062;
  t10108 = -0.15*t4959;
  t10113 = -0.24*t6145;
  t10116 = t10107 + t10108 + t10113;
  t6212 = -1.*t3335*t6176;
  t9109 = t6220*t9104;
  t9122 = t6212 + t9109;
  t9136 = t729*t9122;
  t9531 = -1.*t6220*t6176;
  t9559 = t9531 + t9553;
  t9565 = t9241*t9559;
  t9567 = t9136 + t9565;
  t10767 = -1.*t6108;
  t10780 = 1. + t10767;
  t9629 = -1.*t6108*t3335;
  t9633 = -1.*t6220*t5749;
  t9646 = t9629 + t9633;
  t9897 = t9241*t9646;
  t9906 = t6220*t6108;
  t9948 = -1.*t3335*t5749;
  t9958 = t9906 + t9948;
  t10000 = t729*t9958;
  t10004 = t9897 + t10000;
  t10924 = -0.15*t10780;
  t10925 = -0.15*t6108;
  t10926 = -0.29*t5749;
  t10930 = t10924 + t10925 + t10926;
  t10783 = 0.4*t10780;
  t10788 = 0.69*t6108;
  t10892 = t10783 + t10788;
  t10899 = 0.15*t5749;
  t10307 = -1.*t3335*t10297;
  t10370 = -1.*t6220*t9104;
  t10381 = t10307 + t10370;
  t10393 = t9241*t10381;
  t10402 = t6220*t10297;
  t10460 = t10402 + t9553;
  t10478 = t729*t10460;
  t10484 = t10393 + t10478;
  t11360 = 0.4*t5749;
  t11513 = -1.*t10193*t5749;
  t11518 = t6108*t10116;
  t11537 = t10924 + t11360 + t11513 + t11518;
  t11295 = t6108*t10193;
  t11340 = t5749*t10116;
  t11349 = t10783 + t11295 + t10899 + t11340;
  t10629 = t6220*t729;
  t10733 = -1.*t9241*t3335;
  t10739 = t10629 + t10733;
  t11136 = t729*t9646;
  t11147 = -1.*t6220*t6108;
  t11150 = t3335*t5749;
  t11224 = t11147 + t11150;
  t11226 = t9241*t11224;
  t11228 = t11136 + t11226;
  t12190 = -1.*t9241*t6220;
  t12238 = -1.*t729*t3335;
  t12243 = t12190 + t12238;
  t12302 = t9241*t6220;
  t12339 = t729*t3335;
  t12365 = t12302 + t12339;
  t12605 = t9241*t9958;
  t12433 = t6108*t3335;
  t12438 = t6220*t5749;
  t12500 = t12433 + t12438;
  t12519 = t729*t12500;
  t12624 = t12519 + t12605;
  t13669 = -1.*t729*t9646;
  t13670 = t13669 + t12605;
  t13160 = t9241*t10460;
  t12962 = t3335*t10297;
  t13070 = t12962 + t9109;
  t13071 = t729*t13070;
  t13168 = t13071 + t13160;
  t13259 = t6220*t6176;
  t13318 = t3335*t9104;
  t13351 = t13259 + t13318;
  t13185 = t9241*t9122;
  t13417 = t729*t13351;
  t13421 = t13185 + t13417;
  t15975 = -1.*t6220;
  t15979 = 1. + t15975;
  t16001 = -0.15*t15979;
  t16011 = -0.15*t6220;
  t16025 = -0.16*t3335;
  t16032 = t16001 + t16011 + t16025;
  t16098 = -1.*t6220*t16032;
  t16102 = -0.16*t6220*t3335;
  t16104 = t16098 + t16102;
  t16234 = -1.*t10892*t3335;
  t16240 = t6220*t10930;
  t16241 = t16001 + t16234 + t16240;
  t16355 = t6220*t10892;
  t16359 = 0.15*t3335;
  t16361 = t3335*t10930;
  t16365 = t16355 + t16359 + t16361;
  t16256 = -1.*t6220*t10892;
  t16259 = -0.15*t3335;
  t16264 = -1.*t3335*t10930;
  t16265 = t16256 + t16259 + t16264;
  t16247 = 0.15*t6220;
  t16250 = t16247 + t16234 + t16240;
  t16562 = t6220*t11537;
  t16567 = -1.*t3335*t11349;
  t16568 = t16001 + t16562 + t16567;
  t16550 = t3335*t11537;
  t16553 = t6220*t11349;
  t16557 = t16359 + t16550 + t16553;
  t16662 = -1.*t3335*t11537;
  t16664 = -1.*t6220*t11349;
  t16668 = t16259 + t16662 + t16664;
  t16628 = t16247 + t16562 + t16567;
  t15931 = -1.*t729*t9559;
  t15937 = t13185 + t15931;
  t10051 = 0.15*t4959;
  t10160 = t4959*t10116;
  t10162 = -0.4*t6145;
  t10194 = t10193*t6145;
  t10198 = t10051 + t10160 + t10162 + t10194;
  t14853 = -1.*t729*t10381;
  t14873 = t14853 + t13160;
  t10562 = 0.4*t4959;
  t10572 = -1.*t4959*t10193;
  t10573 = 0.15*t6145;
  t10584 = t10116*t6145;
  t10586 = t10562 + t10572 + t10573 + t10584;
  t10897 = -1.*t10892*t6108;
  t10949 = t10930*t5749;
  t10958 = t10897 + t10899 + t10949;
  t11029 = 0.15*t6108;
  t11058 = t6108*t10930;
  t11073 = t10892*t5749;
  t11107 = t11029 + t11058 + t11073;
  t14326 = -1.*t729*t11224;
  t14327 = t9897 + t14326;
  t11350 = t11349*t6176;
  t11351 = 0.15*t9104;
  t11590 = t11537*t9104;
  t11676 = t11350 + t11351 + t11590;
  t11760 = -1.*t11537*t10297;
  t11773 = 0.15*t6176;
  t11967 = -1.*t11349*t9104;
  t12009 = t11760 + t11773 + t11967;
  t12429 = 12.8*t10739*t12365;
  t13517 = -1.*t6220*t729;
  t13578 = t9241*t3335;
  t13587 = t13517 + t13578;
  t13951 = t9241*t12500;
  t14128 = -1.*t729*t9958;
  t14169 = t13951 + t14128;
  t15100 = t9241*t13070;
  t15210 = -1.*t729*t10460;
  t15286 = t15100 + t15210;
  t15622 = -1.*t729*t9122;
  t15921 = t9241*t13351;
  t15925 = t15622 + t15921;
  t13502 = Power(t10739,2);
  t13507 = 6.4*t13502;
  t13588 = 6.4*t10739*t13587;
  t13593 = 6.4*t12243*t12365;
  t13621 = Power(t12365,2);
  t13664 = 6.4*t13621;
  t13860 = 13.6*t13670*t12624;
  t14275 = 13.6*t14169*t10004;
  t14325 = 13.6*t13670*t11228;
  t14493 = 13.6*t10004*t14327;
  t15046 = 12.*t14873*t13168;
  t15608 = 12.*t15286*t10484;
  t15927 = 12.*t9567*t15925;
  t15947 = 12.*t15937*t13421;
  t15953 = t13507 + t13588 + t13593 + t13664 + t13860 + t14275 + t14325 + t14493 + t15046 + t15608 + t15927 + t15947;
  t16118 = Power(t6220,2);
  t16121 = 0.16*t16118;
  t16125 = -1.*t16032*t3335;
  t16127 = t16121 + t16125;
  t16135 = t16032*t3335;
  t16136 = Power(t3335,2);
  t16157 = 0.16*t16136;
  t16228 = t16135 + t16157;
  t16245 = -1.*t16241*t9646;
  t16254 = -1.*t16250*t12500;
  t16345 = -1.*t16265*t9958;
  t16381 = -1.*t16365*t9958;
  t16382 = t16245 + t16254 + t16345 + t16381;
  t16403 = t16241*t9646;
  t16409 = t16365*t9958;
  t16413 = t16403 + t16409;
  t16445 = -1.*t16365*t12500;
  t16459 = -1.*t16241*t9958;
  t16465 = t16445 + t16459;
  t16531 = t16265*t9646;
  t16535 = t16365*t9646;
  t16537 = t16250*t9958;
  t16544 = t16241*t11224;
  t16547 = t16531 + t16535 + t16537 + t16544;
  t16559 = t16557*t13070;
  t16612 = t16568*t10460;
  t16613 = t16559 + t16612;
  t16626 = t16568*t10381;
  t16658 = t16628*t13070;
  t16669 = t16668*t10460;
  t16673 = t16557*t10460;
  t16684 = t16626 + t16658 + t16669 + t16673;
  t16706 = -1.*t16568*t9122;
  t16712 = -1.*t16557*t13351;
  t16716 = t16706 + t16712;
  t16752 = -1.*t16668*t9122;
  t16762 = -1.*t16557*t9122;
  t16768 = -1.*t16568*t9559;
  t16833 = -1.*t16628*t13351;
  t16839 = t16752 + t16762 + t16768 + t16833;
  t16112 = 6.4*t16104*t12243;
  t16116 = 6.4*t16104*t12365;
  t16130 = 6.4*t10739*t16127;
  t16232 = 6.4*t10739*t16228;
  t16387 = 13.6*t10004*t16382;
  t16441 = 13.6*t10004*t16413;
  t16506 = 13.6*t16465*t11228;
  t16548 = 13.6*t12624*t16547;
  t16619 = 12.*t16613*t9567;
  t16690 = 12.*t16684*t13421;
  t16748 = 12.*t10484*t16716;
  t16846 = 12.*t13168*t16839;
  t16850 = t16112 + t16116 + t16130 + t16232 + t16387 + t16441 + t16506 + t16548 + t16619 + t16690 + t16748 + t16846;
  t17051 = 6.4*t10739*t16104;
  t17055 = 6.4*t13587*t16104;
  t17059 = 6.4*t12365*t16127;
  t17061 = 6.4*t12365*t16228;
  t17065 = 13.6*t13670*t16382;
  t17069 = 13.6*t13670*t16413;
  t17071 = 13.6*t16465*t14327;
  t17087 = 13.6*t14169*t16547;
  t17158 = 12.*t16613*t15937;
  t17166 = 12.*t16684*t15925;
  t17212 = 12.*t14873*t16716;
  t17220 = 12.*t15286*t16839;
  t17223 = t17051 + t17055 + t17059 + t17061 + t17065 + t17069 + t17071 + t17087 + t17158 + t17166 + t17212 + t17220;
  t10749 = -1.024*t10739;
  t11023 = 13.6*t10958*t10004;
  t11233 = 13.6*t11107*t11228;
  t11737 = 12.*t11676*t10484;
  t12119 = 12.*t12009*t9567;
  t12125 = t10749 + t11023 + t11233 + t11737 + t12119;
  t16932 = -1.024*t12365;
  t16933 = 13.6*t10958*t13670;
  t16938 = 13.6*t11107*t14327;
  t16939 = 12.*t11676*t14873;
  t16962 = 12.*t12009*t15937;
  t16966 = t16932 + t16933 + t16938 + t16939 + t16962;
  t18198 = -1.024*t16104;
  t18204 = 13.6*t11107*t16382;
  t18215 = 13.6*t10958*t16547;
  t18221 = 12.*t12009*t16684;
  t18227 = 12.*t11676*t16839;
  t18232 = t18198 + t18204 + t18215 + t18221 + t18227;
  t10047 = -3.944*t10004;
  t10515 = 12.*t10198*t10484;
  t10618 = 12.*t10586*t9567;
  t10619 = t10047 + t10515 + t10618;
  t16877 = -3.944*t13670;
  t16881 = 12.*t10198*t14873;
  t16885 = 12.*t10586*t15937;
  t16887 = t16877 + t16881 + t16885;
  t17723 = -3.944*t16547;
  t17738 = 12.*t10586*t16684;
  t17915 = 12.*t10198*t16839;
  t18181 = t17723 + t17738 + t17915;
  p_output1[0]=var2[3]*(-0.5*(27.2*t10004*t11228 + 12.8*t10739*t12243 + t12429 + 27.2*t10004*t12624 + 24.*t10484*t13168 + 24.*t13421*t9567)*var2[0] - 0.5*t15953*var2[1] - 0.5*t16850*var2[2] - 0.5*t12125*var2[3] - 0.5*t10619*var2[4] + 1.44*t9567*var2[5]);
  p_output1[1]=var2[3]*(-0.5*t15953*var2[0] - 0.5*(t12429 + 12.8*t12365*t13587 + 27.2*t13670*t14169 + 27.2*t13670*t14327 + 24.*t14873*t15286 + 24.*t15925*t15937)*var2[1] - 0.5*t17223*var2[2] - 0.5*t16966*var2[3] - 0.5*t16887*var2[4] + 1.44*t15937*var2[5]);
  p_output1[2]=var2[3]*(-0.5*t16850*var2[0] - 0.5*t17223*var2[1] - 0.5*(12.8*t16104*t16127 + 12.8*t16104*t16228 + 27.2*t16382*t16465 + 27.2*t16413*t16547 + 24.*t16613*t16684 + 24.*t16716*t16839)*var2[2] - 0.5*t18232*var2[3] - 0.5*t18181*var2[4] + 1.44*t16684*var2[5]);
  p_output1[3]=(-0.5*t12125*var2[0] - 0.5*t16966*var2[1] - 0.5*t18232*var2[2])*var2[3];
  p_output1[4]=(-0.5*t10619*var2[0] - 0.5*t16887*var2[1] - 0.5*t18181*var2[2])*var2[3];
  p_output1[5]=(1.44*t9567*var2[0] + 1.44*t15937*var2[1] + 1.44*t16684*var2[2])*var2[3];
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

#include "Ce2_vec4_acrobot.hh"

namespace SymFunction
{

void Ce2_vec4_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
