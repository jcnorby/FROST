/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:31 GMT-04:00
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
  double t1613;
  double t1779;
  double t1800;
  double t1804;
  double t1823;
  double t1884;
  double t1933;
  double t1961;
  double t1854;
  double t1958;
  double t1962;
  double t1963;
  double t1965;
  double t1973;
  double t1974;
  double t1979;
  double t1984;
  double t1986;
  double t1988;
  double t1989;
  double t1994;
  double t1985;
  double t2013;
  double t2019;
  double t2099;
  double t2103;
  double t2101;
  double t2104;
  double t2106;
  double t2109;
  double t2110;
  double t2111;
  double t2100;
  double t2107;
  double t2112;
  double t2113;
  double t2114;
  double t2115;
  double t2116;
  double t2118;
  double t2119;
  double t2121;
  double t2122;
  double t2117;
  double t2124;
  double t2125;
  double t2304;
  double t2361;
  double t2366;
  double t2368;
  double t2370;
  double t2372;
  double t2292;
  double t2367;
  double t2373;
  double t2397;
  double t2413;
  double t2432;
  double t2449;
  double t2506;
  double t2512;
  double t2525;
  double t2526;
  double t2492;
  double t2529;
  double t2533;
  double t2021;
  double t2022;
  double t4120;
  double t4125;
  double t4128;
  double t4131;
  double t4133;
  double t4134;
  double t4137;
  double t2025;
  double t2026;
  double t2030;
  double t2031;
  double t2039;
  double t2041;
  double t2045;
  double t2046;
  double t2049;
  double t2050;
  double t2053;
  double t2054;
  double t2057;
  double t2059;
  double t2061;
  double t2062;
  double t2064;
  double t2065;
  double t2067;
  double t2068;
  double t2070;
  double t2071;
  double t2073;
  double t2074;
  double t2076;
  double t2077;
  double t2079;
  double t2080;
  double t2083;
  double t2085;
  double t2088;
  double t2089;
  double t2095;
  double t2097;
  double t4139;
  double t2127;
  double t2128;
  double t4177;
  double t4180;
  double t4231;
  double t4232;
  double t4235;
  double t2131;
  double t2132;
  double t2134;
  double t2135;
  double t2138;
  double t2139;
  double t2142;
  double t2143;
  double t2146;
  double t2147;
  double t2153;
  double t2154;
  double t2156;
  double t2157;
  double t2159;
  double t2160;
  double t2173;
  double t2179;
  double t2181;
  double t2182;
  double t2184;
  double t2185;
  double t2188;
  double t2189;
  double t2192;
  double t2193;
  double t2196;
  double t2197;
  double t2211;
  double t2221;
  double t2245;
  double t2252;
  double t2260;
  double t2263;
  double t4238;
  double t2550;
  double t2571;
  double t4273;
  double t4274;
  double t4276;
  double t4277;
  double t4279;
  double t2607;
  double t2611;
  double t2725;
  double t2931;
  double t2982;
  double t2984;
  double t3011;
  double t3046;
  double t3106;
  double t3150;
  double t3153;
  double t3156;
  double t3179;
  double t3188;
  double t3197;
  double t3202;
  double t3254;
  double t3268;
  double t3303;
  double t3313;
  double t3377;
  double t3381;
  double t3392;
  double t3394;
  double t3515;
  double t3778;
  double t3968;
  double t3992;
  double t4013;
  double t4025;
  double t4057;
  double t4097;
  double t4111;
  double t4113;
  double t4280;
  t1613 = Cos(var1[19]);
  t1779 = -1.*t1613;
  t1800 = 1. + t1779;
  t1804 = Cos(var1[4]);
  t1823 = Cos(var1[5]);
  t1884 = Sin(var1[19]);
  t1933 = Sin(var1[4]);
  t1961 = Sin(var1[5]);
  t1854 = -0.225000000002025*t1800*t1804*t1823;
  t1958 = 0.225000000002025*t1884*t1933;
  t1962 = -6.75000000006075e-7*t1800*t1804*t1961;
  t1963 = 3.e-6*t1800*t1804*t1823;
  t1965 = -3.e-6*t1884*t1933;
  t1973 = -9.e-12*t1800;
  t1974 = 1. + t1973;
  t1979 = -1.*t1974*t1804*t1961;
  t1984 = t1963 + t1965 + t1979;
  t1986 = t1613*t1804*t1823;
  t1988 = t1884*t1933;
  t1989 = -3.e-6*t1800*t1804*t1961;
  t1994 = t1986 + t1988 + t1989;
  t1985 = -0.122272*t1984;
  t2013 = -0.212144*t1994;
  t2019 = var1[0] + t1854 + t1958 + t1962 + t1985 + t2013;
  t2099 = Sin(var1[3]);
  t2103 = Cos(var1[3]);
  t2101 = t1823*t2099*t1933;
  t2104 = t2103*t1961;
  t2106 = t2101 + t2104;
  t2109 = t2103*t1823;
  t2110 = -1.*t2099*t1933*t1961;
  t2111 = t2109 + t2110;
  t2100 = -0.225000000002025*t1804*t1884*t2099;
  t2107 = -0.225000000002025*t1800*t2106;
  t2112 = 6.75000000006075e-7*t1800*t2111;
  t2113 = 3.e-6*t1804*t1884*t2099;
  t2114 = 3.e-6*t1800*t2106;
  t2115 = t1974*t2111;
  t2116 = t2113 + t2114 + t2115;
  t2118 = -1.*t1804*t1884*t2099;
  t2119 = t1613*t2106;
  t2121 = 3.e-6*t1800*t2111;
  t2122 = t2118 + t2119 + t2121;
  t2117 = -0.122272*t2116;
  t2124 = -0.212144*t2122;
  t2125 = var1[1] + t2100 + t2107 + t2112 + t2117 + t2124;
  t2304 = -1.*t2103*t1823*t1933;
  t2361 = t2099*t1961;
  t2366 = t2304 + t2361;
  t2368 = t1823*t2099;
  t2370 = t2103*t1933*t1961;
  t2372 = t2368 + t2370;
  t2292 = 0.225000000002025*t2103*t1804*t1884;
  t2367 = -0.225000000002025*t1800*t2366;
  t2373 = 6.75000000006075e-7*t1800*t2372;
  t2397 = -3.e-6*t2103*t1804*t1884;
  t2413 = 3.e-6*t1800*t2366;
  t2432 = t1974*t2372;
  t2449 = t2397 + t2413 + t2432;
  t2506 = t2103*t1804*t1884;
  t2512 = t1613*t2366;
  t2525 = 3.e-6*t1800*t2372;
  t2526 = t2506 + t2512 + t2525;
  t2492 = -0.122272*t2449;
  t2529 = -0.212144*t2526;
  t2533 = var1[2] + t2292 + t2367 + t2373 + t2492 + t2529;
  t2021 = -0.118517*t1984;
  t2022 = -0.21535*t1994;
  t4120 = -1.*t1804*t1823*t1884;
  t4125 = -1.000000000009*t1800;
  t4128 = 1. + t4125;
  t4131 = t4128*t1933;
  t4133 = -3.e-6*t1804*t1884*t1961;
  t4134 = t4120 + t4131 + t4133;
  t4137 = 0.1*t4134;
  t2025 = -0.116005*t1984;
  t2026 = -0.219601*t1994;
  t2030 = -0.115011*t1984;
  t2031 = -0.224438*t1994;
  t2039 = -0.11564*t1984;
  t2041 = -0.229335*t1994;
  t2045 = -0.117826*t1984;
  t2046 = -0.233763*t1994;
  t2049 = -0.121331*t1984;
  t2050 = -0.237241*t1994;
  t2053 = -0.125775*t1984;
  t2054 = -0.239393*t1994;
  t2057 = -0.130677*t1984;
  t2059 = -0.239985*t1994;
  t2061 = -0.135506*t1984;
  t2062 = -0.238953*t1994;
  t2064 = -0.139738*t1984;
  t2065 = -0.236409*t1994;
  t2067 = -0.142915*t1984;
  t2068 = -0.232629*t1994;
  t2070 = -0.144692*t1984;
  t2071 = -0.228022*t1994;
  t2073 = -0.144878*t1984;
  t2074 = -0.223087*t1994;
  t2076 = -0.14345*t1984;
  t2077 = -0.21836*t1994;
  t2079 = -0.140566*t1984;
  t2080 = -0.214353*t1994;
  t2083 = -0.136536*t1984;
  t2085 = -0.211499*t1994;
  t2088 = -0.131798*t1984;
  t2089 = -0.210108*t1994;
  t2095 = -0.126865*t1984;
  t2097 = -0.210331*t1994;
  t4139 = var1[0] + t1854 + t1958 + t1962 + t1985 + t2013 + t4137;
  t2127 = -0.118517*t2116;
  t2128 = -0.21535*t2122;
  t4177 = -1.*t4128*t1804*t2099;
  t4180 = -1.*t1884*t2106;
  t4231 = 3.e-6*t1884*t2111;
  t4232 = t4177 + t4180 + t4231;
  t4235 = 0.1*t4232;
  t2131 = -0.116005*t2116;
  t2132 = -0.219601*t2122;
  t2134 = -0.115011*t2116;
  t2135 = -0.224438*t2122;
  t2138 = -0.11564*t2116;
  t2139 = -0.229335*t2122;
  t2142 = -0.117826*t2116;
  t2143 = -0.233763*t2122;
  t2146 = -0.121331*t2116;
  t2147 = -0.237241*t2122;
  t2153 = -0.125775*t2116;
  t2154 = -0.239393*t2122;
  t2156 = -0.130677*t2116;
  t2157 = -0.239985*t2122;
  t2159 = -0.135506*t2116;
  t2160 = -0.238953*t2122;
  t2173 = -0.139738*t2116;
  t2179 = -0.236409*t2122;
  t2181 = -0.142915*t2116;
  t2182 = -0.232629*t2122;
  t2184 = -0.144692*t2116;
  t2185 = -0.228022*t2122;
  t2188 = -0.144878*t2116;
  t2189 = -0.223087*t2122;
  t2192 = -0.14345*t2116;
  t2193 = -0.21836*t2122;
  t2196 = -0.140566*t2116;
  t2197 = -0.214353*t2122;
  t2211 = -0.136536*t2116;
  t2221 = -0.211499*t2122;
  t2245 = -0.131798*t2116;
  t2252 = -0.210108*t2122;
  t2260 = -0.126865*t2116;
  t2263 = -0.210331*t2122;
  t4238 = var1[1] + t2100 + t2107 + t2112 + t2117 + t2124 + t4235;
  t2550 = -0.118517*t2449;
  t2571 = -0.21535*t2526;
  t4273 = t4128*t2103*t1804;
  t4274 = -1.*t1884*t2366;
  t4276 = 3.e-6*t1884*t2372;
  t4277 = t4273 + t4274 + t4276;
  t4279 = 0.1*t4277;
  t2607 = -0.116005*t2449;
  t2611 = -0.219601*t2526;
  t2725 = -0.115011*t2449;
  t2931 = -0.224438*t2526;
  t2982 = -0.11564*t2449;
  t2984 = -0.229335*t2526;
  t3011 = -0.117826*t2449;
  t3046 = -0.233763*t2526;
  t3106 = -0.121331*t2449;
  t3150 = -0.237241*t2526;
  t3153 = -0.125775*t2449;
  t3156 = -0.239393*t2526;
  t3179 = -0.130677*t2449;
  t3188 = -0.239985*t2526;
  t3197 = -0.135506*t2449;
  t3202 = -0.238953*t2526;
  t3254 = -0.139738*t2449;
  t3268 = -0.236409*t2526;
  t3303 = -0.142915*t2449;
  t3313 = -0.232629*t2526;
  t3377 = -0.144692*t2449;
  t3381 = -0.228022*t2526;
  t3392 = -0.144878*t2449;
  t3394 = -0.223087*t2526;
  t3515 = -0.14345*t2449;
  t3778 = -0.21836*t2526;
  t3968 = -0.140566*t2449;
  t3992 = -0.214353*t2526;
  t4013 = -0.136536*t2449;
  t4025 = -0.211499*t2526;
  t4057 = -0.131798*t2449;
  t4097 = -0.210108*t2526;
  t4111 = -0.126865*t2449;
  t4113 = -0.210331*t2526;
  t4280 = var1[2] + t2292 + t2367 + t2373 + t2492 + t2529 + t4279;
  p_output1[0]=t2019;
  p_output1[1]=t1854 + t1958 + t1962 + t2021 + t2022 + var1[0];
  p_output1[2]=t1854 + t1958 + t1962 + t2025 + t2026 + var1[0];
  p_output1[3]=t1854 + t1958 + t1962 + t2030 + t2031 + var1[0];
  p_output1[4]=t1854 + t1958 + t1962 + t2039 + t2041 + var1[0];
  p_output1[5]=t1854 + t1958 + t1962 + t2045 + t2046 + var1[0];
  p_output1[6]=t1854 + t1958 + t1962 + t2049 + t2050 + var1[0];
  p_output1[7]=t1854 + t1958 + t1962 + t2053 + t2054 + var1[0];
  p_output1[8]=t1854 + t1958 + t1962 + t2057 + t2059 + var1[0];
  p_output1[9]=t1854 + t1958 + t1962 + t2061 + t2062 + var1[0];
  p_output1[10]=t1854 + t1958 + t1962 + t2064 + t2065 + var1[0];
  p_output1[11]=t1854 + t1958 + t1962 + t2067 + t2068 + var1[0];
  p_output1[12]=t1854 + t1958 + t1962 + t2070 + t2071 + var1[0];
  p_output1[13]=t1854 + t1958 + t1962 + t2073 + t2074 + var1[0];
  p_output1[14]=t1854 + t1958 + t1962 + t2076 + t2077 + var1[0];
  p_output1[15]=t1854 + t1958 + t1962 + t2079 + t2080 + var1[0];
  p_output1[16]=t1854 + t1958 + t1962 + t2083 + t2085 + var1[0];
  p_output1[17]=t1854 + t1958 + t1962 + t2088 + t2089 + var1[0];
  p_output1[18]=t1854 + t1958 + t1962 + t2095 + t2097 + var1[0];
  p_output1[19]=t2019;
  p_output1[20]=t2125;
  p_output1[21]=t2100 + t2107 + t2112 + t2127 + t2128 + var1[1];
  p_output1[22]=t2100 + t2107 + t2112 + t2131 + t2132 + var1[1];
  p_output1[23]=t2100 + t2107 + t2112 + t2134 + t2135 + var1[1];
  p_output1[24]=t2100 + t2107 + t2112 + t2138 + t2139 + var1[1];
  p_output1[25]=t2100 + t2107 + t2112 + t2142 + t2143 + var1[1];
  p_output1[26]=t2100 + t2107 + t2112 + t2146 + t2147 + var1[1];
  p_output1[27]=t2100 + t2107 + t2112 + t2153 + t2154 + var1[1];
  p_output1[28]=t2100 + t2107 + t2112 + t2156 + t2157 + var1[1];
  p_output1[29]=t2100 + t2107 + t2112 + t2159 + t2160 + var1[1];
  p_output1[30]=t2100 + t2107 + t2112 + t2173 + t2179 + var1[1];
  p_output1[31]=t2100 + t2107 + t2112 + t2181 + t2182 + var1[1];
  p_output1[32]=t2100 + t2107 + t2112 + t2184 + t2185 + var1[1];
  p_output1[33]=t2100 + t2107 + t2112 + t2188 + t2189 + var1[1];
  p_output1[34]=t2100 + t2107 + t2112 + t2192 + t2193 + var1[1];
  p_output1[35]=t2100 + t2107 + t2112 + t2196 + t2197 + var1[1];
  p_output1[36]=t2100 + t2107 + t2112 + t2211 + t2221 + var1[1];
  p_output1[37]=t2100 + t2107 + t2112 + t2245 + t2252 + var1[1];
  p_output1[38]=t2100 + t2107 + t2112 + t2260 + t2263 + var1[1];
  p_output1[39]=t2125;
  p_output1[40]=t2533;
  p_output1[41]=t2292 + t2367 + t2373 + t2550 + t2571 + var1[2];
  p_output1[42]=t2292 + t2367 + t2373 + t2607 + t2611 + var1[2];
  p_output1[43]=t2292 + t2367 + t2373 + t2725 + t2931 + var1[2];
  p_output1[44]=t2292 + t2367 + t2373 + t2982 + t2984 + var1[2];
  p_output1[45]=t2292 + t2367 + t2373 + t3011 + t3046 + var1[2];
  p_output1[46]=t2292 + t2367 + t2373 + t3106 + t3150 + var1[2];
  p_output1[47]=t2292 + t2367 + t2373 + t3153 + t3156 + var1[2];
  p_output1[48]=t2292 + t2367 + t2373 + t3179 + t3188 + var1[2];
  p_output1[49]=t2292 + t2367 + t2373 + t3197 + t3202 + var1[2];
  p_output1[50]=t2292 + t2367 + t2373 + t3254 + t3268 + var1[2];
  p_output1[51]=t2292 + t2367 + t2373 + t3303 + t3313 + var1[2];
  p_output1[52]=t2292 + t2367 + t2373 + t3377 + t3381 + var1[2];
  p_output1[53]=t2292 + t2367 + t2373 + t3392 + t3394 + var1[2];
  p_output1[54]=t2292 + t2367 + t2373 + t3515 + t3778 + var1[2];
  p_output1[55]=t2292 + t2367 + t2373 + t3968 + t3992 + var1[2];
  p_output1[56]=t2292 + t2367 + t2373 + t4013 + t4025 + var1[2];
  p_output1[57]=t2292 + t2367 + t2373 + t4057 + t4097 + var1[2];
  p_output1[58]=t2292 + t2367 + t2373 + t4111 + t4113 + var1[2];
  p_output1[59]=t2533;
  p_output1[60]=t4139;
  p_output1[61]=t1854 + t1958 + t1962 + t2021 + t2022 + t4137 + var1[0];
  p_output1[62]=t1854 + t1958 + t1962 + t2025 + t2026 + t4137 + var1[0];
  p_output1[63]=t1854 + t1958 + t1962 + t2030 + t2031 + t4137 + var1[0];
  p_output1[64]=t1854 + t1958 + t1962 + t2039 + t2041 + t4137 + var1[0];
  p_output1[65]=t1854 + t1958 + t1962 + t2045 + t2046 + t4137 + var1[0];
  p_output1[66]=t1854 + t1958 + t1962 + t2049 + t2050 + t4137 + var1[0];
  p_output1[67]=t1854 + t1958 + t1962 + t2053 + t2054 + t4137 + var1[0];
  p_output1[68]=t1854 + t1958 + t1962 + t2057 + t2059 + t4137 + var1[0];
  p_output1[69]=t1854 + t1958 + t1962 + t2061 + t2062 + t4137 + var1[0];
  p_output1[70]=t1854 + t1958 + t1962 + t2064 + t2065 + t4137 + var1[0];
  p_output1[71]=t1854 + t1958 + t1962 + t2067 + t2068 + t4137 + var1[0];
  p_output1[72]=t1854 + t1958 + t1962 + t2070 + t2071 + t4137 + var1[0];
  p_output1[73]=t1854 + t1958 + t1962 + t2073 + t2074 + t4137 + var1[0];
  p_output1[74]=t1854 + t1958 + t1962 + t2076 + t2077 + t4137 + var1[0];
  p_output1[75]=t1854 + t1958 + t1962 + t2079 + t2080 + t4137 + var1[0];
  p_output1[76]=t1854 + t1958 + t1962 + t2083 + t2085 + t4137 + var1[0];
  p_output1[77]=t1854 + t1958 + t1962 + t2088 + t2089 + t4137 + var1[0];
  p_output1[78]=t1854 + t1958 + t1962 + t2095 + t2097 + t4137 + var1[0];
  p_output1[79]=t4139;
  p_output1[80]=t4238;
  p_output1[81]=t2100 + t2107 + t2112 + t2127 + t2128 + t4235 + var1[1];
  p_output1[82]=t2100 + t2107 + t2112 + t2131 + t2132 + t4235 + var1[1];
  p_output1[83]=t2100 + t2107 + t2112 + t2134 + t2135 + t4235 + var1[1];
  p_output1[84]=t2100 + t2107 + t2112 + t2138 + t2139 + t4235 + var1[1];
  p_output1[85]=t2100 + t2107 + t2112 + t2142 + t2143 + t4235 + var1[1];
  p_output1[86]=t2100 + t2107 + t2112 + t2146 + t2147 + t4235 + var1[1];
  p_output1[87]=t2100 + t2107 + t2112 + t2153 + t2154 + t4235 + var1[1];
  p_output1[88]=t2100 + t2107 + t2112 + t2156 + t2157 + t4235 + var1[1];
  p_output1[89]=t2100 + t2107 + t2112 + t2159 + t2160 + t4235 + var1[1];
  p_output1[90]=t2100 + t2107 + t2112 + t2173 + t2179 + t4235 + var1[1];
  p_output1[91]=t2100 + t2107 + t2112 + t2181 + t2182 + t4235 + var1[1];
  p_output1[92]=t2100 + t2107 + t2112 + t2184 + t2185 + t4235 + var1[1];
  p_output1[93]=t2100 + t2107 + t2112 + t2188 + t2189 + t4235 + var1[1];
  p_output1[94]=t2100 + t2107 + t2112 + t2192 + t2193 + t4235 + var1[1];
  p_output1[95]=t2100 + t2107 + t2112 + t2196 + t2197 + t4235 + var1[1];
  p_output1[96]=t2100 + t2107 + t2112 + t2211 + t2221 + t4235 + var1[1];
  p_output1[97]=t2100 + t2107 + t2112 + t2245 + t2252 + t4235 + var1[1];
  p_output1[98]=t2100 + t2107 + t2112 + t2260 + t2263 + t4235 + var1[1];
  p_output1[99]=t4238;
  p_output1[100]=t4280;
  p_output1[101]=t2292 + t2367 + t2373 + t2550 + t2571 + t4279 + var1[2];
  p_output1[102]=t2292 + t2367 + t2373 + t2607 + t2611 + t4279 + var1[2];
  p_output1[103]=t2292 + t2367 + t2373 + t2725 + t2931 + t4279 + var1[2];
  p_output1[104]=t2292 + t2367 + t2373 + t2982 + t2984 + t4279 + var1[2];
  p_output1[105]=t2292 + t2367 + t2373 + t3011 + t3046 + t4279 + var1[2];
  p_output1[106]=t2292 + t2367 + t2373 + t3106 + t3150 + t4279 + var1[2];
  p_output1[107]=t2292 + t2367 + t2373 + t3153 + t3156 + t4279 + var1[2];
  p_output1[108]=t2292 + t2367 + t2373 + t3179 + t3188 + t4279 + var1[2];
  p_output1[109]=t2292 + t2367 + t2373 + t3197 + t3202 + t4279 + var1[2];
  p_output1[110]=t2292 + t2367 + t2373 + t3254 + t3268 + t4279 + var1[2];
  p_output1[111]=t2292 + t2367 + t2373 + t3303 + t3313 + t4279 + var1[2];
  p_output1[112]=t2292 + t2367 + t2373 + t3377 + t3381 + t4279 + var1[2];
  p_output1[113]=t2292 + t2367 + t2373 + t3392 + t3394 + t4279 + var1[2];
  p_output1[114]=t2292 + t2367 + t2373 + t3515 + t3778 + t4279 + var1[2];
  p_output1[115]=t2292 + t2367 + t2373 + t3968 + t3992 + t4279 + var1[2];
  p_output1[116]=t2292 + t2367 + t2373 + t4013 + t4025 + t4279 + var1[2];
  p_output1[117]=t2292 + t2367 + t2373 + t4057 + t4097 + t4279 + var1[2];
  p_output1[118]=t2292 + t2367 + t2373 + t4111 + t4113 + t4279 + var1[2];
  p_output1[119]=t4280;
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

#include "Link_upper_leg_back_rightR_link_to_knee_back_rightR_link_bar.hh"

namespace SymFunction
{

void Link_upper_leg_back_rightR_link_to_knee_back_rightR_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
