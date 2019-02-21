/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:09 GMT-04:00
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
  double t7799;
  double t7682;
  double t7742;
  double t7788;
  double t7817;
  double t5814;
  double t7380;
  double t7544;
  double t7793;
  double t7832;
  double t7836;
  double t7845;
  double t7858;
  double t7881;
  double t7894;
  double t7913;
  double t7903;
  double t7907;
  double t7849;
  double t7854;
  double t7976;
  double t7971;
  double t7988;
  double t7989;
  double t7990;
  double t7974;
  double t7984;
  double t7985;
  double t7962;
  double t7963;
  double t7987;
  double t7991;
  double t7996;
  double t7936;
  double t7951;
  double t8013;
  double t8017;
  double t8018;
  double t8038;
  double t8039;
  double t8040;
  double t8029;
  double t8030;
  double t8034;
  double t8037;
  double t8041;
  double t8042;
  double t8044;
  double t8045;
  double t8046;
  t7799 = Cos(var1[11]);
  t7682 = Cos(var1[4]);
  t7742 = Cos(var1[5]);
  t7788 = Sin(var1[11]);
  t7817 = Sin(var1[4]);
  t5814 = Cos(var1[13]);
  t7380 = -1.*t5814;
  t7544 = 1. + t7380;
  t7793 = t7682*t7742*t7788;
  t7832 = t7799*t7817;
  t7836 = t7793 + t7832;
  t7845 = Sin(var1[13]);
  t7858 = t7799*t7682*t7742;
  t7881 = -1.*t7788*t7817;
  t7894 = t7858 + t7881;
  t7913 = Sin(var1[5]);
  t7903 = -9.000000000000001e-12*t7544;
  t7907 = 1. + t7903;
  t7849 = -3.e-6*t7845;
  t7854 = 0. + t7849;
  t7976 = Sin(var1[3]);
  t7971 = Cos(var1[3]);
  t7988 = t7742*t7976*t7817;
  t7989 = t7971*t7913;
  t7990 = t7988 + t7989;
  t7974 = t7971*t7742;
  t7984 = -1.*t7976*t7817*t7913;
  t7985 = t7974 + t7984;
  t7962 = -1.*t7845;
  t7963 = 0. + t7962;
  t7987 = t7682*t7788*t7976;
  t7991 = t7799*t7990;
  t7996 = t7987 + t7991;
  t7936 = -1.*t7544;
  t7951 = 1. + t7936;
  t8013 = -1.*t7799*t7682*t7976;
  t8017 = t7788*t7990;
  t8018 = t8013 + t8017;
  t8038 = -1.*t7971*t7742*t7817;
  t8039 = t7976*t7913;
  t8040 = t8038 + t8039;
  t8029 = t7742*t7976;
  t8030 = t7971*t7817*t7913;
  t8034 = t8029 + t8030;
  t8037 = -1.*t7971*t7682*t7788;
  t8041 = t7799*t8040;
  t8042 = t8037 + t8041;
  t8044 = t7799*t7971*t7682;
  t8045 = t7788*t8040;
  t8046 = t8044 + t8045;
  p_output1[0]=3.e-6*t7544*t7836 - 1.*t7854*t7894 + t7682*t7907*t7913 + 3.e-6*(3.e-6*t7544*t7682*t7913 + t7836*t7951 + t7894*t7963);
  p_output1[1]=-1.*t7907*t7985 - 1.*t7854*t7996 + 3.e-6*t7544*t8018 + 3.e-6*(-3.e-6*t7544*t7985 + t7963*t7996 + t7951*t8018);
  p_output1[2]=-1.*t7907*t8034 - 1.*t7854*t8042 + 3.e-6*t7544*t8046 + 3.e-6*(-3.e-6*t7544*t8034 + t7963*t8042 + t7951*t8046);
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

#include "Joint_knee_back_leftR_link_axis.hh"

namespace SymFunction
{

void Joint_knee_back_leftR_link_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
