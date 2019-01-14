/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:29 GMT-04:00
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
  double t1659;
  double t1350;
  double t1540;
  double t1571;
  double t1667;
  double t954;
  double t989;
  double t1129;
  double t1613;
  double t1779;
  double t1800;
  double t1811;
  double t1854;
  double t1873;
  double t1879;
  double t1906;
  double t1890;
  double t1895;
  double t1823;
  double t1848;
  double t1980;
  double t1975;
  double t1986;
  double t1988;
  double t1989;
  double t1979;
  double t1981;
  double t1982;
  double t1959;
  double t1961;
  double t1985;
  double t1994;
  double t2007;
  double t1939;
  double t1944;
  double t2018;
  double t2019;
  double t2021;
  double t2043;
  double t2044;
  double t2045;
  double t2038;
  double t2039;
  double t2040;
  double t2042;
  double t2046;
  double t2047;
  double t2049;
  double t2050;
  double t2051;
  t1659 = Cos(var1[18]);
  t1350 = Cos(var1[4]);
  t1540 = Cos(var1[5]);
  t1571 = Sin(var1[18]);
  t1667 = Sin(var1[4]);
  t954 = Cos(var1[20]);
  t989 = -1.*t954;
  t1129 = 1. + t989;
  t1613 = t1350*t1540*t1571;
  t1779 = t1659*t1667;
  t1800 = t1613 + t1779;
  t1811 = Sin(var1[20]);
  t1854 = t1659*t1350*t1540;
  t1873 = -1.*t1571*t1667;
  t1879 = t1854 + t1873;
  t1906 = Sin(var1[5]);
  t1890 = -9.000000000000001e-12*t1129;
  t1895 = 1. + t1890;
  t1823 = -3.e-6*t1811;
  t1848 = 0. + t1823;
  t1980 = Sin(var1[3]);
  t1975 = Cos(var1[3]);
  t1986 = t1540*t1980*t1667;
  t1988 = t1975*t1906;
  t1989 = t1986 + t1988;
  t1979 = t1975*t1540;
  t1981 = -1.*t1980*t1667*t1906;
  t1982 = t1979 + t1981;
  t1959 = -1.*t1811;
  t1961 = 0. + t1959;
  t1985 = t1350*t1571*t1980;
  t1994 = t1659*t1989;
  t2007 = t1985 + t1994;
  t1939 = -1.*t1129;
  t1944 = 1. + t1939;
  t2018 = -1.*t1659*t1350*t1980;
  t2019 = t1571*t1989;
  t2021 = t2018 + t2019;
  t2043 = -1.*t1975*t1540*t1667;
  t2044 = t1980*t1906;
  t2045 = t2043 + t2044;
  t2038 = t1540*t1980;
  t2039 = t1975*t1667*t1906;
  t2040 = t2038 + t2039;
  t2042 = -1.*t1975*t1350*t1571;
  t2046 = t1659*t2045;
  t2047 = t2042 + t2046;
  t2049 = t1659*t1975*t1350;
  t2050 = t1571*t2045;
  t2051 = t2049 + t2050;
  p_output1[0]=3.e-6*t1129*t1800 - 1.*t1848*t1879 + t1350*t1895*t1906 + 3.e-6*(3.e-6*t1129*t1350*t1906 + t1800*t1944 + t1879*t1961);
  p_output1[1]=-1.*t1895*t1982 - 1.*t1848*t2007 + 3.e-6*t1129*t2021 + 3.e-6*(-3.e-6*t1129*t1982 + t1961*t2007 + t1944*t2021);
  p_output1[2]=-1.*t1895*t2040 - 1.*t1848*t2047 + 3.e-6*t1129*t2051 + 3.e-6*(-3.e-6*t1129*t2040 + t1961*t2047 + t1944*t2051);
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

#include "Joint_knee_back_rightL_link_axis.hh"

namespace SymFunction
{

void Joint_knee_back_rightL_link_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
