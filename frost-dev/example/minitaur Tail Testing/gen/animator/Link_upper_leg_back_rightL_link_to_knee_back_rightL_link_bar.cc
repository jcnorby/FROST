/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:28 GMT-04:00
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
  double t118;
  double t129;
  double t230;
  double t539;
  double t542;
  double t122;
  double t124;
  double t521;
  double t553;
  double t554;
  double t564;
  double t609;
  double t671;
  double t621;
  double t865;
  double t881;
  double t1133;
  double t1136;
  double t1135;
  double t1137;
  double t1138;
  double t1134;
  double t1139;
  double t1140;
  double t1141;
  double t1145;
  double t1154;
  double t1158;
  double t1162;
  double t1150;
  double t1166;
  double t1170;
  double t1696;
  double t1700;
  double t1702;
  double t1669;
  double t1705;
  double t1708;
  double t1709;
  double t1710;
  double t1728;
  double t1729;
  double t1748;
  double t1726;
  double t1750;
  double t1752;
  double t1927;
  double t1928;
  double t1929;
  double t1931;
  double t894;
  double t901;
  double t937;
  double t940;
  double t944;
  double t945;
  double t952;
  double t953;
  double t956;
  double t961;
  double t977;
  double t982;
  double t988;
  double t993;
  double t1014;
  double t1019;
  double t1030;
  double t1034;
  double t1036;
  double t1038;
  double t1040;
  double t1042;
  double t1044;
  double t1046;
  double t1048;
  double t1050;
  double t1060;
  double t1066;
  double t1076;
  double t1082;
  double t1093;
  double t1097;
  double t1109;
  double t1113;
  double t1121;
  double t1125;
  double t1932;
  double t1174;
  double t1178;
  double t1966;
  double t1967;
  double t1969;
  double t1970;
  double t1186;
  double t1190;
  double t1198;
  double t1205;
  double t1213;
  double t1217;
  double t1223;
  double t1278;
  double t1280;
  double t1330;
  double t1336;
  double t1337;
  double t1351;
  double t1356;
  double t1366;
  double t1386;
  double t1396;
  double t1407;
  double t1438;
  double t1440;
  double t1454;
  double t1457;
  double t1519;
  double t1525;
  double t1587;
  double t1595;
  double t1622;
  double t1625;
  double t1645;
  double t1652;
  double t1655;
  double t1657;
  double t1661;
  double t1666;
  double t1971;
  double t1773;
  double t1774;
  double t2001;
  double t2002;
  double t2003;
  double t2005;
  double t1796;
  double t1798;
  double t1801;
  double t1803;
  double t1805;
  double t1807;
  double t1812;
  double t1816;
  double t1857;
  double t1858;
  double t1863;
  double t1865;
  double t1869;
  double t1870;
  double t1874;
  double t1875;
  double t1881;
  double t1883;
  double t1885;
  double t1886;
  double t1891;
  double t1894;
  double t1897;
  double t1899;
  double t1902;
  double t1905;
  double t1907;
  double t1910;
  double t1913;
  double t1915;
  double t1918;
  double t1921;
  double t1924;
  double t1925;
  double t2006;
  t118 = Cos(var1[18]);
  t129 = Cos(var1[4]);
  t230 = Cos(var1[5]);
  t539 = Sin(var1[18]);
  t542 = Sin(var1[4]);
  t122 = -1.*t118;
  t124 = 1. + t122;
  t521 = -0.225*t124*t129*t230;
  t553 = -0.225*t539*t542;
  t554 = t118*t129*t230;
  t564 = -1.*t539*t542;
  t609 = t554 + t564;
  t671 = Sin(var1[5]);
  t621 = -0.227153*t609;
  t865 = 0.144845*t129*t671;
  t881 = var1[0] + t521 + t553 + t621 + t865;
  t1133 = Sin(var1[3]);
  t1136 = Cos(var1[3]);
  t1135 = t230*t1133*t542;
  t1137 = t1136*t671;
  t1138 = t1135 + t1137;
  t1134 = 0.225*t129*t539*t1133;
  t1139 = -0.225*t124*t1138;
  t1140 = t1136*t230;
  t1141 = -1.*t1133*t542*t671;
  t1145 = t1140 + t1141;
  t1154 = t129*t539*t1133;
  t1158 = t118*t1138;
  t1162 = t1154 + t1158;
  t1150 = -0.144845*t1145;
  t1166 = -0.227153*t1162;
  t1170 = var1[1] + t1134 + t1139 + t1150 + t1166;
  t1696 = -1.*t1136*t230*t542;
  t1700 = t1133*t671;
  t1702 = t1696 + t1700;
  t1669 = -0.225*t1136*t129*t539;
  t1705 = -0.225*t124*t1702;
  t1708 = t230*t1133;
  t1709 = t1136*t542*t671;
  t1710 = t1708 + t1709;
  t1728 = -1.*t1136*t129*t539;
  t1729 = t118*t1702;
  t1748 = t1728 + t1729;
  t1726 = -0.144845*t1710;
  t1750 = -0.227153*t1748;
  t1752 = var1[2] + t1669 + t1705 + t1726 + t1750;
  t1927 = t129*t230*t539;
  t1928 = t118*t542;
  t1929 = t1927 + t1928;
  t1931 = 0.1*t1929;
  t894 = -0.222216*t609;
  t901 = 0.144739*t129*t671;
  t937 = -0.217581*t609;
  t940 = 0.143037*t129*t671;
  t944 = -0.21375*t609;
  t945 = 0.139922*t129*t671;
  t952 = -0.211138*t609;
  t953 = 0.135731*t129*t671;
  t956 = -0.210028*t609;
  t961 = 0.13092*t129*t671;
  t977 = -0.210541*t609;
  t982 = 0.126009*t129*t671;
  t988 = -0.21262*t609;
  t993 = 0.12153*t129*t671;
  t1014 = -0.216041*t609;
  t1019 = 0.117969*t129*t671;
  t1030 = -0.220433*t609;
  t1034 = 0.115712*t129*t671;
  t1036 = -0.22532*t609;
  t1038 = 0.115003*t129*t671;
  t1040 = -0.230172*t609;
  t1042 = 0.11592*t129*t671;
  t1044 = -0.234463*t609;
  t1046 = 0.118362*t129*t671;
  t1048 = -0.237729*t609;
  t1050 = 0.122065*t129*t671;
  t1060 = -0.239616*t609;
  t1066 = 0.126628*t129*t671;
  t1076 = -0.239919*t609;
  t1082 = 0.131557*t129*t671;
  t1093 = -0.238605*t609;
  t1097 = 0.136317*t129*t671;
  t1109 = -0.235817*t609;
  t1113 = 0.140392*t129*t671;
  t1121 = -0.231857*t609;
  t1125 = 0.143341*t129*t671;
  t1932 = var1[0] + t521 + t553 + t1931 + t621 + t865;
  t1174 = -0.144739*t1145;
  t1178 = -0.222216*t1162;
  t1966 = -1.*t118*t129*t1133;
  t1967 = t539*t1138;
  t1969 = t1966 + t1967;
  t1970 = 0.1*t1969;
  t1186 = -0.143037*t1145;
  t1190 = -0.217581*t1162;
  t1198 = -0.139922*t1145;
  t1205 = -0.21375*t1162;
  t1213 = -0.135731*t1145;
  t1217 = -0.211138*t1162;
  t1223 = -0.13092*t1145;
  t1278 = -0.210028*t1162;
  t1280 = -0.126009*t1145;
  t1330 = -0.210541*t1162;
  t1336 = -0.12153*t1145;
  t1337 = -0.21262*t1162;
  t1351 = -0.117969*t1145;
  t1356 = -0.216041*t1162;
  t1366 = -0.115712*t1145;
  t1386 = -0.220433*t1162;
  t1396 = -0.115003*t1145;
  t1407 = -0.22532*t1162;
  t1438 = -0.11592*t1145;
  t1440 = -0.230172*t1162;
  t1454 = -0.118362*t1145;
  t1457 = -0.234463*t1162;
  t1519 = -0.122065*t1145;
  t1525 = -0.237729*t1162;
  t1587 = -0.126628*t1145;
  t1595 = -0.239616*t1162;
  t1622 = -0.131557*t1145;
  t1625 = -0.239919*t1162;
  t1645 = -0.136317*t1145;
  t1652 = -0.238605*t1162;
  t1655 = -0.140392*t1145;
  t1657 = -0.235817*t1162;
  t1661 = -0.143341*t1145;
  t1666 = -0.231857*t1162;
  t1971 = var1[1] + t1134 + t1139 + t1150 + t1166 + t1970;
  t1773 = -0.144739*t1710;
  t1774 = -0.222216*t1748;
  t2001 = t118*t1136*t129;
  t2002 = t539*t1702;
  t2003 = t2001 + t2002;
  t2005 = 0.1*t2003;
  t1796 = -0.143037*t1710;
  t1798 = -0.217581*t1748;
  t1801 = -0.139922*t1710;
  t1803 = -0.21375*t1748;
  t1805 = -0.135731*t1710;
  t1807 = -0.211138*t1748;
  t1812 = -0.13092*t1710;
  t1816 = -0.210028*t1748;
  t1857 = -0.126009*t1710;
  t1858 = -0.210541*t1748;
  t1863 = -0.12153*t1710;
  t1865 = -0.21262*t1748;
  t1869 = -0.117969*t1710;
  t1870 = -0.216041*t1748;
  t1874 = -0.115712*t1710;
  t1875 = -0.220433*t1748;
  t1881 = -0.115003*t1710;
  t1883 = -0.22532*t1748;
  t1885 = -0.11592*t1710;
  t1886 = -0.230172*t1748;
  t1891 = -0.118362*t1710;
  t1894 = -0.234463*t1748;
  t1897 = -0.122065*t1710;
  t1899 = -0.237729*t1748;
  t1902 = -0.126628*t1710;
  t1905 = -0.239616*t1748;
  t1907 = -0.131557*t1710;
  t1910 = -0.239919*t1748;
  t1913 = -0.136317*t1710;
  t1915 = -0.238605*t1748;
  t1918 = -0.140392*t1710;
  t1921 = -0.235817*t1748;
  t1924 = -0.143341*t1710;
  t1925 = -0.231857*t1748;
  t2006 = var1[2] + t1669 + t1705 + t1726 + t1750 + t2005;
  p_output1[0]=t881;
  p_output1[1]=t521 + t553 + t894 + t901 + var1[0];
  p_output1[2]=t521 + t553 + t937 + t940 + var1[0];
  p_output1[3]=t521 + t553 + t944 + t945 + var1[0];
  p_output1[4]=t521 + t553 + t952 + t953 + var1[0];
  p_output1[5]=t521 + t553 + t956 + t961 + var1[0];
  p_output1[6]=t521 + t553 + t977 + t982 + var1[0];
  p_output1[7]=t521 + t553 + t988 + t993 + var1[0];
  p_output1[8]=t1014 + t1019 + t521 + t553 + var1[0];
  p_output1[9]=t1030 + t1034 + t521 + t553 + var1[0];
  p_output1[10]=t1036 + t1038 + t521 + t553 + var1[0];
  p_output1[11]=t1040 + t1042 + t521 + t553 + var1[0];
  p_output1[12]=t1044 + t1046 + t521 + t553 + var1[0];
  p_output1[13]=t1048 + t1050 + t521 + t553 + var1[0];
  p_output1[14]=t1060 + t1066 + t521 + t553 + var1[0];
  p_output1[15]=t1076 + t1082 + t521 + t553 + var1[0];
  p_output1[16]=t1093 + t1097 + t521 + t553 + var1[0];
  p_output1[17]=t1109 + t1113 + t521 + t553 + var1[0];
  p_output1[18]=t1121 + t1125 + t521 + t553 + var1[0];
  p_output1[19]=t881;
  p_output1[20]=t1170;
  p_output1[21]=t1134 + t1139 + t1174 + t1178 + var1[1];
  p_output1[22]=t1134 + t1139 + t1186 + t1190 + var1[1];
  p_output1[23]=t1134 + t1139 + t1198 + t1205 + var1[1];
  p_output1[24]=t1134 + t1139 + t1213 + t1217 + var1[1];
  p_output1[25]=t1134 + t1139 + t1223 + t1278 + var1[1];
  p_output1[26]=t1134 + t1139 + t1280 + t1330 + var1[1];
  p_output1[27]=t1134 + t1139 + t1336 + t1337 + var1[1];
  p_output1[28]=t1134 + t1139 + t1351 + t1356 + var1[1];
  p_output1[29]=t1134 + t1139 + t1366 + t1386 + var1[1];
  p_output1[30]=t1134 + t1139 + t1396 + t1407 + var1[1];
  p_output1[31]=t1134 + t1139 + t1438 + t1440 + var1[1];
  p_output1[32]=t1134 + t1139 + t1454 + t1457 + var1[1];
  p_output1[33]=t1134 + t1139 + t1519 + t1525 + var1[1];
  p_output1[34]=t1134 + t1139 + t1587 + t1595 + var1[1];
  p_output1[35]=t1134 + t1139 + t1622 + t1625 + var1[1];
  p_output1[36]=t1134 + t1139 + t1645 + t1652 + var1[1];
  p_output1[37]=t1134 + t1139 + t1655 + t1657 + var1[1];
  p_output1[38]=t1134 + t1139 + t1661 + t1666 + var1[1];
  p_output1[39]=t1170;
  p_output1[40]=t1752;
  p_output1[41]=t1669 + t1705 + t1773 + t1774 + var1[2];
  p_output1[42]=t1669 + t1705 + t1796 + t1798 + var1[2];
  p_output1[43]=t1669 + t1705 + t1801 + t1803 + var1[2];
  p_output1[44]=t1669 + t1705 + t1805 + t1807 + var1[2];
  p_output1[45]=t1669 + t1705 + t1812 + t1816 + var1[2];
  p_output1[46]=t1669 + t1705 + t1857 + t1858 + var1[2];
  p_output1[47]=t1669 + t1705 + t1863 + t1865 + var1[2];
  p_output1[48]=t1669 + t1705 + t1869 + t1870 + var1[2];
  p_output1[49]=t1669 + t1705 + t1874 + t1875 + var1[2];
  p_output1[50]=t1669 + t1705 + t1881 + t1883 + var1[2];
  p_output1[51]=t1669 + t1705 + t1885 + t1886 + var1[2];
  p_output1[52]=t1669 + t1705 + t1891 + t1894 + var1[2];
  p_output1[53]=t1669 + t1705 + t1897 + t1899 + var1[2];
  p_output1[54]=t1669 + t1705 + t1902 + t1905 + var1[2];
  p_output1[55]=t1669 + t1705 + t1907 + t1910 + var1[2];
  p_output1[56]=t1669 + t1705 + t1913 + t1915 + var1[2];
  p_output1[57]=t1669 + t1705 + t1918 + t1921 + var1[2];
  p_output1[58]=t1669 + t1705 + t1924 + t1925 + var1[2];
  p_output1[59]=t1752;
  p_output1[60]=t1932;
  p_output1[61]=t1931 + t521 + t553 + t894 + t901 + var1[0];
  p_output1[62]=t1931 + t521 + t553 + t937 + t940 + var1[0];
  p_output1[63]=t1931 + t521 + t553 + t944 + t945 + var1[0];
  p_output1[64]=t1931 + t521 + t553 + t952 + t953 + var1[0];
  p_output1[65]=t1931 + t521 + t553 + t956 + t961 + var1[0];
  p_output1[66]=t1931 + t521 + t553 + t977 + t982 + var1[0];
  p_output1[67]=t1931 + t521 + t553 + t988 + t993 + var1[0];
  p_output1[68]=t1014 + t1019 + t1931 + t521 + t553 + var1[0];
  p_output1[69]=t1030 + t1034 + t1931 + t521 + t553 + var1[0];
  p_output1[70]=t1036 + t1038 + t1931 + t521 + t553 + var1[0];
  p_output1[71]=t1040 + t1042 + t1931 + t521 + t553 + var1[0];
  p_output1[72]=t1044 + t1046 + t1931 + t521 + t553 + var1[0];
  p_output1[73]=t1048 + t1050 + t1931 + t521 + t553 + var1[0];
  p_output1[74]=t1060 + t1066 + t1931 + t521 + t553 + var1[0];
  p_output1[75]=t1076 + t1082 + t1931 + t521 + t553 + var1[0];
  p_output1[76]=t1093 + t1097 + t1931 + t521 + t553 + var1[0];
  p_output1[77]=t1109 + t1113 + t1931 + t521 + t553 + var1[0];
  p_output1[78]=t1121 + t1125 + t1931 + t521 + t553 + var1[0];
  p_output1[79]=t1932;
  p_output1[80]=t1971;
  p_output1[81]=t1134 + t1139 + t1174 + t1178 + t1970 + var1[1];
  p_output1[82]=t1134 + t1139 + t1186 + t1190 + t1970 + var1[1];
  p_output1[83]=t1134 + t1139 + t1198 + t1205 + t1970 + var1[1];
  p_output1[84]=t1134 + t1139 + t1213 + t1217 + t1970 + var1[1];
  p_output1[85]=t1134 + t1139 + t1223 + t1278 + t1970 + var1[1];
  p_output1[86]=t1134 + t1139 + t1280 + t1330 + t1970 + var1[1];
  p_output1[87]=t1134 + t1139 + t1336 + t1337 + t1970 + var1[1];
  p_output1[88]=t1134 + t1139 + t1351 + t1356 + t1970 + var1[1];
  p_output1[89]=t1134 + t1139 + t1366 + t1386 + t1970 + var1[1];
  p_output1[90]=t1134 + t1139 + t1396 + t1407 + t1970 + var1[1];
  p_output1[91]=t1134 + t1139 + t1438 + t1440 + t1970 + var1[1];
  p_output1[92]=t1134 + t1139 + t1454 + t1457 + t1970 + var1[1];
  p_output1[93]=t1134 + t1139 + t1519 + t1525 + t1970 + var1[1];
  p_output1[94]=t1134 + t1139 + t1587 + t1595 + t1970 + var1[1];
  p_output1[95]=t1134 + t1139 + t1622 + t1625 + t1970 + var1[1];
  p_output1[96]=t1134 + t1139 + t1645 + t1652 + t1970 + var1[1];
  p_output1[97]=t1134 + t1139 + t1655 + t1657 + t1970 + var1[1];
  p_output1[98]=t1134 + t1139 + t1661 + t1666 + t1970 + var1[1];
  p_output1[99]=t1971;
  p_output1[100]=t2006;
  p_output1[101]=t1669 + t1705 + t1773 + t1774 + t2005 + var1[2];
  p_output1[102]=t1669 + t1705 + t1796 + t1798 + t2005 + var1[2];
  p_output1[103]=t1669 + t1705 + t1801 + t1803 + t2005 + var1[2];
  p_output1[104]=t1669 + t1705 + t1805 + t1807 + t2005 + var1[2];
  p_output1[105]=t1669 + t1705 + t1812 + t1816 + t2005 + var1[2];
  p_output1[106]=t1669 + t1705 + t1857 + t1858 + t2005 + var1[2];
  p_output1[107]=t1669 + t1705 + t1863 + t1865 + t2005 + var1[2];
  p_output1[108]=t1669 + t1705 + t1869 + t1870 + t2005 + var1[2];
  p_output1[109]=t1669 + t1705 + t1874 + t1875 + t2005 + var1[2];
  p_output1[110]=t1669 + t1705 + t1881 + t1883 + t2005 + var1[2];
  p_output1[111]=t1669 + t1705 + t1885 + t1886 + t2005 + var1[2];
  p_output1[112]=t1669 + t1705 + t1891 + t1894 + t2005 + var1[2];
  p_output1[113]=t1669 + t1705 + t1897 + t1899 + t2005 + var1[2];
  p_output1[114]=t1669 + t1705 + t1902 + t1905 + t2005 + var1[2];
  p_output1[115]=t1669 + t1705 + t1907 + t1910 + t2005 + var1[2];
  p_output1[116]=t1669 + t1705 + t1913 + t1915 + t2005 + var1[2];
  p_output1[117]=t1669 + t1705 + t1918 + t1921 + t2005 + var1[2];
  p_output1[118]=t1669 + t1705 + t1924 + t1925 + t2005 + var1[2];
  p_output1[119]=t2006;
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

#include "Link_upper_leg_back_rightL_link_to_knee_back_rightL_link_bar.hh"

namespace SymFunction
{

void Link_upper_leg_back_rightL_link_to_knee_back_rightL_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
