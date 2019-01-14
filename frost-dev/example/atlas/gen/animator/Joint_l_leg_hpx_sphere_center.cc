/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:54 GMT-06:00
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
  double t5386;
  double t8066;
  double t9735;
  double t9844;
  double t9885;
  double t9862;
  double t9866;
  double t9979;
  double t9942;
  double t9950;
  double t9971;
  double t9990;
  double t10013;
  double t10049;
  double t10155;
  double t10179;
  double t10378;
  double t10399;
  double t10404;
  double t10440;
  double t10443;
  double t10470;
  t5386 = Cos(var1[4]);
  t8066 = Cos(var1[5]);
  t9735 = Sin(var1[13]);
  t9844 = Cos(var1[13]);
  t9885 = Sin(var1[5]);
  t9862 = -1.*t9844;
  t9866 = 1. + t9862;
  t9979 = Cos(var1[3]);
  t9942 = Sin(var1[3]);
  t9950 = Sin(var1[4]);
  t9971 = t8066*t9942*t9950;
  t9990 = t9979*t9885;
  t10013 = t9971 + t9990;
  t10049 = t9979*t8066;
  t10155 = -1.*t9942*t9950*t9885;
  t10179 = t10049 + t10155;
  t10378 = -1.*t9979*t8066*t9950;
  t10399 = t9942*t9885;
  t10404 = t10378 + t10399;
  t10440 = t8066*t9942;
  t10443 = t9979*t9950*t9885;
  t10470 = t10440 + t10443;
  p_output1[0]=0.089*t5386*t8066*t9735 - 0.089*t5386*t9866*t9885 + 0.089*(-1.*t5386*t8066*t9735 - 1.*t5386*t9844*t9885) + var1[0];
  p_output1[1]=0.089*t10013*t9735 + 0.089*(-1.*t10013*t9735 + t10179*t9844) + 0.089*t10179*t9866 + var1[1];
  p_output1[2]=0.089*t10404*t9735 + 0.089*(-1.*t10404*t9735 + t10470*t9844) + 0.089*t10470*t9866 + var1[2];
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

#include "Joint_l_leg_hpx_sphere_center.hh"

namespace SymFunction
{

void Joint_l_leg_hpx_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
