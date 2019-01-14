/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:01:53 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t3;
  double t4;
  double t9;
  double t11;
  double t12;
  double t13;
  double t14;
  double t16;
  t3 = -1. + var8[0];
  t4 = 1/t3;
  t9 = -1.*var7[0];
  t11 = t9 + var7[1];
  t12 = -0.333333333333333*t4*t11;
  t13 = -1.33333333333333*t4*t11;
  t14 = -0.25*t4*t11;
  t16 = 0.25*t4*t11;
  p_output1[0]=-1.;
  p_output1[1]=t12;
  p_output1[2]=t13;
  p_output1[3]=1.;
  p_output1[4]=t12;
  p_output1[5]=-1.;
  p_output1[6]=t12;
  p_output1[7]=t13;
  p_output1[8]=1.;
  p_output1[9]=t12;
  p_output1[10]=-1.;
  p_output1[11]=t12;
  p_output1[12]=t13;
  p_output1[13]=1.;
  p_output1[14]=t12;
  p_output1[15]=-1.;
  p_output1[16]=t12;
  p_output1[17]=t13;
  p_output1[18]=1.;
  p_output1[19]=t12;
  p_output1[20]=-1.;
  p_output1[21]=t12;
  p_output1[22]=t13;
  p_output1[23]=1.;
  p_output1[24]=t12;
  p_output1[25]=-1.;
  p_output1[26]=t12;
  p_output1[27]=t13;
  p_output1[28]=1.;
  p_output1[29]=t12;
  p_output1[30]=-1.;
  p_output1[31]=t12;
  p_output1[32]=t13;
  p_output1[33]=1.;
  p_output1[34]=t12;
  p_output1[35]=-1.;
  p_output1[36]=t12;
  p_output1[37]=t13;
  p_output1[38]=1.;
  p_output1[39]=t12;
  p_output1[40]=-0.5;
  p_output1[41]=t14;
  p_output1[42]=1.;
  p_output1[43]=-0.5;
  p_output1[44]=t16;
  p_output1[45]=-0.5;
  p_output1[46]=t14;
  p_output1[47]=1.;
  p_output1[48]=-0.5;
  p_output1[49]=t16;
  p_output1[50]=-0.5;
  p_output1[51]=t14;
  p_output1[52]=1.;
  p_output1[53]=-0.5;
  p_output1[54]=t16;
  p_output1[55]=-0.5;
  p_output1[56]=t14;
  p_output1[57]=1.;
  p_output1[58]=-0.5;
  p_output1[59]=t16;
  p_output1[60]=-0.5;
  p_output1[61]=t14;
  p_output1[62]=1.;
  p_output1[63]=-0.5;
  p_output1[64]=t16;
  p_output1[65]=-0.5;
  p_output1[66]=t14;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t16;
  p_output1[70]=-0.5;
  p_output1[71]=t14;
  p_output1[72]=1.;
  p_output1[73]=-0.5;
  p_output1[74]=t16;
  p_output1[75]=-0.5;
  p_output1[76]=t14;
  p_output1[77]=1.;
  p_output1[78]=-0.5;
  p_output1[79]=t16;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 80, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace truckopt
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
