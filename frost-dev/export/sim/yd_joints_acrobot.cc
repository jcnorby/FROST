/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:50 GMT-05:00
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
  double t24166;
  double t38312;
  double t50382;
  double t56200;
  double t58003;
  double t58029;
  double t50029;
  double t53702;
  double t54542;
  double t55501;
  double t58205;
  double t58777;
  double t58792;
  double t64861;
  double t65065;
  double t65066;
  double t65203;
  double t65238;
  t24166 = -1.*var3[1];
  t38312 = var3[0] + t24166;
  t50382 = t24166 + var1[0];
  t56200 = 1/t38312;
  t58003 = -1.*t56200*t50382;
  t58029 = 1. + t58003;
  t50029 = Power(t38312,-5);
  t53702 = Power(t50382,5);
  t54542 = Power(t38312,-4);
  t55501 = Power(t50382,4);
  t58205 = Power(t38312,-3);
  t58777 = Power(t50382,3);
  t58792 = Power(t58029,2);
  t64861 = Power(t38312,-2);
  t65065 = Power(t50382,2);
  t65066 = Power(t58029,3);
  t65203 = Power(t58029,4);
  t65238 = Power(t58029,5);
  p_output1[0]=t65238*var2[0] + 5.*t50382*t56200*t65203*var2[3] + 10.*t64861*t65065*t65066*var2[6] + 10.*t58205*t58777*t58792*var2[9] + 5.*t54542*t55501*t58029*var2[12] + t50029*t53702*var2[15];
  p_output1[1]=t65238*var2[1] + 5.*t50382*t56200*t65203*var2[4] + 10.*t64861*t65065*t65066*var2[7] + 10.*t58205*t58777*t58792*var2[10] + 5.*t54542*t55501*t58029*var2[13] + t50029*t53702*var2[16];
  p_output1[2]=t65238*var2[2] + 5.*t50382*t56200*t65203*var2[5] + 10.*t64861*t65065*t65066*var2[8] + 10.*t58205*t58777*t58792*var2[11] + 5.*t54542*t55501*t58029*var2[14] + t50029*t53702*var2[17];
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

#include "yd_joints_acrobot.hh"

namespace SymFunction
{

void yd_joints_acrobot_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
