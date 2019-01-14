/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:40 GMT-05:00
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
  double t10049;
  double t5281;
  double t8432;
  double t11732;
  double t36719;
  double t36976;
  double t36827;
  double t36836;
  double t2703;
  double t27064;
  double t37303;
  double t37310;
  double t37315;
  double t37702;
  double t37783;
  double t37785;
  double t37216;
  double t37241;
  double t37263;
  double t36859;
  double t36888;
  double t37118;
  double t37153;
  double t37799;
  double t38315;
  double t38416;
  double t38420;
  double t9580;
  double t18003;
  double t22379;
  double t29900;
  double t31804;
  double t32304;
  double t36740;
  double t37198;
  double t37209;
  double t37277;
  double t37291;
  double t37698;
  double t37812;
  double t37875;
  double t37880;
  double t37900;
  double t38284;
  double t38288;
  double t38290;
  double t38294;
  double t38307;
  double t38449;
  double t38478;
  double t38509;
  double t38571;
  double t39035;
  double t56166;
  double t56965;
  double t57019;
  double t57806;
  double t57818;
  double t57819;
  double t57841;
  double t57966;
  double t58489;
  double t58511;
  double t58513;
  double t58619;
  double t58622;
  double t58645;
  double t58754;
  double t58775;
  double t58784;
  double t64750;
  double t64786;
  double t64862;
  double t64888;
  double t64902;
  double t64687;
  double t65079;
  double t65080;
  double t65084;
  double t65092;
  double t65094;
  double t65096;
  double t65100;
  double t65101;
  double t65200;
  double t65201;
  double t58629;
  double t64540;
  double t65206;
  double t65210;
  double t65220;
  double t65224;
  double t65227;
  double t65235;
  double t65202;
  double t65204;
  double t65254;
  double t65305;
  double t65306;
  double t65307;
  double t65308;
  double t65309;
  double t65303;
  double t58108;
  double t58164;
  double t58178;
  double t58182;
  double t37874;
  double t37901;
  double t37902;
  double t65327;
  double t65328;
  double t65329;
  double t57026;
  double t57127;
  double t57666;
  double t57742;
  double t58198;
  double t65339;
  double t65340;
  double t65342;
  double t65344;
  double t64537;
  double t64542;
  double t64543;
  double t64582;
  double t64923;
  double t64989;
  double t65012;
  double t65029;
  double t65031;
  double t65388;
  double t65389;
  double t65390;
  double t65381;
  double t65382;
  double t65383;
  double t65410;
  double t65411;
  double t65412;
  double t65414;
  double t65415;
  double t65417;
  double t65419;
  double t65420;
  double t65421;
  double t65324;
  double t65280;
  double t65281;
  double t65311;
  double t65321;
  double t65439;
  double t65441;
  double t65442;
  double t65445;
  double t65447;
  double t65448;
  double t65330;
  double t65337;
  double t38508;
  double t48015;
  double t48247;
  double t65341;
  double t65347;
  double t65349;
  double t65350;
  double t65353;
  double t65355;
  double t65356;
  double t58334;
  double t65357;
  double t65358;
  double t65359;
  double t65362;
  double t65380;
  double t65385;
  double t65484;
  double t65486;
  double t65488;
  double t65491;
  double t65492;
  double t65493;
  double t65397;
  double t65398;
  t10049 = Cos(var1[3]);
  t5281 = Cos(var1[4]);
  t8432 = Sin(var1[3]);
  t11732 = Sin(var1[4]);
  t36719 = Cos(var1[5]);
  t36976 = Sin(var1[5]);
  t36827 = -1.*t36719;
  t36836 = 1. + t36827;
  t2703 = Cos(var1[2]);
  t27064 = Sin(var1[2]);
  t37303 = -1.*t36719*t11732;
  t37310 = -1.*t5281*t36976;
  t37315 = t37303 + t37310;
  t37702 = t5281*t36719;
  t37783 = -1.*t11732*t36976;
  t37785 = t37702 + t37783;
  t37216 = 0.8*t36836;
  t37241 = 1.04*t36719;
  t37263 = t37216 + t37241;
  t36859 = -0.15*t36836;
  t36888 = -0.15*t36719;
  t37118 = -0.24*t36976;
  t37153 = t36859 + t36888 + t37118;
  t37799 = t10049*t37785;
  t38315 = t36719*t11732;
  t38416 = t5281*t36976;
  t38420 = t38315 + t38416;
  t9580 = t5281*t8432;
  t18003 = t10049*t11732;
  t22379 = t9580 + t18003;
  t29900 = t10049*t5281;
  t31804 = -1.*t8432*t11732;
  t32304 = t29900 + t31804;
  t36740 = 0.15*t36719;
  t37198 = t36719*t37153;
  t37209 = -0.4*t36976;
  t37277 = t37263*t36976;
  t37291 = t36740 + t37198 + t37209 + t37277;
  t37698 = t8432*t37315;
  t37812 = t37698 + t37799;
  t37875 = t10049*t37315;
  t37880 = -1.*t8432*t37785;
  t37900 = t37875 + t37880;
  t38284 = 0.4*t36719;
  t38288 = -1.*t36719*t37263;
  t38290 = 0.15*t36976;
  t38294 = t37153*t36976;
  t38307 = t38284 + t38288 + t38290 + t38294;
  t38449 = -1.*t8432*t38420;
  t38478 = t38449 + t37799;
  t38509 = t10049*t38420;
  t38571 = t8432*t37785;
  t39035 = t38509 + t38571;
  t56166 = -1.*t5281*t8432;
  t56965 = -1.*t10049*t11732;
  t57019 = t56166 + t56965;
  t57806 = -1.*t8432*t37315;
  t57818 = -1.*t10049*t37785;
  t57819 = t57806 + t57818;
  t57841 = -1.*t10049*t38420;
  t57966 = t57841 + t37880;
  t58489 = -1.*t5281;
  t58511 = 1. + t58489;
  t58513 = 0.4*t58511;
  t58619 = 0.69*t5281;
  t58622 = t58513 + t58619;
  t58645 = -0.15*t58511;
  t58754 = -0.15*t5281;
  t58775 = -0.29*t11732;
  t58784 = t58645 + t58754 + t58775;
  t64750 = -1.*t58622*t8432;
  t64786 = t10049*t58784;
  t64862 = -1.*t10049;
  t64888 = 1. + t64862;
  t64902 = -0.15*t64888;
  t64687 = 0.15*t10049;
  t65079 = 0.4*t11732;
  t65080 = -1.*t37263*t11732;
  t65084 = t5281*t37153;
  t65092 = t58645 + t65079 + t65080 + t65084;
  t65094 = t10049*t65092;
  t65096 = t5281*t37263;
  t65100 = 0.15*t11732;
  t65101 = t11732*t37153;
  t65200 = t58513 + t65096 + t65100 + t65101;
  t65201 = -1.*t8432*t65200;
  t58629 = -0.15*t8432;
  t64540 = 0.15*t8432;
  t65206 = -1.*t8432*t65092;
  t65210 = -1.*t10049*t65200;
  t65220 = t58629 + t65206 + t65210;
  t65224 = t8432*t65092;
  t65227 = t10049*t65200;
  t65235 = t64540 + t65224 + t65227;
  t65202 = t64902 + t65094 + t65201;
  t65204 = t64687 + t65094 + t65201;
  t65254 = 0.15*t5281;
  t65305 = 0.4*t5281;
  t65306 = -1.*t5281*t37263;
  t65307 = -0.15*t11732;
  t65308 = -1.*t11732*t37153;
  t65309 = t65305 + t65306 + t65307 + t65308;
  t65303 = t65254 + t65079 + t65080 + t65084;
  t58108 = -1.*t27064*t57019;
  t58164 = t2703*t32304;
  t58178 = t58108 + t58164;
  t58182 = 3.944*t58178;
  t37874 = t2703*t37812;
  t37901 = -1.*t27064*t37900;
  t37902 = t37874 + t37901;
  t65327 = -1.*t5281*t36719;
  t65328 = t11732*t36976;
  t65329 = t65327 + t65328;
  t57026 = t2703*t57019;
  t57127 = t27064*t32304;
  t57666 = t57026 + t57127;
  t57742 = 3.944*t57666;
  t58198 = t2703*t37900;
  t65339 = t10049*t65329;
  t65340 = t57806 + t65339;
  t65342 = t8432*t65329;
  t65344 = t37875 + t65342;
  t64537 = t10049*t58622;
  t64542 = t8432*t58784;
  t64543 = t64537 + t64540 + t64542;
  t64582 = t64543*t57019;
  t64923 = t64902 + t64750 + t64786;
  t64989 = -1.*t10049*t5281;
  t65012 = t8432*t11732;
  t65029 = t64989 + t65012;
  t65031 = t64923*t65029;
  t65388 = t10049*t65303;
  t65389 = t8432*t65309;
  t65390 = t65388 + t65389;
  t65381 = -1.*t8432*t65303;
  t65382 = t10049*t65309;
  t65383 = t65381 + t65382;
  t65410 = -0.4*t36719;
  t65411 = Power(t36719,2);
  t65412 = -0.24*t65411;
  t65414 = t36719*t37263;
  t65415 = -0.15*t36976;
  t65417 = -1.*t37153*t36976;
  t65419 = Power(t36976,2);
  t65420 = -0.24*t65419;
  t65421 = t65410 + t65412 + t65414 + t65415 + t65417 + t65420;
  t65324 = 0.15*t37785;
  t65280 = 0.15*t37315;
  t65281 = t65092*t37315;
  t65311 = t65200*t37785;
  t65321 = -1.*t65200*t37315;
  t65439 = -0.24*t36719*t11732;
  t65441 = -0.24*t5281*t36976;
  t65442 = t65439 + t65441;
  t65445 = -0.24*t5281*t36719;
  t65447 = 0.24*t11732*t36976;
  t65448 = t65445 + t65447;
  t65330 = -1.*t65092*t65329;
  t65337 = -12.*t38307*t37902;
  t38508 = -1.*t27064*t38478;
  t48015 = t2703*t39035;
  t48247 = t38508 + t48015;
  t65341 = -1.*t27064*t65340;
  t65347 = t2703*t65344;
  t65349 = t65341 + t65347;
  t65350 = -12.*t37291*t65349;
  t65353 = t27064*t37812;
  t65355 = t65353 + t58198;
  t65356 = -12.*t38307*t65355;
  t58334 = t2703*t38478;
  t65357 = t2703*t65340;
  t65358 = t27064*t65344;
  t65359 = t65357 + t65358;
  t65362 = -12.*t37291*t65359;
  t65380 = -1.*t65235*t37812;
  t65385 = -1.*t65202*t37900;
  t65484 = -1.*t8432*t65442;
  t65486 = t10049*t65448;
  t65488 = t65484 + t65486;
  t65491 = t10049*t65442;
  t65492 = t8432*t65448;
  t65493 = t65491 + t65492;
  t65397 = t65202*t65340;
  t65398 = t65235*t65344;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(3.944*(t22379*t2703 - 1.*t27064*t32304) - 12.*t37291*t37902 - 12.*t38307*t48247)*var2[0] - 0.5*(3.944*(-1.*t22379*t27064 - 1.*t2703*t32304) - 12.*t37291*(-1.*t27064*t37812 - 1.*t2703*t37900) - 12.*t38307*(-1.*t2703*t38478 - 1.*t27064*t39035))*var2[1])*var2[4];
  p_output1[3]=(-0.5*(t57742 - 12.*t37291*(t27064*t37900 + t2703*t57819) - 12.*t38307*(t27064*t38478 + t2703*t57966))*var2[0] - 0.5*(t58182 - 12.*t37291*(-1.*t27064*t57819 + t58198) - 12.*t38307*(-1.*t27064*t57966 + t58334))*var2[1] - 0.5*(-12.*t38307*(t57819*t65202 + t37812*t65204 + t37900*t65220 + t37900*t65235) - 12.*t37291*(-1.*t57966*t65202 - 1.*t39035*t65204 - 1.*t38478*t65220 - 1.*t38478*t65235) + 3.944*(t64582 + t32304*(t64687 + t64750 + t64786) + t65031 + t57019*(-1.*t10049*t58622 + t58629 - 1.*t58784*t8432)))*var2[2])*var2[4];
  p_output1[4]=(-0.5*(t57742 + t65356 + t65362)*var2[0] - 0.5*(t58182 + t65337 + t65350)*var2[1] - 0.5*(-12.*t37291*(t65380 - 1.*t38478*t65383 + t65385 - 1.*t39035*t65390) - 12.*t38307*(t37900*t65383 + t37812*t65390 + t65397 + t65398) + 3.944*(t64582 + t65031 + t57019*(-0.29*t10049*t5281 + 0.29*t11732*t8432) + t32304*(-0.29*t10049*t11732 - 0.29*t5281*t8432)))*var2[2] - 0.5*(3.944*(t11732*t58622 + t5281*t58784 + t65254) - 12.*t37291*(t65280 + t65281 + t38420*t65303 + t37785*t65309 + t65311) - 12.*t38307*(-1.*t37785*t65303 - 1.*t37315*t65309 + t65321 + t65324 + t65330))*var2[3])*var2[4];
  p_output1[5]=var2[4]*(-0.5*(-12.*t37291*(t27064*t39035 + t58334) + t65356 + t65362 - 12.*t65355*t65421)*var2[0] - 0.5*(-12.*t37291*t48247 + t65337 + t65350 - 12.*t37902*t65421)*var2[1] - 0.5*(-12.*t37291*(t37900*t65202 + t37812*t65235) - 12.*(-1.*t38478*t65202 - 1.*t39035*t65235)*t65421 - 12.*t38307*(t65397 + t65398 + t37900*t65488 + t37812*t65493) - 12.*t37291*(t65380 + t65385 - 1.*t38478*t65488 - 1.*t39035*t65493))*var2[2] - 0.5*(-12.*t37291*(0.15*t38420 - 1.*t37315*t65092 - 1.*t37785*t65200) - 12.*(t37785*t65092 + t38420*t65200 + t65324)*t65421 - 12.*t38307*(t65321 + t65324 + t65330 - 1.*t37785*t65442 - 1.*t37315*t65448) - 12.*t37291*(t65280 + t65281 + t65311 + t38420*t65442 + t37785*t65448))*var2[3] - 0.5*(-24.*t37291*t38307 - 24.*t37291*t65421)*var2[4] - 1.44*t37291*var2[5]);
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

#include "Ce3_vec5_acrobot.hh"

namespace SymFunction
{

void Ce3_vec5_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
