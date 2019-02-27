/*
 * Automatically Generated from Mathematica.
 * Mon 6 Aug 2018 16:06:38 GMT-04:00
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
  double t54852;
  double t107027;
  double t108337;
  double t108350;
  double t108371;
  double t108401;
  double t108507;
  double t108362;
  double t108569;
  double t108625;
  double t108667;
  double t108761;
  double t108753;
  double t108764;
  double t108767;
  double t108771;
  double t108774;
  double t108781;
  double t108788;
  double t108798;
  double t108835;
  double t108750;
  double t108911;
  double t108931;
  double t108934;
  double t108957;
  double t108961;
  double t109022;
  double t109026;
  double t109031;
  double t109037;
  double t109040;
  double t109054;
  double t109058;
  double t109061;
  double t109236;
  double t109018;
  double t109257;
  double t109261;
  double t109262;
  double t109268;
  double t109275;
  t54852 = Cos(var1[4]);
  t107027 = Cos(var1[5]);
  t108337 = -0.2*t54852*t107027;
  t108350 = Sin(var1[4]);
  t108371 = Sin(var1[5]);
  t108401 = 0.075*t54852*t108371;
  t108507 = 0.05*t108350;
  t108362 = -0.05*t108350;
  t108569 = -0.075*t54852*t108371;
  t108625 = 0.2*t54852*t107027;
  t108667 = Sin(var1[3]);
  t108761 = Cos(var1[3]);
  t108753 = -1.*t107027*t108667*t108350;
  t108764 = -1.*t108761*t108371;
  t108767 = t108753 + t108764;
  t108771 = 0.2*t108767;
  t108774 = t108761*t107027;
  t108781 = -1.*t108667*t108350*t108371;
  t108788 = t108774 + t108781;
  t108798 = -0.075*t108788;
  t108835 = -0.05*t54852*t108667;
  t108750 = 0.05*t54852*t108667;
  t108911 = 0.075*t108788;
  t108931 = t107027*t108667*t108350;
  t108934 = t108761*t108371;
  t108957 = t108931 + t108934;
  t108961 = 0.2*t108957;
  t109022 = t108761*t107027*t108350;
  t109026 = -1.*t108667*t108371;
  t109031 = t109022 + t109026;
  t109037 = 0.2*t109031;
  t109040 = t107027*t108667;
  t109054 = t108761*t108350*t108371;
  t109058 = t109040 + t109054;
  t109061 = -0.075*t109058;
  t109236 = 0.05*t108761*t54852;
  t109018 = -0.05*t108761*t54852;
  t109257 = 0.075*t109058;
  t109261 = -1.*t108761*t107027*t108350;
  t109262 = t108667*t108371;
  t109268 = t109261 + t109262;
  t109275 = 0.2*t109268;
  p_output1[0]=t108337 + t108362 + t108401 + var1[0];
  p_output1[1]=t108337 + t108401 + t108507 + var1[0];
  p_output1[2]=t108337 + t108507 + t108569 + var1[0];
  p_output1[3]=t108337 + t108362 + t108569 + var1[0];
  p_output1[4]=t108362 + t108401 + t108625 + var1[0];
  p_output1[5]=t108401 + t108507 + t108625 + var1[0];
  p_output1[6]=t108507 + t108569 + t108625 + var1[0];
  p_output1[7]=t108362 + t108569 + t108625 + var1[0];
  p_output1[8]=t108750 + t108771 + t108798 + var1[1];
  p_output1[9]=t108771 + t108798 + t108835 + var1[1];
  p_output1[10]=t108771 + t108835 + t108911 + var1[1];
  p_output1[11]=t108750 + t108771 + t108911 + var1[1];
  p_output1[12]=t108750 + t108798 + t108961 + var1[1];
  p_output1[13]=t108798 + t108835 + t108961 + var1[1];
  p_output1[14]=t108835 + t108911 + t108961 + var1[1];
  p_output1[15]=t108750 + t108911 + t108961 + var1[1];
  p_output1[16]=t109018 + t109037 + t109061 + var1[2];
  p_output1[17]=t109037 + t109061 + t109236 + var1[2];
  p_output1[18]=t109037 + t109236 + t109257 + var1[2];
  p_output1[19]=t109018 + t109037 + t109257 + var1[2];
  p_output1[20]=t109018 + t109061 + t109275 + var1[2];
  p_output1[21]=t109061 + t109236 + t109275 + var1[2];
  p_output1[22]=t109236 + t109257 + t109275 + var1[2];
  p_output1[23]=t109018 + t109257 + t109275 + var1[2];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "base_chassis_link_patch.hh"

namespace SymFunction
{

void base_chassis_link_patch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
