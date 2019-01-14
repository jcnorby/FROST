/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:46 GMT-04:00
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
  double t394;
  double t428;
  double t764;
  double t164;
  double t790;
  double t926;
  double t1003;
  double t1087;
  double t1671;
  double t2923;
  double t3116;
  double t3126;
  double t3704;
  double t3801;
  double t3805;
  double t4866;
  double t183;
  double t366;
  double t442;
  double t860;
  double t895;
  double t1653;
  double t2168;
  double t2302;
  double t3231;
  double t3287;
  double t3293;
  double t3376;
  double t3843;
  double t3920;
  double t3929;
  double t3933;
  double t4813;
  double t4998;
  double t5075;
  double t5133;
  double t5185;
  double t5190;
  double t5197;
  double t5214;
  double t5394;
  double t5399;
  double t5516;
  double t5770;
  double t5812;
  double t5880;
  double t5882;
  double t5923;
  double t5927;
  double t5931;
  double t5934;
  double t5293;
  double t5950;
  double t5955;
  double t6517;
  double t6536;
  double t6534;
  double t6568;
  double t6577;
  double t6618;
  double t6649;
  double t6658;
  double t6664;
  double t6675;
  double t6687;
  double t6692;
  double t6701;
  double t6718;
  double t6529;
  double t6586;
  double t6661;
  double t6689;
  double t6726;
  double t6730;
  double t6762;
  double t6797;
  double t6802;
  double t6814;
  double t6856;
  double t6863;
  double t6867;
  double t6868;
  double t6871;
  double t6904;
  double t6912;
  double t6934;
  double t6808;
  double t6950;
  double t6971;
  double t8470;
  double t8564;
  double t8636;
  double t8638;
  double t8642;
  double t8643;
  double t8662;
  double t8665;
  double t8666;
  double t8698;
  double t8707;
  double t8712;
  double t8408;
  double t8637;
  double t8660;
  double t8667;
  double t8713;
  double t8714;
  double t8715;
  double t8716;
  double t8720;
  double t8722;
  double t8725;
  double t8727;
  double t8728;
  double t8730;
  double t8738;
  double t8739;
  double t8741;
  double t8742;
  double t8721;
  double t8747;
  double t8751;
  double t5963;
  double t9190;
  double t9191;
  double t9193;
  double t9196;
  double t9197;
  double t5979;
  double t5984;
  double t5989;
  double t5993;
  double t5994;
  double t6158;
  double t6220;
  double t6246;
  double t6254;
  double t6256;
  double t6276;
  double t6282;
  double t6289;
  double t6290;
  double t6302;
  double t6309;
  double t6316;
  double t6319;
  double t6325;
  double t6338;
  double t6364;
  double t6367;
  double t6370;
  double t6386;
  double t6439;
  double t6473;
  double t6496;
  double t9188;
  double t9199;
  double t6984;
  double t9293;
  double t9296;
  double t9304;
  double t9310;
  double t9339;
  double t6985;
  double t7033;
  double t7078;
  double t7129;
  double t7177;
  double t7222;
  double t7264;
  double t7278;
  double t7316;
  double t7317;
  double t7323;
  double t7333;
  double t7341;
  double t7342;
  double t7346;
  double t7355;
  double t7374;
  double t7381;
  double t7399;
  double t7400;
  double t7440;
  double t7470;
  double t7471;
  double t7684;
  double t7916;
  double t8121;
  double t8195;
  double t9279;
  double t9340;
  double t8795;
  double t9396;
  double t9397;
  double t9399;
  double t9404;
  double t9407;
  double t8797;
  double t8813;
  double t8815;
  double t8828;
  double t8836;
  double t8849;
  double t8859;
  double t8871;
  double t8876;
  double t8877;
  double t8881;
  double t8886;
  double t8942;
  double t8970;
  double t9013;
  double t9014;
  double t9020;
  double t9028;
  double t9045;
  double t9056;
  double t9090;
  double t9121;
  double t9141;
  double t9149;
  double t9163;
  double t9166;
  double t9182;
  double t9395;
  double t9409;
  t394 = Cos(var1[4]);
  t428 = Cos(var1[5]);
  t764 = Sin(var1[14]);
  t164 = Cos(var1[14]);
  t790 = Sin(var1[4]);
  t926 = Cos(var1[16]);
  t1003 = -1.*t926;
  t1087 = 1. + t1003;
  t1671 = Sin(var1[16]);
  t2923 = t394*t428*t764;
  t3116 = t164*t790;
  t3126 = t2923 + t3116;
  t3704 = t164*t394*t428;
  t3801 = -1.*t764*t790;
  t3805 = t3704 + t3801;
  t4866 = Sin(var1[5]);
  t183 = -1.*t164;
  t366 = 1. + t183;
  t442 = 0.225*t366*t394*t428;
  t860 = 0.225*t764*t790;
  t895 = 9.75e-13*var1[16];
  t1653 = 0.1000000000009*t1087;
  t2168 = -0.225000000003*t1671;
  t2302 = t895 + t1653 + t2168;
  t3231 = t2302*t3126;
  t3287 = 0.225000000005025*t1087;
  t3293 = 0.1000000000009*t1671;
  t3376 = t3287 + t3293;
  t3843 = t3376*t3805;
  t3920 = -3.25e-7*var1[16];
  t3929 = 3.000000000027e-7*t1087;
  t3933 = -6.75000000009e-7*t1671;
  t4813 = t3920 + t3929 + t3933;
  t4998 = -1.*t394*t4813*t4866;
  t5075 = -3.e-6*t1087*t3126;
  t5133 = -3.e-6*t1671*t3805;
  t5185 = -9.e-12*t1087;
  t5190 = 1. + t5185;
  t5197 = -1.*t5190*t394*t4866;
  t5214 = t5075 + t5133 + t5197;
  t5394 = t926*t3126;
  t5399 = -1.*t1671*t3805;
  t5516 = 3.e-6*t1087*t394*t4866;
  t5770 = t5394 + t5399 + t5516;
  t5812 = 0.1*t5770;
  t5880 = t1671*t3126;
  t5882 = -1.000000000009*t1087;
  t5923 = 1. + t5882;
  t5927 = t5923*t3805;
  t5931 = -3.e-6*t394*t1671*t4866;
  t5934 = t5880 + t5927 + t5931;
  t5293 = -0.126812*t5214;
  t5950 = 0.210343*t5934;
  t5955 = var1[0] + t442 + t860 + t3231 + t3843 + t4998 + t5293 + t5812 + t5950;
  t6517 = Sin(var1[3]);
  t6536 = Cos(var1[3]);
  t6534 = t428*t6517*t790;
  t6568 = t6536*t4866;
  t6577 = t6534 + t6568;
  t6618 = t6536*t428;
  t6649 = -1.*t6517*t790*t4866;
  t6658 = t6618 + t6649;
  t6664 = t394*t764*t6517;
  t6675 = t164*t6577;
  t6687 = t6664 + t6675;
  t6692 = -1.*t164*t394*t6517;
  t6701 = t764*t6577;
  t6718 = t6692 + t6701;
  t6529 = -0.225*t394*t764*t6517;
  t6586 = 0.225*t366*t6577;
  t6661 = t4813*t6658;
  t6689 = t3376*t6687;
  t6726 = t2302*t6718;
  t6730 = t5190*t6658;
  t6762 = -3.e-6*t1671*t6687;
  t6797 = -3.e-6*t1087*t6718;
  t6802 = t6730 + t6762 + t6797;
  t6814 = -3.e-6*t1087*t6658;
  t6856 = -1.*t1671*t6687;
  t6863 = t926*t6718;
  t6867 = t6814 + t6856 + t6863;
  t6868 = 0.1*t6867;
  t6871 = 3.e-6*t1671*t6658;
  t6904 = t5923*t6687;
  t6912 = t1671*t6718;
  t6934 = t6871 + t6904 + t6912;
  t6808 = -0.126812*t6802;
  t6950 = 0.210343*t6934;
  t6971 = var1[1] + t6529 + t6586 + t6661 + t6689 + t6726 + t6808 + t6868 + t6950;
  t8470 = -1.*t6536*t428*t790;
  t8564 = t6517*t4866;
  t8636 = t8470 + t8564;
  t8638 = t428*t6517;
  t8642 = t6536*t790*t4866;
  t8643 = t8638 + t8642;
  t8662 = -1.*t6536*t394*t764;
  t8665 = t164*t8636;
  t8666 = t8662 + t8665;
  t8698 = t164*t6536*t394;
  t8707 = t764*t8636;
  t8712 = t8698 + t8707;
  t8408 = 0.225*t6536*t394*t764;
  t8637 = 0.225*t366*t8636;
  t8660 = t4813*t8643;
  t8667 = t3376*t8666;
  t8713 = t2302*t8712;
  t8714 = t5190*t8643;
  t8715 = -3.e-6*t1671*t8666;
  t8716 = -3.e-6*t1087*t8712;
  t8720 = t8714 + t8715 + t8716;
  t8722 = -3.e-6*t1087*t8643;
  t8725 = -1.*t1671*t8666;
  t8727 = t926*t8712;
  t8728 = t8722 + t8725 + t8727;
  t8730 = 0.1*t8728;
  t8738 = 3.e-6*t1671*t8643;
  t8739 = t5923*t8666;
  t8741 = t1671*t8712;
  t8742 = t8738 + t8739 + t8741;
  t8721 = -0.126812*t8720;
  t8747 = 0.210343*t8742;
  t8751 = var1[2] + t8408 + t8637 + t8660 + t8667 + t8713 + t8721 + t8730 + t8747;
  t5963 = -0.122226*t5214;
  t9190 = -1.*t926*t3126;
  t9191 = t1671*t3805;
  t9193 = -3.e-6*t1087*t394*t4866;
  t9196 = t9190 + t9191 + t9193;
  t9197 = 0.1*t9196;
  t5979 = 0.212172*t5934;
  t5984 = -0.118482*t5214;
  t5989 = 0.215391*t5934;
  t5993 = -0.115986*t5214;
  t5994 = 0.219652*t5934;
  t6158 = -0.115009*t5214;
  t6220 = 0.224492*t5934;
  t6246 = 0.229387*t5934;
  t6254 = -0.117858*t5214;
  t6256 = 0.233807*t5934;
  t6276 = 0.237272*t5934;
  t6282 = 0.239408*t5934;
  t6289 = -0.130732*t5214;
  t6290 = 0.239982*t5934;
  t6302 = -0.135557*t5214;
  t6309 = 0.238933*t5934;
  t6316 = -0.13978*t5214;
  t6319 = 0.236374*t5934;
  t6325 = -0.142943*t5214;
  t6338 = 0.232582*t5934;
  t6364 = 0.227969*t5934;
  t6367 = -0.144871*t5214;
  t6370 = 0.223034*t5934;
  t6386 = 0.218312*t5934;
  t6439 = 0.214314*t5934;
  t6473 = 0.211475*t5934;
  t6496 = 0.210102*t5934;
  t9188 = -0.126813*t5214;
  t9199 = var1[0] + t442 + t860 + t3231 + t3843 + t4998 + t9188 + t9197 + t5950;
  t6984 = -0.122226*t6802;
  t9293 = 3.e-6*t1087*t6658;
  t9296 = t1671*t6687;
  t9304 = -1.*t926*t6718;
  t9310 = t9293 + t9296 + t9304;
  t9339 = 0.1*t9310;
  t6985 = 0.212172*t6934;
  t7033 = -0.118482*t6802;
  t7078 = 0.215391*t6934;
  t7129 = -0.115986*t6802;
  t7177 = 0.219652*t6934;
  t7222 = -0.115009*t6802;
  t7264 = 0.224492*t6934;
  t7278 = 0.229387*t6934;
  t7316 = -0.117858*t6802;
  t7317 = 0.233807*t6934;
  t7323 = 0.237272*t6934;
  t7333 = 0.239408*t6934;
  t7341 = -0.130732*t6802;
  t7342 = 0.239982*t6934;
  t7346 = -0.135557*t6802;
  t7355 = 0.238933*t6934;
  t7374 = -0.13978*t6802;
  t7381 = 0.236374*t6934;
  t7399 = -0.142943*t6802;
  t7400 = 0.232582*t6934;
  t7440 = 0.227969*t6934;
  t7470 = -0.144871*t6802;
  t7471 = 0.223034*t6934;
  t7684 = 0.218312*t6934;
  t7916 = 0.214314*t6934;
  t8121 = 0.211475*t6934;
  t8195 = 0.210102*t6934;
  t9279 = -0.126813*t6802;
  t9340 = var1[1] + t6529 + t6586 + t6661 + t6689 + t6726 + t9279 + t9339 + t6950;
  t8795 = -0.122226*t8720;
  t9396 = 3.e-6*t1087*t8643;
  t9397 = t1671*t8666;
  t9399 = -1.*t926*t8712;
  t9404 = t9396 + t9397 + t9399;
  t9407 = 0.1*t9404;
  t8797 = 0.212172*t8742;
  t8813 = -0.118482*t8720;
  t8815 = 0.215391*t8742;
  t8828 = -0.115986*t8720;
  t8836 = 0.219652*t8742;
  t8849 = -0.115009*t8720;
  t8859 = 0.224492*t8742;
  t8871 = 0.229387*t8742;
  t8876 = -0.117858*t8720;
  t8877 = 0.233807*t8742;
  t8881 = 0.237272*t8742;
  t8886 = 0.239408*t8742;
  t8942 = -0.130732*t8720;
  t8970 = 0.239982*t8742;
  t9013 = -0.135557*t8720;
  t9014 = 0.238933*t8742;
  t9020 = -0.13978*t8720;
  t9028 = 0.236374*t8742;
  t9045 = -0.142943*t8720;
  t9056 = 0.232582*t8742;
  t9090 = 0.227969*t8742;
  t9121 = -0.144871*t8720;
  t9141 = 0.223034*t8742;
  t9149 = 0.218312*t8742;
  t9163 = 0.214314*t8742;
  t9166 = 0.211475*t8742;
  t9182 = 0.210102*t8742;
  t9395 = -0.126813*t8720;
  t9409 = var1[2] + t8408 + t8637 + t8660 + t8667 + t8713 + t9395 + t9407 + t8747;
  p_output1[0]=t5955;
  p_output1[1]=t3231 + t3843 + t442 + t4998 + t5812 + t5963 + t5979 + t860 + var1[0];
  p_output1[2]=t3231 + t3843 + t442 + t4998 + t5812 + t5984 + t5989 + t860 + var1[0];
  p_output1[3]=t3231 + t3843 + t442 + t4998 + t5812 + t5993 + t5994 + t860 + var1[0];
  p_output1[4]=t3231 + t3843 + t442 + t4998 + t5812 + t6158 + t6220 + t860 + var1[0];
  p_output1[5]=t3231 + t3843 + t442 + t4998 - 0.115656*t5214 + t5812 + t6246 + t860 + var1[0];
  p_output1[6]=t3231 + t3843 + t442 + t4998 + t5812 + t6254 + t6256 + t860 + var1[0];
  p_output1[7]=t3231 + t3843 + t442 + t4998 - 0.121375*t5214 + t5812 + t6276 + t860 + var1[0];
  p_output1[8]=t3231 + t3843 + t442 + t4998 - 0.125827*t5214 + t5812 + t6282 + t860 + var1[0];
  p_output1[9]=t3231 + t3843 + t442 + t4998 + t5812 + t6289 + t6290 + t860 + var1[0];
  p_output1[10]=t3231 + t3843 + t442 + t4998 + t5812 + t6302 + t6309 + t860 + var1[0];
  p_output1[11]=t3231 + t3843 + t442 + t4998 + t5812 + t6316 + t6319 + t860 + var1[0];
  p_output1[12]=t3231 + t3843 + t442 + t4998 + t5812 + t6325 + t6338 + t860 + var1[0];
  p_output1[13]=t3231 + t3843 + t442 + t4998 - 0.144703*t5214 + t5812 + t6364 + t860 + var1[0];
  p_output1[14]=t3231 + t3843 + t442 + t4998 + t5812 + t6367 + t6370 + t860 + var1[0];
  p_output1[15]=t3231 + t3843 + t442 + t4998 - 0.143426*t5214 + t5812 + t6386 + t860 + var1[0];
  p_output1[16]=t3231 + t3843 + t442 + t4998 - 0.140527*t5214 + t5812 + t6439 + t860 + var1[0];
  p_output1[17]=t3231 + t3843 + t442 + t4998 - 0.136487*t5214 + t5812 + t6473 + t860 + var1[0];
  p_output1[18]=t3231 + t3843 + t442 + t4998 - 0.131744*t5214 + t5812 + t6496 + t860 + var1[0];
  p_output1[19]=t5955;
  p_output1[20]=t6971;
  p_output1[21]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t6984 + t6985 + var1[1];
  p_output1[22]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7033 + t7078 + var1[1];
  p_output1[23]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7129 + t7177 + var1[1];
  p_output1[24]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7222 + t7264 + var1[1];
  p_output1[25]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.115656*t6802 + t6868 + t7278 + var1[1];
  p_output1[26]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7316 + t7317 + var1[1];
  p_output1[27]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.121375*t6802 + t6868 + t7323 + var1[1];
  p_output1[28]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.125827*t6802 + t6868 + t7333 + var1[1];
  p_output1[29]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7341 + t7342 + var1[1];
  p_output1[30]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7346 + t7355 + var1[1];
  p_output1[31]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7374 + t7381 + var1[1];
  p_output1[32]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7399 + t7400 + var1[1];
  p_output1[33]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.144703*t6802 + t6868 + t7440 + var1[1];
  p_output1[34]=t6529 + t6586 + t6661 + t6689 + t6726 + t6868 + t7470 + t7471 + var1[1];
  p_output1[35]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.143426*t6802 + t6868 + t7684 + var1[1];
  p_output1[36]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.140527*t6802 + t6868 + t7916 + var1[1];
  p_output1[37]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.136487*t6802 + t6868 + t8121 + var1[1];
  p_output1[38]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.131744*t6802 + t6868 + t8195 + var1[1];
  p_output1[39]=t6971;
  p_output1[40]=t8751;
  p_output1[41]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t8795 + t8797 + var1[2];
  p_output1[42]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t8813 + t8815 + var1[2];
  p_output1[43]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t8828 + t8836 + var1[2];
  p_output1[44]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t8849 + t8859 + var1[2];
  p_output1[45]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.115656*t8720 + t8730 + t8871 + var1[2];
  p_output1[46]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t8876 + t8877 + var1[2];
  p_output1[47]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.121375*t8720 + t8730 + t8881 + var1[2];
  p_output1[48]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.125827*t8720 + t8730 + t8886 + var1[2];
  p_output1[49]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t8942 + t8970 + var1[2];
  p_output1[50]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t9013 + t9014 + var1[2];
  p_output1[51]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t9020 + t9028 + var1[2];
  p_output1[52]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t9045 + t9056 + var1[2];
  p_output1[53]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.144703*t8720 + t8730 + t9090 + var1[2];
  p_output1[54]=t8408 + t8637 + t8660 + t8667 + t8713 + t8730 + t9121 + t9141 + var1[2];
  p_output1[55]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.143426*t8720 + t8730 + t9149 + var1[2];
  p_output1[56]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.140527*t8720 + t8730 + t9163 + var1[2];
  p_output1[57]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.136487*t8720 + t8730 + t9166 + var1[2];
  p_output1[58]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.131744*t8720 + t8730 + t9182 + var1[2];
  p_output1[59]=t8751;
  p_output1[60]=t9199;
  p_output1[61]=t3231 + t3843 + t442 + t4998 + t5963 + t5979 + t860 + t9197 + var1[0];
  p_output1[62]=t3231 + t3843 + t442 + t4998 + t5984 + t5989 + t860 + t9197 + var1[0];
  p_output1[63]=t3231 + t3843 + t442 + t4998 + t5993 + t5994 + t860 + t9197 + var1[0];
  p_output1[64]=t3231 + t3843 + t442 + t4998 + t6158 + t6220 + t860 + t9197 + var1[0];
  p_output1[65]=t3231 + t3843 + t442 + t4998 - 0.115657*t5214 + t6246 + t860 + t9197 + var1[0];
  p_output1[66]=t3231 + t3843 + t442 + t4998 + t6254 + t6256 + t860 + t9197 + var1[0];
  p_output1[67]=t3231 + t3843 + t442 + t4998 - 0.121376*t5214 + t6276 + t860 + t9197 + var1[0];
  p_output1[68]=t3231 + t3843 + t442 + t4998 - 0.125828*t5214 + t6282 + t860 + t9197 + var1[0];
  p_output1[69]=t3231 + t3843 + t442 + t4998 + t6289 + t6290 + t860 + t9197 + var1[0];
  p_output1[70]=t3231 + t3843 + t442 + t4998 + t6302 + t6309 + t860 + t9197 + var1[0];
  p_output1[71]=t3231 + t3843 + t442 + t4998 + t6316 + t6319 + t860 + t9197 + var1[0];
  p_output1[72]=t3231 + t3843 + t442 + t4998 + t6325 + t6338 + t860 + t9197 + var1[0];
  p_output1[73]=t3231 + t3843 + t442 + t4998 - 0.144704*t5214 + t6364 + t860 + t9197 + var1[0];
  p_output1[74]=t3231 + t3843 + t442 + t4998 + t6367 + t6370 + t860 + t9197 + var1[0];
  p_output1[75]=t3231 + t3843 + t442 + t4998 - 0.143427*t5214 + t6386 + t860 + t9197 + var1[0];
  p_output1[76]=t3231 + t3843 + t442 + t4998 - 0.140528*t5214 + t6439 + t860 + t9197 + var1[0];
  p_output1[77]=t3231 + t3843 + t442 + t4998 - 0.136488*t5214 + t6473 + t860 + t9197 + var1[0];
  p_output1[78]=t3231 + t3843 + t442 + t4998 - 0.131745*t5214 + t6496 + t860 + t9197 + var1[0];
  p_output1[79]=t9199;
  p_output1[80]=t9340;
  p_output1[81]=t6529 + t6586 + t6661 + t6689 + t6726 + t6984 + t6985 + t9339 + var1[1];
  p_output1[82]=t6529 + t6586 + t6661 + t6689 + t6726 + t7033 + t7078 + t9339 + var1[1];
  p_output1[83]=t6529 + t6586 + t6661 + t6689 + t6726 + t7129 + t7177 + t9339 + var1[1];
  p_output1[84]=t6529 + t6586 + t6661 + t6689 + t6726 + t7222 + t7264 + t9339 + var1[1];
  p_output1[85]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.115657*t6802 + t7278 + t9339 + var1[1];
  p_output1[86]=t6529 + t6586 + t6661 + t6689 + t6726 + t7316 + t7317 + t9339 + var1[1];
  p_output1[87]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.121376*t6802 + t7323 + t9339 + var1[1];
  p_output1[88]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.125828*t6802 + t7333 + t9339 + var1[1];
  p_output1[89]=t6529 + t6586 + t6661 + t6689 + t6726 + t7341 + t7342 + t9339 + var1[1];
  p_output1[90]=t6529 + t6586 + t6661 + t6689 + t6726 + t7346 + t7355 + t9339 + var1[1];
  p_output1[91]=t6529 + t6586 + t6661 + t6689 + t6726 + t7374 + t7381 + t9339 + var1[1];
  p_output1[92]=t6529 + t6586 + t6661 + t6689 + t6726 + t7399 + t7400 + t9339 + var1[1];
  p_output1[93]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.144704*t6802 + t7440 + t9339 + var1[1];
  p_output1[94]=t6529 + t6586 + t6661 + t6689 + t6726 + t7470 + t7471 + t9339 + var1[1];
  p_output1[95]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.143427*t6802 + t7684 + t9339 + var1[1];
  p_output1[96]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.140528*t6802 + t7916 + t9339 + var1[1];
  p_output1[97]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.136488*t6802 + t8121 + t9339 + var1[1];
  p_output1[98]=t6529 + t6586 + t6661 + t6689 + t6726 - 0.131745*t6802 + t8195 + t9339 + var1[1];
  p_output1[99]=t9340;
  p_output1[100]=t9409;
  p_output1[101]=t8408 + t8637 + t8660 + t8667 + t8713 + t8795 + t8797 + t9407 + var1[2];
  p_output1[102]=t8408 + t8637 + t8660 + t8667 + t8713 + t8813 + t8815 + t9407 + var1[2];
  p_output1[103]=t8408 + t8637 + t8660 + t8667 + t8713 + t8828 + t8836 + t9407 + var1[2];
  p_output1[104]=t8408 + t8637 + t8660 + t8667 + t8713 + t8849 + t8859 + t9407 + var1[2];
  p_output1[105]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.115657*t8720 + t8871 + t9407 + var1[2];
  p_output1[106]=t8408 + t8637 + t8660 + t8667 + t8713 + t8876 + t8877 + t9407 + var1[2];
  p_output1[107]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.121376*t8720 + t8881 + t9407 + var1[2];
  p_output1[108]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.125828*t8720 + t8886 + t9407 + var1[2];
  p_output1[109]=t8408 + t8637 + t8660 + t8667 + t8713 + t8942 + t8970 + t9407 + var1[2];
  p_output1[110]=t8408 + t8637 + t8660 + t8667 + t8713 + t9013 + t9014 + t9407 + var1[2];
  p_output1[111]=t8408 + t8637 + t8660 + t8667 + t8713 + t9020 + t9028 + t9407 + var1[2];
  p_output1[112]=t8408 + t8637 + t8660 + t8667 + t8713 + t9045 + t9056 + t9407 + var1[2];
  p_output1[113]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.144704*t8720 + t9090 + t9407 + var1[2];
  p_output1[114]=t8408 + t8637 + t8660 + t8667 + t8713 + t9121 + t9141 + t9407 + var1[2];
  p_output1[115]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.143427*t8720 + t9149 + t9407 + var1[2];
  p_output1[116]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.140528*t8720 + t9163 + t9407 + var1[2];
  p_output1[117]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.136488*t8720 + t9166 + t9407 + var1[2];
  p_output1[118]=t8408 + t8637 + t8660 + t8667 + t8713 - 0.131745*t8720 + t9182 + t9407 + var1[2];
  p_output1[119]=t9409;
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
    ( !(mrows == 25 && ncols == 1) && 
      !(mrows == 1 && ncols == 25))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "lower_leg_front_rightL_link_bar.hh"

namespace SymFunction
{

void lower_leg_front_rightL_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
