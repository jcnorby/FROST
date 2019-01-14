/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:04 GMT-04:00
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
  double t1437;
  double t1461;
  double t1471;
  double t1487;
  double t1521;
  double t1527;
  double t1530;
  double t1539;
  double t1524;
  double t1536;
  double t1542;
  double t1545;
  double t1548;
  double t1574;
  double t1577;
  double t1620;
  double t1628;
  double t1630;
  double t1631;
  double t1633;
  double t1634;
  double t1629;
  double t1635;
  double t1636;
  double t2491;
  double t2563;
  double t2515;
  double t2616;
  double t2617;
  double t2657;
  double t2768;
  double t2810;
  double t2503;
  double t2643;
  double t2826;
  double t2874;
  double t2890;
  double t2891;
  double t2905;
  double t2918;
  double t2929;
  double t2932;
  double t2936;
  double t2912;
  double t2939;
  double t2941;
  double t5356;
  double t5364;
  double t5365;
  double t5668;
  double t5700;
  double t5714;
  double t5255;
  double t5551;
  double t5778;
  double t5926;
  double t5959;
  double t6076;
  double t6121;
  double t6474;
  double t6478;
  double t6489;
  double t6507;
  double t6310;
  double t6513;
  double t6578;
  double t1638;
  double t1639;
  double t7266;
  double t7275;
  double t7291;
  double t7318;
  double t7329;
  double t7337;
  double t7348;
  double t1642;
  double t1643;
  double t1646;
  double t1647;
  double t1649;
  double t1677;
  double t1679;
  double t1681;
  double t1683;
  double t1685;
  double t1687;
  double t1689;
  double t1691;
  double t1802;
  double t1942;
  double t2012;
  double t2096;
  double t2205;
  double t2232;
  double t2268;
  double t2293;
  double t2300;
  double t2320;
  double t2322;
  double t2340;
  double t2341;
  double t2365;
  double t2380;
  double t2385;
  double t2402;
  double t2435;
  double t2446;
  double t2460;
  double t2470;
  double t7350;
  double t2945;
  double t2948;
  double t7476;
  double t7478;
  double t7480;
  double t7482;
  double t7486;
  double t2956;
  double t2962;
  double t2995;
  double t3078;
  double t3221;
  double t3227;
  double t3327;
  double t3448;
  double t3683;
  double t3684;
  double t3725;
  double t3734;
  double t3803;
  double t3812;
  double t3932;
  double t3934;
  double t3970;
  double t3980;
  double t4033;
  double t4037;
  double t4053;
  double t4055;
  double t4062;
  double t4064;
  double t4091;
  double t4100;
  double t4159;
  double t4194;
  double t4909;
  double t4956;
  double t5091;
  double t5109;
  double t5198;
  double t5201;
  double t7487;
  double t6653;
  double t6672;
  double t7535;
  double t7536;
  double t7537;
  double t7539;
  double t7540;
  double t6739;
  double t6741;
  double t6801;
  double t6820;
  double t6896;
  double t6921;
  double t6932;
  double t6933;
  double t6949;
  double t6955;
  double t6981;
  double t6988;
  double t7020;
  double t7024;
  double t7055;
  double t7061;
  double t7067;
  double t7079;
  double t7093;
  double t7103;
  double t7109;
  double t7110;
  double t7165;
  double t7171;
  double t7183;
  double t7187;
  double t7207;
  double t7220;
  double t7229;
  double t7236;
  double t7239;
  double t7241;
  double t7251;
  double t7253;
  double t7541;
  t1437 = Cos(var1[10]);
  t1461 = -1.*t1437;
  t1471 = 1. + t1461;
  t1487 = Cos(var1[4]);
  t1521 = Cos(var1[5]);
  t1527 = Sin(var1[10]);
  t1530 = Sin(var1[4]);
  t1539 = Sin(var1[5]);
  t1524 = -0.225000000002025*t1471*t1487*t1521;
  t1536 = 0.225000000002025*t1527*t1530;
  t1542 = -6.75000000006075e-7*t1471*t1487*t1539;
  t1545 = 3.e-6*t1471*t1487*t1521;
  t1548 = -3.e-6*t1527*t1530;
  t1574 = -9.e-12*t1471;
  t1577 = 1. + t1574;
  t1620 = -1.*t1577*t1487*t1539;
  t1628 = t1545 + t1548 + t1620;
  t1630 = t1437*t1487*t1521;
  t1631 = t1527*t1530;
  t1633 = -3.e-6*t1471*t1487*t1539;
  t1634 = t1630 + t1631 + t1633;
  t1629 = 0.13701*t1628;
  t1635 = -0.211739*t1634;
  t1636 = var1[0] + t1524 + t1536 + t1542 + t1629 + t1635;
  t2491 = Sin(var1[3]);
  t2563 = Cos(var1[3]);
  t2515 = t1521*t2491*t1530;
  t2616 = t2563*t1539;
  t2617 = t2515 + t2616;
  t2657 = t2563*t1521;
  t2768 = -1.*t2491*t1530*t1539;
  t2810 = t2657 + t2768;
  t2503 = -0.225000000002025*t1487*t1527*t2491;
  t2643 = -0.225000000002025*t1471*t2617;
  t2826 = 6.75000000006075e-7*t1471*t2810;
  t2874 = 3.e-6*t1487*t1527*t2491;
  t2890 = 3.e-6*t1471*t2617;
  t2891 = t1577*t2810;
  t2905 = t2874 + t2890 + t2891;
  t2918 = -1.*t1487*t1527*t2491;
  t2929 = t1437*t2617;
  t2932 = 3.e-6*t1471*t2810;
  t2936 = t2918 + t2929 + t2932;
  t2912 = 0.13701*t2905;
  t2939 = -0.211739*t2936;
  t2941 = var1[1] + t2503 + t2643 + t2826 + t2912 + t2939;
  t5356 = -1.*t2563*t1521*t1530;
  t5364 = t2491*t1539;
  t5365 = t5356 + t5364;
  t5668 = t1521*t2491;
  t5700 = t2563*t1530*t1539;
  t5714 = t5668 + t5700;
  t5255 = 0.225000000002025*t2563*t1487*t1527;
  t5551 = -0.225000000002025*t1471*t5365;
  t5778 = 6.75000000006075e-7*t1471*t5714;
  t5926 = -3.e-6*t2563*t1487*t1527;
  t5959 = 3.e-6*t1471*t5365;
  t6076 = t1577*t5714;
  t6121 = t5926 + t5959 + t6076;
  t6474 = t2563*t1487*t1527;
  t6478 = t1437*t5365;
  t6489 = 3.e-6*t1471*t5714;
  t6507 = t6474 + t6478 + t6489;
  t6310 = 0.13701*t6121;
  t6513 = -0.211739*t6507;
  t6578 = var1[2] + t5255 + t5551 + t5778 + t6310 + t6513;
  t1638 = 0.140936*t1628;
  t1639 = -0.214733*t1634;
  t7266 = -1.*t1487*t1521*t1527;
  t7275 = -1.000000000009*t1471;
  t7291 = 1. + t7275;
  t7318 = t7291*t1530;
  t7329 = -3.e-6*t1487*t1527*t1539;
  t7337 = t7266 + t7318 + t7329;
  t7348 = 0.1*t7337;
  t1642 = 0.143677*t1628;
  t1643 = -0.21884*t1634;
  t1646 = 0.144936*t1628;
  t1647 = -0.223615*t1634;
  t1649 = 0.144576*t1628;
  t1677 = -0.22854*t1634;
  t1679 = 0.142637*t1628;
  t1681 = -0.233081*t1634;
  t1683 = 0.139329*t1628;
  t1685 = -0.236746*t1634;
  t1687 = 0.135009*t1628;
  t1689 = -0.239139*t1634;
  t1691 = 0.130147*t1628;
  t1802 = -0.239999*t1634;
  t1942 = 0.125269*t1628;
  t2012 = -0.239234*t1634;
  t2096 = 0.120903*t1628;
  t2205 = -0.236927*t1634;
  t2232 = 0.117523*t1628;
  t2268 = -0.233327*t1634;
  t2293 = 0.115496*t1628;
  t2300 = -0.228825*t1634;
  t2320 = 0.11504*t1628;
  t2322 = -0.223908*t1634;
  t2340 = 0.116205*t1628;
  t2341 = -0.219109*t1634;
  t2365 = 0.118865*t1628;
  t2380 = -0.214949*t1634;
  t2385 = 0.122732*t1628;
  t2402 = -0.211878*t1634;
  t2435 = 0.127386*t1628;
  t2446 = -0.210229*t1634;
  t2460 = 0.132324*t1628;
  t2470 = -0.210181*t1634;
  t7350 = var1[0] + t1524 + t1536 + t1542 + t1629 + t1635 + t7348;
  t2945 = 0.140936*t2905;
  t2948 = -0.214733*t2936;
  t7476 = -1.*t7291*t1487*t2491;
  t7478 = -1.*t1527*t2617;
  t7480 = 3.e-6*t1527*t2810;
  t7482 = t7476 + t7478 + t7480;
  t7486 = 0.1*t7482;
  t2956 = 0.143677*t2905;
  t2962 = -0.21884*t2936;
  t2995 = 0.144936*t2905;
  t3078 = -0.223615*t2936;
  t3221 = 0.144576*t2905;
  t3227 = -0.22854*t2936;
  t3327 = 0.142637*t2905;
  t3448 = -0.233081*t2936;
  t3683 = 0.139329*t2905;
  t3684 = -0.236746*t2936;
  t3725 = 0.135009*t2905;
  t3734 = -0.239139*t2936;
  t3803 = 0.130147*t2905;
  t3812 = -0.239999*t2936;
  t3932 = 0.125269*t2905;
  t3934 = -0.239234*t2936;
  t3970 = 0.120903*t2905;
  t3980 = -0.236927*t2936;
  t4033 = 0.117523*t2905;
  t4037 = -0.233327*t2936;
  t4053 = 0.115496*t2905;
  t4055 = -0.228825*t2936;
  t4062 = 0.11504*t2905;
  t4064 = -0.223908*t2936;
  t4091 = 0.116205*t2905;
  t4100 = -0.219109*t2936;
  t4159 = 0.118865*t2905;
  t4194 = -0.214949*t2936;
  t4909 = 0.122732*t2905;
  t4956 = -0.211878*t2936;
  t5091 = 0.127386*t2905;
  t5109 = -0.210229*t2936;
  t5198 = 0.132324*t2905;
  t5201 = -0.210181*t2936;
  t7487 = var1[1] + t2503 + t2643 + t2826 + t2912 + t2939 + t7486;
  t6653 = 0.140936*t6121;
  t6672 = -0.214733*t6507;
  t7535 = t7291*t2563*t1487;
  t7536 = -1.*t1527*t5365;
  t7537 = 3.e-6*t1527*t5714;
  t7539 = t7535 + t7536 + t7537;
  t7540 = 0.1*t7539;
  t6739 = 0.143677*t6121;
  t6741 = -0.21884*t6507;
  t6801 = 0.144936*t6121;
  t6820 = -0.223615*t6507;
  t6896 = 0.144576*t6121;
  t6921 = -0.22854*t6507;
  t6932 = 0.142637*t6121;
  t6933 = -0.233081*t6507;
  t6949 = 0.139329*t6121;
  t6955 = -0.236746*t6507;
  t6981 = 0.135009*t6121;
  t6988 = -0.239139*t6507;
  t7020 = 0.130147*t6121;
  t7024 = -0.239999*t6507;
  t7055 = 0.125269*t6121;
  t7061 = -0.239234*t6507;
  t7067 = 0.120903*t6121;
  t7079 = -0.236927*t6507;
  t7093 = 0.117523*t6121;
  t7103 = -0.233327*t6507;
  t7109 = 0.115496*t6121;
  t7110 = -0.228825*t6507;
  t7165 = 0.11504*t6121;
  t7171 = -0.223908*t6507;
  t7183 = 0.116205*t6121;
  t7187 = -0.219109*t6507;
  t7207 = 0.118865*t6121;
  t7220 = -0.214949*t6507;
  t7229 = 0.122732*t6121;
  t7236 = -0.211878*t6507;
  t7239 = 0.127386*t6121;
  t7241 = -0.210229*t6507;
  t7251 = 0.132324*t6121;
  t7253 = -0.210181*t6507;
  t7541 = var1[2] + t5255 + t5551 + t5778 + t6310 + t6513 + t7540;
  p_output1[0]=t1636;
  p_output1[1]=t1524 + t1536 + t1542 + t1638 + t1639 + var1[0];
  p_output1[2]=t1524 + t1536 + t1542 + t1642 + t1643 + var1[0];
  p_output1[3]=t1524 + t1536 + t1542 + t1646 + t1647 + var1[0];
  p_output1[4]=t1524 + t1536 + t1542 + t1649 + t1677 + var1[0];
  p_output1[5]=t1524 + t1536 + t1542 + t1679 + t1681 + var1[0];
  p_output1[6]=t1524 + t1536 + t1542 + t1683 + t1685 + var1[0];
  p_output1[7]=t1524 + t1536 + t1542 + t1687 + t1689 + var1[0];
  p_output1[8]=t1524 + t1536 + t1542 + t1691 + t1802 + var1[0];
  p_output1[9]=t1524 + t1536 + t1542 + t1942 + t2012 + var1[0];
  p_output1[10]=t1524 + t1536 + t1542 + t2096 + t2205 + var1[0];
  p_output1[11]=t1524 + t1536 + t1542 + t2232 + t2268 + var1[0];
  p_output1[12]=t1524 + t1536 + t1542 + t2293 + t2300 + var1[0];
  p_output1[13]=t1524 + t1536 + t1542 + t2320 + t2322 + var1[0];
  p_output1[14]=t1524 + t1536 + t1542 + t2340 + t2341 + var1[0];
  p_output1[15]=t1524 + t1536 + t1542 + t2365 + t2380 + var1[0];
  p_output1[16]=t1524 + t1536 + t1542 + t2385 + t2402 + var1[0];
  p_output1[17]=t1524 + t1536 + t1542 + t2435 + t2446 + var1[0];
  p_output1[18]=t1524 + t1536 + t1542 + t2460 + t2470 + var1[0];
  p_output1[19]=t1636;
  p_output1[20]=t2941;
  p_output1[21]=t2503 + t2643 + t2826 + t2945 + t2948 + var1[1];
  p_output1[22]=t2503 + t2643 + t2826 + t2956 + t2962 + var1[1];
  p_output1[23]=t2503 + t2643 + t2826 + t2995 + t3078 + var1[1];
  p_output1[24]=t2503 + t2643 + t2826 + t3221 + t3227 + var1[1];
  p_output1[25]=t2503 + t2643 + t2826 + t3327 + t3448 + var1[1];
  p_output1[26]=t2503 + t2643 + t2826 + t3683 + t3684 + var1[1];
  p_output1[27]=t2503 + t2643 + t2826 + t3725 + t3734 + var1[1];
  p_output1[28]=t2503 + t2643 + t2826 + t3803 + t3812 + var1[1];
  p_output1[29]=t2503 + t2643 + t2826 + t3932 + t3934 + var1[1];
  p_output1[30]=t2503 + t2643 + t2826 + t3970 + t3980 + var1[1];
  p_output1[31]=t2503 + t2643 + t2826 + t4033 + t4037 + var1[1];
  p_output1[32]=t2503 + t2643 + t2826 + t4053 + t4055 + var1[1];
  p_output1[33]=t2503 + t2643 + t2826 + t4062 + t4064 + var1[1];
  p_output1[34]=t2503 + t2643 + t2826 + t4091 + t4100 + var1[1];
  p_output1[35]=t2503 + t2643 + t2826 + t4159 + t4194 + var1[1];
  p_output1[36]=t2503 + t2643 + t2826 + t4909 + t4956 + var1[1];
  p_output1[37]=t2503 + t2643 + t2826 + t5091 + t5109 + var1[1];
  p_output1[38]=t2503 + t2643 + t2826 + t5198 + t5201 + var1[1];
  p_output1[39]=t2941;
  p_output1[40]=t6578;
  p_output1[41]=t5255 + t5551 + t5778 + t6653 + t6672 + var1[2];
  p_output1[42]=t5255 + t5551 + t5778 + t6739 + t6741 + var1[2];
  p_output1[43]=t5255 + t5551 + t5778 + t6801 + t6820 + var1[2];
  p_output1[44]=t5255 + t5551 + t5778 + t6896 + t6921 + var1[2];
  p_output1[45]=t5255 + t5551 + t5778 + t6932 + t6933 + var1[2];
  p_output1[46]=t5255 + t5551 + t5778 + t6949 + t6955 + var1[2];
  p_output1[47]=t5255 + t5551 + t5778 + t6981 + t6988 + var1[2];
  p_output1[48]=t5255 + t5551 + t5778 + t7020 + t7024 + var1[2];
  p_output1[49]=t5255 + t5551 + t5778 + t7055 + t7061 + var1[2];
  p_output1[50]=t5255 + t5551 + t5778 + t7067 + t7079 + var1[2];
  p_output1[51]=t5255 + t5551 + t5778 + t7093 + t7103 + var1[2];
  p_output1[52]=t5255 + t5551 + t5778 + t7109 + t7110 + var1[2];
  p_output1[53]=t5255 + t5551 + t5778 + t7165 + t7171 + var1[2];
  p_output1[54]=t5255 + t5551 + t5778 + t7183 + t7187 + var1[2];
  p_output1[55]=t5255 + t5551 + t5778 + t7207 + t7220 + var1[2];
  p_output1[56]=t5255 + t5551 + t5778 + t7229 + t7236 + var1[2];
  p_output1[57]=t5255 + t5551 + t5778 + t7239 + t7241 + var1[2];
  p_output1[58]=t5255 + t5551 + t5778 + t7251 + t7253 + var1[2];
  p_output1[59]=t6578;
  p_output1[60]=t7350;
  p_output1[61]=t1524 + t1536 + t1542 + t1638 + t1639 + t7348 + var1[0];
  p_output1[62]=t1524 + t1536 + t1542 + t1642 + t1643 + t7348 + var1[0];
  p_output1[63]=t1524 + t1536 + t1542 + t1646 + t1647 + t7348 + var1[0];
  p_output1[64]=t1524 + t1536 + t1542 + t1649 + t1677 + t7348 + var1[0];
  p_output1[65]=t1524 + t1536 + t1542 + t1679 + t1681 + t7348 + var1[0];
  p_output1[66]=t1524 + t1536 + t1542 + t1683 + t1685 + t7348 + var1[0];
  p_output1[67]=t1524 + t1536 + t1542 + t1687 + t1689 + t7348 + var1[0];
  p_output1[68]=t1524 + t1536 + t1542 + t1691 + t1802 + t7348 + var1[0];
  p_output1[69]=t1524 + t1536 + t1542 + t1942 + t2012 + t7348 + var1[0];
  p_output1[70]=t1524 + t1536 + t1542 + t2096 + t2205 + t7348 + var1[0];
  p_output1[71]=t1524 + t1536 + t1542 + t2232 + t2268 + t7348 + var1[0];
  p_output1[72]=t1524 + t1536 + t1542 + t2293 + t2300 + t7348 + var1[0];
  p_output1[73]=t1524 + t1536 + t1542 + t2320 + t2322 + t7348 + var1[0];
  p_output1[74]=t1524 + t1536 + t1542 + t2340 + t2341 + t7348 + var1[0];
  p_output1[75]=t1524 + t1536 + t1542 + t2365 + t2380 + t7348 + var1[0];
  p_output1[76]=t1524 + t1536 + t1542 + t2385 + t2402 + t7348 + var1[0];
  p_output1[77]=t1524 + t1536 + t1542 + t2435 + t2446 + t7348 + var1[0];
  p_output1[78]=t1524 + t1536 + t1542 + t2460 + t2470 + t7348 + var1[0];
  p_output1[79]=t7350;
  p_output1[80]=t7487;
  p_output1[81]=t2503 + t2643 + t2826 + t2945 + t2948 + t7486 + var1[1];
  p_output1[82]=t2503 + t2643 + t2826 + t2956 + t2962 + t7486 + var1[1];
  p_output1[83]=t2503 + t2643 + t2826 + t2995 + t3078 + t7486 + var1[1];
  p_output1[84]=t2503 + t2643 + t2826 + t3221 + t3227 + t7486 + var1[1];
  p_output1[85]=t2503 + t2643 + t2826 + t3327 + t3448 + t7486 + var1[1];
  p_output1[86]=t2503 + t2643 + t2826 + t3683 + t3684 + t7486 + var1[1];
  p_output1[87]=t2503 + t2643 + t2826 + t3725 + t3734 + t7486 + var1[1];
  p_output1[88]=t2503 + t2643 + t2826 + t3803 + t3812 + t7486 + var1[1];
  p_output1[89]=t2503 + t2643 + t2826 + t3932 + t3934 + t7486 + var1[1];
  p_output1[90]=t2503 + t2643 + t2826 + t3970 + t3980 + t7486 + var1[1];
  p_output1[91]=t2503 + t2643 + t2826 + t4033 + t4037 + t7486 + var1[1];
  p_output1[92]=t2503 + t2643 + t2826 + t4053 + t4055 + t7486 + var1[1];
  p_output1[93]=t2503 + t2643 + t2826 + t4062 + t4064 + t7486 + var1[1];
  p_output1[94]=t2503 + t2643 + t2826 + t4091 + t4100 + t7486 + var1[1];
  p_output1[95]=t2503 + t2643 + t2826 + t4159 + t4194 + t7486 + var1[1];
  p_output1[96]=t2503 + t2643 + t2826 + t4909 + t4956 + t7486 + var1[1];
  p_output1[97]=t2503 + t2643 + t2826 + t5091 + t5109 + t7486 + var1[1];
  p_output1[98]=t2503 + t2643 + t2826 + t5198 + t5201 + t7486 + var1[1];
  p_output1[99]=t7487;
  p_output1[100]=t7541;
  p_output1[101]=t5255 + t5551 + t5778 + t6653 + t6672 + t7540 + var1[2];
  p_output1[102]=t5255 + t5551 + t5778 + t6739 + t6741 + t7540 + var1[2];
  p_output1[103]=t5255 + t5551 + t5778 + t6801 + t6820 + t7540 + var1[2];
  p_output1[104]=t5255 + t5551 + t5778 + t6896 + t6921 + t7540 + var1[2];
  p_output1[105]=t5255 + t5551 + t5778 + t6932 + t6933 + t7540 + var1[2];
  p_output1[106]=t5255 + t5551 + t5778 + t6949 + t6955 + t7540 + var1[2];
  p_output1[107]=t5255 + t5551 + t5778 + t6981 + t6988 + t7540 + var1[2];
  p_output1[108]=t5255 + t5551 + t5778 + t7020 + t7024 + t7540 + var1[2];
  p_output1[109]=t5255 + t5551 + t5778 + t7055 + t7061 + t7540 + var1[2];
  p_output1[110]=t5255 + t5551 + t5778 + t7067 + t7079 + t7540 + var1[2];
  p_output1[111]=t5255 + t5551 + t5778 + t7093 + t7103 + t7540 + var1[2];
  p_output1[112]=t5255 + t5551 + t5778 + t7109 + t7110 + t7540 + var1[2];
  p_output1[113]=t5255 + t5551 + t5778 + t7165 + t7171 + t7540 + var1[2];
  p_output1[114]=t5255 + t5551 + t5778 + t7183 + t7187 + t7540 + var1[2];
  p_output1[115]=t5255 + t5551 + t5778 + t7207 + t7220 + t7540 + var1[2];
  p_output1[116]=t5255 + t5551 + t5778 + t7229 + t7236 + t7540 + var1[2];
  p_output1[117]=t5255 + t5551 + t5778 + t7239 + t7241 + t7540 + var1[2];
  p_output1[118]=t5255 + t5551 + t5778 + t7251 + t7253 + t7540 + var1[2];
  p_output1[119]=t7541;
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

#include "Link_upper_leg_back_leftL_link_to_knee_back_leftL_link_bar.hh"

namespace SymFunction
{

void Link_upper_leg_back_leftL_link_to_knee_back_leftL_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
