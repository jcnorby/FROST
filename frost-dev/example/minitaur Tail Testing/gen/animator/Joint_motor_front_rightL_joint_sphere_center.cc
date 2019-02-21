/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:11 GMT-04:00
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
  double t22;
  double t220;
  double t400;
  double t744;
  double t1009;
  double t26;
  double t27;
  double t3399;
  double t2886;
  double t4088;
  double t3659;
  double t4960;
  double t4991;
  double t6627;
  double t7095;
  double t7099;
  t22 = Cos(var1[14]);
  t220 = Cos(var1[4]);
  t400 = Cos(var1[5]);
  t744 = Sin(var1[14]);
  t1009 = Sin(var1[4]);
  t26 = -1.*t22;
  t27 = 1. + t26;
  t3399 = Sin(var1[3]);
  t2886 = Sin(var1[5]);
  t4088 = Cos(var1[3]);
  t3659 = t400*t3399*t1009;
  t4960 = t4088*t2886;
  t4991 = t3659 + t4960;
  t6627 = -1.*t4088*t400*t1009;
  t7095 = t3399*t2886;
  t7099 = t6627 + t7095;
  p_output1[0]=0.13*t220*t2886 + 0.225*t220*t27*t400 + 0.225*t1009*t744 + 0.225*(t22*t220*t400 - 1.*t1009*t744) + var1[0];
  p_output1[1]=-0.13*(-1.*t1009*t2886*t3399 + t400*t4088) + 0.225*t27*t4991 - 0.225*t220*t3399*t744 + 0.225*(t22*t4991 + t220*t3399*t744) + var1[1];
  p_output1[2]=-0.13*(t3399*t400 + t1009*t2886*t4088) + 0.225*t27*t7099 + 0.225*t220*t4088*t744 + 0.225*(t22*t7099 - 1.*t220*t4088*t744) + var1[2];
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

#include "Joint_motor_front_rightL_joint_sphere_center.hh"

namespace SymFunction
{

void Joint_motor_front_rightL_joint_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
