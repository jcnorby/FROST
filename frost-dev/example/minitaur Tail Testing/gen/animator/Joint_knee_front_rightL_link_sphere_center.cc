/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:16 GMT-04:00
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
  double t6094;
  double t6098;
  double t6295;
  double t3300;
  double t6315;
  double t6976;
  double t6978;
  double t7970;
  double t8019;
  double t8050;
  double t8090;
  double t8097;
  double t8154;
  double t8159;
  double t8181;
  double t8310;
  double t3535;
  double t4119;
  double t8503;
  double t8204;
  double t8227;
  double t8287;
  double t8303;
  double t8518;
  double t8112;
  double t8117;
  double t8146;
  double t8513;
  double t8522;
  double t8525;
  double t6841;
  double t7990;
  double t8029;
  double t8045;
  double t8348;
  double t8375;
  double t8538;
  double t8544;
  double t8558;
  double t8585;
  double t8613;
  double t8614;
  double t8618;
  double t8619;
  double t8623;
  double t8428;
  double t8468;
  double t8669;
  double t8672;
  double t8673;
  double t8676;
  double t8677;
  double t8678;
  double t8680;
  double t8681;
  double t8682;
  double t8692;
  double t8693;
  double t8694;
  t6094 = Cos(var1[4]);
  t6098 = Cos(var1[5]);
  t6295 = Sin(var1[14]);
  t3300 = Cos(var1[14]);
  t6315 = Sin(var1[4]);
  t6976 = Cos(var1[16]);
  t6978 = -1.*t6976;
  t7970 = 1. + t6978;
  t8019 = Sin(var1[16]);
  t8050 = t6094*t6098*t6295;
  t8090 = t3300*t6315;
  t8097 = t8050 + t8090;
  t8154 = t3300*t6094*t6098;
  t8159 = -1.*t6295*t6315;
  t8181 = t8154 + t8159;
  t8310 = Sin(var1[5]);
  t3535 = -1.*t3300;
  t4119 = 1. + t3535;
  t8503 = Sin(var1[3]);
  t8204 = -3.25e-7*var1[16];
  t8227 = 3.000000000027e-7*t7970;
  t8287 = -6.75000000009e-7*t8019;
  t8303 = t8204 + t8227 + t8287;
  t8518 = Cos(var1[3]);
  t8112 = 0.225000000005025*t7970;
  t8117 = 0.1000000000009*t8019;
  t8146 = t8112 + t8117;
  t8513 = t6098*t8503*t6315;
  t8522 = t8518*t8310;
  t8525 = t8513 + t8522;
  t6841 = 9.75e-13*var1[16];
  t7990 = 0.1000000000009*t7970;
  t8029 = -0.225000000003*t8019;
  t8045 = t6841 + t7990 + t8029;
  t8348 = -9.e-12*t7970;
  t8375 = 1. + t8348;
  t8538 = t8518*t6098;
  t8544 = -1.*t8503*t6315*t8310;
  t8558 = t8538 + t8544;
  t8585 = t6094*t6295*t8503;
  t8613 = t3300*t8525;
  t8614 = t8585 + t8613;
  t8618 = -1.*t3300*t6094*t8503;
  t8619 = t6295*t8525;
  t8623 = t8618 + t8619;
  t8428 = -1.000000000009*t7970;
  t8468 = 1. + t8428;
  t8669 = -1.*t8518*t6098*t6315;
  t8672 = t8503*t8310;
  t8673 = t8669 + t8672;
  t8676 = t6098*t8503;
  t8677 = t8518*t6315*t8310;
  t8678 = t8676 + t8677;
  t8680 = -1.*t8518*t6094*t6295;
  t8681 = t3300*t8673;
  t8682 = t8680 + t8681;
  t8692 = t3300*t8518*t6094;
  t8693 = t6295*t8673;
  t8694 = t8692 + t8693;
  p_output1[0]=0.225*t4119*t6094*t6098 + 0.225*t6295*t6315 + t8045*t8097 + t8146*t8181 - 1.*t6094*t8303*t8310 + 0.1*(t6976*t8097 - 1.*t8019*t8181 + 3.e-6*t6094*t7970*t8310) - 0.13*(-3.e-6*t7970*t8097 - 3.e-6*t8019*t8181 - 1.*t6094*t8310*t8375) + 0.225*(t8019*t8097 - 3.e-6*t6094*t8019*t8310 + t8181*t8468) + var1[0];
  p_output1[1]=-0.225*t6094*t6295*t8503 + 0.225*t4119*t8525 + t8303*t8558 + t8146*t8614 + t8045*t8623 + 0.1*(-3.e-6*t7970*t8558 - 1.*t8019*t8614 + t6976*t8623) - 0.13*(t8375*t8558 - 3.e-6*t8019*t8614 - 3.e-6*t7970*t8623) + 0.225*(3.e-6*t8019*t8558 + t8468*t8614 + t8019*t8623) + var1[1];
  p_output1[2]=0.225*t6094*t6295*t8518 + 0.225*t4119*t8673 + t8303*t8678 + t8146*t8682 + t8045*t8694 + 0.1*(-3.e-6*t7970*t8678 - 1.*t8019*t8682 + t6976*t8694) - 0.13*(t8375*t8678 - 3.e-6*t8019*t8682 - 3.e-6*t7970*t8694) + 0.225*(3.e-6*t8019*t8678 + t8468*t8682 + t8019*t8694) + var1[2];
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

#include "Joint_knee_front_rightL_link_sphere_center.hh"

namespace SymFunction
{

void Joint_knee_front_rightL_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
