/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:23 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t30;
  double t33;
  double t34;
  double t48;
  double t55;
  double t57;
  double t59;
  double t62;
  double t68;
  double t77;
  double t28;
  t30 = -0.05*var1[0];
  t33 = 1. + t30;
  t34 = Power(t33,3);
  t48 = Power(t33,2);
  t55 = Power(var1[0],2);
  t57 = 0.05*var1[0];
  t59 = -1. + t57;
  t62 = Power(var1[0],3);
  t68 = Power(t33,4);
  t77 = Power(var1[0],4);
  t28 = 0. + var1[1];
  p_output1[0]=-1.*t28*(0.05*t34*var2[0] - 0.1*t34*var2[1] + 0.0075*t48*var1[0]*var2[1] + 0.05*t34*var2[2] - 0.000375*t55*t59*var2[2] - 0.015*t48*var1[0]*var2[2] + 0.00075*t55*t59*var2[3] + 6.25e-6*t62*var2[3] + 0.0075*t48*var1[0]*var2[3] + 0.000375*t33*t55*var2[4] - 0.0000125*t62*var2[4] + 6.25e-6*t62*var2[5]);
  p_output1[1]=var1[4] + 0.25*t68*var2[0] - 0.25*t68*var2[1] + 0.05*t34*var1[0]*var2[1] + 0.00375*t48*t55*var2[2] - 0.05*t34*var1[0]*var2[2] - 0.00375*t48*t55*var2[3] - 0.000125*t59*t62*var2[3] - 0.000125*t33*t62*var2[4] + 1.5625e-6*t77*var2[4] - 1.5625e-6*t77*var2[5];
  p_output1[2]=1.;
  p_output1[3]=var1[1];
  p_output1[4]=20.;
  p_output1[5]=0.25*t28*t68;
  p_output1[6]=-1.*t28*(0.25*t68 - 0.05*t34*var1[0]);
  p_output1[7]=-1.*t28*(-0.00375*t48*t55 + 0.05*t34*var1[0]);
  p_output1[8]=-1.*t28*(0.00375*t48*t55 + 0.000125*t59*t62);
  p_output1[9]=-1.*t28*(0.000125*t33*t62 - 1.5625e-6*t77);
  p_output1[10]=-1.5625e-6*t28*t77;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_y_LinearTruck.hh"

namespace truckopt
{

void J_d1y_y_LinearTruck_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
