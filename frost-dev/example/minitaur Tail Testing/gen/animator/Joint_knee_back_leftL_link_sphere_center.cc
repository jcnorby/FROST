/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:05 GMT-04:00
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
  double t61;
  double t305;
  double t1640;
  double t1644;
  double t2273;
  double t2305;
  double t2325;
  double t2346;
  double t2383;
  double t1648;
  double t1682;
  double t1686;
  double t1888;
  double t2495;
  double t2496;
  double t3779;
  double t2407;
  double t2456;
  double t3941;
  double t3137;
  double t3169;
  double t3280;
  double t3330;
  double t3331;
  double t3679;
  double t4389;
  double t5057;
  double t5113;
  double t5239;
  double t6854;
  double t6874;
  double t6926;
  double t6937;
  double t6979;
  double t7004;
  double t7063;
  double t7147;
  double t7172;
  double t7087;
  double t4004;
  double t7075;
  double t7245;
  double t7449;
  double t7458;
  double t2227;
  double t2329;
  double t2481;
  double t2953;
  double t2963;
  double t7456;
  double t7459;
  double t7463;
  double t7493;
  double t7495;
  double t7497;
  double t3893;
  double t4044;
  double t4060;
  double t4066;
  double t4105;
  double t5594;
  double t6166;
  double t6487;
  double t6694;
  double t6795;
  double t7504;
  double t7513;
  double t7514;
  double t7515;
  double t7104;
  double t7517;
  double t7518;
  double t7520;
  double t7522;
  double t7525;
  double t7526;
  double t7529;
  double t7530;
  double t7335;
  double t7394;
  double t7410;
  double t7587;
  double t7588;
  double t7589;
  double t7593;
  double t7594;
  double t7597;
  double t7600;
  double t7601;
  double t7602;
  double t7604;
  double t7612;
  double t7620;
  double t7621;
  double t7628;
  double t7633;
  double t7634;
  double t7635;
  double t7637;
  t61 = Cos(var1[10]);
  t305 = -1.*t61;
  t1640 = 1. + t305;
  t1644 = Cos(var1[4]);
  t2273 = Cos(var1[12]);
  t2305 = -1.*t2273;
  t2325 = 1. + t2305;
  t2346 = -3.e-6*t2325;
  t2383 = Sin(var1[12]);
  t1648 = Cos(var1[5]);
  t1682 = Sin(var1[10]);
  t1686 = Sin(var1[4]);
  t1888 = Sin(var1[5]);
  t2495 = 3.e-6*t2383;
  t2496 = t2346 + t2495;
  t3779 = 7.5e-14*var1[12];
  t2407 = -3.e-6*t2383;
  t2456 = t2346 + t2407;
  t3941 = -9.e-12*t2325;
  t3137 = 3.e-6*t1640*t1644*t1648;
  t3169 = -3.e-6*t1682*t1686;
  t3280 = -9.e-12*t1640;
  t3330 = 1. + t3280;
  t3331 = -1.*t3330*t1644*t1888;
  t3679 = t3137 + t3169 + t3331;
  t4389 = t61*t1644*t1648;
  t5057 = t1682*t1686;
  t5113 = -3.e-6*t1640*t1644*t1888;
  t5239 = t4389 + t5057 + t5113;
  t6854 = -1.*t1644*t1648*t1682;
  t6874 = -1.000000000009*t1640;
  t6926 = 1. + t6874;
  t6937 = t6926*t1686;
  t6979 = -3.e-6*t1644*t1682*t1888;
  t7004 = t6854 + t6937 + t6979;
  t7063 = 3.e-6*t2325;
  t7147 = -1.000000000009*t2325;
  t7172 = 1. + t7147;
  t7087 = 9.e-12*t2325;
  t4004 = -1.*t2383;
  t7075 = t7063 + t2407;
  t7245 = t7063 + t2495;
  t7449 = Sin(var1[3]);
  t7458 = Cos(var1[3]);
  t2227 = 2.5e-8*var1[12];
  t2329 = 6.75e-18*t2325;
  t2481 = -0.225000000003*t2456;
  t2953 = 0.100000000003*t2496;
  t2963 = t2227 + t2329 + t2481 + t2953;
  t7456 = t1648*t7449*t1686;
  t7459 = t7458*t1888;
  t7463 = t7456 + t7459;
  t7493 = t7458*t1648;
  t7495 = -1.*t7449*t1686*t1888;
  t7497 = t7493 + t7495;
  t3893 = -0.225000000005025*t2325;
  t4044 = t3941 + t4004;
  t4060 = 0.100000000003*t4044;
  t4066 = 3.75e-7*t2496;
  t4105 = t3779 + t3893 + t4060 + t4066;
  t5594 = 0.1000000000039*t2325;
  t6166 = 3.75e-7*t2456;
  t6487 = t3941 + t2383;
  t6694 = -0.225000000003*t6487;
  t6795 = t3779 + t5594 + t6166 + t6694;
  t7504 = 3.e-6*t1644*t1682*t7449;
  t7513 = 3.e-6*t1640*t7463;
  t7514 = t3330*t7497;
  t7515 = t7504 + t7513 + t7514;
  t7104 = t7087 + t2383;
  t7517 = -1.*t1644*t1682*t7449;
  t7518 = t61*t7463;
  t7520 = 3.e-6*t1640*t7497;
  t7522 = t7517 + t7518 + t7520;
  t7525 = -1.*t6926*t1644*t7449;
  t7526 = -1.*t1682*t7463;
  t7529 = 3.e-6*t1682*t7497;
  t7530 = t7525 + t7526 + t7529;
  t7335 = t7087 + t4004;
  t7394 = -1.8e-11*t2325;
  t7410 = 1. + t7394;
  t7587 = -1.*t7458*t1648*t1686;
  t7588 = t7449*t1888;
  t7589 = t7587 + t7588;
  t7593 = t1648*t7449;
  t7594 = t7458*t1686*t1888;
  t7597 = t7593 + t7594;
  t7600 = -3.e-6*t7458*t1644*t1682;
  t7601 = 3.e-6*t1640*t7589;
  t7602 = t3330*t7597;
  t7604 = t7600 + t7601 + t7602;
  t7612 = t7458*t1644*t1682;
  t7620 = t61*t7589;
  t7621 = 3.e-6*t1640*t7597;
  t7628 = t7612 + t7620 + t7621;
  t7633 = t6926*t7458*t1644;
  t7634 = -1.*t1682*t7589;
  t7635 = 3.e-6*t1682*t7597;
  t7637 = t7633 + t7634 + t7635;
  p_output1[0]=-0.225000000002025*t1640*t1644*t1648 + 0.225000000002025*t1682*t1686 - 6.75000000006075e-7*t1640*t1644*t1888 + t2963*t3679 + t4105*t5239 + t6795*t7004 + 0.1*(t3679*t7075 + t5239*t7104 + t7004*t7172) - 0.225*(t5239*t7172 + t3679*t7245 + t7004*t7335) + 0.13*(t5239*t7075 + t7004*t7245 + t3679*t7410) + var1[0];
  p_output1[1]=-0.225000000002025*t1644*t1682*t7449 - 0.225000000002025*t1640*t7463 + 6.75000000006075e-7*t1640*t7497 + t2963*t7515 + t4105*t7522 + t6795*t7530 + 0.1*(t7075*t7515 + t7104*t7522 + t7172*t7530) + 0.13*(t7410*t7515 + t7075*t7522 + t7245*t7530) - 0.225*(t7245*t7515 + t7172*t7522 + t7335*t7530) + var1[1];
  p_output1[2]=0.225000000002025*t1644*t1682*t7458 - 0.225000000002025*t1640*t7589 + 6.75000000006075e-7*t1640*t7597 + t2963*t7604 + t4105*t7628 + t6795*t7637 + 0.1*(t7075*t7604 + t7104*t7628 + t7172*t7637) + 0.13*(t7410*t7604 + t7075*t7628 + t7245*t7637) - 0.225*(t7245*t7604 + t7172*t7628 + t7335*t7637) + var1[2];
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

#include "Joint_knee_back_leftL_link_sphere_center.hh"

namespace SymFunction
{

void Joint_knee_back_leftL_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
