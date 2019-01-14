/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:24 GMT-05:00
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
  double t502;
  double t757;
  double t1286;
  double t1845;
  double t2287;
  double t2578;
  double t2845;
  double t4537;
  double t4736;
  double t4818;
  double t4983;
  double t5030;
  double t5121;
  double t5156;
  double t5162;
  double t5163;
  double t5461;
  double t5481;
  double t5529;
  double t5020;
  double t5056;
  double t5113;
  double t5114;
  double t5454;
  double t7074;
  double t7077;
  double t7343;
  double t7908;
  double t8100;
  double t8129;
  double t22197;
  double t22363;
  double t22362;
  double t22497;
  double t22549;
  double t22757;
  double t22811;
  double t24293;
  double t24765;
  double t24821;
  double t24990;
  double t25355;
  double t26081;
  double t26134;
  double t26524;
  double t22658;
  double t24359;
  double t24658;
  double t27638;
  double t27653;
  double t27655;
  double t27796;
  double t28171;
  double t28238;
  double t28427;
  double t29653;
  double t28684;
  double t28734;
  double t29307;
  double t3697;
  double t3698;
  double t3725;
  double t3958;
  double t3994;
  double t4117;
  double t4337;
  double t4820;
  double t4946;
  double t4947;
  double t5659;
  double t5686;
  double t5731;
  double t6040;
  double t6814;
  double t26964;
  double t26976;
  double t27370;
  double t27430;
  double t27470;
  double t28683;
  double t29316;
  double t29367;
  double t29821;
  double t29830;
  double t33614;
  double t33800;
  double t33812;
  double t33821;
  double t33825;
  double t34049;
  double t34080;
  double t5719;
  double t7502;
  double t7870;
  double t9301;
  double t12047;
  double t12254;
  double t12474;
  double t14840;
  double t17234;
  double t32936;
  double t32940;
  double t33841;
  double t34082;
  double t34165;
  double t34166;
  double t35409;
  double t35411;
  double t35490;
  double t35607;
  double t24738;
  double t25621;
  double t29698;
  double t29760;
  double t42460;
  double t31691;
  double t31776;
  double t31023;
  double t31533;
  double t31570;
  double t32078;
  double t32098;
  double t32152;
  double t32284;
  double t32286;
  double t32294;
  double t45214;
  double t46001;
  double t48372;
  double t48374;
  double t48394;
  double t48395;
  double t48397;
  double t48398;
  double t48399;
  double t48401;
  double t48425;
  double t48426;
  double t48427;
  double t48565;
  double t48593;
  double t48658;
  double t48694;
  double t48728;
  double t49121;
  double t49133;
  double t49135;
  double t49136;
  double t48656;
  double t48657;
  double t49124;
  double t49131;
  double t49939;
  double t49941;
  double t49944;
  double t49947;
  double t49948;
  double t49956;
  double t49962;
  double t49967;
  double t49972;
  double t49935;
  double t49954;
  double t49974;
  double t49976;
  double t50388;
  double t50389;
  double t50396;
  double t50402;
  double t50939;
  double t50942;
  double t50948;
  double t50385;
  double t50405;
  double t50406;
  double t48403;
  double t48407;
  double t48409;
  double t48411;
  double t48412;
  double t48414;
  double t48416;
  double t48418;
  double t49174;
  double t49334;
  double t49394;
  double t49132;
  double t49137;
  double t49139;
  double t63401;
  double t63402;
  double t63403;
  double t63404;
  double t63395;
  double t63398;
  double t50408;
  double t50981;
  double t50997;
  double t51007;
  double t60340;
  double t63268;
  double t63477;
  double t63478;
  double t63479;
  double t63472;
  double t63451;
  double t63393;
  double t63446;
  double t63452;
  double t63459;
  double t63505;
  double t63506;
  double t63507;
  double t63509;
  double t63518;
  double t63519;
  double t63462;
  double t63622;
  double t63623;
  double t63626;
  double t63627;
  double t63629;
  double t63630;
  double t63631;
  double t63649;
  double t63650;
  double t63653;
  double t63625;
  double t63632;
  double t63636;
  double t63575;
  double t63617;
  double t63647;
  double t63687;
  double t63688;
  double t63689;
  double t63696;
  double t63697;
  double t63699;
  double t63664;
  double t63695;
  double t63706;
  double t63713;
  double t63718;
  double t63719;
  double t63720;
  double t63679;
  double t63681;
  double t63780;
  double t63785;
  double t63786;
  double t63789;
  double t63792;
  double t63794;
  double t63796;
  double t63797;
  double t63798;
  double t63799;
  double t63823;
  double t63831;
  double t63832;
  double t63833;
  double t63788;
  double t63795;
  double t63868;
  double t63872;
  double t63876;
  double t63885;
  double t63890;
  double t63893;
  double t63904;
  double t63953;
  double t63957;
  double t63958;
  double t63962;
  double t63963;
  double t63965;
  double t63966;
  double t63968;
  double t63969;
  double t63972;
  double t63952;
  double t63984;
  double t63987;
  t502 = Cos(var1[3]);
  t757 = Sin(var1[2]);
  t1286 = t502*t757;
  t1845 = Cos(var1[2]);
  t2287 = Sin(var1[3]);
  t2578 = -1.*t1845*t2287;
  t2845 = t1286 + t2578;
  t4537 = t1845*t502;
  t4736 = t757*t2287;
  t4818 = t4537 + t4736;
  t4983 = Cos(var1[4]);
  t5030 = Sin(var1[4]);
  t5121 = t502*t4983;
  t5156 = -1.*t2287*t5030;
  t5162 = t5121 + t5156;
  t5163 = t1845*t5162;
  t5461 = t4983*t2287;
  t5481 = t502*t5030;
  t5529 = t5461 + t5481;
  t5020 = -1.*t4983*t2287;
  t5056 = -1.*t502*t5030;
  t5113 = t5020 + t5056;
  t5114 = -1.*t757*t5113;
  t5454 = t5114 + t5163;
  t7074 = t1845*t5113;
  t7077 = t757*t5162;
  t7343 = t7074 + t7077;
  t7908 = -1.*t502*t4983;
  t8100 = t2287*t5030;
  t8129 = t7908 + t8100;
  t22197 = Cos(var1[5]);
  t22363 = Sin(var1[5]);
  t22362 = -1.*t22197*t5030;
  t22497 = -1.*t4983*t22363;
  t22549 = t22362 + t22497;
  t22757 = t4983*t22197;
  t22811 = -1.*t5030*t22363;
  t24293 = t22757 + t22811;
  t24765 = t502*t22549;
  t24821 = -1.*t2287*t24293;
  t24990 = t24765 + t24821;
  t25355 = t1845*t24990;
  t26081 = t2287*t22549;
  t26134 = t502*t24293;
  t26524 = t26081 + t26134;
  t22658 = -1.*t2287*t22549;
  t24359 = -1.*t502*t24293;
  t24658 = t22658 + t24359;
  t27638 = t22197*t5030;
  t27653 = t4983*t22363;
  t27655 = t27638 + t27653;
  t27796 = -1.*t2287*t27655;
  t28171 = t27796 + t26134;
  t28238 = -1.*t502*t27655;
  t28427 = t28238 + t24821;
  t29653 = t1845*t28171;
  t28684 = t502*t27655;
  t28734 = t2287*t24293;
  t29307 = t28684 + t28734;
  t3697 = -1.*t502*t757;
  t3698 = t1845*t2287;
  t3725 = t3697 + t3698;
  t3958 = 6.4*t2845*t3725;
  t3994 = -1.*t1845*t502;
  t4117 = -1.*t757*t2287;
  t4337 = t3994 + t4117;
  t4820 = 6.4*t4337*t4818;
  t4946 = Power(t4818,2);
  t4947 = 6.4*t4946;
  t5659 = t757*t5529;
  t5686 = t5659 + t5163;
  t5731 = t1845*t5529;
  t6040 = -1.*t757*t5162;
  t6814 = t5731 + t6040;
  t26964 = t757*t26524;
  t26976 = t26964 + t25355;
  t27370 = t1845*t26524;
  t27430 = -1.*t757*t24990;
  t27470 = t27370 + t27430;
  t28683 = -1.*t757*t28171;
  t29316 = t1845*t29307;
  t29367 = t28683 + t29316;
  t29821 = t757*t29307;
  t29830 = t29653 + t29821;
  t33614 = -1.*t4983*t22197;
  t33800 = t5030*t22363;
  t33812 = t33614 + t33800;
  t33821 = t502*t33812;
  t33825 = t22658 + t33821;
  t34049 = t2287*t33812;
  t34080 = t24765 + t34049;
  t5719 = 13.6*t5454*t5686;
  t7502 = 13.6*t6814*t7343;
  t7870 = t757*t5113;
  t9301 = t1845*t8129;
  t12047 = t7870 + t9301;
  t12254 = 13.6*t5454*t12047;
  t12474 = -1.*t757*t8129;
  t14840 = t7074 + t12474;
  t17234 = 13.6*t7343*t14840;
  t32936 = 12.*t26976*t29367;
  t32940 = 12.*t27470*t29830;
  t33841 = -1.*t757*t33825;
  t34082 = t1845*t34080;
  t34165 = t33841 + t34082;
  t34166 = 12.*t26976*t34165;
  t35409 = t1845*t33825;
  t35411 = t757*t34080;
  t35490 = t35409 + t35411;
  t35607 = 12.*t27470*t35490;
  t24738 = -1.*t757*t24658;
  t25621 = t24738 + t25355;
  t29698 = -1.*t757*t28427;
  t29760 = t29653 + t29698;
  t42460 = 12.8*t3725*t4818;
  t31691 = -1.*t1845*t5113;
  t31776 = t31691 + t6040;
  t31023 = -1.*t757*t5529;
  t31533 = -1.*t1845*t5162;
  t31570 = t31023 + t31533;
  t32078 = -1.*t757*t26524;
  t32098 = -1.*t1845*t24990;
  t32152 = t32078 + t32098;
  t32284 = -1.*t1845*t28171;
  t32286 = -1.*t757*t29307;
  t32294 = t32284 + t32286;
  t45214 = 27.2*t5454*t6814;
  t46001 = 27.2*t5454*t14840;
  t48372 = 24.*t27470*t29367;
  t48374 = 24.*t27470*t34165;
  t48394 = -1.*t502;
  t48395 = 1. + t48394;
  t48397 = -0.15*t48395;
  t48398 = -0.15*t502;
  t48399 = -0.16*t2287;
  t48401 = t48397 + t48398 + t48399;
  t48425 = -1.*t4983;
  t48426 = 1. + t48425;
  t48427 = 0.4*t48426;
  t48565 = 0.69*t4983;
  t48593 = t48427 + t48565;
  t48658 = -0.15*t48426;
  t48694 = -0.15*t4983;
  t48728 = -0.29*t5030;
  t49121 = t48658 + t48694 + t48728;
  t49133 = -1.*t48593*t2287;
  t49135 = t502*t49121;
  t49136 = t48397 + t49133 + t49135;
  t48656 = t502*t48593;
  t48657 = 0.15*t2287;
  t49124 = t2287*t49121;
  t49131 = t48656 + t48657 + t49124;
  t49939 = -1.*t22197;
  t49941 = 1. + t49939;
  t49944 = 0.8*t49941;
  t49947 = 1.04*t22197;
  t49948 = t49944 + t49947;
  t49956 = -0.15*t49941;
  t49962 = -0.15*t22197;
  t49967 = -0.24*t22363;
  t49972 = t49956 + t49962 + t49967;
  t49935 = 0.4*t5030;
  t49954 = -1.*t49948*t5030;
  t49974 = t4983*t49972;
  t49976 = t48658 + t49935 + t49954 + t49974;
  t50388 = t4983*t49948;
  t50389 = 0.15*t5030;
  t50396 = t5030*t49972;
  t50402 = t48427 + t50388 + t50389 + t50396;
  t50939 = t502*t49976;
  t50942 = -1.*t2287*t50402;
  t50948 = t48397 + t50939 + t50942;
  t50385 = t2287*t49976;
  t50405 = t502*t50402;
  t50406 = t48657 + t50385 + t50405;
  t48403 = -1.*t502*t48401;
  t48407 = -0.16*t502*t2287;
  t48409 = t48403 + t48407;
  t48411 = 6.4*t3725*t48409;
  t48412 = Power(t502,2);
  t48414 = 0.16*t48412;
  t48416 = -1.*t48401*t2287;
  t48418 = t48414 + t48416;
  t49174 = t49136*t5113;
  t49334 = t49131*t5162;
  t49394 = t49174 + t49334;
  t49132 = -1.*t49131*t5529;
  t49137 = -1.*t49136*t5162;
  t49139 = t49132 + t49137;
  t63401 = -1.*t502*t48593;
  t63402 = -0.15*t2287;
  t63403 = -1.*t2287*t49121;
  t63404 = t63401 + t63402 + t63403;
  t63395 = 0.15*t502;
  t63398 = t63395 + t49133 + t49135;
  t50408 = t50406*t26524;
  t50981 = t50948*t24990;
  t50997 = t50408 + t50981;
  t51007 = -1.*t50948*t28171;
  t60340 = -1.*t50406*t29307;
  t63268 = t51007 + t60340;
  t63477 = -1.*t2287*t49976;
  t63478 = -1.*t502*t50402;
  t63479 = t63402 + t63477 + t63478;
  t63472 = t63395 + t50939 + t50942;
  t63451 = 13.6*t5454*t49394;
  t63393 = -1.*t49136*t5113;
  t63446 = -1.*t49131*t5162;
  t63452 = 13.6*t49139*t14840;
  t63459 = t49131*t5113;
  t63505 = -0.29*t4983*t2287;
  t63506 = -0.29*t502*t5030;
  t63507 = t63505 + t63506;
  t63509 = -0.29*t502*t4983;
  t63518 = 0.29*t2287*t5030;
  t63519 = t63509 + t63518;
  t63462 = t49136*t8129;
  t63622 = 0.15*t4983;
  t63623 = t63622 + t49935 + t49954 + t49974;
  t63626 = 0.4*t4983;
  t63627 = -1.*t4983*t49948;
  t63629 = -0.15*t5030;
  t63630 = -1.*t5030*t49972;
  t63631 = t63626 + t63627 + t63629 + t63630;
  t63649 = t502*t63623;
  t63650 = t2287*t63631;
  t63653 = t63649 + t63650;
  t63625 = -1.*t2287*t63623;
  t63632 = t502*t63631;
  t63636 = t63625 + t63632;
  t63575 = 12.*t27470*t50997;
  t63617 = -1.*t50406*t26524;
  t63647 = -1.*t50948*t24990;
  t63687 = -0.24*t22197*t5030;
  t63688 = -0.24*t4983*t22363;
  t63689 = t63687 + t63688;
  t63696 = -0.24*t4983*t22197;
  t63697 = 0.24*t5030*t22363;
  t63699 = t63696 + t63697;
  t63664 = 12.*t63268*t34165;
  t63695 = -1.*t2287*t63689;
  t63706 = t502*t63699;
  t63713 = t63695 + t63706;
  t63718 = t502*t63689;
  t63719 = t2287*t63699;
  t63720 = t63718 + t63719;
  t63679 = t50948*t33825;
  t63681 = t50406*t34080;
  t63780 = -1.*t48593*t4983;
  t63785 = t49121*t5030;
  t63786 = t63780 + t50389 + t63785;
  t63789 = t4983*t49121;
  t63792 = t48593*t5030;
  t63794 = t63622 + t63789 + t63792;
  t63796 = t50402*t27655;
  t63797 = 0.15*t24293;
  t63798 = t49976*t24293;
  t63799 = t63796 + t63797 + t63798;
  t63823 = -1.*t49976*t22549;
  t63831 = 0.15*t27655;
  t63832 = -1.*t50402*t24293;
  t63833 = t63823 + t63831 + t63832;
  t63788 = 13.6*t63786*t5454;
  t63795 = 13.6*t63794*t14840;
  t63868 = 12.*t63833*t27470;
  t63872 = 0.15*t22549;
  t63876 = t49976*t22549;
  t63885 = t50402*t24293;
  t63890 = -1.*t50402*t22549;
  t63893 = -1.*t49976*t33812;
  t63904 = 12.*t63799*t34165;
  t63953 = 0.15*t22197;
  t63957 = t22197*t49972;
  t63958 = -0.4*t22363;
  t63962 = t49948*t22363;
  t63963 = t63953 + t63957 + t63958 + t63962;
  t63965 = 0.4*t22197;
  t63966 = -1.*t22197*t49948;
  t63968 = 0.15*t22363;
  t63969 = t49972*t22363;
  t63972 = t63965 + t63966 + t63968 + t63969;
  t63952 = -3.944*t5454;
  t63984 = 12.*t63972*t27470;
  t63987 = 12.*t63963*t34165;
  p_output1[0]=var2[1]*(-0.5*(12.*Power(t27470,2) + 12.*Power(t29367,2) + 12.*t26976*t32152 + 12.*t29830*t32294 + 6.4*Power(t3725,2) + t3958 + t4820 + t4947 + 13.6*Power(t5454,2) + 13.6*t31570*t5686 + 13.6*Power(t6814,2) + 13.6*t31776*t7343)*var2[2] - 0.5*(t12254 + t17234 + 12.*t25621*t26976 + 6.4*Power(t2845,2) + 12.*t29760*t29830 + t3958 + t4820 + t4947 + t5719 + t7502 + 12.*t27470*(t1845*t24658 + t24990*t757) + 12.*t29367*(t1845*t28427 + t28171*t757))*var2[3] - 0.5*(t12254 + t17234 + t32936 + t32940 + t34166 + t35607 + t5719 + t7502)*var2[4] - 0.5*(t32936 + t32940 + t34166 + t35607)*var2[5]);
  p_output1[1]=var2[1]*(-0.5*(24.*t27470*t32152 + 24.*t29367*t32294 + t42460 + 12.8*t3725*t4337 + 27.2*t31776*t5454 + 27.2*t31570*t6814)*var2[2] - 0.5*(24.*t25621*t27470 + 24.*t29367*t29760 + t42460 + t45214 + t46001 + 12.8*t2845*t4818)*var2[3] - 0.5*(t45214 + t46001 + t48372 + t48374)*var2[4] - 0.5*(t48372 + t48374)*var2[5]);
  p_output1[2]=var2[1]*(-0.5*(t48411 + 6.4*t4337*t48418 + 13.6*t31776*t49139 + 13.6*t31570*t49394 + 12.*t32294*t50997 + 12.*t32152*t63268 - 0.048*t757)*var2[2] - 0.5*(6.4*t4818*(0.16*Power(t2287,2) + t2287*t48401) + 6.4*t2845*t48409 + t48411 + 6.4*t4818*t48418 + 12.*t29760*t50997 + 12.*t25621*t63268 + 13.6*t5454*(t63393 - 1.*t5529*t63398 - 1.*t5162*t63404 + t63446) + t63451 + t63452 + 12.*t29367*(t24990*t50406 + t24658*t50948 + t26524*t63472 + t24990*t63479) + 12.*t27470*(-1.*t28171*t50406 - 1.*t28427*t50948 - 1.*t29307*t63472 - 1.*t28171*t63479) + 13.6*(t5162*t63398 + t5113*t63404 + t63459 + t63462)*t6814)*var2[3] - 0.5*(t63451 + t63452 + 13.6*t5454*(t63393 + t63446 - 1.*t5529*t63507 - 1.*t5162*t63519) + t63575 + 12.*t27470*(t63617 - 1.*t28171*t63636 + t63647 - 1.*t29307*t63653) + t63664 + 12.*t29367*(t24990*t63636 + t26524*t63653 + t63679 + t63681) + 13.6*(t63459 + t63462 + t5162*t63507 + t5113*t63519)*t6814)*var2[4] - 0.5*(t63575 + t63664 + 12.*t29367*(t63679 + t63681 + t24990*t63713 + t26524*t63720) + 12.*t27470*(t63617 + t63647 - 1.*t28171*t63713 - 1.*t29307*t63720))*var2[5]);
  p_output1[3]=var2[1]*(-0.5*(-1.024*t4337 + 13.6*t31570*t63786 + 13.6*t31776*t63794 + 12.*t32152*t63799 + 12.*t32294*t63833)*var2[2] - 0.5*(-1.024*t4818 + t63788 + t63795 + 12.*t25621*t63799 + 12.*t29760*t63833)*var2[3] - 0.5*(13.6*t5454*(t48593*t4983 - 0.29*Power(t4983,2) - 1.*t49121*t5030 - 0.29*Power(t5030,2) + t63629) + t63788 + t63795 + t63868 + 12.*t27470*(t27655*t63623 + t24293*t63631 + t63872 + t63876 + t63885) + 12.*t29367*(-1.*t24293*t63623 - 1.*t22549*t63631 + t63797 + t63890 + t63893) + t63904 + 13.6*t63794*t6814)*var2[4] - 0.5*(t63868 + 12.*t27470*(t27655*t63689 + t24293*t63699 + t63872 + t63876 + t63885) + 12.*t29367*(-1.*t24293*t63689 - 1.*t22549*t63699 + t63797 + t63890 + t63893) + t63904)*var2[5]);
  p_output1[4]=var2[1]*(-0.5*(-3.944*t31570 + 12.*t32152*t63963 + 12.*t32294*t63972)*var2[2] - 0.5*(t63952 + 12.*t25621*t63963 + 12.*t29760*t63972)*var2[3] - 0.5*(t63952 + t63984 + t63987)*var2[4] - 0.5*(12.*t27470*(-0.4*t22197 - 0.24*Power(t22197,2) - 0.15*t22363 - 0.24*Power(t22363,2) + t22197*t49948 - 1.*t22363*t49972) + 12.*t29367*t63963 + t63984 + t63987)*var2[5]);
  p_output1[5]=var2[1]*(1.44*t32294*var2[2] + 1.44*t29760*var2[3] + 1.44*t27470*var2[4] + 1.44*t27470*var2[5]);
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

#include "Ce1_vec2_acrobot.hh"

namespace SymFunction
{

void Ce1_vec2_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
