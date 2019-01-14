/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:40 GMT-06:00
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
  double t499;
  double t574;
  double t727;
  double t1470;
  double t1514;
  double t760;
  double t1673;
  double t1403;
  double t1698;
  double t1691;
  double t1734;
  double t2038;
  double t2076;
  double t2162;
  double t2181;
  double t2579;
  double t2641;
  double t2656;
  double t2684;
  double t2738;
  double t2920;
  t499 = Cos(var1[4]);
  t574 = Cos(var1[5]);
  t727 = Cos(var1[8]);
  t1470 = Sin(var1[5]);
  t1514 = Sin(var1[8]);
  t760 = -1. + t727;
  t1673 = Sin(var1[3]);
  t1403 = Sin(var1[4]);
  t1698 = Cos(var1[3]);
  t1691 = t574*t1673*t1403;
  t1734 = t1698*t1470;
  t2038 = t1691 + t1734;
  t2076 = t1698*t574;
  t2162 = -1.*t1673*t1403*t1470;
  t2181 = t2076 + t2162;
  t2579 = -1.*t1698*t574*t1403;
  t2641 = t1673*t1470;
  t2656 = t2579 + t2641;
  t2684 = t574*t1673;
  t2738 = t1698*t1403*t1470;
  t2920 = t2684 + t2738;
  p_output1[0]=0.16197*t1403 - 0.0125*t1470*t1514*t499 + 0.0125*(t1470*t1514*t499 - 1.*t499*t574*t727) + 0.0125*t499*t574*t760 + var1[0];
  p_output1[1]=0.0125*t1514*t2181 - 0.16197*t1673*t499 + 0.0125*(-1.*t1514*t2181 - 1.*t2038*t727) + 0.0125*t2038*t760 + var1[1];
  p_output1[2]=0.0125*t1514*t2920 + 0.16197*t1698*t499 + 0.0125*(-1.*t1514*t2920 - 1.*t2656*t727) + 0.0125*t2656*t760 + var1[2];
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

#include "Joint_back_bky_sphere_center.hh"

namespace SymFunction
{

void Joint_back_bky_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
