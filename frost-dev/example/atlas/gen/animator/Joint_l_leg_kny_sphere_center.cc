/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:50 GMT-06:00
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
  double t678;
  double t5986;
  double t6029;
  double t6288;
  double t6499;
  double t6218;
  double t6244;
  double t6519;
  double t6596;
  double t6602;
  double t6632;
  double t7097;
  double t7162;
  double t7221;
  double t7253;
  double t7277;
  double t7310;
  double t8100;
  double t8192;
  double t8200;
  double t8334;
  double t6298;
  double t6358;
  double t8355;
  double t6580;
  double t6585;
  double t8348;
  double t8361;
  double t8396;
  double t8430;
  double t8447;
  double t8456;
  double t7119;
  double t7135;
  double t7154;
  double t7230;
  double t8462;
  double t8463;
  double t8464;
  double t7491;
  double t7532;
  double t7552;
  double t8473;
  double t8477;
  double t8486;
  double t8517;
  double t8528;
  double t8531;
  double t8581;
  double t8585;
  double t8586;
  double t8597;
  double t8604;
  double t8620;
  double t8628;
  double t8633;
  double t8634;
  double t8643;
  double t8646;
  double t8687;
  double t8741;
  double t8750;
  double t8751;
  t678 = Cos(var1[4]);
  t5986 = Cos(var1[5]);
  t6029 = Sin(var1[13]);
  t6288 = Cos(var1[13]);
  t6499 = Sin(var1[5]);
  t6218 = Sin(var1[11]);
  t6244 = Sin(var1[4]);
  t6519 = Cos(var1[11]);
  t6596 = -1.*t678*t5986*t6029;
  t6602 = -1.*t6288*t678*t6499;
  t6632 = t6596 + t6602;
  t7097 = Cos(var1[12]);
  t7162 = Sin(var1[12]);
  t7221 = 0.05*t7162;
  t7253 = t6288*t678*t5986;
  t7277 = -1.*t678*t6029*t6499;
  t7310 = t7253 + t7277;
  t8100 = t6519*t6244;
  t8192 = -1.*t6218*t6632;
  t8200 = t8100 + t8192;
  t8334 = Sin(var1[3]);
  t6298 = -1.*t6288;
  t6358 = 1. + t6298;
  t8355 = Cos(var1[3]);
  t6580 = -1.*t6519;
  t6585 = 1. + t6580;
  t8348 = t5986*t8334*t6244;
  t8361 = t8355*t6499;
  t8396 = t8348 + t8361;
  t8430 = t8355*t5986;
  t8447 = -1.*t8334*t6244*t6499;
  t8456 = t8430 + t8447;
  t7119 = -1.*t7097;
  t7135 = 1. + t7119;
  t7154 = 0.05*t7135;
  t7230 = t7154 + t7221;
  t8462 = -1.*t6029*t8396;
  t8463 = t6288*t8456;
  t8464 = t8462 + t8463;
  t7491 = -1. + t7097;
  t7532 = 0.05*t7491;
  t7552 = t7532 + t7221;
  t8473 = t6288*t8396;
  t8477 = t6029*t8456;
  t8486 = t8473 + t8477;
  t8517 = -1.*t6519*t678*t8334;
  t8528 = -1.*t6218*t8464;
  t8531 = t8517 + t8528;
  t8581 = -1.*t8355*t5986*t6244;
  t8585 = t8334*t6499;
  t8586 = t8581 + t8585;
  t8597 = t5986*t8334;
  t8604 = t8355*t6244*t6499;
  t8620 = t8597 + t8604;
  t8628 = -1.*t6029*t8586;
  t8633 = t6288*t8620;
  t8634 = t8628 + t8633;
  t8643 = t6288*t8586;
  t8646 = t6029*t8620;
  t8687 = t8643 + t8646;
  t8741 = t6519*t8355*t678;
  t8750 = -1.*t6218*t8634;
  t8751 = t8741 + t8750;
  p_output1[0]=-0.089*t6218*t6244 + 0.089*t6585*t6632 + 0.089*(t6218*t6244 + t6519*t6632) + 0.089*t5986*t6029*t678 - 0.089*t6358*t6499*t678 + t7230*t7310 + t7552*t8200 - 0.424*(t7162*t7310 + t7097*t8200) + var1[0];
  p_output1[1]=0.089*t6218*t678*t8334 + 0.089*t6029*t8396 + 0.089*t6358*t8456 + 0.089*t6585*t8464 + 0.089*(-1.*t6218*t678*t8334 + t6519*t8464) + t7230*t8486 + t7552*t8531 - 0.424*(t7162*t8486 + t7097*t8531) + var1[1];
  p_output1[2]=-0.089*t6218*t678*t8355 + 0.089*t6029*t8586 + 0.089*t6358*t8620 + 0.089*t6585*t8634 + 0.089*(t6218*t678*t8355 + t6519*t8634) + t7230*t8687 + t7552*t8751 - 0.424*(t7162*t8687 + t7097*t8751) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_l_leg_kny_sphere_center.hh"

namespace SymFunction
{

void Joint_l_leg_kny_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
