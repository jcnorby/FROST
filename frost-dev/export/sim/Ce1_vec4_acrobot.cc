/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:26 GMT-05:00
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
  double t6136;
  double t6150;
  double t6272;
  double t24514;
  double t2745;
  double t3750;
  double t734;
  double t2592;
  double t27112;
  double t27398;
  double t27647;
  double t28942;
  double t7220;
  double t14793;
  double t17781;
  double t30271;
  double t31142;
  double t31143;
  double t63947;
  double t26451;
  double t63948;
  double t63973;
  double t64009;
  double t63974;
  double t63976;
  double t64003;
  double t64006;
  double t64008;
  double t64028;
  double t64033;
  double t64145;
  double t64178;
  double t64184;
  double t64202;
  double t64208;
  double t64209;
  double t64187;
  double t64188;
  double t64189;
  double t64193;
  double t64068;
  double t64107;
  double t64137;
  double t64005;
  double t64036;
  double t64055;
  double t64220;
  double t48390;
  double t48410;
  double t51004;
  double t63686;
  double t33180;
  double t33258;
  double t33337;
  double t23305;
  double t29543;
  double t30052;
  double t64138;
  double t64185;
  double t64195;
  double t64200;
  double t64239;
  double t64219;
  double t64221;
  double t64229;
  double t64231;
  double t64232;
  double t64233;
  double t64236;
  double t64247;
  double t64297;
  double t64298;
  double t64299;
  double t64285;
  double t31670;
  double t33345;
  double t46427;
  double t48387;
  double t63756;
  double t63758;
  double t63759;
  double t63767;
  double t63838;
  double t63843;
  double t63888;
  double t64308;
  double t64311;
  double t64348;
  double t64384;
  double t64386;
  double t64388;
  double t64402;
  double t64404;
  double t64405;
  double t64406;
  double t64400;
  double t64320;
  double t64323;
  double t64324;
  double t64210;
  double t64440;
  double t64445;
  double t64449;
  double t64391;
  double t64393;
  double t64395;
  double t64418;
  double t64436;
  double t64496;
  double t64510;
  double t64511;
  double t64514;
  double t64516;
  double t64517;
  double t64450;
  double t64459;
  double t64460;
  double t64463;
  double t64466;
  double t64470;
  double t64471;
  double t64472;
  double t64474;
  double t64477;
  double t64481;
  double t64483;
  double t64282;
  double t64295;
  double t64214;
  double t64216;
  double t64258;
  double t64259;
  double t64301;
  double t64544;
  double t64336;
  double t64337;
  double t64338;
  double t64357;
  double t64368;
  double t64375;
  double t64381;
  double t64300;
  double t64306;
  double t64545;
  double t64546;
  double t64548;
  double t64314;
  double t64316;
  double t64317;
  double t64401;
  double t64408;
  double t64421;
  double t64431;
  double t64438;
  double t64452;
  double t64319;
  double t64325;
  double t64326;
  double t64596;
  double t64513;
  double t64518;
  double t64519;
  double t64522;
  double t64526;
  double t64528;
  double t64601;
  double t64602;
  double t64604;
  double t64606;
  double t64622;
  double t64623;
  double t64624;
  double t64646;
  double t64647;
  double t64662;
  double t64663;
  double t64668;
  double t64669;
  double t64672;
  double t64673;
  double t64674;
  double t64675;
  double t64654;
  double t64656;
  double t64649;
  double t64698;
  double t64699;
  double t64712;
  double t64717;
  double t64718;
  double t64723;
  double t64724;
  double t64725;
  double t64701;
  double t64708;
  double t64650;
  double t64677;
  double t64689;
  double t64770;
  double t64771;
  double t64772;
  double t64776;
  double t64777;
  double t64778;
  double t64695;
  double t64821;
  double t64822;
  double t64824;
  double t64808;
  double t64809;
  double t64810;
  double t64792;
  double t64798;
  double t64800;
  double t64837;
  double t64840;
  double t64841;
  double t64807;
  double t64817;
  double t64867;
  double t64870;
  double t64871;
  double t64876;
  double t64878;
  double t64881;
  double t64854;
  double t64856;
  double t64933;
  double t64937;
  double t64938;
  double t64939;
  double t64943;
  double t64949;
  double t64950;
  double t64951;
  double t64952;
  double t64953;
  t6136 = Cos(var1[4]);
  t6150 = -1.*t6136;
  t6272 = 1. + t6150;
  t24514 = Sin(var1[4]);
  t2745 = Cos(var1[2]);
  t3750 = Sin(var1[3]);
  t734 = Cos(var1[3]);
  t2592 = Sin(var1[2]);
  t27112 = -0.15*t6272;
  t27398 = -0.15*t6136;
  t27647 = -0.29*t24514;
  t28942 = t27112 + t27398 + t27647;
  t7220 = 0.4*t6272;
  t14793 = 0.69*t6136;
  t17781 = t7220 + t14793;
  t30271 = -1.*t6136*t3750;
  t31142 = -1.*t734*t24514;
  t31143 = t30271 + t31142;
  t63947 = Cos(var1[5]);
  t26451 = 0.15*t24514;
  t63948 = -1.*t63947;
  t63973 = 1. + t63948;
  t64009 = Sin(var1[5]);
  t63974 = 0.8*t63973;
  t63976 = 1.04*t63947;
  t64003 = t63974 + t63976;
  t64006 = -0.15*t63973;
  t64008 = -0.15*t63947;
  t64028 = -0.24*t64009;
  t64033 = t64006 + t64008 + t64028;
  t64145 = t6136*t63947;
  t64178 = -1.*t24514*t64009;
  t64184 = t64145 + t64178;
  t64202 = -1.*t63947*t24514;
  t64208 = -1.*t6136*t64009;
  t64209 = t64202 + t64208;
  t64187 = 0.4*t24514;
  t64188 = -1.*t64003*t24514;
  t64189 = t6136*t64033;
  t64193 = t27112 + t64187 + t64188 + t64189;
  t64068 = t63947*t24514;
  t64107 = t6136*t64009;
  t64137 = t64068 + t64107;
  t64005 = t6136*t64003;
  t64036 = t24514*t64033;
  t64055 = t7220 + t64005 + t26451 + t64036;
  t64220 = -1.*t3750*t64184;
  t48390 = 0.15*t6136;
  t48410 = t6136*t28942;
  t51004 = t17781*t24514;
  t63686 = t48390 + t48410 + t51004;
  t33180 = t734*t6136;
  t33258 = -1.*t3750*t24514;
  t33337 = t33180 + t33258;
  t23305 = -1.*t17781*t6136;
  t29543 = t28942*t24514;
  t30052 = t23305 + t26451 + t29543;
  t64138 = t64055*t64137;
  t64185 = 0.15*t64184;
  t64195 = t64193*t64184;
  t64200 = t64138 + t64185 + t64195;
  t64239 = t734*t64184;
  t64219 = t734*t64209;
  t64221 = t64219 + t64220;
  t64229 = -1.*t64193*t64209;
  t64231 = 0.15*t64137;
  t64232 = -1.*t64055*t64184;
  t64233 = t64229 + t64231 + t64232;
  t64236 = -1.*t3750*t64137;
  t64247 = t64236 + t64239;
  t64297 = t6136*t3750;
  t64298 = t734*t24514;
  t64299 = t64297 + t64298;
  t64285 = t2745*t33337;
  t31670 = t2745*t31143;
  t33345 = t2592*t33337;
  t46427 = t31670 + t33345;
  t48387 = 13.6*t30052*t46427;
  t63756 = t2592*t31143;
  t63758 = -1.*t734*t6136;
  t63759 = t3750*t24514;
  t63767 = t63758 + t63759;
  t63838 = t2745*t63767;
  t63843 = t63756 + t63838;
  t63888 = 13.6*t63686*t63843;
  t64308 = t3750*t64209;
  t64311 = t64308 + t64239;
  t64348 = -0.15*t24514;
  t64384 = t2592*t64311;
  t64386 = t2745*t64221;
  t64388 = t64384 + t64386;
  t64402 = 0.4*t6136;
  t64404 = -1.*t6136*t64003;
  t64405 = -1.*t24514*t64033;
  t64406 = t64402 + t64404 + t64348 + t64405;
  t64400 = t48390 + t64187 + t64188 + t64189;
  t64320 = t734*t64137;
  t64323 = t3750*t64184;
  t64324 = t64320 + t64323;
  t64210 = -1.*t3750*t64209;
  t64440 = -1.*t6136*t63947;
  t64445 = t24514*t64009;
  t64449 = t64440 + t64445;
  t64391 = 12.*t64233*t64388;
  t64393 = 0.15*t64209;
  t64395 = t64193*t64209;
  t64418 = t64055*t64184;
  t64436 = -1.*t64055*t64209;
  t64496 = -0.24*t63947*t24514;
  t64510 = -0.24*t6136*t64009;
  t64511 = t64496 + t64510;
  t64514 = -0.24*t6136*t63947;
  t64516 = 0.24*t24514*t64009;
  t64517 = t64514 + t64516;
  t64450 = -1.*t64193*t64449;
  t64459 = t2745*t64247;
  t64460 = t2592*t64324;
  t64463 = t64459 + t64460;
  t64466 = t734*t64449;
  t64470 = t64210 + t64466;
  t64471 = t2745*t64470;
  t64472 = t3750*t64449;
  t64474 = t64219 + t64472;
  t64477 = t2592*t64474;
  t64481 = t64471 + t64477;
  t64483 = 12.*t64200*t64481;
  t64282 = -1.*t2592*t31143;
  t64295 = t64282 + t64285;
  t64214 = -1.*t734*t64184;
  t64216 = t64210 + t64214;
  t64258 = -1.*t734*t64137;
  t64259 = t64258 + t64220;
  t64301 = -1.*t2592*t33337;
  t64544 = 13.6*t30052*t64295;
  t64336 = t17781*t6136;
  t64337 = Power(t6136,2);
  t64338 = -0.29*t64337;
  t64357 = -1.*t28942*t24514;
  t64368 = Power(t24514,2);
  t64375 = -0.29*t64368;
  t64381 = t64336 + t64338 + t64348 + t64357 + t64375;
  t64300 = t2745*t64299;
  t64306 = t64300 + t64301;
  t64545 = -1.*t2592*t63767;
  t64546 = t31670 + t64545;
  t64548 = 13.6*t63686*t64546;
  t64314 = t2745*t64311;
  t64316 = -1.*t2592*t64221;
  t64317 = t64314 + t64316;
  t64401 = t64400*t64137;
  t64408 = t64406*t64184;
  t64421 = t64393 + t64395 + t64401 + t64408 + t64418;
  t64431 = -1.*t64406*t64209;
  t64438 = -1.*t64400*t64184;
  t64452 = t64431 + t64436 + t64185 + t64438 + t64450;
  t64319 = -1.*t2592*t64247;
  t64325 = t2745*t64324;
  t64326 = t64319 + t64325;
  t64596 = 12.*t64233*t64317;
  t64513 = t64511*t64137;
  t64518 = t64184*t64517;
  t64519 = t64393 + t64395 + t64513 + t64418 + t64518;
  t64522 = -1.*t64511*t64184;
  t64526 = -1.*t64209*t64517;
  t64528 = t64436 + t64185 + t64522 + t64526 + t64450;
  t64601 = -1.*t2592*t64470;
  t64602 = t2745*t64474;
  t64604 = t64601 + t64602;
  t64606 = 12.*t64200*t64604;
  t64622 = -1.*t734;
  t64623 = 1. + t64622;
  t64624 = -0.15*t64623;
  t64646 = -1.*t17781*t3750;
  t64647 = t734*t28942;
  t64662 = -1.*t734*t17781;
  t64663 = -0.15*t3750;
  t64668 = -1.*t3750*t28942;
  t64669 = t64662 + t64663 + t64668;
  t64672 = t734*t17781;
  t64673 = 0.15*t3750;
  t64674 = t3750*t28942;
  t64675 = t64672 + t64673 + t64674;
  t64654 = 0.15*t734;
  t64656 = t64654 + t64646 + t64647;
  t64649 = t64624 + t64646 + t64647;
  t64698 = t734*t64193;
  t64699 = -1.*t3750*t64055;
  t64712 = -1.*t3750*t64193;
  t64717 = -1.*t734*t64055;
  t64718 = t64663 + t64712 + t64717;
  t64723 = t3750*t64193;
  t64724 = t734*t64055;
  t64725 = t64673 + t64723 + t64724;
  t64701 = t64624 + t64698 + t64699;
  t64708 = t64654 + t64698 + t64699;
  t64650 = -1.*t64649*t31143;
  t64677 = -1.*t64675*t33337;
  t64689 = t64675*t31143;
  t64770 = -0.29*t6136*t3750;
  t64771 = -0.29*t734*t24514;
  t64772 = t64770 + t64771;
  t64776 = -0.29*t734*t6136;
  t64777 = 0.29*t3750*t24514;
  t64778 = t64776 + t64777;
  t64695 = t64649*t63767;
  t64821 = t734*t64400;
  t64822 = t3750*t64406;
  t64824 = t64821 + t64822;
  t64808 = -1.*t3750*t64400;
  t64809 = t734*t64406;
  t64810 = t64808 + t64809;
  t64792 = t64725*t64311;
  t64798 = t64701*t64221;
  t64800 = t64792 + t64798;
  t64837 = -1.*t64701*t64247;
  t64840 = -1.*t64725*t64324;
  t64841 = t64837 + t64840;
  t64807 = -1.*t64725*t64311;
  t64817 = -1.*t64701*t64221;
  t64867 = -1.*t3750*t64511;
  t64870 = t734*t64517;
  t64871 = t64867 + t64870;
  t64876 = t734*t64511;
  t64878 = t3750*t64517;
  t64881 = t64876 + t64878;
  t64854 = t64701*t64470;
  t64856 = t64725*t64474;
  t64933 = 0.15*t63947;
  t64937 = t63947*t64033;
  t64938 = -0.4*t64009;
  t64939 = t64003*t64009;
  t64943 = t64933 + t64937 + t64938 + t64939;
  t64949 = 0.4*t63947;
  t64950 = -1.*t63947*t64003;
  t64951 = 0.15*t64009;
  t64952 = t64033*t64009;
  t64953 = t64949 + t64950 + t64951 + t64952;
  p_output1[0]=var2[3]*(-0.5*(13.6*t63686*t64295 + 13.6*t30052*t64306 + 12.*t64200*t64317 + 12.*t64233*t64326 - 1.024*(t2745*t3750 - 1.*t2592*t734))*var2[2] - 0.5*(t48387 + t63888 + 12.*t64200*(t2745*t64216 + t2592*t64221) + 12.*t64233*(t2592*t64247 + t2745*t64259) - 1.024*(-1.*t2745*t3750 + t2592*t734))*var2[3] - 0.5*(t48387 + t63888 + 13.6*t63686*(t64285 + t2592*t64299) + 13.6*t46427*t64381 + t64391 + 12.*t64388*t64421 + 12.*t64452*t64463 + t64483)*var2[4] - 0.5*(t64391 + t64483 + 12.*t64388*t64519 + 12.*t64463*t64528)*var2[5]);
  p_output1[1]=var2[3]*(-0.5*(13.6*t30052*(-1.*t2745*t33337 - 1.*t2592*t64299) + 13.6*t63686*(-1.*t2745*t31143 + t64301) + 12.*t64200*(-1.*t2745*t64221 - 1.*t2592*t64311) + 12.*t64233*(-1.*t2745*t64247 - 1.*t2592*t64324) - 1.024*(-1.*t2592*t3750 - 1.*t2745*t734))*var2[2] - 0.5*(12.*t64200*(-1.*t2592*t64216 + t64386) + 12.*t64233*(-1.*t2592*t64259 + t64459) + t64544 + t64548 - 1.024*(t2592*t3750 + t2745*t734))*var2[3] - 0.5*(13.6*t63686*t64306 + 13.6*t64295*t64381 + 12.*t64317*t64421 + 12.*t64326*t64452 + t64544 + t64548 + t64596 + t64606)*var2[4] - 0.5*(12.*t64317*t64519 + 12.*t64326*t64528 + t64596 + t64606)*var2[5]);
  p_output1[2]=var2[3]*(-0.5*(13.6*t63686*(t64650 - 1.*t64299*t64656 - 1.*t33337*t64669 + t64677) + 13.6*t30052*(t33337*t64656 + t31143*t64669 + t64689 + t64695) + 12.*t64233*(t64216*t64701 + t64311*t64708 + t64221*t64718 + t64221*t64725) + 12.*t64200*(-1.*t64259*t64701 - 1.*t64324*t64708 - 1.*t64247*t64718 - 1.*t64247*t64725) - 1.024*(-0.16*t3750*t734 - 1.*(-0.16*t3750 + t64624 - 0.15*t734)*t734))*var2[3] - 0.5*(13.6*t63686*(t31143*t64649 + t33337*t64675) + 13.6*t64381*(-1.*t33337*t64649 - 1.*t64299*t64675) + 13.6*t30052*(t64689 + t64695 + t33337*t64772 + t31143*t64778) + 13.6*t63686*(t64650 + t64677 - 1.*t64299*t64772 - 1.*t33337*t64778) + 12.*t64452*t64800 + 12.*t64200*(t64807 - 1.*t64247*t64810 + t64817 - 1.*t64324*t64824) + 12.*t64421*t64841 + 12.*t64233*(t64221*t64810 + t64311*t64824 + t64854 + t64856))*var2[4] - 0.5*(12.*t64528*t64800 + 12.*t64519*t64841 + 12.*t64233*(t64854 + t64856 + t64221*t64871 + t64311*t64881) + 12.*t64200*(t64807 + t64817 - 1.*t64247*t64871 - 1.*t64324*t64881))*var2[5]);
  p_output1[3]=var2[3]*(-0.5*(27.2*t30052*t63686 + 27.2*t63686*t64381 + 24.*t64200*t64421 + 24.*t64233*t64452)*var2[4] - 0.5*(24.*t64200*t64519 + 24.*t64233*t64528)*var2[5]);
  p_output1[4]=var2[3]*(-0.5*(-3.944*t63686 + 12.*t64421*t64943 + 12.*t64452*t64953)*var2[4] - 0.5*(12.*(-0.4*t63947 - 0.24*Power(t63947,2) + t63947*t64003 - 0.15*t64009 - 0.24*Power(t64009,2) - 1.*t64009*t64033)*t64200 + 12.*t64233*t64943 + 12.*t64519*t64943 + 12.*t64528*t64953)*var2[5]);
  p_output1[5]=var2[3]*(1.44*t64452*var2[4] + 1.44*t64528*var2[5]);
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

#include "Ce1_vec4_acrobot.hh"

namespace SymFunction
{

void Ce1_vec4_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
