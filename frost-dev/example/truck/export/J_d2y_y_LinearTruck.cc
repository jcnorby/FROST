/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:27 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t44;
  double t56;
  double t60;
  double t72;
  double t73;
  double t79;
  double t87;
  double t98;
  double t43;
  double t118;
  double t127;
  double t104;
  double t105;
  double t106;
  double t107;
  double t108;
  double t109;
  double t110;
  double t111;
  double t112;
  double t113;
  double t114;
  double t115;
  double t116;
  double t119;
  double t120;
  double t121;
  double t122;
  double t123;
  double t124;
  double t125;
  double t126;
  double t128;
  double t129;
  double t134;
  double t158;
  double t154;
  double t150;
  double t163;
  double t166;
  t44 = -0.05*var1[0];
  t56 = 1. + t44;
  t60 = Power(t56,2);
  t72 = 0.05*var1[0];
  t73 = -1. + t72;
  t79 = Power(var1[0],2);
  t87 = Power(t56,3);
  t98 = Power(var1[0],3);
  t43 = 0. + var1[1];
  t118 = Power(t56,4);
  t127 = Power(var1[0],4);
  t104 = 0.05*var3[0]*t87;
  t105 = -0.1*var3[1]*t87;
  t106 = 0.05*var3[2]*t87;
  t107 = 0.0075*var3[1]*t60*var1[0];
  t108 = -0.015*var3[2]*t60*var1[0];
  t109 = 0.0075*var3[3]*t60*var1[0];
  t110 = 0.000375*var3[4]*t56*t79;
  t111 = -0.000375*var3[2]*t73*t79;
  t112 = 0.00075*var3[3]*t73*t79;
  t113 = 6.25e-6*var3[3]*t98;
  t114 = -0.0000125*var3[4]*t98;
  t115 = 6.25e-6*var3[5]*t98;
  t116 = t104 + t105 + t106 + t107 + t108 + t109 + t110 + t111 + t112 + t113 + t114 + t115;
  t119 = 0.25*var3[0]*t118;
  t120 = -0.25*var3[1]*t118;
  t121 = 0.05*var3[1]*t87*var1[0];
  t122 = -0.05*var3[2]*t87*var1[0];
  t123 = 0.00375*var3[2]*t60*t79;
  t124 = -0.00375*var3[3]*t60*t79;
  t125 = -0.000125*var3[4]*t56*t98;
  t126 = -0.000125*var3[3]*t73*t98;
  t128 = 1.5625e-6*var3[4]*t127;
  t129 = -1.5625e-6*var3[5]*t127;
  t134 = var1[4] + t119 + t120 + t121 + t122 + t123 + t124 + t125 + t126 + t128 + t129;
  t158 = 0.05*t87*var1[0];
  t154 = -0.05*t87*var1[0];
  t150 = 0.0075*t60*var1[0];
  t163 = -0.00375*t60*t79;
  t166 = 0.00375*t60*t79;
  p_output1[0]=-1.*t43*var2[0]*(-0.0075*t60*var3[0] + 0.0225*t60*var3[1] + 0.00075*t73*var1[0]*var3[1] - 0.0225*t60*var3[2] - 0.00001875*t79*var3[2] - 0.00225*t73*var1[0]*var3[2] + 0.0075*t60*var3[3] + 0.00005625*t79*var3[3] + 0.00225*t73*var1[0]*var3[3] - 0.00005625*t79*var3[4] + 0.00075*t56*var1[0]*var3[4] + 0.00001875*t79*var3[5]) + var2[1]*(-0.05*t87*var3[0] + 0.1*t87*var3[1] - 0.0075*t60*var1[0]*var3[1] + 0.000375*t73*t79*var3[2] - 0.05*t87*var3[2] + 0.015*t60*var1[0]*var3[2] - 0.00075*t73*t79*var3[3] - 6.25e-6*t98*var3[3] - 0.0075*t60*var1[0]*var3[3] - 0.000375*t56*t79*var3[4] + 0.0000125*t98*var3[4] - 6.25e-6*t98*var3[5]) + (t119 + t120 + t121 + t122 + t123 + t124 + t125 + t126 + t128 + t129)*var4[0] - 1.*t116*t43*var4[1];
  p_output1[1]=-1.*t116*var2[0] + var2[4] + t134*var4[1];
  p_output1[2]=var4[0];
  p_output1[3]=var4[1];
  p_output1[4]=var2[1] + 20.*var4[0] + var1[1]*var4[1];
  p_output1[5]=20.*var4[1];
  p_output1[6]=-1.*t116*t43;
  p_output1[7]=t134;
  p_output1[8]=1.;
  p_output1[9]=var1[1];
  p_output1[10]=20.;
  p_output1[11]=-0.05*t43*t87*var2[0] + 0.25*t118*var2[1] - 1.*Power(t56,5)*var4[0] + 0.25*t118*t43*var4[1];
  p_output1[12]=-1.*t43*(t150 - 0.1*t87)*var2[0] + (-0.25*t118 + t158)*var2[1] - 0.25*t118*var1[0]*var4[0] - 1.*(0.25*t118 + t154)*t43*var4[1];
  p_output1[13]=-1.*t43*(-0.000375*t73*t79 + 0.05*t87 - 0.015*t60*var1[0])*var2[0] + (t154 + t166)*var2[1] - 0.025*t79*t87*var4[0] - 1.*(t158 + t163)*t43*var4[1];
  p_output1[14]=-1.*t43*(t150 + 0.00075*t73*t79 + 6.25e-6*t98)*var2[0] + (t163 - 0.000125*t73*t98)*var2[1] - 0.00125*t60*t98*var4[0] - 1.*t43*(t166 + 0.000125*t73*t98)*var4[1];
  p_output1[15]=-1.*t43*(0.000375*t56*t79 - 0.0000125*t98)*var2[0] + (1.5625e-6*t127 - 0.000125*t56*t98)*var2[1] - 0.00003125*t127*t56*var4[0] - 1.*t43*(-1.5625e-6*t127 + 0.000125*t56*t98)*var4[1];
  p_output1[16]=-6.25e-6*t43*t98*var2[0] - 1.5625e-6*t127*var2[1] - 3.125e-7*Power(var1[0],5)*var4[0] - 1.5625e-6*t127*t43*var4[1];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_d2y_y_LinearTruck.hh"

namespace truckopt
{

void J_d2y_y_LinearTruck_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
