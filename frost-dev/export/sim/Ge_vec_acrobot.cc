/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:42 GMT-05:00
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
  double t38073;
  double t38423;
  double t45607;
  double t45664;
  double t38511;
  double t38523;
  double t45601;
  double t48396;
  double t50028;
  double t50029;
  double t50033;
  double t50386;
  double t50706;
  double t53698;
  double t54643;
  double t54658;
  double t54674;
  double t55092;
  double t54683;
  double t55496;
  double t55501;
  double t55572;
  double t55647;
  double t55815;
  double t56200;
  double t56214;
  double t58205;
  double t58521;
  double t58773;
  double t58003;
  double t58029;
  double t58086;
  double t62401;
  double t62414;
  double t62438;
  double t64218;
  double t65264;
  double t65269;
  double t65313;
  double t65315;
  double t65316;
  double t65332;
  double t65333;
  double t65335;
  double t65375;
  double t65392;
  double t65423;
  double t65426;
  double t65428;
  double t62439;
  double t64222;
  double t64858;
  double t65393;
  double t65407;
  double t65409;
  double t65036;
  double t65059;
  double t65060;
  double t65474;
  double t65477;
  double t65478;
  double t65479;
  double t65480;
  double t65481;
  double t65482;
  double t65495;
  double t65497;
  double t65483;
  double t65489;
  double t65519;
  double t65520;
  double t65505;
  double t65510;
  t38073 = Cos(var1[2]);
  t38423 = Cos(var1[3]);
  t45607 = Sin(var1[2]);
  t45664 = Sin(var1[3]);
  t38511 = -1.*t38423;
  t38523 = 1. + t38511;
  t45601 = 0.15*t38073*t38523;
  t48396 = -0.15*t45607*t45664;
  t50028 = -1.*t38423*t45607;
  t50029 = t38073*t45664;
  t50033 = t50028 + t50029;
  t50386 = -1.*t38073*t38423;
  t50706 = -1.*t45607*t45664;
  t53698 = t50386 + t50706;
  t54643 = Cos(var1[4]);
  t54658 = -1.*t54643;
  t54674 = 1. + t54658;
  t55092 = Sin(var1[4]);
  t54683 = 0.4*t54674;
  t55496 = 0.15*t55092;
  t55501 = t54683 + t55496;
  t55572 = t50033*t55501;
  t55647 = -0.15*t54674;
  t55815 = 0.4*t55092;
  t56200 = t55647 + t55815;
  t56214 = t53698*t56200;
  t58205 = t54643*t50033;
  t58521 = -1.*t53698*t55092;
  t58773 = t58205 + t58521;
  t58003 = t54643*t53698;
  t58029 = t50033*t55092;
  t58086 = t58003 + t58029;
  t62401 = Cos(var1[5]);
  t62414 = -1.*t62401;
  t62438 = 1. + t62414;
  t64218 = Sin(var1[5]);
  t65264 = 0.15*t38073*t38423;
  t65269 = 0.15*t45607*t45664;
  t65313 = t38423*t45607;
  t65315 = -1.*t38073*t45664;
  t65316 = t65313 + t65315;
  t65332 = t38073*t38423;
  t65333 = t45607*t45664;
  t65335 = t65332 + t65333;
  t65375 = t65316*t55501;
  t65392 = t65335*t56200;
  t65423 = t54643*t65316;
  t65426 = -1.*t65335*t55092;
  t65428 = t65423 + t65426;
  t62439 = 0.8*t62438;
  t64222 = 0.15*t64218;
  t64858 = t62439 + t64222;
  t65393 = t54643*t65335;
  t65407 = t65316*t55092;
  t65409 = t65393 + t65407;
  t65036 = -0.15*t62438;
  t65059 = 0.8*t64218;
  t65060 = t65036 + t65059;
  t65474 = 0.4*t54643;
  t65477 = -0.15*t55092;
  t65478 = t65474 + t65477;
  t65479 = t50033*t65478;
  t65480 = 0.15*t54643;
  t65481 = t65480 + t55815;
  t65482 = t65335*t65481;
  t65495 = -1.*t54643*t50033;
  t65497 = t65495 + t65426;
  t65483 = -1.*t50033*t55092;
  t65489 = t65393 + t65483;
  t65519 = t65335*t55092;
  t65520 = t58205 + t65519;
  t65505 = -1.*t65489*t64218;
  t65510 = t62401*t65489;
  p_output1[0]=0;
  p_output1[1]=-317.844;
  p_output1[2]=-0.47088*t38073 - 62.784000000000006*(t45601 + t48396 + 0.16*t50033 - 0.15*t53698) - 133.416*(t45601 + t48396 + t55572 + t56214 - 0.15*t58086 + 0.69*t58773) - 117.72*(t45601 + t48396 + t55572 + t56214 + 1.04*(t58773*t62401 - 1.*t58086*t64218) - 0.15*(t58086*t62401 + t58773*t64218) + t58773*t64858 + t58086*t65060);
  p_output1[3]=-62.784000000000006*(t65264 + t65269 + 0.16*t65316 - 0.15*t65335) - 133.416*(t65264 + t65269 + t65375 + t65392 - 0.15*t65409 + 0.69*t65428) - 117.72*(t65264 + t65269 + t65375 + t65392 + t65060*t65409 + t64858*t65428 + 1.04*(-1.*t64218*t65409 + t62401*t65428) - 0.15*(t62401*t65409 + t64218*t65428));
  p_output1[4]=-133.416*(t65479 + t65482 - 0.15*t65489 + 0.69*t65497) - 117.72*(t65479 + t65482 + t65060*t65489 + t64858*t65497 + 1.04*(t62401*t65497 + t65505) - 0.15*(t64218*t65497 + t65510));
  p_output1[5]=-117.72*((0.15*t62401 + t65059)*t65489 + (0.8*t62401 - 0.15*t64218)*t65520 + 1.04*(t65505 - 1.*t62401*t65520) - 0.15*(t65510 - 1.*t64218*t65520));
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

#include "Ge_vec_acrobot.hh"

namespace SymFunction
{

void Ge_vec_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
