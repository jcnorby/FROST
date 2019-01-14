/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:39 GMT-06:00
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
  double t167;
  double t204;
  double t466;
  double t179;
  double t476;
  double t482;
  double t485;
  double t488;
  double t489;
  double t496;
  double t521;
  double t523;
  double t532;
  double t242;
  double t267;
  double t270;
  double t462;
  double t477;
  double t495;
  double t497;
  double t539;
  double t540;
  double t543;
  double t592;
  double t600;
  double t618;
  double t624;
  double t597;
  double t627;
  double t649;
  double t1735;
  double t1751;
  double t1804;
  double t1809;
  double t1811;
  double t1746;
  double t1753;
  double t1757;
  double t1836;
  double t1838;
  double t1839;
  double t1844;
  double t1849;
  double t1852;
  double t1741;
  double t1801;
  double t1824;
  double t1843;
  double t1858;
  double t1866;
  double t1870;
  double t1884;
  double t1933;
  double t1942;
  double t1944;
  double t1926;
  double t1945;
  double t1954;
  double t2779;
  double t2783;
  double t2790;
  double t2750;
  double t2754;
  double t2761;
  double t2809;
  double t2811;
  double t2833;
  double t2849;
  double t2851;
  double t2866;
  double t2739;
  double t2768;
  double t2806;
  double t2834;
  double t2867;
  double t2869;
  double t2870;
  double t2871;
  double t2875;
  double t2879;
  double t2885;
  double t2874;
  double t2896;
  double t2904;
  double t3200;
  double t675;
  double t687;
  double t747;
  double t748;
  double t1125;
  double t1286;
  double t1308;
  double t1360;
  double t1455;
  double t1459;
  double t1461;
  double t1462;
  double t1472;
  double t1505;
  double t1530;
  double t1531;
  double t1543;
  double t1544;
  double t1555;
  double t1563;
  double t1601;
  double t1603;
  double t1617;
  double t1621;
  double t1632;
  double t1655;
  double t1659;
  double t1663;
  double t1674;
  double t1682;
  double t1689;
  double t1690;
  double t1695;
  double t1696;
  double t1705;
  double t1719;
  double t3240;
  double t3428;
  double t2035;
  double t2036;
  double t2039;
  double t2049;
  double t2066;
  double t2067;
  double t2140;
  double t2151;
  double t2173;
  double t2175;
  double t2186;
  double t2210;
  double t2242;
  double t2250;
  double t2259;
  double t2263;
  double t2266;
  double t2344;
  double t2397;
  double t2400;
  double t2422;
  double t2430;
  double t2472;
  double t2524;
  double t2540;
  double t2562;
  double t2609;
  double t2612;
  double t2650;
  double t2652;
  double t2657;
  double t2667;
  double t2677;
  double t2681;
  double t2732;
  double t2735;
  double t3431;
  double t3528;
  double t2906;
  double t2907;
  double t2942;
  double t2950;
  double t2956;
  double t2960;
  double t2969;
  double t2977;
  double t2999;
  double t3006;
  double t3011;
  double t3017;
  double t3021;
  double t3022;
  double t3024;
  double t3028;
  double t3033;
  double t3036;
  double t3040;
  double t3043;
  double t3046;
  double t3062;
  double t3094;
  double t3133;
  double t3147;
  double t3149;
  double t3159;
  double t3162;
  double t3164;
  double t3167;
  double t3169;
  double t3171;
  double t3173;
  double t3174;
  double t3176;
  double t3178;
  double t3529;
  t167 = Cos(var1[4]);
  t204 = Cos(var1[8]);
  t466 = Sin(var1[5]);
  t179 = Cos(var1[5]);
  t476 = Sin(var1[8]);
  t482 = Sin(var1[7]);
  t485 = -1.*t167*t204*t466;
  t488 = -1.*t167*t179*t476;
  t489 = t485 + t488;
  t496 = Cos(var1[7]);
  t521 = t167*t179*t204;
  t523 = -1.*t167*t466*t476;
  t532 = t521 + t523;
  t242 = -1. + t204;
  t267 = 0.0125*t167*t179*t242;
  t270 = Sin(var1[4]);
  t462 = 0.16197*t270;
  t477 = -0.0125*t167*t466*t476;
  t495 = 0.0125*t482*t489;
  t497 = -1. + t496;
  t539 = 0.0125*t497*t532;
  t540 = t482*t489;
  t543 = t496*t532;
  t592 = t540 + t543;
  t600 = t496*t489;
  t618 = -1.*t482*t532;
  t624 = t600 + t618;
  t597 = -0.022531*t592;
  t627 = -0.011152*t624;
  t649 = var1[0] + t267 + t462 + t477 + t495 + t539 + t597 + t627;
  t1735 = Sin(var1[3]);
  t1751 = Cos(var1[3]);
  t1804 = t1751*t179;
  t1809 = -1.*t1735*t270*t466;
  t1811 = t1804 + t1809;
  t1746 = t179*t1735*t270;
  t1753 = t1751*t466;
  t1757 = t1746 + t1753;
  t1836 = t204*t1811;
  t1838 = -1.*t1757*t476;
  t1839 = t1836 + t1838;
  t1844 = t204*t1757;
  t1849 = t1811*t476;
  t1852 = t1844 + t1849;
  t1741 = -0.16197*t167*t1735;
  t1801 = 0.0125*t242*t1757;
  t1824 = 0.0125*t1811*t476;
  t1843 = 0.0125*t482*t1839;
  t1858 = 0.0125*t497*t1852;
  t1866 = t482*t1839;
  t1870 = t496*t1852;
  t1884 = t1866 + t1870;
  t1933 = t496*t1839;
  t1942 = -1.*t482*t1852;
  t1944 = t1933 + t1942;
  t1926 = -0.022531*t1884;
  t1945 = -0.011152*t1944;
  t1954 = var1[1] + t1741 + t1801 + t1824 + t1843 + t1858 + t1926 + t1945;
  t2779 = t179*t1735;
  t2783 = t1751*t270*t466;
  t2790 = t2779 + t2783;
  t2750 = -1.*t1751*t179*t270;
  t2754 = t1735*t466;
  t2761 = t2750 + t2754;
  t2809 = t204*t2790;
  t2811 = -1.*t2761*t476;
  t2833 = t2809 + t2811;
  t2849 = t204*t2761;
  t2851 = t2790*t476;
  t2866 = t2849 + t2851;
  t2739 = 0.16197*t1751*t167;
  t2768 = 0.0125*t242*t2761;
  t2806 = 0.0125*t2790*t476;
  t2834 = 0.0125*t482*t2833;
  t2867 = 0.0125*t497*t2866;
  t2869 = t482*t2833;
  t2870 = t496*t2866;
  t2871 = t2869 + t2870;
  t2875 = t496*t2833;
  t2879 = -1.*t482*t2866;
  t2885 = t2875 + t2879;
  t2874 = -0.022531*t2871;
  t2896 = -0.011152*t2885;
  t2904 = var1[2] + t2739 + t2768 + t2806 + t2834 + t2867 + t2874 + t2896;
  t3200 = 0.21197*t270;
  t675 = -0.018366*t592;
  t687 = -0.013805*t624;
  t747 = -0.013566*t592;
  t748 = -0.014962*t624;
  t1125 = -0.00865*t592;
  t1286 = -0.014498*t624;
  t1308 = -0.004151*t592;
  t1360 = -0.012462*t624;
  t1455 = -0.000557*t592;
  t1459 = -0.009076*t624;
  t1461 = 0.001743*t592;
  t1462 = -0.004706*t624;
  t1472 = 0.002499*t592;
  t1505 = 0.000173*t624;
  t1530 = 0.00163*t592;
  t1531 = 0.005034*t624;
  t1543 = -0.00077*t592;
  t1544 = 0.009349*t624;
  t1555 = -0.004441*t592;
  t1563 = 0.012651*t624;
  t1601 = -0.008986*t592;
  t1603 = 0.014583*t624;
  t1617 = -0.013911*t592;
  t1621 = 0.014933*t624;
  t1632 = -0.018684*t592;
  t1655 = 0.013666*t624;
  t1659 = -0.022786*t592;
  t1663 = 0.010918*t624;
  t1674 = -0.025774*t592;
  t1682 = 0.006986*t624;
  t1689 = -0.027323*t592;
  t1690 = 0.002298*t624;
  t1695 = -0.027266*t592;
  t1696 = -0.00264*t624;
  t1705 = -0.025609*t592;
  t1719 = -0.007291*t624;
  t3240 = var1[0] + t267 + t3200 + t477 + t495 + t539 + t597 + t627;
  t3428 = -0.21197*t167*t1735;
  t2035 = -0.018366*t1884;
  t2036 = -0.013805*t1944;
  t2039 = -0.013566*t1884;
  t2049 = -0.014962*t1944;
  t2066 = -0.00865*t1884;
  t2067 = -0.014498*t1944;
  t2140 = -0.004151*t1884;
  t2151 = -0.012462*t1944;
  t2173 = -0.000557*t1884;
  t2175 = -0.009076*t1944;
  t2186 = 0.001743*t1884;
  t2210 = -0.004706*t1944;
  t2242 = 0.002499*t1884;
  t2250 = 0.000173*t1944;
  t2259 = 0.00163*t1884;
  t2263 = 0.005034*t1944;
  t2266 = -0.00077*t1884;
  t2344 = 0.009349*t1944;
  t2397 = -0.004441*t1884;
  t2400 = 0.012651*t1944;
  t2422 = -0.008986*t1884;
  t2430 = 0.014583*t1944;
  t2472 = -0.013911*t1884;
  t2524 = 0.014933*t1944;
  t2540 = -0.018684*t1884;
  t2562 = 0.013666*t1944;
  t2609 = -0.022786*t1884;
  t2612 = 0.010918*t1944;
  t2650 = -0.025774*t1884;
  t2652 = 0.006986*t1944;
  t2657 = -0.027323*t1884;
  t2667 = 0.002298*t1944;
  t2677 = -0.027266*t1884;
  t2681 = -0.00264*t1944;
  t2732 = -0.025609*t1884;
  t2735 = -0.007291*t1944;
  t3431 = var1[1] + t3428 + t1801 + t1824 + t1843 + t1858 + t1926 + t1945;
  t3528 = 0.21197*t1751*t167;
  t2906 = -0.018366*t2871;
  t2907 = -0.013805*t2885;
  t2942 = -0.013566*t2871;
  t2950 = -0.014962*t2885;
  t2956 = -0.00865*t2871;
  t2960 = -0.014498*t2885;
  t2969 = -0.004151*t2871;
  t2977 = -0.012462*t2885;
  t2999 = -0.000557*t2871;
  t3006 = -0.009076*t2885;
  t3011 = 0.001743*t2871;
  t3017 = -0.004706*t2885;
  t3021 = 0.002499*t2871;
  t3022 = 0.000173*t2885;
  t3024 = 0.00163*t2871;
  t3028 = 0.005034*t2885;
  t3033 = -0.00077*t2871;
  t3036 = 0.009349*t2885;
  t3040 = -0.004441*t2871;
  t3043 = 0.012651*t2885;
  t3046 = -0.008986*t2871;
  t3062 = 0.014583*t2885;
  t3094 = -0.013911*t2871;
  t3133 = 0.014933*t2885;
  t3147 = -0.018684*t2871;
  t3149 = 0.013666*t2885;
  t3159 = -0.022786*t2871;
  t3162 = 0.010918*t2885;
  t3164 = -0.025774*t2871;
  t3167 = 0.006986*t2885;
  t3169 = -0.027323*t2871;
  t3171 = 0.002298*t2885;
  t3173 = -0.027266*t2871;
  t3174 = -0.00264*t2885;
  t3176 = -0.025609*t2871;
  t3178 = -0.007291*t2885;
  t3529 = var1[2] + t3528 + t2768 + t2806 + t2834 + t2867 + t2874 + t2896;
  p_output1[0]=t649;
  p_output1[1]=t267 + t462 + t477 + t495 + t539 + t675 + t687 + var1[0];
  p_output1[2]=t267 + t462 + t477 + t495 + t539 + t747 + t748 + var1[0];
  p_output1[3]=t1125 + t1286 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[4]=t1308 + t1360 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[5]=t1455 + t1459 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[6]=t1461 + t1462 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[7]=t1472 + t1505 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[8]=t1530 + t1531 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[9]=t1543 + t1544 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[10]=t1555 + t1563 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[11]=t1601 + t1603 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[12]=t1617 + t1621 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[13]=t1632 + t1655 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[14]=t1659 + t1663 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[15]=t1674 + t1682 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[16]=t1689 + t1690 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[17]=t1695 + t1696 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[18]=t1705 + t1719 + t267 + t462 + t477 + t495 + t539 + var1[0];
  p_output1[19]=t649;
  p_output1[20]=t1954;
  p_output1[21]=t1741 + t1801 + t1824 + t1843 + t1858 + t2035 + t2036 + var1[1];
  p_output1[22]=t1741 + t1801 + t1824 + t1843 + t1858 + t2039 + t2049 + var1[1];
  p_output1[23]=t1741 + t1801 + t1824 + t1843 + t1858 + t2066 + t2067 + var1[1];
  p_output1[24]=t1741 + t1801 + t1824 + t1843 + t1858 + t2140 + t2151 + var1[1];
  p_output1[25]=t1741 + t1801 + t1824 + t1843 + t1858 + t2173 + t2175 + var1[1];
  p_output1[26]=t1741 + t1801 + t1824 + t1843 + t1858 + t2186 + t2210 + var1[1];
  p_output1[27]=t1741 + t1801 + t1824 + t1843 + t1858 + t2242 + t2250 + var1[1];
  p_output1[28]=t1741 + t1801 + t1824 + t1843 + t1858 + t2259 + t2263 + var1[1];
  p_output1[29]=t1741 + t1801 + t1824 + t1843 + t1858 + t2266 + t2344 + var1[1];
  p_output1[30]=t1741 + t1801 + t1824 + t1843 + t1858 + t2397 + t2400 + var1[1];
  p_output1[31]=t1741 + t1801 + t1824 + t1843 + t1858 + t2422 + t2430 + var1[1];
  p_output1[32]=t1741 + t1801 + t1824 + t1843 + t1858 + t2472 + t2524 + var1[1];
  p_output1[33]=t1741 + t1801 + t1824 + t1843 + t1858 + t2540 + t2562 + var1[1];
  p_output1[34]=t1741 + t1801 + t1824 + t1843 + t1858 + t2609 + t2612 + var1[1];
  p_output1[35]=t1741 + t1801 + t1824 + t1843 + t1858 + t2650 + t2652 + var1[1];
  p_output1[36]=t1741 + t1801 + t1824 + t1843 + t1858 + t2657 + t2667 + var1[1];
  p_output1[37]=t1741 + t1801 + t1824 + t1843 + t1858 + t2677 + t2681 + var1[1];
  p_output1[38]=t1741 + t1801 + t1824 + t1843 + t1858 + t2732 + t2735 + var1[1];
  p_output1[39]=t1954;
  p_output1[40]=t2904;
  p_output1[41]=t2739 + t2768 + t2806 + t2834 + t2867 + t2906 + t2907 + var1[2];
  p_output1[42]=t2739 + t2768 + t2806 + t2834 + t2867 + t2942 + t2950 + var1[2];
  p_output1[43]=t2739 + t2768 + t2806 + t2834 + t2867 + t2956 + t2960 + var1[2];
  p_output1[44]=t2739 + t2768 + t2806 + t2834 + t2867 + t2969 + t2977 + var1[2];
  p_output1[45]=t2739 + t2768 + t2806 + t2834 + t2867 + t2999 + t3006 + var1[2];
  p_output1[46]=t2739 + t2768 + t2806 + t2834 + t2867 + t3011 + t3017 + var1[2];
  p_output1[47]=t2739 + t2768 + t2806 + t2834 + t2867 + t3021 + t3022 + var1[2];
  p_output1[48]=t2739 + t2768 + t2806 + t2834 + t2867 + t3024 + t3028 + var1[2];
  p_output1[49]=t2739 + t2768 + t2806 + t2834 + t2867 + t3033 + t3036 + var1[2];
  p_output1[50]=t2739 + t2768 + t2806 + t2834 + t2867 + t3040 + t3043 + var1[2];
  p_output1[51]=t2739 + t2768 + t2806 + t2834 + t2867 + t3046 + t3062 + var1[2];
  p_output1[52]=t2739 + t2768 + t2806 + t2834 + t2867 + t3094 + t3133 + var1[2];
  p_output1[53]=t2739 + t2768 + t2806 + t2834 + t2867 + t3147 + t3149 + var1[2];
  p_output1[54]=t2739 + t2768 + t2806 + t2834 + t2867 + t3159 + t3162 + var1[2];
  p_output1[55]=t2739 + t2768 + t2806 + t2834 + t2867 + t3164 + t3167 + var1[2];
  p_output1[56]=t2739 + t2768 + t2806 + t2834 + t2867 + t3169 + t3171 + var1[2];
  p_output1[57]=t2739 + t2768 + t2806 + t2834 + t2867 + t3173 + t3174 + var1[2];
  p_output1[58]=t2739 + t2768 + t2806 + t2834 + t2867 + t3176 + t3178 + var1[2];
  p_output1[59]=t2904;
  p_output1[60]=t3240;
  p_output1[61]=t267 + t3200 + t477 + t495 + t539 + t675 + t687 + var1[0];
  p_output1[62]=t267 + t3200 + t477 + t495 + t539 + t747 + t748 + var1[0];
  p_output1[63]=t1125 + t1286 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[64]=t1308 + t1360 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[65]=t1455 + t1459 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[66]=t1461 + t1462 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[67]=t1472 + t1505 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[68]=t1530 + t1531 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[69]=t1543 + t1544 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[70]=t1555 + t1563 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[71]=t1601 + t1603 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[72]=t1617 + t1621 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[73]=t1632 + t1655 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[74]=t1659 + t1663 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[75]=t1674 + t1682 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[76]=t1689 + t1690 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[77]=t1695 + t1696 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[78]=t1705 + t1719 + t267 + t3200 + t477 + t495 + t539 + var1[0];
  p_output1[79]=t3240;
  p_output1[80]=t3431;
  p_output1[81]=t1801 + t1824 + t1843 + t1858 + t2035 + t2036 + t3428 + var1[1];
  p_output1[82]=t1801 + t1824 + t1843 + t1858 + t2039 + t2049 + t3428 + var1[1];
  p_output1[83]=t1801 + t1824 + t1843 + t1858 + t2066 + t2067 + t3428 + var1[1];
  p_output1[84]=t1801 + t1824 + t1843 + t1858 + t2140 + t2151 + t3428 + var1[1];
  p_output1[85]=t1801 + t1824 + t1843 + t1858 + t2173 + t2175 + t3428 + var1[1];
  p_output1[86]=t1801 + t1824 + t1843 + t1858 + t2186 + t2210 + t3428 + var1[1];
  p_output1[87]=t1801 + t1824 + t1843 + t1858 + t2242 + t2250 + t3428 + var1[1];
  p_output1[88]=t1801 + t1824 + t1843 + t1858 + t2259 + t2263 + t3428 + var1[1];
  p_output1[89]=t1801 + t1824 + t1843 + t1858 + t2266 + t2344 + t3428 + var1[1];
  p_output1[90]=t1801 + t1824 + t1843 + t1858 + t2397 + t2400 + t3428 + var1[1];
  p_output1[91]=t1801 + t1824 + t1843 + t1858 + t2422 + t2430 + t3428 + var1[1];
  p_output1[92]=t1801 + t1824 + t1843 + t1858 + t2472 + t2524 + t3428 + var1[1];
  p_output1[93]=t1801 + t1824 + t1843 + t1858 + t2540 + t2562 + t3428 + var1[1];
  p_output1[94]=t1801 + t1824 + t1843 + t1858 + t2609 + t2612 + t3428 + var1[1];
  p_output1[95]=t1801 + t1824 + t1843 + t1858 + t2650 + t2652 + t3428 + var1[1];
  p_output1[96]=t1801 + t1824 + t1843 + t1858 + t2657 + t2667 + t3428 + var1[1];
  p_output1[97]=t1801 + t1824 + t1843 + t1858 + t2677 + t2681 + t3428 + var1[1];
  p_output1[98]=t1801 + t1824 + t1843 + t1858 + t2732 + t2735 + t3428 + var1[1];
  p_output1[99]=t3431;
  p_output1[100]=t3529;
  p_output1[101]=t2768 + t2806 + t2834 + t2867 + t2906 + t2907 + t3528 + var1[2];
  p_output1[102]=t2768 + t2806 + t2834 + t2867 + t2942 + t2950 + t3528 + var1[2];
  p_output1[103]=t2768 + t2806 + t2834 + t2867 + t2956 + t2960 + t3528 + var1[2];
  p_output1[104]=t2768 + t2806 + t2834 + t2867 + t2969 + t2977 + t3528 + var1[2];
  p_output1[105]=t2768 + t2806 + t2834 + t2867 + t2999 + t3006 + t3528 + var1[2];
  p_output1[106]=t2768 + t2806 + t2834 + t2867 + t3011 + t3017 + t3528 + var1[2];
  p_output1[107]=t2768 + t2806 + t2834 + t2867 + t3021 + t3022 + t3528 + var1[2];
  p_output1[108]=t2768 + t2806 + t2834 + t2867 + t3024 + t3028 + t3528 + var1[2];
  p_output1[109]=t2768 + t2806 + t2834 + t2867 + t3033 + t3036 + t3528 + var1[2];
  p_output1[110]=t2768 + t2806 + t2834 + t2867 + t3040 + t3043 + t3528 + var1[2];
  p_output1[111]=t2768 + t2806 + t2834 + t2867 + t3046 + t3062 + t3528 + var1[2];
  p_output1[112]=t2768 + t2806 + t2834 + t2867 + t3094 + t3133 + t3528 + var1[2];
  p_output1[113]=t2768 + t2806 + t2834 + t2867 + t3147 + t3149 + t3528 + var1[2];
  p_output1[114]=t2768 + t2806 + t2834 + t2867 + t3159 + t3162 + t3528 + var1[2];
  p_output1[115]=t2768 + t2806 + t2834 + t2867 + t3164 + t3167 + t3528 + var1[2];
  p_output1[116]=t2768 + t2806 + t2834 + t2867 + t3169 + t3171 + t3528 + var1[2];
  p_output1[117]=t2768 + t2806 + t2834 + t2867 + t3173 + t3174 + t3528 + var1[2];
  p_output1[118]=t2768 + t2806 + t2834 + t2867 + t3176 + t3178 + t3528 + var1[2];
  p_output1[119]=t3529;
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
    ( !(mrows == 21 && ncols == 1) && 
      !(mrows == 1 && ncols == 21))) 
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

#include "Link_mtorso_to_back_bkx_bar.hh"

namespace SymFunction
{

void Link_mtorso_to_back_bkx_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
