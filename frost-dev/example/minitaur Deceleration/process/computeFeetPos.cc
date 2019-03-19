/*
 * Automatically Generated from Mathematica.
 * Tue 19 Mar 2019 16:46:22 GMT-04:00
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
  double t3919;
  double t3993;
  double t4186;
  double t4219;
  double t3986;
  double t4324;
  double t4331;
  double t4332;
  double t4412;
  double t4414;
  double t4417;
  double t4422;
  double t4470;
  double t4495;
  double t4511;
  double t4340;
  double t4350;
  double t4355;
  double t4376;
  double t4426;
  double t4529;
  double t4530;
  double t4532;
  double t4533;
  double t4535;
  double t4536;
  double t4668;
  double t4545;
  double t4624;
  double t4640;
  double t4643;
  double t4646;
  double t4653;
  double t4658;
  double t4669;
  double t4411;
  double t4550;
  double t4419;
  double t4563;
  double t4564;
  double t4678;
  double t4663;
  double t4765;
  double t4766;
  double t4767;
  double t4785;
  double t4790;
  double t4791;
  double t4797;
  double t4798;
  double t4769;
  double t4802;
  double t4803;
  double t4813;
  double t4799;
  double t4800;
  double t4819;
  double t4806;
  double t4807;
  double t4808;
  double t4809;
  double t4810;
  double t4811;
  double t4833;
  double t4834;
  double t4835;
  double t4836;
  double t4843;
  double t4844;
  double t4845;
  double t4846;
  double t4847;
  double t4848;
  double t4858;
  double t4868;
  double t4869;
  double t4865;
  double t4824;
  double t4863;
  double t4873;
  double t4900;
  double t4901;
  double t4902;
  double t4908;
  double t4909;
  double t4910;
  double t4912;
  double t4913;
  double t4904;
  double t4927;
  double t4932;
  double t4946;
  double t4917;
  double t4921;
  double t4948;
  double t4939;
  double t4940;
  double t4941;
  double t4942;
  double t4943;
  double t4944;
  double t4954;
  double t4955;
  double t4956;
  double t4961;
  double t4976;
  double t4977;
  double t4978;
  double t4979;
  double t4980;
  double t4981;
  double t4983;
  double t4989;
  double t4990;
  double t4986;
  double t4949;
  double t4984;
  double t5006;
  double t5021;
  double t5022;
  double t5023;
  double t5041;
  double t5042;
  double t5043;
  double t5045;
  double t5046;
  double t5029;
  double t5050;
  double t5051;
  double t5061;
  double t5047;
  double t5048;
  double t5063;
  double t5054;
  double t5055;
  double t5056;
  double t5057;
  double t5058;
  double t5059;
  double t5069;
  double t5070;
  double t5071;
  double t5072;
  double t5079;
  double t5080;
  double t5081;
  double t5082;
  double t5083;
  double t5084;
  double t5086;
  double t5092;
  double t5093;
  double t5089;
  double t5064;
  double t5087;
  double t5097;
  double t5114;
  double t5112;
  double t5113;
  double t5115;
  double t5116;
  double t5118;
  double t5119;
  double t5120;
  double t4418;
  double t4433;
  double t4437;
  double t4522;
  double t4525;
  double t4537;
  double t4540;
  double t4555;
  double t4556;
  double t4557;
  double t5123;
  double t5124;
  double t5125;
  double t5126;
  double t4665;
  double t5128;
  double t5129;
  double t5130;
  double t5131;
  double t4675;
  double t4676;
  double t5134;
  double t5135;
  double t5136;
  double t5137;
  double t4731;
  double t4743;
  double t4746;
  double t4749;
  double t4752;
  double t4757;
  double t4780;
  double t4796;
  double t4801;
  double t4804;
  double t4805;
  double t4814;
  double t4829;
  double t4830;
  double t4831;
  double t4832;
  double t4838;
  double t4839;
  double t4840;
  double t4841;
  double t4842;
  double t5157;
  double t5158;
  double t5159;
  double t5160;
  double t4866;
  double t5162;
  double t5163;
  double t5164;
  double t5165;
  double t5167;
  double t5168;
  double t5169;
  double t5170;
  double t4876;
  double t4880;
  double t4881;
  double t4907;
  double t4911;
  double t4922;
  double t4933;
  double t4938;
  double t4947;
  double t4950;
  double t4951;
  double t4952;
  double t4953;
  double t4971;
  double t4972;
  double t4973;
  double t4974;
  double t4975;
  double t5191;
  double t5192;
  double t5193;
  double t5194;
  double t4987;
  double t5196;
  double t5197;
  double t5198;
  double t5199;
  double t5201;
  double t5202;
  double t5203;
  double t5204;
  double t5009;
  double t5013;
  double t5014;
  double t5040;
  double t5044;
  double t5049;
  double t5052;
  double t5053;
  double t5062;
  double t5065;
  double t5066;
  double t5067;
  double t5068;
  double t5074;
  double t5075;
  double t5076;
  double t5077;
  double t5078;
  double t5225;
  double t5226;
  double t5227;
  double t5228;
  double t5090;
  double t5230;
  double t5231;
  double t5232;
  double t5233;
  double t5235;
  double t5236;
  double t5237;
  double t5238;
  double t5100;
  double t5104;
  double t5105;
  double t5256;
  double t5257;
  double t5258;
  double t5260;
  double t5261;
  double t5262;
  double t5265;
  double t5266;
  double t5267;
  double t5268;
  double t5270;
  double t5271;
  double t5272;
  double t5273;
  double t5276;
  double t5277;
  double t5278;
  double t5279;
  double t5299;
  double t5300;
  double t5301;
  double t5302;
  double t5304;
  double t5305;
  double t5306;
  double t5307;
  double t5309;
  double t5310;
  double t5311;
  double t5312;
  double t5333;
  double t5334;
  double t5335;
  double t5336;
  double t5338;
  double t5339;
  double t5340;
  double t5341;
  double t5343;
  double t5344;
  double t5345;
  double t5346;
  double t5367;
  double t5368;
  double t5369;
  double t5370;
  double t5372;
  double t5373;
  double t5374;
  double t5375;
  double t5377;
  double t5378;
  double t5379;
  double t5380;
  t3919 = Cos(var1[4]);
  t3993 = Cos(var1[6]);
  t4186 = -1.*t3993;
  t4219 = 1. + t4186;
  t3986 = Cos(var1[5]);
  t4324 = Sin(var1[5]);
  t4331 = Sin(var1[4]);
  t4332 = Sin(var1[6]);
  t4412 = Cos(var1[8]);
  t4414 = -1.*t4412;
  t4417 = 1. + t4414;
  t4422 = Sin(var1[8]);
  t4470 = -3.e-6*t4417;
  t4495 = 3.e-6*t4422;
  t4511 = t4470 + t4495;
  t4340 = t3919*t3986*t3993;
  t4350 = -3.e-6*t3919*t4219*t4324;
  t4355 = t4331*t4332;
  t4376 = t4340 + t4350 + t4355;
  t4426 = -1.*t4422;
  t4529 = 3.e-6*t3919*t3986*t4219;
  t4530 = -9.e-12*t4219;
  t4532 = 1. + t4530;
  t4533 = -1.*t3919*t4532*t4324;
  t4535 = -3.e-6*t4331*t4332;
  t4536 = t4529 + t4533 + t4535;
  t4668 = 3.e-6*t4417;
  t4545 = -3.e-6*t4422;
  t4624 = -1.000000000009*t4219;
  t4640 = 1. + t4624;
  t4643 = t4640*t4331;
  t4646 = -1.*t3919*t3986*t4332;
  t4653 = -3.e-6*t3919*t4324*t4332;
  t4658 = t4643 + t4646 + t4653;
  t4669 = t4668 + t4495;
  t4411 = 1.125e-12*var1[8];
  t4550 = t4470 + t4545;
  t4419 = -9.e-12*t4417;
  t4563 = -1.000000000009*t4417;
  t4564 = 1. + t4563;
  t4678 = t4668 + t4545;
  t4663 = 9.e-12*t4417;
  t4765 = Cos(var1[10]);
  t4766 = -1.*t4765;
  t4767 = 1. + t4766;
  t4785 = Cos(var1[12]);
  t4790 = -1.*t4785;
  t4791 = 1. + t4790;
  t4797 = -3.e-6*t4791;
  t4798 = Sin(var1[12]);
  t4769 = Sin(var1[10]);
  t4802 = 3.e-6*t4798;
  t4803 = t4797 + t4802;
  t4813 = 7.5e-14*var1[12];
  t4799 = -3.e-6*t4798;
  t4800 = t4797 + t4799;
  t4819 = -9.e-12*t4791;
  t4806 = 3.e-6*t4767*t3919*t3986;
  t4807 = -3.e-6*t4769*t4331;
  t4808 = -9.e-12*t4767;
  t4809 = 1. + t4808;
  t4810 = -1.*t4809*t3919*t4324;
  t4811 = t4806 + t4807 + t4810;
  t4833 = t4765*t3919*t3986;
  t4834 = t4769*t4331;
  t4835 = -3.e-6*t4767*t3919*t4324;
  t4836 = t4833 + t4834 + t4835;
  t4843 = -1.*t3919*t3986*t4769;
  t4844 = -1.000000000009*t4767;
  t4845 = 1. + t4844;
  t4846 = t4845*t4331;
  t4847 = -3.e-6*t3919*t4769*t4324;
  t4848 = t4843 + t4846 + t4847;
  t4858 = 3.e-6*t4791;
  t4868 = -1.000000000009*t4791;
  t4869 = 1. + t4868;
  t4865 = 9.e-12*t4791;
  t4824 = -1.*t4798;
  t4863 = t4858 + t4799;
  t4873 = t4858 + t4802;
  t4900 = Cos(var1[15]);
  t4901 = -1.*t4900;
  t4902 = 1. + t4901;
  t4908 = Cos(var1[17]);
  t4909 = -1.*t4908;
  t4910 = 1. + t4909;
  t4912 = -3.e-6*t4910;
  t4913 = Sin(var1[17]);
  t4904 = Sin(var1[15]);
  t4927 = 3.e-6*t4913;
  t4932 = t4912 + t4927;
  t4946 = 1.125e-12*var1[17];
  t4917 = -3.e-6*t4913;
  t4921 = t4912 + t4917;
  t4948 = -9.e-12*t4910;
  t4939 = 3.e-6*t4902*t3919*t3986;
  t4940 = -3.e-6*t4904*t4331;
  t4941 = -9.e-12*t4902;
  t4942 = 1. + t4941;
  t4943 = -1.*t4942*t3919*t4324;
  t4944 = t4939 + t4940 + t4943;
  t4954 = t4900*t3919*t3986;
  t4955 = t4904*t4331;
  t4956 = -3.e-6*t4902*t3919*t4324;
  t4961 = t4954 + t4955 + t4956;
  t4976 = -1.*t3919*t3986*t4904;
  t4977 = -1.000000000009*t4902;
  t4978 = 1. + t4977;
  t4979 = t4978*t4331;
  t4980 = -3.e-6*t3919*t4904*t4324;
  t4981 = t4976 + t4979 + t4980;
  t4983 = 3.e-6*t4910;
  t4989 = -1.000000000009*t4910;
  t4990 = 1. + t4989;
  t4986 = 9.e-12*t4910;
  t4949 = -1.*t4913;
  t4984 = t4983 + t4917;
  t5006 = t4983 + t4927;
  t5021 = Cos(var1[19]);
  t5022 = -1.*t5021;
  t5023 = 1. + t5022;
  t5041 = Cos(var1[21]);
  t5042 = -1.*t5041;
  t5043 = 1. + t5042;
  t5045 = -3.e-6*t5043;
  t5046 = Sin(var1[21]);
  t5029 = Sin(var1[19]);
  t5050 = 3.e-6*t5046;
  t5051 = t5045 + t5050;
  t5061 = 7.5e-14*var1[21];
  t5047 = -3.e-6*t5046;
  t5048 = t5045 + t5047;
  t5063 = -9.e-12*t5043;
  t5054 = 3.e-6*t5023*t3919*t3986;
  t5055 = -3.e-6*t5029*t4331;
  t5056 = -9.e-12*t5023;
  t5057 = 1. + t5056;
  t5058 = -1.*t5057*t3919*t4324;
  t5059 = t5054 + t5055 + t5058;
  t5069 = t5021*t3919*t3986;
  t5070 = t5029*t4331;
  t5071 = -3.e-6*t5023*t3919*t4324;
  t5072 = t5069 + t5070 + t5071;
  t5079 = -1.*t3919*t3986*t5029;
  t5080 = -1.000000000009*t5023;
  t5081 = 1. + t5080;
  t5082 = t5081*t4331;
  t5083 = -3.e-6*t3919*t5029*t4324;
  t5084 = t5079 + t5082 + t5083;
  t5086 = 3.e-6*t5043;
  t5092 = -1.000000000009*t5043;
  t5093 = 1. + t5092;
  t5089 = 9.e-12*t5043;
  t5064 = -1.*t5046;
  t5087 = t5086 + t5047;
  t5097 = t5086 + t5050;
  t5114 = Cos(var1[3]);
  t5112 = Sin(var1[3]);
  t5113 = t3986*t5112*t4331;
  t5115 = t5114*t4324;
  t5116 = t5113 + t5115;
  t5118 = t5114*t3986;
  t5119 = -1.*t5112*t4331*t4324;
  t5120 = t5118 + t5119;
  t4418 = 0.225000000002025*t4417;
  t4433 = t4419 + t4426;
  t4437 = 0.1*t4433;
  t4522 = -9.75e-7*t4511;
  t4525 = t4411 + t4418 + t4437 + t4522;
  t4537 = 3.75e-7*var1[8];
  t4540 = -1.755e-17*t4417;
  t4555 = 0.225*t4550;
  t4556 = 0.1*t4511;
  t4557 = t4537 + t4540 + t4555 + t4556;
  t5123 = t3993*t5116;
  t5124 = 3.e-6*t4219*t5120;
  t5125 = -1.*t3919*t5112*t4332;
  t5126 = t5123 + t5124 + t5125;
  t4665 = t4663 + t4426;
  t5128 = 3.e-6*t4219*t5116;
  t5129 = t4532*t5120;
  t5130 = 3.e-6*t3919*t5112*t4332;
  t5131 = t5128 + t5129 + t5130;
  t4675 = -1.8e-11*t4417;
  t4676 = 1. + t4675;
  t5134 = -1.*t3919*t4640*t5112;
  t5135 = -1.*t5116*t4332;
  t5136 = 3.e-6*t5120*t4332;
  t5137 = t5134 + t5135 + t5136;
  t4731 = 0.1000000000009*t4417;
  t4743 = -9.75e-7*t4550;
  t4746 = t4419 + t4422;
  t4749 = 0.225*t4746;
  t4752 = t4411 + t4731 + t4743 + t4749;
  t4757 = t4663 + t4422;
  t4780 = 2.5e-8*var1[12];
  t4796 = 6.75e-18*t4791;
  t4801 = -0.225000000003*t4800;
  t4804 = 0.100000000003*t4803;
  t4805 = t4780 + t4796 + t4801 + t4804;
  t4814 = -0.225000000005025*t4791;
  t4829 = t4819 + t4824;
  t4830 = 0.100000000003*t4829;
  t4831 = 3.75e-7*t4803;
  t4832 = t4813 + t4814 + t4830 + t4831;
  t4838 = 0.1000000000039*t4791;
  t4839 = 3.75e-7*t4800;
  t4840 = t4819 + t4798;
  t4841 = -0.225000000003*t4840;
  t4842 = t4813 + t4838 + t4839 + t4841;
  t5157 = 3.e-6*t3919*t4769*t5112;
  t5158 = 3.e-6*t4767*t5116;
  t5159 = t4809*t5120;
  t5160 = t5157 + t5158 + t5159;
  t4866 = t4865 + t4798;
  t5162 = -1.*t3919*t4769*t5112;
  t5163 = t4765*t5116;
  t5164 = 3.e-6*t4767*t5120;
  t5165 = t5162 + t5163 + t5164;
  t5167 = -1.*t4845*t3919*t5112;
  t5168 = -1.*t4769*t5116;
  t5169 = 3.e-6*t4769*t5120;
  t5170 = t5167 + t5168 + t5169;
  t4876 = t4865 + t4824;
  t4880 = -1.8e-11*t4791;
  t4881 = 1. + t4880;
  t4907 = 3.75e-7*var1[17];
  t4911 = -1.755e-17*t4910;
  t4922 = 0.225*t4921;
  t4933 = 0.1*t4932;
  t4938 = t4907 + t4911 + t4922 + t4933;
  t4947 = 0.225000000002025*t4910;
  t4950 = t4948 + t4949;
  t4951 = 0.1*t4950;
  t4952 = -9.75e-7*t4932;
  t4953 = t4946 + t4947 + t4951 + t4952;
  t4971 = 0.1000000000009*t4910;
  t4972 = -9.75e-7*t4921;
  t4973 = t4948 + t4913;
  t4974 = 0.225*t4973;
  t4975 = t4946 + t4971 + t4972 + t4974;
  t5191 = 3.e-6*t3919*t4904*t5112;
  t5192 = 3.e-6*t4902*t5116;
  t5193 = t4942*t5120;
  t5194 = t5191 + t5192 + t5193;
  t4987 = t4986 + t4913;
  t5196 = -1.*t3919*t4904*t5112;
  t5197 = t4900*t5116;
  t5198 = 3.e-6*t4902*t5120;
  t5199 = t5196 + t5197 + t5198;
  t5201 = -1.*t4978*t3919*t5112;
  t5202 = -1.*t4904*t5116;
  t5203 = 3.e-6*t4904*t5120;
  t5204 = t5201 + t5202 + t5203;
  t5009 = t4986 + t4949;
  t5013 = -1.8e-11*t4910;
  t5014 = 1. + t5013;
  t5040 = 2.5e-8*var1[21];
  t5044 = 6.75e-18*t5043;
  t5049 = -0.225000000003*t5048;
  t5052 = 0.100000000003*t5051;
  t5053 = t5040 + t5044 + t5049 + t5052;
  t5062 = -0.225000000005025*t5043;
  t5065 = t5063 + t5064;
  t5066 = 0.100000000003*t5065;
  t5067 = 3.75e-7*t5051;
  t5068 = t5061 + t5062 + t5066 + t5067;
  t5074 = 0.1000000000039*t5043;
  t5075 = 3.75e-7*t5048;
  t5076 = t5063 + t5046;
  t5077 = -0.225000000003*t5076;
  t5078 = t5061 + t5074 + t5075 + t5077;
  t5225 = 3.e-6*t3919*t5029*t5112;
  t5226 = 3.e-6*t5023*t5116;
  t5227 = t5057*t5120;
  t5228 = t5225 + t5226 + t5227;
  t5090 = t5089 + t5046;
  t5230 = -1.*t3919*t5029*t5112;
  t5231 = t5021*t5116;
  t5232 = 3.e-6*t5023*t5120;
  t5233 = t5230 + t5231 + t5232;
  t5235 = -1.*t5081*t3919*t5112;
  t5236 = -1.*t5029*t5116;
  t5237 = 3.e-6*t5029*t5120;
  t5238 = t5235 + t5236 + t5237;
  t5100 = t5089 + t5064;
  t5104 = -1.8e-11*t5043;
  t5105 = 1. + t5104;
  t5256 = -1.*t5114*t3986*t4331;
  t5257 = t5112*t4324;
  t5258 = t5256 + t5257;
  t5260 = t3986*t5112;
  t5261 = t5114*t4331*t4324;
  t5262 = t5260 + t5261;
  t5265 = t3993*t5258;
  t5266 = 3.e-6*t4219*t5262;
  t5267 = t5114*t3919*t4332;
  t5268 = t5265 + t5266 + t5267;
  t5270 = 3.e-6*t4219*t5258;
  t5271 = t4532*t5262;
  t5272 = -3.e-6*t5114*t3919*t4332;
  t5273 = t5270 + t5271 + t5272;
  t5276 = t5114*t3919*t4640;
  t5277 = -1.*t5258*t4332;
  t5278 = 3.e-6*t5262*t4332;
  t5279 = t5276 + t5277 + t5278;
  t5299 = -3.e-6*t5114*t3919*t4769;
  t5300 = 3.e-6*t4767*t5258;
  t5301 = t4809*t5262;
  t5302 = t5299 + t5300 + t5301;
  t5304 = t5114*t3919*t4769;
  t5305 = t4765*t5258;
  t5306 = 3.e-6*t4767*t5262;
  t5307 = t5304 + t5305 + t5306;
  t5309 = t4845*t5114*t3919;
  t5310 = -1.*t4769*t5258;
  t5311 = 3.e-6*t4769*t5262;
  t5312 = t5309 + t5310 + t5311;
  t5333 = -3.e-6*t5114*t3919*t4904;
  t5334 = 3.e-6*t4902*t5258;
  t5335 = t4942*t5262;
  t5336 = t5333 + t5334 + t5335;
  t5338 = t5114*t3919*t4904;
  t5339 = t4900*t5258;
  t5340 = 3.e-6*t4902*t5262;
  t5341 = t5338 + t5339 + t5340;
  t5343 = t4978*t5114*t3919;
  t5344 = -1.*t4904*t5258;
  t5345 = 3.e-6*t4904*t5262;
  t5346 = t5343 + t5344 + t5345;
  t5367 = -3.e-6*t5114*t3919*t5029;
  t5368 = 3.e-6*t5023*t5258;
  t5369 = t5057*t5262;
  t5370 = t5367 + t5368 + t5369;
  t5372 = t5114*t3919*t5029;
  t5373 = t5021*t5258;
  t5374 = 3.e-6*t5023*t5262;
  t5375 = t5372 + t5373 + t5374;
  t5377 = t5081*t5114*t3919;
  t5378 = -1.*t5029*t5258;
  t5379 = 3.e-6*t5029*t5262;
  t5380 = t5377 + t5378 + t5379;
  p_output1[0]=0.225000000002025*t3919*t3986*t4219 + 6.75000000006075e-7*t3919*t4219*t4324 - 0.225000000002025*t4331*t4332 + t4376*t4525 + t4536*t4557 + 0.225*(t4376*t4564 + t4658*t4665 + t4536*t4669) + 0.130001*(t4658*t4669 + t4536*t4676 + t4376*t4678) + t4658*t4752 - 0.14*(t4564*t4658 + t4536*t4678 + t4376*t4757) + var1[0];
  p_output1[1]=-0.225000000002025*t3919*t3986*t4767 - 6.75000000006075e-7*t3919*t4324*t4767 + 0.225000000002025*t4331*t4769 + t4805*t4811 + t4832*t4836 + t4842*t4848 - 0.14*(t4811*t4863 + t4836*t4866 + t4848*t4869) - 0.225*(t4836*t4869 + t4811*t4873 + t4848*t4876) + 0.130001*(t4836*t4863 + t4848*t4873 + t4811*t4881) + var1[0];
  p_output1[2]=0.225000000002025*t3919*t3986*t4902 + 6.75000000006075e-7*t3919*t4324*t4902 - 0.225000000002025*t4331*t4904 + t4938*t4944 + t4953*t4961 + t4975*t4981 - 0.14*(t4944*t4984 + t4961*t4987 + t4981*t4990) + 0.225*(t4961*t4990 + t4944*t5006 + t4981*t5009) - 0.129999*(t4961*t4984 + t4981*t5006 + t4944*t5014) + var1[0];
  p_output1[3]=-0.225000000002025*t3919*t3986*t5023 - 6.75000000006075e-7*t3919*t4324*t5023 + 0.225000000002025*t4331*t5029 + t5053*t5059 + t5068*t5072 + t5078*t5084 - 0.14*(t5059*t5087 + t5072*t5090 + t5084*t5093) - 0.225*(t5072*t5093 + t5059*t5097 + t5084*t5100) - 0.129999*(t5072*t5087 + t5084*t5097 + t5059*t5105) + var1[0];
  p_output1[4]=0.225000000002025*t3919*t4332*t5112 + 0.225000000002025*t4219*t5116 - 6.75000000006075e-7*t4219*t5120 + t4525*t5126 + t4557*t5131 + t4752*t5137 - 0.14*(t4757*t5126 + t4678*t5131 + t4564*t5137) + 0.225*(t4564*t5126 + t4669*t5131 + t4665*t5137) + 0.130001*(t4678*t5126 + t4676*t5131 + t4669*t5137) + var1[1];
  p_output1[5]=-0.225000000002025*t3919*t4769*t5112 - 0.225000000002025*t4767*t5116 + 6.75000000006075e-7*t4767*t5120 + t4805*t5160 + t4832*t5165 + t4842*t5170 - 0.14*(t4863*t5160 + t4866*t5165 + t4869*t5170) + 0.130001*(t4881*t5160 + t4863*t5165 + t4873*t5170) - 0.225*(t4873*t5160 + t4869*t5165 + t4876*t5170) + var1[1];
  p_output1[6]=0.225000000002025*t3919*t4904*t5112 + 0.225000000002025*t4902*t5116 - 6.75000000006075e-7*t4902*t5120 + t4938*t5194 + t4953*t5199 + t4975*t5204 - 0.14*(t4984*t5194 + t4987*t5199 + t4990*t5204) - 0.129999*(t5014*t5194 + t4984*t5199 + t5006*t5204) + 0.225*(t5006*t5194 + t4990*t5199 + t5009*t5204) + var1[1];
  p_output1[7]=-0.225000000002025*t3919*t5029*t5112 - 0.225000000002025*t5023*t5116 + 6.75000000006075e-7*t5023*t5120 + t5053*t5228 + t5068*t5233 + t5078*t5238 - 0.14*(t5087*t5228 + t5090*t5233 + t5093*t5238) - 0.129999*(t5105*t5228 + t5087*t5233 + t5097*t5238) - 0.225*(t5097*t5228 + t5093*t5233 + t5100*t5238) + var1[1];
  p_output1[8]=-0.225000000002025*t3919*t4332*t5114 + 0.225000000002025*t4219*t5258 - 6.75000000006075e-7*t4219*t5262 + t4525*t5268 + t4557*t5273 + t4752*t5279 - 0.14*(t4757*t5268 + t4678*t5273 + t4564*t5279) + 0.225*(t4564*t5268 + t4669*t5273 + t4665*t5279) + 0.130001*(t4678*t5268 + t4676*t5273 + t4669*t5279) + var1[2];
  p_output1[9]=0.225000000002025*t3919*t4769*t5114 - 0.225000000002025*t4767*t5258 + 6.75000000006075e-7*t4767*t5262 + t4805*t5302 + t4832*t5307 + t4842*t5312 - 0.14*(t4863*t5302 + t4866*t5307 + t4869*t5312) + 0.130001*(t4881*t5302 + t4863*t5307 + t4873*t5312) - 0.225*(t4873*t5302 + t4869*t5307 + t4876*t5312) + var1[2];
  p_output1[10]=-0.225000000002025*t3919*t4904*t5114 + 0.225000000002025*t4902*t5258 - 6.75000000006075e-7*t4902*t5262 + t4938*t5336 + t4953*t5341 + t4975*t5346 - 0.14*(t4984*t5336 + t4987*t5341 + t4990*t5346) - 0.129999*(t5014*t5336 + t4984*t5341 + t5006*t5346) + 0.225*(t5006*t5336 + t4990*t5341 + t5009*t5346) + var1[2];
  p_output1[11]=0.225000000002025*t3919*t5029*t5114 - 0.225000000002025*t5023*t5258 + 6.75000000006075e-7*t5023*t5262 + t5053*t5370 + t5068*t5375 + t5078*t5380 - 0.14*(t5087*t5370 + t5090*t5375 + t5093*t5380) - 0.129999*(t5105*t5370 + t5087*t5375 + t5097*t5380) - 0.225*(t5097*t5370 + t5093*t5375 + t5100*t5380) + var1[2];
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
