/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:47 GMT-04:00
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
  double t523;
  double t558;
  double t559;
  double t560;
  double t602;
  double t604;
  double t607;
  double t610;
  double t612;
  double t567;
  double t580;
  double t581;
  double t592;
  double t623;
  double t624;
  double t643;
  double t616;
  double t619;
  double t647;
  double t632;
  double t634;
  double t635;
  double t637;
  double t638;
  double t640;
  double t656;
  double t657;
  double t659;
  double t660;
  double t669;
  double t670;
  double t672;
  double t673;
  double t675;
  double t681;
  double t684;
  double t697;
  double t699;
  double t691;
  double t648;
  double t687;
  double t708;
  double t570;
  double t591;
  double t599;
  double t601;
  double t608;
  double t620;
  double t627;
  double t628;
  double t641;
  double t644;
  double t650;
  double t651;
  double t653;
  double t654;
  double t661;
  double t663;
  double t665;
  double t666;
  double t667;
  double t668;
  double t682;
  double t690;
  double t693;
  double t696;
  double t702;
  double t705;
  double t706;
  double t709;
  double t711;
  double t712;
  double t714;
  double t717;
  double t720;
  double t721;
  double t723;
  double t725;
  double t726;
  double t727;
  double t718;
  double t729;
  double t730;
  double t4612;
  double t4621;
  double t4619;
  double t4622;
  double t4623;
  double t4632;
  double t4633;
  double t4635;
  double t4638;
  double t4641;
  double t4644;
  double t4645;
  double t4656;
  double t4657;
  double t4660;
  double t4665;
  double t4668;
  double t4669;
  double t4671;
  double t4674;
  double t4617;
  double t4628;
  double t4636;
  double t4653;
  double t4666;
  double t4681;
  double t4684;
  double t4686;
  double t4687;
  double t4688;
  double t4690;
  double t4691;
  double t4693;
  double t4702;
  double t4704;
  double t4710;
  double t4711;
  double t4713;
  double t4714;
  double t4705;
  double t4717;
  double t4720;
  double t7256;
  double t7267;
  double t7271;
  double t7320;
  double t7321;
  double t7326;
  double t7340;
  double t7345;
  double t7358;
  double t7397;
  double t7407;
  double t7469;
  double t7492;
  double t7557;
  double t7687;
  double t7818;
  double t7845;
  double t7956;
  double t7238;
  double t7286;
  double t7327;
  double t7403;
  double t7608;
  double t7962;
  double t8043;
  double t8102;
  double t8132;
  double t8165;
  double t8226;
  double t8253;
  double t8309;
  double t8482;
  double t8573;
  double t8817;
  double t8839;
  double t8869;
  double t8870;
  double t8799;
  double t8874;
  double t8878;
  double t9360;
  double t731;
  double t733;
  double t736;
  double t773;
  double t774;
  double t777;
  double t783;
  double t789;
  double t794;
  double t815;
  double t818;
  double t837;
  double t839;
  double t840;
  double t893;
  double t4189;
  double t4485;
  double t4518;
  double t4545;
  double t4548;
  double t4575;
  double t4589;
  double t4597;
  double t4601;
  double t9362;
  double t9365;
  double t9490;
  double t4722;
  double t4728;
  double t4738;
  double t4746;
  double t4747;
  double t4767;
  double t5246;
  double t5493;
  double t5980;
  double t6199;
  double t6252;
  double t6260;
  double t6277;
  double t6279;
  double t6294;
  double t6347;
  double t6371;
  double t6399;
  double t6449;
  double t6457;
  double t6476;
  double t6601;
  double t6969;
  double t7084;
  double t9492;
  double t9493;
  double t9573;
  double t8879;
  double t8882;
  double t8890;
  double t9037;
  double t9057;
  double t9096;
  double t9153;
  double t9165;
  double t9185;
  double t9209;
  double t9223;
  double t9227;
  double t9234;
  double t9236;
  double t9240;
  double t9249;
  double t9253;
  double t9259;
  double t9269;
  double t9272;
  double t9342;
  double t9346;
  double t9348;
  double t9352;
  double t9576;
  double t9577;
  t523 = Cos(var1[15]);
  t558 = -1.*t523;
  t559 = 1. + t558;
  t560 = Cos(var1[4]);
  t602 = Cos(var1[17]);
  t604 = -1.*t602;
  t607 = 1. + t604;
  t610 = -3.e-6*t607;
  t612 = Sin(var1[17]);
  t567 = Cos(var1[5]);
  t580 = Sin(var1[15]);
  t581 = Sin(var1[4]);
  t592 = Sin(var1[5]);
  t623 = 3.e-6*t612;
  t624 = t610 + t623;
  t643 = 1.125e-12*var1[17];
  t616 = -3.e-6*t612;
  t619 = t610 + t616;
  t647 = -9.e-12*t607;
  t632 = 3.e-6*t559*t560*t567;
  t634 = -3.e-6*t580*t581;
  t635 = -9.e-12*t559;
  t637 = 1. + t635;
  t638 = -1.*t637*t560*t592;
  t640 = t632 + t634 + t638;
  t656 = t523*t560*t567;
  t657 = t580*t581;
  t659 = -3.e-6*t559*t560*t592;
  t660 = t656 + t657 + t659;
  t669 = -1.*t560*t567*t580;
  t670 = -1.000000000009*t559;
  t672 = 1. + t670;
  t673 = t672*t581;
  t675 = -3.e-6*t560*t580*t592;
  t681 = t669 + t673 + t675;
  t684 = 3.e-6*t607;
  t697 = -1.000000000009*t607;
  t699 = 1. + t697;
  t691 = 9.e-12*t607;
  t648 = -1.*t612;
  t687 = t684 + t616;
  t708 = t684 + t623;
  t570 = 0.225000000002025*t559*t560*t567;
  t591 = -0.225000000002025*t580*t581;
  t599 = 6.75000000006075e-7*t559*t560*t592;
  t601 = 3.75e-7*var1[17];
  t608 = -1.755e-17*t607;
  t620 = 0.225*t619;
  t627 = 0.1*t624;
  t628 = t601 + t608 + t620 + t627;
  t641 = t628*t640;
  t644 = 0.225000000002025*t607;
  t650 = t647 + t648;
  t651 = 0.1*t650;
  t653 = -9.75e-7*t624;
  t654 = t643 + t644 + t651 + t653;
  t661 = t654*t660;
  t663 = 0.1000000000009*t607;
  t665 = -9.75e-7*t619;
  t666 = t647 + t612;
  t667 = 0.225*t666;
  t668 = t643 + t663 + t665 + t667;
  t682 = t668*t681;
  t690 = t687*t640;
  t693 = t691 + t612;
  t696 = t693*t660;
  t702 = t699*t681;
  t705 = t690 + t696 + t702;
  t706 = 0.1*t705;
  t709 = t708*t640;
  t711 = t699*t660;
  t712 = t691 + t648;
  t714 = t712*t681;
  t717 = t709 + t711 + t714;
  t720 = -1.8e-11*t607;
  t721 = 1. + t720;
  t723 = t721*t640;
  t725 = t687*t660;
  t726 = t708*t681;
  t727 = t723 + t725 + t726;
  t718 = 0.236069*t717;
  t729 = -0.140123*t727;
  t730 = var1[0] + t570 + t591 + t599 + t641 + t661 + t682 + t706 + t718 + t729;
  t4612 = Sin(var1[3]);
  t4621 = Cos(var1[3]);
  t4619 = t567*t4612*t581;
  t4622 = t4621*t592;
  t4623 = t4619 + t4622;
  t4632 = t4621*t567;
  t4633 = -1.*t4612*t581*t592;
  t4635 = t4632 + t4633;
  t4638 = 3.e-6*t560*t580*t4612;
  t4641 = 3.e-6*t559*t4623;
  t4644 = t637*t4635;
  t4645 = t4638 + t4641 + t4644;
  t4656 = -1.*t560*t580*t4612;
  t4657 = t523*t4623;
  t4660 = 3.e-6*t559*t4635;
  t4665 = t4656 + t4657 + t4660;
  t4668 = -1.*t672*t560*t4612;
  t4669 = -1.*t580*t4623;
  t4671 = 3.e-6*t580*t4635;
  t4674 = t4668 + t4669 + t4671;
  t4617 = 0.225000000002025*t560*t580*t4612;
  t4628 = 0.225000000002025*t559*t4623;
  t4636 = -6.75000000006075e-7*t559*t4635;
  t4653 = t628*t4645;
  t4666 = t654*t4665;
  t4681 = t668*t4674;
  t4684 = t687*t4645;
  t4686 = t693*t4665;
  t4687 = t699*t4674;
  t4688 = t4684 + t4686 + t4687;
  t4690 = 0.1*t4688;
  t4691 = t708*t4645;
  t4693 = t699*t4665;
  t4702 = t712*t4674;
  t4704 = t4691 + t4693 + t4702;
  t4710 = t721*t4645;
  t4711 = t687*t4665;
  t4713 = t708*t4674;
  t4714 = t4710 + t4711 + t4713;
  t4705 = 0.236069*t4704;
  t4717 = -0.140123*t4714;
  t4720 = var1[1] + t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 + t4705 + t4717;
  t7256 = -1.*t4621*t567*t581;
  t7267 = t4612*t592;
  t7271 = t7256 + t7267;
  t7320 = t567*t4612;
  t7321 = t4621*t581*t592;
  t7326 = t7320 + t7321;
  t7340 = -3.e-6*t4621*t560*t580;
  t7345 = 3.e-6*t559*t7271;
  t7358 = t637*t7326;
  t7397 = t7340 + t7345 + t7358;
  t7407 = t4621*t560*t580;
  t7469 = t523*t7271;
  t7492 = 3.e-6*t559*t7326;
  t7557 = t7407 + t7469 + t7492;
  t7687 = t672*t4621*t560;
  t7818 = -1.*t580*t7271;
  t7845 = 3.e-6*t580*t7326;
  t7956 = t7687 + t7818 + t7845;
  t7238 = -0.225000000002025*t4621*t560*t580;
  t7286 = 0.225000000002025*t559*t7271;
  t7327 = -6.75000000006075e-7*t559*t7326;
  t7403 = t628*t7397;
  t7608 = t654*t7557;
  t7962 = t668*t7956;
  t8043 = t687*t7397;
  t8102 = t693*t7557;
  t8132 = t699*t7956;
  t8165 = t8043 + t8102 + t8132;
  t8226 = 0.1*t8165;
  t8253 = t708*t7397;
  t8309 = t699*t7557;
  t8482 = t712*t7956;
  t8573 = t8253 + t8309 + t8482;
  t8817 = t721*t7397;
  t8839 = t687*t7557;
  t8869 = t708*t7956;
  t8870 = t8817 + t8839 + t8869;
  t8799 = 0.236069*t8573;
  t8874 = -0.140123*t8870;
  t8878 = var1[2] + t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 + t8799 + t8874;
  t9360 = -0.14*t705;
  t731 = 0.232183*t717;
  t733 = -0.143168*t727;
  t736 = 0.227518*t717;
  t773 = 0.22258*t717;
  t774 = -0.144803*t727;
  t777 = 0.217904*t717;
  t783 = 0.213998*t717;
  t789 = 0.211283*t717;
  t794 = 0.210055*t717;
  t815 = 0.210447*t717;
  t818 = 0.212415*t717;
  t837 = -0.121837*t727;
  t839 = 0.215748*t717;
  t840 = -0.118193*t727;
  t893 = 0.220083*t717;
  t4189 = 0.22495*t717;
  t4485 = 0.229824*t717;
  t4518 = 0.234174*t717;
  t4545 = 0.23753*t717;
  t4548 = -0.121754*t727;
  t4575 = 0.239529*t717;
  t4589 = 0.239953*t717;
  t4597 = -0.131189*t727;
  t4601 = 0.238756*t717;
  t9362 = -0.140122*t727;
  t9365 = var1[0] + t570 + t591 + t599 + t641 + t661 + t682 + t9360 + t718 + t9362;
  t9490 = -0.14*t4688;
  t4722 = 0.232183*t4704;
  t4728 = -0.143168*t4714;
  t4738 = 0.227518*t4704;
  t4746 = 0.22258*t4704;
  t4747 = -0.144803*t4714;
  t4767 = 0.217904*t4704;
  t5246 = 0.213998*t4704;
  t5493 = 0.211283*t4704;
  t5980 = 0.210055*t4704;
  t6199 = 0.210447*t4704;
  t6252 = 0.212415*t4704;
  t6260 = -0.121837*t4714;
  t6277 = 0.215748*t4704;
  t6279 = -0.118193*t4714;
  t6294 = 0.220083*t4704;
  t6347 = 0.22495*t4704;
  t6371 = 0.229824*t4704;
  t6399 = 0.234174*t4704;
  t6449 = 0.23753*t4704;
  t6457 = -0.121754*t4714;
  t6476 = 0.239529*t4704;
  t6601 = 0.239953*t4704;
  t6969 = -0.131189*t4714;
  t7084 = 0.238756*t4704;
  t9492 = -0.140122*t4714;
  t9493 = var1[1] + t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t9490 + t4705 + t9492;
  t9573 = -0.14*t8165;
  t8879 = 0.232183*t8573;
  t8882 = -0.143168*t8870;
  t8890 = 0.227518*t8573;
  t9037 = 0.22258*t8573;
  t9057 = -0.144803*t8870;
  t9096 = 0.217904*t8573;
  t9153 = 0.213998*t8573;
  t9165 = 0.211283*t8573;
  t9185 = 0.210055*t8573;
  t9209 = 0.210447*t8573;
  t9223 = 0.212415*t8573;
  t9227 = -0.121837*t8870;
  t9234 = 0.215748*t8573;
  t9236 = -0.118193*t8870;
  t9240 = 0.220083*t8573;
  t9249 = 0.22495*t8573;
  t9253 = 0.229824*t8573;
  t9259 = 0.234174*t8573;
  t9269 = 0.23753*t8573;
  t9272 = -0.121754*t8870;
  t9342 = 0.239529*t8573;
  t9346 = 0.239953*t8573;
  t9348 = -0.131189*t8870;
  t9352 = 0.238756*t8573;
  t9576 = -0.140122*t8870;
  t9577 = var1[2] + t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t9573 + t8799 + t9576;
  p_output1[0]=t730;
  p_output1[1]=t570 + t591 + t599 + t641 + t661 + t682 + t706 + t731 + t733 + var1[0];
  p_output1[2]=t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.144787*t727 + t736 + var1[0];
  p_output1[3]=t570 + t591 + t599 + t641 + t661 + t682 + t706 + t773 + t774 + var1[0];
  p_output1[4]=t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.143216*t727 + t777 + var1[0];
  p_output1[5]=t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.140196*t727 + t783 + var1[0];
  p_output1[6]=t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.136071*t727 + t789 + var1[0];
  p_output1[7]=t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.131288*t727 + t794 + var1[0];
  p_output1[8]=t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.126366*t727 + t815 + var1[0];
  p_output1[9]=t570 + t591 + t599 + t641 + t661 + t682 + t706 + t818 + t837 + var1[0];
  p_output1[10]=t570 + t591 + t599 + t641 + t661 + t682 + t706 + t839 + t840 + var1[0];
  p_output1[11]=t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.115829*t727 + t893 + var1[0];
  p_output1[12]=t4189 + t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.115*t727 + var1[0];
  p_output1[13]=t4485 + t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.115797*t727 + var1[0];
  p_output1[14]=t4518 + t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.118133*t727 + var1[0];
  p_output1[15]=t4545 + t4548 + t570 + t591 + t599 + t641 + t661 + t682 + t706 + var1[0];
  p_output1[16]=t4575 + t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.12627*t727 + var1[0];
  p_output1[17]=t4589 + t4597 + t570 + t591 + t599 + t641 + t661 + t682 + t706 + var1[0];
  p_output1[18]=t4601 + t570 + t591 + t599 + t641 + t661 + t682 + t706 - 0.13598*t727 + var1[0];
  p_output1[19]=t730;
  p_output1[20]=t4720;
  p_output1[21]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 + t4722 + t4728 + var1[1];
  p_output1[22]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.144787*t4714 + t4738 + var1[1];
  p_output1[23]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 + t4746 + t4747 + var1[1];
  p_output1[24]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.143216*t4714 + t4767 + var1[1];
  p_output1[25]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.140196*t4714 + t5246 + var1[1];
  p_output1[26]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.136071*t4714 + t5493 + var1[1];
  p_output1[27]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.131288*t4714 + t5980 + var1[1];
  p_output1[28]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.126366*t4714 + t6199 + var1[1];
  p_output1[29]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 + t6252 + t6260 + var1[1];
  p_output1[30]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 + t6277 + t6279 + var1[1];
  p_output1[31]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.115829*t4714 + t6294 + var1[1];
  p_output1[32]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.115*t4714 + t6347 + var1[1];
  p_output1[33]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.115797*t4714 + t6371 + var1[1];
  p_output1[34]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.118133*t4714 + t6399 + var1[1];
  p_output1[35]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 + t6449 + t6457 + var1[1];
  p_output1[36]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.12627*t4714 + t6476 + var1[1];
  p_output1[37]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 + t6601 + t6969 + var1[1];
  p_output1[38]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4690 - 0.13598*t4714 + t7084 + var1[1];
  p_output1[39]=t4720;
  p_output1[40]=t8878;
  p_output1[41]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 + t8879 + t8882 + var1[2];
  p_output1[42]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.144787*t8870 + t8890 + var1[2];
  p_output1[43]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 + t9037 + t9057 + var1[2];
  p_output1[44]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.143216*t8870 + t9096 + var1[2];
  p_output1[45]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.140196*t8870 + t9153 + var1[2];
  p_output1[46]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.136071*t8870 + t9165 + var1[2];
  p_output1[47]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.131288*t8870 + t9185 + var1[2];
  p_output1[48]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.126366*t8870 + t9209 + var1[2];
  p_output1[49]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 + t9223 + t9227 + var1[2];
  p_output1[50]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 + t9234 + t9236 + var1[2];
  p_output1[51]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.115829*t8870 + t9240 + var1[2];
  p_output1[52]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.115*t8870 + t9249 + var1[2];
  p_output1[53]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.115797*t8870 + t9253 + var1[2];
  p_output1[54]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.118133*t8870 + t9259 + var1[2];
  p_output1[55]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 + t9269 + t9272 + var1[2];
  p_output1[56]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.12627*t8870 + t9342 + var1[2];
  p_output1[57]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 + t9346 + t9348 + var1[2];
  p_output1[58]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8226 - 0.13598*t8870 + t9352 + var1[2];
  p_output1[59]=t8878;
  p_output1[60]=t9365;
  p_output1[61]=t570 + t591 + t599 + t641 + t661 + t682 + t731 + t733 + t9360 + var1[0];
  p_output1[62]=t570 + t591 + t599 + t641 + t661 + t682 - 0.144786*t727 + t736 + t9360 + var1[0];
  p_output1[63]=t570 + t591 + t599 + t641 + t661 + t682 + t773 + t774 + t9360 + var1[0];
  p_output1[64]=t570 + t591 + t599 + t641 + t661 + t682 - 0.143215*t727 + t777 + t9360 + var1[0];
  p_output1[65]=t570 + t591 + t599 + t641 + t661 + t682 - 0.140195*t727 + t783 + t9360 + var1[0];
  p_output1[66]=t570 + t591 + t599 + t641 + t661 + t682 - 0.13607*t727 + t789 + t9360 + var1[0];
  p_output1[67]=t570 + t591 + t599 + t641 + t661 + t682 - 0.131287*t727 + t794 + t9360 + var1[0];
  p_output1[68]=t570 + t591 + t599 + t641 + t661 + t682 - 0.126365*t727 + t815 + t9360 + var1[0];
  p_output1[69]=t570 + t591 + t599 + t641 + t661 + t682 + t818 + t837 + t9360 + var1[0];
  p_output1[70]=t570 + t591 + t599 + t641 + t661 + t682 + t839 + t840 + t9360 + var1[0];
  p_output1[71]=t570 + t591 + t599 + t641 + t661 + t682 - 0.115828*t727 + t893 + t9360 + var1[0];
  p_output1[72]=t4189 + t570 + t591 + t599 + t641 + t661 + t682 - 0.114999*t727 + t9360 + var1[0];
  p_output1[73]=t4485 + t570 + t591 + t599 + t641 + t661 + t682 - 0.115796*t727 + t9360 + var1[0];
  p_output1[74]=t4518 + t570 + t591 + t599 + t641 + t661 + t682 - 0.118132*t727 + t9360 + var1[0];
  p_output1[75]=t4545 + t4548 + t570 + t591 + t599 + t641 + t661 + t682 + t9360 + var1[0];
  p_output1[76]=t4575 + t570 + t591 + t599 + t641 + t661 + t682 - 0.126269*t727 + t9360 + var1[0];
  p_output1[77]=t4589 + t4597 + t570 + t591 + t599 + t641 + t661 + t682 + t9360 + var1[0];
  p_output1[78]=t4601 + t570 + t591 + t599 + t641 + t661 + t682 - 0.135979*t727 + t9360 + var1[0];
  p_output1[79]=t9365;
  p_output1[80]=t9493;
  p_output1[81]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4722 + t4728 + t9490 + var1[1];
  p_output1[82]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.144786*t4714 + t4738 + t9490 + var1[1];
  p_output1[83]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t4746 + t4747 + t9490 + var1[1];
  p_output1[84]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.143215*t4714 + t4767 + t9490 + var1[1];
  p_output1[85]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.140195*t4714 + t5246 + t9490 + var1[1];
  p_output1[86]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.13607*t4714 + t5493 + t9490 + var1[1];
  p_output1[87]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.131287*t4714 + t5980 + t9490 + var1[1];
  p_output1[88]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.126365*t4714 + t6199 + t9490 + var1[1];
  p_output1[89]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t6252 + t6260 + t9490 + var1[1];
  p_output1[90]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t6277 + t6279 + t9490 + var1[1];
  p_output1[91]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.115828*t4714 + t6294 + t9490 + var1[1];
  p_output1[92]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.114999*t4714 + t6347 + t9490 + var1[1];
  p_output1[93]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.115796*t4714 + t6371 + t9490 + var1[1];
  p_output1[94]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.118132*t4714 + t6399 + t9490 + var1[1];
  p_output1[95]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t6449 + t6457 + t9490 + var1[1];
  p_output1[96]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.126269*t4714 + t6476 + t9490 + var1[1];
  p_output1[97]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 + t6601 + t6969 + t9490 + var1[1];
  p_output1[98]=t4617 + t4628 + t4636 + t4653 + t4666 + t4681 - 0.135979*t4714 + t7084 + t9490 + var1[1];
  p_output1[99]=t9493;
  p_output1[100]=t9577;
  p_output1[101]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t8879 + t8882 + t9573 + var1[2];
  p_output1[102]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.144786*t8870 + t8890 + t9573 + var1[2];
  p_output1[103]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t9037 + t9057 + t9573 + var1[2];
  p_output1[104]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.143215*t8870 + t9096 + t9573 + var1[2];
  p_output1[105]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.140195*t8870 + t9153 + t9573 + var1[2];
  p_output1[106]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.13607*t8870 + t9165 + t9573 + var1[2];
  p_output1[107]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.131287*t8870 + t9185 + t9573 + var1[2];
  p_output1[108]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.126365*t8870 + t9209 + t9573 + var1[2];
  p_output1[109]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t9223 + t9227 + t9573 + var1[2];
  p_output1[110]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t9234 + t9236 + t9573 + var1[2];
  p_output1[111]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.115828*t8870 + t9240 + t9573 + var1[2];
  p_output1[112]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.114999*t8870 + t9249 + t9573 + var1[2];
  p_output1[113]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.115796*t8870 + t9253 + t9573 + var1[2];
  p_output1[114]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.118132*t8870 + t9259 + t9573 + var1[2];
  p_output1[115]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t9269 + t9272 + t9573 + var1[2];
  p_output1[116]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.126269*t8870 + t9342 + t9573 + var1[2];
  p_output1[117]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 + t9346 + t9348 + t9573 + var1[2];
  p_output1[118]=t7238 + t7286 + t7327 + t7403 + t7608 + t7962 - 0.135979*t8870 + t9352 + t9573 + var1[2];
  p_output1[119]=t9577;
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

#include "lower_leg_front_rightR_link_bar.hh"

namespace SymFunction
{

void lower_leg_front_rightR_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
