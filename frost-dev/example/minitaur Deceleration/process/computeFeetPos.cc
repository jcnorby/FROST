/*
 * Automatically Generated from Mathematica.
 * Mon 18 Mar 2019 18:24:11 GMT-04:00
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
  double t50;
  double t67;
  double t147;
  double t168;
  double t62;
  double t231;
  double t238;
  double t239;
  double t307;
  double t309;
  double t312;
  double t317;
  double t365;
  double t390;
  double t406;
  double t247;
  double t249;
  double t250;
  double t271;
  double t321;
  double t424;
  double t425;
  double t427;
  double t428;
  double t430;
  double t431;
  double t563;
  double t440;
  double t519;
  double t535;
  double t538;
  double t541;
  double t548;
  double t553;
  double t564;
  double t306;
  double t445;
  double t314;
  double t458;
  double t459;
  double t573;
  double t558;
  double t660;
  double t661;
  double t662;
  double t680;
  double t685;
  double t686;
  double t692;
  double t693;
  double t664;
  double t697;
  double t698;
  double t708;
  double t694;
  double t695;
  double t714;
  double t701;
  double t702;
  double t703;
  double t704;
  double t705;
  double t706;
  double t728;
  double t729;
  double t730;
  double t731;
  double t738;
  double t739;
  double t740;
  double t741;
  double t742;
  double t743;
  double t753;
  double t763;
  double t764;
  double t760;
  double t719;
  double t758;
  double t768;
  double t795;
  double t796;
  double t797;
  double t803;
  double t804;
  double t805;
  double t807;
  double t808;
  double t799;
  double t822;
  double t827;
  double t841;
  double t812;
  double t816;
  double t843;
  double t834;
  double t835;
  double t836;
  double t837;
  double t838;
  double t839;
  double t849;
  double t850;
  double t851;
  double t856;
  double t871;
  double t872;
  double t873;
  double t874;
  double t875;
  double t876;
  double t878;
  double t884;
  double t885;
  double t881;
  double t844;
  double t879;
  double t901;
  double t916;
  double t917;
  double t918;
  double t936;
  double t937;
  double t938;
  double t940;
  double t941;
  double t924;
  double t945;
  double t946;
  double t956;
  double t942;
  double t943;
  double t958;
  double t949;
  double t950;
  double t951;
  double t952;
  double t953;
  double t954;
  double t964;
  double t965;
  double t966;
  double t967;
  double t974;
  double t975;
  double t976;
  double t977;
  double t978;
  double t979;
  double t981;
  double t987;
  double t988;
  double t984;
  double t959;
  double t982;
  double t992;
  double t1009;
  double t1007;
  double t1008;
  double t1010;
  double t1011;
  double t1013;
  double t1014;
  double t1015;
  double t313;
  double t328;
  double t332;
  double t417;
  double t420;
  double t432;
  double t435;
  double t450;
  double t451;
  double t452;
  double t1018;
  double t1019;
  double t1020;
  double t1021;
  double t560;
  double t1023;
  double t1024;
  double t1025;
  double t1026;
  double t570;
  double t571;
  double t1029;
  double t1030;
  double t1031;
  double t1032;
  double t626;
  double t638;
  double t641;
  double t644;
  double t647;
  double t652;
  double t675;
  double t691;
  double t696;
  double t699;
  double t700;
  double t709;
  double t724;
  double t725;
  double t726;
  double t727;
  double t733;
  double t734;
  double t735;
  double t736;
  double t737;
  double t1052;
  double t1053;
  double t1054;
  double t1055;
  double t761;
  double t1057;
  double t1058;
  double t1059;
  double t1060;
  double t1062;
  double t1063;
  double t1064;
  double t1065;
  double t771;
  double t775;
  double t776;
  double t802;
  double t806;
  double t817;
  double t828;
  double t833;
  double t842;
  double t845;
  double t846;
  double t847;
  double t848;
  double t866;
  double t867;
  double t868;
  double t869;
  double t870;
  double t1086;
  double t1087;
  double t1088;
  double t1089;
  double t882;
  double t1091;
  double t1092;
  double t1093;
  double t1094;
  double t1096;
  double t1097;
  double t1098;
  double t1099;
  double t904;
  double t908;
  double t909;
  double t935;
  double t939;
  double t944;
  double t947;
  double t948;
  double t957;
  double t960;
  double t961;
  double t962;
  double t963;
  double t969;
  double t970;
  double t971;
  double t972;
  double t973;
  double t1120;
  double t1121;
  double t1122;
  double t1123;
  double t985;
  double t1125;
  double t1126;
  double t1127;
  double t1128;
  double t1130;
  double t1131;
  double t1132;
  double t1133;
  double t995;
  double t999;
  double t1000;
  double t1151;
  double t1152;
  double t1153;
  double t1155;
  double t1156;
  double t1157;
  double t1160;
  double t1161;
  double t1162;
  double t1163;
  double t1165;
  double t1166;
  double t1167;
  double t1168;
  double t1171;
  double t1172;
  double t1173;
  double t1174;
  double t1194;
  double t1195;
  double t1196;
  double t1197;
  double t1199;
  double t1200;
  double t1201;
  double t1202;
  double t1204;
  double t1205;
  double t1206;
  double t1207;
  double t1228;
  double t1229;
  double t1230;
  double t1231;
  double t1233;
  double t1234;
  double t1235;
  double t1236;
  double t1238;
  double t1239;
  double t1240;
  double t1241;
  double t1262;
  double t1263;
  double t1264;
  double t1265;
  double t1267;
  double t1268;
  double t1269;
  double t1270;
  double t1272;
  double t1273;
  double t1274;
  double t1275;
  t50 = Cos(var1[4]);
  t67 = Cos(var1[6]);
  t147 = -1.*t67;
  t168 = 1. + t147;
  t62 = Cos(var1[5]);
  t231 = Sin(var1[5]);
  t238 = Sin(var1[4]);
  t239 = Sin(var1[6]);
  t307 = Cos(var1[8]);
  t309 = -1.*t307;
  t312 = 1. + t309;
  t317 = Sin(var1[8]);
  t365 = -3.e-6*t312;
  t390 = 3.e-6*t317;
  t406 = t365 + t390;
  t247 = t50*t62*t67;
  t249 = -3.e-6*t50*t168*t231;
  t250 = t238*t239;
  t271 = t247 + t249 + t250;
  t321 = -1.*t317;
  t424 = 3.e-6*t50*t62*t168;
  t425 = -9.e-12*t168;
  t427 = 1. + t425;
  t428 = -1.*t50*t427*t231;
  t430 = -3.e-6*t238*t239;
  t431 = t424 + t428 + t430;
  t563 = 3.e-6*t312;
  t440 = -3.e-6*t317;
  t519 = -1.000000000009*t168;
  t535 = 1. + t519;
  t538 = t535*t238;
  t541 = -1.*t50*t62*t239;
  t548 = -3.e-6*t50*t231*t239;
  t553 = t538 + t541 + t548;
  t564 = t563 + t390;
  t306 = 1.125e-12*var1[8];
  t445 = t365 + t440;
  t314 = -9.e-12*t312;
  t458 = -1.000000000009*t312;
  t459 = 1. + t458;
  t573 = t563 + t440;
  t558 = 9.e-12*t312;
  t660 = Cos(var1[10]);
  t661 = -1.*t660;
  t662 = 1. + t661;
  t680 = Cos(var1[12]);
  t685 = -1.*t680;
  t686 = 1. + t685;
  t692 = -3.e-6*t686;
  t693 = Sin(var1[12]);
  t664 = Sin(var1[10]);
  t697 = 3.e-6*t693;
  t698 = t692 + t697;
  t708 = 7.5e-14*var1[12];
  t694 = -3.e-6*t693;
  t695 = t692 + t694;
  t714 = -9.e-12*t686;
  t701 = 3.e-6*t662*t50*t62;
  t702 = -3.e-6*t664*t238;
  t703 = -9.e-12*t662;
  t704 = 1. + t703;
  t705 = -1.*t704*t50*t231;
  t706 = t701 + t702 + t705;
  t728 = t660*t50*t62;
  t729 = t664*t238;
  t730 = -3.e-6*t662*t50*t231;
  t731 = t728 + t729 + t730;
  t738 = -1.*t50*t62*t664;
  t739 = -1.000000000009*t662;
  t740 = 1. + t739;
  t741 = t740*t238;
  t742 = -3.e-6*t50*t664*t231;
  t743 = t738 + t741 + t742;
  t753 = 3.e-6*t686;
  t763 = -1.000000000009*t686;
  t764 = 1. + t763;
  t760 = 9.e-12*t686;
  t719 = -1.*t693;
  t758 = t753 + t694;
  t768 = t753 + t697;
  t795 = Cos(var1[15]);
  t796 = -1.*t795;
  t797 = 1. + t796;
  t803 = Cos(var1[17]);
  t804 = -1.*t803;
  t805 = 1. + t804;
  t807 = -3.e-6*t805;
  t808 = Sin(var1[17]);
  t799 = Sin(var1[15]);
  t822 = 3.e-6*t808;
  t827 = t807 + t822;
  t841 = 1.125e-12*var1[17];
  t812 = -3.e-6*t808;
  t816 = t807 + t812;
  t843 = -9.e-12*t805;
  t834 = 3.e-6*t797*t50*t62;
  t835 = -3.e-6*t799*t238;
  t836 = -9.e-12*t797;
  t837 = 1. + t836;
  t838 = -1.*t837*t50*t231;
  t839 = t834 + t835 + t838;
  t849 = t795*t50*t62;
  t850 = t799*t238;
  t851 = -3.e-6*t797*t50*t231;
  t856 = t849 + t850 + t851;
  t871 = -1.*t50*t62*t799;
  t872 = -1.000000000009*t797;
  t873 = 1. + t872;
  t874 = t873*t238;
  t875 = -3.e-6*t50*t799*t231;
  t876 = t871 + t874 + t875;
  t878 = 3.e-6*t805;
  t884 = -1.000000000009*t805;
  t885 = 1. + t884;
  t881 = 9.e-12*t805;
  t844 = -1.*t808;
  t879 = t878 + t812;
  t901 = t878 + t822;
  t916 = Cos(var1[19]);
  t917 = -1.*t916;
  t918 = 1. + t917;
  t936 = Cos(var1[21]);
  t937 = -1.*t936;
  t938 = 1. + t937;
  t940 = -3.e-6*t938;
  t941 = Sin(var1[21]);
  t924 = Sin(var1[19]);
  t945 = 3.e-6*t941;
  t946 = t940 + t945;
  t956 = 7.5e-14*var1[21];
  t942 = -3.e-6*t941;
  t943 = t940 + t942;
  t958 = -9.e-12*t938;
  t949 = 3.e-6*t918*t50*t62;
  t950 = -3.e-6*t924*t238;
  t951 = -9.e-12*t918;
  t952 = 1. + t951;
  t953 = -1.*t952*t50*t231;
  t954 = t949 + t950 + t953;
  t964 = t916*t50*t62;
  t965 = t924*t238;
  t966 = -3.e-6*t918*t50*t231;
  t967 = t964 + t965 + t966;
  t974 = -1.*t50*t62*t924;
  t975 = -1.000000000009*t918;
  t976 = 1. + t975;
  t977 = t976*t238;
  t978 = -3.e-6*t50*t924*t231;
  t979 = t974 + t977 + t978;
  t981 = 3.e-6*t938;
  t987 = -1.000000000009*t938;
  t988 = 1. + t987;
  t984 = 9.e-12*t938;
  t959 = -1.*t941;
  t982 = t981 + t942;
  t992 = t981 + t945;
  t1009 = Cos(var1[3]);
  t1007 = Sin(var1[3]);
  t1008 = t62*t1007*t238;
  t1010 = t1009*t231;
  t1011 = t1008 + t1010;
  t1013 = t1009*t62;
  t1014 = -1.*t1007*t238*t231;
  t1015 = t1013 + t1014;
  t313 = 0.225000000002025*t312;
  t328 = t314 + t321;
  t332 = 0.1*t328;
  t417 = -9.75e-7*t406;
  t420 = t306 + t313 + t332 + t417;
  t432 = 3.75e-7*var1[8];
  t435 = -1.755e-17*t312;
  t450 = 0.225*t445;
  t451 = 0.1*t406;
  t452 = t432 + t435 + t450 + t451;
  t1018 = t67*t1011;
  t1019 = 3.e-6*t168*t1015;
  t1020 = -1.*t50*t1007*t239;
  t1021 = t1018 + t1019 + t1020;
  t560 = t558 + t321;
  t1023 = 3.e-6*t168*t1011;
  t1024 = t427*t1015;
  t1025 = 3.e-6*t50*t1007*t239;
  t1026 = t1023 + t1024 + t1025;
  t570 = -1.8e-11*t312;
  t571 = 1. + t570;
  t1029 = -1.*t50*t535*t1007;
  t1030 = -1.*t1011*t239;
  t1031 = 3.e-6*t1015*t239;
  t1032 = t1029 + t1030 + t1031;
  t626 = 0.1000000000009*t312;
  t638 = -9.75e-7*t445;
  t641 = t314 + t317;
  t644 = 0.225*t641;
  t647 = t306 + t626 + t638 + t644;
  t652 = t558 + t317;
  t675 = 2.5e-8*var1[12];
  t691 = 6.75e-18*t686;
  t696 = -0.225000000003*t695;
  t699 = 0.100000000003*t698;
  t700 = t675 + t691 + t696 + t699;
  t709 = -0.225000000005025*t686;
  t724 = t714 + t719;
  t725 = 0.100000000003*t724;
  t726 = 3.75e-7*t698;
  t727 = t708 + t709 + t725 + t726;
  t733 = 0.1000000000039*t686;
  t734 = 3.75e-7*t695;
  t735 = t714 + t693;
  t736 = -0.225000000003*t735;
  t737 = t708 + t733 + t734 + t736;
  t1052 = 3.e-6*t50*t664*t1007;
  t1053 = 3.e-6*t662*t1011;
  t1054 = t704*t1015;
  t1055 = t1052 + t1053 + t1054;
  t761 = t760 + t693;
  t1057 = -1.*t50*t664*t1007;
  t1058 = t660*t1011;
  t1059 = 3.e-6*t662*t1015;
  t1060 = t1057 + t1058 + t1059;
  t1062 = -1.*t740*t50*t1007;
  t1063 = -1.*t664*t1011;
  t1064 = 3.e-6*t664*t1015;
  t1065 = t1062 + t1063 + t1064;
  t771 = t760 + t719;
  t775 = -1.8e-11*t686;
  t776 = 1. + t775;
  t802 = 3.75e-7*var1[17];
  t806 = -1.755e-17*t805;
  t817 = 0.225*t816;
  t828 = 0.1*t827;
  t833 = t802 + t806 + t817 + t828;
  t842 = 0.225000000002025*t805;
  t845 = t843 + t844;
  t846 = 0.1*t845;
  t847 = -9.75e-7*t827;
  t848 = t841 + t842 + t846 + t847;
  t866 = 0.1000000000009*t805;
  t867 = -9.75e-7*t816;
  t868 = t843 + t808;
  t869 = 0.225*t868;
  t870 = t841 + t866 + t867 + t869;
  t1086 = 3.e-6*t50*t799*t1007;
  t1087 = 3.e-6*t797*t1011;
  t1088 = t837*t1015;
  t1089 = t1086 + t1087 + t1088;
  t882 = t881 + t808;
  t1091 = -1.*t50*t799*t1007;
  t1092 = t795*t1011;
  t1093 = 3.e-6*t797*t1015;
  t1094 = t1091 + t1092 + t1093;
  t1096 = -1.*t873*t50*t1007;
  t1097 = -1.*t799*t1011;
  t1098 = 3.e-6*t799*t1015;
  t1099 = t1096 + t1097 + t1098;
  t904 = t881 + t844;
  t908 = -1.8e-11*t805;
  t909 = 1. + t908;
  t935 = 2.5e-8*var1[21];
  t939 = 6.75e-18*t938;
  t944 = -0.225000000003*t943;
  t947 = 0.100000000003*t946;
  t948 = t935 + t939 + t944 + t947;
  t957 = -0.225000000005025*t938;
  t960 = t958 + t959;
  t961 = 0.100000000003*t960;
  t962 = 3.75e-7*t946;
  t963 = t956 + t957 + t961 + t962;
  t969 = 0.1000000000039*t938;
  t970 = 3.75e-7*t943;
  t971 = t958 + t941;
  t972 = -0.225000000003*t971;
  t973 = t956 + t969 + t970 + t972;
  t1120 = 3.e-6*t50*t924*t1007;
  t1121 = 3.e-6*t918*t1011;
  t1122 = t952*t1015;
  t1123 = t1120 + t1121 + t1122;
  t985 = t984 + t941;
  t1125 = -1.*t50*t924*t1007;
  t1126 = t916*t1011;
  t1127 = 3.e-6*t918*t1015;
  t1128 = t1125 + t1126 + t1127;
  t1130 = -1.*t976*t50*t1007;
  t1131 = -1.*t924*t1011;
  t1132 = 3.e-6*t924*t1015;
  t1133 = t1130 + t1131 + t1132;
  t995 = t984 + t959;
  t999 = -1.8e-11*t938;
  t1000 = 1. + t999;
  t1151 = -1.*t1009*t62*t238;
  t1152 = t1007*t231;
  t1153 = t1151 + t1152;
  t1155 = t62*t1007;
  t1156 = t1009*t238*t231;
  t1157 = t1155 + t1156;
  t1160 = t67*t1153;
  t1161 = 3.e-6*t168*t1157;
  t1162 = t1009*t50*t239;
  t1163 = t1160 + t1161 + t1162;
  t1165 = 3.e-6*t168*t1153;
  t1166 = t427*t1157;
  t1167 = -3.e-6*t1009*t50*t239;
  t1168 = t1165 + t1166 + t1167;
  t1171 = t1009*t50*t535;
  t1172 = -1.*t1153*t239;
  t1173 = 3.e-6*t1157*t239;
  t1174 = t1171 + t1172 + t1173;
  t1194 = -3.e-6*t1009*t50*t664;
  t1195 = 3.e-6*t662*t1153;
  t1196 = t704*t1157;
  t1197 = t1194 + t1195 + t1196;
  t1199 = t1009*t50*t664;
  t1200 = t660*t1153;
  t1201 = 3.e-6*t662*t1157;
  t1202 = t1199 + t1200 + t1201;
  t1204 = t740*t1009*t50;
  t1205 = -1.*t664*t1153;
  t1206 = 3.e-6*t664*t1157;
  t1207 = t1204 + t1205 + t1206;
  t1228 = -3.e-6*t1009*t50*t799;
  t1229 = 3.e-6*t797*t1153;
  t1230 = t837*t1157;
  t1231 = t1228 + t1229 + t1230;
  t1233 = t1009*t50*t799;
  t1234 = t795*t1153;
  t1235 = 3.e-6*t797*t1157;
  t1236 = t1233 + t1234 + t1235;
  t1238 = t873*t1009*t50;
  t1239 = -1.*t799*t1153;
  t1240 = 3.e-6*t799*t1157;
  t1241 = t1238 + t1239 + t1240;
  t1262 = -3.e-6*t1009*t50*t924;
  t1263 = 3.e-6*t918*t1153;
  t1264 = t952*t1157;
  t1265 = t1262 + t1263 + t1264;
  t1267 = t1009*t50*t924;
  t1268 = t916*t1153;
  t1269 = 3.e-6*t918*t1157;
  t1270 = t1267 + t1268 + t1269;
  t1272 = t976*t1009*t50;
  t1273 = -1.*t924*t1153;
  t1274 = 3.e-6*t924*t1157;
  t1275 = t1272 + t1273 + t1274;
  p_output1[0]=-0.225000000002025*t238*t239 + t271*t420 + t431*t452 + 6.75000000006075e-7*t168*t231*t50 + 0.225*(t271*t459 + t553*t560 + t431*t564) + 0.130001*(t553*t564 + t431*t571 + t271*t573) + 0.225000000002025*t168*t50*t62 + t553*t647 - 0.14*(t459*t553 + t431*t573 + t271*t652) + var1[0];
  p_output1[1]=-6.75000000006075e-7*t231*t50*t662 - 0.225000000002025*t50*t62*t662 + 0.225000000002025*t238*t664 + t700*t706 + t727*t731 + t737*t743 - 0.14*(t706*t758 + t731*t761 + t743*t764) - 0.225*(t731*t764 + t706*t768 + t743*t771) + 0.130001*(t731*t758 + t743*t768 + t706*t776) + var1[0];
  p_output1[2]=6.75000000006075e-7*t231*t50*t797 + 0.225000000002025*t50*t62*t797 - 0.225000000002025*t238*t799 + t833*t839 + t848*t856 + t870*t876 - 0.14*(t839*t879 + t856*t882 + t876*t885) + 0.225*(t856*t885 + t839*t901 + t876*t904) - 0.129999*(t856*t879 + t876*t901 + t839*t909) + var1[0];
  p_output1[3]=-6.75000000006075e-7*t231*t50*t918 - 0.225000000002025*t50*t62*t918 + 0.225000000002025*t238*t924 + t948*t954 + t963*t967 + t973*t979 - 0.14*(t954*t982 + t967*t985 + t979*t988) - 0.129999*(t1000*t954 + t967*t982 + t979*t992) - 0.225*(t967*t988 + t954*t992 + t979*t995) + var1[0];
  p_output1[4]=0.225000000002025*t1011*t168 - 6.75000000006075e-7*t1015*t168 + t1021*t420 + t1026*t452 + 0.225000000002025*t1007*t239*t50 + 0.225*(t1021*t459 + t1032*t560 + t1026*t564) + 0.130001*(t1032*t564 + t1026*t571 + t1021*t573) + t1032*t647 - 0.14*(t1032*t459 + t1026*t573 + t1021*t652) + var1[1];
  p_output1[5]=-0.225000000002025*t1011*t662 + 6.75000000006075e-7*t1015*t662 - 0.225000000002025*t1007*t50*t664 + t1055*t700 + t1060*t727 + t1065*t737 - 0.14*(t1055*t758 + t1060*t761 + t1065*t764) - 0.225*(t1060*t764 + t1055*t768 + t1065*t771) + 0.130001*(t1060*t758 + t1065*t768 + t1055*t776) + var1[1];
  p_output1[6]=0.225000000002025*t1011*t797 - 6.75000000006075e-7*t1015*t797 + 0.225000000002025*t1007*t50*t799 + t1089*t833 + t1094*t848 + t1099*t870 - 0.14*(t1089*t879 + t1094*t882 + t1099*t885) + 0.225*(t1094*t885 + t1089*t901 + t1099*t904) - 0.129999*(t1094*t879 + t1099*t901 + t1089*t909) + var1[1];
  p_output1[7]=-0.225000000002025*t1011*t918 + 6.75000000006075e-7*t1015*t918 - 0.225000000002025*t1007*t50*t924 + t1123*t948 + t1128*t963 + t1133*t973 - 0.14*(t1123*t982 + t1128*t985 + t1133*t988) - 0.129999*(t1000*t1123 + t1128*t982 + t1133*t992) - 0.225*(t1128*t988 + t1123*t992 + t1133*t995) + var1[1];
  p_output1[8]=0.225000000002025*t1153*t168 - 6.75000000006075e-7*t1157*t168 + t1163*t420 + t1168*t452 - 0.225000000002025*t1009*t239*t50 + 0.225*(t1163*t459 + t1174*t560 + t1168*t564) + 0.130001*(t1174*t564 + t1168*t571 + t1163*t573) + t1174*t647 - 0.14*(t1174*t459 + t1168*t573 + t1163*t652) + var1[2];
  p_output1[9]=-0.225000000002025*t1153*t662 + 6.75000000006075e-7*t1157*t662 + 0.225000000002025*t1009*t50*t664 + t1197*t700 + t1202*t727 + t1207*t737 - 0.14*(t1197*t758 + t1202*t761 + t1207*t764) - 0.225*(t1202*t764 + t1197*t768 + t1207*t771) + 0.130001*(t1202*t758 + t1207*t768 + t1197*t776) + var1[2];
  p_output1[10]=0.225000000002025*t1153*t797 - 6.75000000006075e-7*t1157*t797 - 0.225000000002025*t1009*t50*t799 + t1231*t833 + t1236*t848 + t1241*t870 - 0.14*(t1231*t879 + t1236*t882 + t1241*t885) + 0.225*(t1236*t885 + t1231*t901 + t1241*t904) - 0.129999*(t1236*t879 + t1241*t901 + t1231*t909) + var1[2];
  p_output1[11]=-0.225000000002025*t1153*t918 + 6.75000000006075e-7*t1157*t918 + 0.225000000002025*t1009*t50*t924 + t1265*t948 + t1270*t963 + t1275*t973 - 0.14*(t1265*t982 + t1270*t985 + t1275*t988) - 0.129999*(t1000*t1265 + t1270*t982 + t1275*t992) - 0.225*(t1270*t988 + t1265*t992 + t1275*t995) + var1[2];
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
