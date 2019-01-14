/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:03 GMT-06:00
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
  double t1625;
  double t3439;
  double t3461;
  double t5903;
  double t8573;
  double t4146;
  double t4390;
  double t9505;
  double t23703;
  double t24197;
  double t24357;
  double t24504;
  double t26450;
  double t26650;
  double t26880;
  double t28312;
  double t30774;
  double t33069;
  double t33093;
  double t33105;
  double t33246;
  double t7106;
  double t7430;
  double t33266;
  double t13168;
  double t22985;
  double t33262;
  double t33449;
  double t33459;
  double t33471;
  double t33474;
  double t33481;
  double t24744;
  double t25837;
  double t25986;
  double t26828;
  double t33496;
  double t33499;
  double t33506;
  double t32987;
  double t33030;
  double t33050;
  double t33517;
  double t33518;
  double t33522;
  double t33557;
  double t33560;
  double t33565;
  double t33581;
  double t33582;
  double t33583;
  double t33586;
  double t33590;
  double t33591;
  double t33595;
  double t33604;
  double t33607;
  double t33609;
  double t33610;
  double t33611;
  double t33641;
  double t33645;
  double t33646;
  t1625 = Cos(var1[4]);
  t3439 = Cos(var1[5]);
  t3461 = Sin(var1[19]);
  t5903 = Cos(var1[19]);
  t8573 = Sin(var1[5]);
  t4146 = Sin(var1[17]);
  t4390 = Sin(var1[4]);
  t9505 = Cos(var1[17]);
  t23703 = -1.*t1625*t3439*t3461;
  t24197 = -1.*t5903*t1625*t8573;
  t24357 = t23703 + t24197;
  t24504 = Cos(var1[18]);
  t26450 = Sin(var1[18]);
  t26650 = 0.05*t26450;
  t26880 = t5903*t1625*t3439;
  t28312 = -1.*t1625*t3461*t8573;
  t30774 = t26880 + t28312;
  t33069 = t9505*t4390;
  t33093 = -1.*t4146*t24357;
  t33105 = t33069 + t33093;
  t33246 = Sin(var1[3]);
  t7106 = -1.*t5903;
  t7430 = 1. + t7106;
  t33266 = Cos(var1[3]);
  t13168 = -1.*t9505;
  t22985 = 1. + t13168;
  t33262 = t3439*t33246*t4390;
  t33449 = t33266*t8573;
  t33459 = t33262 + t33449;
  t33471 = t33266*t3439;
  t33474 = -1.*t33246*t4390*t8573;
  t33481 = t33471 + t33474;
  t24744 = -1.*t24504;
  t25837 = 1. + t24744;
  t25986 = 0.05*t25837;
  t26828 = t25986 + t26650;
  t33496 = -1.*t3461*t33459;
  t33499 = t5903*t33481;
  t33506 = t33496 + t33499;
  t32987 = -1. + t24504;
  t33030 = 0.05*t32987;
  t33050 = t33030 + t26650;
  t33517 = t5903*t33459;
  t33518 = t3461*t33481;
  t33522 = t33517 + t33518;
  t33557 = -1.*t9505*t1625*t33246;
  t33560 = -1.*t4146*t33506;
  t33565 = t33557 + t33560;
  t33581 = -1.*t33266*t3439*t4390;
  t33582 = t33246*t8573;
  t33583 = t33581 + t33582;
  t33586 = t3439*t33246;
  t33590 = t33266*t4390*t8573;
  t33591 = t33586 + t33590;
  t33595 = -1.*t3461*t33583;
  t33604 = t5903*t33591;
  t33607 = t33595 + t33604;
  t33609 = t5903*t33583;
  t33610 = t3461*t33591;
  t33611 = t33609 + t33610;
  t33641 = t9505*t33266*t1625;
  t33645 = -1.*t4146*t33607;
  t33646 = t33641 + t33645;
  p_output1[0]=-0.089*t22985*t24357 + t26828*t30774 + t33050*t33105 - 0.424*(t26450*t30774 + t24504*t33105) - 0.089*t1625*t3439*t3461 + 0.089*t4146*t4390 + 0.089*t1625*t7430*t8573 - 0.089*(t4146*t4390 + t24357*t9505) + var1[0];
  p_output1[1]=-0.089*t22985*t33506 + t26828*t33522 + t33050*t33565 - 0.424*(t26450*t33522 + t24504*t33565) - 0.089*t33459*t3461 - 0.089*t1625*t33246*t4146 - 0.089*t33481*t7430 - 0.089*(-1.*t1625*t33246*t4146 + t33506*t9505) + var1[1];
  p_output1[2]=-0.089*t22985*t33607 + t26828*t33611 + t33050*t33646 - 0.424*(t26450*t33611 + t24504*t33646) - 0.089*t33583*t3461 + 0.089*t1625*t33266*t4146 - 0.089*t33591*t7430 - 0.089*(t1625*t33266*t4146 + t33607*t9505) + var1[2];
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

#include "Joint_r_leg_kny_sphere_center.hh"

namespace SymFunction
{

void Joint_r_leg_kny_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
