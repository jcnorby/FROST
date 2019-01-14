/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:33 GMT-05:00
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
  double t12244;
  double t10620;
  double t10679;
  double t12692;
  double t13445;
  double t12177;
  double t12849;
  double t13178;
  double t9574;
  double t13486;
  double t15969;
  double t16852;
  double t16917;
  double t4060;
  double t18245;
  double t18250;
  double t13423;
  double t16861;
  double t16871;
  double t16875;
  double t16970;
  double t16982;
  double t16987;
  double t16992;
  double t17031;
  double t18316;
  double t18373;
  double t18387;
  double t18425;
  double t18260;
  double t18278;
  double t18287;
  double t19232;
  double t19234;
  double t19277;
  double t19647;
  double t19772;
  double t17322;
  double t17521;
  double t17552;
  double t19835;
  double t19836;
  double t20164;
  double t19787;
  double t19790;
  double t19791;
  double t19797;
  double t17038;
  double t17045;
  double t17049;
  double t17125;
  double t17712;
  double t18020;
  double t19565;
  double t19832;
  double t20166;
  double t20185;
  double t20355;
  double t22208;
  double t22245;
  double t22259;
  double t22272;
  double t22323;
  double t22324;
  double t22325;
  double t21249;
  double t22342;
  double t22354;
  double t22355;
  double t22424;
  double t22425;
  double t22443;
  double t22456;
  double t22418;
  double t22698;
  double t19218;
  double t19282;
  double t19315;
  double t19377;
  double t19386;
  double t19397;
  double t19420;
  double t19421;
  double t20207;
  double t20222;
  double t20227;
  double t20236;
  double t20243;
  double t20244;
  double t22023;
  double t22024;
  double t22130;
  double t22133;
  double t22153;
  double t22173;
  double t22745;
  double t22746;
  double t22748;
  double t22750;
  double t22751;
  double t22753;
  double t22755;
  double t22758;
  double t22816;
  double t22818;
  double t22892;
  double t22895;
  double t22900;
  double t22917;
  double t22922;
  double t22924;
  double t22927;
  double t22928;
  double t22931;
  double t22933;
  double t22934;
  double t22938;
  double t22939;
  double t22947;
  double t22950;
  double t22952;
  double t22956;
  double t22958;
  double t22959;
  double t22983;
  double t22984;
  double t22986;
  double t22994;
  double t23003;
  double t23004;
  double t23049;
  double t23050;
  double t23051;
  double t23021;
  double t23022;
  double t23034;
  double t18238;
  double t18307;
  double t18312;
  double t18442;
  double t18548;
  double t18735;
  double t18763;
  double t18786;
  double t18884;
  double t19091;
  double t22903;
  double t22904;
  double t22905;
  double t20304;
  double t20356;
  double t20645;
  double t20826;
  double t20937;
  double t21236;
  double t21310;
  double t21930;
  double t21936;
  double t21953;
  double t22821;
  double t22825;
  double t22826;
  double t22864;
  double t22868;
  double t22307;
  double t22330;
  double t22356;
  double t22378;
  double t22412;
  double t22414;
  double t22422;
  double t22671;
  double t22682;
  double t22683;
  double t22687;
  double t22696;
  double t22711;
  double t22740;
  double t22744;
  double t22876;
  double t22889;
  double t22890;
  double t22760;
  double t22761;
  double t22769;
  double t22819;
  double t22827;
  double t22828;
  double t22875;
  double t22891;
  double t22902;
  double t22906;
  double t22912;
  double t22914;
  double t22932;
  double t22941;
  double t22942;
  double t22945;
  double t22953;
  double t22954;
  double t22962;
  double t22963;
  double t22965;
  double t22967;
  double t22968;
  double t22971;
  double t22973;
  double t22978;
  double t22979;
  double t22980;
  double t22989;
  double t23011;
  double t23012;
  double t23018;
  double t23045;
  double t23048;
  double t23053;
  double t23054;
  double t23058;
  double t23059;
  double t23060;
  double t23064;
  double t23065;
  double t23066;
  double t23067;
  double t23068;
  double t23140;
  double t23141;
  double t23142;
  double t23143;
  double t23146;
  double t23153;
  double t23155;
  double t23156;
  double t23157;
  double t22943;
  double t22964;
  double t22970;
  double t22982;
  double t23013;
  double t23057;
  double t23062;
  double t23070;
  double t23073;
  double t23089;
  double t23094;
  double t23095;
  double t23114;
  double t23123;
  double t23124;
  double t23125;
  double t23126;
  double t23128;
  double t20250;
  double t20703;
  double t21980;
  double t22176;
  double t22411;
  double t22685;
  double t22759;
  double t22770;
  double t22775;
  double t23182;
  double t23184;
  double t23185;
  double t23190;
  double t23191;
  double t23192;
  double t23198;
  double t23208;
  double t23214;
  double t23252;
  double t23253;
  double t23256;
  double t23260;
  double t23081;
  double t23083;
  double t23084;
  double t23085;
  double t18193;
  double t18706;
  double t19469;
  double t19471;
  double t23167;
  double t23171;
  double t23176;
  double t23177;
  t12244 = Cos(var1[4]);
  t10620 = Cos(var1[5]);
  t10679 = Sin(var1[4]);
  t12692 = Sin(var1[5]);
  t13445 = Cos(var1[3]);
  t12177 = -1.*t10620*t10679;
  t12849 = -1.*t12244*t12692;
  t13178 = t12177 + t12849;
  t9574 = Sin(var1[3]);
  t13486 = t12244*t10620;
  t15969 = -1.*t10679*t12692;
  t16852 = t13486 + t15969;
  t16917 = Cos(var1[2]);
  t4060 = Sin(var1[2]);
  t18245 = -1.*t10620;
  t18250 = 1. + t18245;
  t13423 = t9574*t13178;
  t16861 = t13445*t16852;
  t16871 = t13423 + t16861;
  t16875 = t4060*t16871;
  t16970 = t13445*t13178;
  t16982 = -1.*t9574*t16852;
  t16987 = t16970 + t16982;
  t16992 = t16917*t16987;
  t17031 = t16875 + t16992;
  t18316 = -0.15*t18250;
  t18373 = -0.15*t10620;
  t18387 = -0.24*t12692;
  t18425 = t18316 + t18373 + t18387;
  t18260 = 0.8*t18250;
  t18278 = 1.04*t10620;
  t18287 = t18260 + t18278;
  t19232 = -1.*t12244*t10620;
  t19234 = t10679*t12692;
  t19277 = t19232 + t19234;
  t19647 = -1.*t12244;
  t19772 = 1. + t19647;
  t17322 = t13445*t12244;
  t17521 = -1.*t9574*t10679;
  t17552 = t17322 + t17521;
  t19835 = 0.4*t19772;
  t19836 = 0.69*t12244;
  t20164 = t19835 + t19836;
  t19787 = -0.15*t19772;
  t19790 = -0.15*t12244;
  t19791 = -0.29*t10679;
  t19797 = t19787 + t19790 + t19791;
  t17038 = -1.*t12244*t9574;
  t17045 = -1.*t13445*t10679;
  t17049 = t17038 + t17045;
  t17125 = t16917*t17049;
  t17712 = t4060*t17552;
  t18020 = t17125 + t17712;
  t19565 = 0.15*t12244;
  t19832 = t12244*t19797;
  t20166 = t20164*t10679;
  t20185 = t19565 + t19832 + t20166;
  t20355 = 0.15*t10679;
  t22208 = 0.4*t10679;
  t22245 = -1.*t18287*t10679;
  t22259 = t12244*t18425;
  t22272 = t19787 + t22208 + t22245 + t22259;
  t22323 = t10620*t10679;
  t22324 = t12244*t12692;
  t22325 = t22323 + t22324;
  t21249 = -0.15*t10679;
  t22342 = t12244*t18287;
  t22354 = t10679*t18425;
  t22355 = t19835 + t22342 + t20355 + t22354;
  t22424 = 0.4*t12244;
  t22425 = -1.*t12244*t18287;
  t22443 = -1.*t10679*t18425;
  t22456 = t22424 + t22425 + t21249 + t22443;
  t22418 = t19565 + t22208 + t22245 + t22259;
  t22698 = 0.15*t16852;
  t19218 = -1.*t9574*t13178;
  t19282 = t13445*t19277;
  t19315 = t19218 + t19282;
  t19377 = t16917*t19315;
  t19386 = t9574*t19277;
  t19397 = t16970 + t19386;
  t19420 = t4060*t19397;
  t19421 = t19377 + t19420;
  t20207 = t12244*t9574;
  t20222 = t13445*t10679;
  t20227 = t20207 + t20222;
  t20236 = t4060*t20227;
  t20243 = t16917*t17552;
  t20244 = t20236 + t20243;
  t22023 = t4060*t17049;
  t22024 = -1.*t13445*t12244;
  t22130 = t9574*t10679;
  t22133 = t22024 + t22130;
  t22153 = t16917*t22133;
  t22173 = t22023 + t22153;
  t22745 = -1.*t9574*t22325;
  t22746 = t22745 + t16861;
  t22748 = t16917*t22746;
  t22750 = t13445*t22325;
  t22751 = t9574*t16852;
  t22753 = t22750 + t22751;
  t22755 = t4060*t22753;
  t22758 = t22748 + t22755;
  t22816 = -1.*t4060*t17049;
  t22818 = t22816 + t20243;
  t22892 = t16917*t16871;
  t22895 = -1.*t4060*t16987;
  t22900 = t22892 + t22895;
  t22917 = -1.*t13445;
  t22922 = 1. + t22917;
  t22924 = -0.15*t22922;
  t22927 = -1.*t20164*t9574;
  t22928 = t13445*t19797;
  t22931 = t22924 + t22927 + t22928;
  t22933 = t13445*t20164;
  t22934 = 0.15*t9574;
  t22938 = t9574*t19797;
  t22939 = t22933 + t22934 + t22938;
  t22947 = -0.29*t12244*t9574;
  t22950 = -0.29*t13445*t10679;
  t22952 = t22947 + t22950;
  t22956 = -0.29*t13445*t12244;
  t22958 = 0.29*t9574*t10679;
  t22959 = t22956 + t22958;
  t22983 = t9574*t22272;
  t22984 = t13445*t22355;
  t22986 = t22934 + t22983 + t22984;
  t22994 = t13445*t22272;
  t23003 = -1.*t9574*t22355;
  t23004 = t22924 + t22994 + t23003;
  t23049 = t13445*t22418;
  t23050 = t9574*t22456;
  t23051 = t23049 + t23050;
  t23021 = -1.*t9574*t22418;
  t23022 = t13445*t22456;
  t23034 = t23021 + t23022;
  t18238 = 0.4*t10620;
  t18307 = -1.*t10620*t18287;
  t18312 = 0.15*t12692;
  t18442 = t18425*t12692;
  t18548 = t18238 + t18307 + t18312 + t18442;
  t18735 = 0.15*t10620;
  t18763 = t10620*t18425;
  t18786 = -0.4*t12692;
  t18884 = t18287*t12692;
  t19091 = t18735 + t18763 + t18786 + t18884;
  t22903 = -1.*t4060*t19315;
  t22904 = t16917*t19397;
  t22905 = t22903 + t22904;
  t20304 = -1.*t20164*t12244;
  t20356 = t19797*t10679;
  t20645 = t20304 + t20355 + t20356;
  t20826 = t20164*t12244;
  t20937 = Power(t12244,2);
  t21236 = -0.29*t20937;
  t21310 = -1.*t19797*t10679;
  t21930 = Power(t10679,2);
  t21936 = -0.29*t21930;
  t21953 = t20826 + t21236 + t21249 + t21310 + t21936;
  t22821 = t16917*t20227;
  t22825 = -1.*t4060*t17552;
  t22826 = t22821 + t22825;
  t22864 = -1.*t4060*t22133;
  t22868 = t17125 + t22864;
  t22307 = -1.*t22272*t13178;
  t22330 = 0.15*t22325;
  t22356 = -1.*t22355*t16852;
  t22378 = t22307 + t22330 + t22356;
  t22412 = 0.15*t13178;
  t22414 = t22272*t13178;
  t22422 = t22418*t22325;
  t22671 = t22456*t16852;
  t22682 = t22355*t16852;
  t22683 = t22412 + t22414 + t22422 + t22671 + t22682;
  t22687 = -1.*t22456*t13178;
  t22696 = -1.*t22355*t13178;
  t22711 = -1.*t22418*t16852;
  t22740 = -1.*t22272*t19277;
  t22744 = t22687 + t22696 + t22698 + t22711 + t22740;
  t22876 = -1.*t4060*t22746;
  t22889 = t16917*t22753;
  t22890 = t22876 + t22889;
  t22760 = t22355*t22325;
  t22761 = t22272*t16852;
  t22769 = t22760 + t22698 + t22761;
  t22819 = 13.6*t22818*t20244;
  t22827 = 13.6*t22826*t18020;
  t22828 = 13.6*t22818*t22173;
  t22875 = 13.6*t18020*t22868;
  t22891 = 12.*t17031*t22890;
  t22902 = 12.*t22900*t22758;
  t22906 = 12.*t17031*t22905;
  t22912 = 12.*t22900*t19421;
  t22914 = t22819 + t22827 + t22828 + t22875 + t22891 + t22902 + t22906 + t22912;
  t22932 = t22931*t17049;
  t22941 = t22939*t17552;
  t22942 = t22932 + t22941;
  t22945 = -1.*t22931*t17049;
  t22953 = -1.*t22952*t20227;
  t22954 = -1.*t22939*t17552;
  t22962 = -1.*t17552*t22959;
  t22963 = t22945 + t22953 + t22954 + t22962;
  t22965 = -1.*t22939*t20227;
  t22967 = -1.*t22931*t17552;
  t22968 = t22965 + t22967;
  t22971 = t22939*t17049;
  t22973 = t22952*t17552;
  t22978 = t17049*t22959;
  t22979 = t22931*t22133;
  t22980 = t22971 + t22973 + t22978 + t22979;
  t22989 = t22986*t16871;
  t23011 = t23004*t16987;
  t23012 = t22989 + t23011;
  t23018 = -1.*t22986*t16871;
  t23045 = -1.*t23034*t22746;
  t23048 = -1.*t23004*t16987;
  t23053 = -1.*t23051*t22753;
  t23054 = t23018 + t23045 + t23048 + t23053;
  t23058 = -1.*t23004*t22746;
  t23059 = -1.*t22986*t22753;
  t23060 = t23058 + t23059;
  t23064 = t23051*t16871;
  t23065 = t23034*t16987;
  t23066 = t23004*t19315;
  t23067 = t22986*t19397;
  t23068 = t23064 + t23065 + t23066 + t23067;
  t23140 = 13.6*t22818*t22942;
  t23141 = 13.6*t22818*t22963;
  t23142 = 13.6*t22968*t22868;
  t23143 = 13.6*t22826*t22980;
  t23146 = 12.*t22900*t23012;
  t23153 = 12.*t22900*t23054;
  t23155 = 12.*t23060*t22905;
  t23156 = 12.*t22890*t23068;
  t23157 = t23140 + t23141 + t23142 + t23143 + t23146 + t23153 + t23155 + t23156;
  t22943 = 13.6*t18020*t22942;
  t22964 = 13.6*t18020*t22963;
  t22970 = 13.6*t22968*t22173;
  t22982 = 13.6*t20244*t22980;
  t23013 = 12.*t17031*t23012;
  t23057 = 12.*t17031*t23054;
  t23062 = 12.*t23060*t19421;
  t23070 = 12.*t22758*t23068;
  t23073 = t22943 + t22964 + t22970 + t22982 + t23013 + t23057 + t23062 + t23070;
  t23089 = 13.6*t20645*t22818;
  t23094 = 13.6*t21953*t22818;
  t23095 = 13.6*t20185*t22826;
  t23114 = 13.6*t20185*t22868;
  t23123 = 12.*t22378*t22900;
  t23124 = 12.*t22683*t22900;
  t23125 = 12.*t22744*t22890;
  t23126 = 12.*t22769*t22905;
  t23128 = t23089 + t23094 + t23095 + t23114 + t23123 + t23124 + t23125 + t23126;
  t20250 = 13.6*t20185*t20244;
  t20703 = 13.6*t20645*t18020;
  t21980 = 13.6*t21953*t18020;
  t22176 = 13.6*t20185*t22173;
  t22411 = 12.*t22378*t17031;
  t22685 = 12.*t22683*t17031;
  t22759 = 12.*t22744*t22758;
  t22770 = 12.*t22769*t19421;
  t22775 = t20250 + t20703 + t21980 + t22176 + t22411 + t22685 + t22759 + t22770;
  t23182 = 13.6*t21953*t22968;
  t23184 = 13.6*t20185*t22942;
  t23185 = 13.6*t20185*t22963;
  t23190 = 13.6*t20645*t22980;
  t23191 = 12.*t22744*t23012;
  t23192 = 12.*t22769*t23054;
  t23198 = 12.*t22683*t23060;
  t23208 = 12.*t22378*t23068;
  t23214 = t23182 + t23184 + t23185 + t23190 + t23191 + t23192 + t23198 + t23208;
  t23252 = -3.944*t20185;
  t23253 = 12.*t19091*t22683;
  t23256 = 12.*t18548*t22744;
  t23260 = t23252 + t23253 + t23256;
  t23081 = -3.944*t22818;
  t23083 = 12.*t18548*t22900;
  t23084 = 12.*t19091*t22905;
  t23085 = t23081 + t23083 + t23084;
  t18193 = -3.944*t18020;
  t18706 = 12.*t18548*t17031;
  t19469 = 12.*t19091*t19421;
  t19471 = t18193 + t18706 + t19469;
  t23167 = -3.944*t22980;
  t23171 = 12.*t19091*t23054;
  t23176 = 12.*t18548*t23068;
  t23177 = t23167 + t23171 + t23176;
  p_output1[0]=var2[4]*(-0.5*(24.*t17031*t19421 + 27.2*t18020*t20244 + 27.2*t18020*t22173 + 24.*t17031*t22758)*var2[0] - 0.5*t22914*var2[1] - 0.5*t23073*var2[2] - 0.5*t22775*var2[3] - 0.5*t19471*var2[4] + 1.44*t17031*var2[5]);
  p_output1[1]=var2[4]*(-0.5*t22914*var2[0] - 0.5*(27.2*t22818*t22826 + 27.2*t22818*t22868 + 24.*t22890*t22900 + 24.*t22900*t22905)*var2[1] - 0.5*t23157*var2[2] - 0.5*t23128*var2[3] - 0.5*t23085*var2[4] + 1.44*t22900*var2[5]);
  p_output1[2]=var2[4]*(-0.5*t23073*var2[0] - 0.5*t23157*var2[1] - 0.5*(27.2*t22963*t22968 + 27.2*t22942*t22980 + 24.*t23054*t23060 + 24.*t23012*t23068)*var2[2] - 0.5*t23214*var2[3] - 0.5*t23177*var2[4] + 1.44*t23068*var2[5]);
  p_output1[3]=var2[4]*(-0.5*t22775*var2[0] - 0.5*t23128*var2[1] - 0.5*t23214*var2[2] - 0.5*(27.2*t20185*t20645 + 27.2*t20185*t21953 + 24.*t22378*t22744 + 24.*t22683*t22769)*var2[3] - 0.5*t23260*var2[4] + 1.44*t22744*var2[5]);
  p_output1[4]=(-0.5*t19471*var2[0] - 0.5*t23085*var2[1] - 0.5*t23177*var2[2] - 0.5*t23260*var2[3])*var2[4];
  p_output1[5]=(1.44*t17031*var2[0] + 1.44*t22900*var2[1] + 1.44*t23068*var2[2] + 1.44*t22744*var2[3])*var2[4];
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

#include "Ce2_vec5_acrobot.hh"

namespace SymFunction
{

void Ce2_vec5_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
