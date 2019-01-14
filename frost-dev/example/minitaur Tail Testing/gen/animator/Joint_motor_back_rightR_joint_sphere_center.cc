/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:25 GMT-04:00
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
  double t62;
  double t65;
  double t67;
  double t69;
  double t70;
  double t96;
  double t100;
  double t104;
  double t187;
  double t290;
  double t240;
  double t454;
  double t478;
  double t113;
  double t117;
  double t493;
  double t494;
  double t515;
  double t716;
  double t831;
  double t863;
  double t866;
  double t872;
  double t873;
  t62 = Cos(var1[19]);
  t65 = -1.*t62;
  t67 = 1. + t65;
  t69 = Cos(var1[4]);
  t70 = Cos(var1[5]);
  t96 = Sin(var1[19]);
  t100 = Sin(var1[4]);
  t104 = Sin(var1[5]);
  t187 = Sin(var1[3]);
  t290 = Cos(var1[3]);
  t240 = t70*t187*t100;
  t454 = t290*t104;
  t478 = t240 + t454;
  t113 = -9.e-12*t67;
  t117 = 1. + t113;
  t493 = t290*t70;
  t494 = -1.*t187*t100*t104;
  t515 = t493 + t494;
  t716 = -1.*t290*t70*t100;
  t831 = t187*t104;
  t863 = t716 + t831;
  t866 = t70*t187;
  t872 = t290*t100*t104;
  t873 = t866 + t872;
  p_output1[0]=-6.75000000006075e-7*t104*t67*t69 - 0.225000000002025*t67*t69*t70 + 0.225000000002025*t100*t96 - 0.13*(-1.*t104*t117*t69 + 3.e-6*t67*t69*t70 - 3.e-6*t100*t96) - 0.225*(-3.e-6*t104*t67*t69 + t62*t69*t70 + t100*t96) + var1[0];
  p_output1[1]=-0.225000000002025*t478*t67 + 6.75000000006075e-7*t515*t67 - 0.225000000002025*t187*t69*t96 - 0.225*(t478*t62 + 3.e-6*t515*t67 - 1.*t187*t69*t96) - 0.13*(t117*t515 + 3.e-6*t478*t67 + 3.e-6*t187*t69*t96) + var1[1];
  p_output1[2]=-0.225000000002025*t67*t863 + 6.75000000006075e-7*t67*t873 + 0.225000000002025*t290*t69*t96 - 0.13*(3.e-6*t67*t863 + t117*t873 - 3.e-6*t290*t69*t96) - 0.225*(t62*t863 + 3.e-6*t67*t873 + t290*t69*t96) + var1[2];
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

#include "Joint_motor_back_rightR_joint_sphere_center.hh"

namespace SymFunction
{

void Joint_motor_back_rightR_joint_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
