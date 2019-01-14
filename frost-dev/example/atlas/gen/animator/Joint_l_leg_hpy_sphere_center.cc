/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:56 GMT-06:00
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
  double t9921;
  double t9940;
  double t10046;
  double t10481;
  double t10566;
  double t10356;
  double t10360;
  double t10612;
  double t10642;
  double t10747;
  double t10750;
  double t11798;
  double t10536;
  double t10539;
  double t11952;
  double t10630;
  double t10632;
  double t11904;
  double t12019;
  double t12058;
  double t12063;
  double t12126;
  double t12138;
  double t12234;
  double t12249;
  double t12290;
  double t12843;
  double t12965;
  double t12968;
  double t13092;
  double t13093;
  double t13203;
  double t13226;
  double t13248;
  double t13249;
  t9921 = Cos(var1[4]);
  t9940 = Cos(var1[5]);
  t10046 = Sin(var1[13]);
  t10481 = Cos(var1[13]);
  t10566 = Sin(var1[5]);
  t10356 = Sin(var1[11]);
  t10360 = Sin(var1[4]);
  t10612 = Cos(var1[11]);
  t10642 = -1.*t9921*t9940*t10046;
  t10747 = -1.*t10481*t9921*t10566;
  t10750 = t10642 + t10747;
  t11798 = Sin(var1[3]);
  t10536 = -1.*t10481;
  t10539 = 1. + t10536;
  t11952 = Cos(var1[3]);
  t10630 = -1.*t10612;
  t10632 = 1. + t10630;
  t11904 = t9940*t11798*t10360;
  t12019 = t11952*t10566;
  t12058 = t11904 + t12019;
  t12063 = t11952*t9940;
  t12126 = -1.*t11798*t10360*t10566;
  t12138 = t12063 + t12126;
  t12234 = -1.*t10046*t12058;
  t12249 = t10481*t12138;
  t12290 = t12234 + t12249;
  t12843 = -1.*t11952*t9940*t10360;
  t12965 = t11798*t10566;
  t12968 = t12843 + t12965;
  t13092 = t9940*t11798;
  t13093 = t11952*t10360*t10566;
  t13203 = t13092 + t13093;
  t13226 = -1.*t10046*t12968;
  t13248 = t10481*t13203;
  t13249 = t13226 + t13248;
  p_output1[0]=-0.089*t10356*t10360 + 0.089*t10632*t10750 + 0.05*(-1.*t10360*t10612 + t10356*t10750) + 0.089*(t10356*t10360 + t10612*t10750) - 0.089*t10539*t10566*t9921 + 0.089*t10046*t9921*t9940 + 0.05*(-1.*t10046*t10566*t9921 + t10481*t9921*t9940) + var1[0];
  p_output1[1]=0.089*t10046*t12058 + 0.089*t10539*t12138 + 0.05*(t10481*t12058 + t10046*t12138) + 0.089*t10632*t12290 + 0.089*t10356*t11798*t9921 + 0.089*(t10612*t12290 - 1.*t10356*t11798*t9921) + 0.05*(t10356*t12290 + t10612*t11798*t9921) + var1[1];
  p_output1[2]=0.089*t10046*t12968 + 0.089*t10539*t13203 + 0.05*(t10481*t12968 + t10046*t13203) + 0.089*t10632*t13249 - 0.089*t10356*t11952*t9921 + 0.089*(t10612*t13249 + t10356*t11952*t9921) + 0.05*(t10356*t13249 - 1.*t10612*t11952*t9921) + var1[2];
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

#include "Joint_l_leg_hpy_sphere_center.hh"

namespace SymFunction
{

void Joint_l_leg_hpy_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
