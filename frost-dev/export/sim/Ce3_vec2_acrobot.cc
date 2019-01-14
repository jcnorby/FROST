/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:37 GMT-05:00
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
  double t23653;
  double t4920;
  double t5150;
  double t23694;
  double t23917;
  double t6397;
  double t23782;
  double t23912;
  double t1685;
  double t23926;
  double t24170;
  double t24350;
  double t24890;
  double t551;
  double t26704;
  double t26722;
  double t24698;
  double t27189;
  double t27191;
  double t27197;
  double t27131;
  double t27142;
  double t27180;
  double t26919;
  double t27114;
  double t27117;
  double t27118;
  double t23916;
  double t24841;
  double t24889;
  double t25348;
  double t25453;
  double t25685;
  double t25884;
  double t26041;
  double t28606;
  double t28607;
  double t26188;
  double t26248;
  double t26256;
  double t26478;
  double t26493;
  double t26570;
  double t26608;
  double t26642;
  double t26643;
  double t28653;
  double t28701;
  double t28745;
  double t28748;
  double t28623;
  double t28624;
  double t28639;
  double t28650;
  double t27199;
  double t27209;
  double t27291;
  double t27766;
  double t27807;
  double t27982;
  double t28011;
  double t28033;
  double t29053;
  double t29056;
  double t29069;
  double t29077;
  double t28888;
  double t28954;
  double t28976;
  double t28390;
  double t28584;
  double t28588;
  double t29241;
  double t29274;
  double t29385;
  double t28774;
  double t28777;
  double t28778;
  double t28784;
  double t28795;
  double t28821;
  double t29398;
  double t29569;
  double t29662;
  double t30028;
  double t30044;
  double t30045;
  double t30049;
  double t30054;
  double t30084;
  double t30099;
  double t30104;
  double t30159;
  double t30181;
  double t30182;
  double t31795;
  double t31798;
  double t31811;
  double t31834;
  double t31835;
  double t31865;
  double t32032;
  double t32041;
  double t32042;
  double t31928;
  double t31948;
  double t32012;
  double t32013;
  double t32092;
  double t32109;
  double t32110;
  double t32075;
  double t32081;
  double t32089;
  double t31618;
  double t26681;
  double t27126;
  double t27129;
  double t27183;
  double t27184;
  double t31580;
  double t28107;
  double t28113;
  double t28224;
  double t28261;
  double t28341;
  double t32165;
  double t32172;
  double t32174;
  double t32177;
  double t28647;
  double t28752;
  double t28753;
  double t28764;
  double t28766;
  double t28767;
  double t28772;
  double t31546;
  double t28992;
  double t29015;
  double t29081;
  double t29086;
  double t32229;
  double t32231;
  double t32242;
  double t32243;
  double t32245;
  double t29128;
  double t29169;
  double t29174;
  double t29175;
  double t30244;
  double t30340;
  double t30370;
  double t29989;
  double t32265;
  double t32266;
  double t32267;
  double t32272;
  double t32276;
  double t30504;
  double t30602;
  double t31436;
  double t31447;
  double t31454;
  double t31471;
  double t31547;
  double t31553;
  double t31564;
  double t31582;
  double t31622;
  double t31649;
  double t31881;
  double t31882;
  double t31894;
  double t31901;
  double t31904;
  double t31911;
  double t31918;
  double t31921;
  double t32071;
  double t32072;
  double t32073;
  double t32024;
  double t32046;
  double t32051;
  double t32474;
  double t32507;
  double t32508;
  double t32510;
  double t32460;
  double t32461;
  double t32090;
  double t32111;
  double t32132;
  double t32142;
  double t32146;
  double t32149;
  double t32626;
  double t32634;
  double t32638;
  double t32595;
  double t32227;
  double t32745;
  double t32752;
  double t32754;
  double t32264;
  double t32278;
  double t33567;
  double t34676;
  double t34678;
  double t34679;
  double t34681;
  double t34648;
  double t32757;
  double t32758;
  double t32759;
  double t33045;
  double t33147;
  double t33159;
  double t33204;
  double t32302;
  double t32303;
  double t32352;
  double t32360;
  double t32367;
  double t32370;
  double t32373;
  double t32377;
  double t32381;
  double t32525;
  double t32457;
  double t32514;
  double t32526;
  double t32529;
  double t34958;
  double t34965;
  double t34966;
  double t34969;
  double t34970;
  double t34971;
  double t32560;
  double t35091;
  double t35115;
  double t35122;
  double t35022;
  double t35058;
  double t35060;
  double t32675;
  double t32742;
  double t33235;
  double t34041;
  double t34046;
  double t34478;
  double t34722;
  double t34754;
  double t35543;
  double t35547;
  double t35552;
  double t35583;
  double t35585;
  double t35588;
  double t34757;
  double t34863;
  double t34873;
  double t34879;
  double t34917;
  double t34923;
  double t34924;
  double t34925;
  double t34926;
  double t34927;
  double t34931;
  double t35017;
  double t35020;
  double t35075;
  double t35161;
  double t50955;
  double t50957;
  double t50983;
  double t51740;
  double t53518;
  double t53655;
  double t35219;
  double t35226;
  t23653 = Cos(var1[4]);
  t4920 = Cos(var1[5]);
  t5150 = Sin(var1[4]);
  t23694 = Sin(var1[5]);
  t23917 = Cos(var1[3]);
  t6397 = t4920*t5150;
  t23782 = t23653*t23694;
  t23912 = t6397 + t23782;
  t1685 = Sin(var1[3]);
  t23926 = t23653*t4920;
  t24170 = -1.*t5150*t23694;
  t24350 = t23926 + t24170;
  t24890 = Sin(var1[2]);
  t551 = Cos(var1[2]);
  t26704 = -1.*t4920;
  t26722 = 1. + t26704;
  t24698 = t23917*t24350;
  t27189 = -1.*t4920*t5150;
  t27191 = -1.*t23653*t23694;
  t27197 = t27189 + t27191;
  t27131 = 0.8*t26722;
  t27142 = 1.04*t4920;
  t27180 = t27131 + t27142;
  t26919 = -0.15*t26722;
  t27114 = -0.15*t4920;
  t27117 = -0.24*t23694;
  t27118 = t26919 + t27114 + t27117;
  t23916 = -1.*t1685*t23912;
  t24841 = t23916 + t24698;
  t24889 = -1.*t551*t24841;
  t25348 = t23917*t23912;
  t25453 = t1685*t24350;
  t25685 = t25348 + t25453;
  t25884 = -1.*t24890*t25685;
  t26041 = t24889 + t25884;
  t28606 = -1.*t23653;
  t28607 = 1. + t28606;
  t26188 = t23653*t1685;
  t26248 = t23917*t5150;
  t26256 = t26188 + t26248;
  t26478 = -1.*t24890*t26256;
  t26493 = t23917*t23653;
  t26570 = -1.*t1685*t5150;
  t26608 = t26493 + t26570;
  t26642 = -1.*t551*t26608;
  t26643 = t26478 + t26642;
  t28653 = -0.15*t28607;
  t28701 = -0.15*t23653;
  t28745 = -0.29*t5150;
  t28748 = t28653 + t28701 + t28745;
  t28623 = 0.4*t28607;
  t28624 = 0.69*t23653;
  t28639 = t28623 + t28624;
  t28650 = 0.15*t5150;
  t27199 = t1685*t27197;
  t27209 = t27199 + t24698;
  t27291 = -1.*t24890*t27209;
  t27766 = t23917*t27197;
  t27807 = -1.*t1685*t24350;
  t27982 = t27766 + t27807;
  t28011 = -1.*t551*t27982;
  t28033 = t27291 + t28011;
  t29053 = 0.4*t5150;
  t29056 = -1.*t27180*t5150;
  t29069 = t23653*t27118;
  t29077 = t28653 + t29053 + t29056 + t29069;
  t28888 = t23653*t27180;
  t28954 = t5150*t27118;
  t28976 = t28623 + t28888 + t28650 + t28954;
  t28390 = -1.*t551*t23917;
  t28584 = -1.*t24890*t1685;
  t28588 = t28390 + t28584;
  t29241 = -1.*t23917*t24890;
  t29274 = t551*t1685;
  t29385 = t29241 + t29274;
  t28774 = -1.*t23653*t1685;
  t28777 = -1.*t23917*t5150;
  t28778 = t28774 + t28777;
  t28784 = -1.*t551*t28778;
  t28795 = -1.*t24890*t26608;
  t28821 = t28784 + t28795;
  t29398 = t551*t23917;
  t29569 = t24890*t1685;
  t29662 = t29398 + t29569;
  t30028 = -1.*t24890*t28778;
  t30044 = t551*t26608;
  t30045 = t30028 + t30044;
  t30049 = t551*t26256;
  t30054 = t30049 + t28795;
  t30084 = t551*t27209;
  t30099 = -1.*t24890*t27982;
  t30104 = t30084 + t30099;
  t30159 = -1.*t24890*t24841;
  t30181 = t551*t25685;
  t30182 = t30159 + t30181;
  t31795 = -1.*t23917;
  t31798 = 1. + t31795;
  t31811 = -0.15*t31798;
  t31834 = -0.15*t23917;
  t31835 = -0.16*t1685;
  t31865 = t31811 + t31834 + t31835;
  t32032 = -1.*t28639*t1685;
  t32041 = t23917*t28748;
  t32042 = t31811 + t32032 + t32041;
  t31928 = t23917*t28639;
  t31948 = 0.15*t1685;
  t32012 = t1685*t28748;
  t32013 = t31928 + t31948 + t32012;
  t32092 = t23917*t29077;
  t32109 = -1.*t1685*t28976;
  t32110 = t31811 + t32092 + t32109;
  t32075 = t1685*t29077;
  t32081 = t23917*t28976;
  t32089 = t31948 + t32075 + t32081;
  t31618 = t551*t24841;
  t26681 = 0.15*t4920;
  t27126 = t4920*t27118;
  t27129 = -0.4*t23694;
  t27183 = t27180*t23694;
  t27184 = t26681 + t27126 + t27129 + t27183;
  t31580 = t551*t27982;
  t28107 = 0.4*t4920;
  t28113 = -1.*t4920*t27180;
  t28224 = 0.15*t23694;
  t28261 = t27118*t23694;
  t28341 = t28107 + t28113 + t28224 + t28261;
  t32165 = -1.*t23917*t23912;
  t32172 = t32165 + t27807;
  t32174 = -1.*t24890*t32172;
  t32177 = t31618 + t32174;
  t28647 = -1.*t28639*t23653;
  t28752 = t28748*t5150;
  t28753 = t28647 + t28650 + t28752;
  t28764 = 0.15*t23653;
  t28766 = t23653*t28748;
  t28767 = t28639*t5150;
  t28772 = t28764 + t28766 + t28767;
  t31546 = t551*t28778;
  t28992 = t28976*t23912;
  t29015 = 0.15*t24350;
  t29081 = t29077*t24350;
  t29086 = t28992 + t29015 + t29081;
  t32229 = -1.*t1685*t27197;
  t32231 = -1.*t23917*t24350;
  t32242 = t32229 + t32231;
  t32243 = -1.*t24890*t32242;
  t32245 = t32243 + t31580;
  t29128 = -1.*t29077*t27197;
  t29169 = 0.15*t23912;
  t29174 = -1.*t28976*t24350;
  t29175 = t29128 + t29169 + t29174;
  t30244 = t23917*t24890;
  t30340 = -1.*t551*t1685;
  t30370 = t30244 + t30340;
  t29989 = -12.8*t29385*t29662;
  t32265 = -1.*t23917*t23653;
  t32266 = t1685*t5150;
  t32267 = t32265 + t32266;
  t32272 = -1.*t24890*t32267;
  t32276 = t31546 + t32272;
  t30504 = -6.4*t30370*t29385;
  t30602 = -6.4*t28588*t29662;
  t31436 = Power(t29662,2);
  t31447 = -6.4*t31436;
  t31454 = t24890*t26256;
  t31471 = t31454 + t30044;
  t31547 = t24890*t26608;
  t31553 = t31546 + t31547;
  t31564 = t24890*t27209;
  t31582 = t31564 + t31580;
  t31622 = t24890*t25685;
  t31649 = t31618 + t31622;
  t31881 = -1.*t23917*t31865;
  t31882 = -0.16*t23917*t1685;
  t31894 = t31881 + t31882;
  t31901 = -6.4*t29385*t31894;
  t31904 = Power(t23917,2);
  t31911 = 0.16*t31904;
  t31918 = -1.*t31865*t1685;
  t31921 = t31911 + t31918;
  t32071 = t32042*t28778;
  t32072 = t32013*t26608;
  t32073 = t32071 + t32072;
  t32024 = -1.*t32013*t26256;
  t32046 = -1.*t32042*t26608;
  t32051 = t32024 + t32046;
  t32474 = -1.*t23917*t28639;
  t32507 = -0.15*t1685;
  t32508 = -1.*t1685*t28748;
  t32510 = t32474 + t32507 + t32508;
  t32460 = 0.15*t23917;
  t32461 = t32460 + t32032 + t32041;
  t32090 = t32089*t27209;
  t32111 = t32110*t27982;
  t32132 = t32090 + t32111;
  t32142 = -1.*t32110*t24841;
  t32146 = -1.*t32089*t25685;
  t32149 = t32142 + t32146;
  t32626 = -1.*t1685*t29077;
  t32634 = -1.*t23917*t28976;
  t32638 = t32507 + t32626 + t32634;
  t32595 = t32460 + t32092 + t32109;
  t32227 = 3.944*t30045;
  t32745 = -1.*t23653*t4920;
  t32752 = t5150*t23694;
  t32754 = t32745 + t32752;
  t32264 = -13.6*t28753*t30045;
  t32278 = -13.6*t28772*t32276;
  t33567 = -0.15*t5150;
  t34676 = 0.4*t23653;
  t34678 = -1.*t23653*t27180;
  t34679 = -1.*t5150*t27118;
  t34681 = t34676 + t34678 + t33567 + t34679;
  t34648 = t28764 + t29053 + t29056 + t29069;
  t32757 = t23917*t32754;
  t32758 = t32229 + t32757;
  t32759 = -1.*t24890*t32758;
  t33045 = t1685*t32754;
  t33147 = t27766 + t33045;
  t33159 = t551*t33147;
  t33204 = t32759 + t33159;
  t32302 = -27.2*t30045*t30054;
  t32303 = -27.2*t30045*t32276;
  t32352 = -13.6*t30045*t31471;
  t32360 = -13.6*t30054*t31553;
  t32367 = t24890*t28778;
  t32370 = t551*t32267;
  t32373 = t32367 + t32370;
  t32377 = -13.6*t30045*t32373;
  t32381 = -13.6*t31553*t32276;
  t32525 = -13.6*t30045*t32073;
  t32457 = -1.*t32042*t28778;
  t32514 = -1.*t32013*t26608;
  t32526 = -13.6*t32051*t32276;
  t32529 = t32013*t28778;
  t34958 = -0.29*t23653*t1685;
  t34965 = -0.29*t23917*t5150;
  t34966 = t34958 + t34965;
  t34969 = -0.29*t23917*t23653;
  t34970 = 0.29*t1685*t5150;
  t34971 = t34969 + t34970;
  t32560 = t32042*t32267;
  t35091 = t23917*t34648;
  t35115 = t1685*t34681;
  t35122 = t35091 + t35115;
  t35022 = -1.*t1685*t34648;
  t35058 = t23917*t34681;
  t35060 = t35022 + t35058;
  t32675 = -1.44*var2[5]*t30104;
  t32742 = -12.*t28341*t30104;
  t33235 = -12.*t27184*t33204;
  t34041 = -12.*t29175*t30104;
  t34046 = 0.15*t27197;
  t34478 = t29077*t27197;
  t34722 = t28976*t24350;
  t34754 = -1.*t28976*t27197;
  t35543 = -0.24*t4920*t5150;
  t35547 = -0.24*t23653*t23694;
  t35552 = t35543 + t35547;
  t35583 = -0.24*t23653*t4920;
  t35585 = 0.24*t5150*t23694;
  t35588 = t35583 + t35585;
  t34757 = -1.*t29077*t32754;
  t34863 = -12.*t29086*t33204;
  t34873 = -24.*t30104*t30182;
  t34879 = -24.*t30104*t33204;
  t34917 = -12.*t31582*t30182;
  t34923 = -12.*t30104*t31649;
  t34924 = -12.*t31582*t33204;
  t34925 = t551*t32758;
  t34926 = t24890*t33147;
  t34927 = t34925 + t34926;
  t34931 = -12.*t30104*t34927;
  t35017 = -12.*t30104*t32132;
  t35020 = -1.*t32089*t27209;
  t35075 = -1.*t32110*t27982;
  t35161 = -12.*t32149*t33204;
  t50955 = -1.*t1685*t35552;
  t50957 = t23917*t35588;
  t50983 = t50955 + t50957;
  t51740 = t23917*t35552;
  t53518 = t1685*t35588;
  t53655 = t51740 + t53518;
  t35219 = t32110*t32758;
  t35226 = t32089*t33147;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-6.4*Power(t29385,2) - 13.6*Power(t30045,2) - 13.6*Power(t30054,2) - 12.*Power(t30104,2) - 12.*Power(t30182,2) + t30504 + t30602 + t31447 - 13.6*t26643*t31471 - 13.6*t28821*t31553 - 12.*t28033*t31582 - 12.*t26041*t31649)*var2[0] - 0.5*(-12.8*t28588*t29385 + t29989 - 27.2*t28821*t30045 - 27.2*t26643*t30054 - 24.*t28033*t30104 - 24.*t26041*t30182)*var2[1] - 0.5*(0.048*t24890 + t31901 - 6.4*t28588*t31921 - 13.6*t28821*t32051 - 13.6*t26643*t32073 - 12.*t26041*t32132 - 12.*t28033*t32149)*var2[2] - 0.5*(1.024*t28588 - 13.6*t26643*t28753 - 13.6*t28772*t28821 - 12.*t28033*t29086 - 12.*t26041*t29175)*var2[3] - 0.5*(3.944*t26643 - 12.*t27184*t28033 - 12.*t26041*t28341)*var2[4] - 1.44*t26041*var2[5]);
  p_output1[3]=var2[1]*(-0.5*(-6.4*Power(t30370,2) + t30504 + t30602 + t31447 - 12.*t31649*t32177 - 12.*t31582*t32245 + t32352 + t32360 + t32377 + t32381 - 12.*t30182*(t24841*t24890 + t32172*t551) - 12.*t30104*(t24890*t27982 + t32242*t551))*var2[0] - 0.5*(t29989 - 12.8*t29662*t30370 - 24.*t30182*t32177 - 24.*t30104*t32245 + t32302 + t32303)*var2[1] - 0.5*(-6.4*t29662*(0.16*Power(t1685,2) + t1685*t31865) - 6.4*t30370*t31894 + t31901 - 6.4*t29662*t31921 - 12.*t32132*t32177 - 12.*t32149*t32245 - 13.6*t30045*(t32457 - 1.*t26256*t32461 - 1.*t26608*t32510 + t32514) + t32525 + t32526 - 13.6*t30054*(t26608*t32461 + t28778*t32510 + t32529 + t32560) - 12.*t30104*(-1.*t24841*t32089 - 1.*t32110*t32172 - 1.*t25685*t32595 - 1.*t24841*t32638) - 12.*t30182*(t27982*t32089 + t32110*t32242 + t27209*t32595 + t27982*t32638))*var2[2] - 0.5*(1.024*t29662 - 12.*t29175*t32177 - 12.*t29086*t32245 + t32264 + t32278)*var2[3] - 0.5*(-12.*t28341*t32177 + t32227 - 12.*t27184*t32245)*var2[4] - 1.44*t32177*var2[5]);
  p_output1[4]=var2[1]*(t32675 - 0.5*(t32352 + t32360 + t32377 + t32381 + t34917 + t34923 + t34924 + t34931)*var2[0] - 0.5*(t32302 + t32303 + t34873 + t34879)*var2[1] - 0.5*(t32525 + t32526 - 13.6*t30045*(t32457 + t32514 - 1.*t26256*t34966 - 1.*t26608*t34971) - 13.6*t30054*(t32529 + t32560 + t26608*t34966 + t28778*t34971) + t35017 - 12.*t30104*(t35020 - 1.*t24841*t35060 + t35075 - 1.*t25685*t35122) + t35161 - 12.*t30182*(t27982*t35060 + t27209*t35122 + t35219 + t35226))*var2[2] - 0.5*(-13.6*t28772*t30054 + t32264 + t32278 + t34041 - 12.*t30104*(t34046 + t34478 + t23912*t34648 + t24350*t34681 + t34722) - 12.*t30182*(t29015 - 1.*t24350*t34648 - 1.*t27197*t34681 + t34754 + t34757) + t34863 - 13.6*t30045*(-0.29*Power(t23653,2) + t23653*t28639 + t33567 - 1.*t28748*t5150 - 0.29*Power(t5150,2)))*var2[3] - 0.5*(t32227 + t32742 + t33235)*var2[4]);
  p_output1[5]=var2[1]*(t32675 - 0.5*(t34917 + t34923 + t34924 + t34931)*var2[0] - 0.5*(t34873 + t34879)*var2[1] - 0.5*(t35017 + t35161 - 12.*t30104*(t35020 + t35075 - 1.*t24841*t50983 - 1.*t25685*t53655) - 12.*t30182*(t35219 + t35226 + t27982*t50983 + t27209*t53655))*var2[2] - 0.5*(t34041 + t34863 - 12.*t30104*(t34046 + t34478 + t34722 + t23912*t35552 + t24350*t35588) - 12.*t30182*(t29015 + t34754 + t34757 - 1.*t24350*t35552 - 1.*t27197*t35588))*var2[3] - 0.5*(-12.*t27184*t30182 + t32742 + t33235 - 12.*t30104*(-0.15*t23694 - 0.24*Power(t23694,2) - 1.*t23694*t27118 - 0.4*t4920 + t27180*t4920 - 0.24*Power(t4920,2)))*var2[4]);
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

#include "Ce3_vec2_acrobot.hh"

namespace SymFunction
{

void Ce3_vec2_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
