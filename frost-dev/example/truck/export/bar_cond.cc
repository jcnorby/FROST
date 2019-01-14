/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:35 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t61;
  double t64;
  double t65;
  double t66;
  double t69;
  double t75;
  double t76;
  double t78;
  double t80;
  double t82;
  double t83;
  double t84;
  double t85;
  double t86;
  double t88;
  double t89;
  double t91;
  double t92;
  double t93;
  double t94;
  double t95;
  double t96;
  double t97;
  double t99;
  double t100;
  double t101;
  double t102;
  double t103;
  double t117;
  double t130;
  double t131;
  double t132;
  double t133;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t146;
  double t147;
  double t148;
  double t149;
  double t151;
  double t152;
  t61 = -0.009716*var1[7];
  t64 = -7.641699*var1[6];
  t65 = -0.638142*var1[4];
  t66 = -9.169932*var1[5];
  t69 = 2.248685*var1[3];
  t75 = -0.784892*var1[2];
  t76 = t61 + t64 + t65 + t66 + t69 + t75;
  t78 = var1[3]*t76;
  t80 = 14.809701*var1[7];
  t82 = 1461.218724*var1[6];
  t83 = -92.97921*var1[4];
  t84 = 3.253579*var1[5];
  t85 = -7.641699*var1[3];
  t86 = -0.26606*var1[2];
  t88 = t80 + t82 + t83 + t84 + t85 + t86;
  t89 = var1[6]*t88;
  t91 = 2.672423*var1[7];
  t92 = 14.809701*var1[6];
  t93 = 1.368417*var1[4];
  t94 = -0.053523*var1[5];
  t95 = -0.009716*var1[3];
  t96 = -0.001725*var1[2];
  t97 = t91 + t92 + t93 + t94 + t95 + t96;
  t99 = var1[7]*t97;
  t100 = 1.368417*var1[7];
  t101 = -92.97921*var1[6];
  t102 = 372.29573*var1[4];
  t103 = 81.492123*var1[5];
  t117 = -0.638142*var1[3];
  t130 = 0.976925*var1[2];
  t131 = t100 + t101 + t102 + t103 + t117 + t130;
  t132 = var1[4]*t131;
  t133 = -0.001725*var1[7];
  t135 = -0.26606*var1[6];
  t136 = 0.976925*var1[4];
  t137 = 7.043255*var1[5];
  t138 = -0.784892*var1[3];
  t139 = 2.294991*var1[2];
  t140 = t133 + t135 + t136 + t137 + t138 + t139;
  t141 = var1[2]*t140;
  t142 = -0.053523*var1[7];
  t143 = 3.253579*var1[6];
  t144 = 81.492123*var1[4];
  t145 = 107.561826*var1[5];
  t146 = -9.169932*var1[3];
  t147 = 7.043255*var1[2];
  t148 = t142 + t143 + t144 + t145 + t146 + t147;
  t149 = var1[5]*t148;
  t151 = -1. + t78 + t89 + t99 + t132 + t141 + t149;
  t152 = Power(2.71828182845905,t151);
  p_output1[0]=(1. - 1.*t152)/(1. + t152) + (-4.589982*var1[2] + 1.569784*var1[3] - 1.95385*var1[4] - 14.08651*var1[5] + 0.53212*var1[6] + 0.00345*var1[7])*var2[2] + (1.569784*var1[2] - 4.49737*var1[3] + 1.276284*var1[4] + 18.339864*var1[5] + 15.283398*var1[6] + 0.019432*var1[7])*var2[3] + (-1.95385*var1[2] + 1.276284*var1[3] - 744.59146*var1[4] - 162.984246*var1[5] + 185.95842*var1[6] - 2.736834*var1[7])*var2[4] + (-14.08651*var1[2] + 18.339864*var1[3] - 162.984246*var1[4] - 215.123652*var1[5] - 6.507158*var1[6] + 0.107046*var1[7])*var2[5] + (0.53212*var1[2] + 15.283398*var1[3] + 185.95842*var1[4] - 6.507158*var1[5] - 2922.437448*var1[6] - 29.619402*var1[7])*var2[6] + (0.00345*var1[2] + 0.019432*var1[3] - 2.736834*var1[4] + 0.107046*var1[5] - 29.619402*var1[6] - 5.344846*var1[7])*var2[7];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "bar_cond.hh"

namespace truckopt
{

void bar_cond_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
