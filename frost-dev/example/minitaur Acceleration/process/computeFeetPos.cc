/*
 * Automatically Generated from Mathematica.
 * Thu 13 Jun 2019 11:56:13 GMT-04:00
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
  double t497;
  double t1436;
  double t1599;
  double t2647;
  double t1144;
  double t3132;
  double t3197;
  double t3203;
  double t3689;
  double t3706;
  double t3748;
  double t3853;
  double t3917;
  double t3952;
  double t3955;
  double t3274;
  double t3309;
  double t3433;
  double t3483;
  double t3882;
  double t4350;
  double t4351;
  double t4359;
  double t4363;
  double t4424;
  double t4428;
  double t5210;
  double t4459;
  double t4954;
  double t4994;
  double t5102;
  double t5103;
  double t5104;
  double t5121;
  double t5217;
  double t3611;
  double t4601;
  double t3826;
  double t4880;
  double t4881;
  double t5343;
  double t5130;
  double t5863;
  double t5866;
  double t5892;
  double t6313;
  double t6315;
  double t6321;
  double t6338;
  double t6430;
  double t6141;
  double t6507;
  double t6519;
  double t7180;
  double t6436;
  double t6459;
  double t7353;
  double t6590;
  double t6592;
  double t6611;
  double t6633;
  double t6713;
  double t6760;
  double t7798;
  double t7802;
  double t7813;
  double t7815;
  double t8010;
  double t8015;
  double t8017;
  double t8094;
  double t8115;
  double t8163;
  double t8225;
  double t8285;
  double t8287;
  double t8278;
  double t7525;
  double t8248;
  double t8314;
  double t9334;
  double t9335;
  double t9340;
  double t9407;
  double t9477;
  double t9506;
  double t9533;
  double t9548;
  double t9344;
  double t9672;
  double t9690;
  double t9894;
  double t9558;
  double t9592;
  double t9900;
  double t9838;
  double t9839;
  double t9843;
  double t9872;
  double t9873;
  double t9876;
  double t10071;
  double t10086;
  double t10088;
  double t10140;
  double t10209;
  double t10794;
  double t10946;
  double t10966;
  double t10993;
  double t11070;
  double t11896;
  double t12080;
  double t12091;
  double t11940;
  double t9903;
  double t11930;
  double t12124;
  double t12678;
  double t12690;
  double t12696;
  double t13803;
  double t13805;
  double t13806;
  double t13817;
  double t13825;
  double t13781;
  double t13910;
  double t13914;
  double t13949;
  double t13828;
  double t13868;
  double t13967;
  double t13921;
  double t13927;
  double t13928;
  double t13938;
  double t13942;
  double t13945;
  double t14011;
  double t14029;
  double t14047;
  double t14055;
  double t14088;
  double t14094;
  double t14100;
  double t14106;
  double t14111;
  double t14114;
  double t14117;
  double t14153;
  double t14226;
  double t14124;
  double t13968;
  double t14121;
  double t14274;
  double t14718;
  double t14685;
  double t14710;
  double t14719;
  double t14740;
  double t14752;
  double t14754;
  double t14768;
  double t3825;
  double t3893;
  double t3905;
  double t3983;
  double t4026;
  double t4438;
  double t4450;
  double t4621;
  double t4629;
  double t4642;
  double t14790;
  double t14795;
  double t14797;
  double t14800;
  double t5131;
  double t14804;
  double t14812;
  double t14819;
  double t14823;
  double t5321;
  double t5331;
  double t14839;
  double t14841;
  double t14845;
  double t14851;
  double t5367;
  double t5524;
  double t5552;
  double t5594;
  double t5617;
  double t5838;
  double t6068;
  double t6079;
  double t6116;
  double t6128;
  double t6290;
  double t6332;
  double t6462;
  double t6563;
  double t6569;
  double t7216;
  double t7650;
  double t7784;
  double t7785;
  double t7796;
  double t7956;
  double t7958;
  double t7986;
  double t7989;
  double t7993;
  double t15002;
  double t15006;
  double t15007;
  double t15008;
  double t8280;
  double t15028;
  double t15039;
  double t15043;
  double t15048;
  double t15064;
  double t15075;
  double t15082;
  double t15085;
  double t8645;
  double t9087;
  double t9227;
  double t9388;
  double t9511;
  double t9663;
  double t9833;
  double t9836;
  double t9898;
  double t9929;
  double t9932;
  double t9939;
  double t9942;
  double t10190;
  double t10203;
  double t10204;
  double t10205;
  double t10207;
  double t15339;
  double t15350;
  double t15352;
  double t15355;
  double t11943;
  double t15364;
  double t15365;
  double t15367;
  double t15370;
  double t15394;
  double t15410;
  double t15422;
  double t15442;
  double t12130;
  double t12202;
  double t12262;
  double t12699;
  double t12709;
  double t12800;
  double t13459;
  double t13801;
  double t13812;
  double t13885;
  double t13915;
  double t13916;
  double t13950;
  double t13971;
  double t13988;
  double t14003;
  double t14010;
  double t14060;
  double t14063;
  double t14070;
  double t14072;
  double t14076;
  double t15728;
  double t15760;
  double t15765;
  double t15769;
  double t14126;
  double t15778;
  double t15783;
  double t15784;
  double t15785;
  double t15882;
  double t15905;
  double t15914;
  double t15922;
  double t14287;
  double t14292;
  double t14297;
  double t16066;
  double t16074;
  double t16110;
  double t16129;
  double t16131;
  double t16154;
  double t16173;
  double t16176;
  double t16178;
  double t16187;
  double t16193;
  double t16200;
  double t16213;
  double t16215;
  double t16242;
  double t16251;
  double t16252;
  double t16253;
  double t16337;
  double t16338;
  double t16340;
  double t16341;
  double t16344;
  double t16346;
  double t16347;
  double t16351;
  double t16355;
  double t16368;
  double t16371;
  double t16372;
  double t16465;
  double t16466;
  double t16467;
  double t16475;
  double t16495;
  double t16502;
  double t16509;
  double t16519;
  double t16524;
  double t16526;
  double t16564;
  double t16567;
  double t16691;
  double t16693;
  double t16696;
  double t16710;
  double t16714;
  double t16717;
  double t16741;
  double t16742;
  double t16747;
  double t16750;
  double t16753;
  double t16754;
  t497 = Cos(var1[4]);
  t1436 = Cos(var1[6]);
  t1599 = -1.*t1436;
  t2647 = 1. + t1599;
  t1144 = Cos(var1[5]);
  t3132 = Sin(var1[5]);
  t3197 = Sin(var1[4]);
  t3203 = Sin(var1[6]);
  t3689 = Cos(var1[8]);
  t3706 = -1.*t3689;
  t3748 = 1. + t3706;
  t3853 = Sin(var1[8]);
  t3917 = -3.e-6*t3748;
  t3952 = 3.e-6*t3853;
  t3955 = t3917 + t3952;
  t3274 = t497*t1144*t1436;
  t3309 = -3.e-6*t497*t2647*t3132;
  t3433 = t3197*t3203;
  t3483 = t3274 + t3309 + t3433;
  t3882 = -1.*t3853;
  t4350 = 3.e-6*t497*t1144*t2647;
  t4351 = -9.e-12*t2647;
  t4359 = 1. + t4351;
  t4363 = -1.*t497*t4359*t3132;
  t4424 = -3.e-6*t3197*t3203;
  t4428 = t4350 + t4363 + t4424;
  t5210 = 3.e-6*t3748;
  t4459 = -3.e-6*t3853;
  t4954 = -1.000000000009*t2647;
  t4994 = 1. + t4954;
  t5102 = t4994*t3197;
  t5103 = -1.*t497*t1144*t3203;
  t5104 = -3.e-6*t497*t3132*t3203;
  t5121 = t5102 + t5103 + t5104;
  t5217 = t5210 + t3952;
  t3611 = 9.e-13*var1[8];
  t4601 = t3917 + t4459;
  t3826 = -9.e-12*t3748;
  t4880 = -1.000000000009*t3748;
  t4881 = 1. + t4880;
  t5343 = t5210 + t4459;
  t5130 = 9.e-12*t3748;
  t5863 = Cos(var1[10]);
  t5866 = -1.*t5863;
  t5892 = 1. + t5866;
  t6313 = Cos(var1[12]);
  t6315 = -1.*t6313;
  t6321 = 1. + t6315;
  t6338 = -3.e-6*t6321;
  t6430 = Sin(var1[12]);
  t6141 = Sin(var1[10]);
  t6507 = 3.e-6*t6430;
  t6519 = t6338 + t6507;
  t7180 = 3.e-13*var1[12];
  t6436 = -3.e-6*t6430;
  t6459 = t6338 + t6436;
  t7353 = -9.e-12*t6321;
  t6590 = 3.e-6*t5892*t497*t1144;
  t6592 = -3.e-6*t6141*t3197;
  t6611 = -9.e-12*t5892;
  t6633 = 1. + t6611;
  t6713 = -1.*t6633*t497*t3132;
  t6760 = t6590 + t6592 + t6713;
  t7798 = t5863*t497*t1144;
  t7802 = t6141*t3197;
  t7813 = -3.e-6*t5892*t497*t3132;
  t7815 = t7798 + t7802 + t7813;
  t8010 = -1.*t497*t1144*t6141;
  t8015 = -1.000000000009*t5892;
  t8017 = 1. + t8015;
  t8094 = t8017*t3197;
  t8115 = -3.e-6*t497*t6141*t3132;
  t8163 = t8010 + t8094 + t8115;
  t8225 = 3.e-6*t6321;
  t8285 = -1.000000000009*t6321;
  t8287 = 1. + t8285;
  t8278 = 9.e-12*t6321;
  t7525 = -1.*t6430;
  t8248 = t8225 + t6436;
  t8314 = t8225 + t6507;
  t9334 = Cos(var1[15]);
  t9335 = -1.*t9334;
  t9340 = 1. + t9335;
  t9407 = Cos(var1[17]);
  t9477 = -1.*t9407;
  t9506 = 1. + t9477;
  t9533 = -3.e-6*t9506;
  t9548 = Sin(var1[17]);
  t9344 = Sin(var1[15]);
  t9672 = 3.e-6*t9548;
  t9690 = t9533 + t9672;
  t9894 = 9.e-13*var1[17];
  t9558 = -3.e-6*t9548;
  t9592 = t9533 + t9558;
  t9900 = -9.e-12*t9506;
  t9838 = 3.e-6*t9340*t497*t1144;
  t9839 = -3.e-6*t9344*t3197;
  t9843 = -9.e-12*t9340;
  t9872 = 1. + t9843;
  t9873 = -1.*t9872*t497*t3132;
  t9876 = t9838 + t9839 + t9873;
  t10071 = t9334*t497*t1144;
  t10086 = t9344*t3197;
  t10088 = -3.e-6*t9340*t497*t3132;
  t10140 = t10071 + t10086 + t10088;
  t10209 = -1.*t497*t1144*t9344;
  t10794 = -1.000000000009*t9340;
  t10946 = 1. + t10794;
  t10966 = t10946*t3197;
  t10993 = -3.e-6*t497*t9344*t3132;
  t11070 = t10209 + t10966 + t10993;
  t11896 = 3.e-6*t9506;
  t12080 = -1.000000000009*t9506;
  t12091 = 1. + t12080;
  t11940 = 9.e-12*t9506;
  t9903 = -1.*t9548;
  t11930 = t11896 + t9558;
  t12124 = t11896 + t9672;
  t12678 = Cos(var1[19]);
  t12690 = -1.*t12678;
  t12696 = 1. + t12690;
  t13803 = Cos(var1[21]);
  t13805 = -1.*t13803;
  t13806 = 1. + t13805;
  t13817 = -3.e-6*t13806;
  t13825 = Sin(var1[21]);
  t13781 = Sin(var1[19]);
  t13910 = 3.e-6*t13825;
  t13914 = t13817 + t13910;
  t13949 = 3.e-13*var1[21];
  t13828 = -3.e-6*t13825;
  t13868 = t13817 + t13828;
  t13967 = -9.e-12*t13806;
  t13921 = 3.e-6*t12696*t497*t1144;
  t13927 = -3.e-6*t13781*t3197;
  t13928 = -9.e-12*t12696;
  t13938 = 1. + t13928;
  t13942 = -1.*t13938*t497*t3132;
  t13945 = t13921 + t13927 + t13942;
  t14011 = t12678*t497*t1144;
  t14029 = t13781*t3197;
  t14047 = -3.e-6*t12696*t497*t3132;
  t14055 = t14011 + t14029 + t14047;
  t14088 = -1.*t497*t1144*t13781;
  t14094 = -1.000000000009*t12696;
  t14100 = 1. + t14094;
  t14106 = t14100*t3197;
  t14111 = -3.e-6*t497*t13781*t3132;
  t14114 = t14088 + t14106 + t14111;
  t14117 = 3.e-6*t13806;
  t14153 = -1.000000000009*t13806;
  t14226 = 1. + t14153;
  t14124 = 9.e-12*t13806;
  t13968 = -1.*t13825;
  t14121 = t14117 + t13828;
  t14274 = t14117 + t13910;
  t14718 = Cos(var1[3]);
  t14685 = Sin(var1[3]);
  t14710 = t1144*t14685*t3197;
  t14719 = t14718*t3132;
  t14740 = t14710 + t14719;
  t14752 = t14718*t1144;
  t14754 = -1.*t14685*t3197*t3132;
  t14768 = t14752 + t14754;
  t3825 = 0.2000000000018*t3748;
  t3893 = t3826 + t3882;
  t3905 = 0.1*t3893;
  t3983 = -9.e-7*t3955;
  t4026 = t3611 + t3825 + t3905 + t3983;
  t4438 = 3.e-7*var1[8];
  t4450 = -1.62e-17*t3748;
  t4621 = 0.2*t4601;
  t4629 = 0.1*t3955;
  t4642 = t4438 + t4450 + t4621 + t4629;
  t14790 = t1436*t14740;
  t14795 = 3.e-6*t2647*t14768;
  t14797 = -1.*t497*t14685*t3203;
  t14800 = t14790 + t14795 + t14797;
  t5131 = t5130 + t3882;
  t14804 = 3.e-6*t2647*t14740;
  t14812 = t4359*t14768;
  t14819 = 3.e-6*t497*t14685*t3203;
  t14823 = t14804 + t14812 + t14819;
  t5321 = -1.8e-11*t3748;
  t5331 = 1. + t5321;
  t14839 = -1.*t497*t4994*t14685;
  t14841 = -1.*t14740*t3203;
  t14845 = 3.e-6*t14768*t3203;
  t14851 = t14839 + t14841 + t14845;
  t5367 = 0.1000000000009*t3748;
  t5524 = -9.e-7*t4601;
  t5552 = t3826 + t3853;
  t5594 = 0.2*t5552;
  t5617 = t3611 + t5367 + t5524 + t5594;
  t5838 = t5130 + t3853;
  t6068 = -1.8e-12*t5892;
  t6079 = -1. + t5863;
  t6116 = 0.2*t6079;
  t6128 = t6068 + t6116;
  t6290 = 1.e-7*var1[12];
  t6332 = 5.4e-18*t6321;
  t6462 = -0.200000000003*t6459;
  t6563 = 0.100000000003*t6519;
  t6569 = t6290 + t6332 + t6462 + t6563;
  t7216 = -0.2000000000048*t6321;
  t7650 = t7353 + t7525;
  t7784 = 0.100000000003*t7650;
  t7785 = 3.e-7*t6519;
  t7796 = t7180 + t7216 + t7784 + t7785;
  t7956 = 0.1000000000039*t6321;
  t7958 = 3.e-7*t6459;
  t7986 = t7353 + t6430;
  t7989 = -0.200000000003*t7986;
  t7993 = t7180 + t7956 + t7958 + t7989;
  t15002 = 3.e-6*t497*t6141*t14685;
  t15006 = 3.e-6*t5892*t14740;
  t15007 = t6633*t14768;
  t15008 = t15002 + t15006 + t15007;
  t8280 = t8278 + t6430;
  t15028 = -1.*t497*t6141*t14685;
  t15039 = t5863*t14740;
  t15043 = 3.e-6*t5892*t14768;
  t15048 = t15028 + t15039 + t15043;
  t15064 = -1.*t8017*t497*t14685;
  t15075 = -1.*t6141*t14740;
  t15082 = 3.e-6*t6141*t14768;
  t15085 = t15064 + t15075 + t15082;
  t8645 = t8278 + t7525;
  t9087 = -1.8e-11*t6321;
  t9227 = 1. + t9087;
  t9388 = 3.e-7*var1[17];
  t9511 = -1.62e-17*t9506;
  t9663 = 0.2*t9592;
  t9833 = 0.1*t9690;
  t9836 = t9388 + t9511 + t9663 + t9833;
  t9898 = 0.2000000000018*t9506;
  t9929 = t9900 + t9903;
  t9932 = 0.1*t9929;
  t9939 = -9.e-7*t9690;
  t9942 = t9894 + t9898 + t9932 + t9939;
  t10190 = 0.1000000000009*t9506;
  t10203 = -9.e-7*t9592;
  t10204 = t9900 + t9548;
  t10205 = 0.2*t10204;
  t10207 = t9894 + t10190 + t10203 + t10205;
  t15339 = 3.e-6*t497*t9344*t14685;
  t15350 = 3.e-6*t9340*t14740;
  t15352 = t9872*t14768;
  t15355 = t15339 + t15350 + t15352;
  t11943 = t11940 + t9548;
  t15364 = -1.*t497*t9344*t14685;
  t15365 = t9334*t14740;
  t15367 = 3.e-6*t9340*t14768;
  t15370 = t15364 + t15365 + t15367;
  t15394 = -1.*t10946*t497*t14685;
  t15410 = -1.*t9344*t14740;
  t15422 = 3.e-6*t9344*t14768;
  t15442 = t15394 + t15410 + t15422;
  t12130 = t11940 + t9903;
  t12202 = -1.8e-11*t9506;
  t12262 = 1. + t12202;
  t12699 = -1.8e-12*t12696;
  t12709 = -1. + t12678;
  t12800 = 0.2*t12709;
  t13459 = t12699 + t12800;
  t13801 = 1.e-7*var1[21];
  t13812 = 5.4e-18*t13806;
  t13885 = -0.200000000003*t13868;
  t13915 = 0.100000000003*t13914;
  t13916 = t13801 + t13812 + t13885 + t13915;
  t13950 = -0.2000000000048*t13806;
  t13971 = t13967 + t13968;
  t13988 = 0.100000000003*t13971;
  t14003 = 3.e-7*t13914;
  t14010 = t13949 + t13950 + t13988 + t14003;
  t14060 = 0.1000000000039*t13806;
  t14063 = 3.e-7*t13868;
  t14070 = t13967 + t13825;
  t14072 = -0.200000000003*t14070;
  t14076 = t13949 + t14060 + t14063 + t14072;
  t15728 = 3.e-6*t497*t13781*t14685;
  t15760 = 3.e-6*t12696*t14740;
  t15765 = t13938*t14768;
  t15769 = t15728 + t15760 + t15765;
  t14126 = t14124 + t13825;
  t15778 = -1.*t497*t13781*t14685;
  t15783 = t12678*t14740;
  t15784 = 3.e-6*t12696*t14768;
  t15785 = t15778 + t15783 + t15784;
  t15882 = -1.*t14100*t497*t14685;
  t15905 = -1.*t13781*t14740;
  t15914 = 3.e-6*t13781*t14768;
  t15922 = t15882 + t15905 + t15914;
  t14287 = t14124 + t13968;
  t14292 = -1.8e-11*t13806;
  t14297 = 1. + t14292;
  t16066 = -1.*t14718*t1144*t3197;
  t16074 = t14685*t3132;
  t16110 = t16066 + t16074;
  t16129 = t1144*t14685;
  t16131 = t14718*t3197*t3132;
  t16154 = t16129 + t16131;
  t16173 = t1436*t16110;
  t16176 = 3.e-6*t2647*t16154;
  t16178 = t14718*t497*t3203;
  t16187 = t16173 + t16176 + t16178;
  t16193 = 3.e-6*t2647*t16110;
  t16200 = t4359*t16154;
  t16213 = -3.e-6*t14718*t497*t3203;
  t16215 = t16193 + t16200 + t16213;
  t16242 = t14718*t497*t4994;
  t16251 = -1.*t16110*t3203;
  t16252 = 3.e-6*t16154*t3203;
  t16253 = t16242 + t16251 + t16252;
  t16337 = -3.e-6*t14718*t497*t6141;
  t16338 = 3.e-6*t5892*t16110;
  t16340 = t6633*t16154;
  t16341 = t16337 + t16338 + t16340;
  t16344 = t14718*t497*t6141;
  t16346 = t5863*t16110;
  t16347 = 3.e-6*t5892*t16154;
  t16351 = t16344 + t16346 + t16347;
  t16355 = t8017*t14718*t497;
  t16368 = -1.*t6141*t16110;
  t16371 = 3.e-6*t6141*t16154;
  t16372 = t16355 + t16368 + t16371;
  t16465 = -3.e-6*t14718*t497*t9344;
  t16466 = 3.e-6*t9340*t16110;
  t16467 = t9872*t16154;
  t16475 = t16465 + t16466 + t16467;
  t16495 = t14718*t497*t9344;
  t16502 = t9334*t16110;
  t16509 = 3.e-6*t9340*t16154;
  t16519 = t16495 + t16502 + t16509;
  t16524 = t10946*t14718*t497;
  t16526 = -1.*t9344*t16110;
  t16564 = 3.e-6*t9344*t16154;
  t16567 = t16524 + t16526 + t16564;
  t16691 = -3.e-6*t14718*t497*t13781;
  t16693 = 3.e-6*t12696*t16110;
  t16696 = t13938*t16154;
  t16710 = t16691 + t16693 + t16696;
  t16714 = t14718*t497*t13781;
  t16717 = t12678*t16110;
  t16741 = 3.e-6*t12696*t16154;
  t16742 = t16714 + t16717 + t16741;
  t16747 = t14100*t14718*t497;
  t16750 = -1.*t13781*t16110;
  t16753 = 3.e-6*t13781*t16154;
  t16754 = t16747 + t16750 + t16753;
  p_output1[0]=-0.2000000000018*t3197*t3203 + t3483*t4026 + t4428*t4642 + 0.2000000000018*t1144*t2647*t497 + 6.000000000054e-7*t2647*t3132*t497 + 0.2*(t3483*t4881 + t5121*t5131 + t4428*t5217) + 0.125001*(t5121*t5217 + t4428*t5331 + t3483*t5343) + t5121*t5617 - 0.14*(t4881*t5121 + t4428*t5343 + t3483*t5838) + var1[0];
  p_output1[1]=-6.000000000054e-7*t3132*t497*t5892 + t1144*t497*t6128 + 0.2000000000018*t3197*t6141 + t6569*t6760 + t7796*t7815 + t7993*t8163 - 0.14*(t6760*t8248 + t7815*t8280 + t8163*t8287) + 0.2*(-1.*t7815*t8287 - 1.*t6760*t8314 - 1.*t8163*t8645) + 0.125001*(t7815*t8248 + t8163*t8314 + t6760*t9227) + var1[0];
  p_output1[2]=t10207*t11070 + 0.2000000000018*t1144*t497*t9340 + 6.000000000054e-7*t3132*t497*t9340 - 0.2000000000018*t3197*t9344 + t9836*t9876 - 0.14*(t10140*t11943 + t11070*t12091 + t11930*t9876) + 0.2*(t10140*t12091 + t11070*t12130 + t12124*t9876) - 0.124999*(t10140*t11930 + t11070*t12124 + t12262*t9876) + t10140*t9942 + var1[0];
  p_output1[3]=t13916*t13945 + t14010*t14055 + t14076*t14114 - 0.14*(t13945*t14121 + t14055*t14126 + t14114*t14226) + 0.2*(-1.*t14055*t14226 - 1.*t13945*t14274 - 1.*t14114*t14287) - 0.124999*(t14055*t14121 + t14114*t14274 + t13945*t14297) + 0.2000000000018*t13781*t3197 + t1144*t13459*t497 - 6.000000000054e-7*t12696*t3132*t497 + var1[0];
  p_output1[4]=0.2000000000018*t14740*t2647 - 6.000000000054e-7*t14768*t2647 + t14800*t4026 + t14823*t4642 + 0.2000000000018*t14685*t3203*t497 + 0.2*(t14800*t4881 + t14851*t5131 + t14823*t5217) + 0.125001*(t14851*t5217 + t14823*t5331 + t14800*t5343) + t14851*t5617 - 0.14*(t14851*t4881 + t14823*t5343 + t14800*t5838) + var1[1];
  p_output1[5]=6.000000000054e-7*t14768*t5892 + t14740*t6128 - 0.2000000000018*t14685*t497*t6141 + t15008*t6569 + t15048*t7796 + t15085*t7993 - 0.14*(t15008*t8248 + t15048*t8280 + t15085*t8287) + 0.2*(-1.*t15048*t8287 - 1.*t15008*t8314 - 1.*t15085*t8645) + 0.125001*(t15048*t8248 + t15085*t8314 + t15008*t9227) + var1[1];
  p_output1[6]=t10207*t15442 - 0.14*(t11930*t15355 + t11943*t15370 + t12091*t15442) - 0.124999*(t12262*t15355 + t11930*t15370 + t12124*t15442) + 0.2*(t12124*t15355 + t12091*t15370 + t12130*t15442) + 0.2000000000018*t14740*t9340 - 6.000000000054e-7*t14768*t9340 + 0.2000000000018*t14685*t497*t9344 + t15355*t9836 + t15370*t9942 + var1[1];
  p_output1[7]=t13459*t14740 + 6.000000000054e-7*t12696*t14768 + t13916*t15769 + t14010*t15785 + t14076*t15922 - 0.14*(t14121*t15769 + t14126*t15785 + t14226*t15922) - 0.124999*(t14297*t15769 + t14121*t15785 + t14274*t15922) + 0.2*(-1.*t14274*t15769 - 1.*t14226*t15785 - 1.*t14287*t15922) - 0.2000000000018*t13781*t14685*t497 + var1[1];
  p_output1[8]=0.2000000000018*t16110*t2647 - 6.000000000054e-7*t16154*t2647 + t16187*t4026 + t16215*t4642 - 0.2000000000018*t14718*t3203*t497 + 0.2*(t16187*t4881 + t16253*t5131 + t16215*t5217) + 0.125001*(t16253*t5217 + t16215*t5331 + t16187*t5343) + t16253*t5617 - 0.14*(t16253*t4881 + t16215*t5343 + t16187*t5838) + var1[2];
  p_output1[9]=6.000000000054e-7*t16154*t5892 + t16110*t6128 + 0.2000000000018*t14718*t497*t6141 + t16341*t6569 + t16351*t7796 + t16372*t7993 - 0.14*(t16341*t8248 + t16351*t8280 + t16372*t8287) + 0.2*(-1.*t16351*t8287 - 1.*t16341*t8314 - 1.*t16372*t8645) + 0.125001*(t16351*t8248 + t16372*t8314 + t16341*t9227) + var1[2];
  p_output1[10]=t10207*t16567 - 0.14*(t11930*t16475 + t11943*t16519 + t12091*t16567) - 0.124999*(t12262*t16475 + t11930*t16519 + t12124*t16567) + 0.2*(t12124*t16475 + t12091*t16519 + t12130*t16567) + 0.2000000000018*t16110*t9340 - 6.000000000054e-7*t16154*t9340 - 0.2000000000018*t14718*t497*t9344 + t16475*t9836 + t16519*t9942 + var1[2];
  p_output1[11]=t13459*t16110 + 6.000000000054e-7*t12696*t16154 + t13916*t16710 + t14010*t16742 + t14076*t16754 - 0.14*(t14121*t16710 + t14126*t16742 + t14226*t16754) - 0.124999*(t14297*t16710 + t14121*t16742 + t14274*t16754) + 0.2*(-1.*t14274*t16710 - 1.*t14226*t16742 - 1.*t14287*t16754) + 0.2000000000018*t13781*t14718*t497 + var1[2];
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
