/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:53 GMT-04:00
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
  double t3296;
  double t3431;
  double t3474;
  double t3488;
  double t767;
  double t1199;
  double t3081;
  double t3342;
  double t5130;
  double t5146;
  double t5149;
  double t3505;
  double t3747;
  double t3989;
  double t5136;
  double t5172;
  double t5323;
  double t6038;
  double t6159;
  double t6579;
  double t6318;
  double t6336;
  double t6390;
  double t6410;
  double t6433;
  double t6436;
  double t6438;
  double t6591;
  double t6453;
  double t6455;
  double t6458;
  double t6460;
  double t6462;
  double t6475;
  double t6514;
  double t6518;
  double t6520;
  double t6531;
  double t6602;
  double t6603;
  double t6268;
  double t6288;
  double t6615;
  double t6619;
  double t6537;
  double t3166;
  double t3276;
  double t6727;
  double t6719;
  double t6722;
  double t6728;
  double t6729;
  double t6733;
  double t6734;
  double t6735;
  double t6588;
  double t6589;
  double t6732;
  double t6738;
  double t6740;
  double t6742;
  double t6746;
  double t6747;
  double t6752;
  double t6753;
  double t6757;
  double t6768;
  double t6769;
  double t6770;
  double t6646;
  double t6818;
  double t6835;
  double t6836;
  double t6846;
  double t6847;
  double t6849;
  double t6837;
  double t6857;
  double t6858;
  double t6859;
  double t6880;
  double t6881;
  double t6882;
  double t6897;
  double t6903;
  double t6905;
  double t6906;
  double t6907;
  t3296 = Cos(var1[4]);
  t3431 = Cos(var1[6]);
  t3474 = -1.*t3431;
  t3488 = 1. + t3474;
  t767 = Cos(var1[8]);
  t1199 = -1.*t767;
  t3081 = 1. + t1199;
  t3342 = Cos(var1[5]);
  t5130 = Sin(var1[5]);
  t5146 = Sin(var1[4]);
  t5149 = Sin(var1[6]);
  t3505 = 3.e-6*t3296*t3342*t3488;
  t3747 = -9.000000000000001e-12*t3488;
  t3989 = 1. + t3747;
  t5136 = -1.*t3296*t3989*t5130;
  t5172 = -3.e-6*t5149;
  t5323 = 0. + t5172;
  t6038 = t5146*t5323;
  t6159 = t3505 + t5136 + t6038;
  t6579 = Sin(var1[8]);
  t6318 = -1.*t3488;
  t6336 = 1. + t6318;
  t6390 = t3296*t3342*t6336;
  t6410 = -3.e-6*t3296*t3488*t5130;
  t6433 = 0. + t5149;
  t6436 = t5146*t6433;
  t6438 = t6390 + t6410 + t6436;
  t6591 = 3.e-6*t3081;
  t6453 = -1.000000000009*t3488;
  t6455 = 1. + t6453;
  t6458 = t6455*t5146;
  t6460 = -1.*t5149;
  t6462 = 0. + t6460;
  t6475 = t3296*t3342*t6462;
  t6514 = 3.e-6*t5149;
  t6518 = 0. + t6514;
  t6520 = -1.*t3296*t5130*t6518;
  t6531 = t6458 + t6475 + t6520;
  t6602 = 3.e-6*t6579;
  t6603 = t6591 + t6602;
  t6268 = -1.000000000009*t3081;
  t6288 = 1. + t6268;
  t6615 = -3.e-6*t6579;
  t6619 = t6591 + t6615;
  t6537 = 9.000000000000001e-12*t3081;
  t3166 = -1.8000000000000002e-11*t3081;
  t3276 = 1. + t3166;
  t6727 = Cos(var1[3]);
  t6719 = Sin(var1[3]);
  t6722 = t3342*t6719*t5146;
  t6728 = t6727*t5130;
  t6729 = t6722 + t6728;
  t6733 = t6727*t3342;
  t6734 = -1.*t6719*t5146*t5130;
  t6735 = t6733 + t6734;
  t6588 = -1.*t6579;
  t6589 = t6537 + t6588;
  t6732 = 3.e-6*t3488*t6729;
  t6738 = t3989*t6735;
  t6740 = -1.*t3296*t6719*t5323;
  t6742 = t6732 + t6738 + t6740;
  t6746 = t6336*t6729;
  t6747 = 3.e-6*t3488*t6735;
  t6752 = -1.*t3296*t6719*t6433;
  t6753 = t6746 + t6747 + t6752;
  t6757 = -1.*t3296*t6455*t6719;
  t6768 = t6729*t6462;
  t6769 = t6735*t6518;
  t6770 = t6757 + t6768 + t6769;
  t6646 = t6537 + t6579;
  t6818 = -1.*t6727*t3342*t5146;
  t6835 = t6719*t5130;
  t6836 = t6818 + t6835;
  t6846 = t3342*t6719;
  t6847 = t6727*t5146*t5130;
  t6849 = t6846 + t6847;
  t6837 = 3.e-6*t3488*t6836;
  t6857 = t3989*t6849;
  t6858 = t6727*t3296*t5323;
  t6859 = t6837 + t6857 + t6858;
  t6880 = t6336*t6836;
  t6881 = 3.e-6*t3488*t6849;
  t6882 = t6727*t3296*t6433;
  t6897 = t6880 + t6881 + t6882;
  t6903 = t6727*t3296*t6455;
  t6905 = t6836*t6462;
  t6906 = t6849*t6518;
  t6907 = t6903 + t6905 + t6906;
  p_output1[0]=t3276*t6159 + t6531*t6603 + 3.e-6*(t6288*t6438 + t6531*t6589 + t6159*t6603) + t6438*t6619 + 3.e-6*(t6288*t6531 + t6159*t6619 + t6438*t6646);
  p_output1[1]=t3276*t6742 + t6619*t6753 + t6603*t6770 + 3.e-6*(t6619*t6742 + t6646*t6753 + t6288*t6770) + 3.e-6*(t6603*t6742 + t6288*t6753 + t6589*t6770);
  p_output1[2]=t3276*t6859 + t6619*t6897 + t6603*t6907 + 3.e-6*(t6619*t6859 + t6646*t6897 + t6288*t6907) + 3.e-6*(t6603*t6859 + t6288*t6897 + t6589*t6907);
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

#include "Joint_knee_front_leftL_link_axis.hh"

namespace SymFunction
{

void Joint_knee_front_leftL_link_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
