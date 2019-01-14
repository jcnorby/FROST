/*
 * Automatically Generated from Mathematica.
 * Mon 6 Aug 2018 16:06:33 GMT-04:00
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
  double t13268;
  double t54524;
  double t58907;
  double t60107;
  double t63345;
  double t19268;
  double t21848;
  double t107115;
  double t107480;
  double t107515;
  double t107561;
  double t107692;
  double t107711;
  double t108252;
  double t108277;
  double t108292;
  t13268 = Cos(var1[6]);
  t54524 = Sin(var1[4]);
  t58907 = Cos(var1[4]);
  t60107 = Cos(var1[5]);
  t63345 = Sin(var1[6]);
  t19268 = -1.*t13268;
  t21848 = 1. + t19268;
  t107115 = Sin(var1[3]);
  t107480 = t60107*t107115*t54524;
  t107515 = Cos(var1[3]);
  t107561 = Sin(var1[5]);
  t107692 = t107515*t107561;
  t107711 = t107480 + t107692;
  t108252 = -1.*t107515*t60107*t54524;
  t108277 = t107115*t107561;
  t108292 = t108252 + t108277;
  p_output1[0]=0.1*t21848*t54524 - 0.1*t58907*t60107*t63345 + 0.1*(t13268*t54524 + t58907*t60107*t63345) + var1[0];
  p_output1[1]=-0.1*t107115*t21848*t58907 - 0.1*t107711*t63345 + 0.1*(-1.*t107115*t13268*t58907 + t107711*t63345) + var1[1];
  p_output1[2]=0.1*t107515*t21848*t58907 - 0.1*t108292*t63345 + 0.1*(t107515*t13268*t58907 + t108292*t63345) + var1[2];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
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

#include "Joint_tail_joint_sphere_center.hh"

namespace SymFunction
{

void Joint_tail_joint_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
