/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:17 GMT-04:00
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
  double t2381;
  double t2247;
  double t2306;
  double t2326;
  double t2555;
  double t546;
  double t1452;
  double t2210;
  double t2359;
  double t3044;
  double t3323;
  double t3466;
  double t5696;
  double t5716;
  double t5721;
  double t5746;
  double t5732;
  double t5741;
  double t4156;
  double t5691;
  double t5842;
  double t5829;
  double t5867;
  double t5869;
  double t5872;
  double t5833;
  double t5849;
  double t5853;
  double t5793;
  double t5798;
  double t5862;
  double t5874;
  double t5884;
  double t5776;
  double t5780;
  double t5889;
  double t5892;
  double t5893;
  double t5966;
  double t5967;
  double t5970;
  double t5914;
  double t5915;
  double t5918;
  double t5922;
  double t5974;
  double t5975;
  double t5982;
  double t5983;
  double t5986;
  t2381 = Cos(var1[14]);
  t2247 = Cos(var1[4]);
  t2306 = Cos(var1[5]);
  t2326 = Sin(var1[14]);
  t2555 = Sin(var1[4]);
  t546 = Cos(var1[16]);
  t1452 = -1.*t546;
  t2210 = 1. + t1452;
  t2359 = t2247*t2306*t2326;
  t3044 = t2381*t2555;
  t3323 = t2359 + t3044;
  t3466 = Sin(var1[16]);
  t5696 = t2381*t2247*t2306;
  t5716 = -1.*t2326*t2555;
  t5721 = t5696 + t5716;
  t5746 = Sin(var1[5]);
  t5732 = -9.000000000000001e-12*t2210;
  t5741 = 1. + t5732;
  t4156 = -3.e-6*t3466;
  t5691 = 0. + t4156;
  t5842 = Sin(var1[3]);
  t5829 = Cos(var1[3]);
  t5867 = t2306*t5842*t2555;
  t5869 = t5829*t5746;
  t5872 = t5867 + t5869;
  t5833 = t5829*t2306;
  t5849 = -1.*t5842*t2555*t5746;
  t5853 = t5833 + t5849;
  t5793 = -1.*t3466;
  t5798 = 0. + t5793;
  t5862 = t2247*t2326*t5842;
  t5874 = t2381*t5872;
  t5884 = t5862 + t5874;
  t5776 = -1.*t2210;
  t5780 = 1. + t5776;
  t5889 = -1.*t2381*t2247*t5842;
  t5892 = t2326*t5872;
  t5893 = t5889 + t5892;
  t5966 = -1.*t5829*t2306*t2555;
  t5967 = t5842*t5746;
  t5970 = t5966 + t5967;
  t5914 = t2306*t5842;
  t5915 = t5829*t2555*t5746;
  t5918 = t5914 + t5915;
  t5922 = -1.*t5829*t2247*t2326;
  t5974 = t2381*t5970;
  t5975 = t5922 + t5974;
  t5982 = t2381*t5829*t2247;
  t5983 = t2326*t5970;
  t5986 = t5982 + t5983;
  p_output1[0]=3.e-6*t2210*t3323 - 1.*t5691*t5721 + t2247*t5741*t5746 + 3.e-6*(3.e-6*t2210*t2247*t5746 + t3323*t5780 + t5721*t5798);
  p_output1[1]=-1.*t5741*t5853 - 1.*t5691*t5884 + 3.e-6*t2210*t5893 + 3.e-6*(-3.e-6*t2210*t5853 + t5798*t5884 + t5780*t5893);
  p_output1[2]=-1.*t5741*t5918 - 1.*t5691*t5975 + 3.e-6*t2210*t5986 + 3.e-6*(-3.e-6*t2210*t5918 + t5798*t5975 + t5780*t5986);
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

#include "Joint_knee_front_rightL_link_axis.hh"

namespace SymFunction
{

void Joint_knee_front_rightL_link_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
