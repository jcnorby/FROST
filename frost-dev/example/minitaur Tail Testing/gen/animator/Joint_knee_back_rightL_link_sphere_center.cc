/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:28 GMT-04:00
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
  double t942;
  double t949;
  double t972;
  double t340;
  double t986;
  double t1024;
  double t1035;
  double t1039;
  double t1047;
  double t1089;
  double t1101;
  double t1117;
  double t1221;
  double t1279;
  double t1335;
  double t1500;
  double t492;
  double t909;
  double t1901;
  double t1361;
  double t1391;
  double t1408;
  double t1444;
  double t1917;
  double t1182;
  double t1194;
  double t1209;
  double t1911;
  double t1923;
  double t1926;
  double t998;
  double t1043;
  double t1055;
  double t1071;
  double t1641;
  double t1654;
  double t1935;
  double t1936;
  double t1937;
  double t1940;
  double t1941;
  double t1943;
  double t1945;
  double t1953;
  double t1957;
  double t1862;
  double t1867;
  double t1990;
  double t1992;
  double t1993;
  double t1996;
  double t1997;
  double t1998;
  double t2009;
  double t2010;
  double t2011;
  double t2014;
  double t2015;
  double t2017;
  t942 = Cos(var1[4]);
  t949 = Cos(var1[5]);
  t972 = Sin(var1[18]);
  t340 = Cos(var1[18]);
  t986 = Sin(var1[4]);
  t1024 = Cos(var1[20]);
  t1035 = -1.*t1024;
  t1039 = 1. + t1035;
  t1047 = Sin(var1[20]);
  t1089 = t942*t949*t972;
  t1101 = t340*t986;
  t1117 = t1089 + t1101;
  t1221 = t340*t942*t949;
  t1279 = -1.*t972*t986;
  t1335 = t1221 + t1279;
  t1500 = Sin(var1[5]);
  t492 = -1.*t340;
  t909 = 1. + t492;
  t1901 = Sin(var1[3]);
  t1361 = 3.25e-7*var1[20];
  t1391 = 3.000000000027e-7*t1039;
  t1408 = 6.75000000009e-7*t1047;
  t1444 = t1361 + t1391 + t1408;
  t1917 = Cos(var1[3]);
  t1182 = -0.225000000005025*t1039;
  t1194 = 0.1000000000009*t1047;
  t1209 = t1182 + t1194;
  t1911 = t949*t1901*t986;
  t1923 = t1917*t1500;
  t1926 = t1911 + t1923;
  t998 = -9.75e-13*var1[20];
  t1043 = 0.1000000000009*t1039;
  t1055 = 0.225000000003*t1047;
  t1071 = t998 + t1043 + t1055;
  t1641 = -9.e-12*t1039;
  t1654 = 1. + t1641;
  t1935 = t1917*t949;
  t1936 = -1.*t1901*t986*t1500;
  t1937 = t1935 + t1936;
  t1940 = t942*t972*t1901;
  t1941 = t340*t1926;
  t1943 = t1940 + t1941;
  t1945 = -1.*t340*t942*t1901;
  t1953 = t972*t1926;
  t1957 = t1945 + t1953;
  t1862 = -1.000000000009*t1039;
  t1867 = 1. + t1862;
  t1990 = -1.*t1917*t949*t986;
  t1992 = t1901*t1500;
  t1993 = t1990 + t1992;
  t1996 = t949*t1901;
  t1997 = t1917*t986*t1500;
  t1998 = t1996 + t1997;
  t2009 = -1.*t1917*t942*t972;
  t2010 = t340*t1993;
  t2011 = t2009 + t2010;
  t2014 = t340*t1917*t942;
  t2015 = t972*t1993;
  t2017 = t2014 + t2015;
  p_output1[0]=t1071*t1117 + t1209*t1335 - 1.*t1444*t1500*t942 + 0.1*(t1024*t1117 - 1.*t1047*t1335 + 3.e-6*t1039*t1500*t942) - 0.225*(t1047*t1117 + t1335*t1867 - 3.e-6*t1047*t1500*t942) - 0.13*(-3.e-6*t1039*t1117 - 3.e-6*t1047*t1335 - 1.*t1500*t1654*t942) - 0.225*t909*t942*t949 - 0.225*t972*t986 + var1[0];
  p_output1[1]=t1444*t1937 + t1209*t1943 + t1071*t1957 + 0.1*(-3.e-6*t1039*t1937 - 1.*t1047*t1943 + t1024*t1957) - 0.13*(t1654*t1937 - 3.e-6*t1047*t1943 - 3.e-6*t1039*t1957) - 0.225*(3.e-6*t1047*t1937 + t1867*t1943 + t1047*t1957) - 0.225*t1926*t909 + 0.225*t1901*t942*t972 + var1[1];
  p_output1[2]=t1444*t1998 + t1209*t2011 + t1071*t2017 + 0.1*(-3.e-6*t1039*t1998 - 1.*t1047*t2011 + t1024*t2017) - 0.13*(t1654*t1998 - 3.e-6*t1047*t2011 - 3.e-6*t1039*t2017) - 0.225*(3.e-6*t1047*t1998 + t1867*t2011 + t1047*t2017) - 0.225*t1993*t909 - 0.225*t1917*t942*t972 + var1[2];
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

#include "Joint_knee_back_rightL_link_sphere_center.hh"

namespace SymFunction
{

void Joint_knee_back_rightL_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
