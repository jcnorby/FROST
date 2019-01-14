/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:41 GMT-05:00
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
  double t28043;
  double t24875;
  double t26994;
  double t32531;
  double t36879;
  double t27483;
  double t35308;
  double t36682;
  double t24865;
  double t37787;
  double t37814;
  double t38282;
  double t48404;
  double t36695;
  double t48368;
  double t48385;
  double t5057;
  double t48420;
  double t50009;
  double t50021;
  double t57837;
  double t57838;
  double t56162;
  double t57356;
  double t57840;
  double t57992;
  double t57994;
  double t58030;
  double t58048;
  double t58049;
  double t58184;
  double t57828;
  double t57832;
  double t57996;
  double t58328;
  double t58329;
  double t58337;
  double t58338;
  double t58340;
  double t58341;
  double t58473;
  double t58625;
  double t58761;
  double t58913;
  double t59411;
  double t59515;
  double t65244;
  double t65245;
  double t65246;
  double t65304;
  double t65310;
  double t65205;
  double t65221;
  double t65373;
  double t65374;
  double t65352;
  double t65363;
  double t65365;
  double t65366;
  double t65367;
  double t56146;
  double t56151;
  double t56160;
  double t58789;
  double t60316;
  double t65376;
  double t65378;
  double t65384;
  double t65250;
  double t65251;
  double t65252;
  double t65253;
  double t65371;
  double t65372;
  double t65391;
  double t65394;
  double t65396;
  double t65400;
  double t65401;
  double t65402;
  double t65404;
  double t65405;
  double t65406;
  double t65460;
  double t65462;
  double t65463;
  double t65467;
  double t65468;
  double t65469;
  double t65432;
  double t65433;
  double t65434;
  double t65435;
  double t65436;
  double t65438;
  t28043 = Cos(var1[4]);
  t24875 = Cos(var1[5]);
  t26994 = Sin(var1[4]);
  t32531 = Sin(var1[5]);
  t36879 = Cos(var1[3]);
  t27483 = t24875*t26994;
  t35308 = t28043*t32531;
  t36682 = t27483 + t35308;
  t24865 = Sin(var1[3]);
  t37787 = t28043*t24875;
  t37814 = -1.*t26994*t32531;
  t38282 = t37787 + t37814;
  t48404 = Cos(var1[2]);
  t36695 = -1.*t24865*t36682;
  t48368 = t36879*t38282;
  t48385 = t36695 + t48368;
  t5057 = Sin(var1[2]);
  t48420 = t36879*t36682;
  t50009 = t24865*t38282;
  t50021 = t48420 + t50009;
  t57837 = -1.*t24875;
  t57838 = 1. + t57837;
  t56162 = -1.*t28043;
  t57356 = 1. + t56162;
  t57840 = 0.8*t57838;
  t57992 = 1.04*t24875;
  t57994 = t57840 + t57992;
  t58030 = -0.15*t57838;
  t58048 = -0.15*t24875;
  t58049 = -0.24*t32531;
  t58184 = t58030 + t58048 + t58049;
  t57828 = -0.15*t57356;
  t57832 = 0.4*t26994;
  t57996 = -1.*t57994*t26994;
  t58328 = t28043*t58184;
  t58329 = t57828 + t57832 + t57996 + t58328;
  t58337 = t36879*t58329;
  t58338 = 0.4*t57356;
  t58340 = t28043*t57994;
  t58341 = 0.15*t26994;
  t58473 = t26994*t58184;
  t58625 = t58338 + t58340 + t58341 + t58473;
  t58761 = -1.*t24865*t58625;
  t58913 = -1.*t24875*t26994;
  t59411 = -1.*t28043*t32531;
  t59515 = t58913 + t59411;
  t65244 = t36879*t59515;
  t65245 = -1.*t24865*t38282;
  t65246 = t65244 + t65245;
  t65304 = -1.*t36879*t36682;
  t65310 = t65304 + t65245;
  t65205 = t24865*t59515;
  t65221 = t65205 + t48368;
  t65373 = 0.15*t28043;
  t65374 = t65373 + t57832 + t57996 + t58328;
  t65352 = 0.4*t28043;
  t65363 = -1.*t28043*t57994;
  t65365 = -0.15*t26994;
  t65366 = -1.*t26994*t58184;
  t65367 = t65352 + t65363 + t65365 + t65366;
  t56146 = -1.*t36879;
  t56151 = 1. + t56146;
  t56160 = -0.15*t56151;
  t58789 = t56160 + t58337 + t58761;
  t60316 = -1.*t24865*t59515;
  t65376 = -1.*t28043*t24875;
  t65378 = t26994*t32531;
  t65384 = t65376 + t65378;
  t65250 = 0.15*t24865;
  t65251 = t24865*t58329;
  t65252 = t36879*t58625;
  t65253 = t65250 + t65251 + t65252;
  t65371 = -1.*t58625*t59515;
  t65372 = 0.15*t38282;
  t65391 = -1.*t58329*t65384;
  t65394 = t5057*t65221;
  t65396 = t48404*t65246;
  t65400 = t65394 + t65396;
  t65401 = -1.44*var2[0]*t65400;
  t65402 = t48404*t65221;
  t65404 = -1.*t5057*t65246;
  t65405 = t65402 + t65404;
  t65406 = -1.44*var2[1]*t65405;
  t65460 = -0.24*t24875*t26994;
  t65462 = -0.24*t28043*t32531;
  t65463 = t65460 + t65462;
  t65467 = -0.24*t28043*t24875;
  t65468 = 0.24*t26994*t32531;
  t65469 = t65467 + t65468;
  t65432 = t36879*t65384;
  t65433 = t60316 + t65432;
  t65434 = t58789*t65433;
  t65435 = t24865*t65384;
  t65436 = t65244 + t65435;
  t65438 = t65253*t65436;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-1.44*(t48404*t50021 - 1.*t48385*t5057)*var2[0] - 1.44*(-1.*t48385*t48404 - 1.*t50021*t5057)*var2[1])*var2[5];
  p_output1[3]=(-1.44*(t48385*t5057 + t48404*t65310)*var2[0] - 1.44*(t48385*t48404 - 1.*t5057*t65310)*var2[1] - 1.44*(t58789*(-1.*t36879*t38282 + t60316) + (0.15*t36879 + t58337 + t58761)*t65221 + (-0.15*t24865 - 1.*t24865*t58329 - 1.*t36879*t58625)*t65246 + t65246*t65253)*var2[2])*var2[5];
  p_output1[4]=(t65401 + t65406 - 1.44*(t65246*(t36879*t65367 - 1.*t24865*t65374) + t65221*(t24865*t65367 + t36879*t65374) + t65434 + t65438)*var2[2] - 1.44*(-1.*t59515*t65367 + t65371 + t65372 - 1.*t38282*t65374 + t65391)*var2[3])*var2[5];
  p_output1[5]=(t65401 + t65406 - 1.44*(t65434 + t65438 + t65221*(t36879*t65463 + t24865*t65469) + t65246*(-1.*t24865*t65463 + t36879*t65469))*var2[2] - 1.44*(t65371 + t65372 + t65391 - 1.*t38282*t65463 - 1.*t59515*t65469)*var2[3] - 1.44*(0.15*t24875 - 0.4*t32531 + t32531*t57994 + t24875*t58184)*var2[4])*var2[5];
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
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
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

#include "Ce3_vec6_acrobot.hh"

namespace SymFunction
{

void Ce3_vec6_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
