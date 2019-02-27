/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:46 GMT-04:00
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
  double t34;
  double t134;
  double t790;
  double t999;
  double t120;
  double t2187;
  double t2426;
  double t3455;
  double t6534;
  double t6473;
  double t6493;
  double t6568;
  double t6577;
  double t6808;
  double t6856;
  double t6871;
  double t4813;
  double t4915;
  double t7342;
  double t7346;
  double t7358;
  double t7397;
  double t7440;
  double t7608;
  t34 = Cos(var1[4]);
  t134 = Cos(var1[6]);
  t790 = -1.*t134;
  t999 = 1. + t790;
  t120 = Cos(var1[5]);
  t2187 = Sin(var1[5]);
  t2426 = Sin(var1[4]);
  t3455 = Sin(var1[6]);
  t6534 = Cos(var1[3]);
  t6473 = Sin(var1[3]);
  t6493 = t120*t6473*t2426;
  t6568 = t6534*t2187;
  t6577 = t6493 + t6568;
  t6808 = t6534*t120;
  t6856 = -1.*t6473*t2426*t2187;
  t6871 = t6808 + t6856;
  t4813 = -9.e-12*t999;
  t4915 = 1. + t4813;
  t7342 = -1.*t6534*t120*t2426;
  t7346 = t6473*t2187;
  t7358 = t7342 + t7346;
  t7397 = t120*t6473;
  t7440 = t6534*t2426*t2187;
  t7608 = t7397 + t7440;
  p_output1[0]=-0.225000000002025*t2426*t3455 + 0.225000000002025*t120*t34*t999 + 6.75000000006075e-7*t2187*t34*t999 + 0.13*(-3.e-6*t2426*t3455 - 1.*t2187*t34*t4915 + 3.e-6*t120*t34*t999) + 0.225*(t120*t134*t34 + t2426*t3455 - 3.e-6*t2187*t34*t999) + var1[0];
  p_output1[1]=0.225000000002025*t34*t3455*t6473 + 0.225000000002025*t6577*t999 - 6.75000000006075e-7*t6871*t999 + 0.13*(3.e-6*t34*t3455*t6473 + t4915*t6871 + 3.e-6*t6577*t999) + 0.225*(-1.*t34*t3455*t6473 + t134*t6577 + 3.e-6*t6871*t999) + var1[1];
  p_output1[2]=-0.225000000002025*t34*t3455*t6534 + 0.225000000002025*t7358*t999 - 6.75000000006075e-7*t7608*t999 + 0.13*(-3.e-6*t34*t3455*t6534 + t4915*t7608 + 3.e-6*t7358*t999) + 0.225*(t34*t3455*t6534 + t134*t7358 + 3.e-6*t7608*t999) + var1[2];
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

#include "Joint_motor_front_leftL_joint_sphere_center.hh"

namespace SymFunction
{

void Joint_motor_front_leftL_joint_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
