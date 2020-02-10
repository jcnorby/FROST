/*
 * Automatically Generated from Mathematica.
 * Thu 6 Feb 2020 16:07:29 GMT-05:00
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
  double t931;
  double t7090;
  double t9892;
  double t10889;
  double t11581;
  double t985;
  double t2068;
  double t20925;
  double t20955;
  double t21207;
  double t21252;
  double t14757;
  double t15757;
  double t15802;
  double t16603;
  double t21404;
  double t22383;
  double t22681;
  double t24826;
  double t25919;
  double t25945;
  double t26379;
  double t26435;
  double t18664;
  double t19601;
  double t20390;
  double t30324;
  double t30375;
  double t30400;
  double t32996;
  double t33062;
  double t33266;
  double t32822;
  double t33280;
  double t33328;
  double t33405;
  double t33158;
  double t33160;
  double t33183;
  double t33190;
  double t33498;
  double t33551;
  double t33580;
  double t33794;
  double t33862;
  double t33872;
  double t33876;
  double t33926;
  double t33244;
  double t33253;
  double t33254;
  double t34010;
  double t34037;
  double t34040;
  double t35131;
  double t35155;
  double t35333;
  double t35055;
  double t35355;
  double t35362;
  double t35393;
  double t35175;
  double t35177;
  double t35184;
  double t35232;
  double t35400;
  double t35403;
  double t35421;
  double t35428;
  double t35446;
  double t35542;
  double t35610;
  double t35693;
  double t35266;
  double t35270;
  double t35324;
  double t35854;
  double t35856;
  double t35940;
  double t37291;
  double t37340;
  double t37600;
  double t37213;
  double t37618;
  double t37622;
  double t37627;
  double t37372;
  double t37383;
  double t37385;
  double t37477;
  double t37637;
  double t37638;
  double t37645;
  double t37647;
  double t37661;
  double t37667;
  double t37668;
  double t37673;
  double t37528;
  double t37536;
  double t37553;
  double t37691;
  double t37724;
  double t37767;
  double t2973;
  double t3242;
  double t8855;
  double t9571;
  double t38152;
  double t38039;
  double t16132;
  double t17440;
  double t17664;
  double t43805;
  double t43975;
  double t43982;
  double t21463;
  double t38040;
  double t38200;
  double t38201;
  double t44225;
  double t44235;
  double t44245;
  double t26636;
  double t27879;
  double t29112;
  double t44252;
  double t44314;
  double t44315;
  double t44599;
  double t44994;
  double t45352;
  double t44112;
  double t44180;
  double t44188;
  double t45667;
  double t45687;
  double t45689;
  double t32892;
  double t32912;
  double t33066;
  double t33109;
  double t33187;
  double t33218;
  double t33227;
  double t46520;
  double t46584;
  double t46589;
  double t33870;
  double t33871;
  double t33951;
  double t33984;
  double t33997;
  double t46598;
  double t46688;
  double t46699;
  double t46702;
  double t46703;
  double t46710;
  double t46304;
  double t46317;
  double t46337;
  double t46800;
  double t46877;
  double t46900;
  double t35071;
  double t35106;
  double t35161;
  double t35166;
  double t35205;
  double t35235;
  double t35236;
  double t48621;
  double t48697;
  double t48739;
  double t35464;
  double t35767;
  double t35780;
  double t35796;
  double t48829;
  double t48863;
  double t48930;
  double t49377;
  double t49385;
  double t49395;
  double t48119;
  double t48132;
  double t48185;
  double t49737;
  double t49947;
  double t49991;
  double t37234;
  double t37260;
  double t37341;
  double t37364;
  double t37395;
  double t37506;
  double t37507;
  double t50548;
  double t50550;
  double t50551;
  double t37662;
  double t37666;
  double t37679;
  double t37687;
  double t37690;
  double t50722;
  double t50757;
  double t50828;
  double t50850;
  double t50898;
  double t50902;
  double t50226;
  double t50406;
  double t50546;
  double t50949;
  double t50982;
  double t51169;
  double t51827;
  double t51835;
  double t51839;
  double t51810;
  double t51816;
  double t51819;
  double t52158;
  double t52290;
  double t52292;
  double t52459;
  double t52792;
  double t52827;
  double t52862;
  double t52884;
  double t52888;
  double t52026;
  double t52028;
  double t52124;
  double t52927;
  double t52933;
  double t52954;
  double t53468;
  double t53476;
  double t53557;
  double t53627;
  double t53631;
  double t53636;
  double t53663;
  double t53674;
  double t53730;
  double t53271;
  double t53288;
  double t53433;
  double t53747;
  double t53780;
  double t53914;
  double t54214;
  double t54222;
  double t54223;
  double t54229;
  double t54231;
  double t54236;
  double t54243;
  double t54255;
  double t54264;
  double t54182;
  double t54188;
  double t54192;
  double t54293;
  double t54324;
  double t54329;
  double t54615;
  double t54636;
  double t54648;
  double t54661;
  double t54728;
  double t54729;
  double t54745;
  double t54781;
  double t54795;
  double t54493;
  double t54494;
  double t54496;
  double t54806;
  double t54811;
  double t54825;
  t931 = Cos(var1[4]);
  t7090 = Cos(var1[6]);
  t9892 = Sin(var1[5]);
  t10889 = Sin(var1[4]);
  t11581 = Sin(var1[6]);
  t985 = Cos(var1[5]);
  t2068 = Cos(var1[7]);
  t20925 = t7090*t10889;
  t20955 = t931*t9892*t11581;
  t21207 = t20925 + t20955;
  t21252 = Sin(var1[7]);
  t14757 = Cos(var1[9]);
  t15757 = -1.*t14757;
  t15802 = 1. + t15757;
  t16603 = Sin(var1[9]);
  t21404 = Cos(var1[8]);
  t22383 = t931*t985*t2068;
  t22681 = t21207*t21252;
  t24826 = t22383 + t22681;
  t25919 = t2068*t21207;
  t25945 = -1.*t931*t985*t21252;
  t26379 = t25919 + t25945;
  t26435 = Sin(var1[8]);
  t18664 = -1.*t931*t7090*t9892;
  t19601 = t10889*t11581;
  t20390 = t18664 + t19601;
  t30324 = t21404*t24826;
  t30375 = -1.*t26379*t26435;
  t30400 = t30324 + t30375;
  t32996 = Sin(var1[10]);
  t33062 = Cos(var1[10]);
  t33266 = Sin(var1[11]);
  t32822 = Cos(var1[11]);
  t33280 = t33062*t10889;
  t33328 = t931*t32996*t9892;
  t33405 = t33280 + t33328;
  t33158 = Cos(var1[13]);
  t33160 = -1.*t33158;
  t33183 = 1. + t33160;
  t33190 = Sin(var1[13]);
  t33498 = Sin(var1[12]);
  t33551 = -1.*t931*t985*t33266;
  t33580 = t32822*t33405;
  t33794 = t33551 + t33580;
  t33862 = Cos(var1[12]);
  t33872 = t32822*t931*t985;
  t33876 = t33266*t33405;
  t33926 = t33872 + t33876;
  t33244 = t32996*t10889;
  t33253 = -1.*t33062*t931*t9892;
  t33254 = t33244 + t33253;
  t34010 = -1.*t33498*t33794;
  t34037 = t33862*t33926;
  t34040 = t34010 + t34037;
  t35131 = Sin(var1[14]);
  t35155 = Cos(var1[14]);
  t35333 = Sin(var1[15]);
  t35055 = Cos(var1[15]);
  t35355 = t35155*t10889;
  t35362 = t931*t35131*t9892;
  t35393 = t35355 + t35362;
  t35175 = Cos(var1[17]);
  t35177 = -1.*t35175;
  t35184 = 1. + t35177;
  t35232 = Sin(var1[17]);
  t35400 = Sin(var1[16]);
  t35403 = -1.*t931*t985*t35333;
  t35421 = t35055*t35393;
  t35428 = t35403 + t35421;
  t35446 = Cos(var1[16]);
  t35542 = t35055*t931*t985;
  t35610 = t35333*t35393;
  t35693 = t35542 + t35610;
  t35266 = t35131*t10889;
  t35270 = -1.*t35155*t931*t9892;
  t35324 = t35266 + t35270;
  t35854 = -1.*t35400*t35428;
  t35856 = t35446*t35693;
  t35940 = t35854 + t35856;
  t37291 = Sin(var1[18]);
  t37340 = Cos(var1[18]);
  t37600 = Sin(var1[19]);
  t37213 = Cos(var1[19]);
  t37618 = t37340*t10889;
  t37622 = t931*t37291*t9892;
  t37627 = t37618 + t37622;
  t37372 = Cos(var1[21]);
  t37383 = -1.*t37372;
  t37385 = 1. + t37383;
  t37477 = Sin(var1[21]);
  t37637 = Sin(var1[20]);
  t37638 = -1.*t931*t985*t37600;
  t37645 = t37213*t37627;
  t37647 = t37638 + t37645;
  t37661 = Cos(var1[20]);
  t37667 = t37213*t931*t985;
  t37668 = t37600*t37627;
  t37673 = t37667 + t37668;
  t37528 = t37291*t10889;
  t37536 = -1.*t37340*t931*t9892;
  t37553 = t37528 + t37536;
  t37691 = -1.*t37637*t37647;
  t37724 = t37661*t37673;
  t37767 = t37691 + t37724;
  t2973 = -1.*t2068;
  t3242 = 1. + t2973;
  t8855 = -1.*t7090;
  t9571 = 1. + t8855;
  t38152 = Cos(var1[3]);
  t38039 = Sin(var1[3]);
  t16132 = 0.196*t15802;
  t17440 = -0.3*t16603;
  t17664 = t16132 + t17440;
  t43805 = t38152*t985;
  t43975 = -1.*t38039*t10889*t9892;
  t43982 = t43805 + t43975;
  t21463 = -1. + t21404;
  t38040 = t985*t38039*t10889;
  t38200 = t38152*t9892;
  t38201 = t38040 + t38200;
  t44225 = -1.*t931*t7090*t38039;
  t44235 = -1.*t43982*t11581;
  t44245 = t44225 + t44235;
  t26636 = 0.3*t15802;
  t27879 = 0.196*t16603;
  t29112 = t26636 + t27879;
  t44252 = t2068*t38201;
  t44314 = t44245*t21252;
  t44315 = t44252 + t44314;
  t44599 = t2068*t44245;
  t44994 = -1.*t38201*t21252;
  t45352 = t44599 + t44994;
  t44112 = t7090*t43982;
  t44180 = -1.*t931*t38039*t11581;
  t44188 = t44112 + t44180;
  t45667 = t21404*t44315;
  t45687 = -1.*t45352*t26435;
  t45689 = t45667 + t45687;
  t32892 = -1.*t32822;
  t32912 = 1. + t32892;
  t33066 = -1.*t33062;
  t33109 = 1. + t33066;
  t33187 = 0.196*t33183;
  t33218 = 0.3*t33190;
  t33227 = t33187 + t33218;
  t46520 = -1.*t33062*t931*t38039;
  t46584 = -1.*t32996*t43982;
  t46589 = t46520 + t46584;
  t33870 = -1.*t33862;
  t33871 = 1. + t33870;
  t33951 = -0.3*t33183;
  t33984 = 0.196*t33190;
  t33997 = t33951 + t33984;
  t46598 = -1.*t33266*t38201;
  t46688 = t32822*t46589;
  t46699 = t46598 + t46688;
  t46702 = t32822*t38201;
  t46703 = t33266*t46589;
  t46710 = t46702 + t46703;
  t46304 = -1.*t931*t32996*t38039;
  t46317 = t33062*t43982;
  t46337 = t46304 + t46317;
  t46800 = -1.*t33498*t46699;
  t46877 = t33862*t46710;
  t46900 = t46800 + t46877;
  t35071 = -1.*t35055;
  t35106 = 1. + t35071;
  t35161 = -1.*t35155;
  t35166 = 1. + t35161;
  t35205 = -0.196*t35184;
  t35235 = -0.3*t35232;
  t35236 = t35205 + t35235;
  t48621 = -1.*t35155*t931*t38039;
  t48697 = -1.*t35131*t43982;
  t48739 = t48621 + t48697;
  t35464 = -1. + t35446;
  t35767 = 0.3*t35184;
  t35780 = -0.196*t35232;
  t35796 = t35767 + t35780;
  t48829 = -1.*t35333*t38201;
  t48863 = t35055*t48739;
  t48930 = t48829 + t48863;
  t49377 = t35055*t38201;
  t49385 = t35333*t48739;
  t49395 = t49377 + t49385;
  t48119 = -1.*t931*t35131*t38039;
  t48132 = t35155*t43982;
  t48185 = t48119 + t48132;
  t49737 = -1.*t35400*t48930;
  t49947 = t35446*t49395;
  t49991 = t49737 + t49947;
  t37234 = -1.*t37213;
  t37260 = 1. + t37234;
  t37341 = -1.*t37340;
  t37364 = 1. + t37341;
  t37395 = -0.196*t37385;
  t37506 = 0.3*t37477;
  t37507 = t37395 + t37506;
  t50548 = -1.*t37340*t931*t38039;
  t50550 = -1.*t37291*t43982;
  t50551 = t50548 + t50550;
  t37662 = -1.*t37661;
  t37666 = 1. + t37662;
  t37679 = -0.3*t37385;
  t37687 = -0.196*t37477;
  t37690 = t37679 + t37687;
  t50722 = -1.*t37600*t38201;
  t50757 = t37213*t50551;
  t50828 = t50722 + t50757;
  t50850 = t37213*t38201;
  t50898 = t37600*t50551;
  t50902 = t50850 + t50898;
  t50226 = -1.*t931*t37291*t38039;
  t50406 = t37340*t43982;
  t50546 = t50226 + t50406;
  t50949 = -1.*t37637*t50828;
  t50982 = t37661*t50902;
  t51169 = t50949 + t50982;
  t51827 = t985*t38039;
  t51835 = t38152*t10889*t9892;
  t51839 = t51827 + t51835;
  t51810 = -1.*t38152*t985*t10889;
  t51816 = t38039*t9892;
  t51819 = t51810 + t51816;
  t52158 = t38152*t931*t7090;
  t52290 = -1.*t51839*t11581;
  t52292 = t52158 + t52290;
  t52459 = t2068*t51819;
  t52792 = t52292*t21252;
  t52827 = t52459 + t52792;
  t52862 = t2068*t52292;
  t52884 = -1.*t51819*t21252;
  t52888 = t52862 + t52884;
  t52026 = t7090*t51839;
  t52028 = t38152*t931*t11581;
  t52124 = t52026 + t52028;
  t52927 = t21404*t52827;
  t52933 = -1.*t52888*t26435;
  t52954 = t52927 + t52933;
  t53468 = t33062*t38152*t931;
  t53476 = -1.*t32996*t51839;
  t53557 = t53468 + t53476;
  t53627 = -1.*t33266*t51819;
  t53631 = t32822*t53557;
  t53636 = t53627 + t53631;
  t53663 = t32822*t51819;
  t53674 = t33266*t53557;
  t53730 = t53663 + t53674;
  t53271 = t38152*t931*t32996;
  t53288 = t33062*t51839;
  t53433 = t53271 + t53288;
  t53747 = -1.*t33498*t53636;
  t53780 = t33862*t53730;
  t53914 = t53747 + t53780;
  t54214 = t35155*t38152*t931;
  t54222 = -1.*t35131*t51839;
  t54223 = t54214 + t54222;
  t54229 = -1.*t35333*t51819;
  t54231 = t35055*t54223;
  t54236 = t54229 + t54231;
  t54243 = t35055*t51819;
  t54255 = t35333*t54223;
  t54264 = t54243 + t54255;
  t54182 = t38152*t931*t35131;
  t54188 = t35155*t51839;
  t54192 = t54182 + t54188;
  t54293 = -1.*t35400*t54236;
  t54324 = t35446*t54264;
  t54329 = t54293 + t54324;
  t54615 = t37340*t38152*t931;
  t54636 = -1.*t37291*t51839;
  t54648 = t54615 + t54636;
  t54661 = -1.*t37600*t51819;
  t54728 = t37213*t54648;
  t54729 = t54661 + t54728;
  t54745 = t37213*t51819;
  t54781 = t37600*t54648;
  t54795 = t54745 + t54781;
  t54493 = t38152*t931*t37291;
  t54494 = t37340*t51839;
  t54496 = t54493 + t54494;
  t54806 = -1.*t37637*t54729;
  t54811 = t37661*t54795;
  t54825 = t54806 + t54811;
  p_output1[0]=-0.128*t10889*t11581 + t17664*t20390 - 0.3*t21207*t21252 + 0.04*t21463*t24826 - 0.04*t26379*t26435 - 0.0461*(t21404*t26379 + t24826*t26435) + t29112*t30400 + 0.3*(t16603*t20390 + t14757*t30400) + 0.196*(t14757*t20390 - 1.*t16603*t30400) + 0.3*t3242*t931*t985 - 0.128*t931*t9571*t9892 + var1[0];
  p_output1[1]=-0.128*t10889*t32996 + t33227*t33254 + 0.3*t33266*t33405 - 0.64*t33498*t33794 - 0.64*t33871*t33926 - 0.0461*(t33794*t33862 + t33498*t33926) + t33997*t34040 - 0.3*(t33190*t33254 + t33158*t34040) + 0.196*(t33158*t33254 - 1.*t33190*t34040) - 0.3*t32912*t931*t985 - 0.128*t33109*t931*t9892 + var1[0];
  p_output1[2]=0.128*t10889*t35131 + t35236*t35324 - 0.3*t35333*t35393 - 0.04*t35400*t35428 + 0.04*t35464*t35693 - 0.0461*(t35428*t35446 + t35400*t35693) + t35796*t35940 + 0.3*(t35232*t35324 + t35175*t35940) - 0.196*(t35175*t35324 - 1.*t35232*t35940) + 0.3*t35106*t931*t985 + 0.128*t35166*t931*t9892 + var1[0];
  p_output1[3]=0.128*t10889*t37291 + t37507*t37553 + 0.3*t37600*t37627 - 0.64*t37637*t37647 - 0.64*t37666*t37673 - 0.0461*(t37647*t37661 + t37637*t37673) + t37690*t37767 - 0.3*(t37477*t37553 + t37372*t37767) - 0.196*(t37372*t37553 - 1.*t37477*t37767) - 0.3*t37260*t931*t985 + 0.128*t37364*t931*t9892 + var1[0];
  p_output1[4]=0.3*t3242*t38201 + t17664*t44188 - 0.3*t21252*t44245 + 0.04*t21463*t44315 - 0.04*t26435*t45352 - 0.0461*(t26435*t44315 + t21404*t45352) + t29112*t45689 + 0.3*(t16603*t44188 + t14757*t45689) + 0.196*(t14757*t44188 - 1.*t16603*t45689) + 0.128*t11581*t38039*t931 + 0.128*t43982*t9571 + var1[1];
  p_output1[5]=-0.3*t32912*t38201 + 0.128*t33109*t43982 + t33227*t46337 + 0.3*t33266*t46589 - 0.64*t33498*t46699 - 0.64*t33871*t46710 - 0.0461*(t33862*t46699 + t33498*t46710) + t33997*t46900 - 0.3*(t33190*t46337 + t33158*t46900) + 0.196*(t33158*t46337 - 1.*t33190*t46900) + 0.128*t32996*t38039*t931 + var1[1];
  p_output1[6]=0.3*t35106*t38201 - 0.128*t35166*t43982 + t35236*t48185 - 0.3*t35333*t48739 - 0.04*t35400*t48930 + 0.04*t35464*t49395 - 0.0461*(t35446*t48930 + t35400*t49395) + t35796*t49991 + 0.3*(t35232*t48185 + t35175*t49991) - 0.196*(t35175*t48185 - 1.*t35232*t49991) - 0.128*t35131*t38039*t931 + var1[1];
  p_output1[7]=-0.3*t37260*t38201 - 0.128*t37364*t43982 + t37507*t50546 + 0.3*t37600*t50551 - 0.64*t37637*t50828 - 0.64*t37666*t50902 - 0.0461*(t37661*t50828 + t37637*t50902) + t37690*t51169 - 0.3*(t37477*t50546 + t37372*t51169) - 0.196*(t37372*t50546 - 1.*t37477*t51169) - 0.128*t37291*t38039*t931 + var1[1];
  p_output1[8]=0.3*t3242*t51819 + t17664*t52124 - 0.3*t21252*t52292 + 0.04*t21463*t52827 - 0.04*t26435*t52888 - 0.0461*(t26435*t52827 + t21404*t52888) + t29112*t52954 + 0.3*(t16603*t52124 + t14757*t52954) + 0.196*(t14757*t52124 - 1.*t16603*t52954) - 0.128*t11581*t38152*t931 + 0.128*t51839*t9571 + var1[2];
  p_output1[9]=-0.3*t32912*t51819 + 0.128*t33109*t51839 + t33227*t53433 + 0.3*t33266*t53557 - 0.64*t33498*t53636 - 0.64*t33871*t53730 - 0.0461*(t33862*t53636 + t33498*t53730) + t33997*t53914 - 0.3*(t33190*t53433 + t33158*t53914) + 0.196*(t33158*t53433 - 1.*t33190*t53914) - 0.128*t32996*t38152*t931 + var1[2];
  p_output1[10]=0.3*t35106*t51819 - 0.128*t35166*t51839 + t35236*t54192 - 0.3*t35333*t54223 - 0.04*t35400*t54236 + 0.04*t35464*t54264 - 0.0461*(t35446*t54236 + t35400*t54264) + t35796*t54329 + 0.3*(t35232*t54192 + t35175*t54329) - 0.196*(t35175*t54192 - 1.*t35232*t54329) + 0.128*t35131*t38152*t931 + var1[2];
  p_output1[11]=-0.3*t37260*t51819 - 0.128*t37364*t51839 + t37507*t54496 + 0.3*t37600*t54648 - 0.64*t37637*t54729 - 0.64*t37666*t54795 - 0.0461*(t37661*t54729 + t37637*t54795) + t37690*t54825 - 0.3*(t37477*t54496 + t37372*t54825) - 0.196*(t37372*t54496 - 1.*t37477*t54825) + 0.128*t37291*t38152*t931 + var1[2];
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
