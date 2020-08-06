/*
 * Automatically Generated from Mathematica.
 * Wed 5 Aug 2020 20:30:43 GMT-04:00
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
  double t1868;
  double t5417;
  double t5474;
  double t5486;
  double t5493;
  double t1951;
  double t2026;
  double t5523;
  double t5528;
  double t5533;
  double t5540;
  double t5495;
  double t5496;
  double t5497;
  double t5499;
  double t5548;
  double t5551;
  double t5552;
  double t5553;
  double t5555;
  double t5556;
  double t5560;
  double t5562;
  double t5502;
  double t5506;
  double t5508;
  double t5594;
  double t5601;
  double t5602;
  double t5648;
  double t5656;
  double t5691;
  double t5620;
  double t5695;
  double t5696;
  double t5697;
  double t5660;
  double t5661;
  double t5662;
  double t5664;
  double t5699;
  double t5700;
  double t5701;
  double t5702;
  double t5704;
  double t5707;
  double t5711;
  double t5715;
  double t5675;
  double t5679;
  double t5683;
  double t5729;
  double t5730;
  double t5731;
  double t5761;
  double t5763;
  double t5793;
  double t5751;
  double t5794;
  double t5795;
  double t5796;
  double t5767;
  double t5768;
  double t5769;
  double t5771;
  double t5798;
  double t5799;
  double t5800;
  double t5804;
  double t5809;
  double t5821;
  double t5825;
  double t5829;
  double t5783;
  double t5787;
  double t5791;
  double t5834;
  double t5835;
  double t5836;
  double t5866;
  double t5868;
  double t5898;
  double t5862;
  double t5899;
  double t5900;
  double t5901;
  double t5872;
  double t5873;
  double t5877;
  double t5885;
  double t5903;
  double t5904;
  double t5905;
  double t5909;
  double t5917;
  double t5926;
  double t5927;
  double t5928;
  double t5894;
  double t5895;
  double t5896;
  double t5933;
  double t5934;
  double t5935;
  double t2492;
  double t2779;
  double t5434;
  double t5469;
  double t5948;
  double t5946;
  double t5498;
  double t5500;
  double t5501;
  double t5952;
  double t5953;
  double t5954;
  double t5549;
  double t5550;
  double t5947;
  double t5949;
  double t5950;
  double t5961;
  double t5962;
  double t5963;
  double t5577;
  double t5582;
  double t5587;
  double t5965;
  double t5966;
  double t5967;
  double t5969;
  double t5970;
  double t5971;
  double t5957;
  double t5958;
  double t5959;
  double t5973;
  double t5974;
  double t5975;
  double t5631;
  double t5636;
  double t5657;
  double t5658;
  double t5663;
  double t5670;
  double t5674;
  double t5993;
  double t5994;
  double t5995;
  double t5705;
  double t5706;
  double t5723;
  double t5727;
  double t5728;
  double t5997;
  double t5998;
  double t5999;
  double t6001;
  double t6002;
  double t6003;
  double t5989;
  double t5990;
  double t5991;
  double t6005;
  double t6006;
  double t6007;
  double t5755;
  double t5759;
  double t5764;
  double t5765;
  double t5770;
  double t5775;
  double t5779;
  double t6025;
  double t6026;
  double t6027;
  double t5813;
  double t5817;
  double t5831;
  double t5832;
  double t5833;
  double t6029;
  double t6030;
  double t6031;
  double t6033;
  double t6034;
  double t6035;
  double t6021;
  double t6022;
  double t6023;
  double t6037;
  double t6038;
  double t6039;
  double t5863;
  double t5864;
  double t5869;
  double t5870;
  double t5881;
  double t5889;
  double t5893;
  double t6057;
  double t6058;
  double t6059;
  double t5921;
  double t5925;
  double t5930;
  double t5931;
  double t5932;
  double t6061;
  double t6062;
  double t6063;
  double t6065;
  double t6066;
  double t6067;
  double t6053;
  double t6054;
  double t6055;
  double t6069;
  double t6070;
  double t6071;
  double t6086;
  double t6087;
  double t6088;
  double t6082;
  double t6083;
  double t6084;
  double t6095;
  double t6096;
  double t6097;
  double t6099;
  double t6100;
  double t6101;
  double t6103;
  double t6104;
  double t6105;
  double t6091;
  double t6092;
  double t6093;
  double t6107;
  double t6108;
  double t6109;
  double t6127;
  double t6128;
  double t6129;
  double t6131;
  double t6132;
  double t6133;
  double t6135;
  double t6136;
  double t6137;
  double t6123;
  double t6124;
  double t6125;
  double t6139;
  double t6140;
  double t6141;
  double t6159;
  double t6160;
  double t6161;
  double t6163;
  double t6164;
  double t6165;
  double t6167;
  double t6168;
  double t6169;
  double t6155;
  double t6156;
  double t6157;
  double t6171;
  double t6172;
  double t6173;
  double t6191;
  double t6192;
  double t6193;
  double t6195;
  double t6196;
  double t6197;
  double t6199;
  double t6200;
  double t6201;
  double t6187;
  double t6188;
  double t6189;
  double t6203;
  double t6204;
  double t6205;
  t1868 = Cos(var1[4]);
  t5417 = Cos(var1[6]);
  t5474 = Sin(var1[5]);
  t5486 = Sin(var1[4]);
  t5493 = Sin(var1[6]);
  t1951 = Cos(var1[5]);
  t2026 = Cos(var1[7]);
  t5523 = t5417*t5486;
  t5528 = t1868*t5474*t5493;
  t5533 = t5523 + t5528;
  t5540 = Sin(var1[7]);
  t5495 = Cos(var1[9]);
  t5496 = -1.*t5495;
  t5497 = 1. + t5496;
  t5499 = Sin(var1[9]);
  t5548 = Cos(var1[8]);
  t5551 = t1868*t1951*t2026;
  t5552 = t5533*t5540;
  t5553 = t5551 + t5552;
  t5555 = t2026*t5533;
  t5556 = -1.*t1868*t1951*t5540;
  t5560 = t5555 + t5556;
  t5562 = Sin(var1[8]);
  t5502 = -1.*t1868*t5417*t5474;
  t5506 = t5486*t5493;
  t5508 = t5502 + t5506;
  t5594 = t5548*t5553;
  t5601 = -1.*t5560*t5562;
  t5602 = t5594 + t5601;
  t5648 = Sin(var1[10]);
  t5656 = Cos(var1[10]);
  t5691 = Sin(var1[11]);
  t5620 = Cos(var1[11]);
  t5695 = t5656*t5486;
  t5696 = t1868*t5648*t5474;
  t5697 = t5695 + t5696;
  t5660 = Cos(var1[13]);
  t5661 = -1.*t5660;
  t5662 = 1. + t5661;
  t5664 = Sin(var1[13]);
  t5699 = Sin(var1[12]);
  t5700 = -1.*t1868*t1951*t5691;
  t5701 = t5620*t5697;
  t5702 = t5700 + t5701;
  t5704 = Cos(var1[12]);
  t5707 = t5620*t1868*t1951;
  t5711 = t5691*t5697;
  t5715 = t5707 + t5711;
  t5675 = t5648*t5486;
  t5679 = -1.*t5656*t1868*t5474;
  t5683 = t5675 + t5679;
  t5729 = -1.*t5699*t5702;
  t5730 = t5704*t5715;
  t5731 = t5729 + t5730;
  t5761 = Sin(var1[14]);
  t5763 = Cos(var1[14]);
  t5793 = Sin(var1[15]);
  t5751 = Cos(var1[15]);
  t5794 = t5763*t5486;
  t5795 = t1868*t5761*t5474;
  t5796 = t5794 + t5795;
  t5767 = Cos(var1[17]);
  t5768 = -1.*t5767;
  t5769 = 1. + t5768;
  t5771 = Sin(var1[17]);
  t5798 = Sin(var1[16]);
  t5799 = -1.*t1868*t1951*t5793;
  t5800 = t5751*t5796;
  t5804 = t5799 + t5800;
  t5809 = Cos(var1[16]);
  t5821 = t5751*t1868*t1951;
  t5825 = t5793*t5796;
  t5829 = t5821 + t5825;
  t5783 = t5761*t5486;
  t5787 = -1.*t5763*t1868*t5474;
  t5791 = t5783 + t5787;
  t5834 = -1.*t5798*t5804;
  t5835 = t5809*t5829;
  t5836 = t5834 + t5835;
  t5866 = Sin(var1[18]);
  t5868 = Cos(var1[18]);
  t5898 = Sin(var1[19]);
  t5862 = Cos(var1[19]);
  t5899 = t5868*t5486;
  t5900 = t1868*t5866*t5474;
  t5901 = t5899 + t5900;
  t5872 = Cos(var1[21]);
  t5873 = -1.*t5872;
  t5877 = 1. + t5873;
  t5885 = Sin(var1[21]);
  t5903 = Sin(var1[20]);
  t5904 = -1.*t1868*t1951*t5898;
  t5905 = t5862*t5901;
  t5909 = t5904 + t5905;
  t5917 = Cos(var1[20]);
  t5926 = t5862*t1868*t1951;
  t5927 = t5898*t5901;
  t5928 = t5926 + t5927;
  t5894 = t5866*t5486;
  t5895 = -1.*t5868*t1868*t5474;
  t5896 = t5894 + t5895;
  t5933 = -1.*t5903*t5909;
  t5934 = t5917*t5928;
  t5935 = t5933 + t5934;
  t2492 = -1.*t2026;
  t2779 = 1. + t2492;
  t5434 = -1.*t5417;
  t5469 = 1. + t5434;
  t5948 = Cos(var1[3]);
  t5946 = Sin(var1[3]);
  t5498 = 0.16832*t5497;
  t5500 = -0.23205*t5499;
  t5501 = t5498 + t5500;
  t5952 = t5948*t1951;
  t5953 = -1.*t5946*t5486*t5474;
  t5954 = t5952 + t5953;
  t5549 = -1.*t5548;
  t5550 = 1. + t5549;
  t5947 = t1951*t5946*t5486;
  t5949 = t5948*t5474;
  t5950 = t5947 + t5949;
  t5961 = -1.*t1868*t5417*t5946;
  t5962 = -1.*t5954*t5493;
  t5963 = t5961 + t5962;
  t5577 = 0.23205*t5497;
  t5582 = 0.16832*t5499;
  t5587 = t5577 + t5582;
  t5965 = t2026*t5950;
  t5966 = t5963*t5540;
  t5967 = t5965 + t5966;
  t5969 = t2026*t5963;
  t5970 = -1.*t5950*t5540;
  t5971 = t5969 + t5970;
  t5957 = t5417*t5954;
  t5958 = -1.*t1868*t5946*t5493;
  t5959 = t5957 + t5958;
  t5973 = t5548*t5967;
  t5974 = -1.*t5971*t5562;
  t5975 = t5973 + t5974;
  t5631 = -1.*t5620;
  t5636 = 1. + t5631;
  t5657 = -1.*t5656;
  t5658 = 1. + t5657;
  t5663 = 0.16832*t5662;
  t5670 = 0.23205*t5664;
  t5674 = t5663 + t5670;
  t5993 = -1.*t5656*t1868*t5946;
  t5994 = -1.*t5648*t5954;
  t5995 = t5993 + t5994;
  t5705 = -1.*t5704;
  t5706 = 1. + t5705;
  t5723 = -0.23205*t5662;
  t5727 = 0.16832*t5664;
  t5728 = t5723 + t5727;
  t5997 = -1.*t5691*t5950;
  t5998 = t5620*t5995;
  t5999 = t5997 + t5998;
  t6001 = t5620*t5950;
  t6002 = t5691*t5995;
  t6003 = t6001 + t6002;
  t5989 = -1.*t1868*t5648*t5946;
  t5990 = t5656*t5954;
  t5991 = t5989 + t5990;
  t6005 = -1.*t5699*t5999;
  t6006 = t5704*t6003;
  t6007 = t6005 + t6006;
  t5755 = -1.*t5751;
  t5759 = 1. + t5755;
  t5764 = -1.*t5763;
  t5765 = 1. + t5764;
  t5770 = -0.16832*t5769;
  t5775 = -0.23205*t5771;
  t5779 = t5770 + t5775;
  t6025 = -1.*t5763*t1868*t5946;
  t6026 = -1.*t5761*t5954;
  t6027 = t6025 + t6026;
  t5813 = -1.*t5809;
  t5817 = 1. + t5813;
  t5831 = 0.23205*t5769;
  t5832 = -0.16832*t5771;
  t5833 = t5831 + t5832;
  t6029 = -1.*t5793*t5950;
  t6030 = t5751*t6027;
  t6031 = t6029 + t6030;
  t6033 = t5751*t5950;
  t6034 = t5793*t6027;
  t6035 = t6033 + t6034;
  t6021 = -1.*t1868*t5761*t5946;
  t6022 = t5763*t5954;
  t6023 = t6021 + t6022;
  t6037 = -1.*t5798*t6031;
  t6038 = t5809*t6035;
  t6039 = t6037 + t6038;
  t5863 = -1.*t5862;
  t5864 = 1. + t5863;
  t5869 = -1.*t5868;
  t5870 = 1. + t5869;
  t5881 = -0.16832*t5877;
  t5889 = 0.23205*t5885;
  t5893 = t5881 + t5889;
  t6057 = -1.*t5868*t1868*t5946;
  t6058 = -1.*t5866*t5954;
  t6059 = t6057 + t6058;
  t5921 = -1.*t5917;
  t5925 = 1. + t5921;
  t5930 = -0.23205*t5877;
  t5931 = -0.16832*t5885;
  t5932 = t5930 + t5931;
  t6061 = -1.*t5898*t5950;
  t6062 = t5862*t6059;
  t6063 = t6061 + t6062;
  t6065 = t5862*t5950;
  t6066 = t5898*t6059;
  t6067 = t6065 + t6066;
  t6053 = -1.*t1868*t5866*t5946;
  t6054 = t5868*t5954;
  t6055 = t6053 + t6054;
  t6069 = -1.*t5903*t6063;
  t6070 = t5917*t6067;
  t6071 = t6069 + t6070;
  t6086 = t1951*t5946;
  t6087 = t5948*t5486*t5474;
  t6088 = t6086 + t6087;
  t6082 = -1.*t5948*t1951*t5486;
  t6083 = t5946*t5474;
  t6084 = t6082 + t6083;
  t6095 = t5948*t1868*t5417;
  t6096 = -1.*t6088*t5493;
  t6097 = t6095 + t6096;
  t6099 = t2026*t6084;
  t6100 = t6097*t5540;
  t6101 = t6099 + t6100;
  t6103 = t2026*t6097;
  t6104 = -1.*t6084*t5540;
  t6105 = t6103 + t6104;
  t6091 = t5417*t6088;
  t6092 = t5948*t1868*t5493;
  t6093 = t6091 + t6092;
  t6107 = t5548*t6101;
  t6108 = -1.*t6105*t5562;
  t6109 = t6107 + t6108;
  t6127 = t5656*t5948*t1868;
  t6128 = -1.*t5648*t6088;
  t6129 = t6127 + t6128;
  t6131 = -1.*t5691*t6084;
  t6132 = t5620*t6129;
  t6133 = t6131 + t6132;
  t6135 = t5620*t6084;
  t6136 = t5691*t6129;
  t6137 = t6135 + t6136;
  t6123 = t5948*t1868*t5648;
  t6124 = t5656*t6088;
  t6125 = t6123 + t6124;
  t6139 = -1.*t5699*t6133;
  t6140 = t5704*t6137;
  t6141 = t6139 + t6140;
  t6159 = t5763*t5948*t1868;
  t6160 = -1.*t5761*t6088;
  t6161 = t6159 + t6160;
  t6163 = -1.*t5793*t6084;
  t6164 = t5751*t6161;
  t6165 = t6163 + t6164;
  t6167 = t5751*t6084;
  t6168 = t5793*t6161;
  t6169 = t6167 + t6168;
  t6155 = t5948*t1868*t5761;
  t6156 = t5763*t6088;
  t6157 = t6155 + t6156;
  t6171 = -1.*t5798*t6165;
  t6172 = t5809*t6169;
  t6173 = t6171 + t6172;
  t6191 = t5868*t5948*t1868;
  t6192 = -1.*t5866*t6088;
  t6193 = t6191 + t6192;
  t6195 = -1.*t5898*t6084;
  t6196 = t5862*t6193;
  t6197 = t6195 + t6196;
  t6199 = t5862*t6084;
  t6200 = t5898*t6193;
  t6201 = t6199 + t6200;
  t6187 = t5948*t1868*t5866;
  t6188 = t5868*t6088;
  t6189 = t6187 + t6188;
  t6203 = -1.*t5903*t6197;
  t6204 = t5917*t6201;
  t6205 = t6203 + t6204;
  p_output1[0]=0.23205*t1868*t1951*t2779 - 0.07*t1868*t5469*t5474 - 0.07*t5486*t5493 + t5501*t5508 - 0.23205*t5533*t5540 + 0.02455*t5550*t5553 + 0.02455*t5560*t5562 + t5587*t5602 + 0.23205*(t5499*t5508 + t5495*t5602) + 0.16832*(t5495*t5508 - 1.*t5499*t5602) + var1[0];
  p_output1[1]=-0.23205*t1868*t1951*t5636 - 0.07*t5486*t5648 - 0.07*t1868*t5474*t5658 + t5674*t5683 + 0.23205*t5691*t5697 - 0.43955*t5699*t5702 - 0.43955*t5706*t5715 + t5728*t5731 - 0.23205*(t5664*t5683 + t5660*t5731) + 0.16832*(t5660*t5683 - 1.*t5664*t5731) + var1[0];
  p_output1[2]=0.23205*t1868*t1951*t5759 + 0.07*t5486*t5761 + 0.07*t1868*t5474*t5765 + t5779*t5791 - 0.23205*t5793*t5796 + 0.02455*t5798*t5804 + 0.02455*t5817*t5829 + t5833*t5836 + 0.23205*(t5771*t5791 + t5767*t5836) - 0.16832*(t5767*t5791 - 1.*t5771*t5836) + var1[0];
  p_output1[3]=-0.23205*t1868*t1951*t5864 + 0.07*t5486*t5866 + 0.07*t1868*t5474*t5870 + t5893*t5896 + 0.23205*t5898*t5901 - 0.43955*t5903*t5909 - 0.43955*t5925*t5928 + t5932*t5935 - 0.23205*(t5885*t5896 + t5872*t5935) - 0.16832*(t5872*t5896 - 1.*t5885*t5935) + var1[0];
  p_output1[4]=0.07*t1868*t5493*t5946 + 0.23205*t2779*t5950 + 0.07*t5469*t5954 + t5501*t5959 - 0.23205*t5540*t5963 + 0.02455*t5550*t5967 + 0.02455*t5562*t5971 + t5587*t5975 + 0.23205*(t5499*t5959 + t5495*t5975) + 0.16832*(t5495*t5959 - 1.*t5499*t5975) + var1[1];
  p_output1[5]=0.07*t1868*t5648*t5946 - 0.23205*t5636*t5950 + 0.07*t5658*t5954 + t5674*t5991 + 0.23205*t5691*t5995 - 0.43955*t5699*t5999 - 0.43955*t5706*t6003 + t5728*t6007 - 0.23205*(t5664*t5991 + t5660*t6007) + 0.16832*(t5660*t5991 - 1.*t5664*t6007) + var1[1];
  p_output1[6]=-0.07*t1868*t5761*t5946 + 0.23205*t5759*t5950 - 0.07*t5765*t5954 + t5779*t6023 - 0.23205*t5793*t6027 + 0.02455*t5798*t6031 + 0.02455*t5817*t6035 + t5833*t6039 + 0.23205*(t5771*t6023 + t5767*t6039) - 0.16832*(t5767*t6023 - 1.*t5771*t6039) + var1[1];
  p_output1[7]=-0.07*t1868*t5866*t5946 - 0.23205*t5864*t5950 - 0.07*t5870*t5954 + t5893*t6055 + 0.23205*t5898*t6059 - 0.43955*t5903*t6063 - 0.43955*t5925*t6067 + t5932*t6071 - 0.23205*(t5885*t6055 + t5872*t6071) - 0.16832*(t5872*t6055 - 1.*t5885*t6071) + var1[1];
  p_output1[8]=-0.07*t1868*t5493*t5948 + 0.23205*t2779*t6084 + 0.07*t5469*t6088 + t5501*t6093 - 0.23205*t5540*t6097 + 0.02455*t5550*t6101 + 0.02455*t5562*t6105 + t5587*t6109 + 0.23205*(t5499*t6093 + t5495*t6109) + 0.16832*(t5495*t6093 - 1.*t5499*t6109) + var1[2];
  p_output1[9]=-0.07*t1868*t5648*t5948 - 0.23205*t5636*t6084 + 0.07*t5658*t6088 + t5674*t6125 + 0.23205*t5691*t6129 - 0.43955*t5699*t6133 - 0.43955*t5706*t6137 + t5728*t6141 - 0.23205*(t5664*t6125 + t5660*t6141) + 0.16832*(t5660*t6125 - 1.*t5664*t6141) + var1[2];
  p_output1[10]=0.07*t1868*t5761*t5948 + 0.23205*t5759*t6084 - 0.07*t5765*t6088 + t5779*t6157 - 0.23205*t5793*t6161 + 0.02455*t5798*t6165 + 0.02455*t5817*t6169 + t5833*t6173 + 0.23205*(t5771*t6157 + t5767*t6173) - 0.16832*(t5767*t6157 - 1.*t5771*t6173) + var1[2];
  p_output1[11]=0.07*t1868*t5866*t5948 - 0.23205*t5864*t6084 - 0.07*t5870*t6088 + t5893*t6189 + 0.23205*t5898*t6193 - 0.43955*t5903*t6197 - 0.43955*t5925*t6201 + t5932*t6205 - 0.23205*(t5885*t6189 + t5872*t6205) - 0.16832*(t5872*t6189 - 1.*t5885*t6205) + var1[2];
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
