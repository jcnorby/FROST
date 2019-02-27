/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:14 GMT-04:00
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
  double t43;
  double t378;
  double t379;
  double t420;
  double t819;
  double t3426;
  double t3450;
  double t5226;
  double t6916;
  double t7007;
  double t6995;
  double t7054;
  double t7121;
  double t5749;
  double t5769;
  double t7330;
  double t7332;
  double t7336;
  double t7820;
  double t7832;
  double t7849;
  double t7869;
  double t7955;
  double t7963;
  t43 = Cos(var1[15]);
  t378 = -1.*t43;
  t379 = 1. + t378;
  t420 = Cos(var1[4]);
  t819 = Cos(var1[5]);
  t3426 = Sin(var1[15]);
  t3450 = Sin(var1[4]);
  t5226 = Sin(var1[5]);
  t6916 = Sin(var1[3]);
  t7007 = Cos(var1[3]);
  t6995 = t819*t6916*t3450;
  t7054 = t7007*t5226;
  t7121 = t6995 + t7054;
  t5749 = -9.e-12*t379;
  t5769 = 1. + t5749;
  t7330 = t7007*t819;
  t7332 = -1.*t6916*t3450*t5226;
  t7336 = t7330 + t7332;
  t7820 = -1.*t7007*t819*t3450;
  t7832 = t6916*t5226;
  t7849 = t7820 + t7832;
  t7869 = t819*t6916;
  t7955 = t7007*t3450*t5226;
  t7963 = t7869 + t7955;
  p_output1[0]=-0.225000000002025*t3426*t3450 + 6.75000000006075e-7*t379*t420*t5226 + 0.225000000002025*t379*t420*t819 - 0.13*(-3.e-6*t3426*t3450 - 1.*t420*t5226*t5769 + 3.e-6*t379*t420*t819) + 0.225*(t3426*t3450 - 3.e-6*t379*t420*t5226 + t420*t43*t819) + var1[0];
  p_output1[1]=0.225000000002025*t3426*t420*t6916 + 0.225000000002025*t379*t7121 - 6.75000000006075e-7*t379*t7336 + 0.225*(-1.*t3426*t420*t6916 + t43*t7121 + 3.e-6*t379*t7336) - 0.13*(3.e-6*t3426*t420*t6916 + 3.e-6*t379*t7121 + t5769*t7336) + var1[1];
  p_output1[2]=-0.225000000002025*t3426*t420*t7007 + 0.225000000002025*t379*t7849 - 6.75000000006075e-7*t379*t7963 + 0.225*(t3426*t420*t7007 + t43*t7849 + 3.e-6*t379*t7963) - 0.13*(-3.e-6*t3426*t420*t7007 + 3.e-6*t379*t7849 + t5769*t7963) + var1[2];
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

#include "Joint_motor_front_rightR_joint_sphere_center.hh"

namespace SymFunction
{

void Joint_motor_front_rightR_joint_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
