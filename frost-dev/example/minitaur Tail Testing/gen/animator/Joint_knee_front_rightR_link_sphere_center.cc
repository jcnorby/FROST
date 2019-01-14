/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:19 GMT-04:00
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
  double t272;
  double t517;
  double t5897;
  double t5907;
  double t6016;
  double t6019;
  double t6022;
  double t6028;
  double t6031;
  double t5914;
  double t5978;
  double t5986;
  double t6007;
  double t6104;
  double t6107;
  double t6199;
  double t6035;
  double t6039;
  double t6212;
  double t6130;
  double t6134;
  double t6170;
  double t6174;
  double t6179;
  double t6184;
  double t6356;
  double t6360;
  double t6365;
  double t6375;
  double t6446;
  double t6461;
  double t6470;
  double t6481;
  double t6485;
  double t6486;
  double t6554;
  double t6569;
  double t6571;
  double t6562;
  double t6219;
  double t6555;
  double t6594;
  double t6635;
  double t6650;
  double t6013;
  double t6025;
  double t6091;
  double t6117;
  double t6126;
  double t6649;
  double t6658;
  double t6659;
  double t6661;
  double t6662;
  double t6663;
  double t6206;
  double t6227;
  double t6232;
  double t6335;
  double t6349;
  double t6383;
  double t6389;
  double t6396;
  double t6404;
  double t6435;
  double t6674;
  double t6675;
  double t6676;
  double t6678;
  double t6566;
  double t6680;
  double t6684;
  double t6685;
  double t6686;
  double t6689;
  double t6690;
  double t6692;
  double t6708;
  double t6597;
  double t6616;
  double t6622;
  double t6762;
  double t6763;
  double t6764;
  double t6940;
  double t6984;
  double t7014;
  double t7059;
  double t7179;
  double t7222;
  double t7277;
  double t7320;
  double t7355;
  double t7359;
  double t7371;
  double t7407;
  double t7475;
  double t7492;
  double t7527;
  t272 = Cos(var1[15]);
  t517 = -1.*t272;
  t5897 = 1. + t517;
  t5907 = Cos(var1[4]);
  t6016 = Cos(var1[17]);
  t6019 = -1.*t6016;
  t6022 = 1. + t6019;
  t6028 = -3.e-6*t6022;
  t6031 = Sin(var1[17]);
  t5914 = Cos(var1[5]);
  t5978 = Sin(var1[15]);
  t5986 = Sin(var1[4]);
  t6007 = Sin(var1[5]);
  t6104 = 3.e-6*t6031;
  t6107 = t6028 + t6104;
  t6199 = 1.125e-12*var1[17];
  t6035 = -3.e-6*t6031;
  t6039 = t6028 + t6035;
  t6212 = -9.e-12*t6022;
  t6130 = 3.e-6*t5897*t5907*t5914;
  t6134 = -3.e-6*t5978*t5986;
  t6170 = -9.e-12*t5897;
  t6174 = 1. + t6170;
  t6179 = -1.*t6174*t5907*t6007;
  t6184 = t6130 + t6134 + t6179;
  t6356 = t272*t5907*t5914;
  t6360 = t5978*t5986;
  t6365 = -3.e-6*t5897*t5907*t6007;
  t6375 = t6356 + t6360 + t6365;
  t6446 = -1.*t5907*t5914*t5978;
  t6461 = -1.000000000009*t5897;
  t6470 = 1. + t6461;
  t6481 = t6470*t5986;
  t6485 = -3.e-6*t5907*t5978*t6007;
  t6486 = t6446 + t6481 + t6485;
  t6554 = 3.e-6*t6022;
  t6569 = -1.000000000009*t6022;
  t6571 = 1. + t6569;
  t6562 = 9.e-12*t6022;
  t6219 = -1.*t6031;
  t6555 = t6554 + t6035;
  t6594 = t6554 + t6104;
  t6635 = Sin(var1[3]);
  t6650 = Cos(var1[3]);
  t6013 = 3.75e-7*var1[17];
  t6025 = -1.755e-17*t6022;
  t6091 = 0.225*t6039;
  t6117 = 0.1*t6107;
  t6126 = t6013 + t6025 + t6091 + t6117;
  t6649 = t5914*t6635*t5986;
  t6658 = t6650*t6007;
  t6659 = t6649 + t6658;
  t6661 = t6650*t5914;
  t6662 = -1.*t6635*t5986*t6007;
  t6663 = t6661 + t6662;
  t6206 = 0.225000000002025*t6022;
  t6227 = t6212 + t6219;
  t6232 = 0.1*t6227;
  t6335 = -9.75e-7*t6107;
  t6349 = t6199 + t6206 + t6232 + t6335;
  t6383 = 0.1000000000009*t6022;
  t6389 = -9.75e-7*t6039;
  t6396 = t6212 + t6031;
  t6404 = 0.225*t6396;
  t6435 = t6199 + t6383 + t6389 + t6404;
  t6674 = 3.e-6*t5907*t5978*t6635;
  t6675 = 3.e-6*t5897*t6659;
  t6676 = t6174*t6663;
  t6678 = t6674 + t6675 + t6676;
  t6566 = t6562 + t6031;
  t6680 = -1.*t5907*t5978*t6635;
  t6684 = t272*t6659;
  t6685 = 3.e-6*t5897*t6663;
  t6686 = t6680 + t6684 + t6685;
  t6689 = -1.*t6470*t5907*t6635;
  t6690 = -1.*t5978*t6659;
  t6692 = 3.e-6*t5978*t6663;
  t6708 = t6689 + t6690 + t6692;
  t6597 = t6562 + t6219;
  t6616 = -1.8e-11*t6022;
  t6622 = 1. + t6616;
  t6762 = -1.*t6650*t5914*t5986;
  t6763 = t6635*t6007;
  t6764 = t6762 + t6763;
  t6940 = t5914*t6635;
  t6984 = t6650*t5986*t6007;
  t7014 = t6940 + t6984;
  t7059 = -3.e-6*t6650*t5907*t5978;
  t7179 = 3.e-6*t5897*t6764;
  t7222 = t6174*t7014;
  t7277 = t7059 + t7179 + t7222;
  t7320 = t6650*t5907*t5978;
  t7355 = t272*t6764;
  t7359 = 3.e-6*t5897*t7014;
  t7371 = t7320 + t7355 + t7359;
  t7407 = t6470*t6650*t5907;
  t7475 = -1.*t5978*t6764;
  t7492 = 3.e-6*t5978*t7014;
  t7527 = t7407 + t7475 + t7492;
  p_output1[0]=0.225000000002025*t5897*t5907*t5914 - 0.225000000002025*t5978*t5986 + 6.75000000006075e-7*t5897*t5907*t6007 + t6126*t6184 + t6349*t6375 + t6435*t6486 + 0.1*(t6184*t6555 + t6375*t6566 + t6486*t6571) + 0.225*(t6375*t6571 + t6184*t6594 + t6486*t6597) - 0.13*(t6375*t6555 + t6486*t6594 + t6184*t6622) + var1[0];
  p_output1[1]=0.225000000002025*t5907*t5978*t6635 + 0.225000000002025*t5897*t6659 - 6.75000000006075e-7*t5897*t6663 + t6126*t6678 + t6349*t6686 + t6435*t6708 + 0.1*(t6555*t6678 + t6566*t6686 + t6571*t6708) - 0.13*(t6622*t6678 + t6555*t6686 + t6594*t6708) + 0.225*(t6594*t6678 + t6571*t6686 + t6597*t6708) + var1[1];
  p_output1[2]=-0.225000000002025*t5907*t5978*t6650 + 0.225000000002025*t5897*t6764 - 6.75000000006075e-7*t5897*t7014 + t6126*t7277 + t6349*t7371 + t6435*t7527 + 0.1*(t6555*t7277 + t6566*t7371 + t6571*t7527) - 0.13*(t6622*t7277 + t6555*t7371 + t6594*t7527) + 0.225*(t6594*t7277 + t6571*t7371 + t6597*t7527) + var1[2];
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

#include "Joint_knee_front_rightR_link_sphere_center.hh"

namespace SymFunction
{

void Joint_knee_front_rightR_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
