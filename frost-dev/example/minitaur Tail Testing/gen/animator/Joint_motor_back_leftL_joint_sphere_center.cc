/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:59 GMT-04:00
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
  double t29;
  double t136;
  double t140;
  double t145;
  double t146;
  double t243;
  double t279;
  double t312;
  double t858;
  double t916;
  double t907;
  double t1005;
  double t1077;
  double t410;
  double t417;
  double t1222;
  double t1578;
  double t1724;
  double t2208;
  double t2219;
  double t2222;
  double t2258;
  double t2259;
  double t2262;
  t29 = Cos(var1[10]);
  t136 = -1.*t29;
  t140 = 1. + t136;
  t145 = Cos(var1[4]);
  t146 = Cos(var1[5]);
  t243 = Sin(var1[10]);
  t279 = Sin(var1[4]);
  t312 = Sin(var1[5]);
  t858 = Sin(var1[3]);
  t916 = Cos(var1[3]);
  t907 = t146*t858*t279;
  t1005 = t916*t312;
  t1077 = t907 + t1005;
  t410 = -9.e-12*t140;
  t417 = 1. + t410;
  t1222 = t916*t146;
  t1578 = -1.*t858*t279*t312;
  t1724 = t1222 + t1578;
  t2208 = -1.*t916*t146*t279;
  t2219 = t858*t312;
  t2222 = t2208 + t2219;
  t2258 = t146*t858;
  t2259 = t916*t279*t312;
  t2262 = t2258 + t2259;
  p_output1[0]=-0.225000000002025*t140*t145*t146 + 0.225000000002025*t243*t279 - 6.75000000006075e-7*t140*t145*t312 - 0.225*(t243*t279 + t145*t146*t29 - 3.e-6*t140*t145*t312) + 0.13*(3.e-6*t140*t145*t146 - 3.e-6*t243*t279 - 1.*t145*t312*t417) + var1[0];
  p_output1[1]=-0.225000000002025*t1077*t140 + 6.75000000006075e-7*t140*t1724 - 0.225000000002025*t145*t243*t858 - 0.225*(3.e-6*t140*t1724 + t1077*t29 - 1.*t145*t243*t858) + 0.13*(3.e-6*t1077*t140 + t1724*t417 + 3.e-6*t145*t243*t858) + var1[1];
  p_output1[2]=-0.225000000002025*t140*t2222 + 6.75000000006075e-7*t140*t2262 + 0.225000000002025*t145*t243*t916 + 0.13*(3.e-6*t140*t2222 + t2262*t417 - 3.e-6*t145*t243*t916) - 0.225*(3.e-6*t140*t2262 + t2222*t29 + t145*t243*t916) + var1[2];
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

#include "Joint_motor_back_leftL_joint_sphere_center.hh"

namespace SymFunction
{

void Joint_motor_back_leftL_joint_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
