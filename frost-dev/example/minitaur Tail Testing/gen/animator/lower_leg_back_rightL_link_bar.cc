/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:41 GMT-04:00
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
  double t2398;
  double t2457;
  double t3225;
  double t321;
  double t3431;
  double t4827;
  double t5064;
  double t5082;
  double t5086;
  double t5186;
  double t5256;
  double t5267;
  double t5409;
  double t5415;
  double t5420;
  double t5460;
  double t546;
  double t1526;
  double t3219;
  double t3947;
  double t4195;
  double t5083;
  double t5123;
  double t5129;
  double t5271;
  double t5290;
  double t5404;
  double t5405;
  double t5424;
  double t5444;
  double t5450;
  double t5453;
  double t5457;
  double t5518;
  double t5572;
  double t5589;
  double t5590;
  double t5614;
  double t5674;
  double t5678;
  double t5860;
  double t5902;
  double t5913;
  double t5932;
  double t6326;
  double t6417;
  double t6504;
  double t6585;
  double t6587;
  double t6639;
  double t6654;
  double t5703;
  double t6695;
  double t6710;
  double t8136;
  double t8164;
  double t8162;
  double t8212;
  double t8240;
  double t8259;
  double t8299;
  double t8301;
  double t8340;
  double t8343;
  double t8358;
  double t8369;
  double t8379;
  double t8381;
  double t8142;
  double t8248;
  double t8326;
  double t8366;
  double t8382;
  double t8385;
  double t8387;
  double t8390;
  double t8395;
  double t8404;
  double t8405;
  double t8409;
  double t8410;
  double t8419;
  double t8425;
  double t8429;
  double t8432;
  double t8437;
  double t8399;
  double t8438;
  double t8443;
  double t8753;
  double t8755;
  double t8759;
  double t8762;
  double t8763;
  double t8769;
  double t8790;
  double t8791;
  double t8793;
  double t8800;
  double t8801;
  double t8802;
  double t8752;
  double t8760;
  double t8784;
  double t8794;
  double t8803;
  double t8807;
  double t8810;
  double t8812;
  double t8816;
  double t8822;
  double t8823;
  double t8826;
  double t8830;
  double t8832;
  double t8835;
  double t8845;
  double t8847;
  double t8851;
  double t8819;
  double t8853;
  double t8855;
  double t8983;
  double t8985;
  double t8986;
  double t8987;
  double t8989;
  double t6721;
  double t6865;
  double t6951;
  double t6962;
  double t7037;
  double t7070;
  double t7127;
  double t7137;
  double t7205;
  double t7406;
  double t7548;
  double t7762;
  double t7771;
  double t7779;
  double t7786;
  double t7832;
  double t7884;
  double t7942;
  double t7958;
  double t7985;
  double t7999;
  double t8004;
  double t8015;
  double t8125;
  double t8990;
  double t9048;
  double t9049;
  double t9050;
  double t9051;
  double t9052;
  double t8449;
  double t8475;
  double t8483;
  double t8485;
  double t8493;
  double t8512;
  double t8527;
  double t8562;
  double t8581;
  double t8601;
  double t8602;
  double t8634;
  double t8671;
  double t8691;
  double t8695;
  double t8700;
  double t8703;
  double t8708;
  double t8724;
  double t8729;
  double t8731;
  double t8737;
  double t8740;
  double t8749;
  double t9053;
  double t9089;
  double t9091;
  double t9092;
  double t9093;
  double t9094;
  double t8857;
  double t8864;
  double t8884;
  double t8887;
  double t8893;
  double t8897;
  double t8903;
  double t8908;
  double t8919;
  double t8930;
  double t8931;
  double t8939;
  double t8946;
  double t8948;
  double t8950;
  double t8953;
  double t8954;
  double t8959;
  double t8962;
  double t8966;
  double t8971;
  double t8974;
  double t8975;
  double t8981;
  double t9097;
  t2398 = Cos(var1[4]);
  t2457 = Cos(var1[5]);
  t3225 = Sin(var1[18]);
  t321 = Cos(var1[18]);
  t3431 = Sin(var1[4]);
  t4827 = Cos(var1[20]);
  t5064 = -1.*t4827;
  t5082 = 1. + t5064;
  t5086 = Sin(var1[20]);
  t5186 = t2398*t2457*t3225;
  t5256 = t321*t3431;
  t5267 = t5186 + t5256;
  t5409 = t321*t2398*t2457;
  t5415 = -1.*t3225*t3431;
  t5420 = t5409 + t5415;
  t5460 = Sin(var1[5]);
  t546 = -1.*t321;
  t1526 = 1. + t546;
  t3219 = -0.225*t1526*t2398*t2457;
  t3947 = -0.225*t3225*t3431;
  t4195 = -9.75e-13*var1[20];
  t5083 = 0.1000000000009*t5082;
  t5123 = 0.225000000003*t5086;
  t5129 = t4195 + t5083 + t5123;
  t5271 = t5129*t5267;
  t5290 = -0.225000000005025*t5082;
  t5404 = 0.1000000000009*t5086;
  t5405 = t5290 + t5404;
  t5424 = t5405*t5420;
  t5444 = 3.25e-7*var1[20];
  t5450 = 3.000000000027e-7*t5082;
  t5453 = 6.75000000009e-7*t5086;
  t5457 = t5444 + t5450 + t5453;
  t5518 = -1.*t2398*t5457*t5460;
  t5572 = -3.e-6*t5082*t5267;
  t5589 = -3.e-6*t5086*t5420;
  t5590 = -9.e-12*t5082;
  t5614 = 1. + t5590;
  t5674 = -1.*t5614*t2398*t5460;
  t5678 = t5572 + t5589 + t5674;
  t5860 = t4827*t5267;
  t5902 = -1.*t5086*t5420;
  t5913 = 3.e-6*t5082*t2398*t5460;
  t5932 = t5860 + t5902 + t5913;
  t6326 = 0.1*t5932;
  t6417 = t5086*t5267;
  t6504 = -1.000000000009*t5082;
  t6585 = 1. + t6504;
  t6587 = t6585*t5420;
  t6639 = -3.e-6*t2398*t5086*t5460;
  t6654 = t6417 + t6587 + t6639;
  t5703 = -0.123159*t5678;
  t6695 = -0.238349*t6654;
  t6710 = var1[0] + t3219 + t3947 + t5271 + t5424 + t5518 + t5703 + t6326 + t6695;
  t8136 = Sin(var1[3]);
  t8164 = Cos(var1[3]);
  t8162 = t2457*t8136*t3431;
  t8212 = t8164*t5460;
  t8240 = t8162 + t8212;
  t8259 = t8164*t2457;
  t8299 = -1.*t8136*t3431*t5460;
  t8301 = t8259 + t8299;
  t8340 = t2398*t3225*t8136;
  t8343 = t321*t8240;
  t8358 = t8340 + t8343;
  t8369 = -1.*t321*t2398*t8136;
  t8379 = t3225*t8240;
  t8381 = t8369 + t8379;
  t8142 = 0.225*t2398*t3225*t8136;
  t8248 = -0.225*t1526*t8240;
  t8326 = t5457*t8301;
  t8366 = t5405*t8358;
  t8382 = t5129*t8381;
  t8385 = t5614*t8301;
  t8387 = -3.e-6*t5086*t8358;
  t8390 = -3.e-6*t5082*t8381;
  t8395 = t8385 + t8387 + t8390;
  t8404 = -3.e-6*t5082*t8301;
  t8405 = -1.*t5086*t8358;
  t8409 = t4827*t8381;
  t8410 = t8404 + t8405 + t8409;
  t8419 = 0.1*t8410;
  t8425 = 3.e-6*t5086*t8301;
  t8429 = t6585*t8358;
  t8432 = t5086*t8381;
  t8437 = t8425 + t8429 + t8432;
  t8399 = -0.123159*t8395;
  t8438 = -0.238349*t8437;
  t8443 = var1[1] + t8142 + t8248 + t8326 + t8366 + t8382 + t8399 + t8419 + t8438;
  t8753 = -1.*t8164*t2457*t3431;
  t8755 = t8136*t5460;
  t8759 = t8753 + t8755;
  t8762 = t2457*t8136;
  t8763 = t8164*t3431*t5460;
  t8769 = t8762 + t8763;
  t8790 = -1.*t8164*t2398*t3225;
  t8791 = t321*t8759;
  t8793 = t8790 + t8791;
  t8800 = t321*t8164*t2398;
  t8801 = t3225*t8759;
  t8802 = t8800 + t8801;
  t8752 = -0.225*t8164*t2398*t3225;
  t8760 = -0.225*t1526*t8759;
  t8784 = t5457*t8769;
  t8794 = t5405*t8793;
  t8803 = t5129*t8802;
  t8807 = t5614*t8769;
  t8810 = -3.e-6*t5086*t8793;
  t8812 = -3.e-6*t5082*t8802;
  t8816 = t8807 + t8810 + t8812;
  t8822 = -3.e-6*t5082*t8769;
  t8823 = -1.*t5086*t8793;
  t8826 = t4827*t8802;
  t8830 = t8822 + t8823 + t8826;
  t8832 = 0.1*t8830;
  t8835 = 3.e-6*t5086*t8769;
  t8845 = t6585*t8793;
  t8847 = t5086*t8802;
  t8851 = t8835 + t8845 + t8847;
  t8819 = -0.123159*t8816;
  t8853 = -0.238349*t8851;
  t8855 = var1[2] + t8752 + t8760 + t8784 + t8794 + t8803 + t8819 + t8832 + t8853;
  t8983 = -1.*t4827*t5267;
  t8985 = t5086*t5420;
  t8986 = -3.e-6*t5082*t2398*t5460;
  t8987 = t8983 + t8985 + t8986;
  t8989 = 0.1*t8987;
  t6721 = -0.235404*t6654;
  t6865 = -0.231332*t6654;
  t6951 = -0.115083*t5678;
  t6962 = -0.226574*t6654;
  t7037 = -0.221645*t6654;
  t7070 = -0.21708*t6654;
  t7127 = -0.213373*t6654;
  t7137 = -0.210926*t6654;
  t7205 = -0.210004*t6654;
  t7406 = -0.134551*t5678;
  t7548 = -0.210707*t6654;
  t7762 = -0.212959*t6654;
  t7771 = -0.216516*t6654;
  t7779 = -0.144455*t5678;
  t7786 = -0.220992*t6654;
  t7832 = -0.144973*t5678;
  t7884 = -0.225903*t6654;
  t7942 = -0.230715*t6654;
  t7958 = -0.234909*t6654;
  t7985 = -0.137434*t5678;
  t7999 = -0.238028*t6654;
  t8004 = -0.132801*t5678;
  t8015 = -0.239736*t6654;
  t8125 = -0.239847*t6654;
  t8990 = var1[0] + t3219 + t3947 + t5271 + t5424 + t5518 + t5703 + t8989 + t6695;
  t9048 = 3.e-6*t5082*t8301;
  t9049 = t5086*t8358;
  t9050 = -1.*t4827*t8381;
  t9051 = t9048 + t9049 + t9050;
  t9052 = 0.1*t9051;
  t8449 = -0.235404*t8437;
  t8475 = -0.231332*t8437;
  t8483 = -0.115083*t8395;
  t8485 = -0.226574*t8437;
  t8493 = -0.221645*t8437;
  t8512 = -0.21708*t8437;
  t8527 = -0.213373*t8437;
  t8562 = -0.210926*t8437;
  t8581 = -0.210004*t8437;
  t8601 = -0.134551*t8395;
  t8602 = -0.210707*t8437;
  t8634 = -0.212959*t8437;
  t8671 = -0.216516*t8437;
  t8691 = -0.144455*t8395;
  t8695 = -0.220992*t8437;
  t8700 = -0.144973*t8395;
  t8703 = -0.225903*t8437;
  t8708 = -0.230715*t8437;
  t8724 = -0.234909*t8437;
  t8729 = -0.137434*t8395;
  t8731 = -0.238028*t8437;
  t8737 = -0.132801*t8395;
  t8740 = -0.239736*t8437;
  t8749 = -0.239847*t8437;
  t9053 = var1[1] + t8142 + t8248 + t8326 + t8366 + t8382 + t8399 + t9052 + t8438;
  t9089 = 3.e-6*t5082*t8769;
  t9091 = t5086*t8793;
  t9092 = -1.*t4827*t8802;
  t9093 = t9089 + t9091 + t9092;
  t9094 = 0.1*t9093;
  t8857 = -0.235404*t8851;
  t8864 = -0.231332*t8851;
  t8884 = -0.115083*t8816;
  t8887 = -0.226574*t8851;
  t8893 = -0.221645*t8851;
  t8897 = -0.21708*t8851;
  t8903 = -0.213373*t8851;
  t8908 = -0.210926*t8851;
  t8919 = -0.210004*t8851;
  t8930 = -0.134551*t8816;
  t8931 = -0.210707*t8851;
  t8939 = -0.212959*t8851;
  t8946 = -0.216516*t8851;
  t8948 = -0.144455*t8816;
  t8950 = -0.220992*t8851;
  t8953 = -0.144973*t8816;
  t8954 = -0.225903*t8851;
  t8959 = -0.230715*t8851;
  t8962 = -0.234909*t8851;
  t8966 = -0.137434*t8816;
  t8971 = -0.238028*t8851;
  t8974 = -0.132801*t8816;
  t8975 = -0.239736*t8851;
  t8981 = -0.239847*t8851;
  t9097 = var1[2] + t8752 + t8760 + t8784 + t8794 + t8803 + t8819 + t9094 + t8853;
  p_output1[0]=t6710;
  p_output1[1]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.119195*t5678 + t6326 + t6721 + var1[0];
  p_output1[2]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.116402*t5678 + t6326 + t6865 + var1[0];
  p_output1[3]=t3219 + t3947 + t5271 + t5424 + t5518 + t6326 + t6951 + t6962 + var1[0];
  p_output1[4]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.11538*t5678 + t6326 + t7037 + var1[0];
  p_output1[5]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.117261*t5678 + t6326 + t7070 + var1[0];
  p_output1[6]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.120523*t5678 + t6326 + t7127 + var1[0];
  p_output1[7]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.124812*t5678 + t6326 + t7137 + var1[0];
  p_output1[8]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.129663*t5678 + t6326 + t7205 + var1[0];
  p_output1[9]=t3219 + t3947 + t5271 + t5424 + t5518 + t6326 + t7406 + t7548 + var1[0];
  p_output1[10]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.138945*t5678 + t6326 + t7762 + var1[0];
  p_output1[11]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.14237*t5678 + t6326 + t7771 + var1[0];
  p_output1[12]=t3219 + t3947 + t5271 + t5424 + t5518 + t6326 + t7779 + t7786 + var1[0];
  p_output1[13]=t3219 + t3947 + t5271 + t5424 + t5518 + t6326 + t7832 + t7884 + var1[0];
  p_output1[14]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.143868*t5678 + t6326 + t7942 + var1[0];
  p_output1[15]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.141261*t5678 + t6326 + t7958 + var1[0];
  p_output1[16]=t3219 + t3947 + t5271 + t5424 + t5518 + t6326 + t7985 + t7999 + var1[0];
  p_output1[17]=t3219 + t3947 + t5271 + t5424 + t5518 + t6326 + t8004 + t8015 + var1[0];
  p_output1[18]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.127864*t5678 + t6326 + t8125 + var1[0];
  p_output1[19]=t6710;
  p_output1[20]=t8443;
  p_output1[21]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.119195*t8395 + t8419 + t8449 + var1[1];
  p_output1[22]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.116402*t8395 + t8419 + t8475 + var1[1];
  p_output1[23]=t8142 + t8248 + t8326 + t8366 + t8382 + t8419 + t8483 + t8485 + var1[1];
  p_output1[24]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.11538*t8395 + t8419 + t8493 + var1[1];
  p_output1[25]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.117261*t8395 + t8419 + t8512 + var1[1];
  p_output1[26]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.120523*t8395 + t8419 + t8527 + var1[1];
  p_output1[27]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.124812*t8395 + t8419 + t8562 + var1[1];
  p_output1[28]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.129663*t8395 + t8419 + t8581 + var1[1];
  p_output1[29]=t8142 + t8248 + t8326 + t8366 + t8382 + t8419 + t8601 + t8602 + var1[1];
  p_output1[30]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.138945*t8395 + t8419 + t8634 + var1[1];
  p_output1[31]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.14237*t8395 + t8419 + t8671 + var1[1];
  p_output1[32]=t8142 + t8248 + t8326 + t8366 + t8382 + t8419 + t8691 + t8695 + var1[1];
  p_output1[33]=t8142 + t8248 + t8326 + t8366 + t8382 + t8419 + t8700 + t8703 + var1[1];
  p_output1[34]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.143868*t8395 + t8419 + t8708 + var1[1];
  p_output1[35]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.141261*t8395 + t8419 + t8724 + var1[1];
  p_output1[36]=t8142 + t8248 + t8326 + t8366 + t8382 + t8419 + t8729 + t8731 + var1[1];
  p_output1[37]=t8142 + t8248 + t8326 + t8366 + t8382 + t8419 + t8737 + t8740 + var1[1];
  p_output1[38]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.127864*t8395 + t8419 + t8749 + var1[1];
  p_output1[39]=t8443;
  p_output1[40]=t8855;
  p_output1[41]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.119195*t8816 + t8832 + t8857 + var1[2];
  p_output1[42]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.116402*t8816 + t8832 + t8864 + var1[2];
  p_output1[43]=t8752 + t8760 + t8784 + t8794 + t8803 + t8832 + t8884 + t8887 + var1[2];
  p_output1[44]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.11538*t8816 + t8832 + t8893 + var1[2];
  p_output1[45]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.117261*t8816 + t8832 + t8897 + var1[2];
  p_output1[46]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.120523*t8816 + t8832 + t8903 + var1[2];
  p_output1[47]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.124812*t8816 + t8832 + t8908 + var1[2];
  p_output1[48]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.129663*t8816 + t8832 + t8919 + var1[2];
  p_output1[49]=t8752 + t8760 + t8784 + t8794 + t8803 + t8832 + t8930 + t8931 + var1[2];
  p_output1[50]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.138945*t8816 + t8832 + t8939 + var1[2];
  p_output1[51]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.14237*t8816 + t8832 + t8946 + var1[2];
  p_output1[52]=t8752 + t8760 + t8784 + t8794 + t8803 + t8832 + t8948 + t8950 + var1[2];
  p_output1[53]=t8752 + t8760 + t8784 + t8794 + t8803 + t8832 + t8953 + t8954 + var1[2];
  p_output1[54]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.143868*t8816 + t8832 + t8959 + var1[2];
  p_output1[55]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.141261*t8816 + t8832 + t8962 + var1[2];
  p_output1[56]=t8752 + t8760 + t8784 + t8794 + t8803 + t8832 + t8966 + t8971 + var1[2];
  p_output1[57]=t8752 + t8760 + t8784 + t8794 + t8803 + t8832 + t8974 + t8975 + var1[2];
  p_output1[58]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.127864*t8816 + t8832 + t8981 + var1[2];
  p_output1[59]=t8855;
  p_output1[60]=t8990;
  p_output1[61]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.119196*t5678 + t6721 + t8989 + var1[0];
  p_output1[62]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.116403*t5678 + t6865 + t8989 + var1[0];
  p_output1[63]=t3219 + t3947 + t5271 + t5424 + t5518 + t6951 + t6962 + t8989 + var1[0];
  p_output1[64]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.115381*t5678 + t7037 + t8989 + var1[0];
  p_output1[65]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.117262*t5678 + t7070 + t8989 + var1[0];
  p_output1[66]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.120524*t5678 + t7127 + t8989 + var1[0];
  p_output1[67]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.124813*t5678 + t7137 + t8989 + var1[0];
  p_output1[68]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.129664*t5678 + t7205 + t8989 + var1[0];
  p_output1[69]=t3219 + t3947 + t5271 + t5424 + t5518 + t7406 + t7548 + t8989 + var1[0];
  p_output1[70]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.138946*t5678 + t7762 + t8989 + var1[0];
  p_output1[71]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.142371*t5678 + t7771 + t8989 + var1[0];
  p_output1[72]=t3219 + t3947 + t5271 + t5424 + t5518 + t7779 + t7786 + t8989 + var1[0];
  p_output1[73]=t3219 + t3947 + t5271 + t5424 + t5518 + t7832 + t7884 + t8989 + var1[0];
  p_output1[74]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.143869*t5678 + t7942 + t8989 + var1[0];
  p_output1[75]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.141262*t5678 + t7958 + t8989 + var1[0];
  p_output1[76]=t3219 + t3947 + t5271 + t5424 + t5518 + t7985 + t7999 + t8989 + var1[0];
  p_output1[77]=t3219 + t3947 + t5271 + t5424 + t5518 + t8004 + t8015 + t8989 + var1[0];
  p_output1[78]=t3219 + t3947 + t5271 + t5424 + t5518 - 0.127865*t5678 + t8125 + t8989 + var1[0];
  p_output1[79]=t8990;
  p_output1[80]=t9053;
  p_output1[81]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.119196*t8395 + t8449 + t9052 + var1[1];
  p_output1[82]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.116403*t8395 + t8475 + t9052 + var1[1];
  p_output1[83]=t8142 + t8248 + t8326 + t8366 + t8382 + t8483 + t8485 + t9052 + var1[1];
  p_output1[84]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.115381*t8395 + t8493 + t9052 + var1[1];
  p_output1[85]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.117262*t8395 + t8512 + t9052 + var1[1];
  p_output1[86]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.120524*t8395 + t8527 + t9052 + var1[1];
  p_output1[87]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.124813*t8395 + t8562 + t9052 + var1[1];
  p_output1[88]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.129664*t8395 + t8581 + t9052 + var1[1];
  p_output1[89]=t8142 + t8248 + t8326 + t8366 + t8382 + t8601 + t8602 + t9052 + var1[1];
  p_output1[90]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.138946*t8395 + t8634 + t9052 + var1[1];
  p_output1[91]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.142371*t8395 + t8671 + t9052 + var1[1];
  p_output1[92]=t8142 + t8248 + t8326 + t8366 + t8382 + t8691 + t8695 + t9052 + var1[1];
  p_output1[93]=t8142 + t8248 + t8326 + t8366 + t8382 + t8700 + t8703 + t9052 + var1[1];
  p_output1[94]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.143869*t8395 + t8708 + t9052 + var1[1];
  p_output1[95]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.141262*t8395 + t8724 + t9052 + var1[1];
  p_output1[96]=t8142 + t8248 + t8326 + t8366 + t8382 + t8729 + t8731 + t9052 + var1[1];
  p_output1[97]=t8142 + t8248 + t8326 + t8366 + t8382 + t8737 + t8740 + t9052 + var1[1];
  p_output1[98]=t8142 + t8248 + t8326 + t8366 + t8382 - 0.127865*t8395 + t8749 + t9052 + var1[1];
  p_output1[99]=t9053;
  p_output1[100]=t9097;
  p_output1[101]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.119196*t8816 + t8857 + t9094 + var1[2];
  p_output1[102]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.116403*t8816 + t8864 + t9094 + var1[2];
  p_output1[103]=t8752 + t8760 + t8784 + t8794 + t8803 + t8884 + t8887 + t9094 + var1[2];
  p_output1[104]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.115381*t8816 + t8893 + t9094 + var1[2];
  p_output1[105]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.117262*t8816 + t8897 + t9094 + var1[2];
  p_output1[106]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.120524*t8816 + t8903 + t9094 + var1[2];
  p_output1[107]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.124813*t8816 + t8908 + t9094 + var1[2];
  p_output1[108]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.129664*t8816 + t8919 + t9094 + var1[2];
  p_output1[109]=t8752 + t8760 + t8784 + t8794 + t8803 + t8930 + t8931 + t9094 + var1[2];
  p_output1[110]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.138946*t8816 + t8939 + t9094 + var1[2];
  p_output1[111]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.142371*t8816 + t8946 + t9094 + var1[2];
  p_output1[112]=t8752 + t8760 + t8784 + t8794 + t8803 + t8948 + t8950 + t9094 + var1[2];
  p_output1[113]=t8752 + t8760 + t8784 + t8794 + t8803 + t8953 + t8954 + t9094 + var1[2];
  p_output1[114]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.143869*t8816 + t8959 + t9094 + var1[2];
  p_output1[115]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.141262*t8816 + t8962 + t9094 + var1[2];
  p_output1[116]=t8752 + t8760 + t8784 + t8794 + t8803 + t8966 + t8971 + t9094 + var1[2];
  p_output1[117]=t8752 + t8760 + t8784 + t8794 + t8803 + t8974 + t8975 + t9094 + var1[2];
  p_output1[118]=t8752 + t8760 + t8784 + t8794 + t8803 - 0.127865*t8816 + t8981 + t9094 + var1[2];
  p_output1[119]=t9097;
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

#include "lower_leg_back_rightL_link_bar.hh"

namespace SymFunction
{

void lower_leg_back_rightL_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
