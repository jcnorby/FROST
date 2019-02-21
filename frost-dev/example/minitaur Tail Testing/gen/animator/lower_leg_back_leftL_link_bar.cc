/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:39 GMT-04:00
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
  double t586;
  double t2746;
  double t2832;
  double t4551;
  double t4664;
  double t4670;
  double t4673;
  double t4700;
  double t4703;
  double t4569;
  double t4590;
  double t4596;
  double t4602;
  double t4748;
  double t4749;
  double t4763;
  double t4706;
  double t4736;
  double t4765;
  double t4756;
  double t4757;
  double t4758;
  double t4759;
  double t4760;
  double t4761;
  double t4774;
  double t4775;
  double t4776;
  double t4777;
  double t4788;
  double t4789;
  double t4791;
  double t4794;
  double t4799;
  double t4800;
  double t4802;
  double t4811;
  double t4812;
  double t4807;
  double t4768;
  double t4805;
  double t4818;
  double t4587;
  double t4599;
  double t4607;
  double t4658;
  double t4697;
  double t4742;
  double t4754;
  double t4755;
  double t4762;
  double t4764;
  double t4769;
  double t4770;
  double t4771;
  double t4773;
  double t4778;
  double t4779;
  double t4782;
  double t4783;
  double t4785;
  double t4787;
  double t4801;
  double t4806;
  double t4808;
  double t4809;
  double t4814;
  double t4815;
  double t4816;
  double t4820;
  double t4821;
  double t4823;
  double t4824;
  double t4825;
  double t4828;
  double t4829;
  double t4830;
  double t4831;
  double t4834;
  double t4836;
  double t4826;
  double t4838;
  double t4840;
  double t4931;
  double t4939;
  double t4937;
  double t4940;
  double t4942;
  double t4946;
  double t4947;
  double t4966;
  double t4968;
  double t4969;
  double t4970;
  double t4971;
  double t4973;
  double t4974;
  double t4975;
  double t4976;
  double t4979;
  double t4980;
  double t4981;
  double t4982;
  double t4933;
  double t4943;
  double t4967;
  double t4972;
  double t4977;
  double t4983;
  double t4984;
  double t4985;
  double t4986;
  double t4987;
  double t4988;
  double t4989;
  double t4990;
  double t4994;
  double t4997;
  double t5003;
  double t5005;
  double t5010;
  double t5011;
  double t5000;
  double t5012;
  double t5015;
  double t5276;
  double t5280;
  double t5286;
  double t5289;
  double t5291;
  double t5299;
  double t5301;
  double t5307;
  double t5310;
  double t5314;
  double t5318;
  double t5320;
  double t5321;
  double t5322;
  double t5326;
  double t5328;
  double t5329;
  double t5330;
  double t5274;
  double t5288;
  double t5300;
  double t5315;
  double t5325;
  double t5331;
  double t5332;
  double t5333;
  double t5334;
  double t5335;
  double t5336;
  double t5337;
  double t5338;
  double t5339;
  double t5343;
  double t5350;
  double t5378;
  double t5379;
  double t5381;
  double t5348;
  double t5382;
  double t5386;
  double t5704;
  double t4843;
  double t4852;
  double t4858;
  double t4861;
  double t4872;
  double t4875;
  double t4876;
  double t4878;
  double t4881;
  double t4885;
  double t4888;
  double t4891;
  double t4892;
  double t4894;
  double t4898;
  double t4900;
  double t4904;
  double t4907;
  double t4916;
  double t4921;
  double t4925;
  double t5705;
  double t5707;
  double t5845;
  double t5018;
  double t5024;
  double t5029;
  double t5036;
  double t5045;
  double t5049;
  double t5050;
  double t5052;
  double t5058;
  double t5079;
  double t5084;
  double t5088;
  double t5117;
  double t5119;
  double t5120;
  double t5122;
  double t5173;
  double t5192;
  double t5213;
  double t5262;
  double t5270;
  double t5846;
  double t5847;
  double t6983;
  double t5403;
  double t5406;
  double t5410;
  double t5414;
  double t5418;
  double t5422;
  double t5423;
  double t5425;
  double t5445;
  double t5449;
  double t5454;
  double t5458;
  double t5459;
  double t5462;
  double t5463;
  double t5473;
  double t5588;
  double t5597;
  double t5670;
  double t5677;
  double t5693;
  double t6989;
  double t7009;
  t586 = Cos(var1[10]);
  t2746 = -1.*t586;
  t2832 = 1. + t2746;
  t4551 = Cos(var1[4]);
  t4664 = Cos(var1[12]);
  t4670 = -1.*t4664;
  t4673 = 1. + t4670;
  t4700 = -3.e-6*t4673;
  t4703 = Sin(var1[12]);
  t4569 = Cos(var1[5]);
  t4590 = Sin(var1[10]);
  t4596 = Sin(var1[4]);
  t4602 = Sin(var1[5]);
  t4748 = 3.e-6*t4703;
  t4749 = t4700 + t4748;
  t4763 = 7.5e-14*var1[12];
  t4706 = -3.e-6*t4703;
  t4736 = t4700 + t4706;
  t4765 = -9.e-12*t4673;
  t4756 = 3.e-6*t2832*t4551*t4569;
  t4757 = -3.e-6*t4590*t4596;
  t4758 = -9.e-12*t2832;
  t4759 = 1. + t4758;
  t4760 = -1.*t4759*t4551*t4602;
  t4761 = t4756 + t4757 + t4760;
  t4774 = t586*t4551*t4569;
  t4775 = t4590*t4596;
  t4776 = -3.e-6*t2832*t4551*t4602;
  t4777 = t4774 + t4775 + t4776;
  t4788 = -1.*t4551*t4569*t4590;
  t4789 = -1.000000000009*t2832;
  t4791 = 1. + t4789;
  t4794 = t4791*t4596;
  t4799 = -3.e-6*t4551*t4590*t4602;
  t4800 = t4788 + t4794 + t4799;
  t4802 = 3.e-6*t4673;
  t4811 = -1.000000000009*t4673;
  t4812 = 1. + t4811;
  t4807 = 9.e-12*t4673;
  t4768 = -1.*t4703;
  t4805 = t4802 + t4706;
  t4818 = t4802 + t4748;
  t4587 = -0.225000000002025*t2832*t4551*t4569;
  t4599 = 0.225000000002025*t4590*t4596;
  t4607 = -6.75000000006075e-7*t2832*t4551*t4602;
  t4658 = 2.5e-8*var1[12];
  t4697 = 6.75e-18*t4673;
  t4742 = -0.225000000003*t4736;
  t4754 = 0.100000000003*t4749;
  t4755 = t4658 + t4697 + t4742 + t4754;
  t4762 = t4755*t4761;
  t4764 = -0.225000000005025*t4673;
  t4769 = t4765 + t4768;
  t4770 = 0.100000000003*t4769;
  t4771 = 3.75e-7*t4749;
  t4773 = t4763 + t4764 + t4770 + t4771;
  t4778 = t4773*t4777;
  t4779 = 0.1000000000039*t4673;
  t4782 = 3.75e-7*t4736;
  t4783 = t4765 + t4703;
  t4785 = -0.225000000003*t4783;
  t4787 = t4763 + t4779 + t4782 + t4785;
  t4801 = t4787*t4800;
  t4806 = t4805*t4761;
  t4808 = t4807 + t4703;
  t4809 = t4808*t4777;
  t4814 = t4812*t4800;
  t4815 = t4806 + t4809 + t4814;
  t4816 = 0.1*t4815;
  t4820 = t4818*t4761;
  t4821 = t4812*t4777;
  t4823 = t4807 + t4768;
  t4824 = t4823*t4800;
  t4825 = t4820 + t4821 + t4824;
  t4828 = -1.8e-11*t4673;
  t4829 = 1. + t4828;
  t4830 = t4829*t4761;
  t4831 = t4805*t4777;
  t4834 = t4818*t4800;
  t4836 = t4830 + t4831 + t4834;
  t4826 = -0.212454*t4825;
  t4838 = 0.121779*t4836;
  t4840 = var1[0] + t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + t4826 + t4838;
  t4931 = Sin(var1[3]);
  t4939 = Cos(var1[3]);
  t4937 = t4569*t4931*t4596;
  t4940 = t4939*t4602;
  t4942 = t4937 + t4940;
  t4946 = t4939*t4569;
  t4947 = -1.*t4931*t4596*t4602;
  t4966 = t4946 + t4947;
  t4968 = 3.e-6*t4551*t4590*t4931;
  t4969 = 3.e-6*t2832*t4942;
  t4970 = t4759*t4966;
  t4971 = t4968 + t4969 + t4970;
  t4973 = -1.*t4551*t4590*t4931;
  t4974 = t586*t4942;
  t4975 = 3.e-6*t2832*t4966;
  t4976 = t4973 + t4974 + t4975;
  t4979 = -1.*t4791*t4551*t4931;
  t4980 = -1.*t4590*t4942;
  t4981 = 3.e-6*t4590*t4966;
  t4982 = t4979 + t4980 + t4981;
  t4933 = -0.225000000002025*t4551*t4590*t4931;
  t4943 = -0.225000000002025*t2832*t4942;
  t4967 = 6.75000000006075e-7*t2832*t4966;
  t4972 = t4755*t4971;
  t4977 = t4773*t4976;
  t4983 = t4787*t4982;
  t4984 = t4805*t4971;
  t4985 = t4808*t4976;
  t4986 = t4812*t4982;
  t4987 = t4984 + t4985 + t4986;
  t4988 = 0.1*t4987;
  t4989 = t4818*t4971;
  t4990 = t4812*t4976;
  t4994 = t4823*t4982;
  t4997 = t4989 + t4990 + t4994;
  t5003 = t4829*t4971;
  t5005 = t4805*t4976;
  t5010 = t4818*t4982;
  t5011 = t5003 + t5005 + t5010;
  t5000 = -0.212454*t4997;
  t5012 = 0.121779*t5011;
  t5015 = var1[1] + t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + t5000 + t5012;
  t5276 = -1.*t4939*t4569*t4596;
  t5280 = t4931*t4602;
  t5286 = t5276 + t5280;
  t5289 = t4569*t4931;
  t5291 = t4939*t4596*t4602;
  t5299 = t5289 + t5291;
  t5301 = -3.e-6*t4939*t4551*t4590;
  t5307 = 3.e-6*t2832*t5286;
  t5310 = t4759*t5299;
  t5314 = t5301 + t5307 + t5310;
  t5318 = t4939*t4551*t4590;
  t5320 = t586*t5286;
  t5321 = 3.e-6*t2832*t5299;
  t5322 = t5318 + t5320 + t5321;
  t5326 = t4791*t4939*t4551;
  t5328 = -1.*t4590*t5286;
  t5329 = 3.e-6*t4590*t5299;
  t5330 = t5326 + t5328 + t5329;
  t5274 = 0.225000000002025*t4939*t4551*t4590;
  t5288 = -0.225000000002025*t2832*t5286;
  t5300 = 6.75000000006075e-7*t2832*t5299;
  t5315 = t4755*t5314;
  t5325 = t4773*t5322;
  t5331 = t4787*t5330;
  t5332 = t4805*t5314;
  t5333 = t4808*t5322;
  t5334 = t4812*t5330;
  t5335 = t5332 + t5333 + t5334;
  t5336 = 0.1*t5335;
  t5337 = t4818*t5314;
  t5338 = t4812*t5322;
  t5339 = t4823*t5330;
  t5343 = t5337 + t5338 + t5339;
  t5350 = t4829*t5314;
  t5378 = t4805*t5322;
  t5379 = t4818*t5330;
  t5381 = t5350 + t5378 + t5379;
  t5348 = -0.212454*t5343;
  t5382 = 0.121779*t5381;
  t5386 = var1[2] + t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + t5348 + t5382;
  t5704 = -0.14*t4815;
  t4843 = -0.215803*t4825;
  t4852 = -0.220149*t4825;
  t4858 = -0.22502*t4825;
  t4861 = -0.22989*t4825;
  t4872 = -0.234229*t4825;
  t4875 = -0.237569*t4825;
  t4876 = 0.121813*t4836;
  t4878 = -0.239546*t4825;
  t4881 = -0.239947*t4825;
  t4885 = -0.238728*t4825;
  t4888 = -0.236022*t4825;
  t4891 = -0.232121*t4825;
  t4892 = 0.143202*t4836;
  t4894 = -0.227449*t4825;
  t4898 = 0.144799*t4836;
  t4900 = -0.222511*t4825;
  t4904 = -0.217843*t4825;
  t4907 = -0.21395*t4825;
  t4916 = -0.211255*t4825;
  t4921 = -0.21005*t4825;
  t4925 = -0.210464*t4825;
  t5705 = 0.12178*t4836;
  t5707 = var1[0] + t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t5704 + t4826 + t5705;
  t5845 = -0.14*t4987;
  t5018 = -0.215803*t4997;
  t5024 = -0.220149*t4997;
  t5029 = -0.22502*t4997;
  t5036 = -0.22989*t4997;
  t5045 = -0.234229*t4997;
  t5049 = -0.237569*t4997;
  t5050 = 0.121813*t5011;
  t5052 = -0.239546*t4997;
  t5058 = -0.239947*t4997;
  t5079 = -0.238728*t4997;
  t5084 = -0.236022*t4997;
  t5088 = -0.232121*t4997;
  t5117 = 0.143202*t5011;
  t5119 = -0.227449*t4997;
  t5120 = 0.144799*t5011;
  t5122 = -0.222511*t4997;
  t5173 = -0.217843*t4997;
  t5192 = -0.21395*t4997;
  t5213 = -0.211255*t4997;
  t5262 = -0.21005*t4997;
  t5270 = -0.210464*t4997;
  t5846 = 0.12178*t5011;
  t5847 = var1[1] + t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t5845 + t5000 + t5846;
  t6983 = -0.14*t5335;
  t5403 = -0.215803*t5343;
  t5406 = -0.220149*t5343;
  t5410 = -0.22502*t5343;
  t5414 = -0.22989*t5343;
  t5418 = -0.234229*t5343;
  t5422 = -0.237569*t5343;
  t5423 = 0.121813*t5381;
  t5425 = -0.239546*t5343;
  t5445 = -0.239947*t5343;
  t5449 = -0.238728*t5343;
  t5454 = -0.236022*t5343;
  t5458 = -0.232121*t5343;
  t5459 = 0.143202*t5381;
  t5462 = -0.227449*t5343;
  t5463 = 0.144799*t5381;
  t5473 = -0.222511*t5343;
  t5588 = -0.217843*t5343;
  t5597 = -0.21395*t5343;
  t5670 = -0.211255*t5343;
  t5677 = -0.21005*t5343;
  t5693 = -0.210464*t5343;
  t6989 = 0.12178*t5381;
  t7009 = var1[2] + t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t6983 + t5348 + t6989;
  p_output1[0]=t4840;
  p_output1[1]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.11815*t4836 + t4843 + var1[0];
  p_output1[2]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.115806*t4836 + t4852 + var1[0];
  p_output1[3]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.115*t4836 + t4858 + var1[0];
  p_output1[4]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.115819*t4836 + t4861 + var1[0];
  p_output1[5]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.118175*t4836 + t4872 + var1[0];
  p_output1[6]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + t4875 + t4876 + var1[0];
  p_output1[7]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.126337*t4836 + t4878 + var1[0];
  p_output1[8]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.131259*t4836 + t4881 + var1[0];
  p_output1[9]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.136044*t4836 + t4885 + var1[0];
  p_output1[10]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.140174*t4836 + t4888 + var1[0];
  p_output1[11]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + t4891 + t4892 + var1[0];
  p_output1[12]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + t4894 + t4898 + var1[0];
  p_output1[13]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.144792*t4836 + t4900 + var1[0];
  p_output1[14]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.143182*t4836 + t4904 + var1[0];
  p_output1[15]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.140144*t4836 + t4907 + var1[0];
  p_output1[16]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.136007*t4836 + t4916 + var1[0];
  p_output1[17]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.131218*t4836 + t4921 + var1[0];
  p_output1[18]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4816 + 0.126298*t4836 + t4925 + var1[0];
  p_output1[19]=t4840;
  p_output1[20]=t5015;
  p_output1[21]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.11815*t5011 + t5018 + var1[1];
  p_output1[22]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.115806*t5011 + t5024 + var1[1];
  p_output1[23]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.115*t5011 + t5029 + var1[1];
  p_output1[24]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.115819*t5011 + t5036 + var1[1];
  p_output1[25]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.118175*t5011 + t5045 + var1[1];
  p_output1[26]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + t5049 + t5050 + var1[1];
  p_output1[27]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.126337*t5011 + t5052 + var1[1];
  p_output1[28]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.131259*t5011 + t5058 + var1[1];
  p_output1[29]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.136044*t5011 + t5079 + var1[1];
  p_output1[30]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.140174*t5011 + t5084 + var1[1];
  p_output1[31]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + t5088 + t5117 + var1[1];
  p_output1[32]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + t5119 + t5120 + var1[1];
  p_output1[33]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.144792*t5011 + t5122 + var1[1];
  p_output1[34]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.143182*t5011 + t5173 + var1[1];
  p_output1[35]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.140144*t5011 + t5192 + var1[1];
  p_output1[36]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.136007*t5011 + t5213 + var1[1];
  p_output1[37]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.131218*t5011 + t5262 + var1[1];
  p_output1[38]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t4988 + 0.126298*t5011 + t5270 + var1[1];
  p_output1[39]=t5015;
  p_output1[40]=t5386;
  p_output1[41]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.11815*t5381 + t5403 + var1[2];
  p_output1[42]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.115806*t5381 + t5406 + var1[2];
  p_output1[43]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.115*t5381 + t5410 + var1[2];
  p_output1[44]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.115819*t5381 + t5414 + var1[2];
  p_output1[45]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.118175*t5381 + t5418 + var1[2];
  p_output1[46]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + t5422 + t5423 + var1[2];
  p_output1[47]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.126337*t5381 + t5425 + var1[2];
  p_output1[48]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.131259*t5381 + t5445 + var1[2];
  p_output1[49]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.136044*t5381 + t5449 + var1[2];
  p_output1[50]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.140174*t5381 + t5454 + var1[2];
  p_output1[51]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + t5458 + t5459 + var1[2];
  p_output1[52]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + t5462 + t5463 + var1[2];
  p_output1[53]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.144792*t5381 + t5473 + var1[2];
  p_output1[54]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.143182*t5381 + t5588 + var1[2];
  p_output1[55]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.140144*t5381 + t5597 + var1[2];
  p_output1[56]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.136007*t5381 + t5670 + var1[2];
  p_output1[57]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.131218*t5381 + t5677 + var1[2];
  p_output1[58]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5336 + 0.126298*t5381 + t5693 + var1[2];
  p_output1[59]=t5386;
  p_output1[60]=t5707;
  p_output1[61]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.118151*t4836 + t4843 + t5704 + var1[0];
  p_output1[62]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.115807*t4836 + t4852 + t5704 + var1[0];
  p_output1[63]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.115001*t4836 + t4858 + t5704 + var1[0];
  p_output1[64]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.11582*t4836 + t4861 + t5704 + var1[0];
  p_output1[65]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.118176*t4836 + t4872 + t5704 + var1[0];
  p_output1[66]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4875 + t4876 + t5704 + var1[0];
  p_output1[67]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.126338*t4836 + t4878 + t5704 + var1[0];
  p_output1[68]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.13126*t4836 + t4881 + t5704 + var1[0];
  p_output1[69]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.136045*t4836 + t4885 + t5704 + var1[0];
  p_output1[70]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.140175*t4836 + t4888 + t5704 + var1[0];
  p_output1[71]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4891 + t4892 + t5704 + var1[0];
  p_output1[72]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + t4894 + t4898 + t5704 + var1[0];
  p_output1[73]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.144793*t4836 + t4900 + t5704 + var1[0];
  p_output1[74]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.143183*t4836 + t4904 + t5704 + var1[0];
  p_output1[75]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.140145*t4836 + t4907 + t5704 + var1[0];
  p_output1[76]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.136008*t4836 + t4916 + t5704 + var1[0];
  p_output1[77]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.131219*t4836 + t4921 + t5704 + var1[0];
  p_output1[78]=t4587 + t4599 + t4607 + t4762 + t4778 + t4801 + 0.126299*t4836 + t4925 + t5704 + var1[0];
  p_output1[79]=t5707;
  p_output1[80]=t5847;
  p_output1[81]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.118151*t5011 + t5018 + t5845 + var1[1];
  p_output1[82]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.115807*t5011 + t5024 + t5845 + var1[1];
  p_output1[83]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.115001*t5011 + t5029 + t5845 + var1[1];
  p_output1[84]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.11582*t5011 + t5036 + t5845 + var1[1];
  p_output1[85]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.118176*t5011 + t5045 + t5845 + var1[1];
  p_output1[86]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t5049 + t5050 + t5845 + var1[1];
  p_output1[87]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.126338*t5011 + t5052 + t5845 + var1[1];
  p_output1[88]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.13126*t5011 + t5058 + t5845 + var1[1];
  p_output1[89]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.136045*t5011 + t5079 + t5845 + var1[1];
  p_output1[90]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.140175*t5011 + t5084 + t5845 + var1[1];
  p_output1[91]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t5088 + t5117 + t5845 + var1[1];
  p_output1[92]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + t5119 + t5120 + t5845 + var1[1];
  p_output1[93]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.144793*t5011 + t5122 + t5845 + var1[1];
  p_output1[94]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.143183*t5011 + t5173 + t5845 + var1[1];
  p_output1[95]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.140145*t5011 + t5192 + t5845 + var1[1];
  p_output1[96]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.136008*t5011 + t5213 + t5845 + var1[1];
  p_output1[97]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.131219*t5011 + t5262 + t5845 + var1[1];
  p_output1[98]=t4933 + t4943 + t4967 + t4972 + t4977 + t4983 + 0.126299*t5011 + t5270 + t5845 + var1[1];
  p_output1[99]=t5847;
  p_output1[100]=t7009;
  p_output1[101]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.118151*t5381 + t5403 + t6983 + var1[2];
  p_output1[102]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.115807*t5381 + t5406 + t6983 + var1[2];
  p_output1[103]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.115001*t5381 + t5410 + t6983 + var1[2];
  p_output1[104]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.11582*t5381 + t5414 + t6983 + var1[2];
  p_output1[105]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.118176*t5381 + t5418 + t6983 + var1[2];
  p_output1[106]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5422 + t5423 + t6983 + var1[2];
  p_output1[107]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.126338*t5381 + t5425 + t6983 + var1[2];
  p_output1[108]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.13126*t5381 + t5445 + t6983 + var1[2];
  p_output1[109]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.136045*t5381 + t5449 + t6983 + var1[2];
  p_output1[110]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.140175*t5381 + t5454 + t6983 + var1[2];
  p_output1[111]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5458 + t5459 + t6983 + var1[2];
  p_output1[112]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + t5462 + t5463 + t6983 + var1[2];
  p_output1[113]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.144793*t5381 + t5473 + t6983 + var1[2];
  p_output1[114]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.143183*t5381 + t5588 + t6983 + var1[2];
  p_output1[115]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.140145*t5381 + t5597 + t6983 + var1[2];
  p_output1[116]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.136008*t5381 + t5670 + t6983 + var1[2];
  p_output1[117]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.131219*t5381 + t5677 + t6983 + var1[2];
  p_output1[118]=t5274 + t5288 + t5300 + t5315 + t5325 + t5331 + 0.126299*t5381 + t5693 + t6983 + var1[2];
  p_output1[119]=t7009;
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

#include "lower_leg_back_leftL_link_bar.hh"

namespace SymFunction
{

void lower_leg_back_leftL_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
