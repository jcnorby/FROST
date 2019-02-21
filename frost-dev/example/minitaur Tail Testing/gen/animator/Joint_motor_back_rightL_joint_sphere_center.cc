/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:22 GMT-04:00
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
  double t161;
  double t403;
  double t537;
  double t738;
  double t742;
  double t196;
  double t326;
  double t3460;
  double t2315;
  double t3601;
  double t3481;
  double t3730;
  double t3789;
  double t5478;
  double t5516;
  double t5735;
  t161 = Cos(var1[18]);
  t403 = Cos(var1[4]);
  t537 = Cos(var1[5]);
  t738 = Sin(var1[18]);
  t742 = Sin(var1[4]);
  t196 = -1.*t161;
  t326 = 1. + t196;
  t3460 = Sin(var1[3]);
  t2315 = Sin(var1[5]);
  t3601 = Cos(var1[3]);
  t3481 = t537*t3460*t742;
  t3730 = t3601*t2315;
  t3789 = t3481 + t3730;
  t5478 = -1.*t3601*t537*t742;
  t5516 = t3460*t2315;
  t5735 = t5478 + t5516;
  p_output1[0]=0.13*t2315*t403 - 0.225*t326*t403*t537 - 0.225*t738*t742 - 0.225*(t161*t403*t537 - 1.*t738*t742) + var1[0];
  p_output1[1]=-0.225*t326*t3789 + 0.225*t3460*t403*t738 - 0.225*(t161*t3789 + t3460*t403*t738) - 0.13*(t3601*t537 - 1.*t2315*t3460*t742) + var1[1];
  p_output1[2]=-0.225*t326*t5735 - 0.225*t3601*t403*t738 - 0.225*(t161*t5735 - 1.*t3601*t403*t738) - 0.13*(t3460*t537 + t2315*t3601*t742) + var1[2];
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

#include "Joint_motor_back_rightL_joint_sphere_center.hh"

namespace SymFunction
{

void Joint_motor_back_rightL_joint_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
