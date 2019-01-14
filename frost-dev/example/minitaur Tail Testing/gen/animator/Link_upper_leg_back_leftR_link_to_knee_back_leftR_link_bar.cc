/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:07 GMT-04:00
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
  double t3714;
  double t7083;
  double t7115;
  double t7202;
  double t7223;
  double t4048;
  double t5252;
  double t7143;
  double t7328;
  double t7349;
  double t7373;
  double t7376;
  double t7411;
  double t7379;
  double t7415;
  double t7423;
  double t7713;
  double t7716;
  double t7715;
  double t7719;
  double t7720;
  double t7714;
  double t7722;
  double t7724;
  double t7726;
  double t7727;
  double t7729;
  double t7731;
  double t7733;
  double t7728;
  double t7736;
  double t7738;
  double t7860;
  double t7862;
  double t7863;
  double t7859;
  double t7864;
  double t7866;
  double t7867;
  double t7868;
  double t7872;
  double t7873;
  double t7875;
  double t7871;
  double t7876;
  double t7877;
  double t7946;
  double t7947;
  double t7948;
  double t7949;
  double t7434;
  double t7466;
  double t7532;
  double t7542;
  double t7545;
  double t7546;
  double t7553;
  double t7554;
  double t7564;
  double t7565;
  double t7581;
  double t7582;
  double t7592;
  double t7629;
  double t7647;
  double t7651;
  double t7655;
  double t7656;
  double t7659;
  double t7663;
  double t7667;
  double t7671;
  double t7675;
  double t7677;
  double t7679;
  double t7681;
  double t7683;
  double t7685;
  double t7689;
  double t7691;
  double t7693;
  double t7699;
  double t7704;
  double t7705;
  double t7708;
  double t7709;
  double t7950;
  double t7739;
  double t7741;
  double t7977;
  double t7978;
  double t7979;
  double t7980;
  double t7744;
  double t7745;
  double t7748;
  double t7751;
  double t7763;
  double t7765;
  double t7768;
  double t7770;
  double t7772;
  double t7782;
  double t7784;
  double t7785;
  double t7789;
  double t7792;
  double t7794;
  double t7797;
  double t7800;
  double t7802;
  double t7806;
  double t7807;
  double t7814;
  double t7819;
  double t7833;
  double t7834;
  double t7837;
  double t7838;
  double t7842;
  double t7843;
  double t7846;
  double t7847;
  double t7850;
  double t7851;
  double t7855;
  double t7856;
  double t7983;
  double t7879;
  double t7880;
  double t8005;
  double t8006;
  double t8007;
  double t8008;
  double t7883;
  double t7885;
  double t7888;
  double t7889;
  double t7892;
  double t7893;
  double t7896;
  double t7897;
  double t7901;
  double t7902;
  double t7905;
  double t7906;
  double t7911;
  double t7912;
  double t7914;
  double t7915;
  double t7917;
  double t7919;
  double t7921;
  double t7922;
  double t7924;
  double t7925;
  double t7927;
  double t7929;
  double t7931;
  double t7932;
  double t7934;
  double t7935;
  double t7937;
  double t7938;
  double t7940;
  double t7941;
  double t7943;
  double t7944;
  double t8011;
  t3714 = Cos(var1[11]);
  t7083 = Cos(var1[4]);
  t7115 = Cos(var1[5]);
  t7202 = Sin(var1[11]);
  t7223 = Sin(var1[4]);
  t4048 = -1.*t3714;
  t5252 = 1. + t4048;
  t7143 = -0.225*t5252*t7083*t7115;
  t7328 = -0.225*t7202*t7223;
  t7349 = t3714*t7083*t7115;
  t7373 = -1.*t7202*t7223;
  t7376 = t7349 + t7373;
  t7411 = Sin(var1[5]);
  t7379 = -0.234488*t7376;
  t7415 = -0.118382*t7083*t7411;
  t7423 = var1[0] + t7143 + t7328 + t7379 + t7415;
  t7713 = Sin(var1[3]);
  t7716 = Cos(var1[3]);
  t7715 = t7115*t7713*t7223;
  t7719 = t7716*t7411;
  t7720 = t7715 + t7719;
  t7714 = 0.225*t7083*t7202*t7713;
  t7722 = -0.225*t5252*t7720;
  t7724 = t7716*t7115;
  t7726 = -1.*t7713*t7223*t7411;
  t7727 = t7724 + t7726;
  t7729 = t7083*t7202*t7713;
  t7731 = t3714*t7720;
  t7733 = t7729 + t7731;
  t7728 = 0.118382*t7727;
  t7736 = -0.234488*t7733;
  t7738 = var1[1] + t7714 + t7722 + t7728 + t7736;
  t7860 = -1.*t7716*t7115*t7223;
  t7862 = t7713*t7411;
  t7863 = t7860 + t7862;
  t7859 = -0.225*t7716*t7083*t7202;
  t7864 = -0.225*t5252*t7863;
  t7866 = t7115*t7713;
  t7867 = t7716*t7223*t7411;
  t7868 = t7866 + t7867;
  t7872 = -1.*t7716*t7083*t7202;
  t7873 = t3714*t7863;
  t7875 = t7872 + t7873;
  t7871 = 0.118382*t7868;
  t7876 = -0.234488*t7875;
  t7877 = var1[2] + t7859 + t7864 + t7871 + t7876;
  t7946 = t7083*t7115*t7202;
  t7947 = t3714*t7223;
  t7948 = t7946 + t7947;
  t7949 = 0.1*t7948;
  t7434 = -0.230202*t7376;
  t7466 = -0.115931*t7083*t7411;
  t7532 = -0.225352*t7376;
  t7542 = -0.115004*t7083*t7411;
  t7545 = -0.220463*t7376;
  t7546 = -0.115702*t7083*t7411;
  t7553 = -0.216067*t7376;
  t7554 = -0.11795*t7083*t7411;
  t7564 = -0.212638*t7376;
  t7565 = -0.121504*t7083*t7411;
  t7581 = -0.210549*t7376;
  t7582 = -0.125978*t7083*t7411;
  t7592 = -0.210026*t7376;
  t7629 = -0.130888*t7083*t7411;
  t7647 = -0.211126*t7376;
  t7651 = -0.135702*t7083*t7411;
  t7655 = -0.213729*t7376;
  t7656 = -0.139898*t7083*t7411;
  t7659 = -0.217553*t7376;
  t7663 = -0.143021*t7083*t7411;
  t7667 = -0.222185*t7376;
  t7671 = -0.144733*t7083*t7411;
  t7675 = -0.227121*t7376;
  t7677 = -0.144849*t7083*t7411;
  t7679 = -0.231828*t7376;
  t7681 = -0.143356*t7083*t7411;
  t7683 = -0.235795*t7376;
  t7685 = -0.140415*t7083*t7411;
  t7689 = -0.238592*t7376;
  t7691 = -0.136346*t7083*t7411;
  t7693 = -0.239916*t7376;
  t7699 = -0.131589*t7083*t7411;
  t7704 = -0.239623*t7376;
  t7705 = -0.12666*t7083*t7411;
  t7708 = -0.237746*t7376;
  t7709 = -0.122092*t7083*t7411;
  t7950 = var1[0] + t7143 + t7328 + t7949 + t7379 + t7415;
  t7739 = 0.115931*t7727;
  t7741 = -0.230202*t7733;
  t7977 = -1.*t3714*t7083*t7713;
  t7978 = t7202*t7720;
  t7979 = t7977 + t7978;
  t7980 = 0.1*t7979;
  t7744 = 0.115004*t7727;
  t7745 = -0.225352*t7733;
  t7748 = 0.115702*t7727;
  t7751 = -0.220463*t7733;
  t7763 = 0.11795*t7727;
  t7765 = -0.216067*t7733;
  t7768 = 0.121504*t7727;
  t7770 = -0.212638*t7733;
  t7772 = 0.125978*t7727;
  t7782 = -0.210549*t7733;
  t7784 = 0.130888*t7727;
  t7785 = -0.210026*t7733;
  t7789 = 0.135702*t7727;
  t7792 = -0.211126*t7733;
  t7794 = 0.139898*t7727;
  t7797 = -0.213729*t7733;
  t7800 = 0.143021*t7727;
  t7802 = -0.217553*t7733;
  t7806 = 0.144733*t7727;
  t7807 = -0.222185*t7733;
  t7814 = 0.144849*t7727;
  t7819 = -0.227121*t7733;
  t7833 = 0.143356*t7727;
  t7834 = -0.231828*t7733;
  t7837 = 0.140415*t7727;
  t7838 = -0.235795*t7733;
  t7842 = 0.136346*t7727;
  t7843 = -0.238592*t7733;
  t7846 = 0.131589*t7727;
  t7847 = -0.239916*t7733;
  t7850 = 0.12666*t7727;
  t7851 = -0.239623*t7733;
  t7855 = 0.122092*t7727;
  t7856 = -0.237746*t7733;
  t7983 = var1[1] + t7714 + t7722 + t7728 + t7736 + t7980;
  t7879 = 0.115931*t7868;
  t7880 = -0.230202*t7875;
  t8005 = t3714*t7716*t7083;
  t8006 = t7202*t7863;
  t8007 = t8005 + t8006;
  t8008 = 0.1*t8007;
  t7883 = 0.115004*t7868;
  t7885 = -0.225352*t7875;
  t7888 = 0.115702*t7868;
  t7889 = -0.220463*t7875;
  t7892 = 0.11795*t7868;
  t7893 = -0.216067*t7875;
  t7896 = 0.121504*t7868;
  t7897 = -0.212638*t7875;
  t7901 = 0.125978*t7868;
  t7902 = -0.210549*t7875;
  t7905 = 0.130888*t7868;
  t7906 = -0.210026*t7875;
  t7911 = 0.135702*t7868;
  t7912 = -0.211126*t7875;
  t7914 = 0.139898*t7868;
  t7915 = -0.213729*t7875;
  t7917 = 0.143021*t7868;
  t7919 = -0.217553*t7875;
  t7921 = 0.144733*t7868;
  t7922 = -0.222185*t7875;
  t7924 = 0.144849*t7868;
  t7925 = -0.227121*t7875;
  t7927 = 0.143356*t7868;
  t7929 = -0.231828*t7875;
  t7931 = 0.140415*t7868;
  t7932 = -0.235795*t7875;
  t7934 = 0.136346*t7868;
  t7935 = -0.238592*t7875;
  t7937 = 0.131589*t7868;
  t7938 = -0.239916*t7875;
  t7940 = 0.12666*t7868;
  t7941 = -0.239623*t7875;
  t7943 = 0.122092*t7868;
  t7944 = -0.237746*t7875;
  t8011 = var1[2] + t7859 + t7864 + t7871 + t7876 + t8008;
  p_output1[0]=t7423;
  p_output1[1]=t7143 + t7328 + t7434 + t7466 + var1[0];
  p_output1[2]=t7143 + t7328 + t7532 + t7542 + var1[0];
  p_output1[3]=t7143 + t7328 + t7545 + t7546 + var1[0];
  p_output1[4]=t7143 + t7328 + t7553 + t7554 + var1[0];
  p_output1[5]=t7143 + t7328 + t7564 + t7565 + var1[0];
  p_output1[6]=t7143 + t7328 + t7581 + t7582 + var1[0];
  p_output1[7]=t7143 + t7328 + t7592 + t7629 + var1[0];
  p_output1[8]=t7143 + t7328 + t7647 + t7651 + var1[0];
  p_output1[9]=t7143 + t7328 + t7655 + t7656 + var1[0];
  p_output1[10]=t7143 + t7328 + t7659 + t7663 + var1[0];
  p_output1[11]=t7143 + t7328 + t7667 + t7671 + var1[0];
  p_output1[12]=t7143 + t7328 + t7675 + t7677 + var1[0];
  p_output1[13]=t7143 + t7328 + t7679 + t7681 + var1[0];
  p_output1[14]=t7143 + t7328 + t7683 + t7685 + var1[0];
  p_output1[15]=t7143 + t7328 + t7689 + t7691 + var1[0];
  p_output1[16]=t7143 + t7328 + t7693 + t7699 + var1[0];
  p_output1[17]=t7143 + t7328 + t7704 + t7705 + var1[0];
  p_output1[18]=t7143 + t7328 + t7708 + t7709 + var1[0];
  p_output1[19]=t7423;
  p_output1[20]=t7738;
  p_output1[21]=t7714 + t7722 + t7739 + t7741 + var1[1];
  p_output1[22]=t7714 + t7722 + t7744 + t7745 + var1[1];
  p_output1[23]=t7714 + t7722 + t7748 + t7751 + var1[1];
  p_output1[24]=t7714 + t7722 + t7763 + t7765 + var1[1];
  p_output1[25]=t7714 + t7722 + t7768 + t7770 + var1[1];
  p_output1[26]=t7714 + t7722 + t7772 + t7782 + var1[1];
  p_output1[27]=t7714 + t7722 + t7784 + t7785 + var1[1];
  p_output1[28]=t7714 + t7722 + t7789 + t7792 + var1[1];
  p_output1[29]=t7714 + t7722 + t7794 + t7797 + var1[1];
  p_output1[30]=t7714 + t7722 + t7800 + t7802 + var1[1];
  p_output1[31]=t7714 + t7722 + t7806 + t7807 + var1[1];
  p_output1[32]=t7714 + t7722 + t7814 + t7819 + var1[1];
  p_output1[33]=t7714 + t7722 + t7833 + t7834 + var1[1];
  p_output1[34]=t7714 + t7722 + t7837 + t7838 + var1[1];
  p_output1[35]=t7714 + t7722 + t7842 + t7843 + var1[1];
  p_output1[36]=t7714 + t7722 + t7846 + t7847 + var1[1];
  p_output1[37]=t7714 + t7722 + t7850 + t7851 + var1[1];
  p_output1[38]=t7714 + t7722 + t7855 + t7856 + var1[1];
  p_output1[39]=t7738;
  p_output1[40]=t7877;
  p_output1[41]=t7859 + t7864 + t7879 + t7880 + var1[2];
  p_output1[42]=t7859 + t7864 + t7883 + t7885 + var1[2];
  p_output1[43]=t7859 + t7864 + t7888 + t7889 + var1[2];
  p_output1[44]=t7859 + t7864 + t7892 + t7893 + var1[2];
  p_output1[45]=t7859 + t7864 + t7896 + t7897 + var1[2];
  p_output1[46]=t7859 + t7864 + t7901 + t7902 + var1[2];
  p_output1[47]=t7859 + t7864 + t7905 + t7906 + var1[2];
  p_output1[48]=t7859 + t7864 + t7911 + t7912 + var1[2];
  p_output1[49]=t7859 + t7864 + t7914 + t7915 + var1[2];
  p_output1[50]=t7859 + t7864 + t7917 + t7919 + var1[2];
  p_output1[51]=t7859 + t7864 + t7921 + t7922 + var1[2];
  p_output1[52]=t7859 + t7864 + t7924 + t7925 + var1[2];
  p_output1[53]=t7859 + t7864 + t7927 + t7929 + var1[2];
  p_output1[54]=t7859 + t7864 + t7931 + t7932 + var1[2];
  p_output1[55]=t7859 + t7864 + t7934 + t7935 + var1[2];
  p_output1[56]=t7859 + t7864 + t7937 + t7938 + var1[2];
  p_output1[57]=t7859 + t7864 + t7940 + t7941 + var1[2];
  p_output1[58]=t7859 + t7864 + t7943 + t7944 + var1[2];
  p_output1[59]=t7877;
  p_output1[60]=t7950;
  p_output1[61]=t7143 + t7328 + t7434 + t7466 + t7949 + var1[0];
  p_output1[62]=t7143 + t7328 + t7532 + t7542 + t7949 + var1[0];
  p_output1[63]=t7143 + t7328 + t7545 + t7546 + t7949 + var1[0];
  p_output1[64]=t7143 + t7328 + t7553 + t7554 + t7949 + var1[0];
  p_output1[65]=t7143 + t7328 + t7564 + t7565 + t7949 + var1[0];
  p_output1[66]=t7143 + t7328 + t7581 + t7582 + t7949 + var1[0];
  p_output1[67]=t7143 + t7328 + t7592 + t7629 + t7949 + var1[0];
  p_output1[68]=t7143 + t7328 + t7647 + t7651 + t7949 + var1[0];
  p_output1[69]=t7143 + t7328 + t7655 + t7656 + t7949 + var1[0];
  p_output1[70]=t7143 + t7328 + t7659 + t7663 + t7949 + var1[0];
  p_output1[71]=t7143 + t7328 + t7667 + t7671 + t7949 + var1[0];
  p_output1[72]=t7143 + t7328 + t7675 + t7677 + t7949 + var1[0];
  p_output1[73]=t7143 + t7328 + t7679 + t7681 + t7949 + var1[0];
  p_output1[74]=t7143 + t7328 + t7683 + t7685 + t7949 + var1[0];
  p_output1[75]=t7143 + t7328 + t7689 + t7691 + t7949 + var1[0];
  p_output1[76]=t7143 + t7328 + t7693 + t7699 + t7949 + var1[0];
  p_output1[77]=t7143 + t7328 + t7704 + t7705 + t7949 + var1[0];
  p_output1[78]=t7143 + t7328 + t7708 + t7709 + t7949 + var1[0];
  p_output1[79]=t7950;
  p_output1[80]=t7983;
  p_output1[81]=t7714 + t7722 + t7739 + t7741 + t7980 + var1[1];
  p_output1[82]=t7714 + t7722 + t7744 + t7745 + t7980 + var1[1];
  p_output1[83]=t7714 + t7722 + t7748 + t7751 + t7980 + var1[1];
  p_output1[84]=t7714 + t7722 + t7763 + t7765 + t7980 + var1[1];
  p_output1[85]=t7714 + t7722 + t7768 + t7770 + t7980 + var1[1];
  p_output1[86]=t7714 + t7722 + t7772 + t7782 + t7980 + var1[1];
  p_output1[87]=t7714 + t7722 + t7784 + t7785 + t7980 + var1[1];
  p_output1[88]=t7714 + t7722 + t7789 + t7792 + t7980 + var1[1];
  p_output1[89]=t7714 + t7722 + t7794 + t7797 + t7980 + var1[1];
  p_output1[90]=t7714 + t7722 + t7800 + t7802 + t7980 + var1[1];
  p_output1[91]=t7714 + t7722 + t7806 + t7807 + t7980 + var1[1];
  p_output1[92]=t7714 + t7722 + t7814 + t7819 + t7980 + var1[1];
  p_output1[93]=t7714 + t7722 + t7833 + t7834 + t7980 + var1[1];
  p_output1[94]=t7714 + t7722 + t7837 + t7838 + t7980 + var1[1];
  p_output1[95]=t7714 + t7722 + t7842 + t7843 + t7980 + var1[1];
  p_output1[96]=t7714 + t7722 + t7846 + t7847 + t7980 + var1[1];
  p_output1[97]=t7714 + t7722 + t7850 + t7851 + t7980 + var1[1];
  p_output1[98]=t7714 + t7722 + t7855 + t7856 + t7980 + var1[1];
  p_output1[99]=t7983;
  p_output1[100]=t8011;
  p_output1[101]=t7859 + t7864 + t7879 + t7880 + t8008 + var1[2];
  p_output1[102]=t7859 + t7864 + t7883 + t7885 + t8008 + var1[2];
  p_output1[103]=t7859 + t7864 + t7888 + t7889 + t8008 + var1[2];
  p_output1[104]=t7859 + t7864 + t7892 + t7893 + t8008 + var1[2];
  p_output1[105]=t7859 + t7864 + t7896 + t7897 + t8008 + var1[2];
  p_output1[106]=t7859 + t7864 + t7901 + t7902 + t8008 + var1[2];
  p_output1[107]=t7859 + t7864 + t7905 + t7906 + t8008 + var1[2];
  p_output1[108]=t7859 + t7864 + t7911 + t7912 + t8008 + var1[2];
  p_output1[109]=t7859 + t7864 + t7914 + t7915 + t8008 + var1[2];
  p_output1[110]=t7859 + t7864 + t7917 + t7919 + t8008 + var1[2];
  p_output1[111]=t7859 + t7864 + t7921 + t7922 + t8008 + var1[2];
  p_output1[112]=t7859 + t7864 + t7924 + t7925 + t8008 + var1[2];
  p_output1[113]=t7859 + t7864 + t7927 + t7929 + t8008 + var1[2];
  p_output1[114]=t7859 + t7864 + t7931 + t7932 + t8008 + var1[2];
  p_output1[115]=t7859 + t7864 + t7934 + t7935 + t8008 + var1[2];
  p_output1[116]=t7859 + t7864 + t7937 + t7938 + t8008 + var1[2];
  p_output1[117]=t7859 + t7864 + t7940 + t7941 + t8008 + var1[2];
  p_output1[118]=t7859 + t7864 + t7943 + t7944 + t8008 + var1[2];
  p_output1[119]=t8011;
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

#include "Link_upper_leg_back_leftR_link_to_knee_back_leftR_link_bar.hh"

namespace SymFunction
{

void Link_upper_leg_back_leftR_link_to_knee_back_leftR_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
