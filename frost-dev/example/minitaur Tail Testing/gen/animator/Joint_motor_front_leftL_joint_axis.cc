/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:47 GMT-04:00
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
  double t1541;
  double t3541;
  double t3566;
  double t3702;
  double t2191;
  double t5087;
  double t5292;
  double t5645;
  double t5037;
  double t5062;
  double t7234;
  double t7204;
  double t5752;
  double t6190;
  double t6698;
  double t6873;
  double t7215;
  double t7260;
  double t7307;
  double t7612;
  double t7662;
  double t7703;
  double t6963;
  double t7791;
  double t7793;
  double t7795;
  double t7803;
  double t7808;
  double t7809;
  t1541 = Cos(var1[4]);
  t3541 = Cos(var1[6]);
  t3566 = -1.*t3541;
  t3702 = 1. + t3566;
  t2191 = Cos(var1[5]);
  t5087 = Sin(var1[5]);
  t5292 = Sin(var1[4]);
  t5645 = Sin(var1[6]);
  t5037 = -9.000000000000001e-12*t3702;
  t5062 = 1. + t5037;
  t7234 = Cos(var1[3]);
  t7204 = Sin(var1[3]);
  t5752 = -3.e-6*t5645;
  t6190 = 0. + t5752;
  t6698 = -1.*t3702;
  t6873 = 1. + t6698;
  t7215 = t2191*t7204*t5292;
  t7260 = t7234*t5087;
  t7307 = t7215 + t7260;
  t7612 = t7234*t2191;
  t7662 = -1.*t7204*t5292*t5087;
  t7703 = t7612 + t7662;
  t6963 = 0. + t5645;
  t7791 = -1.*t7234*t2191*t5292;
  t7793 = t7204*t5087;
  t7795 = t7791 + t7793;
  t7803 = t2191*t7204;
  t7808 = t7234*t5292*t5087;
  t7809 = t7803 + t7808;
  p_output1[0]=-3.e-6*t1541*t2191*t3702 + t1541*t5062*t5087 - 1.*t5292*t6190 - 3.e-6*(-3.e-6*t1541*t3702*t5087 + t1541*t2191*t6873 + t5292*t6963);
  p_output1[1]=t1541*t6190*t7204 - 3.e-6*t3702*t7307 - 1.*t5062*t7703 - 3.e-6*(-1.*t1541*t6963*t7204 + t6873*t7307 + 3.e-6*t3702*t7703);
  p_output1[2]=-1.*t1541*t6190*t7234 - 3.e-6*t3702*t7795 - 1.*t5062*t7809 - 3.e-6*(t1541*t6963*t7234 + t6873*t7795 + 3.e-6*t3702*t7809);
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

#include "Joint_motor_front_leftL_joint_axis.hh"

namespace SymFunction
{

void Joint_motor_front_leftL_joint_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
