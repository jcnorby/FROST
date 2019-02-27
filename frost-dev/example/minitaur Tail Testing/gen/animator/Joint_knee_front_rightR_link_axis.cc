/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:20 GMT-04:00
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
  double t6010;
  double t6194;
  double t6347;
  double t6379;
  double t2302;
  double t3479;
  double t3495;
  double t6541;
  double t6567;
  double t6576;
  double t6599;
  double t6628;
  double t6632;
  double t6633;
  double t6634;
  double t6559;
  double t6574;
  double t6575;
  double t6595;
  double t6596;
  double t6598;
  double t6601;
  double t6623;
  double t6642;
  double t6660;
  double t6673;
  double t6679;
  double t6688;
  double t6709;
  double t6710;
  double t6714;
  double t6720;
  double t6721;
  double t6730;
  double t6731;
  double t6736;
  double t6737;
  double t6743;
  double t6749;
  double t6750;
  double t6712;
  double t6713;
  double t7279;
  double t7377;
  double t6760;
  double t5967;
  double t6003;
  double t8074;
  double t8133;
  double t8105;
  double t8140;
  double t8190;
  double t8248;
  double t8280;
  double t8289;
  double t8103;
  double t8198;
  double t8313;
  double t8314;
  double t6839;
  double t8324;
  double t8326;
  double t8332;
  double t8338;
  double t8360;
  double t8376;
  double t8377;
  double t8381;
  double t7657;
  double t7805;
  double t8461;
  double t8462;
  double t8473;
  double t8487;
  double t8496;
  double t8499;
  double t8446;
  double t8479;
  double t8507;
  double t8527;
  double t8532;
  double t8533;
  double t8540;
  double t8563;
  double t8617;
  double t8624;
  double t8628;
  double t8629;
  t6010 = Cos(var1[15]);
  t6194 = -1.*t6010;
  t6347 = 1. + t6194;
  t6379 = Cos(var1[4]);
  t2302 = Cos(var1[17]);
  t3479 = -1.*t2302;
  t3495 = 1. + t3479;
  t6541 = Cos(var1[5]);
  t6567 = Sin(var1[15]);
  t6576 = Sin(var1[4]);
  t6599 = Sin(var1[5]);
  t6628 = 3.e-6*t3495;
  t6632 = Sin(var1[17]);
  t6633 = -3.e-6*t6632;
  t6634 = t6628 + t6633;
  t6559 = 3.e-6*t6347*t6379*t6541;
  t6574 = -3.e-6*t6567;
  t6575 = 0. + t6574;
  t6595 = t6575*t6576;
  t6596 = -9.000000000000001e-12*t6347;
  t6598 = 1. + t6596;
  t6601 = -1.*t6598*t6379*t6599;
  t6623 = t6559 + t6595 + t6601;
  t6642 = -1.*t6347;
  t6660 = 1. + t6642;
  t6673 = t6660*t6379*t6541;
  t6679 = 0. + t6567;
  t6688 = t6679*t6576;
  t6709 = -3.e-6*t6347*t6379*t6599;
  t6710 = t6673 + t6688 + t6709;
  t6714 = -1.*t6567;
  t6720 = 0. + t6714;
  t6721 = t6379*t6541*t6720;
  t6730 = -1.000000000009*t6347;
  t6731 = 1. + t6730;
  t6736 = t6731*t6576;
  t6737 = 3.e-6*t6567;
  t6743 = 0. + t6737;
  t6749 = -1.*t6379*t6743*t6599;
  t6750 = t6721 + t6736 + t6749;
  t6712 = 3.e-6*t6632;
  t6713 = t6628 + t6712;
  t7279 = -1.000000000009*t3495;
  t7377 = 1. + t7279;
  t6760 = 9.000000000000001e-12*t3495;
  t5967 = -1.8000000000000002e-11*t3495;
  t6003 = 1. + t5967;
  t8074 = Sin(var1[3]);
  t8133 = Cos(var1[3]);
  t8105 = t6541*t8074*t6576;
  t8140 = t8133*t6599;
  t8190 = t8105 + t8140;
  t8248 = t8133*t6541;
  t8280 = -1.*t8074*t6576*t6599;
  t8289 = t8248 + t8280;
  t8103 = -1.*t6379*t6575*t8074;
  t8198 = 3.e-6*t6347*t8190;
  t8313 = t6598*t8289;
  t8314 = t8103 + t8198 + t8313;
  t6839 = t6760 + t6632;
  t8324 = -1.*t6379*t6679*t8074;
  t8326 = t6660*t8190;
  t8332 = 3.e-6*t6347*t8289;
  t8338 = t8324 + t8326 + t8332;
  t8360 = -1.*t6731*t6379*t8074;
  t8376 = t6720*t8190;
  t8377 = t6743*t8289;
  t8381 = t8360 + t8376 + t8377;
  t7657 = -1.*t6632;
  t7805 = t6760 + t7657;
  t8461 = -1.*t8133*t6541*t6576;
  t8462 = t8074*t6599;
  t8473 = t8461 + t8462;
  t8487 = t6541*t8074;
  t8496 = t8133*t6576*t6599;
  t8499 = t8487 + t8496;
  t8446 = t8133*t6379*t6575;
  t8479 = 3.e-6*t6347*t8473;
  t8507 = t6598*t8499;
  t8527 = t8446 + t8479 + t8507;
  t8532 = t8133*t6379*t6679;
  t8533 = t6660*t8473;
  t8540 = 3.e-6*t6347*t8499;
  t8563 = t8532 + t8533 + t8540;
  t8617 = t6731*t8133*t6379;
  t8624 = t6720*t8473;
  t8628 = t6743*t8499;
  t8629 = t8617 + t8624 + t8628;
  p_output1[0]=t6003*t6623 + t6634*t6710 + t6713*t6750 + 3.e-6*(t6623*t6634 + t6710*t6839 + t6750*t7377) + 3.e-6*(t6623*t6713 + t6710*t7377 + t6750*t7805);
  p_output1[1]=t6003*t8314 + t6634*t8338 + t6713*t8381 + 3.e-6*(t6634*t8314 + t6839*t8338 + t7377*t8381) + 3.e-6*(t6713*t8314 + t7377*t8338 + t7805*t8381);
  p_output1[2]=t6003*t8527 + t6634*t8563 + t6713*t8629 + 3.e-6*(t6634*t8527 + t6839*t8563 + t7377*t8629) + 3.e-6*(t6713*t8527 + t7377*t8563 + t7805*t8629);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_knee_front_rightR_link_axis.hh"

namespace SymFunction
{

void Joint_knee_front_rightR_link_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
