/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:04 GMT-06:00
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
  double t25927;
  double t4143;
  double t24383;
  double t31454;
  double t31180;
  double t33185;
  double t4952;
  double t32975;
  double t32967;
  double t33465;
  t25927 = Cos(var1[4]);
  t4143 = Sin(var1[17]);
  t24383 = Cos(var1[17]);
  t31454 = Sin(var1[19]);
  t31180 = Cos(var1[5]);
  t33185 = Sin(var1[3]);
  t4952 = Sin(var1[4]);
  t32975 = Sin(var1[5]);
  t32967 = Cos(var1[19]);
  t33465 = Cos(var1[3]);
  p_output1[0]=t24383*(-1.*t25927*t31180*t31454 - 1.*t25927*t32967*t32975) + t4143*t4952;
  p_output1[1]=-1.*t25927*t33185*t4143 + t24383*(-1.*t31454*(t32975*t33465 + t31180*t33185*t4952) + t32967*(t31180*t33465 - 1.*t32975*t33185*t4952));
  p_output1[2]=t25927*t33465*t4143 + t24383*(-1.*t31454*(t32975*t33185 - 1.*t31180*t33465*t4952) + t32967*(t31180*t33185 + t32975*t33465*t4952));
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

#include "Joint_r_leg_kny_axis.hh"

namespace SymFunction
{

void Joint_r_leg_kny_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
