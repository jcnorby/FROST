/*
 * Automatically Generated from Mathematica.
 * Sat 22 Feb 2020 21:13:00 GMT-05:00
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
  double t501;
  double t8404;
  double t10112;
  double t11641;
  double t12177;
  double t3562;
  double t3651;
  double t18957;
  double t18973;
  double t19022;
  double t19023;
  double t12560;
  double t13729;
  double t15905;
  double t16657;
  double t19136;
  double t19173;
  double t19244;
  double t19282;
  double t19290;
  double t19295;
  double t19307;
  double t19353;
  double t17853;
  double t18171;
  double t18931;
  double t19661;
  double t19812;
  double t19818;
  double t22298;
  double t22385;
  double t22859;
  double t22149;
  double t22947;
  double t22968;
  double t22973;
  double t22417;
  double t22418;
  double t22422;
  double t22424;
  double t22989;
  double t22994;
  double t22998;
  double t23001;
  double t23050;
  double t23058;
  double t23065;
  double t23077;
  double t22558;
  double t22718;
  double t22820;
  double t23200;
  double t23202;
  double t23207;
  double t24960;
  double t25078;
  double t33244;
  double t24805;
  double t33246;
  double t33271;
  double t35672;
  double t28416;
  double t28418;
  double t28427;
  double t28439;
  double t39790;
  double t40473;
  double t41457;
  double t41928;
  double t42019;
  double t42042;
  double t42078;
  double t42087;
  double t28649;
  double t28655;
  double t28675;
  double t42454;
  double t42516;
  double t42547;
  double t42621;
  double t42629;
  double t42654;
  double t42611;
  double t42655;
  double t42656;
  double t42660;
  double t42640;
  double t42641;
  double t42642;
  double t42645;
  double t42672;
  double t42676;
  double t42680;
  double t42681;
  double t42683;
  double t42689;
  double t42690;
  double t42692;
  double t42649;
  double t42650;
  double t42651;
  double t42703;
  double t42709;
  double t42714;
  double t5240;
  double t5478;
  double t8678;
  double t9138;
  double t42758;
  double t42752;
  double t16230;
  double t16846;
  double t17477;
  double t42762;
  double t42763;
  double t42767;
  double t19159;
  double t42757;
  double t42759;
  double t42760;
  double t42795;
  double t42796;
  double t42797;
  double t19590;
  double t19656;
  double t19657;
  double t42800;
  double t42801;
  double t42802;
  double t42804;
  double t42806;
  double t42807;
  double t42788;
  double t42792;
  double t42793;
  double t42811;
  double t42812;
  double t42816;
  double t22179;
  double t22204;
  double t22386;
  double t22398;
  double t22423;
  double t22426;
  double t22464;
  double t42872;
  double t42877;
  double t42884;
  double t23052;
  double t23057;
  double t23127;
  double t23166;
  double t23190;
  double t42892;
  double t42898;
  double t42906;
  double t42909;
  double t42910;
  double t42911;
  double t42859;
  double t42860;
  double t42861;
  double t42913;
  double t42915;
  double t42916;
  double t24817;
  double t24819;
  double t25079;
  double t25962;
  double t28437;
  double t28588;
  double t28642;
  double t42946;
  double t42947;
  double t42948;
  double t42030;
  double t42170;
  double t42232;
  double t42347;
  double t42950;
  double t42951;
  double t42952;
  double t42956;
  double t42958;
  double t42978;
  double t42941;
  double t42942;
  double t42943;
  double t42980;
  double t42981;
  double t42982;
  double t42612;
  double t42613;
  double t42635;
  double t42637;
  double t42643;
  double t42646;
  double t42647;
  double t43008;
  double t43024;
  double t43025;
  double t42684;
  double t42686;
  double t42694;
  double t42696;
  double t42701;
  double t43028;
  double t43030;
  double t43031;
  double t43034;
  double t43036;
  double t43038;
  double t43003;
  double t43004;
  double t43006;
  double t43042;
  double t43043;
  double t43045;
  double t43132;
  double t43133;
  double t43135;
  double t43123;
  double t43127;
  double t43130;
  double t43188;
  double t43192;
  double t43194;
  double t43213;
  double t43214;
  double t43217;
  double t43223;
  double t43225;
  double t43232;
  double t43160;
  double t43164;
  double t43166;
  double t43242;
  double t43254;
  double t43266;
  double t43338;
  double t43348;
  double t43350;
  double t43357;
  double t43364;
  double t43365;
  double t43369;
  double t43371;
  double t43376;
  double t43329;
  double t43330;
  double t43335;
  double t43381;
  double t43382;
  double t43385;
  double t43567;
  double t43571;
  double t43573;
  double t43588;
  double t43656;
  double t43694;
  double t43699;
  double t43709;
  double t43715;
  double t43556;
  double t43561;
  double t43563;
  double t43745;
  double t43759;
  double t43760;
  double t43948;
  double t43949;
  double t43953;
  double t43957;
  double t43958;
  double t43966;
  double t43975;
  double t43976;
  double t43980;
  double t43884;
  double t43909;
  double t43910;
  double t44017;
  double t44019;
  double t44029;
  t501 = Cos(var1[4]);
  t8404 = Cos(var1[6]);
  t10112 = Sin(var1[5]);
  t11641 = Sin(var1[4]);
  t12177 = Sin(var1[6]);
  t3562 = Cos(var1[5]);
  t3651 = Cos(var1[7]);
  t18957 = t8404*t11641;
  t18973 = t501*t10112*t12177;
  t19022 = t18957 + t18973;
  t19023 = Sin(var1[7]);
  t12560 = Cos(var1[9]);
  t13729 = -1.*t12560;
  t15905 = 1. + t13729;
  t16657 = Sin(var1[9]);
  t19136 = Cos(var1[8]);
  t19173 = t501*t3562*t3651;
  t19244 = t19022*t19023;
  t19282 = t19173 + t19244;
  t19290 = t3651*t19022;
  t19295 = -1.*t501*t3562*t19023;
  t19307 = t19290 + t19295;
  t19353 = Sin(var1[8]);
  t17853 = -1.*t501*t8404*t10112;
  t18171 = t11641*t12177;
  t18931 = t17853 + t18171;
  t19661 = t19136*t19282;
  t19812 = -1.*t19307*t19353;
  t19818 = t19661 + t19812;
  t22298 = Sin(var1[10]);
  t22385 = Cos(var1[10]);
  t22859 = Sin(var1[11]);
  t22149 = Cos(var1[11]);
  t22947 = t22385*t11641;
  t22968 = t501*t22298*t10112;
  t22973 = t22947 + t22968;
  t22417 = Cos(var1[13]);
  t22418 = -1.*t22417;
  t22422 = 1. + t22418;
  t22424 = Sin(var1[13]);
  t22989 = Sin(var1[12]);
  t22994 = -1.*t501*t3562*t22859;
  t22998 = t22149*t22973;
  t23001 = t22994 + t22998;
  t23050 = Cos(var1[12]);
  t23058 = t22149*t501*t3562;
  t23065 = t22859*t22973;
  t23077 = t23058 + t23065;
  t22558 = t22298*t11641;
  t22718 = -1.*t22385*t501*t10112;
  t22820 = t22558 + t22718;
  t23200 = -1.*t22989*t23001;
  t23202 = t23050*t23077;
  t23207 = t23200 + t23202;
  t24960 = Sin(var1[14]);
  t25078 = Cos(var1[14]);
  t33244 = Sin(var1[15]);
  t24805 = Cos(var1[15]);
  t33246 = t25078*t11641;
  t33271 = t501*t24960*t10112;
  t35672 = t33246 + t33271;
  t28416 = Cos(var1[17]);
  t28418 = -1.*t28416;
  t28427 = 1. + t28418;
  t28439 = Sin(var1[17]);
  t39790 = Sin(var1[16]);
  t40473 = -1.*t501*t3562*t33244;
  t41457 = t24805*t35672;
  t41928 = t40473 + t41457;
  t42019 = Cos(var1[16]);
  t42042 = t24805*t501*t3562;
  t42078 = t33244*t35672;
  t42087 = t42042 + t42078;
  t28649 = t24960*t11641;
  t28655 = -1.*t25078*t501*t10112;
  t28675 = t28649 + t28655;
  t42454 = -1.*t39790*t41928;
  t42516 = t42019*t42087;
  t42547 = t42454 + t42516;
  t42621 = Sin(var1[18]);
  t42629 = Cos(var1[18]);
  t42654 = Sin(var1[19]);
  t42611 = Cos(var1[19]);
  t42655 = t42629*t11641;
  t42656 = t501*t42621*t10112;
  t42660 = t42655 + t42656;
  t42640 = Cos(var1[21]);
  t42641 = -1.*t42640;
  t42642 = 1. + t42641;
  t42645 = Sin(var1[21]);
  t42672 = Sin(var1[20]);
  t42676 = -1.*t501*t3562*t42654;
  t42680 = t42611*t42660;
  t42681 = t42676 + t42680;
  t42683 = Cos(var1[20]);
  t42689 = t42611*t501*t3562;
  t42690 = t42654*t42660;
  t42692 = t42689 + t42690;
  t42649 = t42621*t11641;
  t42650 = -1.*t42629*t501*t10112;
  t42651 = t42649 + t42650;
  t42703 = -1.*t42672*t42681;
  t42709 = t42683*t42692;
  t42714 = t42703 + t42709;
  t5240 = -1.*t3651;
  t5478 = 1. + t5240;
  t8678 = -1.*t8404;
  t9138 = 1. + t8678;
  t42758 = Cos(var1[3]);
  t42752 = Sin(var1[3]);
  t16230 = 0.196*t15905;
  t16846 = -0.3*t16657;
  t17477 = t16230 + t16846;
  t42762 = t42758*t3562;
  t42763 = -1.*t42752*t11641*t10112;
  t42767 = t42762 + t42763;
  t19159 = -1. + t19136;
  t42757 = t3562*t42752*t11641;
  t42759 = t42758*t10112;
  t42760 = t42757 + t42759;
  t42795 = -1.*t501*t8404*t42752;
  t42796 = -1.*t42767*t12177;
  t42797 = t42795 + t42796;
  t19590 = 0.3*t15905;
  t19656 = 0.196*t16657;
  t19657 = t19590 + t19656;
  t42800 = t3651*t42760;
  t42801 = t42797*t19023;
  t42802 = t42800 + t42801;
  t42804 = t3651*t42797;
  t42806 = -1.*t42760*t19023;
  t42807 = t42804 + t42806;
  t42788 = t8404*t42767;
  t42792 = -1.*t501*t42752*t12177;
  t42793 = t42788 + t42792;
  t42811 = t19136*t42802;
  t42812 = -1.*t42807*t19353;
  t42816 = t42811 + t42812;
  t22179 = -1.*t22149;
  t22204 = 1. + t22179;
  t22386 = -1.*t22385;
  t22398 = 1. + t22386;
  t22423 = 0.196*t22422;
  t22426 = 0.3*t22424;
  t22464 = t22423 + t22426;
  t42872 = -1.*t22385*t501*t42752;
  t42877 = -1.*t22298*t42767;
  t42884 = t42872 + t42877;
  t23052 = -1.*t23050;
  t23057 = 1. + t23052;
  t23127 = -0.3*t22422;
  t23166 = 0.196*t22424;
  t23190 = t23127 + t23166;
  t42892 = -1.*t22859*t42760;
  t42898 = t22149*t42884;
  t42906 = t42892 + t42898;
  t42909 = t22149*t42760;
  t42910 = t22859*t42884;
  t42911 = t42909 + t42910;
  t42859 = -1.*t501*t22298*t42752;
  t42860 = t22385*t42767;
  t42861 = t42859 + t42860;
  t42913 = -1.*t22989*t42906;
  t42915 = t23050*t42911;
  t42916 = t42913 + t42915;
  t24817 = -1.*t24805;
  t24819 = 1. + t24817;
  t25079 = -1.*t25078;
  t25962 = 1. + t25079;
  t28437 = -0.196*t28427;
  t28588 = -0.3*t28439;
  t28642 = t28437 + t28588;
  t42946 = -1.*t25078*t501*t42752;
  t42947 = -1.*t24960*t42767;
  t42948 = t42946 + t42947;
  t42030 = -1. + t42019;
  t42170 = 0.3*t28427;
  t42232 = -0.196*t28439;
  t42347 = t42170 + t42232;
  t42950 = -1.*t33244*t42760;
  t42951 = t24805*t42948;
  t42952 = t42950 + t42951;
  t42956 = t24805*t42760;
  t42958 = t33244*t42948;
  t42978 = t42956 + t42958;
  t42941 = -1.*t501*t24960*t42752;
  t42942 = t25078*t42767;
  t42943 = t42941 + t42942;
  t42980 = -1.*t39790*t42952;
  t42981 = t42019*t42978;
  t42982 = t42980 + t42981;
  t42612 = -1.*t42611;
  t42613 = 1. + t42612;
  t42635 = -1.*t42629;
  t42637 = 1. + t42635;
  t42643 = -0.196*t42642;
  t42646 = 0.3*t42645;
  t42647 = t42643 + t42646;
  t43008 = -1.*t42629*t501*t42752;
  t43024 = -1.*t42621*t42767;
  t43025 = t43008 + t43024;
  t42684 = -1.*t42683;
  t42686 = 1. + t42684;
  t42694 = -0.3*t42642;
  t42696 = -0.196*t42645;
  t42701 = t42694 + t42696;
  t43028 = -1.*t42654*t42760;
  t43030 = t42611*t43025;
  t43031 = t43028 + t43030;
  t43034 = t42611*t42760;
  t43036 = t42654*t43025;
  t43038 = t43034 + t43036;
  t43003 = -1.*t501*t42621*t42752;
  t43004 = t42629*t42767;
  t43006 = t43003 + t43004;
  t43042 = -1.*t42672*t43031;
  t43043 = t42683*t43038;
  t43045 = t43042 + t43043;
  t43132 = t3562*t42752;
  t43133 = t42758*t11641*t10112;
  t43135 = t43132 + t43133;
  t43123 = -1.*t42758*t3562*t11641;
  t43127 = t42752*t10112;
  t43130 = t43123 + t43127;
  t43188 = t42758*t501*t8404;
  t43192 = -1.*t43135*t12177;
  t43194 = t43188 + t43192;
  t43213 = t3651*t43130;
  t43214 = t43194*t19023;
  t43217 = t43213 + t43214;
  t43223 = t3651*t43194;
  t43225 = -1.*t43130*t19023;
  t43232 = t43223 + t43225;
  t43160 = t8404*t43135;
  t43164 = t42758*t501*t12177;
  t43166 = t43160 + t43164;
  t43242 = t19136*t43217;
  t43254 = -1.*t43232*t19353;
  t43266 = t43242 + t43254;
  t43338 = t22385*t42758*t501;
  t43348 = -1.*t22298*t43135;
  t43350 = t43338 + t43348;
  t43357 = -1.*t22859*t43130;
  t43364 = t22149*t43350;
  t43365 = t43357 + t43364;
  t43369 = t22149*t43130;
  t43371 = t22859*t43350;
  t43376 = t43369 + t43371;
  t43329 = t42758*t501*t22298;
  t43330 = t22385*t43135;
  t43335 = t43329 + t43330;
  t43381 = -1.*t22989*t43365;
  t43382 = t23050*t43376;
  t43385 = t43381 + t43382;
  t43567 = t25078*t42758*t501;
  t43571 = -1.*t24960*t43135;
  t43573 = t43567 + t43571;
  t43588 = -1.*t33244*t43130;
  t43656 = t24805*t43573;
  t43694 = t43588 + t43656;
  t43699 = t24805*t43130;
  t43709 = t33244*t43573;
  t43715 = t43699 + t43709;
  t43556 = t42758*t501*t24960;
  t43561 = t25078*t43135;
  t43563 = t43556 + t43561;
  t43745 = -1.*t39790*t43694;
  t43759 = t42019*t43715;
  t43760 = t43745 + t43759;
  t43948 = t42629*t42758*t501;
  t43949 = -1.*t42621*t43135;
  t43953 = t43948 + t43949;
  t43957 = -1.*t42654*t43130;
  t43958 = t42611*t43953;
  t43966 = t43957 + t43958;
  t43975 = t42611*t43130;
  t43976 = t42654*t43953;
  t43980 = t43975 + t43976;
  t43884 = t42758*t501*t42621;
  t43909 = t42629*t43135;
  t43910 = t43884 + t43909;
  t44017 = -1.*t42672*t43966;
  t44019 = t42683*t43980;
  t44029 = t44017 + t44019;
  p_output1[0]=-0.128*t11641*t12177 + t17477*t18931 - 0.3*t19022*t19023 + 0.04*t19159*t19282 - 0.04*t19307*t19353 - 0.0461*(t19136*t19307 + t19282*t19353) + t19657*t19818 + 0.3*(t16657*t18931 + t12560*t19818) + 0.196*(t12560*t18931 - 1.*t16657*t19818) + 0.3*t3562*t501*t5478 - 0.128*t10112*t501*t9138 + var1[0];
  p_output1[1]=-0.128*t11641*t22298 + t22464*t22820 + 0.3*t22859*t22973 - 0.64*t22989*t23001 - 0.64*t23057*t23077 - 0.0461*(t23001*t23050 + t22989*t23077) + t23190*t23207 - 0.3*(t22424*t22820 + t22417*t23207) + 0.196*(t22417*t22820 - 1.*t22424*t23207) - 0.128*t10112*t22398*t501 - 0.3*t22204*t3562*t501 + var1[0];
  p_output1[2]=0.128*t11641*t24960 + t28642*t28675 - 0.3*t33244*t35672 - 0.04*t39790*t41928 + 0.04*t42030*t42087 - 0.0461*(t41928*t42019 + t39790*t42087) + t42347*t42547 + 0.3*(t28439*t28675 + t28416*t42547) - 0.196*(t28416*t28675 - 1.*t28439*t42547) + 0.128*t10112*t25962*t501 + 0.3*t24819*t3562*t501 + var1[0];
  p_output1[3]=0.128*t11641*t42621 + t42647*t42651 + 0.3*t42654*t42660 - 0.64*t42672*t42681 - 0.64*t42686*t42692 - 0.0461*(t42681*t42683 + t42672*t42692) + t42701*t42714 - 0.3*(t42645*t42651 + t42640*t42714) - 0.196*(t42640*t42651 - 1.*t42645*t42714) - 0.3*t3562*t42613*t501 + 0.128*t10112*t42637*t501 + var1[0];
  p_output1[4]=t17477*t42793 - 0.3*t19023*t42797 + 0.04*t19159*t42802 - 0.04*t19353*t42807 - 0.0461*(t19353*t42802 + t19136*t42807) + t19657*t42816 + 0.3*(t16657*t42793 + t12560*t42816) + 0.196*(t12560*t42793 - 1.*t16657*t42816) + 0.128*t12177*t42752*t501 + 0.3*t42760*t5478 + 0.128*t42767*t9138 + var1[1];
  p_output1[5]=-0.3*t22204*t42760 + 0.128*t22398*t42767 + t22464*t42861 + 0.3*t22859*t42884 - 0.64*t22989*t42906 - 0.64*t23057*t42911 - 0.0461*(t23050*t42906 + t22989*t42911) + t23190*t42916 - 0.3*(t22424*t42861 + t22417*t42916) + 0.196*(t22417*t42861 - 1.*t22424*t42916) + 0.128*t22298*t42752*t501 + var1[1];
  p_output1[6]=0.3*t24819*t42760 - 0.128*t25962*t42767 + t28642*t42943 - 0.3*t33244*t42948 - 0.04*t39790*t42952 + 0.04*t42030*t42978 - 0.0461*(t42019*t42952 + t39790*t42978) + t42347*t42982 + 0.3*(t28439*t42943 + t28416*t42982) - 0.196*(t28416*t42943 - 1.*t28439*t42982) - 0.128*t24960*t42752*t501 + var1[1];
  p_output1[7]=-0.3*t42613*t42760 - 0.128*t42637*t42767 + t42647*t43006 + 0.3*t42654*t43025 - 0.64*t42672*t43031 - 0.64*t42686*t43038 - 0.0461*(t42683*t43031 + t42672*t43038) + t42701*t43045 - 0.3*(t42645*t43006 + t42640*t43045) - 0.196*(t42640*t43006 - 1.*t42645*t43045) - 0.128*t42621*t42752*t501 + var1[1];
  p_output1[8]=t17477*t43166 - 0.3*t19023*t43194 + 0.04*t19159*t43217 - 0.04*t19353*t43232 - 0.0461*(t19353*t43217 + t19136*t43232) + t19657*t43266 + 0.3*(t16657*t43166 + t12560*t43266) + 0.196*(t12560*t43166 - 1.*t16657*t43266) - 0.128*t12177*t42758*t501 + 0.3*t43130*t5478 + 0.128*t43135*t9138 + var1[2];
  p_output1[9]=-0.3*t22204*t43130 + 0.128*t22398*t43135 + t22464*t43335 + 0.3*t22859*t43350 - 0.64*t22989*t43365 - 0.64*t23057*t43376 - 0.0461*(t23050*t43365 + t22989*t43376) + t23190*t43385 - 0.3*(t22424*t43335 + t22417*t43385) + 0.196*(t22417*t43335 - 1.*t22424*t43385) - 0.128*t22298*t42758*t501 + var1[2];
  p_output1[10]=0.3*t24819*t43130 - 0.128*t25962*t43135 + t28642*t43563 - 0.3*t33244*t43573 - 0.04*t39790*t43694 + 0.04*t42030*t43715 - 0.0461*(t42019*t43694 + t39790*t43715) + t42347*t43760 + 0.3*(t28439*t43563 + t28416*t43760) - 0.196*(t28416*t43563 - 1.*t28439*t43760) + 0.128*t24960*t42758*t501 + var1[2];
  p_output1[11]=-0.3*t42613*t43130 - 0.128*t42637*t43135 + t42647*t43910 + 0.3*t42654*t43953 - 0.64*t42672*t43966 - 0.64*t42686*t43980 - 0.0461*(t42683*t43966 + t42672*t43980) + t42701*t44029 - 0.3*(t42645*t43910 + t42640*t44029) - 0.196*(t42640*t43910 - 1.*t42645*t44029) + 0.128*t42621*t42758*t501 + var1[2];
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
