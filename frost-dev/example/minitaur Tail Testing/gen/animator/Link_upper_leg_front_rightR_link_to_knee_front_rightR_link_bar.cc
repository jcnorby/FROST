/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:19 GMT-04:00
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
  double t2359;
  double t3044;
  double t3323;
  double t3337;
  double t4156;
  double t5727;
  double t5771;
  double t5798;
  double t5696;
  double t5789;
  double t5802;
  double t5809;
  double t5813;
  double t5818;
  double t5822;
  double t5833;
  double t5858;
  double t5867;
  double t5869;
  double t5872;
  double t5874;
  double t5862;
  double t5887;
  double t5892;
  double t6040;
  double t6044;
  double t6043;
  double t6045;
  double t6049;
  double t6051;
  double t6052;
  double t6053;
  double t6041;
  double t6050;
  double t6054;
  double t6055;
  double t6063;
  double t6064;
  double t6065;
  double t6070;
  double t6071;
  double t6072;
  double t6079;
  double t6066;
  double t6080;
  double t6081;
  double t6296;
  double t6297;
  double t6298;
  double t6300;
  double t6303;
  double t6304;
  double t6234;
  double t6299;
  double t6305;
  double t6306;
  double t6307;
  double t6311;
  double t6313;
  double t6327;
  double t6328;
  double t6329;
  double t6330;
  double t6323;
  double t6331;
  double t6332;
  double t5893;
  double t5896;
  double t6542;
  double t6543;
  double t6544;
  double t6548;
  double t6549;
  double t6550;
  double t6551;
  double t5900;
  double t5906;
  double t5910;
  double t5911;
  double t5915;
  double t5919;
  double t5970;
  double t5974;
  double t5982;
  double t5983;
  double t6001;
  double t6002;
  double t6004;
  double t6006;
  double t6008;
  double t6009;
  double t6011;
  double t6012;
  double t6014;
  double t6015;
  double t6017;
  double t6018;
  double t6020;
  double t6021;
  double t6023;
  double t6024;
  double t6026;
  double t6027;
  double t6029;
  double t6030;
  double t6032;
  double t6033;
  double t6036;
  double t6037;
  double t6553;
  double t6082;
  double t6090;
  double t6605;
  double t6606;
  double t6607;
  double t6611;
  double t6612;
  double t6092;
  double t6093;
  double t6105;
  double t6106;
  double t6115;
  double t6116;
  double t6118;
  double t6123;
  double t6127;
  double t6129;
  double t6131;
  double t6133;
  double t6135;
  double t6169;
  double t6171;
  double t6173;
  double t6175;
  double t6177;
  double t6182;
  double t6183;
  double t6187;
  double t6189;
  double t6195;
  double t6196;
  double t6201;
  double t6205;
  double t6207;
  double t6210;
  double t6217;
  double t6218;
  double t6222;
  double t6224;
  double t6228;
  double t6229;
  double t6614;
  double t6333;
  double t6334;
  double t6665;
  double t6666;
  double t6667;
  double t6668;
  double t6669;
  double t6341;
  double t6343;
  double t6351;
  double t6355;
  double t6357;
  double t6359;
  double t6361;
  double t6363;
  double t6373;
  double t6374;
  double t6377;
  double t6378;
  double t6381;
  double t6382;
  double t6387;
  double t6388;
  double t6394;
  double t6395;
  double t6401;
  double t6402;
  double t6428;
  double t6429;
  double t6437;
  double t6445;
  double t6451;
  double t6454;
  double t6463;
  double t6467;
  double t6479;
  double t6480;
  double t6483;
  double t6484;
  double t6539;
  double t6540;
  double t6670;
  t2359 = Cos(var1[15]);
  t3044 = -1.*t2359;
  t3323 = 1. + t3044;
  t3337 = Cos(var1[4]);
  t4156 = Cos(var1[5]);
  t5727 = Sin(var1[15]);
  t5771 = Sin(var1[4]);
  t5798 = Sin(var1[5]);
  t5696 = 0.225000000002025*t3323*t3337*t4156;
  t5789 = -0.225000000002025*t5727*t5771;
  t5802 = 6.75000000006075e-7*t3323*t3337*t5798;
  t5809 = 3.e-6*t3323*t3337*t4156;
  t5813 = -3.e-6*t5727*t5771;
  t5818 = -9.e-12*t3323;
  t5822 = 1. + t5818;
  t5833 = -1.*t5822*t3337*t5798;
  t5858 = t5809 + t5813 + t5833;
  t5867 = t2359*t3337*t4156;
  t5869 = t5727*t5771;
  t5872 = -3.e-6*t3323*t3337*t5798;
  t5874 = t5867 + t5869 + t5872;
  t5862 = -0.121069*t5858;
  t5887 = 0.237052*t5874;
  t5892 = var1[0] + t5696 + t5789 + t5802 + t5862 + t5887;
  t6040 = Sin(var1[3]);
  t6044 = Cos(var1[3]);
  t6043 = t4156*t6040*t5771;
  t6045 = t6044*t5798;
  t6049 = t6043 + t6045;
  t6051 = t6044*t4156;
  t6052 = -1.*t6040*t5771*t5798;
  t6053 = t6051 + t6052;
  t6041 = 0.225000000002025*t3337*t5727*t6040;
  t6050 = 0.225000000002025*t3323*t6049;
  t6054 = -6.75000000006075e-7*t3323*t6053;
  t6055 = 3.e-6*t3337*t5727*t6040;
  t6063 = 3.e-6*t3323*t6049;
  t6064 = t5822*t6053;
  t6065 = t6055 + t6063 + t6064;
  t6070 = -1.*t3337*t5727*t6040;
  t6071 = t2359*t6049;
  t6072 = 3.e-6*t3323*t6053;
  t6079 = t6070 + t6071 + t6072;
  t6066 = -0.121069*t6065;
  t6080 = 0.237052*t6079;
  t6081 = var1[1] + t6041 + t6050 + t6054 + t6066 + t6080;
  t6296 = -1.*t6044*t4156*t5771;
  t6297 = t6040*t5798;
  t6298 = t6296 + t6297;
  t6300 = t4156*t6040;
  t6303 = t6044*t5771*t5798;
  t6304 = t6300 + t6303;
  t6234 = -0.225000000002025*t6044*t3337*t5727;
  t6299 = 0.225000000002025*t3323*t6298;
  t6305 = -6.75000000006075e-7*t3323*t6304;
  t6306 = -3.e-6*t6044*t3337*t5727;
  t6307 = 3.e-6*t3323*t6298;
  t6311 = t5822*t6304;
  t6313 = t6306 + t6307 + t6311;
  t6327 = t6044*t3337*t5727;
  t6328 = t2359*t6298;
  t6329 = 3.e-6*t3323*t6304;
  t6330 = t6327 + t6328 + t6329;
  t6323 = -0.121069*t6313;
  t6331 = 0.237052*t6330;
  t6332 = var1[2] + t6234 + t6299 + t6305 + t6323 + t6331;
  t5893 = -0.11764*t5858;
  t5896 = 0.233499*t5874;
  t6542 = -1.*t3337*t4156*t5727;
  t6543 = -1.000000000009*t3323;
  t6544 = 1. + t6543;
  t6548 = t6544*t5771;
  t6549 = -3.e-6*t3337*t5727*t5798;
  t6550 = t6542 + t6548 + t6549;
  t6551 = 0.1*t6550;
  t5900 = -0.11555*t5858;
  t5906 = 0.229025*t5874;
  t5910 = -0.115026*t5858;
  t5911 = 0.224115*t5874;
  t5915 = -0.116125*t5858;
  t5919 = 0.219301*t5874;
  t5970 = -0.118727*t5858;
  t5974 = 0.215105*t5874;
  t5982 = -0.122551*t5858;
  t5983 = 0.21198*t5874;
  t6001 = -0.127182*t5858;
  t6002 = 0.210267*t5874;
  t6004 = -0.132118*t5858;
  t6006 = 0.21015*t5874;
  t6008 = -0.136825*t5858;
  t6009 = 0.211643*t5874;
  t6011 = -0.140792*t5858;
  t6012 = 0.214583*t5874;
  t6014 = -0.14359*t5858;
  t6015 = 0.218651*t5874;
  t6017 = -0.144915*t5858;
  t6018 = 0.223408*t5874;
  t6020 = -0.144624*t5858;
  t6021 = 0.228337*t5874;
  t6023 = -0.142748*t5858;
  t6024 = 0.232905*t5874;
  t6026 = -0.139491*t5858;
  t6027 = 0.236616*t5874;
  t6029 = -0.135205*t5858;
  t6030 = 0.239068*t5874;
  t6032 = -0.130355*t5858;
  t6033 = 0.239996*t5874;
  t6036 = -0.125466*t5858;
  t6037 = 0.239298*t5874;
  t6553 = var1[0] + t5696 + t5789 + t5802 + t5862 + t5887 + t6551;
  t6082 = -0.11764*t6065;
  t6090 = 0.233499*t6079;
  t6605 = -1.*t6544*t3337*t6040;
  t6606 = -1.*t5727*t6049;
  t6607 = 3.e-6*t5727*t6053;
  t6611 = t6605 + t6606 + t6607;
  t6612 = 0.1*t6611;
  t6092 = -0.11555*t6065;
  t6093 = 0.229025*t6079;
  t6105 = -0.115026*t6065;
  t6106 = 0.224115*t6079;
  t6115 = -0.116125*t6065;
  t6116 = 0.219301*t6079;
  t6118 = -0.118727*t6065;
  t6123 = 0.215105*t6079;
  t6127 = -0.122551*t6065;
  t6129 = 0.21198*t6079;
  t6131 = -0.127182*t6065;
  t6133 = 0.210267*t6079;
  t6135 = -0.132118*t6065;
  t6169 = 0.21015*t6079;
  t6171 = -0.136825*t6065;
  t6173 = 0.211643*t6079;
  t6175 = -0.140792*t6065;
  t6177 = 0.214583*t6079;
  t6182 = -0.14359*t6065;
  t6183 = 0.218651*t6079;
  t6187 = -0.144915*t6065;
  t6189 = 0.223408*t6079;
  t6195 = -0.144624*t6065;
  t6196 = 0.228337*t6079;
  t6201 = -0.142748*t6065;
  t6205 = 0.232905*t6079;
  t6207 = -0.139491*t6065;
  t6210 = 0.236616*t6079;
  t6217 = -0.135205*t6065;
  t6218 = 0.239068*t6079;
  t6222 = -0.130355*t6065;
  t6224 = 0.239996*t6079;
  t6228 = -0.125466*t6065;
  t6229 = 0.239298*t6079;
  t6614 = var1[1] + t6041 + t6050 + t6054 + t6066 + t6080 + t6612;
  t6333 = -0.11764*t6313;
  t6334 = 0.233499*t6330;
  t6665 = t6544*t6044*t3337;
  t6666 = -1.*t5727*t6298;
  t6667 = 3.e-6*t5727*t6304;
  t6668 = t6665 + t6666 + t6667;
  t6669 = 0.1*t6668;
  t6341 = -0.11555*t6313;
  t6343 = 0.229025*t6330;
  t6351 = -0.115026*t6313;
  t6355 = 0.224115*t6330;
  t6357 = -0.116125*t6313;
  t6359 = 0.219301*t6330;
  t6361 = -0.118727*t6313;
  t6363 = 0.215105*t6330;
  t6373 = -0.122551*t6313;
  t6374 = 0.21198*t6330;
  t6377 = -0.127182*t6313;
  t6378 = 0.210267*t6330;
  t6381 = -0.132118*t6313;
  t6382 = 0.21015*t6330;
  t6387 = -0.136825*t6313;
  t6388 = 0.211643*t6330;
  t6394 = -0.140792*t6313;
  t6395 = 0.214583*t6330;
  t6401 = -0.14359*t6313;
  t6402 = 0.218651*t6330;
  t6428 = -0.144915*t6313;
  t6429 = 0.223408*t6330;
  t6437 = -0.144624*t6313;
  t6445 = 0.228337*t6330;
  t6451 = -0.142748*t6313;
  t6454 = 0.232905*t6330;
  t6463 = -0.139491*t6313;
  t6467 = 0.236616*t6330;
  t6479 = -0.135205*t6313;
  t6480 = 0.239068*t6330;
  t6483 = -0.130355*t6313;
  t6484 = 0.239996*t6330;
  t6539 = -0.125466*t6313;
  t6540 = 0.239298*t6330;
  t6670 = var1[2] + t6234 + t6299 + t6305 + t6323 + t6331 + t6669;
  p_output1[0]=t5892;
  p_output1[1]=t5696 + t5789 + t5802 + t5893 + t5896 + var1[0];
  p_output1[2]=t5696 + t5789 + t5802 + t5900 + t5906 + var1[0];
  p_output1[3]=t5696 + t5789 + t5802 + t5910 + t5911 + var1[0];
  p_output1[4]=t5696 + t5789 + t5802 + t5915 + t5919 + var1[0];
  p_output1[5]=t5696 + t5789 + t5802 + t5970 + t5974 + var1[0];
  p_output1[6]=t5696 + t5789 + t5802 + t5982 + t5983 + var1[0];
  p_output1[7]=t5696 + t5789 + t5802 + t6001 + t6002 + var1[0];
  p_output1[8]=t5696 + t5789 + t5802 + t6004 + t6006 + var1[0];
  p_output1[9]=t5696 + t5789 + t5802 + t6008 + t6009 + var1[0];
  p_output1[10]=t5696 + t5789 + t5802 + t6011 + t6012 + var1[0];
  p_output1[11]=t5696 + t5789 + t5802 + t6014 + t6015 + var1[0];
  p_output1[12]=t5696 + t5789 + t5802 + t6017 + t6018 + var1[0];
  p_output1[13]=t5696 + t5789 + t5802 + t6020 + t6021 + var1[0];
  p_output1[14]=t5696 + t5789 + t5802 + t6023 + t6024 + var1[0];
  p_output1[15]=t5696 + t5789 + t5802 + t6026 + t6027 + var1[0];
  p_output1[16]=t5696 + t5789 + t5802 + t6029 + t6030 + var1[0];
  p_output1[17]=t5696 + t5789 + t5802 + t6032 + t6033 + var1[0];
  p_output1[18]=t5696 + t5789 + t5802 + t6036 + t6037 + var1[0];
  p_output1[19]=t5892;
  p_output1[20]=t6081;
  p_output1[21]=t6041 + t6050 + t6054 + t6082 + t6090 + var1[1];
  p_output1[22]=t6041 + t6050 + t6054 + t6092 + t6093 + var1[1];
  p_output1[23]=t6041 + t6050 + t6054 + t6105 + t6106 + var1[1];
  p_output1[24]=t6041 + t6050 + t6054 + t6115 + t6116 + var1[1];
  p_output1[25]=t6041 + t6050 + t6054 + t6118 + t6123 + var1[1];
  p_output1[26]=t6041 + t6050 + t6054 + t6127 + t6129 + var1[1];
  p_output1[27]=t6041 + t6050 + t6054 + t6131 + t6133 + var1[1];
  p_output1[28]=t6041 + t6050 + t6054 + t6135 + t6169 + var1[1];
  p_output1[29]=t6041 + t6050 + t6054 + t6171 + t6173 + var1[1];
  p_output1[30]=t6041 + t6050 + t6054 + t6175 + t6177 + var1[1];
  p_output1[31]=t6041 + t6050 + t6054 + t6182 + t6183 + var1[1];
  p_output1[32]=t6041 + t6050 + t6054 + t6187 + t6189 + var1[1];
  p_output1[33]=t6041 + t6050 + t6054 + t6195 + t6196 + var1[1];
  p_output1[34]=t6041 + t6050 + t6054 + t6201 + t6205 + var1[1];
  p_output1[35]=t6041 + t6050 + t6054 + t6207 + t6210 + var1[1];
  p_output1[36]=t6041 + t6050 + t6054 + t6217 + t6218 + var1[1];
  p_output1[37]=t6041 + t6050 + t6054 + t6222 + t6224 + var1[1];
  p_output1[38]=t6041 + t6050 + t6054 + t6228 + t6229 + var1[1];
  p_output1[39]=t6081;
  p_output1[40]=t6332;
  p_output1[41]=t6234 + t6299 + t6305 + t6333 + t6334 + var1[2];
  p_output1[42]=t6234 + t6299 + t6305 + t6341 + t6343 + var1[2];
  p_output1[43]=t6234 + t6299 + t6305 + t6351 + t6355 + var1[2];
  p_output1[44]=t6234 + t6299 + t6305 + t6357 + t6359 + var1[2];
  p_output1[45]=t6234 + t6299 + t6305 + t6361 + t6363 + var1[2];
  p_output1[46]=t6234 + t6299 + t6305 + t6373 + t6374 + var1[2];
  p_output1[47]=t6234 + t6299 + t6305 + t6377 + t6378 + var1[2];
  p_output1[48]=t6234 + t6299 + t6305 + t6381 + t6382 + var1[2];
  p_output1[49]=t6234 + t6299 + t6305 + t6387 + t6388 + var1[2];
  p_output1[50]=t6234 + t6299 + t6305 + t6394 + t6395 + var1[2];
  p_output1[51]=t6234 + t6299 + t6305 + t6401 + t6402 + var1[2];
  p_output1[52]=t6234 + t6299 + t6305 + t6428 + t6429 + var1[2];
  p_output1[53]=t6234 + t6299 + t6305 + t6437 + t6445 + var1[2];
  p_output1[54]=t6234 + t6299 + t6305 + t6451 + t6454 + var1[2];
  p_output1[55]=t6234 + t6299 + t6305 + t6463 + t6467 + var1[2];
  p_output1[56]=t6234 + t6299 + t6305 + t6479 + t6480 + var1[2];
  p_output1[57]=t6234 + t6299 + t6305 + t6483 + t6484 + var1[2];
  p_output1[58]=t6234 + t6299 + t6305 + t6539 + t6540 + var1[2];
  p_output1[59]=t6332;
  p_output1[60]=t6553;
  p_output1[61]=t5696 + t5789 + t5802 + t5893 + t5896 + t6551 + var1[0];
  p_output1[62]=t5696 + t5789 + t5802 + t5900 + t5906 + t6551 + var1[0];
  p_output1[63]=t5696 + t5789 + t5802 + t5910 + t5911 + t6551 + var1[0];
  p_output1[64]=t5696 + t5789 + t5802 + t5915 + t5919 + t6551 + var1[0];
  p_output1[65]=t5696 + t5789 + t5802 + t5970 + t5974 + t6551 + var1[0];
  p_output1[66]=t5696 + t5789 + t5802 + t5982 + t5983 + t6551 + var1[0];
  p_output1[67]=t5696 + t5789 + t5802 + t6001 + t6002 + t6551 + var1[0];
  p_output1[68]=t5696 + t5789 + t5802 + t6004 + t6006 + t6551 + var1[0];
  p_output1[69]=t5696 + t5789 + t5802 + t6008 + t6009 + t6551 + var1[0];
  p_output1[70]=t5696 + t5789 + t5802 + t6011 + t6012 + t6551 + var1[0];
  p_output1[71]=t5696 + t5789 + t5802 + t6014 + t6015 + t6551 + var1[0];
  p_output1[72]=t5696 + t5789 + t5802 + t6017 + t6018 + t6551 + var1[0];
  p_output1[73]=t5696 + t5789 + t5802 + t6020 + t6021 + t6551 + var1[0];
  p_output1[74]=t5696 + t5789 + t5802 + t6023 + t6024 + t6551 + var1[0];
  p_output1[75]=t5696 + t5789 + t5802 + t6026 + t6027 + t6551 + var1[0];
  p_output1[76]=t5696 + t5789 + t5802 + t6029 + t6030 + t6551 + var1[0];
  p_output1[77]=t5696 + t5789 + t5802 + t6032 + t6033 + t6551 + var1[0];
  p_output1[78]=t5696 + t5789 + t5802 + t6036 + t6037 + t6551 + var1[0];
  p_output1[79]=t6553;
  p_output1[80]=t6614;
  p_output1[81]=t6041 + t6050 + t6054 + t6082 + t6090 + t6612 + var1[1];
  p_output1[82]=t6041 + t6050 + t6054 + t6092 + t6093 + t6612 + var1[1];
  p_output1[83]=t6041 + t6050 + t6054 + t6105 + t6106 + t6612 + var1[1];
  p_output1[84]=t6041 + t6050 + t6054 + t6115 + t6116 + t6612 + var1[1];
  p_output1[85]=t6041 + t6050 + t6054 + t6118 + t6123 + t6612 + var1[1];
  p_output1[86]=t6041 + t6050 + t6054 + t6127 + t6129 + t6612 + var1[1];
  p_output1[87]=t6041 + t6050 + t6054 + t6131 + t6133 + t6612 + var1[1];
  p_output1[88]=t6041 + t6050 + t6054 + t6135 + t6169 + t6612 + var1[1];
  p_output1[89]=t6041 + t6050 + t6054 + t6171 + t6173 + t6612 + var1[1];
  p_output1[90]=t6041 + t6050 + t6054 + t6175 + t6177 + t6612 + var1[1];
  p_output1[91]=t6041 + t6050 + t6054 + t6182 + t6183 + t6612 + var1[1];
  p_output1[92]=t6041 + t6050 + t6054 + t6187 + t6189 + t6612 + var1[1];
  p_output1[93]=t6041 + t6050 + t6054 + t6195 + t6196 + t6612 + var1[1];
  p_output1[94]=t6041 + t6050 + t6054 + t6201 + t6205 + t6612 + var1[1];
  p_output1[95]=t6041 + t6050 + t6054 + t6207 + t6210 + t6612 + var1[1];
  p_output1[96]=t6041 + t6050 + t6054 + t6217 + t6218 + t6612 + var1[1];
  p_output1[97]=t6041 + t6050 + t6054 + t6222 + t6224 + t6612 + var1[1];
  p_output1[98]=t6041 + t6050 + t6054 + t6228 + t6229 + t6612 + var1[1];
  p_output1[99]=t6614;
  p_output1[100]=t6670;
  p_output1[101]=t6234 + t6299 + t6305 + t6333 + t6334 + t6669 + var1[2];
  p_output1[102]=t6234 + t6299 + t6305 + t6341 + t6343 + t6669 + var1[2];
  p_output1[103]=t6234 + t6299 + t6305 + t6351 + t6355 + t6669 + var1[2];
  p_output1[104]=t6234 + t6299 + t6305 + t6357 + t6359 + t6669 + var1[2];
  p_output1[105]=t6234 + t6299 + t6305 + t6361 + t6363 + t6669 + var1[2];
  p_output1[106]=t6234 + t6299 + t6305 + t6373 + t6374 + t6669 + var1[2];
  p_output1[107]=t6234 + t6299 + t6305 + t6377 + t6378 + t6669 + var1[2];
  p_output1[108]=t6234 + t6299 + t6305 + t6381 + t6382 + t6669 + var1[2];
  p_output1[109]=t6234 + t6299 + t6305 + t6387 + t6388 + t6669 + var1[2];
  p_output1[110]=t6234 + t6299 + t6305 + t6394 + t6395 + t6669 + var1[2];
  p_output1[111]=t6234 + t6299 + t6305 + t6401 + t6402 + t6669 + var1[2];
  p_output1[112]=t6234 + t6299 + t6305 + t6428 + t6429 + t6669 + var1[2];
  p_output1[113]=t6234 + t6299 + t6305 + t6437 + t6445 + t6669 + var1[2];
  p_output1[114]=t6234 + t6299 + t6305 + t6451 + t6454 + t6669 + var1[2];
  p_output1[115]=t6234 + t6299 + t6305 + t6463 + t6467 + t6669 + var1[2];
  p_output1[116]=t6234 + t6299 + t6305 + t6479 + t6480 + t6669 + var1[2];
  p_output1[117]=t6234 + t6299 + t6305 + t6483 + t6484 + t6669 + var1[2];
  p_output1[118]=t6234 + t6299 + t6305 + t6539 + t6540 + t6669 + var1[2];
  p_output1[119]=t6670;
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

#include "Link_upper_leg_front_rightR_link_to_knee_front_rightR_link_bar.hh"

namespace SymFunction
{

void Link_upper_leg_front_rightR_link_to_knee_front_rightR_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
