/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:09 GMT-06:00
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
  double t1810;
  double t4816;
  double t5763;
  double t6683;
  double t6881;
  double t6542;
  double t6561;
  double t6901;
  double t8731;
  double t8855;
  double t9263;
  double t13034;
  double t6808;
  double t6833;
  double t13200;
  double t6931;
  double t7705;
  double t13160;
  double t13201;
  double t13234;
  double t13270;
  double t13293;
  double t13294;
  double t13329;
  double t13490;
  double t13634;
  double t14476;
  double t14510;
  double t14511;
  double t14518;
  double t14520;
  double t14521;
  double t14532;
  double t14534;
  double t14535;
  t1810 = Cos(var1[4]);
  t4816 = Cos(var1[5]);
  t5763 = Sin(var1[19]);
  t6683 = Cos(var1[19]);
  t6881 = Sin(var1[5]);
  t6542 = Sin(var1[17]);
  t6561 = Sin(var1[4]);
  t6901 = Cos(var1[17]);
  t8731 = -1.*t1810*t4816*t5763;
  t8855 = -1.*t6683*t1810*t6881;
  t9263 = t8731 + t8855;
  t13034 = Sin(var1[3]);
  t6808 = -1.*t6683;
  t6833 = 1. + t6808;
  t13200 = Cos(var1[3]);
  t6931 = -1.*t6901;
  t7705 = 1. + t6931;
  t13160 = t4816*t13034*t6561;
  t13201 = t13200*t6881;
  t13234 = t13160 + t13201;
  t13270 = t13200*t4816;
  t13293 = -1.*t13034*t6561*t6881;
  t13294 = t13270 + t13293;
  t13329 = -1.*t5763*t13234;
  t13490 = t6683*t13294;
  t13634 = t13329 + t13490;
  t14476 = -1.*t13200*t4816*t6561;
  t14510 = t13034*t6881;
  t14511 = t14476 + t14510;
  t14518 = t4816*t13034;
  t14520 = t13200*t6561*t6881;
  t14521 = t14518 + t14520;
  t14532 = -1.*t5763*t14511;
  t14534 = t6683*t14521;
  t14535 = t14532 + t14534;
  p_output1[0]=-0.089*t1810*t4816*t5763 + 0.089*t6542*t6561 + 0.089*t1810*t6833*t6881 + 0.05*(t1810*t4816*t6683 - 1.*t1810*t5763*t6881) - 0.089*t7705*t9263 + 0.05*(-1.*t6561*t6901 + t6542*t9263) - 0.089*(t6542*t6561 + t6901*t9263) + var1[0];
  p_output1[1]=-0.089*t13234*t5763 - 0.089*t13034*t1810*t6542 + 0.05*(t13294*t5763 + t13234*t6683) - 0.089*t13294*t6833 - 0.089*(-1.*t13034*t1810*t6542 + t13634*t6901) + 0.05*(t13634*t6542 + t13034*t1810*t6901) - 0.089*t13634*t7705 + var1[1];
  p_output1[2]=-0.089*t14511*t5763 + 0.089*t13200*t1810*t6542 + 0.05*(t14521*t5763 + t14511*t6683) - 0.089*t14521*t6833 - 0.089*(t13200*t1810*t6542 + t14535*t6901) + 0.05*(t14535*t6542 - 1.*t13200*t1810*t6901) - 0.089*t14535*t7705 + var1[2];
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

#include "Joint_r_leg_hpy_sphere_center.hh"

namespace SymFunction
{

void Joint_r_leg_hpy_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
