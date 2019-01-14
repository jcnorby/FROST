/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:26 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t51;
  double t52;
  double t54;
  double t63;
  double t67;
  double t70;
  double t71;
  double t74;
  double t81;
  double t90;
  double t47;
  t51 = -0.05*var1[0];
  t52 = 1. + t51;
  t54 = Power(t52,3);
  t63 = Power(t52,2);
  t67 = Power(var1[0],2);
  t70 = 0.05*var1[0];
  t71 = -1. + t70;
  t74 = Power(var1[0],3);
  t81 = Power(t52,4);
  t90 = Power(var1[0],4);
  t47 = 0. + var1[1];
  p_output1[0]=var2[3] + var1[1]*var2[4] + 20.*var2[5] - 1.*t47*var2[0]*(0.05*t54*var3[0] - 0.1*t54*var3[1] + 0.0075*t63*var1[0]*var3[1] + 0.05*t54*var3[2] - 0.000375*t67*t71*var3[2] - 0.015*t63*var1[0]*var3[2] + 0.00075*t67*t71*var3[3] + 6.25e-6*t74*var3[3] + 0.0075*t63*var1[0]*var3[3] + 0.000375*t52*t67*var3[4] - 0.0000125*t74*var3[4] + 6.25e-6*t74*var3[5]) + var2[1]*(var1[4] + 0.25*t81*var3[0] - 0.25*t81*var3[1] + 0.05*t54*var1[0]*var3[1] + 0.00375*t63*t67*var3[2] - 0.05*t54*var1[0]*var3[2] - 0.00375*t63*t67*var3[3] - 0.000125*t71*t74*var3[3] - 0.000125*t52*t74*var3[4] + 1.5625e-6*t90*var3[4] - 1.5625e-6*t90*var3[5]) + (var1[2] + 20.*var1[4] - 1.*Power(t52,5)*var3[0] - 0.25*t81*var1[0]*var3[1] - 0.025*t54*t67*var3[2] - 0.00125*t63*t74*var3[3] - 0.00003125*t52*t90*var3[4] - 3.125e-7*Power(var1[0],5)*var3[5])*var4[0] + (0. + var1[3] + var1[1]*var1[4] + 20.*(0. + var1[5]) - 1.*t47*(-0.25*t81*var3[0] + 0.25*t81*var3[1] - 0.05*t54*var1[0]*var3[1] - 0.00375*t63*t67*var3[2] + 0.05*t54*var1[0]*var3[2] + 0.00375*t63*t67*var3[3] + 0.000125*t71*t74*var3[3] + 0.000125*t52*t74*var3[4] - 1.5625e-6*t90*var3[4] + 1.5625e-6*t90*var3[5]))*var4[1];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "d2y_y_LinearTruck.hh"

namespace truckopt
{

void d2y_y_LinearTruck_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
