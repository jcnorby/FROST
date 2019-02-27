/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:42 GMT-04:00
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
  double t396;
  double t504;
  double t903;
  double t1604;
  double t3587;
  double t3617;
  double t3629;
  double t3661;
  double t3675;
  double t1757;
  double t3328;
  double t3373;
  double t3476;
  double t5136;
  double t5278;
  double t6209;
  double t4784;
  double t4862;
  double t6233;
  double t5757;
  double t5774;
  double t5787;
  double t5852;
  double t5935;
  double t5965;
  double t6495;
  double t6510;
  double t6515;
  double t6516;
  double t6582;
  double t6583;
  double t6584;
  double t6652;
  double t6656;
  double t6682;
  double t6697;
  double t6723;
  double t6724;
  double t6713;
  double t6271;
  double t6699;
  double t6965;
  double t2328;
  double t3374;
  double t3503;
  double t3526;
  double t3646;
  double t4902;
  double t5553;
  double t5605;
  double t6057;
  double t6214;
  double t6342;
  double t6441;
  double t6442;
  double t6448;
  double t6521;
  double t6522;
  double t6525;
  double t6532;
  double t6533;
  double t6535;
  double t6683;
  double t6700;
  double t6715;
  double t6717;
  double t6750;
  double t6839;
  double t6939;
  double t7001;
  double t7051;
  double t7054;
  double t7088;
  double t7100;
  double t7135;
  double t7141;
  double t7201;
  double t7357;
  double t7380;
  double t7414;
  double t7131;
  double t7544;
  double t7622;
  double t8856;
  double t8865;
  double t8862;
  double t8888;
  double t8891;
  double t8896;
  double t8899;
  double t8900;
  double t8905;
  double t8909;
  double t8910;
  double t8928;
  double t8938;
  double t8943;
  double t8944;
  double t8947;
  double t8955;
  double t8958;
  double t8960;
  double t8961;
  double t8861;
  double t8895;
  double t8904;
  double t8936;
  double t8952;
  double t8965;
  double t8973;
  double t8976;
  double t8979;
  double t8982;
  double t8991;
  double t8993;
  double t8994;
  double t8995;
  double t8997;
  double t8999;
  double t9001;
  double t9002;
  double t9003;
  double t8998;
  double t9005;
  double t9006;
  double t9105;
  double t9106;
  double t9107;
  double t9109;
  double t9110;
  double t9111;
  double t9113;
  double t9119;
  double t9123;
  double t9124;
  double t9126;
  double t9127;
  double t9128;
  double t9129;
  double t9131;
  double t9132;
  double t9133;
  double t9134;
  double t9102;
  double t9108;
  double t9112;
  double t9125;
  double t9130;
  double t9135;
  double t9136;
  double t9137;
  double t9138;
  double t9139;
  double t9140;
  double t9143;
  double t9144;
  double t9145;
  double t9146;
  double t9150;
  double t9151;
  double t9152;
  double t9154;
  double t9148;
  double t9155;
  double t9156;
  double t9228;
  double t7686;
  double t7767;
  double t7836;
  double t7952;
  double t7955;
  double t8003;
  double t8134;
  double t8446;
  double t8451;
  double t8465;
  double t8490;
  double t8508;
  double t8537;
  double t8546;
  double t8567;
  double t8586;
  double t8603;
  double t8635;
  double t8639;
  double t8696;
  double t8697;
  double t8706;
  double t8726;
  double t8744;
  double t8746;
  double t9229;
  double t9230;
  double t9262;
  double t9007;
  double t9011;
  double t9021;
  double t9025;
  double t9027;
  double t9031;
  double t9041;
  double t9054;
  double t9055;
  double t9060;
  double t9063;
  double t9066;
  double t9069;
  double t9070;
  double t9072;
  double t9075;
  double t9076;
  double t9078;
  double t9079;
  double t9081;
  double t9082;
  double t9084;
  double t9087;
  double t9098;
  double t9100;
  double t9263;
  double t9264;
  double t9308;
  double t9158;
  double t9161;
  double t9170;
  double t9174;
  double t9175;
  double t9177;
  double t9180;
  double t9183;
  double t9184;
  double t9186;
  double t9189;
  double t9195;
  double t9198;
  double t9200;
  double t9207;
  double t9210;
  double t9211;
  double t9213;
  double t9214;
  double t9216;
  double t9217;
  double t9219;
  double t9222;
  double t9225;
  double t9226;
  double t9309;
  double t9311;
  t396 = Cos(var1[19]);
  t504 = -1.*t396;
  t903 = 1. + t504;
  t1604 = Cos(var1[4]);
  t3587 = Cos(var1[21]);
  t3617 = -1.*t3587;
  t3629 = 1. + t3617;
  t3661 = -3.e-6*t3629;
  t3675 = Sin(var1[21]);
  t1757 = Cos(var1[5]);
  t3328 = Sin(var1[19]);
  t3373 = Sin(var1[4]);
  t3476 = Sin(var1[5]);
  t5136 = 3.e-6*t3675;
  t5278 = t3661 + t5136;
  t6209 = 7.5e-14*var1[21];
  t4784 = -3.e-6*t3675;
  t4862 = t3661 + t4784;
  t6233 = -9.e-12*t3629;
  t5757 = 3.e-6*t903*t1604*t1757;
  t5774 = -3.e-6*t3328*t3373;
  t5787 = -9.e-12*t903;
  t5852 = 1. + t5787;
  t5935 = -1.*t5852*t1604*t3476;
  t5965 = t5757 + t5774 + t5935;
  t6495 = t396*t1604*t1757;
  t6510 = t3328*t3373;
  t6515 = -3.e-6*t903*t1604*t3476;
  t6516 = t6495 + t6510 + t6515;
  t6582 = -1.*t1604*t1757*t3328;
  t6583 = -1.000000000009*t903;
  t6584 = 1. + t6583;
  t6652 = t6584*t3373;
  t6656 = -3.e-6*t1604*t3328*t3476;
  t6682 = t6582 + t6652 + t6656;
  t6697 = 3.e-6*t3629;
  t6723 = -1.000000000009*t3629;
  t6724 = 1. + t6723;
  t6713 = 9.e-12*t3629;
  t6271 = -1.*t3675;
  t6699 = t6697 + t4784;
  t6965 = t6697 + t5136;
  t2328 = -0.225000000002025*t903*t1604*t1757;
  t3374 = 0.225000000002025*t3328*t3373;
  t3503 = -6.75000000006075e-7*t903*t1604*t3476;
  t3526 = 2.5e-8*var1[21];
  t3646 = 6.75e-18*t3629;
  t4902 = -0.225000000003*t4862;
  t5553 = 0.100000000003*t5278;
  t5605 = t3526 + t3646 + t4902 + t5553;
  t6057 = t5605*t5965;
  t6214 = -0.225000000005025*t3629;
  t6342 = t6233 + t6271;
  t6441 = 0.100000000003*t6342;
  t6442 = 3.75e-7*t5278;
  t6448 = t6209 + t6214 + t6441 + t6442;
  t6521 = t6448*t6516;
  t6522 = 0.1000000000039*t3629;
  t6525 = 3.75e-7*t4862;
  t6532 = t6233 + t3675;
  t6533 = -0.225000000003*t6532;
  t6535 = t6209 + t6522 + t6525 + t6533;
  t6683 = t6535*t6682;
  t6700 = t6699*t5965;
  t6715 = t6713 + t3675;
  t6717 = t6715*t6516;
  t6750 = t6724*t6682;
  t6839 = t6700 + t6717 + t6750;
  t6939 = 0.1*t6839;
  t7001 = t6965*t5965;
  t7051 = t6724*t6516;
  t7054 = t6713 + t6271;
  t7088 = t7054*t6682;
  t7100 = t7001 + t7051 + t7088;
  t7135 = -1.8e-11*t3629;
  t7141 = 1. + t7135;
  t7201 = t7141*t5965;
  t7357 = t6699*t6516;
  t7380 = t6965*t6682;
  t7414 = t7201 + t7357 + t7380;
  t7131 = -0.210699*t7100;
  t7544 = -0.134527*t7414;
  t7622 = var1[0] + t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 + t7131 + t7544;
  t8856 = Sin(var1[3]);
  t8865 = Cos(var1[3]);
  t8862 = t1757*t8856*t3373;
  t8888 = t8865*t3476;
  t8891 = t8862 + t8888;
  t8896 = t8865*t1757;
  t8899 = -1.*t8856*t3373*t3476;
  t8900 = t8896 + t8899;
  t8905 = 3.e-6*t1604*t3328*t8856;
  t8909 = 3.e-6*t903*t8891;
  t8910 = t5852*t8900;
  t8928 = t8905 + t8909 + t8910;
  t8938 = -1.*t1604*t3328*t8856;
  t8943 = t396*t8891;
  t8944 = 3.e-6*t903*t8900;
  t8947 = t8938 + t8943 + t8944;
  t8955 = -1.*t6584*t1604*t8856;
  t8958 = -1.*t3328*t8891;
  t8960 = 3.e-6*t3328*t8900;
  t8961 = t8955 + t8958 + t8960;
  t8861 = -0.225000000002025*t1604*t3328*t8856;
  t8895 = -0.225000000002025*t903*t8891;
  t8904 = 6.75000000006075e-7*t903*t8900;
  t8936 = t5605*t8928;
  t8952 = t6448*t8947;
  t8965 = t6535*t8961;
  t8973 = t6699*t8928;
  t8976 = t6715*t8947;
  t8979 = t6724*t8961;
  t8982 = t8973 + t8976 + t8979;
  t8991 = 0.1*t8982;
  t8993 = t6965*t8928;
  t8994 = t6724*t8947;
  t8995 = t7054*t8961;
  t8997 = t8993 + t8994 + t8995;
  t8999 = t7141*t8928;
  t9001 = t6699*t8947;
  t9002 = t6965*t8961;
  t9003 = t8999 + t9001 + t9002;
  t8998 = -0.210699*t8997;
  t9005 = -0.134527*t9003;
  t9006 = var1[1] + t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 + t8998 + t9005;
  t9105 = -1.*t8865*t1757*t3373;
  t9106 = t8856*t3476;
  t9107 = t9105 + t9106;
  t9109 = t1757*t8856;
  t9110 = t8865*t3373*t3476;
  t9111 = t9109 + t9110;
  t9113 = -3.e-6*t8865*t1604*t3328;
  t9119 = 3.e-6*t903*t9107;
  t9123 = t5852*t9111;
  t9124 = t9113 + t9119 + t9123;
  t9126 = t8865*t1604*t3328;
  t9127 = t396*t9107;
  t9128 = 3.e-6*t903*t9111;
  t9129 = t9126 + t9127 + t9128;
  t9131 = t6584*t8865*t1604;
  t9132 = -1.*t3328*t9107;
  t9133 = 3.e-6*t3328*t9111;
  t9134 = t9131 + t9132 + t9133;
  t9102 = 0.225000000002025*t8865*t1604*t3328;
  t9108 = -0.225000000002025*t903*t9107;
  t9112 = 6.75000000006075e-7*t903*t9111;
  t9125 = t5605*t9124;
  t9130 = t6448*t9129;
  t9135 = t6535*t9134;
  t9136 = t6699*t9124;
  t9137 = t6715*t9129;
  t9138 = t6724*t9134;
  t9139 = t9136 + t9137 + t9138;
  t9140 = 0.1*t9139;
  t9143 = t6965*t9124;
  t9144 = t6724*t9129;
  t9145 = t7054*t9134;
  t9146 = t9143 + t9144 + t9145;
  t9150 = t7141*t9124;
  t9151 = t6699*t9129;
  t9152 = t6965*t9134;
  t9154 = t9150 + t9151 + t9152;
  t9148 = -0.210699*t9146;
  t9155 = -0.134527*t9154;
  t9156 = var1[2] + t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 + t9148 + t9155;
  t9228 = -0.14*t6839;
  t7686 = -0.212944*t7100;
  t7767 = -0.216495*t7100;
  t7836 = -0.220968*t7100;
  t7952 = -0.225878*t7100;
  t7955 = -0.144974*t7414;
  t8003 = -0.230692*t7100;
  t8134 = -0.23489*t7100;
  t8446 = -0.238016*t7100;
  t8451 = -0.137455*t7414;
  t8465 = -0.239732*t7100;
  t8490 = -0.239851*t7100;
  t8508 = -0.23836*t7100;
  t8537 = -0.235422*t7100;
  t8546 = -0.119212*t7414;
  t8567 = -0.231355*t7100;
  t8586 = -0.226599*t7100;
  t8603 = -0.115085*t7414;
  t8635 = -0.221669*t7100;
  t8639 = -0.115374*t7414;
  t8696 = -0.217101*t7100;
  t8697 = -0.117248*t7414;
  t8706 = -0.213388*t7100;
  t8726 = -0.210934*t7100;
  t8744 = -0.210004*t7100;
  t8746 = -0.129638*t7414;
  t9229 = -0.134526*t7414;
  t9230 = var1[0] + t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t9228 + t7131 + t9229;
  t9262 = -0.14*t8982;
  t9007 = -0.212944*t8997;
  t9011 = -0.216495*t8997;
  t9021 = -0.220968*t8997;
  t9025 = -0.225878*t8997;
  t9027 = -0.144974*t9003;
  t9031 = -0.230692*t8997;
  t9041 = -0.23489*t8997;
  t9054 = -0.238016*t8997;
  t9055 = -0.137455*t9003;
  t9060 = -0.239732*t8997;
  t9063 = -0.239851*t8997;
  t9066 = -0.23836*t8997;
  t9069 = -0.235422*t8997;
  t9070 = -0.119212*t9003;
  t9072 = -0.231355*t8997;
  t9075 = -0.226599*t8997;
  t9076 = -0.115085*t9003;
  t9078 = -0.221669*t8997;
  t9079 = -0.115374*t9003;
  t9081 = -0.217101*t8997;
  t9082 = -0.117248*t9003;
  t9084 = -0.213388*t8997;
  t9087 = -0.210934*t8997;
  t9098 = -0.210004*t8997;
  t9100 = -0.129638*t9003;
  t9263 = -0.134526*t9003;
  t9264 = var1[1] + t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t9262 + t8998 + t9263;
  t9308 = -0.14*t9139;
  t9158 = -0.212944*t9146;
  t9161 = -0.216495*t9146;
  t9170 = -0.220968*t9146;
  t9174 = -0.225878*t9146;
  t9175 = -0.144974*t9154;
  t9177 = -0.230692*t9146;
  t9180 = -0.23489*t9146;
  t9183 = -0.238016*t9146;
  t9184 = -0.137455*t9154;
  t9186 = -0.239732*t9146;
  t9189 = -0.239851*t9146;
  t9195 = -0.23836*t9146;
  t9198 = -0.235422*t9146;
  t9200 = -0.119212*t9154;
  t9207 = -0.231355*t9146;
  t9210 = -0.226599*t9146;
  t9211 = -0.115085*t9154;
  t9213 = -0.221669*t9146;
  t9214 = -0.115374*t9154;
  t9216 = -0.217101*t9146;
  t9217 = -0.117248*t9154;
  t9219 = -0.213388*t9146;
  t9222 = -0.210934*t9146;
  t9225 = -0.210004*t9146;
  t9226 = -0.129638*t9154;
  t9309 = -0.134526*t9154;
  t9311 = var1[2] + t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9308 + t9148 + t9309;
  p_output1[0]=t7622;
  p_output1[1]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.138925*t7414 + t7686 + var1[0];
  p_output1[2]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.142356*t7414 + t7767 + var1[0];
  p_output1[3]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.144448*t7414 + t7836 + var1[0];
  p_output1[4]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 + t7952 + t7955 + var1[0];
  p_output1[5]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.143878*t7414 + t8003 + var1[0];
  p_output1[6]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.141278*t7414 + t8134 + var1[0];
  p_output1[7]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 + t8446 + t8451 + var1[0];
  p_output1[8]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.132825*t7414 + t8465 + var1[0];
  p_output1[9]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.127889*t7414 + t8490 + var1[0];
  p_output1[10]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.123181*t7414 + t8508 + var1[0];
  p_output1[11]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 + t8537 + t8546 + var1[0];
  p_output1[12]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.116413*t7414 + t8567 + var1[0];
  p_output1[13]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 + t8586 + t8603 + var1[0];
  p_output1[14]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 + t8635 + t8639 + var1[0];
  p_output1[15]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 + t8696 + t8697 + var1[0];
  p_output1[16]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.120504*t7414 + t8706 + var1[0];
  p_output1[17]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 - 0.124789*t7414 + t8726 + var1[0];
  p_output1[18]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t6939 + t8744 + t8746 + var1[0];
  p_output1[19]=t7622;
  p_output1[20]=t9006;
  p_output1[21]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.138925*t9003 + t9007 + var1[1];
  p_output1[22]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.142356*t9003 + t9011 + var1[1];
  p_output1[23]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.144448*t9003 + t9021 + var1[1];
  p_output1[24]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 + t9025 + t9027 + var1[1];
  p_output1[25]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.143878*t9003 + t9031 + var1[1];
  p_output1[26]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.141278*t9003 + t9041 + var1[1];
  p_output1[27]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 + t9054 + t9055 + var1[1];
  p_output1[28]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.132825*t9003 + t9060 + var1[1];
  p_output1[29]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.127889*t9003 + t9063 + var1[1];
  p_output1[30]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.123181*t9003 + t9066 + var1[1];
  p_output1[31]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 + t9069 + t9070 + var1[1];
  p_output1[32]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.116413*t9003 + t9072 + var1[1];
  p_output1[33]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 + t9075 + t9076 + var1[1];
  p_output1[34]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 + t9078 + t9079 + var1[1];
  p_output1[35]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 + t9081 + t9082 + var1[1];
  p_output1[36]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.120504*t9003 + t9084 + var1[1];
  p_output1[37]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 - 0.124789*t9003 + t9087 + var1[1];
  p_output1[38]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t8991 + t9098 + t9100 + var1[1];
  p_output1[39]=t9006;
  p_output1[40]=t9156;
  p_output1[41]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.138925*t9154 + t9158 + var1[2];
  p_output1[42]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.142356*t9154 + t9161 + var1[2];
  p_output1[43]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.144448*t9154 + t9170 + var1[2];
  p_output1[44]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 + t9174 + t9175 + var1[2];
  p_output1[45]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.143878*t9154 + t9177 + var1[2];
  p_output1[46]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.141278*t9154 + t9180 + var1[2];
  p_output1[47]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 + t9183 + t9184 + var1[2];
  p_output1[48]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.132825*t9154 + t9186 + var1[2];
  p_output1[49]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.127889*t9154 + t9189 + var1[2];
  p_output1[50]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.123181*t9154 + t9195 + var1[2];
  p_output1[51]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 + t9198 + t9200 + var1[2];
  p_output1[52]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.116413*t9154 + t9207 + var1[2];
  p_output1[53]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 + t9210 + t9211 + var1[2];
  p_output1[54]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 + t9213 + t9214 + var1[2];
  p_output1[55]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 + t9216 + t9217 + var1[2];
  p_output1[56]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.120504*t9154 + t9219 + var1[2];
  p_output1[57]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 - 0.124789*t9154 + t9222 + var1[2];
  p_output1[58]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9140 + t9225 + t9226 + var1[2];
  p_output1[59]=t9156;
  p_output1[60]=t9230;
  p_output1[61]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.138924*t7414 + t7686 + t9228 + var1[0];
  p_output1[62]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.142355*t7414 + t7767 + t9228 + var1[0];
  p_output1[63]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.144447*t7414 + t7836 + t9228 + var1[0];
  p_output1[64]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t7952 + t7955 + t9228 + var1[0];
  p_output1[65]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.143877*t7414 + t8003 + t9228 + var1[0];
  p_output1[66]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.141277*t7414 + t8134 + t9228 + var1[0];
  p_output1[67]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t8446 + t8451 + t9228 + var1[0];
  p_output1[68]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.132824*t7414 + t8465 + t9228 + var1[0];
  p_output1[69]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.127888*t7414 + t8490 + t9228 + var1[0];
  p_output1[70]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.12318*t7414 + t8508 + t9228 + var1[0];
  p_output1[71]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t8537 + t8546 + t9228 + var1[0];
  p_output1[72]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.116412*t7414 + t8567 + t9228 + var1[0];
  p_output1[73]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t8586 + t8603 + t9228 + var1[0];
  p_output1[74]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t8635 + t8639 + t9228 + var1[0];
  p_output1[75]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t8696 + t8697 + t9228 + var1[0];
  p_output1[76]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.120503*t7414 + t8706 + t9228 + var1[0];
  p_output1[77]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 - 0.124788*t7414 + t8726 + t9228 + var1[0];
  p_output1[78]=t2328 + t3374 + t3503 + t6057 + t6521 + t6683 + t8744 + t8746 + t9228 + var1[0];
  p_output1[79]=t9230;
  p_output1[80]=t9264;
  p_output1[81]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.138924*t9003 + t9007 + t9262 + var1[1];
  p_output1[82]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.142355*t9003 + t9011 + t9262 + var1[1];
  p_output1[83]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.144447*t9003 + t9021 + t9262 + var1[1];
  p_output1[84]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t9025 + t9027 + t9262 + var1[1];
  p_output1[85]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.143877*t9003 + t9031 + t9262 + var1[1];
  p_output1[86]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.141277*t9003 + t9041 + t9262 + var1[1];
  p_output1[87]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t9054 + t9055 + t9262 + var1[1];
  p_output1[88]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.132824*t9003 + t9060 + t9262 + var1[1];
  p_output1[89]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.127888*t9003 + t9063 + t9262 + var1[1];
  p_output1[90]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.12318*t9003 + t9066 + t9262 + var1[1];
  p_output1[91]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t9069 + t9070 + t9262 + var1[1];
  p_output1[92]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.116412*t9003 + t9072 + t9262 + var1[1];
  p_output1[93]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t9075 + t9076 + t9262 + var1[1];
  p_output1[94]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t9078 + t9079 + t9262 + var1[1];
  p_output1[95]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t9081 + t9082 + t9262 + var1[1];
  p_output1[96]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.120503*t9003 + t9084 + t9262 + var1[1];
  p_output1[97]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 - 0.124788*t9003 + t9087 + t9262 + var1[1];
  p_output1[98]=t8861 + t8895 + t8904 + t8936 + t8952 + t8965 + t9098 + t9100 + t9262 + var1[1];
  p_output1[99]=t9264;
  p_output1[100]=t9311;
  p_output1[101]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.138924*t9154 + t9158 + t9308 + var1[2];
  p_output1[102]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.142355*t9154 + t9161 + t9308 + var1[2];
  p_output1[103]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.144447*t9154 + t9170 + t9308 + var1[2];
  p_output1[104]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9174 + t9175 + t9308 + var1[2];
  p_output1[105]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.143877*t9154 + t9177 + t9308 + var1[2];
  p_output1[106]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.141277*t9154 + t9180 + t9308 + var1[2];
  p_output1[107]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9183 + t9184 + t9308 + var1[2];
  p_output1[108]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.132824*t9154 + t9186 + t9308 + var1[2];
  p_output1[109]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.127888*t9154 + t9189 + t9308 + var1[2];
  p_output1[110]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.12318*t9154 + t9195 + t9308 + var1[2];
  p_output1[111]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9198 + t9200 + t9308 + var1[2];
  p_output1[112]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.116412*t9154 + t9207 + t9308 + var1[2];
  p_output1[113]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9210 + t9211 + t9308 + var1[2];
  p_output1[114]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9213 + t9214 + t9308 + var1[2];
  p_output1[115]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9216 + t9217 + t9308 + var1[2];
  p_output1[116]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.120503*t9154 + t9219 + t9308 + var1[2];
  p_output1[117]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 - 0.124788*t9154 + t9222 + t9308 + var1[2];
  p_output1[118]=t9102 + t9108 + t9112 + t9125 + t9130 + t9135 + t9225 + t9226 + t9308 + var1[2];
  p_output1[119]=t9311;
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

#include "lower_leg_back_rightR_link_bar.hh"

namespace SymFunction
{

void lower_leg_back_rightR_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
