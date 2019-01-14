/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:46 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t64;
  double t66;
  double t76;
  double t80;
  double t84;
  double t86;
  double t92;
  double t94;
  double t96;
  double t97;
  double t102;
  double t103;
  t64 = -1.*var2[3];
  t66 = var1[3] + t64;
  t76 = -1.*var2[4];
  t80 = var1[4] + t76;
  t84 = -1.*var2[5];
  t86 = var1[5] + t84;
  t92 = -1.*var2[6];
  t94 = var1[6] + t92;
  t96 = -1.*var2[7];
  t97 = var1[7] + t96;
  t102 = -1.*var2[2];
  t103 = t102 + var1[2];
  p_output1[0]=591.3564*t103 + 66.07039999999999*t66 + 2864.1857999999997*t80 + 132.99099999999999*t86 + 42.0818*t94 + 9.391399999999999*t97;
  p_output1[1]=66.07039999999999*t103 + 25.4234*t66 + 414.14220000000006*t80 - 0.8924*t86 + 3.1752000000000002*t94 + 1.9666*t97;
  p_output1[2]=2864.1857999999997*t103 + 414.14220000000006*t66 + 27218.9392*t80 + 2647.467*t86 + 264.8226*t94 + 120.879*t97;
  p_output1[3]=132.99099999999999*t103 - 0.8924*t66 + 2647.467*t80 + 514.5964*t86 + 20.7758*t94 + 17.2904*t97;
  p_output1[4]=42.0818*t103 + 3.1752000000000002*t66 + 264.8226*t80 + 20.7758*t86 + 2318.5064*t94 + 3.1046*t97;
  p_output1[5]=9.391399999999999*t103 + 1.9666*t66 + 120.879*t80 + 17.2904*t86 + 3.1046*t94 + 5.6554*t97;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_target_pos.hh"

namespace truckopt
{

void J_target_pos_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
