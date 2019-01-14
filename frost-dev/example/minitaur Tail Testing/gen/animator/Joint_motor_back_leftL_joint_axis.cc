/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:00 GMT-04:00
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
  double t156;
  double t310;
  double t321;
  double t332;
  double t396;
  double t452;
  double t535;
  double t834;
  double t460;
  double t476;
  double t1946;
  double t611;
  double t626;
  double t2166;
  double t1786;
  double t1200;
  double t1479;
  double t2096;
  double t2195;
  double t2205;
  double t2273;
  double t2274;
  double t2284;
  double t2328;
  double t2335;
  double t2340;
  double t2346;
  double t2347;
  double t2364;
  t156 = Cos(var1[10]);
  t310 = -1.*t156;
  t321 = 1. + t310;
  t332 = Cos(var1[4]);
  t396 = Cos(var1[5]);
  t452 = Sin(var1[10]);
  t535 = Sin(var1[4]);
  t834 = Sin(var1[5]);
  t460 = -3.e-6*t452;
  t476 = 0. + t460;
  t1946 = Sin(var1[3]);
  t611 = -9.000000000000001e-12*t321;
  t626 = 1. + t611;
  t2166 = Cos(var1[3]);
  t1786 = 0. + t452;
  t1200 = -1.*t321;
  t1479 = 1. + t1200;
  t2096 = t396*t1946*t535;
  t2195 = t2166*t834;
  t2205 = t2096 + t2195;
  t2273 = t2166*t396;
  t2274 = -1.*t1946*t535*t834;
  t2284 = t2273 + t2274;
  t2328 = -1.*t2166*t396*t535;
  t2335 = t1946*t834;
  t2340 = t2328 + t2335;
  t2346 = t396*t1946;
  t2347 = t2166*t535*t834;
  t2364 = t2346 + t2347;
  p_output1[0]=-3.e-6*t321*t332*t396 - 1.*t476*t535 + t332*t626*t834 - 3.e-6*(t1479*t332*t396 + t1786*t535 - 3.e-6*t321*t332*t834);
  p_output1[1]=-3.e-6*t2205*t321 - 3.e-6*(t1479*t2205 + 3.e-6*t2284*t321 - 1.*t1786*t1946*t332) + t1946*t332*t476 - 1.*t2284*t626;
  p_output1[2]=-3.e-6*t2340*t321 - 3.e-6*(t1479*t2340 + 3.e-6*t2364*t321 + t1786*t2166*t332) - 1.*t2166*t332*t476 - 1.*t2364*t626;
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

#include "Joint_motor_back_leftL_joint_axis.hh"

namespace SymFunction
{

void Joint_motor_back_leftL_joint_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
