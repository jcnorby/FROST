/*
 * Automatically Generated from Mathematica.
 * Thu 21 Mar 2019 12:58:44 GMT-04:00
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
  double t63;
  double t1212;
  double t1602;
  double t2493;
  double t627;
  double t4167;
  double t4193;
  double t4245;
  double t10242;
  double t10469;
  double t10476;
  double t10986;
  double t13037;
  double t13129;
  double t13135;
  double t7373;
  double t9044;
  double t9081;
  double t10210;
  double t10995;
  double t14668;
  double t15053;
  double t17064;
  double t17766;
  double t18873;
  double t22955;
  double t28884;
  double t27181;
  double t27987;
  double t28021;
  double t28024;
  double t28052;
  double t28055;
  double t28065;
  double t28944;
  double t10224;
  double t27203;
  double t10662;
  double t27529;
  double t27673;
  double t30411;
  double t28068;
  double t30802;
  double t30818;
  double t30845;
  double t31859;
  double t31880;
  double t31979;
  double t32010;
  double t32057;
  double t30861;
  double t32143;
  double t32226;
  double t32638;
  double t32088;
  double t32089;
  double t32660;
  double t32362;
  double t32386;
  double t32387;
  double t32499;
  double t32514;
  double t32526;
  double t33961;
  double t34302;
  double t36139;
  double t36217;
  double t38326;
  double t39362;
  double t40894;
  double t41081;
  double t44507;
  double t45656;
  double t45721;
  double t53033;
  double t53340;
  double t45738;
  double t32742;
  double t45735;
  double t54300;
  double t55339;
  double t55378;
  double t55387;
  double t55403;
  double t55405;
  double t55406;
  double t55409;
  double t55410;
  double t55390;
  double t55508;
  double t55534;
  double t56034;
  double t55411;
  double t55412;
  double t56036;
  double t55875;
  double t55879;
  double t55886;
  double t55956;
  double t55990;
  double t56031;
  double t56113;
  double t56131;
  double t56138;
  double t56151;
  double t56475;
  double t56476;
  double t56477;
  double t56478;
  double t56479;
  double t56480;
  double t56484;
  double t56500;
  double t56523;
  double t56493;
  double t56037;
  double t56491;
  double t56743;
  double t56776;
  double t56777;
  double t56778;
  double t57105;
  double t57208;
  double t57212;
  double t57361;
  double t57362;
  double t56787;
  double t57406;
  double t57625;
  double t57913;
  double t57366;
  double t57371;
  double t58037;
  double t57650;
  double t57670;
  double t57786;
  double t57798;
  double t57801;
  double t57854;
  double t58088;
  double t58089;
  double t58090;
  double t58091;
  double t58117;
  double t58118;
  double t58124;
  double t58130;
  double t58136;
  double t58140;
  double t58212;
  double t58222;
  double t58224;
  double t58219;
  double t58060;
  double t58217;
  double t58256;
  double t58412;
  double t58410;
  double t58411;
  double t58413;
  double t58414;
  double t58446;
  double t58447;
  double t58448;
  double t10657;
  double t11344;
  double t12560;
  double t13150;
  double t13602;
  double t26344;
  double t26744;
  double t27222;
  double t27236;
  double t27351;
  double t58539;
  double t58540;
  double t58541;
  double t58542;
  double t28176;
  double t58549;
  double t58552;
  double t58553;
  double t58558;
  double t30140;
  double t30321;
  double t58561;
  double t58562;
  double t58563;
  double t58565;
  double t30515;
  double t30524;
  double t30526;
  double t30529;
  double t30565;
  double t30602;
  double t31574;
  double t32009;
  double t32129;
  double t32331;
  double t32332;
  double t32653;
  double t32743;
  double t33087;
  double t33465;
  double t33500;
  double t36476;
  double t37098;
  double t37757;
  double t38071;
  double t38131;
  double t58589;
  double t58590;
  double t58591;
  double t58592;
  double t45744;
  double t58594;
  double t58595;
  double t58596;
  double t58597;
  double t58599;
  double t58601;
  double t58602;
  double t58603;
  double t54335;
  double t55035;
  double t55057;
  double t55399;
  double t55407;
  double t55507;
  double t55585;
  double t55765;
  double t56035;
  double t56071;
  double t56072;
  double t56078;
  double t56096;
  double t56223;
  double t56427;
  double t56457;
  double t56458;
  double t56472;
  double t58719;
  double t58723;
  double t58729;
  double t58730;
  double t56498;
  double t58732;
  double t58733;
  double t58734;
  double t58735;
  double t58737;
  double t58738;
  double t58739;
  double t58740;
  double t56756;
  double t56765;
  double t56767;
  double t57104;
  double t57335;
  double t57404;
  double t57626;
  double t57627;
  double t57915;
  double t58084;
  double t58085;
  double t58086;
  double t58087;
  double t58108;
  double t58112;
  double t58113;
  double t58115;
  double t58116;
  double t59011;
  double t59012;
  double t59013;
  double t59014;
  double t58220;
  double t59016;
  double t59017;
  double t59019;
  double t59023;
  double t59025;
  double t59026;
  double t59028;
  double t59029;
  double t58294;
  double t58316;
  double t58381;
  double t59051;
  double t59052;
  double t59053;
  double t59055;
  double t59056;
  double t59057;
  double t59081;
  double t59114;
  double t59115;
  double t59116;
  double t59118;
  double t59119;
  double t59120;
  double t59121;
  double t59125;
  double t59126;
  double t59127;
  double t59128;
  double t59177;
  double t59178;
  double t59183;
  double t59355;
  double t59458;
  double t59468;
  double t59478;
  double t59485;
  double t59511;
  double t59539;
  double t59553;
  double t59562;
  double t60071;
  double t60132;
  double t60152;
  double t60397;
  double t60421;
  double t60514;
  double t60536;
  double t60548;
  double t60557;
  double t60588;
  double t60596;
  double t60598;
  double t60773;
  double t60774;
  double t60775;
  double t60779;
  double t60787;
  double t60794;
  double t60802;
  double t60812;
  double t60816;
  double t60817;
  double t60818;
  double t60822;
  t63 = Cos(var1[4]);
  t1212 = Cos(var1[6]);
  t1602 = -1.*t1212;
  t2493 = 1. + t1602;
  t627 = Cos(var1[5]);
  t4167 = Sin(var1[5]);
  t4193 = Sin(var1[4]);
  t4245 = Sin(var1[6]);
  t10242 = Cos(var1[8]);
  t10469 = -1.*t10242;
  t10476 = 1. + t10469;
  t10986 = Sin(var1[8]);
  t13037 = -3.e-6*t10476;
  t13129 = 3.e-6*t10986;
  t13135 = t13037 + t13129;
  t7373 = t63*t627*t1212;
  t9044 = -3.e-6*t63*t2493*t4167;
  t9081 = t4193*t4245;
  t10210 = t7373 + t9044 + t9081;
  t10995 = -1.*t10986;
  t14668 = 3.e-6*t63*t627*t2493;
  t15053 = -9.e-12*t2493;
  t17064 = 1. + t15053;
  t17766 = -1.*t63*t17064*t4167;
  t18873 = -3.e-6*t4193*t4245;
  t22955 = t14668 + t17766 + t18873;
  t28884 = 3.e-6*t10476;
  t27181 = -3.e-6*t10986;
  t27987 = -1.000000000009*t2493;
  t28021 = 1. + t27987;
  t28024 = t28021*t4193;
  t28052 = -1.*t63*t627*t4245;
  t28055 = -3.e-6*t63*t4167*t4245;
  t28065 = t28024 + t28052 + t28055;
  t28944 = t28884 + t13129;
  t10224 = 1.125e-12*var1[8];
  t27203 = t13037 + t27181;
  t10662 = -9.e-12*t10476;
  t27529 = -1.000000000009*t10476;
  t27673 = 1. + t27529;
  t30411 = t28884 + t27181;
  t28068 = 9.e-12*t10476;
  t30802 = Cos(var1[10]);
  t30818 = -1.*t30802;
  t30845 = 1. + t30818;
  t31859 = Cos(var1[12]);
  t31880 = -1.*t31859;
  t31979 = 1. + t31880;
  t32010 = -3.e-6*t31979;
  t32057 = Sin(var1[12]);
  t30861 = Sin(var1[10]);
  t32143 = 3.e-6*t32057;
  t32226 = t32010 + t32143;
  t32638 = 7.5e-14*var1[12];
  t32088 = -3.e-6*t32057;
  t32089 = t32010 + t32088;
  t32660 = -9.e-12*t31979;
  t32362 = 3.e-6*t30845*t63*t627;
  t32386 = -3.e-6*t30861*t4193;
  t32387 = -9.e-12*t30845;
  t32499 = 1. + t32387;
  t32514 = -1.*t32499*t63*t4167;
  t32526 = t32362 + t32386 + t32514;
  t33961 = t30802*t63*t627;
  t34302 = t30861*t4193;
  t36139 = -3.e-6*t30845*t63*t4167;
  t36217 = t33961 + t34302 + t36139;
  t38326 = -1.*t63*t627*t30861;
  t39362 = -1.000000000009*t30845;
  t40894 = 1. + t39362;
  t41081 = t40894*t4193;
  t44507 = -3.e-6*t63*t30861*t4167;
  t45656 = t38326 + t41081 + t44507;
  t45721 = 3.e-6*t31979;
  t53033 = -1.000000000009*t31979;
  t53340 = 1. + t53033;
  t45738 = 9.e-12*t31979;
  t32742 = -1.*t32057;
  t45735 = t45721 + t32088;
  t54300 = t45721 + t32143;
  t55339 = Cos(var1[15]);
  t55378 = -1.*t55339;
  t55387 = 1. + t55378;
  t55403 = Cos(var1[17]);
  t55405 = -1.*t55403;
  t55406 = 1. + t55405;
  t55409 = -3.e-6*t55406;
  t55410 = Sin(var1[17]);
  t55390 = Sin(var1[15]);
  t55508 = 3.e-6*t55410;
  t55534 = t55409 + t55508;
  t56034 = 1.125e-12*var1[17];
  t55411 = -3.e-6*t55410;
  t55412 = t55409 + t55411;
  t56036 = -9.e-12*t55406;
  t55875 = 3.e-6*t55387*t63*t627;
  t55879 = -3.e-6*t55390*t4193;
  t55886 = -9.e-12*t55387;
  t55956 = 1. + t55886;
  t55990 = -1.*t55956*t63*t4167;
  t56031 = t55875 + t55879 + t55990;
  t56113 = t55339*t63*t627;
  t56131 = t55390*t4193;
  t56138 = -3.e-6*t55387*t63*t4167;
  t56151 = t56113 + t56131 + t56138;
  t56475 = -1.*t63*t627*t55390;
  t56476 = -1.000000000009*t55387;
  t56477 = 1. + t56476;
  t56478 = t56477*t4193;
  t56479 = -3.e-6*t63*t55390*t4167;
  t56480 = t56475 + t56478 + t56479;
  t56484 = 3.e-6*t55406;
  t56500 = -1.000000000009*t55406;
  t56523 = 1. + t56500;
  t56493 = 9.e-12*t55406;
  t56037 = -1.*t55410;
  t56491 = t56484 + t55411;
  t56743 = t56484 + t55508;
  t56776 = Cos(var1[19]);
  t56777 = -1.*t56776;
  t56778 = 1. + t56777;
  t57105 = Cos(var1[21]);
  t57208 = -1.*t57105;
  t57212 = 1. + t57208;
  t57361 = -3.e-6*t57212;
  t57362 = Sin(var1[21]);
  t56787 = Sin(var1[19]);
  t57406 = 3.e-6*t57362;
  t57625 = t57361 + t57406;
  t57913 = 7.5e-14*var1[21];
  t57366 = -3.e-6*t57362;
  t57371 = t57361 + t57366;
  t58037 = -9.e-12*t57212;
  t57650 = 3.e-6*t56778*t63*t627;
  t57670 = -3.e-6*t56787*t4193;
  t57786 = -9.e-12*t56778;
  t57798 = 1. + t57786;
  t57801 = -1.*t57798*t63*t4167;
  t57854 = t57650 + t57670 + t57801;
  t58088 = t56776*t63*t627;
  t58089 = t56787*t4193;
  t58090 = -3.e-6*t56778*t63*t4167;
  t58091 = t58088 + t58089 + t58090;
  t58117 = -1.*t63*t627*t56787;
  t58118 = -1.000000000009*t56778;
  t58124 = 1. + t58118;
  t58130 = t58124*t4193;
  t58136 = -3.e-6*t63*t56787*t4167;
  t58140 = t58117 + t58130 + t58136;
  t58212 = 3.e-6*t57212;
  t58222 = -1.000000000009*t57212;
  t58224 = 1. + t58222;
  t58219 = 9.e-12*t57212;
  t58060 = -1.*t57362;
  t58217 = t58212 + t57366;
  t58256 = t58212 + t57406;
  t58412 = Cos(var1[3]);
  t58410 = Sin(var1[3]);
  t58411 = t627*t58410*t4193;
  t58413 = t58412*t4167;
  t58414 = t58411 + t58413;
  t58446 = t58412*t627;
  t58447 = -1.*t58410*t4193*t4167;
  t58448 = t58446 + t58447;
  t10657 = 0.225000000002025*t10476;
  t11344 = t10662 + t10995;
  t12560 = 0.1*t11344;
  t13150 = -9.75e-7*t13135;
  t13602 = t10224 + t10657 + t12560 + t13150;
  t26344 = 3.75e-7*var1[8];
  t26744 = -1.755e-17*t10476;
  t27222 = 0.225*t27203;
  t27236 = 0.1*t13135;
  t27351 = t26344 + t26744 + t27222 + t27236;
  t58539 = t1212*t58414;
  t58540 = 3.e-6*t2493*t58448;
  t58541 = -1.*t63*t58410*t4245;
  t58542 = t58539 + t58540 + t58541;
  t28176 = t28068 + t10995;
  t58549 = 3.e-6*t2493*t58414;
  t58552 = t17064*t58448;
  t58553 = 3.e-6*t63*t58410*t4245;
  t58558 = t58549 + t58552 + t58553;
  t30140 = -1.8e-11*t10476;
  t30321 = 1. + t30140;
  t58561 = -1.*t63*t28021*t58410;
  t58562 = -1.*t58414*t4245;
  t58563 = 3.e-6*t58448*t4245;
  t58565 = t58561 + t58562 + t58563;
  t30515 = 0.1000000000009*t10476;
  t30524 = -9.75e-7*t27203;
  t30526 = t10662 + t10986;
  t30529 = 0.225*t30526;
  t30565 = t10224 + t30515 + t30524 + t30529;
  t30602 = t28068 + t10986;
  t31574 = 2.5e-8*var1[12];
  t32009 = 6.75e-18*t31979;
  t32129 = -0.225000000003*t32089;
  t32331 = 0.100000000003*t32226;
  t32332 = t31574 + t32009 + t32129 + t32331;
  t32653 = -0.225000000005025*t31979;
  t32743 = t32660 + t32742;
  t33087 = 0.100000000003*t32743;
  t33465 = 3.75e-7*t32226;
  t33500 = t32638 + t32653 + t33087 + t33465;
  t36476 = 0.1000000000039*t31979;
  t37098 = 3.75e-7*t32089;
  t37757 = t32660 + t32057;
  t38071 = -0.225000000003*t37757;
  t38131 = t32638 + t36476 + t37098 + t38071;
  t58589 = 3.e-6*t63*t30861*t58410;
  t58590 = 3.e-6*t30845*t58414;
  t58591 = t32499*t58448;
  t58592 = t58589 + t58590 + t58591;
  t45744 = t45738 + t32057;
  t58594 = -1.*t63*t30861*t58410;
  t58595 = t30802*t58414;
  t58596 = 3.e-6*t30845*t58448;
  t58597 = t58594 + t58595 + t58596;
  t58599 = -1.*t40894*t63*t58410;
  t58601 = -1.*t30861*t58414;
  t58602 = 3.e-6*t30861*t58448;
  t58603 = t58599 + t58601 + t58602;
  t54335 = t45738 + t32742;
  t55035 = -1.8e-11*t31979;
  t55057 = 1. + t55035;
  t55399 = 3.75e-7*var1[17];
  t55407 = -1.755e-17*t55406;
  t55507 = 0.225*t55412;
  t55585 = 0.1*t55534;
  t55765 = t55399 + t55407 + t55507 + t55585;
  t56035 = 0.225000000002025*t55406;
  t56071 = t56036 + t56037;
  t56072 = 0.1*t56071;
  t56078 = -9.75e-7*t55534;
  t56096 = t56034 + t56035 + t56072 + t56078;
  t56223 = 0.1000000000009*t55406;
  t56427 = -9.75e-7*t55412;
  t56457 = t56036 + t55410;
  t56458 = 0.225*t56457;
  t56472 = t56034 + t56223 + t56427 + t56458;
  t58719 = 3.e-6*t63*t55390*t58410;
  t58723 = 3.e-6*t55387*t58414;
  t58729 = t55956*t58448;
  t58730 = t58719 + t58723 + t58729;
  t56498 = t56493 + t55410;
  t58732 = -1.*t63*t55390*t58410;
  t58733 = t55339*t58414;
  t58734 = 3.e-6*t55387*t58448;
  t58735 = t58732 + t58733 + t58734;
  t58737 = -1.*t56477*t63*t58410;
  t58738 = -1.*t55390*t58414;
  t58739 = 3.e-6*t55390*t58448;
  t58740 = t58737 + t58738 + t58739;
  t56756 = t56493 + t56037;
  t56765 = -1.8e-11*t55406;
  t56767 = 1. + t56765;
  t57104 = 2.5e-8*var1[21];
  t57335 = 6.75e-18*t57212;
  t57404 = -0.225000000003*t57371;
  t57626 = 0.100000000003*t57625;
  t57627 = t57104 + t57335 + t57404 + t57626;
  t57915 = -0.225000000005025*t57212;
  t58084 = t58037 + t58060;
  t58085 = 0.100000000003*t58084;
  t58086 = 3.75e-7*t57625;
  t58087 = t57913 + t57915 + t58085 + t58086;
  t58108 = 0.1000000000039*t57212;
  t58112 = 3.75e-7*t57371;
  t58113 = t58037 + t57362;
  t58115 = -0.225000000003*t58113;
  t58116 = t57913 + t58108 + t58112 + t58115;
  t59011 = 3.e-6*t63*t56787*t58410;
  t59012 = 3.e-6*t56778*t58414;
  t59013 = t57798*t58448;
  t59014 = t59011 + t59012 + t59013;
  t58220 = t58219 + t57362;
  t59016 = -1.*t63*t56787*t58410;
  t59017 = t56776*t58414;
  t59019 = 3.e-6*t56778*t58448;
  t59023 = t59016 + t59017 + t59019;
  t59025 = -1.*t58124*t63*t58410;
  t59026 = -1.*t56787*t58414;
  t59028 = 3.e-6*t56787*t58448;
  t59029 = t59025 + t59026 + t59028;
  t58294 = t58219 + t58060;
  t58316 = -1.8e-11*t57212;
  t58381 = 1. + t58316;
  t59051 = -1.*t58412*t627*t4193;
  t59052 = t58410*t4167;
  t59053 = t59051 + t59052;
  t59055 = t627*t58410;
  t59056 = t58412*t4193*t4167;
  t59057 = t59055 + t59056;
  t59081 = t1212*t59053;
  t59114 = 3.e-6*t2493*t59057;
  t59115 = t58412*t63*t4245;
  t59116 = t59081 + t59114 + t59115;
  t59118 = 3.e-6*t2493*t59053;
  t59119 = t17064*t59057;
  t59120 = -3.e-6*t58412*t63*t4245;
  t59121 = t59118 + t59119 + t59120;
  t59125 = t58412*t63*t28021;
  t59126 = -1.*t59053*t4245;
  t59127 = 3.e-6*t59057*t4245;
  t59128 = t59125 + t59126 + t59127;
  t59177 = -3.e-6*t58412*t63*t30861;
  t59178 = 3.e-6*t30845*t59053;
  t59183 = t32499*t59057;
  t59355 = t59177 + t59178 + t59183;
  t59458 = t58412*t63*t30861;
  t59468 = t30802*t59053;
  t59478 = 3.e-6*t30845*t59057;
  t59485 = t59458 + t59468 + t59478;
  t59511 = t40894*t58412*t63;
  t59539 = -1.*t30861*t59053;
  t59553 = 3.e-6*t30861*t59057;
  t59562 = t59511 + t59539 + t59553;
  t60071 = -3.e-6*t58412*t63*t55390;
  t60132 = 3.e-6*t55387*t59053;
  t60152 = t55956*t59057;
  t60397 = t60071 + t60132 + t60152;
  t60421 = t58412*t63*t55390;
  t60514 = t55339*t59053;
  t60536 = 3.e-6*t55387*t59057;
  t60548 = t60421 + t60514 + t60536;
  t60557 = t56477*t58412*t63;
  t60588 = -1.*t55390*t59053;
  t60596 = 3.e-6*t55390*t59057;
  t60598 = t60557 + t60588 + t60596;
  t60773 = -3.e-6*t58412*t63*t56787;
  t60774 = 3.e-6*t56778*t59053;
  t60775 = t57798*t59057;
  t60779 = t60773 + t60774 + t60775;
  t60787 = t58412*t63*t56787;
  t60794 = t56776*t59053;
  t60802 = 3.e-6*t56778*t59057;
  t60812 = t60787 + t60794 + t60802;
  t60816 = t58124*t58412*t63;
  t60817 = -1.*t56787*t59053;
  t60818 = 3.e-6*t56787*t59057;
  t60822 = t60816 + t60817 + t60818;
  p_output1[0]=t10210*t13602 + t22955*t27351 + 0.225*(t10210*t27673 + t28065*t28176 + t22955*t28944) + 0.130001*(t28065*t28944 + t22955*t30321 + t10210*t30411) + t28065*t30565 - 0.14*(t27673*t28065 + t22955*t30411 + t10210*t30602) - 0.225000000002025*t4193*t4245 + 6.75000000006075e-7*t2493*t4167*t63 + 0.225000000002025*t2493*t627*t63 + var1[0];
  p_output1[1]=t32332*t32526 + t33500*t36217 + 0.225000000002025*t30861*t4193 + t38131*t45656 - 0.14*(t32526*t45735 + t36217*t45744 + t45656*t53340) - 0.225*(t36217*t53340 + t32526*t54300 + t45656*t54335) + 0.130001*(t36217*t45735 + t45656*t54300 + t32526*t55057) - 6.75000000006075e-7*t30845*t4167*t63 - 0.225000000002025*t30845*t627*t63 + var1[0];
  p_output1[2]=-0.225000000002025*t4193*t55390 + t55765*t56031 + t56096*t56151 + t56472*t56480 - 0.14*(t56031*t56491 + t56151*t56498 + t56480*t56523) + 0.225*(t56151*t56523 + t56031*t56743 + t56480*t56756) - 0.129999*(t56151*t56491 + t56480*t56743 + t56031*t56767) + 6.75000000006075e-7*t4167*t55387*t63 + 0.225000000002025*t55387*t627*t63 + var1[0];
  p_output1[3]=0.225000000002025*t4193*t56787 + t57627*t57854 + t58087*t58091 + t58116*t58140 - 0.14*(t57854*t58217 + t58091*t58220 + t58140*t58224) - 0.225*(t58091*t58224 + t57854*t58256 + t58140*t58294) - 0.129999*(t58091*t58217 + t58140*t58256 + t57854*t58381) - 6.75000000006075e-7*t4167*t56778*t63 - 0.225000000002025*t56778*t627*t63 + var1[0];
  p_output1[4]=0.225000000002025*t2493*t58414 - 6.75000000006075e-7*t2493*t58448 + t13602*t58542 + t27351*t58558 + t30565*t58565 - 0.14*(t30602*t58542 + t30411*t58558 + t27673*t58565) + 0.225*(t27673*t58542 + t28944*t58558 + t28176*t58565) + 0.130001*(t30411*t58542 + t30321*t58558 + t28944*t58565) + 0.225000000002025*t4245*t58410*t63 + var1[1];
  p_output1[5]=-0.225000000002025*t30845*t58414 + 6.75000000006075e-7*t30845*t58448 + t32332*t58592 + t33500*t58597 + t38131*t58603 - 0.14*(t45735*t58592 + t45744*t58597 + t53340*t58603) + 0.130001*(t55057*t58592 + t45735*t58597 + t54300*t58603) - 0.225*(t54300*t58592 + t53340*t58597 + t54335*t58603) - 0.225000000002025*t30861*t58410*t63 + var1[1];
  p_output1[6]=0.225000000002025*t55387*t58414 - 6.75000000006075e-7*t55387*t58448 + t55765*t58730 + t56096*t58735 + t56472*t58740 - 0.14*(t56491*t58730 + t56498*t58735 + t56523*t58740) - 0.129999*(t56767*t58730 + t56491*t58735 + t56743*t58740) + 0.225*(t56743*t58730 + t56523*t58735 + t56756*t58740) + 0.225000000002025*t55390*t58410*t63 + var1[1];
  p_output1[7]=-0.225000000002025*t56778*t58414 + 6.75000000006075e-7*t56778*t58448 + t57627*t59014 + t58087*t59023 + t58116*t59029 - 0.14*(t58217*t59014 + t58220*t59023 + t58224*t59029) - 0.129999*(t58381*t59014 + t58217*t59023 + t58256*t59029) - 0.225*(t58256*t59014 + t58224*t59023 + t58294*t59029) - 0.225000000002025*t56787*t58410*t63 + var1[1];
  p_output1[8]=0.225000000002025*t2493*t59053 - 6.75000000006075e-7*t2493*t59057 + t13602*t59116 + t27351*t59121 + t30565*t59128 - 0.14*(t30602*t59116 + t30411*t59121 + t27673*t59128) + 0.225*(t27673*t59116 + t28944*t59121 + t28176*t59128) + 0.130001*(t30411*t59116 + t30321*t59121 + t28944*t59128) - 0.225000000002025*t4245*t58412*t63 + var1[2];
  p_output1[9]=-0.225000000002025*t30845*t59053 + 6.75000000006075e-7*t30845*t59057 + t32332*t59355 + t33500*t59485 + t38131*t59562 - 0.14*(t45735*t59355 + t45744*t59485 + t53340*t59562) + 0.130001*(t55057*t59355 + t45735*t59485 + t54300*t59562) - 0.225*(t54300*t59355 + t53340*t59485 + t54335*t59562) + 0.225000000002025*t30861*t58412*t63 + var1[2];
  p_output1[10]=0.225000000002025*t55387*t59053 - 6.75000000006075e-7*t55387*t59057 + t55765*t60397 + t56096*t60548 + t56472*t60598 - 0.14*(t56491*t60397 + t56498*t60548 + t56523*t60598) - 0.129999*(t56767*t60397 + t56491*t60548 + t56743*t60598) + 0.225*(t56743*t60397 + t56523*t60548 + t56756*t60598) - 0.225000000002025*t55390*t58412*t63 + var1[2];
  p_output1[11]=-0.225000000002025*t56778*t59053 + 6.75000000006075e-7*t56778*t59057 + t57627*t60779 + t58087*t60812 + t58116*t60822 - 0.14*(t58217*t60779 + t58220*t60812 + t58224*t60822) - 0.129999*(t58381*t60779 + t58217*t60812 + t58256*t60822) - 0.225*(t58256*t60779 + t58224*t60812 + t58294*t60822) + 0.225000000002025*t56787*t58412*t63 + var1[2];
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
