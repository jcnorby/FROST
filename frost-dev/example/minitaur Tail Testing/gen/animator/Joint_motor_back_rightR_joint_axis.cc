/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:26 GMT-04:00
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
  double t73;
  double t101;
  double t105;
  double t106;
  double t110;
  double t122;
  double t128;
  double t154;
  double t124;
  double t125;
  double t588;
  double t150;
  double t152;
  double t646;
  double t526;
  double t488;
  double t518;
  double t621;
  double t671;
  double t865;
  double t894;
  double t897;
  double t898;
  double t950;
  double t952;
  double t953;
  double t956;
  double t961;
  double t966;
  t73 = Cos(var1[19]);
  t101 = -1.*t73;
  t105 = 1. + t101;
  t106 = Cos(var1[4]);
  t110 = Cos(var1[5]);
  t122 = Sin(var1[19]);
  t128 = Sin(var1[4]);
  t154 = Sin(var1[5]);
  t124 = -3.e-6*t122;
  t125 = 0. + t124;
  t588 = Sin(var1[3]);
  t150 = -9.000000000000001e-12*t105;
  t152 = 1. + t150;
  t646 = Cos(var1[3]);
  t526 = 0. + t122;
  t488 = -1.*t105;
  t518 = 1. + t488;
  t621 = t110*t588*t128;
  t671 = t646*t154;
  t865 = t621 + t671;
  t894 = t646*t110;
  t897 = -1.*t588*t128*t154;
  t898 = t894 + t897;
  t950 = -1.*t646*t110*t128;
  t952 = t588*t154;
  t953 = t950 + t952;
  t956 = t110*t588;
  t961 = t646*t128*t154;
  t966 = t956 + t961;
  p_output1[0]=-3.e-6*t105*t106*t110 - 1.*t125*t128 + t106*t152*t154 - 3.e-6*(-3.e-6*t105*t106*t154 + t106*t110*t518 + t128*t526);
  p_output1[1]=t106*t125*t588 - 3.e-6*t105*t865 - 1.*t152*t898 - 3.e-6*(-1.*t106*t526*t588 + t518*t865 + 3.e-6*t105*t898);
  p_output1[2]=-1.*t106*t125*t646 - 3.e-6*t105*t953 - 1.*t152*t966 - 3.e-6*(t106*t526*t646 + t518*t953 + 3.e-6*t105*t966);
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

#include "Joint_motor_back_rightR_joint_axis.hh"

namespace SymFunction
{

void Joint_motor_back_rightR_joint_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
