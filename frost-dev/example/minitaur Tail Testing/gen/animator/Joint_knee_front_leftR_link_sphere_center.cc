/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:55 GMT-04:00
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
  double t461;
  double t6231;
  double t6344;
  double t6503;
  double t6512;
  double t4938;
  double t6644;
  double t3140;
  double t6691;
  double t6613;
  double t6748;
  double t6754;
  double t6756;
  double t6784;
  double t6785;
  double t6798;
  double t5766;
  double t5795;
  double t6178;
  double t6506;
  double t6590;
  double t6603;
  double t7146;
  double t7117;
  double t6770;
  double t6773;
  double t6774;
  double t7120;
  double t7155;
  double t7161;
  double t6722;
  double t6732;
  double t6738;
  double t6746;
  double t7022;
  double t7039;
  double t7212;
  double t7216;
  double t7226;
  double t7260;
  double t7270;
  double t7297;
  double t7352;
  double t7363;
  double t7366;
  double t6837;
  double t6838;
  double t7419;
  double t7421;
  double t7422;
  double t7424;
  double t7425;
  double t7432;
  double t7441;
  double t7442;
  double t7443;
  double t7445;
  double t7447;
  double t7448;
  t461 = Cos(var1[4]);
  t6231 = Cos(var1[9]);
  t6344 = -1.*t6231;
  t6503 = 1. + t6344;
  t6512 = Sin(var1[9]);
  t4938 = Cos(var1[7]);
  t6644 = Sin(var1[4]);
  t3140 = Cos(var1[5]);
  t6691 = Sin(var1[7]);
  t6613 = Sin(var1[5]);
  t6748 = t4938*t6644;
  t6754 = t461*t3140*t6691;
  t6756 = t6748 + t6754;
  t6784 = t461*t3140*t4938;
  t6785 = -1.*t6644*t6691;
  t6798 = t6784 + t6785;
  t5766 = -1.*t4938;
  t5795 = 1. + t5766;
  t6178 = -3.25e-7*var1[9];
  t6506 = 3.000000000027e-7*t6503;
  t6590 = -6.75000000009e-7*t6512;
  t6603 = t6178 + t6506 + t6590;
  t7146 = Cos(var1[3]);
  t7117 = Sin(var1[3]);
  t6770 = 0.225000000005025*t6503;
  t6773 = 0.1000000000009*t6512;
  t6774 = t6770 + t6773;
  t7120 = t3140*t7117*t6644;
  t7155 = t7146*t6613;
  t7161 = t7120 + t7155;
  t6722 = 9.75e-13*var1[9];
  t6732 = 0.1000000000009*t6503;
  t6738 = -0.225000000003*t6512;
  t6746 = t6722 + t6732 + t6738;
  t7022 = -9.e-12*t6503;
  t7039 = 1. + t7022;
  t7212 = t7146*t3140;
  t7216 = -1.*t7117*t6644*t6613;
  t7226 = t7212 + t7216;
  t7260 = t4938*t7161;
  t7270 = t461*t7117*t6691;
  t7297 = t7260 + t7270;
  t7352 = -1.*t461*t4938*t7117;
  t7363 = t7161*t6691;
  t7366 = t7352 + t7363;
  t6837 = -1.000000000009*t6503;
  t6838 = 1. + t6837;
  t7419 = -1.*t7146*t3140*t6644;
  t7421 = t7117*t6613;
  t7422 = t7419 + t7421;
  t7424 = t3140*t7117;
  t7425 = t7146*t6644*t6613;
  t7432 = t7424 + t7425;
  t7441 = t4938*t7422;
  t7442 = -1.*t7146*t461*t6691;
  t7443 = t7441 + t7442;
  t7445 = t7146*t461*t4938;
  t7447 = t7422*t6691;
  t7448 = t7445 + t7447;
  p_output1[0]=0.225*t3140*t461*t5795 - 1.*t461*t6603*t6613 + 0.225*t6644*t6691 + t6746*t6756 + t6774*t6798 + 0.1*(3.e-6*t461*t6503*t6613 + t6231*t6756 - 1.*t6512*t6798) + 0.225*(-3.e-6*t461*t6512*t6613 + t6512*t6756 + t6798*t6838) + 0.13*(-3.e-6*t6503*t6756 - 3.e-6*t6512*t6798 - 1.*t461*t6613*t7039) + var1[0];
  p_output1[1]=-0.225*t461*t6691*t7117 + 0.225*t5795*t7161 + t6603*t7226 + t6774*t7297 + t6746*t7366 + 0.1*(-3.e-6*t6503*t7226 - 1.*t6512*t7297 + t6231*t7366) + 0.13*(t7039*t7226 - 3.e-6*t6512*t7297 - 3.e-6*t6503*t7366) + 0.225*(3.e-6*t6512*t7226 + t6838*t7297 + t6512*t7366) + var1[1];
  p_output1[2]=0.225*t461*t6691*t7146 + 0.225*t5795*t7422 + t6603*t7432 + t6774*t7443 + t6746*t7448 + 0.1*(-3.e-6*t6503*t7432 - 1.*t6512*t7443 + t6231*t7448) + 0.13*(t7039*t7432 - 3.e-6*t6512*t7443 - 3.e-6*t6503*t7448) + 0.225*(3.e-6*t6512*t7432 + t6838*t7443 + t6512*t7448) + var1[2];
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

#include "Joint_knee_front_leftR_link_sphere_center.hh"

namespace SymFunction
{

void Joint_knee_front_leftR_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
