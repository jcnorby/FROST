/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:41 GMT-06:00
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
  double t1306;
  double t1552;
  double t1688;
  double t1532;
  double t2055;
  double t2252;
  double t2264;
  double t2388;
  double t2420;
  double t2528;
  double t2868;
  double t2953;
  double t2954;
  double t1598;
  double t3038;
  double t1629;
  double t3078;
  double t3168;
  double t3172;
  double t3175;
  double t3070;
  double t3141;
  double t3154;
  double t2670;
  double t3242;
  double t3268;
  double t3302;
  double t3326;
  double t3332;
  double t3333;
  double t3432;
  double t3434;
  double t3444;
  double t3419;
  double t3420;
  double t3424;
  double t3469;
  double t3479;
  double t3487;
  double t3493;
  double t3495;
  double t3505;
  t1306 = Cos(var1[4]);
  t1552 = Cos(var1[8]);
  t1688 = Sin(var1[5]);
  t1532 = Cos(var1[5]);
  t2055 = Sin(var1[8]);
  t2252 = Sin(var1[7]);
  t2264 = -1.*t1306*t1552*t1688;
  t2388 = -1.*t1306*t1532*t2055;
  t2420 = t2264 + t2388;
  t2528 = Cos(var1[7]);
  t2868 = t1306*t1532*t1552;
  t2953 = -1.*t1306*t1688*t2055;
  t2954 = t2868 + t2953;
  t1598 = -1. + t1552;
  t3038 = Sin(var1[3]);
  t1629 = Sin(var1[4]);
  t3078 = Cos(var1[3]);
  t3168 = t3078*t1532;
  t3172 = -1.*t3038*t1629*t1688;
  t3175 = t3168 + t3172;
  t3070 = t1532*t3038*t1629;
  t3141 = t3078*t1688;
  t3154 = t3070 + t3141;
  t2670 = -1. + t2528;
  t3242 = t1552*t3175;
  t3268 = -1.*t3154*t2055;
  t3302 = t3242 + t3268;
  t3326 = t1552*t3154;
  t3332 = t3175*t2055;
  t3333 = t3326 + t3332;
  t3432 = t1532*t3038;
  t3434 = t3078*t1629*t1688;
  t3444 = t3432 + t3434;
  t3419 = -1.*t3078*t1532*t1629;
  t3420 = t3038*t1688;
  t3424 = t3419 + t3420;
  t3469 = t1552*t3444;
  t3479 = -1.*t3424*t2055;
  t3487 = t3469 + t3479;
  t3493 = t1552*t3424;
  t3495 = t3444*t2055;
  t3505 = t3493 + t3495;
  p_output1[0]=0.0125*t1306*t1532*t1598 + 0.21197*t1629 - 0.0125*t1306*t1688*t2055 + 0.0125*t2252*t2420 + 0.0125*t2670*t2954 + 0.0125*(-1.*t2252*t2420 - 1.*t2528*t2954) + var1[0];
  p_output1[1]=-0.21197*t1306*t3038 + 0.0125*t1598*t3154 + 0.0125*t2055*t3175 + 0.0125*t2252*t3302 + 0.0125*t2670*t3333 + 0.0125*(-1.*t2252*t3302 - 1.*t2528*t3333) + var1[1];
  p_output1[2]=0.21197*t1306*t3078 + 0.0125*t1598*t3424 + 0.0125*t2055*t3444 + 0.0125*t2252*t3487 + 0.0125*t2670*t3505 + 0.0125*(-1.*t2252*t3487 - 1.*t2528*t3505) + var1[2];
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

#include "Joint_back_bkx_sphere_center.hh"

namespace SymFunction
{

void Joint_back_bkx_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
