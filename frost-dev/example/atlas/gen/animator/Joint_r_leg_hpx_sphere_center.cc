/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:08 GMT-06:00
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
  double t40;
  double t138;
  double t224;
  double t802;
  double t1118;
  double t987;
  double t1000;
  double t5690;
  double t4953;
  double t5035;
  double t5051;
  double t5736;
  double t5752;
  double t5779;
  double t5794;
  double t5809;
  double t8975;
  double t9053;
  double t9083;
  double t9400;
  double t9592;
  double t9678;
  t40 = Cos(var1[4]);
  t138 = Cos(var1[5]);
  t224 = Sin(var1[19]);
  t802 = Cos(var1[19]);
  t1118 = Sin(var1[5]);
  t987 = -1.*t802;
  t1000 = 1. + t987;
  t5690 = Cos(var1[3]);
  t4953 = Sin(var1[3]);
  t5035 = Sin(var1[4]);
  t5051 = t138*t4953*t5035;
  t5736 = t5690*t1118;
  t5752 = t5051 + t5736;
  t5779 = t5690*t138;
  t5794 = -1.*t4953*t5035*t1118;
  t5809 = t5779 + t5794;
  t8975 = -1.*t5690*t138*t5035;
  t9053 = t4953*t1118;
  t9083 = t8975 + t9053;
  t9400 = t138*t4953;
  t9592 = t5690*t5035*t1118;
  t9678 = t9400 + t9592;
  p_output1[0]=0.089*t1000*t1118*t40 - 0.089*t138*t224*t40 - 0.089*(-1.*t138*t224*t40 - 1.*t1118*t40*t802) + var1[0];
  p_output1[1]=-0.089*t224*t5752 - 0.089*t1000*t5809 - 0.089*(-1.*t224*t5752 + t5809*t802) + var1[1];
  p_output1[2]=-0.089*t224*t9083 - 0.089*t1000*t9678 - 0.089*(-1.*t224*t9083 + t802*t9678) + var1[2];
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

#include "Joint_r_leg_hpx_sphere_center.hh"

namespace SymFunction
{

void Joint_r_leg_hpx_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
