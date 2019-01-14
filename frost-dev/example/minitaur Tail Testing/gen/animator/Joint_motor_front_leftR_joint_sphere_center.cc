/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:49 GMT-04:00
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
  double t277;
  double t336;
  double t344;
  double t1662;
  double t1706;
  double t430;
  double t728;
  double t1554;
  double t2299;
  double t2296;
  double t2298;
  double t2303;
  double t2309;
  double t2419;
  double t2421;
  double t2424;
  t277 = Cos(var1[4]);
  t336 = Cos(var1[5]);
  t344 = Cos(var1[7]);
  t1662 = Sin(var1[4]);
  t1706 = Sin(var1[7]);
  t430 = -1.*t344;
  t728 = 1. + t430;
  t1554 = Sin(var1[5]);
  t2299 = Cos(var1[3]);
  t2296 = Sin(var1[3]);
  t2298 = t336*t2296*t1662;
  t2303 = t2299*t1554;
  t2309 = t2298 + t2303;
  t2419 = -1.*t2299*t336*t1662;
  t2421 = t2296*t1554;
  t2424 = t2419 + t2421;
  p_output1[0]=0.225*t1662*t1706 - 0.13*t1554*t277 + 0.225*(-1.*t1662*t1706 + t277*t336*t344) + 0.225*t277*t336*t728 + var1[0];
  p_output1[1]=-0.225*t1706*t2296*t277 + 0.13*(-1.*t1554*t1662*t2296 + t2299*t336) + 0.225*(t1706*t2296*t277 + t2309*t344) + 0.225*t2309*t728 + var1[1];
  p_output1[2]=0.225*t1706*t2299*t277 + 0.13*(t1554*t1662*t2299 + t2296*t336) + 0.225*(-1.*t1706*t2299*t277 + t2424*t344) + 0.225*t2424*t728 + var1[2];
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

#include "Joint_motor_front_leftR_joint_sphere_center.hh"

namespace SymFunction
{

void Joint_motor_front_leftR_joint_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
