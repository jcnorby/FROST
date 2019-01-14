/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:44 GMT-05:00
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
  double t61;
  double t64;
  double t85;
  double t86;
  double t65;
  double t66;
  double t75;
  double t76;
  double t82;
  double t83;
  double t93;
  double t94;
  t61 = -1.*var2[7];
  t64 = var1[7] + t61;
  t85 = -1.*var2[6];
  t86 = var1[6] + t85;
  t65 = -1.*var2[3];
  t66 = var1[3] + t65;
  t75 = -1.*var2[4];
  t76 = var1[4] + t75;
  t82 = -1.*var2[5];
  t83 = var1[5] + t82;
  t93 = -1.*var2[2];
  t94 = t93 + var1[2];
  p_output1[0]=t64*(2.8277*t64 + 0.9833*t66 + 60.4395*t76 + 8.6452*t83 + 1.5523*t86 + 4.6956999999999995*t94) + t86*(1.5523*t64 + 1.5876000000000001*t66 + 132.4113*t76 + 10.3879*t83 + 1159.2532*t86 + 21.0409*t94) + t66*(0.9833*t64 + 12.7117*t66 + 207.07110000000003*t76 - 0.4462*t83 + 1.5876000000000001*t86 + 33.035199999999996*t94) + t83*(8.6452*t64 - 0.4462*t66 + 1323.7335*t76 + 257.2982*t83 + 10.3879*t86 + 66.49549999999999*t94) + t94*(4.6956999999999995*t64 + 33.035199999999996*t66 + 1432.0928999999999*t76 + 66.49549999999999*t83 + 21.0409*t86 + 295.6782*t94) + t76*(60.4395*t64 + 207.07110000000003*t66 + 13609.4696*t76 + 1323.7335*t83 + 132.4113*t86 + 1432.0928999999999*t94);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "target_pos.hh"

namespace truckopt
{

void target_pos_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
