/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:49 GMT-06:00
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
  double t3727;
  double t3900;
  double t3939;
  double t4195;
  double t4269;
  double t4015;
  double t4043;
  double t4314;
  double t4335;
  double t4338;
  double t4408;
  double t4492;
  double t4555;
  double t4606;
  double t4690;
  double t4695;
  double t4737;
  double t5238;
  double t5308;
  double t5377;
  double t5681;
  double t5547;
  double t5614;
  double t5626;
  double t5465;
  double t5687;
  double t5721;
  double t5777;
  double t3987;
  double t4082;
  double t4217;
  double t4248;
  double t4302;
  double t4326;
  double t4330;
  double t4452;
  double t4501;
  double t4511;
  double t4540;
  double t4648;
  double t4767;
  double t4821;
  double t4886;
  double t4925;
  double t4978;
  double t5176;
  double t5221;
  double t5438;
  double t5508;
  double t5520;
  double t5649;
  double t5804;
  double t5840;
  double t5845;
  double t5849;
  double t5920;
  double t5921;
  double t5929;
  double t5956;
  double t4933;
  double t5919;
  double t5971;
  double t6658;
  double t6670;
  double t6665;
  double t6687;
  double t6688;
  double t6710;
  double t6728;
  double t6732;
  double t6747;
  double t6758;
  double t6763;
  double t6776;
  double t6779;
  double t6790;
  double t6828;
  double t6829;
  double t6842;
  double t6863;
  double t6871;
  double t6874;
  double t6957;
  double t6967;
  double t6975;
  double t6660;
  double t6691;
  double t6741;
  double t6771;
  double t6791;
  double t6795;
  double t6802;
  double t6806;
  double t6862;
  double t6880;
  double t6987;
  double t7013;
  double t7014;
  double t7025;
  double t7046;
  double t7056;
  double t7071;
  double t7074;
  double t6822;
  double t7033;
  double t7079;
  double t7585;
  double t7589;
  double t7592;
  double t7628;
  double t7630;
  double t7653;
  double t7674;
  double t7676;
  double t7677;
  double t7710;
  double t7714;
  double t7738;
  double t7794;
  double t7797;
  double t7799;
  double t7871;
  double t7874;
  double t7879;
  double t7904;
  double t7908;
  double t7931;
  double t7565;
  double t7612;
  double t7659;
  double t7697;
  double t7769;
  double t7771;
  double t7772;
  double t7784;
  double t7800;
  double t7887;
  double t7940;
  double t7964;
  double t7966;
  double t7995;
  double t8033;
  double t8034;
  double t8035;
  double t8042;
  double t7792;
  double t7998;
  double t8044;
  double t5974;
  double t5980;
  double t8451;
  double t5988;
  double t6018;
  double t6058;
  double t6108;
  double t6184;
  double t6189;
  double t6239;
  double t6241;
  double t6246;
  double t6253;
  double t6270;
  double t6276;
  double t6289;
  double t6291;
  double t6307;
  double t6310;
  double t6497;
  double t6498;
  double t6500;
  double t6507;
  double t6515;
  double t6517;
  double t6557;
  double t6563;
  double t6581;
  double t6582;
  double t6587;
  double t6588;
  double t6599;
  double t6600;
  double t6609;
  double t6613;
  double t6634;
  double t6641;
  double t8454;
  double t7082;
  double t7087;
  double t8550;
  double t7102;
  double t7116;
  double t7120;
  double t7126;
  double t7141;
  double t7144;
  double t7157;
  double t7160;
  double t7187;
  double t7191;
  double t7223;
  double t7228;
  double t7244;
  double t7252;
  double t7261;
  double t7266;
  double t7288;
  double t7309;
  double t7311;
  double t7316;
  double t7324;
  double t7327;
  double t7334;
  double t7336;
  double t7339;
  double t7341;
  double t7411;
  double t7423;
  double t7479;
  double t7482;
  double t7495;
  double t7502;
  double t7538;
  double t7539;
  double t8556;
  double t8062;
  double t8096;
  double t8639;
  double t8138;
  double t8163;
  double t8197;
  double t8199;
  double t8204;
  double t8205;
  double t8208;
  double t8213;
  double t8225;
  double t8233;
  double t8239;
  double t8272;
  double t8290;
  double t8292;
  double t8301;
  double t8306;
  double t8314;
  double t8333;
  double t8339;
  double t8344;
  double t8346;
  double t8347;
  double t8349;
  double t8354;
  double t8356;
  double t8360;
  double t8364;
  double t8365;
  double t8416;
  double t8420;
  double t8422;
  double t8426;
  double t8432;
  double t8433;
  double t8640;
  t3727 = Cos(var1[4]);
  t3900 = Cos(var1[5]);
  t3939 = Sin(var1[13]);
  t4195 = Cos(var1[13]);
  t4269 = Sin(var1[5]);
  t4015 = Sin(var1[11]);
  t4043 = Sin(var1[4]);
  t4314 = Cos(var1[11]);
  t4335 = -1.*t3727*t3900*t3939;
  t4338 = -1.*t4195*t3727*t4269;
  t4408 = t4335 + t4338;
  t4492 = Cos(var1[12]);
  t4555 = Sin(var1[12]);
  t4606 = 0.05*t4555;
  t4690 = t4195*t3727*t3900;
  t4695 = -1.*t3727*t3939*t4269;
  t4737 = t4690 + t4695;
  t5238 = t4314*t4043;
  t5308 = -1.*t4015*t4408;
  t5377 = t5238 + t5308;
  t5681 = Sin(var1[14]);
  t5547 = t4555*t4737;
  t5614 = t4492*t5377;
  t5626 = t5547 + t5614;
  t5465 = Cos(var1[14]);
  t5687 = t4492*t4737;
  t5721 = -1.*t4555*t5377;
  t5777 = t5687 + t5721;
  t3987 = 0.089*t3727*t3900*t3939;
  t4082 = -0.089*t4015*t4043;
  t4217 = -1.*t4195;
  t4248 = 1. + t4217;
  t4302 = -0.089*t4248*t3727*t4269;
  t4326 = -1.*t4314;
  t4330 = 1. + t4326;
  t4452 = 0.089*t4330*t4408;
  t4501 = -1.*t4492;
  t4511 = 1. + t4501;
  t4540 = 0.05*t4511;
  t4648 = t4540 + t4606;
  t4767 = t4648*t4737;
  t4821 = t4015*t4043;
  t4886 = t4314*t4408;
  t4925 = t4821 + t4886;
  t4978 = -1. + t4492;
  t5176 = 0.05*t4978;
  t5221 = t5176 + t4606;
  t5438 = t5221*t5377;
  t5508 = -1.*t5465;
  t5520 = 1. + t5508;
  t5649 = -0.424*t5520*t5626;
  t5804 = 0.424*t5681*t5777;
  t5840 = -1.*t5681*t5626;
  t5845 = t5465*t5777;
  t5849 = t5840 + t5845;
  t5920 = t5465*t5626;
  t5921 = t5681*t5777;
  t5929 = t5920 + t5921;
  t5956 = -0.424*t5929;
  t4933 = 0.091418*t4925;
  t5919 = 0.014804*t5849;
  t5971 = var1[0] + t3987 + t4082 + t4302 + t4452 + t4767 + t4933 + t5438 + t5649 + t5804 + t5919 + t5956;
  t6658 = Sin(var1[3]);
  t6670 = Cos(var1[3]);
  t6665 = t3900*t6658*t4043;
  t6687 = t6670*t4269;
  t6688 = t6665 + t6687;
  t6710 = t6670*t3900;
  t6728 = -1.*t6658*t4043*t4269;
  t6732 = t6710 + t6728;
  t6747 = -1.*t3939*t6688;
  t6758 = t4195*t6732;
  t6763 = t6747 + t6758;
  t6776 = t4195*t6688;
  t6779 = t3939*t6732;
  t6790 = t6776 + t6779;
  t6828 = -1.*t4314*t3727*t6658;
  t6829 = -1.*t4015*t6763;
  t6842 = t6828 + t6829;
  t6863 = t4555*t6790;
  t6871 = t4492*t6842;
  t6874 = t6863 + t6871;
  t6957 = t4492*t6790;
  t6967 = -1.*t4555*t6842;
  t6975 = t6957 + t6967;
  t6660 = 0.089*t3727*t4015*t6658;
  t6691 = 0.089*t3939*t6688;
  t6741 = 0.089*t4248*t6732;
  t6771 = 0.089*t4330*t6763;
  t6791 = t4648*t6790;
  t6795 = -1.*t3727*t4015*t6658;
  t6802 = t4314*t6763;
  t6806 = t6795 + t6802;
  t6862 = t5221*t6842;
  t6880 = -0.424*t5520*t6874;
  t6987 = 0.424*t5681*t6975;
  t7013 = -1.*t5681*t6874;
  t7014 = t5465*t6975;
  t7025 = t7013 + t7014;
  t7046 = t5465*t6874;
  t7056 = t5681*t6975;
  t7071 = t7046 + t7056;
  t7074 = -0.424*t7071;
  t6822 = 0.091418*t6806;
  t7033 = 0.014804*t7025;
  t7079 = var1[1] + t6660 + t6691 + t6741 + t6771 + t6791 + t6822 + t6862 + t6880 + t6987 + t7033 + t7074;
  t7585 = -1.*t6670*t3900*t4043;
  t7589 = t6658*t4269;
  t7592 = t7585 + t7589;
  t7628 = t3900*t6658;
  t7630 = t6670*t4043*t4269;
  t7653 = t7628 + t7630;
  t7674 = -1.*t3939*t7592;
  t7676 = t4195*t7653;
  t7677 = t7674 + t7676;
  t7710 = t4195*t7592;
  t7714 = t3939*t7653;
  t7738 = t7710 + t7714;
  t7794 = t4314*t6670*t3727;
  t7797 = -1.*t4015*t7677;
  t7799 = t7794 + t7797;
  t7871 = t4555*t7738;
  t7874 = t4492*t7799;
  t7879 = t7871 + t7874;
  t7904 = t4492*t7738;
  t7908 = -1.*t4555*t7799;
  t7931 = t7904 + t7908;
  t7565 = -0.089*t6670*t3727*t4015;
  t7612 = 0.089*t3939*t7592;
  t7659 = 0.089*t4248*t7653;
  t7697 = 0.089*t4330*t7677;
  t7769 = t4648*t7738;
  t7771 = t6670*t3727*t4015;
  t7772 = t4314*t7677;
  t7784 = t7771 + t7772;
  t7800 = t5221*t7799;
  t7887 = -0.424*t5520*t7879;
  t7940 = 0.424*t5681*t7931;
  t7964 = -1.*t5681*t7879;
  t7966 = t5465*t7931;
  t7995 = t7964 + t7966;
  t8033 = t5465*t7879;
  t8034 = t5681*t7931;
  t8035 = t8033 + t8034;
  t8042 = -0.424*t8035;
  t7792 = 0.091418*t7784;
  t7998 = 0.014804*t7995;
  t8044 = var1[2] + t7565 + t7612 + t7659 + t7697 + t7769 + t7792 + t7800 + t7887 + t7940 + t7998 + t8042;
  t5974 = 0.08648*t4925;
  t5980 = 0.014787*t5849;
  t8451 = -0.846*t5929;
  t5988 = 0.081816*t4925;
  t6018 = 0.013168*t5849;
  t6058 = 0.077929*t4925;
  t6108 = 0.010121*t5849;
  t6184 = 0.075243*t4925;
  t6189 = 0.005978*t5849;
  t6239 = 0.074047*t4925;
  t6241 = 0.001187*t5849;
  t6246 = 0.074472*t4925;
  t6253 = -0.003732*t5849;
  t6270 = 0.076471*t4925;
  t6276 = -0.008247*t5849;
  t6289 = 0.079827*t4925;
  t6291 = -0.011869*t5849;
  t6307 = 0.084178*t4925;
  t6310 = -0.014204*t5849;
  t6497 = 0.089051*t4925;
  t6498 = -0.015*t5849;
  t6500 = 0.093919*t4925;
  t6507 = -0.01417*t5849;
  t6515 = 0.098254*t4925;
  t6517 = -0.011805*t5849;
  t6557 = 0.101586*t4925;
  t6563 = -0.008161*t5849;
  t6581 = 0.103554*t4925;
  t6582 = -0.003632*t5849;
  t6587 = 0.103944*t4925;
  t6588 = 0.00129*t5849;
  t6599 = 0.102716*t4925;
  t6600 = 0.006072*t5849;
  t6609 = 0.100001*t4925;
  t6613 = 0.010197*t5849;
  t6634 = 0.096094*t4925;
  t6641 = 0.013217*t5849;
  t8454 = var1[0] + t3987 + t4082 + t4302 + t4452 + t4767 + t4933 + t5438 + t5649 + t5804 + t5919 + t8451;
  t7082 = 0.08648*t6806;
  t7087 = 0.014787*t7025;
  t8550 = -0.846*t7071;
  t7102 = 0.081816*t6806;
  t7116 = 0.013168*t7025;
  t7120 = 0.077929*t6806;
  t7126 = 0.010121*t7025;
  t7141 = 0.075243*t6806;
  t7144 = 0.005978*t7025;
  t7157 = 0.074047*t6806;
  t7160 = 0.001187*t7025;
  t7187 = 0.074472*t6806;
  t7191 = -0.003732*t7025;
  t7223 = 0.076471*t6806;
  t7228 = -0.008247*t7025;
  t7244 = 0.079827*t6806;
  t7252 = -0.011869*t7025;
  t7261 = 0.084178*t6806;
  t7266 = -0.014204*t7025;
  t7288 = 0.089051*t6806;
  t7309 = -0.015*t7025;
  t7311 = 0.093919*t6806;
  t7316 = -0.01417*t7025;
  t7324 = 0.098254*t6806;
  t7327 = -0.011805*t7025;
  t7334 = 0.101586*t6806;
  t7336 = -0.008161*t7025;
  t7339 = 0.103554*t6806;
  t7341 = -0.003632*t7025;
  t7411 = 0.103944*t6806;
  t7423 = 0.00129*t7025;
  t7479 = 0.102716*t6806;
  t7482 = 0.006072*t7025;
  t7495 = 0.100001*t6806;
  t7502 = 0.010197*t7025;
  t7538 = 0.096094*t6806;
  t7539 = 0.013217*t7025;
  t8556 = var1[1] + t6660 + t6691 + t6741 + t6771 + t6791 + t6822 + t6862 + t6880 + t6987 + t7033 + t8550;
  t8062 = 0.08648*t7784;
  t8096 = 0.014787*t7995;
  t8639 = -0.846*t8035;
  t8138 = 0.081816*t7784;
  t8163 = 0.013168*t7995;
  t8197 = 0.077929*t7784;
  t8199 = 0.010121*t7995;
  t8204 = 0.075243*t7784;
  t8205 = 0.005978*t7995;
  t8208 = 0.074047*t7784;
  t8213 = 0.001187*t7995;
  t8225 = 0.074472*t7784;
  t8233 = -0.003732*t7995;
  t8239 = 0.076471*t7784;
  t8272 = -0.008247*t7995;
  t8290 = 0.079827*t7784;
  t8292 = -0.011869*t7995;
  t8301 = 0.084178*t7784;
  t8306 = -0.014204*t7995;
  t8314 = 0.089051*t7784;
  t8333 = -0.015*t7995;
  t8339 = 0.093919*t7784;
  t8344 = -0.01417*t7995;
  t8346 = 0.098254*t7784;
  t8347 = -0.011805*t7995;
  t8349 = 0.101586*t7784;
  t8354 = -0.008161*t7995;
  t8356 = 0.103554*t7784;
  t8360 = -0.003632*t7995;
  t8364 = 0.103944*t7784;
  t8365 = 0.00129*t7995;
  t8416 = 0.102716*t7784;
  t8420 = 0.006072*t7995;
  t8422 = 0.100001*t7784;
  t8426 = 0.010197*t7995;
  t8432 = 0.096094*t7784;
  t8433 = 0.013217*t7995;
  t8640 = var1[2] + t7565 + t7612 + t7659 + t7697 + t7769 + t7792 + t7800 + t7887 + t7940 + t7998 + t8639;
  p_output1[0]=t5971;
  p_output1[1]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t5974 + t5980 + var1[0];
  p_output1[2]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t5988 + t6018 + var1[0];
  p_output1[3]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6058 + t6108 + var1[0];
  p_output1[4]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6184 + t6189 + var1[0];
  p_output1[5]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6239 + t6241 + var1[0];
  p_output1[6]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6246 + t6253 + var1[0];
  p_output1[7]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6270 + t6276 + var1[0];
  p_output1[8]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6289 + t6291 + var1[0];
  p_output1[9]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6307 + t6310 + var1[0];
  p_output1[10]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6497 + t6498 + var1[0];
  p_output1[11]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6500 + t6507 + var1[0];
  p_output1[12]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6515 + t6517 + var1[0];
  p_output1[13]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6557 + t6563 + var1[0];
  p_output1[14]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6581 + t6582 + var1[0];
  p_output1[15]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6587 + t6588 + var1[0];
  p_output1[16]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6599 + t6600 + var1[0];
  p_output1[17]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6609 + t6613 + var1[0];
  p_output1[18]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5956 + t6634 + t6641 + var1[0];
  p_output1[19]=t5971;
  p_output1[20]=t7079;
  p_output1[21]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7082 + t7087 + var1[1];
  p_output1[22]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7102 + t7116 + var1[1];
  p_output1[23]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7120 + t7126 + var1[1];
  p_output1[24]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7141 + t7144 + var1[1];
  p_output1[25]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7157 + t7160 + var1[1];
  p_output1[26]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7187 + t7191 + var1[1];
  p_output1[27]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7223 + t7228 + var1[1];
  p_output1[28]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7244 + t7252 + var1[1];
  p_output1[29]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7261 + t7266 + var1[1];
  p_output1[30]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7288 + t7309 + var1[1];
  p_output1[31]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7311 + t7316 + var1[1];
  p_output1[32]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7324 + t7327 + var1[1];
  p_output1[33]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7334 + t7336 + var1[1];
  p_output1[34]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7339 + t7341 + var1[1];
  p_output1[35]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7411 + t7423 + var1[1];
  p_output1[36]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7479 + t7482 + var1[1];
  p_output1[37]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7495 + t7502 + var1[1];
  p_output1[38]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7074 + t7538 + t7539 + var1[1];
  p_output1[39]=t7079;
  p_output1[40]=t8044;
  p_output1[41]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8062 + t8096 + var1[2];
  p_output1[42]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8138 + t8163 + var1[2];
  p_output1[43]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8197 + t8199 + var1[2];
  p_output1[44]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8204 + t8205 + var1[2];
  p_output1[45]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8208 + t8213 + var1[2];
  p_output1[46]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8225 + t8233 + var1[2];
  p_output1[47]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8239 + t8272 + var1[2];
  p_output1[48]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8290 + t8292 + var1[2];
  p_output1[49]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8301 + t8306 + var1[2];
  p_output1[50]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8314 + t8333 + var1[2];
  p_output1[51]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8339 + t8344 + var1[2];
  p_output1[52]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8346 + t8347 + var1[2];
  p_output1[53]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8349 + t8354 + var1[2];
  p_output1[54]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8356 + t8360 + var1[2];
  p_output1[55]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8364 + t8365 + var1[2];
  p_output1[56]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8416 + t8420 + var1[2];
  p_output1[57]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8422 + t8426 + var1[2];
  p_output1[58]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8042 + t8432 + t8433 + var1[2];
  p_output1[59]=t8044;
  p_output1[60]=t8454;
  p_output1[61]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5974 + t5980 + t8451 + var1[0];
  p_output1[62]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t5988 + t6018 + t8451 + var1[0];
  p_output1[63]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6058 + t6108 + t8451 + var1[0];
  p_output1[64]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6184 + t6189 + t8451 + var1[0];
  p_output1[65]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6239 + t6241 + t8451 + var1[0];
  p_output1[66]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6246 + t6253 + t8451 + var1[0];
  p_output1[67]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6270 + t6276 + t8451 + var1[0];
  p_output1[68]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6289 + t6291 + t8451 + var1[0];
  p_output1[69]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6307 + t6310 + t8451 + var1[0];
  p_output1[70]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6497 + t6498 + t8451 + var1[0];
  p_output1[71]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6500 + t6507 + t8451 + var1[0];
  p_output1[72]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6515 + t6517 + t8451 + var1[0];
  p_output1[73]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6557 + t6563 + t8451 + var1[0];
  p_output1[74]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6581 + t6582 + t8451 + var1[0];
  p_output1[75]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6587 + t6588 + t8451 + var1[0];
  p_output1[76]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6599 + t6600 + t8451 + var1[0];
  p_output1[77]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6609 + t6613 + t8451 + var1[0];
  p_output1[78]=t3987 + t4082 + t4302 + t4452 + t4767 + t5438 + t5649 + t5804 + t6634 + t6641 + t8451 + var1[0];
  p_output1[79]=t8454;
  p_output1[80]=t8556;
  p_output1[81]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7082 + t7087 + t8550 + var1[1];
  p_output1[82]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7102 + t7116 + t8550 + var1[1];
  p_output1[83]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7120 + t7126 + t8550 + var1[1];
  p_output1[84]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7141 + t7144 + t8550 + var1[1];
  p_output1[85]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7157 + t7160 + t8550 + var1[1];
  p_output1[86]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7187 + t7191 + t8550 + var1[1];
  p_output1[87]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7223 + t7228 + t8550 + var1[1];
  p_output1[88]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7244 + t7252 + t8550 + var1[1];
  p_output1[89]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7261 + t7266 + t8550 + var1[1];
  p_output1[90]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7288 + t7309 + t8550 + var1[1];
  p_output1[91]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7311 + t7316 + t8550 + var1[1];
  p_output1[92]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7324 + t7327 + t8550 + var1[1];
  p_output1[93]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7334 + t7336 + t8550 + var1[1];
  p_output1[94]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7339 + t7341 + t8550 + var1[1];
  p_output1[95]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7411 + t7423 + t8550 + var1[1];
  p_output1[96]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7479 + t7482 + t8550 + var1[1];
  p_output1[97]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7495 + t7502 + t8550 + var1[1];
  p_output1[98]=t6660 + t6691 + t6741 + t6771 + t6791 + t6862 + t6880 + t6987 + t7538 + t7539 + t8550 + var1[1];
  p_output1[99]=t8556;
  p_output1[100]=t8640;
  p_output1[101]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8062 + t8096 + t8639 + var1[2];
  p_output1[102]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8138 + t8163 + t8639 + var1[2];
  p_output1[103]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8197 + t8199 + t8639 + var1[2];
  p_output1[104]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8204 + t8205 + t8639 + var1[2];
  p_output1[105]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8208 + t8213 + t8639 + var1[2];
  p_output1[106]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8225 + t8233 + t8639 + var1[2];
  p_output1[107]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8239 + t8272 + t8639 + var1[2];
  p_output1[108]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8290 + t8292 + t8639 + var1[2];
  p_output1[109]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8301 + t8306 + t8639 + var1[2];
  p_output1[110]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8314 + t8333 + t8639 + var1[2];
  p_output1[111]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8339 + t8344 + t8639 + var1[2];
  p_output1[112]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8346 + t8347 + t8639 + var1[2];
  p_output1[113]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8349 + t8354 + t8639 + var1[2];
  p_output1[114]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8356 + t8360 + t8639 + var1[2];
  p_output1[115]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8364 + t8365 + t8639 + var1[2];
  p_output1[116]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8416 + t8420 + t8639 + var1[2];
  p_output1[117]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8422 + t8426 + t8639 + var1[2];
  p_output1[118]=t7565 + t7612 + t7659 + t7697 + t7769 + t7800 + t7887 + t7940 + t8432 + t8433 + t8639 + var1[2];
  p_output1[119]=t8640;
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
    ( !(mrows == 21 && ncols == 1) && 
      !(mrows == 1 && ncols == 21))) 
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

#include "Link_l_lleg_to_l_leg_aky_bar.hh"

namespace SymFunction
{

void Link_l_lleg_to_l_leg_aky_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
