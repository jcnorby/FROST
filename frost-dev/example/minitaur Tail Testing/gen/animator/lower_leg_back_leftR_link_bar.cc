/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:40 GMT-04:00
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
  double t1954;
  double t3265;
  double t3915;
  double t215;
  double t4846;
  double t4857;
  double t4859;
  double t4860;
  double t4871;
  double t4877;
  double t4879;
  double t4880;
  double t4889;
  double t4890;
  double t4893;
  double t4910;
  double t1541;
  double t1864;
  double t3522;
  double t4849;
  double t4855;
  double t4870;
  double t4873;
  double t4874;
  double t4883;
  double t4884;
  double t4886;
  double t4887;
  double t4899;
  double t4901;
  double t4903;
  double t4905;
  double t4906;
  double t4913;
  double t4918;
  double t4919;
  double t4922;
  double t4924;
  double t4926;
  double t4928;
  double t5021;
  double t5026;
  double t5027;
  double t5030;
  double t5033;
  double t5039;
  double t5042;
  double t5046;
  double t5047;
  double t5048;
  double t5051;
  double t5020;
  double t5053;
  double t5055;
  double t5708;
  double t5712;
  double t5711;
  double t5719;
  double t5720;
  double t5723;
  double t5724;
  double t5725;
  double t5728;
  double t5729;
  double t5730;
  double t5734;
  double t5736;
  double t5737;
  double t5709;
  double t5722;
  double t5726;
  double t5733;
  double t5738;
  double t5739;
  double t5747;
  double t5748;
  double t5755;
  double t5803;
  double t5805;
  double t5814;
  double t5817;
  double t5823;
  double t5826;
  double t5834;
  double t5837;
  double t5843;
  double t5792;
  double t5844;
  double t5855;
  double t7330;
  double t7351;
  double t7356;
  double t7417;
  double t7420;
  double t7462;
  double t7566;
  double t7586;
  double t7596;
  double t7641;
  double t7648;
  double t7652;
  double t7248;
  double t7408;
  double t7531;
  double t7605;
  double t7658;
  double t7664;
  double t7665;
  double t7666;
  double t7668;
  double t7670;
  double t7674;
  double t7692;
  double t7695;
  double t7698;
  double t7701;
  double t7717;
  double t7747;
  double t7749;
  double t7669;
  double t7754;
  double t7758;
  double t8351;
  double t8352;
  double t8354;
  double t8355;
  double t8361;
  double t5069;
  double t5085;
  double t5118;
  double t5121;
  double t5180;
  double t5209;
  double t5212;
  double t5261;
  double t5265;
  double t5273;
  double t5408;
  double t5412;
  double t5413;
  double t5417;
  double t5419;
  double t5441;
  double t5446;
  double t5448;
  double t5455;
  double t5467;
  double t5582;
  double t5600;
  double t5676;
  double t5686;
  double t5698;
  double t8338;
  double t8362;
  double t8530;
  double t8533;
  double t8545;
  double t8563;
  double t8569;
  double t5894;
  double t5920;
  double t6141;
  double t6202;
  double t6494;
  double t6519;
  double t6538;
  double t6673;
  double t6677;
  double t6711;
  double t6737;
  double t6760;
  double t6800;
  double t6852;
  double t6875;
  double t6963;
  double t6995;
  double t7015;
  double t7052;
  double t7086;
  double t7102;
  double t7133;
  double t7139;
  double t7188;
  double t7189;
  double t8529;
  double t8592;
  double t8771;
  double t8773;
  double t8775;
  double t8777;
  double t8781;
  double t7764;
  double t7780;
  double t7805;
  double t7810;
  double t7869;
  double t7886;
  double t7918;
  double t7930;
  double t7933;
  double t7953;
  double t7959;
  double t7994;
  double t7998;
  double t8001;
  double t8002;
  double t8014;
  double t8055;
  double t8060;
  double t8129;
  double t8140;
  double t8172;
  double t8247;
  double t8289;
  double t8314;
  double t8316;
  double t8765;
  double t8783;
  t1954 = Cos(var1[4]);
  t3265 = Cos(var1[5]);
  t3915 = Sin(var1[11]);
  t215 = Cos(var1[11]);
  t4846 = Sin(var1[4]);
  t4857 = Cos(var1[13]);
  t4859 = -1.*t4857;
  t4860 = 1. + t4859;
  t4871 = Sin(var1[13]);
  t4877 = t1954*t3265*t3915;
  t4879 = t215*t4846;
  t4880 = t4877 + t4879;
  t4889 = t215*t1954*t3265;
  t4890 = -1.*t3915*t4846;
  t4893 = t4889 + t4890;
  t4910 = Sin(var1[5]);
  t1541 = -1.*t215;
  t1864 = 1. + t1541;
  t3522 = -0.225*t1864*t1954*t3265;
  t4849 = -0.225*t3915*t4846;
  t4855 = -9.75e-13*var1[13];
  t4870 = 0.1000000000009*t4860;
  t4873 = 0.225000000003*t4871;
  t4874 = t4855 + t4870 + t4873;
  t4883 = t4874*t4880;
  t4884 = -0.225000000005025*t4860;
  t4886 = 0.1000000000009*t4871;
  t4887 = t4884 + t4886;
  t4899 = t4887*t4893;
  t4901 = 3.25e-7*var1[13];
  t4903 = 3.000000000027e-7*t4860;
  t4905 = 6.75000000009e-7*t4871;
  t4906 = t4901 + t4903 + t4905;
  t4913 = -1.*t1954*t4906*t4910;
  t4918 = -3.e-6*t4860*t4880;
  t4919 = -3.e-6*t4871*t4893;
  t4922 = -9.e-12*t4860;
  t4924 = 1. + t4922;
  t4926 = -1.*t4924*t1954*t4910;
  t4928 = t4918 + t4919 + t4926;
  t5021 = t4857*t4880;
  t5026 = -1.*t4871*t4893;
  t5027 = 3.e-6*t4860*t1954*t4910;
  t5030 = t5021 + t5026 + t5027;
  t5033 = 0.1*t5030;
  t5039 = t4871*t4880;
  t5042 = -1.000000000009*t4860;
  t5046 = 1. + t5042;
  t5047 = t5046*t4893;
  t5048 = -3.e-6*t1954*t4871*t4910;
  t5051 = t5039 + t5047 + t5048;
  t5020 = 0.133668*t4928;
  t5053 = -0.239545*t5051;
  t5055 = var1[0] + t3522 + t4849 + t4883 + t4899 + t4913 + t5020 + t5033 + t5053;
  t5708 = Sin(var1[3]);
  t5712 = Cos(var1[3]);
  t5711 = t3265*t5708*t4846;
  t5719 = t5712*t4910;
  t5720 = t5711 + t5719;
  t5723 = t5712*t3265;
  t5724 = -1.*t5708*t4846*t4910;
  t5725 = t5723 + t5724;
  t5728 = t1954*t3915*t5708;
  t5729 = t215*t5720;
  t5730 = t5728 + t5729;
  t5734 = -1.*t215*t1954*t5708;
  t5736 = t3915*t5720;
  t5737 = t5734 + t5736;
  t5709 = 0.225*t1954*t3915*t5708;
  t5722 = -0.225*t1864*t5720;
  t5726 = t4906*t5725;
  t5733 = t4887*t5730;
  t5738 = t4874*t5737;
  t5739 = t4924*t5725;
  t5747 = -3.e-6*t4871*t5730;
  t5748 = -3.e-6*t4860*t5737;
  t5755 = t5739 + t5747 + t5748;
  t5803 = -3.e-6*t4860*t5725;
  t5805 = -1.*t4871*t5730;
  t5814 = t4857*t5737;
  t5817 = t5803 + t5805 + t5814;
  t5823 = 0.1*t5817;
  t5826 = 3.e-6*t4871*t5725;
  t5834 = t5046*t5730;
  t5837 = t4871*t5737;
  t5843 = t5826 + t5834 + t5837;
  t5792 = 0.133668*t5755;
  t5844 = -0.239545*t5843;
  t5855 = var1[1] + t5709 + t5722 + t5726 + t5733 + t5738 + t5792 + t5823 + t5844;
  t7330 = -1.*t5712*t3265*t4846;
  t7351 = t5708*t4910;
  t7356 = t7330 + t7351;
  t7417 = t3265*t5708;
  t7420 = t5712*t4846*t4910;
  t7462 = t7417 + t7420;
  t7566 = -1.*t5712*t1954*t3915;
  t7586 = t215*t7356;
  t7596 = t7566 + t7586;
  t7641 = t215*t5712*t1954;
  t7648 = t3915*t7356;
  t7652 = t7641 + t7648;
  t7248 = -0.225*t5712*t1954*t3915;
  t7408 = -0.225*t1864*t7356;
  t7531 = t4906*t7462;
  t7605 = t4887*t7596;
  t7658 = t4874*t7652;
  t7664 = t4924*t7462;
  t7665 = -3.e-6*t4871*t7596;
  t7666 = -3.e-6*t4860*t7652;
  t7668 = t7664 + t7665 + t7666;
  t7670 = -3.e-6*t4860*t7462;
  t7674 = -1.*t4871*t7596;
  t7692 = t4857*t7652;
  t7695 = t7670 + t7674 + t7692;
  t7698 = 0.1*t7695;
  t7701 = 3.e-6*t4871*t7462;
  t7717 = t5046*t7596;
  t7747 = t4871*t7652;
  t7749 = t7701 + t7717 + t7747;
  t7669 = 0.133668*t7668;
  t7754 = -0.239545*t7749;
  t7758 = var1[2] + t7248 + t7408 + t7531 + t7605 + t7658 + t7669 + t7698 + t7754;
  t8351 = -1.*t4857*t4880;
  t8352 = t4871*t4893;
  t8354 = -3.e-6*t4860*t1954*t4910;
  t8355 = t8351 + t8352 + t8354;
  t8361 = 0.1*t8355;
  t5069 = -0.237566*t5051;
  t5085 = -0.234225*t5051;
  t5118 = 0.144182*t4928;
  t5121 = -0.229885*t5051;
  t5180 = -0.225015*t5051;
  t5209 = 0.144192*t4928;
  t5212 = -0.220144*t5051;
  t5261 = 0.141846*t4928;
  t5265 = -0.215799*t5051;
  t5273 = -0.212451*t5051;
  t5408 = -0.210463*t5051;
  t5412 = 0.128776*t4928;
  t5413 = -0.21005*t5051;
  t5417 = 0.123988*t4928;
  t5419 = -0.211257*t5051;
  t5441 = -0.213954*t5051;
  t5446 = 0.116815*t4928;
  t5448 = -0.217847*t5051;
  t5455 = -0.222516*t5051;
  t5467 = -0.227454*t5051;
  t5582 = -0.232126*t5051;
  t5600 = -0.236026*t5051;
  t5676 = -0.238731*t5051;
  t5686 = 0.128746*t4928;
  t5698 = -0.239948*t5051;
  t8338 = 0.133667*t4928;
  t8362 = var1[0] + t3522 + t4849 + t4883 + t4899 + t4913 + t8338 + t8361 + t5053;
  t8530 = 3.e-6*t4860*t5725;
  t8533 = t4871*t5730;
  t8545 = -1.*t4857*t5737;
  t8563 = t8530 + t8533 + t8545;
  t8569 = 0.1*t8563;
  t5894 = -0.237566*t5843;
  t5920 = -0.234225*t5843;
  t6141 = 0.144182*t5755;
  t6202 = -0.229885*t5843;
  t6494 = -0.225015*t5843;
  t6519 = 0.144192*t5755;
  t6538 = -0.220144*t5843;
  t6673 = 0.141846*t5755;
  t6677 = -0.215799*t5843;
  t6711 = -0.212451*t5843;
  t6737 = -0.210463*t5843;
  t6760 = 0.128776*t5755;
  t6800 = -0.21005*t5843;
  t6852 = 0.123988*t5755;
  t6875 = -0.211257*t5843;
  t6963 = -0.213954*t5843;
  t6995 = 0.116815*t5755;
  t7015 = -0.217847*t5843;
  t7052 = -0.222516*t5843;
  t7086 = -0.227454*t5843;
  t7102 = -0.232126*t5843;
  t7133 = -0.236026*t5843;
  t7139 = -0.238731*t5843;
  t7188 = 0.128746*t5755;
  t7189 = -0.239948*t5843;
  t8529 = 0.133667*t5755;
  t8592 = var1[1] + t5709 + t5722 + t5726 + t5733 + t5738 + t8529 + t8569 + t5844;
  t8771 = 3.e-6*t4860*t7462;
  t8773 = t4871*t7596;
  t8775 = -1.*t4857*t7652;
  t8777 = t8771 + t8773 + t8775;
  t8781 = 0.1*t8777;
  t7764 = -0.237566*t7749;
  t7780 = -0.234225*t7749;
  t7805 = 0.144182*t7668;
  t7810 = -0.229885*t7749;
  t7869 = -0.225015*t7749;
  t7886 = 0.144192*t7668;
  t7918 = -0.220144*t7749;
  t7930 = 0.141846*t7668;
  t7933 = -0.215799*t7749;
  t7953 = -0.212451*t7749;
  t7959 = -0.210463*t7749;
  t7994 = 0.128776*t7668;
  t7998 = -0.21005*t7749;
  t8001 = 0.123988*t7668;
  t8002 = -0.211257*t7749;
  t8014 = -0.213954*t7749;
  t8055 = 0.116815*t7668;
  t8060 = -0.217847*t7749;
  t8129 = -0.222516*t7749;
  t8140 = -0.227454*t7749;
  t8172 = -0.232126*t7749;
  t8247 = -0.236026*t7749;
  t8289 = -0.238731*t7749;
  t8314 = 0.128746*t7668;
  t8316 = -0.239948*t7749;
  t8765 = 0.133667*t7668;
  t8783 = var1[2] + t7248 + t7408 + t7531 + t7605 + t7658 + t8765 + t8781 + t7754;
  p_output1[0]=t5055;
  p_output1[1]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.138192*t4928 + t5033 + t5069 + var1[0];
  p_output1[2]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.141828*t4928 + t5033 + t5085 + var1[0];
  p_output1[3]=t3522 + t4849 + t4883 + t4899 + t4913 + t5033 + t5118 + t5121 + var1[0];
  p_output1[4]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.145*t4928 + t5033 + t5180 + var1[0];
  p_output1[5]=t3522 + t4849 + t4883 + t4899 + t4913 + t5033 + t5209 + t5212 + var1[0];
  p_output1[6]=t3522 + t4849 + t4883 + t4899 + t4913 + t5033 + t5261 + t5265 + var1[0];
  p_output1[7]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.138217*t4928 + t5033 + t5273 + var1[0];
  p_output1[8]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.133697*t4928 + t5033 + t5408 + var1[0];
  p_output1[9]=t3522 + t4849 + t4883 + t4899 + t4913 + t5033 + t5412 + t5413 + var1[0];
  p_output1[10]=t3522 + t4849 + t4883 + t4899 + t4913 + t5033 + t5417 + t5419 + var1[0];
  p_output1[11]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.119852*t4928 + t5033 + t5441 + var1[0];
  p_output1[12]=t3522 + t4849 + t4883 + t4899 + t4913 + t5033 + t5446 + t5448 + var1[0];
  p_output1[13]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.115207*t4928 + t5033 + t5455 + var1[0];
  p_output1[14]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.115202*t4928 + t5033 + t5467 + var1[0];
  p_output1[15]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.116801*t4928 + t5033 + t5582 + var1[0];
  p_output1[16]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.11983*t4928 + t5033 + t5600 + var1[0];
  p_output1[17]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.123961*t4928 + t5033 + t5676 + var1[0];
  p_output1[18]=t3522 + t4849 + t4883 + t4899 + t4913 + t5033 + t5686 + t5698 + var1[0];
  p_output1[19]=t5055;
  p_output1[20]=t5855;
  p_output1[21]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.138192*t5755 + t5823 + t5894 + var1[1];
  p_output1[22]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.141828*t5755 + t5823 + t5920 + var1[1];
  p_output1[23]=t5709 + t5722 + t5726 + t5733 + t5738 + t5823 + t6141 + t6202 + var1[1];
  p_output1[24]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.145*t5755 + t5823 + t6494 + var1[1];
  p_output1[25]=t5709 + t5722 + t5726 + t5733 + t5738 + t5823 + t6519 + t6538 + var1[1];
  p_output1[26]=t5709 + t5722 + t5726 + t5733 + t5738 + t5823 + t6673 + t6677 + var1[1];
  p_output1[27]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.138217*t5755 + t5823 + t6711 + var1[1];
  p_output1[28]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.133697*t5755 + t5823 + t6737 + var1[1];
  p_output1[29]=t5709 + t5722 + t5726 + t5733 + t5738 + t5823 + t6760 + t6800 + var1[1];
  p_output1[30]=t5709 + t5722 + t5726 + t5733 + t5738 + t5823 + t6852 + t6875 + var1[1];
  p_output1[31]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.119852*t5755 + t5823 + t6963 + var1[1];
  p_output1[32]=t5709 + t5722 + t5726 + t5733 + t5738 + t5823 + t6995 + t7015 + var1[1];
  p_output1[33]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.115207*t5755 + t5823 + t7052 + var1[1];
  p_output1[34]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.115202*t5755 + t5823 + t7086 + var1[1];
  p_output1[35]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.116801*t5755 + t5823 + t7102 + var1[1];
  p_output1[36]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.11983*t5755 + t5823 + t7133 + var1[1];
  p_output1[37]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.123961*t5755 + t5823 + t7139 + var1[1];
  p_output1[38]=t5709 + t5722 + t5726 + t5733 + t5738 + t5823 + t7188 + t7189 + var1[1];
  p_output1[39]=t5855;
  p_output1[40]=t7758;
  p_output1[41]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.138192*t7668 + t7698 + t7764 + var1[2];
  p_output1[42]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.141828*t7668 + t7698 + t7780 + var1[2];
  p_output1[43]=t7248 + t7408 + t7531 + t7605 + t7658 + t7698 + t7805 + t7810 + var1[2];
  p_output1[44]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.145*t7668 + t7698 + t7869 + var1[2];
  p_output1[45]=t7248 + t7408 + t7531 + t7605 + t7658 + t7698 + t7886 + t7918 + var1[2];
  p_output1[46]=t7248 + t7408 + t7531 + t7605 + t7658 + t7698 + t7930 + t7933 + var1[2];
  p_output1[47]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.138217*t7668 + t7698 + t7953 + var1[2];
  p_output1[48]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.133697*t7668 + t7698 + t7959 + var1[2];
  p_output1[49]=t7248 + t7408 + t7531 + t7605 + t7658 + t7698 + t7994 + t7998 + var1[2];
  p_output1[50]=t7248 + t7408 + t7531 + t7605 + t7658 + t7698 + t8001 + t8002 + var1[2];
  p_output1[51]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.119852*t7668 + t7698 + t8014 + var1[2];
  p_output1[52]=t7248 + t7408 + t7531 + t7605 + t7658 + t7698 + t8055 + t8060 + var1[2];
  p_output1[53]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.115207*t7668 + t7698 + t8129 + var1[2];
  p_output1[54]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.115202*t7668 + t7698 + t8140 + var1[2];
  p_output1[55]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.116801*t7668 + t7698 + t8172 + var1[2];
  p_output1[56]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.11983*t7668 + t7698 + t8247 + var1[2];
  p_output1[57]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.123961*t7668 + t7698 + t8289 + var1[2];
  p_output1[58]=t7248 + t7408 + t7531 + t7605 + t7658 + t7698 + t8314 + t8316 + var1[2];
  p_output1[59]=t7758;
  p_output1[60]=t8362;
  p_output1[61]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.138191*t4928 + t5069 + t8361 + var1[0];
  p_output1[62]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.141827*t4928 + t5085 + t8361 + var1[0];
  p_output1[63]=t3522 + t4849 + t4883 + t4899 + t4913 + t5118 + t5121 + t8361 + var1[0];
  p_output1[64]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.144999*t4928 + t5180 + t8361 + var1[0];
  p_output1[65]=t3522 + t4849 + t4883 + t4899 + t4913 + t5209 + t5212 + t8361 + var1[0];
  p_output1[66]=t3522 + t4849 + t4883 + t4899 + t4913 + t5261 + t5265 + t8361 + var1[0];
  p_output1[67]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.138216*t4928 + t5273 + t8361 + var1[0];
  p_output1[68]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.133696*t4928 + t5408 + t8361 + var1[0];
  p_output1[69]=t3522 + t4849 + t4883 + t4899 + t4913 + t5412 + t5413 + t8361 + var1[0];
  p_output1[70]=t3522 + t4849 + t4883 + t4899 + t4913 + t5417 + t5419 + t8361 + var1[0];
  p_output1[71]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.119851*t4928 + t5441 + t8361 + var1[0];
  p_output1[72]=t3522 + t4849 + t4883 + t4899 + t4913 + t5446 + t5448 + t8361 + var1[0];
  p_output1[73]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.115206*t4928 + t5455 + t8361 + var1[0];
  p_output1[74]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.115201*t4928 + t5467 + t8361 + var1[0];
  p_output1[75]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.1168*t4928 + t5582 + t8361 + var1[0];
  p_output1[76]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.119829*t4928 + t5600 + t8361 + var1[0];
  p_output1[77]=t3522 + t4849 + t4883 + t4899 + t4913 + 0.12396*t4928 + t5676 + t8361 + var1[0];
  p_output1[78]=t3522 + t4849 + t4883 + t4899 + t4913 + t5686 + t5698 + t8361 + var1[0];
  p_output1[79]=t8362;
  p_output1[80]=t8592;
  p_output1[81]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.138191*t5755 + t5894 + t8569 + var1[1];
  p_output1[82]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.141827*t5755 + t5920 + t8569 + var1[1];
  p_output1[83]=t5709 + t5722 + t5726 + t5733 + t5738 + t6141 + t6202 + t8569 + var1[1];
  p_output1[84]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.144999*t5755 + t6494 + t8569 + var1[1];
  p_output1[85]=t5709 + t5722 + t5726 + t5733 + t5738 + t6519 + t6538 + t8569 + var1[1];
  p_output1[86]=t5709 + t5722 + t5726 + t5733 + t5738 + t6673 + t6677 + t8569 + var1[1];
  p_output1[87]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.138216*t5755 + t6711 + t8569 + var1[1];
  p_output1[88]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.133696*t5755 + t6737 + t8569 + var1[1];
  p_output1[89]=t5709 + t5722 + t5726 + t5733 + t5738 + t6760 + t6800 + t8569 + var1[1];
  p_output1[90]=t5709 + t5722 + t5726 + t5733 + t5738 + t6852 + t6875 + t8569 + var1[1];
  p_output1[91]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.119851*t5755 + t6963 + t8569 + var1[1];
  p_output1[92]=t5709 + t5722 + t5726 + t5733 + t5738 + t6995 + t7015 + t8569 + var1[1];
  p_output1[93]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.115206*t5755 + t7052 + t8569 + var1[1];
  p_output1[94]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.115201*t5755 + t7086 + t8569 + var1[1];
  p_output1[95]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.1168*t5755 + t7102 + t8569 + var1[1];
  p_output1[96]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.119829*t5755 + t7133 + t8569 + var1[1];
  p_output1[97]=t5709 + t5722 + t5726 + t5733 + t5738 + 0.12396*t5755 + t7139 + t8569 + var1[1];
  p_output1[98]=t5709 + t5722 + t5726 + t5733 + t5738 + t7188 + t7189 + t8569 + var1[1];
  p_output1[99]=t8592;
  p_output1[100]=t8783;
  p_output1[101]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.138191*t7668 + t7764 + t8781 + var1[2];
  p_output1[102]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.141827*t7668 + t7780 + t8781 + var1[2];
  p_output1[103]=t7248 + t7408 + t7531 + t7605 + t7658 + t7805 + t7810 + t8781 + var1[2];
  p_output1[104]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.144999*t7668 + t7869 + t8781 + var1[2];
  p_output1[105]=t7248 + t7408 + t7531 + t7605 + t7658 + t7886 + t7918 + t8781 + var1[2];
  p_output1[106]=t7248 + t7408 + t7531 + t7605 + t7658 + t7930 + t7933 + t8781 + var1[2];
  p_output1[107]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.138216*t7668 + t7953 + t8781 + var1[2];
  p_output1[108]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.133696*t7668 + t7959 + t8781 + var1[2];
  p_output1[109]=t7248 + t7408 + t7531 + t7605 + t7658 + t7994 + t7998 + t8781 + var1[2];
  p_output1[110]=t7248 + t7408 + t7531 + t7605 + t7658 + t8001 + t8002 + t8781 + var1[2];
  p_output1[111]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.119851*t7668 + t8014 + t8781 + var1[2];
  p_output1[112]=t7248 + t7408 + t7531 + t7605 + t7658 + t8055 + t8060 + t8781 + var1[2];
  p_output1[113]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.115206*t7668 + t8129 + t8781 + var1[2];
  p_output1[114]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.115201*t7668 + t8140 + t8781 + var1[2];
  p_output1[115]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.1168*t7668 + t8172 + t8781 + var1[2];
  p_output1[116]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.119829*t7668 + t8247 + t8781 + var1[2];
  p_output1[117]=t7248 + t7408 + t7531 + t7605 + t7658 + 0.12396*t7668 + t8289 + t8781 + var1[2];
  p_output1[118]=t7248 + t7408 + t7531 + t7605 + t7658 + t8314 + t8316 + t8781 + var1[2];
  p_output1[119]=t8783;
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

#include "lower_leg_back_leftR_link_bar.hh"

namespace SymFunction
{

void lower_leg_back_leftR_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
