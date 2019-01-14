/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:36 GMT-05:00
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
  double t76;
  double t80;
  double t82;
  double t83;
  double t84;
  double t85;
  double t86;
  double t88;
  double t91;
  double t92;
  double t93;
  double t94;
  double t95;
  double t96;
  double t97;
  double t100;
  double t101;
  double t102;
  double t103;
  double t117;
  double t130;
  double t131;
  double t133;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t142;
  double t143;
  double t144;
  double t145;
  double t146;
  double t147;
  double t148;
  double t153;
  double t155;
  double t156;
  double t157;
  double t159;
  double t160;
  double t161;
  double t162;
  double t164;
  double t165;
  double t167;
  double t168;
  double t169;
  double t170;
  double t173;
  double t175;
  double t176;
  double t177;
  double t178;
  double t179;
  double t180;
  double t181;
  double t171;
  double t172;
  double t174;
  double t183;
  double t192;
  double t193;
  double t194;
  double t195;
  double t196;
  double t197;
  double t198;
  double t208;
  double t209;
  double t210;
  double t211;
  double t212;
  double t213;
  double t214;
  double t224;
  double t225;
  double t226;
  double t227;
  double t228;
  double t229;
  double t230;
  double t240;
  double t241;
  double t242;
  double t243;
  double t244;
  double t245;
  double t246;
  double t256;
  double t257;
  double t258;
  double t259;
  double t260;
  double t261;
  double t262;
  t76 = -0.009716*var1[7];
  t80 = -7.641699*var1[6];
  t82 = -0.638142*var1[4];
  t83 = -9.169932*var1[5];
  t84 = 2.248685*var1[3];
  t85 = -0.784892*var1[2];
  t86 = t76 + t80 + t82 + t83 + t84 + t85;
  t88 = var1[3]*t86;
  t91 = 14.809701*var1[7];
  t92 = 1461.218724*var1[6];
  t93 = -92.97921*var1[4];
  t94 = 3.253579*var1[5];
  t95 = -7.641699*var1[3];
  t96 = -0.26606*var1[2];
  t97 = t91 + t92 + t93 + t94 + t95 + t96;
  t100 = var1[6]*t97;
  t101 = 2.672423*var1[7];
  t102 = 14.809701*var1[6];
  t103 = 1.368417*var1[4];
  t117 = -0.053523*var1[5];
  t130 = -0.009716*var1[3];
  t131 = -0.001725*var1[2];
  t133 = t101 + t102 + t103 + t117 + t130 + t131;
  t135 = var1[7]*t133;
  t136 = 1.368417*var1[7];
  t137 = -92.97921*var1[6];
  t138 = 372.29573*var1[4];
  t139 = 81.492123*var1[5];
  t140 = -0.638142*var1[3];
  t142 = 0.976925*var1[2];
  t143 = t136 + t137 + t138 + t139 + t140 + t142;
  t144 = var1[4]*t143;
  t145 = -0.001725*var1[7];
  t146 = -0.26606*var1[6];
  t147 = 0.976925*var1[4];
  t148 = 7.043255*var1[5];
  t153 = -0.784892*var1[3];
  t155 = 2.294991*var1[2];
  t156 = t145 + t146 + t147 + t148 + t153 + t155;
  t157 = var1[2]*t156;
  t159 = -0.053523*var1[7];
  t160 = 3.253579*var1[6];
  t161 = 81.492123*var1[4];
  t162 = 107.561826*var1[5];
  t164 = -9.169932*var1[3];
  t165 = 7.043255*var1[2];
  t167 = t159 + t160 + t161 + t162 + t164 + t165;
  t168 = var1[5]*t167;
  t169 = -1. + t88 + t100 + t135 + t144 + t157 + t168;
  t170 = Power(2.71828182845905,t169);
  t173 = 1. + t170;
  t175 = -0.00345*var1[7];
  t176 = -0.53212*var1[6];
  t177 = 1.95385*var1[4];
  t178 = 14.08651*var1[5];
  t179 = -1.569784*var1[3];
  t180 = 4.589982*var1[2];
  t181 = t175 + t176 + t177 + t178 + t179 + t180;
  t171 = -1.*t170;
  t172 = 1. + t171;
  t174 = Power(t173,-2);
  t183 = 1/t173;
  t192 = -0.019432*var1[7];
  t193 = -15.283398*var1[6];
  t194 = -1.276284*var1[4];
  t195 = -18.339864*var1[5];
  t196 = 4.49737*var1[3];
  t197 = -1.569784*var1[2];
  t198 = t192 + t193 + t194 + t195 + t196 + t197;
  t208 = 2.736834*var1[7];
  t209 = -185.95842*var1[6];
  t210 = 744.59146*var1[4];
  t211 = 162.984246*var1[5];
  t212 = -1.276284*var1[3];
  t213 = 1.95385*var1[2];
  t214 = t208 + t209 + t210 + t211 + t212 + t213;
  t224 = -0.107046*var1[7];
  t225 = 6.507158*var1[6];
  t226 = 162.984246*var1[4];
  t227 = 215.123652*var1[5];
  t228 = -18.339864*var1[3];
  t229 = 14.08651*var1[2];
  t230 = t224 + t225 + t226 + t227 + t228 + t229;
  t240 = 29.619402*var1[7];
  t241 = 2922.437448*var1[6];
  t242 = -185.95842*var1[4];
  t243 = 6.507158*var1[5];
  t244 = -15.283398*var1[3];
  t245 = -0.53212*var1[2];
  t246 = t240 + t241 + t242 + t243 + t244 + t245;
  t256 = 5.344846*var1[7];
  t257 = 29.619402*var1[6];
  t258 = 2.736834*var1[4];
  t259 = -0.107046*var1[5];
  t260 = -0.019432*var1[3];
  t261 = -0.00345*var1[2];
  t262 = t256 + t257 + t258 + t259 + t260 + t261;
  p_output1[0]=-1.*t170*t172*t174*t181 - 1.*t170*t181*t183 - 4.589982*var2[2] + 1.569784*var2[3] - 1.95385*var2[4] - 14.08651*var2[5] + 0.53212*var2[6] + 0.00345*var2[7];
  p_output1[1]=-1.*t170*t172*t174*t198 - 1.*t170*t183*t198 + 1.569784*var2[2] - 4.49737*var2[3] + 1.276284*var2[4] + 18.339864*var2[5] + 15.283398*var2[6] + 0.019432*var2[7];
  p_output1[2]=-1.*t170*t172*t174*t214 - 1.*t170*t183*t214 - 1.95385*var2[2] + 1.276284*var2[3] - 744.59146*var2[4] - 162.984246*var2[5] + 185.95842*var2[6] - 2.736834*var2[7];
  p_output1[3]=-1.*t170*t172*t174*t230 - 1.*t170*t183*t230 - 14.08651*var2[2] + 18.339864*var2[3] - 162.984246*var2[4] - 215.123652*var2[5] - 6.507158*var2[6] + 0.107046*var2[7];
  p_output1[4]=-1.*t170*t172*t174*t246 - 1.*t170*t183*t246 + 0.53212*var2[2] + 15.283398*var2[3] + 185.95842*var2[4] - 6.507158*var2[5] - 2922.437448*var2[6] - 29.619402*var2[7];
  p_output1[5]=-1.*t170*t172*t174*t262 - 1.*t170*t183*t262 + 0.00345*var2[2] + 0.019432*var2[3] - 2.736834*var2[4] + 0.107046*var2[5] - 29.619402*var2[6] - 5.344846*var2[7];
  p_output1[6]=-4.589982*var1[2] + 1.569784*var1[3] - 1.95385*var1[4] - 14.08651*var1[5] + 0.53212*var1[6] + 0.00345*var1[7];
  p_output1[7]=1.569784*var1[2] - 4.49737*var1[3] + 1.276284*var1[4] + 18.339864*var1[5] + 15.283398*var1[6] + 0.019432*var1[7];
  p_output1[8]=-1.95385*var1[2] + 1.276284*var1[3] - 744.59146*var1[4] - 162.984246*var1[5] + 185.95842*var1[6] - 2.736834*var1[7];
  p_output1[9]=-14.08651*var1[2] + 18.339864*var1[3] - 162.984246*var1[4] - 215.123652*var1[5] - 6.507158*var1[6] + 0.107046*var1[7];
  p_output1[10]=0.53212*var1[2] + 15.283398*var1[3] + 185.95842*var1[4] - 6.507158*var1[5] - 2922.437448*var1[6] - 29.619402*var1[7];
  p_output1[11]=0.00345*var1[2] + 0.019432*var1[3] - 2.736834*var1[4] + 0.107046*var1[5] - 29.619402*var1[6] - 5.344846*var1[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_bar_cond.hh"

namespace truckopt
{

void J_bar_cond_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
