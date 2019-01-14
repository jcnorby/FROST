/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:35 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t23465;
  double t23131;
  double t23324;
  double t23466;
  double t23591;
  double t23464;
  double t23467;
  double t23468;
  double t8313;
  double t23592;
  double t23597;
  double t23601;
  double t23630;
  double t2358;
  double t23701;
  double t23714;
  double t23609;
  double t23764;
  double t23765;
  double t23769;
  double t23758;
  double t23759;
  double t23760;
  double t23717;
  double t23719;
  double t23723;
  double t23727;
  double t23490;
  double t23628;
  double t23629;
  double t23632;
  double t23635;
  double t23636;
  double t23650;
  double t23651;
  double t23928;
  double t23934;
  double t23685;
  double t23686;
  double t23689;
  double t23944;
  double t23945;
  double t23946;
  double t23936;
  double t23938;
  double t23941;
  double t23942;
  double t23654;
  double t23668;
  double t23680;
  double t23684;
  double t23690;
  double t23693;
  double t24232;
  double t23770;
  double t23772;
  double t23773;
  double t23774;
  double t23775;
  double t23779;
  double t23780;
  double t23781;
  double t24576;
  double t24605;
  double t24614;
  double t24628;
  double t24404;
  double t24518;
  double t24522;
  double t23918;
  double t23921;
  double t23923;
  double t25115;
  double t25120;
  double t25130;
  double t24099;
  double t23977;
  double t23978;
  double t23979;
  double t23980;
  double t24109;
  double t24904;
  double t24936;
  double t25014;
  double t25364;
  double t25424;
  double t25454;
  double t25563;
  double t25656;
  double t25704;
  double t25866;
  double t25867;
  double t25946;
  double t25947;
  double t25949;
  double t27221;
  double t27246;
  double t27247;
  double t27248;
  double t27251;
  double t27254;
  double t27534;
  double t27536;
  double t27635;
  double t27294;
  double t27303;
  double t27308;
  double t27322;
  double t27874;
  double t27957;
  double t27963;
  double t27815;
  double t27851;
  double t27869;
  double t23700;
  double t23729;
  double t23743;
  double t23761;
  double t23763;
  double t23783;
  double t23860;
  double t23861;
  double t23862;
  double t23863;
  double t28125;
  double t28145;
  double t28168;
  double t28192;
  double t28196;
  double t24195;
  double t24257;
  double t24328;
  double t23927;
  double t23943;
  double t23947;
  double t23975;
  double t24528;
  double t24532;
  double t24662;
  double t24676;
  double t28248;
  double t28251;
  double t28272;
  double t28295;
  double t28300;
  double t28311;
  double t24706;
  double t24707;
  double t24709;
  double t24724;
  double t26281;
  double t26303;
  double t26318;
  double t25177;
  double t28520;
  double t28525;
  double t28535;
  double t28560;
  double t28563;
  double t28580;
  double t26199;
  double t26362;
  double t26363;
  double t26402;
  double t27255;
  double t27257;
  double t27271;
  double t27274;
  double t27279;
  double t27284;
  double t27285;
  double t27286;
  double t27783;
  double t27785;
  double t27802;
  double t27432;
  double t27646;
  double t27668;
  double t28895;
  double t28902;
  double t28930;
  double t28947;
  double t28864;
  double t28870;
  double t27870;
  double t27970;
  double t27981;
  double t27992;
  double t27996;
  double t28008;
  double t29088;
  double t29099;
  double t29117;
  double t29083;
  double t28245;
  double t29857;
  double t29883;
  double t29903;
  double t28415;
  double t28581;
  double t30051;
  double t30129;
  double t30133;
  double t30134;
  double t30158;
  double t30115;
  double t29912;
  double t29935;
  double t29942;
  double t29944;
  double t29957;
  double t29973;
  double t29981;
  double t28617;
  double t28620;
  double t28673;
  double t28674;
  double t28677;
  double t28678;
  double t28688;
  double t28694;
  double t28998;
  double t28849;
  double t28965;
  double t29014;
  double t29040;
  double t30639;
  double t31426;
  double t31434;
  double t31439;
  double t31442;
  double t31446;
  double t29055;
  double t31528;
  double t31530;
  double t31534;
  double t31506;
  double t31508;
  double t31509;
  double t29846;
  double t29856;
  double t29984;
  double t30105;
  double t30109;
  double t30111;
  double t30161;
  double t30208;
  double t31848;
  double t31849;
  double t31860;
  double t31872;
  double t31877;
  double t31880;
  double t30216;
  double t30268;
  double t30392;
  double t30415;
  double t30537;
  double t30550;
  double t30551;
  double t30552;
  double t30556;
  double t30560;
  double t30564;
  double t31504;
  double t31505;
  double t31527;
  double t31554;
  double t32016;
  double t32020;
  double t32023;
  double t32027;
  double t32029;
  double t32031;
  double t31574;
  double t31578;
  t23465 = Cos(var1[4]);
  t23131 = Cos(var1[5]);
  t23324 = Sin(var1[4]);
  t23466 = Sin(var1[5]);
  t23591 = Cos(var1[3]);
  t23464 = t23131*t23324;
  t23467 = t23465*t23466;
  t23468 = t23464 + t23467;
  t8313 = Sin(var1[3]);
  t23592 = t23465*t23131;
  t23597 = -1.*t23324*t23466;
  t23601 = t23592 + t23597;
  t23630 = Cos(var1[2]);
  t2358 = Sin(var1[2]);
  t23701 = -1.*t23131;
  t23714 = 1. + t23701;
  t23609 = t23591*t23601;
  t23764 = -1.*t23131*t23324;
  t23765 = -1.*t23465*t23466;
  t23769 = t23764 + t23765;
  t23758 = 0.8*t23714;
  t23759 = 1.04*t23131;
  t23760 = t23758 + t23759;
  t23717 = -0.15*t23714;
  t23719 = -0.15*t23131;
  t23723 = -0.24*t23466;
  t23727 = t23717 + t23719 + t23723;
  t23490 = -1.*t8313*t23468;
  t23628 = t23490 + t23609;
  t23629 = -1.*t2358*t23628;
  t23632 = t23591*t23468;
  t23635 = t8313*t23601;
  t23636 = t23632 + t23635;
  t23650 = t23630*t23636;
  t23651 = t23629 + t23650;
  t23928 = -1.*t23465;
  t23934 = 1. + t23928;
  t23685 = t23591*t23465;
  t23686 = -1.*t8313*t23324;
  t23689 = t23685 + t23686;
  t23944 = 0.4*t23934;
  t23945 = 0.69*t23465;
  t23946 = t23944 + t23945;
  t23936 = -0.15*t23934;
  t23938 = -0.15*t23465;
  t23941 = -0.29*t23324;
  t23942 = t23936 + t23938 + t23941;
  t23654 = t23465*t8313;
  t23668 = t23591*t23324;
  t23680 = t23654 + t23668;
  t23684 = t23630*t23680;
  t23690 = -1.*t2358*t23689;
  t23693 = t23684 + t23690;
  t24232 = 0.15*t23324;
  t23770 = t8313*t23769;
  t23772 = t23770 + t23609;
  t23773 = t23630*t23772;
  t23774 = t23591*t23769;
  t23775 = -1.*t8313*t23601;
  t23779 = t23774 + t23775;
  t23780 = -1.*t2358*t23779;
  t23781 = t23773 + t23780;
  t24576 = 0.4*t23324;
  t24605 = -1.*t23760*t23324;
  t24614 = t23465*t23727;
  t24628 = t23936 + t24576 + t24605 + t24614;
  t24404 = t23465*t23760;
  t24518 = t23324*t23727;
  t24522 = t23944 + t24404 + t24232 + t24518;
  t23918 = -1.*t23591*t2358;
  t23921 = t23630*t8313;
  t23923 = t23918 + t23921;
  t25115 = t23630*t23591;
  t25120 = t2358*t8313;
  t25130 = t25115 + t25120;
  t24099 = t23630*t23689;
  t23977 = -1.*t23465*t8313;
  t23978 = -1.*t23591*t23324;
  t23979 = t23977 + t23978;
  t23980 = -1.*t2358*t23979;
  t24109 = t23980 + t24099;
  t24904 = t23591*t2358;
  t24936 = -1.*t23630*t8313;
  t25014 = t24904 + t24936;
  t25364 = t2358*t23680;
  t25424 = t25364 + t24099;
  t25454 = t23630*t23979;
  t25563 = t2358*t23689;
  t25656 = t25454 + t25563;
  t25704 = t2358*t23772;
  t25866 = t23630*t23779;
  t25867 = t25704 + t25866;
  t25946 = t23630*t23628;
  t25947 = t2358*t23636;
  t25949 = t25946 + t25947;
  t27221 = -1.*t23591;
  t27246 = 1. + t27221;
  t27247 = -0.15*t27246;
  t27248 = -0.15*t23591;
  t27251 = -0.16*t8313;
  t27254 = t27247 + t27248 + t27251;
  t27534 = -1.*t23946*t8313;
  t27536 = t23591*t23942;
  t27635 = t27247 + t27534 + t27536;
  t27294 = t23591*t23946;
  t27303 = 0.15*t8313;
  t27308 = t8313*t23942;
  t27322 = t27294 + t27303 + t27308;
  t27874 = t23591*t24628;
  t27957 = -1.*t8313*t24522;
  t27963 = t27247 + t27874 + t27957;
  t27815 = t8313*t24628;
  t27851 = t23591*t24522;
  t27869 = t27303 + t27815 + t27851;
  t23700 = 0.15*t23131;
  t23729 = t23131*t23727;
  t23743 = -0.4*t23466;
  t23761 = t23760*t23466;
  t23763 = t23700 + t23729 + t23743 + t23761;
  t23783 = 0.4*t23131;
  t23860 = -1.*t23131*t23760;
  t23861 = 0.15*t23466;
  t23862 = t23727*t23466;
  t23863 = t23783 + t23860 + t23861 + t23862;
  t28125 = t2358*t23628;
  t28145 = -1.*t23591*t23468;
  t28168 = t28145 + t23775;
  t28192 = t23630*t28168;
  t28196 = t28125 + t28192;
  t24195 = -1.*t23946*t23465;
  t24257 = t23942*t23324;
  t24328 = t24195 + t24232 + t24257;
  t23927 = 0.15*t23465;
  t23943 = t23465*t23942;
  t23947 = t23946*t23324;
  t23975 = t23927 + t23943 + t23947;
  t24528 = t24522*t23468;
  t24532 = 0.15*t23601;
  t24662 = t24628*t23601;
  t24676 = t24528 + t24532 + t24662;
  t28248 = -1.*t8313*t23769;
  t28251 = -1.*t23591*t23601;
  t28272 = t28248 + t28251;
  t28295 = t23630*t28272;
  t28300 = t2358*t23779;
  t28311 = t28295 + t28300;
  t24706 = -1.*t24628*t23769;
  t24707 = 0.15*t23468;
  t24709 = -1.*t24522*t23601;
  t24724 = t24706 + t24707 + t24709;
  t26281 = -1.*t23630*t23591;
  t26303 = -1.*t2358*t8313;
  t26318 = t26281 + t26303;
  t25177 = -12.8*t25014*t25130;
  t28520 = t2358*t23979;
  t28525 = -1.*t23591*t23465;
  t28535 = t8313*t23324;
  t28560 = t28525 + t28535;
  t28563 = t23630*t28560;
  t28580 = t28520 + t28563;
  t26199 = -6.4*t25014*t23923;
  t26362 = -6.4*t26318*t25130;
  t26363 = Power(t25130,2);
  t26402 = -6.4*t26363;
  t27255 = -1.*t23591*t27254;
  t27257 = -0.16*t23591*t8313;
  t27271 = t27255 + t27257;
  t27274 = -6.4*t27271*t25130;
  t27279 = Power(t23591,2);
  t27284 = 0.16*t27279;
  t27285 = -1.*t27254*t8313;
  t27286 = t27284 + t27285;
  t27783 = t27635*t23979;
  t27785 = t27322*t23689;
  t27802 = t27783 + t27785;
  t27432 = -1.*t27322*t23680;
  t27646 = -1.*t27635*t23689;
  t27668 = t27432 + t27646;
  t28895 = -1.*t23591*t23946;
  t28902 = -0.15*t8313;
  t28930 = -1.*t8313*t23942;
  t28947 = t28895 + t28902 + t28930;
  t28864 = 0.15*t23591;
  t28870 = t28864 + t27534 + t27536;
  t27870 = t27869*t23772;
  t27970 = t27963*t23779;
  t27981 = t27870 + t27970;
  t27992 = -1.*t27963*t23628;
  t27996 = -1.*t27869*t23636;
  t28008 = t27992 + t27996;
  t29088 = -1.*t8313*t24628;
  t29099 = -1.*t23591*t24522;
  t29117 = t28902 + t29088 + t29099;
  t29083 = t28864 + t27874 + t27957;
  t28245 = 3.944*t25656;
  t29857 = -1.*t23465*t23131;
  t29883 = t23324*t23466;
  t29903 = t29857 + t29883;
  t28415 = -13.6*t24328*t25656;
  t28581 = -13.6*t23975*t28580;
  t30051 = -0.15*t23324;
  t30129 = 0.4*t23465;
  t30133 = -1.*t23465*t23760;
  t30134 = -1.*t23324*t23727;
  t30158 = t30129 + t30133 + t30051 + t30134;
  t30115 = t23927 + t24576 + t24605 + t24614;
  t29912 = t23591*t29903;
  t29935 = t28248 + t29912;
  t29942 = t23630*t29935;
  t29944 = t8313*t29903;
  t29957 = t23774 + t29944;
  t29973 = t2358*t29957;
  t29981 = t29942 + t29973;
  t28617 = -27.2*t25424*t25656;
  t28620 = -27.2*t25656*t28580;
  t28673 = -13.6*t24109*t25424;
  t28674 = -13.6*t23693*t25656;
  t28677 = -13.6*t24109*t28580;
  t28678 = -1.*t2358*t28560;
  t28688 = t25454 + t28678;
  t28694 = -13.6*t25656*t28688;
  t28998 = -13.6*t25656*t27802;
  t28849 = -1.*t27635*t23979;
  t28965 = -1.*t27322*t23689;
  t29014 = -13.6*t27668*t28580;
  t29040 = t27322*t23979;
  t30639 = -0.29*t23465*t8313;
  t31426 = -0.29*t23591*t23324;
  t31434 = t30639 + t31426;
  t31439 = -0.29*t23591*t23465;
  t31442 = 0.29*t8313*t23324;
  t31446 = t31439 + t31442;
  t29055 = t27635*t28560;
  t31528 = t23591*t30115;
  t31530 = t8313*t30158;
  t31534 = t31528 + t31530;
  t31506 = -1.*t8313*t30115;
  t31508 = t23591*t30158;
  t31509 = t31506 + t31508;
  t29846 = -1.44*var2[5]*t25867;
  t29856 = -12.*t23863*t25867;
  t29984 = -12.*t23763*t29981;
  t30105 = -12.*t24724*t25867;
  t30109 = 0.15*t23769;
  t30111 = t24628*t23769;
  t30161 = t24522*t23601;
  t30208 = -1.*t24522*t23769;
  t31848 = -0.24*t23131*t23324;
  t31849 = -0.24*t23465*t23466;
  t31860 = t31848 + t31849;
  t31872 = -0.24*t23465*t23131;
  t31877 = 0.24*t23324*t23466;
  t31880 = t31872 + t31877;
  t30216 = -1.*t24628*t29903;
  t30268 = -12.*t24676*t29981;
  t30392 = -24.*t25867*t25949;
  t30415 = -24.*t25867*t29981;
  t30537 = -12.*t25867*t23651;
  t30550 = -12.*t23781*t25949;
  t30551 = -1.*t2358*t29935;
  t30552 = t23630*t29957;
  t30556 = t30551 + t30552;
  t30560 = -12.*t25867*t30556;
  t30564 = -12.*t23781*t29981;
  t31504 = -12.*t25867*t27981;
  t31505 = -1.*t27869*t23772;
  t31527 = -1.*t27963*t23779;
  t31554 = -12.*t28008*t29981;
  t32016 = -1.*t8313*t31860;
  t32020 = t23591*t31880;
  t32023 = t32016 + t32020;
  t32027 = t23591*t31860;
  t32029 = t8313*t31880;
  t32031 = t32027 + t32029;
  t31574 = t27963*t29935;
  t31578 = t27869*t29957;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(-12.8*t23923*t25130 + t25177 - 27.2*t23693*t25424 - 27.2*t24109*t25656 - 24.*t23781*t25867 - 24.*t23651*t25949)*var2[0] - 0.5*(-12.*Power(t23651,2) - 13.6*Power(t23693,2) - 12.*Power(t23781,2) - 6.4*Power(t23923,2) - 13.6*Power(t24109,2) - 13.6*(-1.*t2358*t23680 - 1.*t23630*t23689)*t25424 - 13.6*(t23690 - 1.*t23630*t23979)*t25656 - 12.*(-1.*t2358*t23772 - 1.*t23630*t23779)*t25867 - 12.*(-1.*t23628*t23630 - 1.*t2358*t23636)*t25949 + t26199 + t26362 + t26402)*var2[1] - 0.5*(-0.048*t23630 + t27274 - 6.4*t23923*t27286 - 13.6*t24109*t27668 - 13.6*t23693*t27802 - 12.*t23651*t27981 - 12.*t23781*t28008)*var2[2] - 0.5*(1.024*t23923 - 13.6*t23975*t24109 - 13.6*t23693*t24328 - 12.*t23781*t24676 - 12.*t23651*t24724)*var2[3] - 0.5*(3.944*t23693 - 12.*t23763*t23781 - 12.*t23651*t23863)*var2[4] - 1.44*t23651*var2[5]);
  p_output1[3]=var2[0]*(-0.5*(t25177 - 12.8*t25014*t26318 - 24.*t25949*t28196 - 24.*t25867*t28311 + t28617 + t28620)*var2[0] - 0.5*(-6.4*Power(t25014,2) + t26199 + t26362 + t26402 - 12.*t25949*(t25946 - 1.*t2358*t28168) - 12.*t23651*t28196 - 12.*t25867*(t25866 - 1.*t2358*t28272) - 12.*t23781*t28311 + t28673 + t28674 + t28677 + t28694)*var2[1] - 0.5*(-6.4*t26318*t27271 + t27274 - 6.4*t25014*t27286 - 12.*t27981*t28196 - 12.*t28008*t28311 - 13.6*t25656*(t28849 - 1.*t23680*t28870 - 1.*t23689*t28947 + t28965) + t28998 + t29014 - 13.6*t25424*(t23689*t28870 + t23979*t28947 + t29040 + t29055) - 12.*t25867*(-1.*t23628*t27869 - 1.*t27963*t28168 - 1.*t23636*t29083 - 1.*t23628*t29117) - 12.*t25949*(t23779*t27869 + t27963*t28272 + t23772*t29083 + t23779*t29117) - 6.4*t25014*(t27254*t8313 + 0.16*Power(t8313,2)))*var2[2] - 0.5*(1.024*t25014 - 12.*t24724*t28196 - 12.*t24676*t28311 + t28415 + t28581)*var2[3] - 0.5*(-12.*t23863*t28196 + t28245 - 12.*t23763*t28311)*var2[4] - 1.44*t28196*var2[5]);
  p_output1[4]=var2[0]*(t29846 - 0.5*(t28617 + t28620 + t30392 + t30415)*var2[0] - 0.5*(t28673 + t28674 + t28677 + t28694 + t30537 + t30550 + t30560 + t30564)*var2[1] - 0.5*(t28998 + t29014 - 13.6*t25656*(t28849 + t28965 - 1.*t23680*t31434 - 1.*t23689*t31446) - 13.6*t25424*(t29040 + t29055 + t23689*t31434 + t23979*t31446) + t31504 - 12.*t25867*(t31505 - 1.*t23628*t31509 + t31527 - 1.*t23636*t31534) + t31554 - 12.*t25949*(t23779*t31509 + t23772*t31534 + t31574 + t31578))*var2[2] - 0.5*(-13.6*t23975*t25424 + t28415 + t28581 - 13.6*t25656*(-0.29*Power(t23324,2) - 0.29*Power(t23465,2) - 1.*t23324*t23942 + t23465*t23946 + t30051) + t30105 - 12.*t25867*(t30109 + t30111 + t23468*t30115 + t23601*t30158 + t30161) - 12.*t25949*(t24532 - 1.*t23601*t30115 - 1.*t23769*t30158 + t30208 + t30216) + t30268)*var2[3] - 0.5*(t28245 + t29856 + t29984)*var2[4]);
  p_output1[5]=var2[0]*(t29846 - 0.5*(t30392 + t30415)*var2[0] - 0.5*(t30537 + t30550 + t30560 + t30564)*var2[1] - 0.5*(t31504 + t31554 - 12.*t25867*(t31505 + t31527 - 1.*t23628*t32023 - 1.*t23636*t32031) - 12.*t25949*(t31574 + t31578 + t23779*t32023 + t23772*t32031))*var2[2] - 0.5*(t30105 + t30268 - 12.*t25867*(t30109 + t30111 + t30161 + t23468*t31860 + t23601*t31880) - 12.*t25949*(t24532 + t30208 + t30216 - 1.*t23601*t31860 - 1.*t23769*t31880))*var2[3] - 0.5*(-12.*(-0.4*t23131 - 0.24*Power(t23131,2) - 0.15*t23466 - 0.24*Power(t23466,2) - 1.*t23466*t23727 + t23131*t23760)*t25867 - 12.*t23763*t25949 + t29856 + t29984)*var2[4]);
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec1_acrobot.hh"

namespace SymFunction
{

void Ce3_vec1_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
