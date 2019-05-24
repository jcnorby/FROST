/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 14:35:25 GMT-04:00
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
  double t4011;
  double t4085;
  double t4286;
  double t4319;
  double t4078;
  double t4424;
  double t4431;
  double t4432;
  double t4516;
  double t4518;
  double t4521;
  double t4526;
  double t4586;
  double t4603;
  double t4627;
  double t4456;
  double t4458;
  double t4459;
  double t4480;
  double t4542;
  double t4637;
  double t4638;
  double t4640;
  double t4641;
  double t4643;
  double t4644;
  double t4776;
  double t4661;
  double t4736;
  double t4748;
  double t4751;
  double t4762;
  double t4769;
  double t4770;
  double t4777;
  double t4515;
  double t4662;
  double t4523;
  double t4671;
  double t4672;
  double t4786;
  double t4771;
  double t4877;
  double t4878;
  double t4879;
  double t4909;
  double t4910;
  double t4911;
  double t4913;
  double t4914;
  double t4897;
  double t4918;
  double t4919;
  double t4941;
  double t4915;
  double t4916;
  double t4943;
  double t4922;
  double t4923;
  double t4924;
  double t4925;
  double t4926;
  double t4931;
  double t4949;
  double t4950;
  double t4951;
  double t4952;
  double t4959;
  double t4960;
  double t4965;
  double t4970;
  double t4975;
  double t4976;
  double t4978;
  double t4984;
  double t4985;
  double t4981;
  double t4944;
  double t4979;
  double t4989;
  double t5016;
  double t5017;
  double t5018;
  double t5024;
  double t5025;
  double t5029;
  double t5034;
  double t5039;
  double t5020;
  double t5051;
  double t5052;
  double t5062;
  double t5044;
  double t5045;
  double t5064;
  double t5055;
  double t5056;
  double t5057;
  double t5058;
  double t5059;
  double t5060;
  double t5078;
  double t5083;
  double t5084;
  double t5085;
  double t5092;
  double t5093;
  double t5094;
  double t5095;
  double t5096;
  double t5097;
  double t5099;
  double t5117;
  double t5118;
  double t5102;
  double t5065;
  double t5100;
  double t5122;
  double t5141;
  double t5146;
  double t5151;
  double t5161;
  double t5162;
  double t5163;
  double t5165;
  double t5166;
  double t5157;
  double t5170;
  double t5171;
  double t5181;
  double t5167;
  double t5168;
  double t5183;
  double t5174;
  double t5175;
  double t5176;
  double t5177;
  double t5178;
  double t5179;
  double t5189;
  double t5190;
  double t5191;
  double t5192;
  double t5199;
  double t5200;
  double t5201;
  double t5202;
  double t5203;
  double t5204;
  double t5206;
  double t5212;
  double t5213;
  double t5209;
  double t5184;
  double t5207;
  double t5217;
  double t5234;
  double t5232;
  double t5233;
  double t5235;
  double t5236;
  double t5238;
  double t5239;
  double t5240;
  double t4522;
  double t4552;
  double t4553;
  double t4630;
  double t4633;
  double t4649;
  double t4660;
  double t4663;
  double t4664;
  double t4665;
  double t5243;
  double t5244;
  double t5245;
  double t5246;
  double t4773;
  double t5248;
  double t5249;
  double t5250;
  double t5251;
  double t4783;
  double t4784;
  double t5254;
  double t5255;
  double t5256;
  double t5257;
  double t4843;
  double t4855;
  double t4858;
  double t4861;
  double t4864;
  double t4869;
  double t4880;
  double t4881;
  double t4887;
  double t4891;
  double t4908;
  double t4912;
  double t4917;
  double t4920;
  double t4921;
  double t4942;
  double t4945;
  double t4946;
  double t4947;
  double t4948;
  double t4954;
  double t4955;
  double t4956;
  double t4957;
  double t4958;
  double t5277;
  double t5278;
  double t5279;
  double t5280;
  double t4982;
  double t5282;
  double t5283;
  double t5284;
  double t5285;
  double t5287;
  double t5288;
  double t5289;
  double t5290;
  double t4992;
  double t5004;
  double t5009;
  double t5023;
  double t5033;
  double t5050;
  double t5053;
  double t5054;
  double t5063;
  double t5066;
  double t5067;
  double t5068;
  double t5073;
  double t5087;
  double t5088;
  double t5089;
  double t5090;
  double t5091;
  double t5311;
  double t5312;
  double t5313;
  double t5314;
  double t5107;
  double t5316;
  double t5317;
  double t5318;
  double t5319;
  double t5321;
  double t5322;
  double t5323;
  double t5324;
  double t5125;
  double t5129;
  double t5130;
  double t5152;
  double t5153;
  double t5154;
  double t5155;
  double t5160;
  double t5164;
  double t5169;
  double t5172;
  double t5173;
  double t5182;
  double t5185;
  double t5186;
  double t5187;
  double t5188;
  double t5194;
  double t5195;
  double t5196;
  double t5197;
  double t5198;
  double t5345;
  double t5346;
  double t5347;
  double t5348;
  double t5210;
  double t5350;
  double t5351;
  double t5352;
  double t5353;
  double t5355;
  double t5356;
  double t5357;
  double t5358;
  double t5220;
  double t5224;
  double t5225;
  double t5376;
  double t5377;
  double t5378;
  double t5380;
  double t5381;
  double t5382;
  double t5385;
  double t5386;
  double t5387;
  double t5388;
  double t5390;
  double t5391;
  double t5392;
  double t5393;
  double t5396;
  double t5397;
  double t5398;
  double t5399;
  double t5419;
  double t5420;
  double t5421;
  double t5422;
  double t5424;
  double t5425;
  double t5426;
  double t5427;
  double t5429;
  double t5430;
  double t5431;
  double t5432;
  double t5453;
  double t5454;
  double t5455;
  double t5456;
  double t5458;
  double t5459;
  double t5460;
  double t5461;
  double t5463;
  double t5464;
  double t5465;
  double t5466;
  double t5487;
  double t5488;
  double t5489;
  double t5490;
  double t5492;
  double t5493;
  double t5494;
  double t5495;
  double t5497;
  double t5498;
  double t5499;
  double t5500;
  t4011 = Cos(var1[4]);
  t4085 = Cos(var1[6]);
  t4286 = -1.*t4085;
  t4319 = 1. + t4286;
  t4078 = Cos(var1[5]);
  t4424 = Sin(var1[5]);
  t4431 = Sin(var1[4]);
  t4432 = Sin(var1[6]);
  t4516 = Cos(var1[8]);
  t4518 = -1.*t4516;
  t4521 = 1. + t4518;
  t4526 = Sin(var1[8]);
  t4586 = -3.e-6*t4521;
  t4603 = 3.e-6*t4526;
  t4627 = t4586 + t4603;
  t4456 = t4011*t4078*t4085;
  t4458 = -3.e-6*t4011*t4319*t4424;
  t4459 = t4431*t4432;
  t4480 = t4456 + t4458 + t4459;
  t4542 = -1.*t4526;
  t4637 = 3.e-6*t4011*t4078*t4319;
  t4638 = -9.e-12*t4319;
  t4640 = 1. + t4638;
  t4641 = -1.*t4011*t4640*t4424;
  t4643 = -3.e-6*t4431*t4432;
  t4644 = t4637 + t4641 + t4643;
  t4776 = 3.e-6*t4521;
  t4661 = -3.e-6*t4526;
  t4736 = -1.000000000009*t4319;
  t4748 = 1. + t4736;
  t4751 = t4748*t4431;
  t4762 = -1.*t4011*t4078*t4432;
  t4769 = -3.e-6*t4011*t4424*t4432;
  t4770 = t4751 + t4762 + t4769;
  t4777 = t4776 + t4603;
  t4515 = 9.e-13*var1[8];
  t4662 = t4586 + t4661;
  t4523 = -9.e-12*t4521;
  t4671 = -1.000000000009*t4521;
  t4672 = 1. + t4671;
  t4786 = t4776 + t4661;
  t4771 = 9.e-12*t4521;
  t4877 = Cos(var1[10]);
  t4878 = -1.*t4877;
  t4879 = 1. + t4878;
  t4909 = Cos(var1[12]);
  t4910 = -1.*t4909;
  t4911 = 1. + t4910;
  t4913 = -3.e-6*t4911;
  t4914 = Sin(var1[12]);
  t4897 = Sin(var1[10]);
  t4918 = 3.e-6*t4914;
  t4919 = t4913 + t4918;
  t4941 = 3.e-13*var1[12];
  t4915 = -3.e-6*t4914;
  t4916 = t4913 + t4915;
  t4943 = -9.e-12*t4911;
  t4922 = 3.e-6*t4879*t4011*t4078;
  t4923 = -3.e-6*t4897*t4431;
  t4924 = -9.e-12*t4879;
  t4925 = 1. + t4924;
  t4926 = -1.*t4925*t4011*t4424;
  t4931 = t4922 + t4923 + t4926;
  t4949 = t4877*t4011*t4078;
  t4950 = t4897*t4431;
  t4951 = -3.e-6*t4879*t4011*t4424;
  t4952 = t4949 + t4950 + t4951;
  t4959 = -1.*t4011*t4078*t4897;
  t4960 = -1.000000000009*t4879;
  t4965 = 1. + t4960;
  t4970 = t4965*t4431;
  t4975 = -3.e-6*t4011*t4897*t4424;
  t4976 = t4959 + t4970 + t4975;
  t4978 = 3.e-6*t4911;
  t4984 = -1.000000000009*t4911;
  t4985 = 1. + t4984;
  t4981 = 9.e-12*t4911;
  t4944 = -1.*t4914;
  t4979 = t4978 + t4915;
  t4989 = t4978 + t4918;
  t5016 = Cos(var1[15]);
  t5017 = -1.*t5016;
  t5018 = 1. + t5017;
  t5024 = Cos(var1[17]);
  t5025 = -1.*t5024;
  t5029 = 1. + t5025;
  t5034 = -3.e-6*t5029;
  t5039 = Sin(var1[17]);
  t5020 = Sin(var1[15]);
  t5051 = 3.e-6*t5039;
  t5052 = t5034 + t5051;
  t5062 = 9.e-13*var1[17];
  t5044 = -3.e-6*t5039;
  t5045 = t5034 + t5044;
  t5064 = -9.e-12*t5029;
  t5055 = 3.e-6*t5018*t4011*t4078;
  t5056 = -3.e-6*t5020*t4431;
  t5057 = -9.e-12*t5018;
  t5058 = 1. + t5057;
  t5059 = -1.*t5058*t4011*t4424;
  t5060 = t5055 + t5056 + t5059;
  t5078 = t5016*t4011*t4078;
  t5083 = t5020*t4431;
  t5084 = -3.e-6*t5018*t4011*t4424;
  t5085 = t5078 + t5083 + t5084;
  t5092 = -1.*t4011*t4078*t5020;
  t5093 = -1.000000000009*t5018;
  t5094 = 1. + t5093;
  t5095 = t5094*t4431;
  t5096 = -3.e-6*t4011*t5020*t4424;
  t5097 = t5092 + t5095 + t5096;
  t5099 = 3.e-6*t5029;
  t5117 = -1.000000000009*t5029;
  t5118 = 1. + t5117;
  t5102 = 9.e-12*t5029;
  t5065 = -1.*t5039;
  t5100 = t5099 + t5044;
  t5122 = t5099 + t5051;
  t5141 = Cos(var1[19]);
  t5146 = -1.*t5141;
  t5151 = 1. + t5146;
  t5161 = Cos(var1[21]);
  t5162 = -1.*t5161;
  t5163 = 1. + t5162;
  t5165 = -3.e-6*t5163;
  t5166 = Sin(var1[21]);
  t5157 = Sin(var1[19]);
  t5170 = 3.e-6*t5166;
  t5171 = t5165 + t5170;
  t5181 = 3.e-13*var1[21];
  t5167 = -3.e-6*t5166;
  t5168 = t5165 + t5167;
  t5183 = -9.e-12*t5163;
  t5174 = 3.e-6*t5151*t4011*t4078;
  t5175 = -3.e-6*t5157*t4431;
  t5176 = -9.e-12*t5151;
  t5177 = 1. + t5176;
  t5178 = -1.*t5177*t4011*t4424;
  t5179 = t5174 + t5175 + t5178;
  t5189 = t5141*t4011*t4078;
  t5190 = t5157*t4431;
  t5191 = -3.e-6*t5151*t4011*t4424;
  t5192 = t5189 + t5190 + t5191;
  t5199 = -1.*t4011*t4078*t5157;
  t5200 = -1.000000000009*t5151;
  t5201 = 1. + t5200;
  t5202 = t5201*t4431;
  t5203 = -3.e-6*t4011*t5157*t4424;
  t5204 = t5199 + t5202 + t5203;
  t5206 = 3.e-6*t5163;
  t5212 = -1.000000000009*t5163;
  t5213 = 1. + t5212;
  t5209 = 9.e-12*t5163;
  t5184 = -1.*t5166;
  t5207 = t5206 + t5167;
  t5217 = t5206 + t5170;
  t5234 = Cos(var1[3]);
  t5232 = Sin(var1[3]);
  t5233 = t4078*t5232*t4431;
  t5235 = t5234*t4424;
  t5236 = t5233 + t5235;
  t5238 = t5234*t4078;
  t5239 = -1.*t5232*t4431*t4424;
  t5240 = t5238 + t5239;
  t4522 = 0.2000000000018*t4521;
  t4552 = t4523 + t4542;
  t4553 = 0.1*t4552;
  t4630 = -9.e-7*t4627;
  t4633 = t4515 + t4522 + t4553 + t4630;
  t4649 = 3.e-7*var1[8];
  t4660 = -1.62e-17*t4521;
  t4663 = 0.2*t4662;
  t4664 = 0.1*t4627;
  t4665 = t4649 + t4660 + t4663 + t4664;
  t5243 = t4085*t5236;
  t5244 = 3.e-6*t4319*t5240;
  t5245 = -1.*t4011*t5232*t4432;
  t5246 = t5243 + t5244 + t5245;
  t4773 = t4771 + t4542;
  t5248 = 3.e-6*t4319*t5236;
  t5249 = t4640*t5240;
  t5250 = 3.e-6*t4011*t5232*t4432;
  t5251 = t5248 + t5249 + t5250;
  t4783 = -1.8e-11*t4521;
  t4784 = 1. + t4783;
  t5254 = -1.*t4011*t4748*t5232;
  t5255 = -1.*t5236*t4432;
  t5256 = 3.e-6*t5240*t4432;
  t5257 = t5254 + t5255 + t5256;
  t4843 = 0.1000000000009*t4521;
  t4855 = -9.e-7*t4662;
  t4858 = t4523 + t4526;
  t4861 = 0.2*t4858;
  t4864 = t4515 + t4843 + t4855 + t4861;
  t4869 = t4771 + t4526;
  t4880 = -1.8e-12*t4879;
  t4881 = -1. + t4877;
  t4887 = 0.2*t4881;
  t4891 = t4880 + t4887;
  t4908 = 1.e-7*var1[12];
  t4912 = 5.4e-18*t4911;
  t4917 = -0.200000000003*t4916;
  t4920 = 0.100000000003*t4919;
  t4921 = t4908 + t4912 + t4917 + t4920;
  t4942 = -0.2000000000048*t4911;
  t4945 = t4943 + t4944;
  t4946 = 0.100000000003*t4945;
  t4947 = 3.e-7*t4919;
  t4948 = t4941 + t4942 + t4946 + t4947;
  t4954 = 0.1000000000039*t4911;
  t4955 = 3.e-7*t4916;
  t4956 = t4943 + t4914;
  t4957 = -0.200000000003*t4956;
  t4958 = t4941 + t4954 + t4955 + t4957;
  t5277 = 3.e-6*t4011*t4897*t5232;
  t5278 = 3.e-6*t4879*t5236;
  t5279 = t4925*t5240;
  t5280 = t5277 + t5278 + t5279;
  t4982 = t4981 + t4914;
  t5282 = -1.*t4011*t4897*t5232;
  t5283 = t4877*t5236;
  t5284 = 3.e-6*t4879*t5240;
  t5285 = t5282 + t5283 + t5284;
  t5287 = -1.*t4965*t4011*t5232;
  t5288 = -1.*t4897*t5236;
  t5289 = 3.e-6*t4897*t5240;
  t5290 = t5287 + t5288 + t5289;
  t4992 = t4981 + t4944;
  t5004 = -1.8e-11*t4911;
  t5009 = 1. + t5004;
  t5023 = 3.e-7*var1[17];
  t5033 = -1.62e-17*t5029;
  t5050 = 0.2*t5045;
  t5053 = 0.1*t5052;
  t5054 = t5023 + t5033 + t5050 + t5053;
  t5063 = 0.2000000000018*t5029;
  t5066 = t5064 + t5065;
  t5067 = 0.1*t5066;
  t5068 = -9.e-7*t5052;
  t5073 = t5062 + t5063 + t5067 + t5068;
  t5087 = 0.1000000000009*t5029;
  t5088 = -9.e-7*t5045;
  t5089 = t5064 + t5039;
  t5090 = 0.2*t5089;
  t5091 = t5062 + t5087 + t5088 + t5090;
  t5311 = 3.e-6*t4011*t5020*t5232;
  t5312 = 3.e-6*t5018*t5236;
  t5313 = t5058*t5240;
  t5314 = t5311 + t5312 + t5313;
  t5107 = t5102 + t5039;
  t5316 = -1.*t4011*t5020*t5232;
  t5317 = t5016*t5236;
  t5318 = 3.e-6*t5018*t5240;
  t5319 = t5316 + t5317 + t5318;
  t5321 = -1.*t5094*t4011*t5232;
  t5322 = -1.*t5020*t5236;
  t5323 = 3.e-6*t5020*t5240;
  t5324 = t5321 + t5322 + t5323;
  t5125 = t5102 + t5065;
  t5129 = -1.8e-11*t5029;
  t5130 = 1. + t5129;
  t5152 = -1.8e-12*t5151;
  t5153 = -1. + t5141;
  t5154 = 0.2*t5153;
  t5155 = t5152 + t5154;
  t5160 = 1.e-7*var1[21];
  t5164 = 5.4e-18*t5163;
  t5169 = -0.200000000003*t5168;
  t5172 = 0.100000000003*t5171;
  t5173 = t5160 + t5164 + t5169 + t5172;
  t5182 = -0.2000000000048*t5163;
  t5185 = t5183 + t5184;
  t5186 = 0.100000000003*t5185;
  t5187 = 3.e-7*t5171;
  t5188 = t5181 + t5182 + t5186 + t5187;
  t5194 = 0.1000000000039*t5163;
  t5195 = 3.e-7*t5168;
  t5196 = t5183 + t5166;
  t5197 = -0.200000000003*t5196;
  t5198 = t5181 + t5194 + t5195 + t5197;
  t5345 = 3.e-6*t4011*t5157*t5232;
  t5346 = 3.e-6*t5151*t5236;
  t5347 = t5177*t5240;
  t5348 = t5345 + t5346 + t5347;
  t5210 = t5209 + t5166;
  t5350 = -1.*t4011*t5157*t5232;
  t5351 = t5141*t5236;
  t5352 = 3.e-6*t5151*t5240;
  t5353 = t5350 + t5351 + t5352;
  t5355 = -1.*t5201*t4011*t5232;
  t5356 = -1.*t5157*t5236;
  t5357 = 3.e-6*t5157*t5240;
  t5358 = t5355 + t5356 + t5357;
  t5220 = t5209 + t5184;
  t5224 = -1.8e-11*t5163;
  t5225 = 1. + t5224;
  t5376 = -1.*t5234*t4078*t4431;
  t5377 = t5232*t4424;
  t5378 = t5376 + t5377;
  t5380 = t4078*t5232;
  t5381 = t5234*t4431*t4424;
  t5382 = t5380 + t5381;
  t5385 = t4085*t5378;
  t5386 = 3.e-6*t4319*t5382;
  t5387 = t5234*t4011*t4432;
  t5388 = t5385 + t5386 + t5387;
  t5390 = 3.e-6*t4319*t5378;
  t5391 = t4640*t5382;
  t5392 = -3.e-6*t5234*t4011*t4432;
  t5393 = t5390 + t5391 + t5392;
  t5396 = t5234*t4011*t4748;
  t5397 = -1.*t5378*t4432;
  t5398 = 3.e-6*t5382*t4432;
  t5399 = t5396 + t5397 + t5398;
  t5419 = -3.e-6*t5234*t4011*t4897;
  t5420 = 3.e-6*t4879*t5378;
  t5421 = t4925*t5382;
  t5422 = t5419 + t5420 + t5421;
  t5424 = t5234*t4011*t4897;
  t5425 = t4877*t5378;
  t5426 = 3.e-6*t4879*t5382;
  t5427 = t5424 + t5425 + t5426;
  t5429 = t4965*t5234*t4011;
  t5430 = -1.*t4897*t5378;
  t5431 = 3.e-6*t4897*t5382;
  t5432 = t5429 + t5430 + t5431;
  t5453 = -3.e-6*t5234*t4011*t5020;
  t5454 = 3.e-6*t5018*t5378;
  t5455 = t5058*t5382;
  t5456 = t5453 + t5454 + t5455;
  t5458 = t5234*t4011*t5020;
  t5459 = t5016*t5378;
  t5460 = 3.e-6*t5018*t5382;
  t5461 = t5458 + t5459 + t5460;
  t5463 = t5094*t5234*t4011;
  t5464 = -1.*t5020*t5378;
  t5465 = 3.e-6*t5020*t5382;
  t5466 = t5463 + t5464 + t5465;
  t5487 = -3.e-6*t5234*t4011*t5157;
  t5488 = 3.e-6*t5151*t5378;
  t5489 = t5177*t5382;
  t5490 = t5487 + t5488 + t5489;
  t5492 = t5234*t4011*t5157;
  t5493 = t5141*t5378;
  t5494 = 3.e-6*t5151*t5382;
  t5495 = t5492 + t5493 + t5494;
  t5497 = t5201*t5234*t4011;
  t5498 = -1.*t5157*t5378;
  t5499 = 3.e-6*t5157*t5382;
  t5500 = t5497 + t5498 + t5499;
  p_output1[0]=0.2000000000018*t4011*t4078*t4319 + 6.000000000054e-7*t4011*t4319*t4424 - 0.2000000000018*t4431*t4432 + t4480*t4633 + t4644*t4665 + 0.2*(t4480*t4672 + t4770*t4773 + t4644*t4777) + 0.125001*(t4770*t4777 + t4644*t4784 + t4480*t4786) + t4770*t4864 - 0.14*(t4672*t4770 + t4644*t4786 + t4480*t4869) + var1[0];
  p_output1[1]=-6.000000000054e-7*t4011*t4424*t4879 + t4011*t4078*t4891 + 0.2000000000018*t4431*t4897 + t4921*t4931 + t4948*t4952 + t4958*t4976 - 0.14*(t4931*t4979 + t4952*t4982 + t4976*t4985) + 0.2*(-1.*t4952*t4985 - 1.*t4931*t4989 - 1.*t4976*t4992) + 0.125001*(t4952*t4979 + t4976*t4989 + t4931*t5009) + var1[0];
  p_output1[2]=0.2000000000018*t4011*t4078*t5018 + 6.000000000054e-7*t4011*t4424*t5018 - 0.2000000000018*t4431*t5020 + t5054*t5060 + t5073*t5085 + t5091*t5097 - 0.14*(t5060*t5100 + t5085*t5107 + t5097*t5118) + 0.2*(t5085*t5118 + t5060*t5122 + t5097*t5125) - 0.124999*(t5085*t5100 + t5097*t5122 + t5060*t5130) + var1[0];
  p_output1[3]=-6.000000000054e-7*t4011*t4424*t5151 + t4011*t4078*t5155 + 0.2000000000018*t4431*t5157 + t5173*t5179 + t5188*t5192 + t5198*t5204 - 0.14*(t5179*t5207 + t5192*t5210 + t5204*t5213) + 0.2*(-1.*t5192*t5213 - 1.*t5179*t5217 - 1.*t5204*t5220) - 0.124999*(t5192*t5207 + t5204*t5217 + t5179*t5225) + var1[0];
  p_output1[4]=0.2000000000018*t4011*t4432*t5232 + 0.2000000000018*t4319*t5236 - 6.000000000054e-7*t4319*t5240 + t4633*t5246 + t4665*t5251 + t4864*t5257 - 0.14*(t4869*t5246 + t4786*t5251 + t4672*t5257) + 0.2*(t4672*t5246 + t4777*t5251 + t4773*t5257) + 0.125001*(t4786*t5246 + t4784*t5251 + t4777*t5257) + var1[1];
  p_output1[5]=-0.2000000000018*t4011*t4897*t5232 + t4891*t5236 + 6.000000000054e-7*t4879*t5240 + t4921*t5280 + t4948*t5285 + t4958*t5290 - 0.14*(t4979*t5280 + t4982*t5285 + t4985*t5290) + 0.125001*(t5009*t5280 + t4979*t5285 + t4989*t5290) + 0.2*(-1.*t4989*t5280 - 1.*t4985*t5285 - 1.*t4992*t5290) + var1[1];
  p_output1[6]=0.2000000000018*t4011*t5020*t5232 + 0.2000000000018*t5018*t5236 - 6.000000000054e-7*t5018*t5240 + t5054*t5314 + t5073*t5319 + t5091*t5324 - 0.14*(t5100*t5314 + t5107*t5319 + t5118*t5324) - 0.124999*(t5130*t5314 + t5100*t5319 + t5122*t5324) + 0.2*(t5122*t5314 + t5118*t5319 + t5125*t5324) + var1[1];
  p_output1[7]=-0.2000000000018*t4011*t5157*t5232 + t5155*t5236 + 6.000000000054e-7*t5151*t5240 + t5173*t5348 + t5188*t5353 + t5198*t5358 - 0.14*(t5207*t5348 + t5210*t5353 + t5213*t5358) - 0.124999*(t5225*t5348 + t5207*t5353 + t5217*t5358) + 0.2*(-1.*t5217*t5348 - 1.*t5213*t5353 - 1.*t5220*t5358) + var1[1];
  p_output1[8]=-0.2000000000018*t4011*t4432*t5234 + 0.2000000000018*t4319*t5378 - 6.000000000054e-7*t4319*t5382 + t4633*t5388 + t4665*t5393 + t4864*t5399 - 0.14*(t4869*t5388 + t4786*t5393 + t4672*t5399) + 0.2*(t4672*t5388 + t4777*t5393 + t4773*t5399) + 0.125001*(t4786*t5388 + t4784*t5393 + t4777*t5399) + var1[2];
  p_output1[9]=0.2000000000018*t4011*t4897*t5234 + t4891*t5378 + 6.000000000054e-7*t4879*t5382 + t4921*t5422 + t4948*t5427 + t4958*t5432 - 0.14*(t4979*t5422 + t4982*t5427 + t4985*t5432) + 0.125001*(t5009*t5422 + t4979*t5427 + t4989*t5432) + 0.2*(-1.*t4989*t5422 - 1.*t4985*t5427 - 1.*t4992*t5432) + var1[2];
  p_output1[10]=-0.2000000000018*t4011*t5020*t5234 + 0.2000000000018*t5018*t5378 - 6.000000000054e-7*t5018*t5382 + t5054*t5456 + t5073*t5461 + t5091*t5466 - 0.14*(t5100*t5456 + t5107*t5461 + t5118*t5466) - 0.124999*(t5130*t5456 + t5100*t5461 + t5122*t5466) + 0.2*(t5122*t5456 + t5118*t5461 + t5125*t5466) + var1[2];
  p_output1[11]=0.2000000000018*t4011*t5157*t5234 + t5155*t5378 + 6.000000000054e-7*t5151*t5382 + t5173*t5490 + t5188*t5495 + t5198*t5500 - 0.14*(t5207*t5490 + t5210*t5495 + t5213*t5500) - 0.124999*(t5225*t5490 + t5207*t5495 + t5217*t5500) + 0.2*(-1.*t5217*t5490 - 1.*t5213*t5495 - 1.*t5220*t5500) + var1[2];
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
