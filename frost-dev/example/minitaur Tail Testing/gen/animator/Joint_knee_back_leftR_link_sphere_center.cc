/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:08 GMT-04:00
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
  double t5485;
  double t5758;
  double t6005;
  double t14;
  double t7502;
  double t7549;
  double t7557;
  double t7579;
  double t7639;
  double t7664;
  double t7674;
  double t7678;
  double t7701;
  double t7707;
  double t7712;
  double t7783;
  double t1838;
  double t3299;
  double t7916;
  double t7747;
  double t7758;
  double t7767;
  double t7771;
  double t7926;
  double t7687;
  double t7692;
  double t7695;
  double t7923;
  double t7930;
  double t7933;
  double t7548;
  double t7586;
  double t7652;
  double t7658;
  double t7804;
  double t7812;
  double t7939;
  double t7942;
  double t7945;
  double t7952;
  double t7953;
  double t7954;
  double t7956;
  double t7959;
  double t7960;
  double t7886;
  double t7890;
  double t7993;
  double t7994;
  double t7995;
  double t7998;
  double t7999;
  double t8000;
  double t8002;
  double t8004;
  double t8012;
  double t8014;
  double t8015;
  double t8016;
  t5485 = Cos(var1[4]);
  t5758 = Cos(var1[5]);
  t6005 = Sin(var1[11]);
  t14 = Cos(var1[11]);
  t7502 = Sin(var1[4]);
  t7549 = Cos(var1[13]);
  t7557 = -1.*t7549;
  t7579 = 1. + t7557;
  t7639 = Sin(var1[13]);
  t7664 = t5485*t5758*t6005;
  t7674 = t14*t7502;
  t7678 = t7664 + t7674;
  t7701 = t14*t5485*t5758;
  t7707 = -1.*t6005*t7502;
  t7712 = t7701 + t7707;
  t7783 = Sin(var1[5]);
  t1838 = -1.*t14;
  t3299 = 1. + t1838;
  t7916 = Sin(var1[3]);
  t7747 = 3.25e-7*var1[13];
  t7758 = 3.000000000027e-7*t7579;
  t7767 = 6.75000000009e-7*t7639;
  t7771 = t7747 + t7758 + t7767;
  t7926 = Cos(var1[3]);
  t7687 = -0.225000000005025*t7579;
  t7692 = 0.1000000000009*t7639;
  t7695 = t7687 + t7692;
  t7923 = t5758*t7916*t7502;
  t7930 = t7926*t7783;
  t7933 = t7923 + t7930;
  t7548 = -9.75e-13*var1[13];
  t7586 = 0.1000000000009*t7579;
  t7652 = 0.225000000003*t7639;
  t7658 = t7548 + t7586 + t7652;
  t7804 = -9.e-12*t7579;
  t7812 = 1. + t7804;
  t7939 = t7926*t5758;
  t7942 = -1.*t7916*t7502*t7783;
  t7945 = t7939 + t7942;
  t7952 = t5485*t6005*t7916;
  t7953 = t14*t7933;
  t7954 = t7952 + t7953;
  t7956 = -1.*t14*t5485*t7916;
  t7959 = t6005*t7933;
  t7960 = t7956 + t7959;
  t7886 = -1.000000000009*t7579;
  t7890 = 1. + t7886;
  t7993 = -1.*t7926*t5758*t7502;
  t7994 = t7916*t7783;
  t7995 = t7993 + t7994;
  t7998 = t5758*t7916;
  t7999 = t7926*t7502*t7783;
  t8000 = t7998 + t7999;
  t8002 = -1.*t7926*t5485*t6005;
  t8004 = t14*t7995;
  t8012 = t8002 + t8004;
  t8014 = t14*t7926*t5485;
  t8015 = t6005*t7995;
  t8016 = t8014 + t8015;
  p_output1[0]=-0.225*t3299*t5485*t5758 - 0.225*t6005*t7502 + t7658*t7678 + t7695*t7712 - 1.*t5485*t7771*t7783 + 0.1*(t7549*t7678 - 1.*t7639*t7712 + 3.e-6*t5485*t7579*t7783) + 0.13*(-3.e-6*t7579*t7678 - 3.e-6*t7639*t7712 - 1.*t5485*t7783*t7812) - 0.225*(t7639*t7678 - 3.e-6*t5485*t7639*t7783 + t7712*t7890) + var1[0];
  p_output1[1]=0.225*t5485*t6005*t7916 - 0.225*t3299*t7933 + t7771*t7945 + t7695*t7954 + t7658*t7960 + 0.1*(-3.e-6*t7579*t7945 - 1.*t7639*t7954 + t7549*t7960) + 0.13*(t7812*t7945 - 3.e-6*t7639*t7954 - 3.e-6*t7579*t7960) - 0.225*(3.e-6*t7639*t7945 + t7890*t7954 + t7639*t7960) + var1[1];
  p_output1[2]=-0.225*t5485*t6005*t7926 - 0.225*t3299*t7995 + t7771*t8000 + t7695*t8012 + t7658*t8016 + 0.1*(-3.e-6*t7579*t8000 - 1.*t7639*t8012 + t7549*t8016) + 0.13*(t7812*t8000 - 3.e-6*t7639*t8012 - 3.e-6*t7579*t8016) - 0.225*(3.e-6*t7639*t8000 + t7890*t8012 + t7639*t8016) + var1[2];
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

#include "Joint_knee_back_leftR_link_sphere_center.hh"

namespace SymFunction
{

void Joint_knee_back_leftR_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
