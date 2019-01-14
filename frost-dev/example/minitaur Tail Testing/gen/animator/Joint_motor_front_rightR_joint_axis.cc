/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:14 GMT-04:00
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
  double t929;
  double t1472;
  double t3233;
  double t5149;
  double t5254;
  double t5593;
  double t6460;
  double t6693;
  double t5936;
  double t5947;
  double t7737;
  double t6498;
  double t6499;
  double t7787;
  double t7288;
  double t6873;
  double t6938;
  double t7781;
  double t7791;
  double t7793;
  double t7816;
  double t7858;
  double t7965;
  double t8020;
  double t8023;
  double t8025;
  double t8035;
  double t8040;
  double t8041;
  t929 = Cos(var1[15]);
  t1472 = -1.*t929;
  t3233 = 1. + t1472;
  t5149 = Cos(var1[4]);
  t5254 = Cos(var1[5]);
  t5593 = Sin(var1[15]);
  t6460 = Sin(var1[4]);
  t6693 = Sin(var1[5]);
  t5936 = -3.e-6*t5593;
  t5947 = 0. + t5936;
  t7737 = Sin(var1[3]);
  t6498 = -9.000000000000001e-12*t3233;
  t6499 = 1. + t6498;
  t7787 = Cos(var1[3]);
  t7288 = 0. + t5593;
  t6873 = -1.*t3233;
  t6938 = 1. + t6873;
  t7781 = t5254*t7737*t6460;
  t7791 = t7787*t6693;
  t7793 = t7781 + t7791;
  t7816 = t7787*t5254;
  t7858 = -1.*t7737*t6460*t6693;
  t7965 = t7816 + t7858;
  t8020 = -1.*t7787*t5254*t6460;
  t8023 = t7737*t6693;
  t8025 = t8020 + t8023;
  t8035 = t5254*t7737;
  t8040 = t7787*t6460*t6693;
  t8041 = t8035 + t8040;
  p_output1[0]=-3.e-6*t3233*t5149*t5254 - 1.*t5947*t6460 + t5149*t6499*t6693 - 3.e-6*(-3.e-6*t3233*t5149*t6693 + t5149*t5254*t6938 + t6460*t7288);
  p_output1[1]=t5149*t5947*t7737 - 3.e-6*t3233*t7793 - 1.*t6499*t7965 - 3.e-6*(-1.*t5149*t7288*t7737 + t6938*t7793 + 3.e-6*t3233*t7965);
  p_output1[2]=-1.*t5149*t5947*t7787 - 3.e-6*t3233*t8025 - 1.*t6499*t8041 - 3.e-6*(t5149*t7288*t7787 + t6938*t8025 + 3.e-6*t3233*t8041);
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

#include "Joint_motor_front_rightR_joint_axis.hh"

namespace SymFunction
{

void Joint_motor_front_rightR_joint_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
