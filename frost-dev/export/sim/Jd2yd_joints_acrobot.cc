/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:52 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t694;
  double t695;
  double t713;
  double t724;
  double t790;
  double t962;
  double t1005;
  double t1017;
  double t1093;
  double t1095;
  double t1175;
  double t1183;
  double t1294;
  double t1366;
  t694 = -1.*var3[1];
  t695 = var3[0] + t694;
  t713 = Power(t695,-5);
  t724 = t694 + var1[0];
  t790 = Power(t724,3);
  t962 = Power(t695,-4);
  t1005 = Power(t724,2);
  t1017 = 1/t695;
  t1093 = -1.*t1017*t724;
  t1095 = 1. + t1093;
  t1175 = Power(t695,-3);
  t1183 = Power(t1095,2);
  t1294 = Power(t695,-2);
  t1366 = Power(t1095,3);
  p_output1[0]=20.*t1294*t1366*var2[0] - 40.*t1294*t1366*var2[3] + 60.*t1175*t1183*t724*var2[3] + 20.*t1294*t1366*var2[6] - 120.*t1175*t1183*t724*var2[6] + 60.*t1005*t1095*t962*var2[6] + 60.*t1175*t1183*t724*var2[9] + 20.*t713*t790*var2[9] - 120.*t1005*t1095*t962*var2[9] - 40.*t713*t790*var2[12] + 60.*t1005*t1095*t962*var2[12] + 20.*t713*t790*var2[15];
  p_output1[1]=20.*t1294*t1366*var2[1] - 40.*t1294*t1366*var2[4] + 60.*t1175*t1183*t724*var2[4] + 20.*t1294*t1366*var2[7] - 120.*t1175*t1183*t724*var2[7] + 60.*t1005*t1095*t962*var2[7] + 60.*t1175*t1183*t724*var2[10] + 20.*t713*t790*var2[10] - 120.*t1005*t1095*t962*var2[10] - 40.*t713*t790*var2[13] + 60.*t1005*t1095*t962*var2[13] + 20.*t713*t790*var2[16];
  p_output1[2]=20.*t1294*t1366*var2[2] - 40.*t1294*t1366*var2[5] + 60.*t1175*t1183*t724*var2[5] + 20.*t1294*t1366*var2[8] - 120.*t1175*t1183*t724*var2[8] + 60.*t1005*t1095*t962*var2[8] + 60.*t1175*t1183*t724*var2[11] + 20.*t713*t790*var2[11] - 120.*t1005*t1095*t962*var2[11] - 40.*t713*t790*var2[14] + 60.*t1005*t1095*t962*var2[14] + 20.*t713*t790*var2[17];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_joints_acrobot.hh"

namespace SymFunction
{

void Jd2yd_joints_acrobot_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
