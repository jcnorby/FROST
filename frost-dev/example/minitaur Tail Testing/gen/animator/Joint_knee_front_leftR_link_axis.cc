/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:56 GMT-04:00
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
  double t504;
  double t568;
  double t569;
  double t6060;
  double t6819;
  double t6761;
  double t6799;
  double t6849;
  double t6639;
  double t6817;
  double t6860;
  double t6883;
  double t6967;
  double t7017;
  double t7053;
  double t7071;
  double t2398;
  double t3225;
  double t6986;
  double t6994;
  double t7405;
  double t7390;
  double t7410;
  double t7411;
  double t7412;
  double t7394;
  double t7406;
  double t7408;
  double t7233;
  double t7245;
  double t7413;
  double t7415;
  double t7416;
  double t7105;
  double t7111;
  double t7418;
  double t7423;
  double t7433;
  double t7479;
  double t7480;
  double t7481;
  double t7460;
  double t7461;
  double t7462;
  double t7482;
  double t7484;
  double t7485;
  double t7487;
  double t7489;
  double t7494;
  t504 = Cos(var1[9]);
  t568 = -1.*t504;
  t569 = 1. + t568;
  t6060 = Cos(var1[4]);
  t6819 = Cos(var1[5]);
  t6761 = Cos(var1[7]);
  t6799 = Sin(var1[4]);
  t6849 = Sin(var1[7]);
  t6639 = Sin(var1[5]);
  t6817 = t6761*t6799;
  t6860 = t6060*t6819*t6849;
  t6883 = t6817 + t6860;
  t6967 = Sin(var1[9]);
  t7017 = t6060*t6819*t6761;
  t7053 = -1.*t6799*t6849;
  t7071 = t7017 + t7053;
  t2398 = -9.000000000000001e-12*t569;
  t3225 = 1. + t2398;
  t6986 = -3.e-6*t6967;
  t6994 = 0. + t6986;
  t7405 = Sin(var1[3]);
  t7390 = Cos(var1[3]);
  t7410 = t6819*t7405*t6799;
  t7411 = t7390*t6639;
  t7412 = t7410 + t7411;
  t7394 = t7390*t6819;
  t7406 = -1.*t7405*t6799*t6639;
  t7408 = t7394 + t7406;
  t7233 = -1.*t6967;
  t7245 = 0. + t7233;
  t7413 = t6761*t7412;
  t7415 = t6060*t7405*t6849;
  t7416 = t7413 + t7415;
  t7105 = -1.*t569;
  t7111 = 1. + t7105;
  t7418 = -1.*t6060*t6761*t7405;
  t7423 = t7412*t6849;
  t7433 = t7418 + t7423;
  t7479 = -1.*t7390*t6819*t6799;
  t7480 = t7405*t6639;
  t7481 = t7479 + t7480;
  t7460 = t6819*t7405;
  t7461 = t7390*t6799*t6639;
  t7462 = t7460 + t7461;
  t7482 = t6761*t7481;
  t7484 = -1.*t7390*t6060*t6849;
  t7485 = t7482 + t7484;
  t7487 = t7390*t6060*t6761;
  t7489 = t7481*t6849;
  t7494 = t7487 + t7489;
  p_output1[0]=t3225*t6060*t6639 + 3.e-6*t569*t6883 - 1.*t6994*t7071 + 3.e-6*(3.e-6*t569*t6060*t6639 + t6883*t7111 + t7071*t7245);
  p_output1[1]=-1.*t3225*t7408 - 1.*t6994*t7416 + 3.e-6*t569*t7433 + 3.e-6*(-3.e-6*t569*t7408 + t7245*t7416 + t7111*t7433);
  p_output1[2]=-1.*t3225*t7462 - 1.*t6994*t7485 + 3.e-6*t569*t7494 + 3.e-6*(-3.e-6*t569*t7462 + t7245*t7485 + t7111*t7494);
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

#include "Joint_knee_front_leftR_link_axis.hh"

namespace SymFunction
{

void Joint_knee_front_leftR_link_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
