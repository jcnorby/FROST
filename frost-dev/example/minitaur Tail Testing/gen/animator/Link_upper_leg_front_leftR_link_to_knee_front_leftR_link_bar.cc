/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:54 GMT-04:00
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
  double t1597;
  double t3505;
  double t5172;
  double t6436;
  double t6438;
  double t6038;
  double t6159;
  double t6262;
  double t6390;
  double t6452;
  double t6458;
  double t6462;
  double t6475;
  double t6410;
  double t6514;
  double t6531;
  double t6859;
  double t6857;
  double t6858;
  double t6879;
  double t6880;
  double t6881;
  double t6882;
  double t6897;
  double t6902;
  double t6905;
  double t6906;
  double t6907;
  double t6909;
  double t6903;
  double t6910;
  double t6913;
  double t7168;
  double t7170;
  double t7173;
  double t7174;
  double t7175;
  double t7178;
  double t7181;
  double t7186;
  double t7191;
  double t7193;
  double t7196;
  double t7182;
  double t7197;
  double t7198;
  double t6537;
  double t7395;
  double t7396;
  double t7398;
  double t7401;
  double t6589;
  double t6591;
  double t6602;
  double t6604;
  double t6609;
  double t6615;
  double t6619;
  double t6640;
  double t6641;
  double t6646;
  double t6671;
  double t6696;
  double t6703;
  double t6728;
  double t6729;
  double t6733;
  double t6735;
  double t6742;
  double t6744;
  double t6747;
  double t6753;
  double t6768;
  double t6769;
  double t6771;
  double t6772;
  double t6782;
  double t6783;
  double t6792;
  double t6796;
  double t6813;
  double t6816;
  double t6835;
  double t6836;
  double t6846;
  double t6847;
  double t7402;
  double t6914;
  double t6915;
  double t7426;
  double t7427;
  double t7428;
  double t7429;
  double t6918;
  double t6919;
  double t6968;
  double t6972;
  double t6987;
  double t6993;
  double t7000;
  double t7008;
  double t7018;
  double t7019;
  double t7034;
  double t7038;
  double t7043;
  double t7045;
  double t7057;
  double t7069;
  double t7073;
  double t7077;
  double t7081;
  double t7085;
  double t7097;
  double t7101;
  double t7106;
  double t7107;
  double t7112;
  double t7113;
  double t7118;
  double t7119;
  double t7123;
  double t7134;
  double t7149;
  double t7153;
  double t7158;
  double t7160;
  double t7431;
  double t7203;
  double t7206;
  double t7464;
  double t7467;
  double t7472;
  double t7473;
  double t7208;
  double t7209;
  double t7214;
  double t7215;
  double t7217;
  double t7218;
  double t7228;
  double t7232;
  double t7235;
  double t7242;
  double t7249;
  double t7250;
  double t7263;
  double t7265;
  double t7272;
  double t7287;
  double t7301;
  double t7307;
  double t7344;
  double t7347;
  double t7353;
  double t7354;
  double t7364;
  double t7365;
  double t7367;
  double t7368;
  double t7370;
  double t7372;
  double t7382;
  double t7383;
  double t7387;
  double t7388;
  double t7391;
  double t7392;
  double t7474;
  t1597 = Cos(var1[4]);
  t3505 = Cos(var1[5]);
  t5172 = Cos(var1[7]);
  t6436 = Sin(var1[4]);
  t6438 = Sin(var1[7]);
  t6038 = -1.*t5172;
  t6159 = 1. + t6038;
  t6262 = 0.225*t1597*t3505*t6159;
  t6390 = Sin(var1[5]);
  t6452 = 0.225*t6436*t6438;
  t6458 = t1597*t3505*t5172;
  t6462 = -1.*t6436*t6438;
  t6475 = t6458 + t6462;
  t6410 = -0.125586*t1597*t6390;
  t6514 = 0.210664*t6475;
  t6531 = var1[0] + t6262 + t6410 + t6452 + t6514;
  t6859 = Cos(var1[3]);
  t6857 = Sin(var1[3]);
  t6858 = t3505*t6857*t6436;
  t6879 = t6859*t6390;
  t6880 = t6858 + t6879;
  t6881 = 0.225*t6159*t6880;
  t6882 = t6859*t3505;
  t6897 = -1.*t6857*t6436*t6390;
  t6902 = t6882 + t6897;
  t6905 = -0.225*t1597*t6857*t6438;
  t6906 = t5172*t6880;
  t6907 = t1597*t6857*t6438;
  t6909 = t6906 + t6907;
  t6903 = 0.125586*t6902;
  t6910 = 0.210664*t6909;
  t6913 = var1[1] + t6881 + t6903 + t6905 + t6910;
  t7168 = -1.*t6859*t3505*t6436;
  t7170 = t6857*t6390;
  t7173 = t7168 + t7170;
  t7174 = 0.225*t6159*t7173;
  t7175 = t3505*t6857;
  t7178 = t6859*t6436*t6390;
  t7181 = t7175 + t7178;
  t7186 = 0.225*t6859*t1597*t6438;
  t7191 = t5172*t7173;
  t7193 = -1.*t6859*t1597*t6438;
  t7196 = t7191 + t7193;
  t7182 = 0.125586*t7181;
  t7197 = 0.210664*t7196;
  t7198 = var1[2] + t7174 + t7182 + t7186 + t7197;
  t6537 = -0.12117*t1597*t6390;
  t7395 = t5172*t6436;
  t7396 = t1597*t3505*t6438;
  t7398 = t7395 + t7396;
  t7401 = 0.1*t7398;
  t6589 = 0.212874*t6475;
  t6591 = -0.117712*t1597*t6390;
  t6602 = 0.216398*t6475;
  t6604 = -0.115584*t1597*t6390;
  t6609 = 0.220854*t6475;
  t6615 = -0.115019*t1597*t6390;
  t6619 = 0.22576*t6475;
  t6640 = -0.116078*t1597*t6390;
  t6641 = 0.230583*t6475;
  t6646 = -0.118645*t1597*t6390;
  t6671 = 0.234801*t6475;
  t6696 = -0.122442*t1597*t6390;
  t6703 = 0.237957*t6475;
  t6728 = -0.127059*t1597*t6390;
  t6729 = 0.239709*t6475;
  t6733 = -0.131994*t1597*t6390;
  t6735 = 0.239867*t6475;
  t6742 = -0.136713*t1597*t6390;
  t6744 = 0.238414*t6475;
  t6747 = -0.140705*t1597*t6390;
  t6753 = 0.235507*t6475;
  t6768 = -0.143537*t1597*t6390;
  t6769 = 0.231462*t6475;
  t6771 = -0.144901*t1597*t6390;
  t6772 = 0.226717*t6475;
  t6782 = -0.144651*t1597*t6390;
  t6783 = 0.221785*t6475;
  t6792 = -0.142814*t1597*t6390;
  t6796 = 0.217202*t6475;
  t6813 = -0.139587*t1597*t6390;
  t6816 = 0.213464*t6475;
  t6835 = -0.135322*t1597*t6390;
  t6836 = 0.210976*t6475;
  t6846 = -0.13048*t1597*t6390;
  t6847 = 0.210008*t6475;
  t7402 = var1[0] + t6262 + t6410 + t6452 + t7401 + t6514;
  t6914 = 0.12117*t6902;
  t6915 = 0.212874*t6909;
  t7426 = -1.*t1597*t5172*t6857;
  t7427 = t6880*t6438;
  t7428 = t7426 + t7427;
  t7429 = 0.1*t7428;
  t6918 = 0.117712*t6902;
  t6919 = 0.216398*t6909;
  t6968 = 0.115584*t6902;
  t6972 = 0.220854*t6909;
  t6987 = 0.115019*t6902;
  t6993 = 0.22576*t6909;
  t7000 = 0.116078*t6902;
  t7008 = 0.230583*t6909;
  t7018 = 0.118645*t6902;
  t7019 = 0.234801*t6909;
  t7034 = 0.122442*t6902;
  t7038 = 0.237957*t6909;
  t7043 = 0.127059*t6902;
  t7045 = 0.239709*t6909;
  t7057 = 0.131994*t6902;
  t7069 = 0.239867*t6909;
  t7073 = 0.136713*t6902;
  t7077 = 0.238414*t6909;
  t7081 = 0.140705*t6902;
  t7085 = 0.235507*t6909;
  t7097 = 0.143537*t6902;
  t7101 = 0.231462*t6909;
  t7106 = 0.144901*t6902;
  t7107 = 0.226717*t6909;
  t7112 = 0.144651*t6902;
  t7113 = 0.221785*t6909;
  t7118 = 0.142814*t6902;
  t7119 = 0.217202*t6909;
  t7123 = 0.139587*t6902;
  t7134 = 0.213464*t6909;
  t7149 = 0.135322*t6902;
  t7153 = 0.210976*t6909;
  t7158 = 0.13048*t6902;
  t7160 = 0.210008*t6909;
  t7431 = var1[1] + t6881 + t6903 + t6905 + t6910 + t7429;
  t7203 = 0.12117*t7181;
  t7206 = 0.212874*t7196;
  t7464 = t6859*t1597*t5172;
  t7467 = t7173*t6438;
  t7472 = t7464 + t7467;
  t7473 = 0.1*t7472;
  t7208 = 0.117712*t7181;
  t7209 = 0.216398*t7196;
  t7214 = 0.115584*t7181;
  t7215 = 0.220854*t7196;
  t7217 = 0.115019*t7181;
  t7218 = 0.22576*t7196;
  t7228 = 0.116078*t7181;
  t7232 = 0.230583*t7196;
  t7235 = 0.118645*t7181;
  t7242 = 0.234801*t7196;
  t7249 = 0.122442*t7181;
  t7250 = 0.237957*t7196;
  t7263 = 0.127059*t7181;
  t7265 = 0.239709*t7196;
  t7272 = 0.131994*t7181;
  t7287 = 0.239867*t7196;
  t7301 = 0.136713*t7181;
  t7307 = 0.238414*t7196;
  t7344 = 0.140705*t7181;
  t7347 = 0.235507*t7196;
  t7353 = 0.143537*t7181;
  t7354 = 0.231462*t7196;
  t7364 = 0.144901*t7181;
  t7365 = 0.226717*t7196;
  t7367 = 0.144651*t7181;
  t7368 = 0.221785*t7196;
  t7370 = 0.142814*t7181;
  t7372 = 0.217202*t7196;
  t7382 = 0.139587*t7181;
  t7383 = 0.213464*t7196;
  t7387 = 0.135322*t7181;
  t7388 = 0.210976*t7196;
  t7391 = 0.13048*t7181;
  t7392 = 0.210008*t7196;
  t7474 = var1[2] + t7174 + t7182 + t7186 + t7197 + t7473;
  p_output1[0]=t6531;
  p_output1[1]=t6262 + t6452 + t6537 + t6589 + var1[0];
  p_output1[2]=t6262 + t6452 + t6591 + t6602 + var1[0];
  p_output1[3]=t6262 + t6452 + t6604 + t6609 + var1[0];
  p_output1[4]=t6262 + t6452 + t6615 + t6619 + var1[0];
  p_output1[5]=t6262 + t6452 + t6640 + t6641 + var1[0];
  p_output1[6]=t6262 + t6452 + t6646 + t6671 + var1[0];
  p_output1[7]=t6262 + t6452 + t6696 + t6703 + var1[0];
  p_output1[8]=t6262 + t6452 + t6728 + t6729 + var1[0];
  p_output1[9]=t6262 + t6452 + t6733 + t6735 + var1[0];
  p_output1[10]=t6262 + t6452 + t6742 + t6744 + var1[0];
  p_output1[11]=t6262 + t6452 + t6747 + t6753 + var1[0];
  p_output1[12]=t6262 + t6452 + t6768 + t6769 + var1[0];
  p_output1[13]=t6262 + t6452 + t6771 + t6772 + var1[0];
  p_output1[14]=t6262 + t6452 + t6782 + t6783 + var1[0];
  p_output1[15]=t6262 + t6452 + t6792 + t6796 + var1[0];
  p_output1[16]=t6262 + t6452 + t6813 + t6816 + var1[0];
  p_output1[17]=t6262 + t6452 + t6835 + t6836 + var1[0];
  p_output1[18]=t6262 + t6452 + t6846 + t6847 + var1[0];
  p_output1[19]=t6531;
  p_output1[20]=t6913;
  p_output1[21]=t6881 + t6905 + t6914 + t6915 + var1[1];
  p_output1[22]=t6881 + t6905 + t6918 + t6919 + var1[1];
  p_output1[23]=t6881 + t6905 + t6968 + t6972 + var1[1];
  p_output1[24]=t6881 + t6905 + t6987 + t6993 + var1[1];
  p_output1[25]=t6881 + t6905 + t7000 + t7008 + var1[1];
  p_output1[26]=t6881 + t6905 + t7018 + t7019 + var1[1];
  p_output1[27]=t6881 + t6905 + t7034 + t7038 + var1[1];
  p_output1[28]=t6881 + t6905 + t7043 + t7045 + var1[1];
  p_output1[29]=t6881 + t6905 + t7057 + t7069 + var1[1];
  p_output1[30]=t6881 + t6905 + t7073 + t7077 + var1[1];
  p_output1[31]=t6881 + t6905 + t7081 + t7085 + var1[1];
  p_output1[32]=t6881 + t6905 + t7097 + t7101 + var1[1];
  p_output1[33]=t6881 + t6905 + t7106 + t7107 + var1[1];
  p_output1[34]=t6881 + t6905 + t7112 + t7113 + var1[1];
  p_output1[35]=t6881 + t6905 + t7118 + t7119 + var1[1];
  p_output1[36]=t6881 + t6905 + t7123 + t7134 + var1[1];
  p_output1[37]=t6881 + t6905 + t7149 + t7153 + var1[1];
  p_output1[38]=t6881 + t6905 + t7158 + t7160 + var1[1];
  p_output1[39]=t6913;
  p_output1[40]=t7198;
  p_output1[41]=t7174 + t7186 + t7203 + t7206 + var1[2];
  p_output1[42]=t7174 + t7186 + t7208 + t7209 + var1[2];
  p_output1[43]=t7174 + t7186 + t7214 + t7215 + var1[2];
  p_output1[44]=t7174 + t7186 + t7217 + t7218 + var1[2];
  p_output1[45]=t7174 + t7186 + t7228 + t7232 + var1[2];
  p_output1[46]=t7174 + t7186 + t7235 + t7242 + var1[2];
  p_output1[47]=t7174 + t7186 + t7249 + t7250 + var1[2];
  p_output1[48]=t7174 + t7186 + t7263 + t7265 + var1[2];
  p_output1[49]=t7174 + t7186 + t7272 + t7287 + var1[2];
  p_output1[50]=t7174 + t7186 + t7301 + t7307 + var1[2];
  p_output1[51]=t7174 + t7186 + t7344 + t7347 + var1[2];
  p_output1[52]=t7174 + t7186 + t7353 + t7354 + var1[2];
  p_output1[53]=t7174 + t7186 + t7364 + t7365 + var1[2];
  p_output1[54]=t7174 + t7186 + t7367 + t7368 + var1[2];
  p_output1[55]=t7174 + t7186 + t7370 + t7372 + var1[2];
  p_output1[56]=t7174 + t7186 + t7382 + t7383 + var1[2];
  p_output1[57]=t7174 + t7186 + t7387 + t7388 + var1[2];
  p_output1[58]=t7174 + t7186 + t7391 + t7392 + var1[2];
  p_output1[59]=t7198;
  p_output1[60]=t7402;
  p_output1[61]=t6262 + t6452 + t6537 + t6589 + t7401 + var1[0];
  p_output1[62]=t6262 + t6452 + t6591 + t6602 + t7401 + var1[0];
  p_output1[63]=t6262 + t6452 + t6604 + t6609 + t7401 + var1[0];
  p_output1[64]=t6262 + t6452 + t6615 + t6619 + t7401 + var1[0];
  p_output1[65]=t6262 + t6452 + t6640 + t6641 + t7401 + var1[0];
  p_output1[66]=t6262 + t6452 + t6646 + t6671 + t7401 + var1[0];
  p_output1[67]=t6262 + t6452 + t6696 + t6703 + t7401 + var1[0];
  p_output1[68]=t6262 + t6452 + t6728 + t6729 + t7401 + var1[0];
  p_output1[69]=t6262 + t6452 + t6733 + t6735 + t7401 + var1[0];
  p_output1[70]=t6262 + t6452 + t6742 + t6744 + t7401 + var1[0];
  p_output1[71]=t6262 + t6452 + t6747 + t6753 + t7401 + var1[0];
  p_output1[72]=t6262 + t6452 + t6768 + t6769 + t7401 + var1[0];
  p_output1[73]=t6262 + t6452 + t6771 + t6772 + t7401 + var1[0];
  p_output1[74]=t6262 + t6452 + t6782 + t6783 + t7401 + var1[0];
  p_output1[75]=t6262 + t6452 + t6792 + t6796 + t7401 + var1[0];
  p_output1[76]=t6262 + t6452 + t6813 + t6816 + t7401 + var1[0];
  p_output1[77]=t6262 + t6452 + t6835 + t6836 + t7401 + var1[0];
  p_output1[78]=t6262 + t6452 + t6846 + t6847 + t7401 + var1[0];
  p_output1[79]=t7402;
  p_output1[80]=t7431;
  p_output1[81]=t6881 + t6905 + t6914 + t6915 + t7429 + var1[1];
  p_output1[82]=t6881 + t6905 + t6918 + t6919 + t7429 + var1[1];
  p_output1[83]=t6881 + t6905 + t6968 + t6972 + t7429 + var1[1];
  p_output1[84]=t6881 + t6905 + t6987 + t6993 + t7429 + var1[1];
  p_output1[85]=t6881 + t6905 + t7000 + t7008 + t7429 + var1[1];
  p_output1[86]=t6881 + t6905 + t7018 + t7019 + t7429 + var1[1];
  p_output1[87]=t6881 + t6905 + t7034 + t7038 + t7429 + var1[1];
  p_output1[88]=t6881 + t6905 + t7043 + t7045 + t7429 + var1[1];
  p_output1[89]=t6881 + t6905 + t7057 + t7069 + t7429 + var1[1];
  p_output1[90]=t6881 + t6905 + t7073 + t7077 + t7429 + var1[1];
  p_output1[91]=t6881 + t6905 + t7081 + t7085 + t7429 + var1[1];
  p_output1[92]=t6881 + t6905 + t7097 + t7101 + t7429 + var1[1];
  p_output1[93]=t6881 + t6905 + t7106 + t7107 + t7429 + var1[1];
  p_output1[94]=t6881 + t6905 + t7112 + t7113 + t7429 + var1[1];
  p_output1[95]=t6881 + t6905 + t7118 + t7119 + t7429 + var1[1];
  p_output1[96]=t6881 + t6905 + t7123 + t7134 + t7429 + var1[1];
  p_output1[97]=t6881 + t6905 + t7149 + t7153 + t7429 + var1[1];
  p_output1[98]=t6881 + t6905 + t7158 + t7160 + t7429 + var1[1];
  p_output1[99]=t7431;
  p_output1[100]=t7474;
  p_output1[101]=t7174 + t7186 + t7203 + t7206 + t7473 + var1[2];
  p_output1[102]=t7174 + t7186 + t7208 + t7209 + t7473 + var1[2];
  p_output1[103]=t7174 + t7186 + t7214 + t7215 + t7473 + var1[2];
  p_output1[104]=t7174 + t7186 + t7217 + t7218 + t7473 + var1[2];
  p_output1[105]=t7174 + t7186 + t7228 + t7232 + t7473 + var1[2];
  p_output1[106]=t7174 + t7186 + t7235 + t7242 + t7473 + var1[2];
  p_output1[107]=t7174 + t7186 + t7249 + t7250 + t7473 + var1[2];
  p_output1[108]=t7174 + t7186 + t7263 + t7265 + t7473 + var1[2];
  p_output1[109]=t7174 + t7186 + t7272 + t7287 + t7473 + var1[2];
  p_output1[110]=t7174 + t7186 + t7301 + t7307 + t7473 + var1[2];
  p_output1[111]=t7174 + t7186 + t7344 + t7347 + t7473 + var1[2];
  p_output1[112]=t7174 + t7186 + t7353 + t7354 + t7473 + var1[2];
  p_output1[113]=t7174 + t7186 + t7364 + t7365 + t7473 + var1[2];
  p_output1[114]=t7174 + t7186 + t7367 + t7368 + t7473 + var1[2];
  p_output1[115]=t7174 + t7186 + t7370 + t7372 + t7473 + var1[2];
  p_output1[116]=t7174 + t7186 + t7382 + t7383 + t7473 + var1[2];
  p_output1[117]=t7174 + t7186 + t7387 + t7388 + t7473 + var1[2];
  p_output1[118]=t7174 + t7186 + t7391 + t7392 + t7473 + var1[2];
  p_output1[119]=t7474;
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

#include "Link_upper_leg_front_leftR_link_to_knee_front_leftR_link_bar.hh"

namespace SymFunction
{

void Link_upper_leg_front_leftR_link_to_knee_front_leftR_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
