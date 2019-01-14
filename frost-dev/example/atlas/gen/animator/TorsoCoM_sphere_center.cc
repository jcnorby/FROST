/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:16 GMT-06:00
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
  double t187;
  double t2605;
  double t68;
  double t3384;
  double t3891;
  double t4384;
  double t4665;
  double t4679;
  double t5096;
  double t5416;
  double t5440;
  double t5477;
  double t306;
  double t6302;
  double t1740;
  double t6469;
  double t6811;
  double t6943;
  double t7050;
  double t6426;
  double t6703;
  double t6793;
  double t5208;
  double t7527;
  double t8025;
  double t8031;
  double t8053;
  double t8057;
  double t8065;
  double t8544;
  double t8551;
  double t8555;
  double t8161;
  double t8167;
  double t8172;
  double t8584;
  double t8591;
  double t8592;
  double t8607;
  double t8655;
  double t8734;
  t29 = Cos(var1[4]);
  t187 = Cos(var1[8]);
  t2605 = Sin(var1[5]);
  t68 = Cos(var1[5]);
  t3384 = Sin(var1[8]);
  t3891 = Sin(var1[7]);
  t4384 = -1.*t29*t187*t2605;
  t4665 = -1.*t29*t68*t3384;
  t4679 = t4384 + t4665;
  t5096 = Cos(var1[7]);
  t5416 = t29*t68*t187;
  t5440 = -1.*t29*t2605*t3384;
  t5477 = t5416 + t5440;
  t306 = -1. + t187;
  t6302 = Sin(var1[3]);
  t1740 = Sin(var1[4]);
  t6469 = Cos(var1[3]);
  t6811 = t6469*t68;
  t6943 = -1.*t6302*t1740*t2605;
  t7050 = t6811 + t6943;
  t6426 = t68*t6302*t1740;
  t6703 = t6469*t2605;
  t6793 = t6426 + t6703;
  t5208 = -1. + t5096;
  t7527 = t187*t7050;
  t8025 = -1.*t6793*t3384;
  t8031 = t7527 + t8025;
  t8053 = t187*t6793;
  t8057 = t7050*t3384;
  t8065 = t8053 + t8057;
  t8544 = t68*t6302;
  t8551 = t6469*t1740*t2605;
  t8555 = t8544 + t8551;
  t8161 = -1.*t6469*t68*t1740;
  t8167 = t6302*t2605;
  t8172 = t8161 + t8167;
  t8584 = t187*t8555;
  t8591 = -1.*t8172*t3384;
  t8592 = t8584 + t8591;
  t8607 = t187*t8172;
  t8655 = t8555*t3384;
  t8734 = t8607 + t8655;
  p_output1[0]=0.192567*t1740 - 0.0125*t2605*t29*t3384 + 0.0125*t3891*t4679 + 0.0125*t5208*t5477 - 0.013125*(t4679*t5096 - 1.*t3891*t5477) - 0.020663*(t3891*t4679 + t5096*t5477) + 0.0125*t29*t306*t68 + var1[0];
  p_output1[1]=-0.192567*t29*t6302 + 0.0125*t306*t6793 + 0.0125*t3384*t7050 + 0.0125*t3891*t8031 + 0.0125*t5208*t8065 - 0.013125*(t5096*t8031 - 1.*t3891*t8065) - 0.020663*(t3891*t8031 + t5096*t8065) + var1[1];
  p_output1[2]=0.192567*t29*t6469 + 0.0125*t306*t8172 + 0.0125*t3384*t8555 + 0.0125*t3891*t8592 + 0.0125*t5208*t8734 - 0.013125*(t5096*t8592 - 1.*t3891*t8734) - 0.020663*(t3891*t8592 + t5096*t8734) + var1[2];
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
    ( !(mrows == 21 && ncols == 1) && 
      !(mrows == 1 && ncols == 21))) 
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

#include "TorsoCoM_sphere_center.hh"

namespace SymFunction
{

void TorsoCoM_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
