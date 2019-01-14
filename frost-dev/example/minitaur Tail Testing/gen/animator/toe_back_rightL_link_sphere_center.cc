/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:53 GMT-04:00
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
  double t34;
  double t120;
  double t999;
  double t4630;
  double t9754;
  double t9758;
  double t9761;
  double t9764;
  double t9770;
  double t4725;
  double t6336;
  double t8297;
  double t9674;
  double t9810;
  double t9814;
  double t9853;
  double t9778;
  double t9795;
  double t9859;
  double t9817;
  double t9820;
  double t9821;
  double t9823;
  double t9831;
  double t9838;
  double t9865;
  double t9866;
  double t9867;
  double t9868;
  double t9875;
  double t9879;
  double t9883;
  double t9888;
  double t9893;
  double t9898;
  double t9900;
  double t9906;
  double t9907;
  double t9903;
  double t9860;
  double t9901;
  double t9911;
  double t9926;
  double t9929;
  double t9749;
  double t9762;
  double t9809;
  double t9815;
  double t9816;
  double t9928;
  double t9930;
  double t9931;
  double t9933;
  double t9934;
  double t9935;
  double t9858;
  double t9861;
  double t9862;
  double t9863;
  double t9864;
  double t9870;
  double t9871;
  double t9872;
  double t9873;
  double t9874;
  double t9937;
  double t9938;
  double t9939;
  double t9940;
  double t9904;
  double t9942;
  double t9943;
  double t9944;
  double t9946;
  double t9948;
  double t9949;
  double t9951;
  double t9952;
  double t9914;
  double t9918;
  double t9919;
  double t9972;
  double t9974;
  double t9975;
  double t9977;
  double t9978;
  double t9979;
  double t9981;
  double t9982;
  double t9983;
  double t9984;
  double t9986;
  double t9987;
  double t9988;
  double t9989;
  double t9992;
  double t9993;
  double t9994;
  double t9995;
  t34 = Cos(var1[19]);
  t120 = -1.*t34;
  t999 = 1. + t120;
  t4630 = Cos(var1[4]);
  t9754 = Cos(var1[21]);
  t9758 = -1.*t9754;
  t9761 = 1. + t9758;
  t9764 = -3.e-6*t9761;
  t9770 = Sin(var1[21]);
  t4725 = Cos(var1[5]);
  t6336 = Sin(var1[19]);
  t8297 = Sin(var1[4]);
  t9674 = Sin(var1[5]);
  t9810 = 3.e-6*t9770;
  t9814 = t9764 + t9810;
  t9853 = 7.5e-14*var1[21];
  t9778 = -3.e-6*t9770;
  t9795 = t9764 + t9778;
  t9859 = -9.e-12*t9761;
  t9817 = 3.e-6*t999*t4630*t4725;
  t9820 = -3.e-6*t6336*t8297;
  t9821 = -9.e-12*t999;
  t9823 = 1. + t9821;
  t9831 = -1.*t9823*t4630*t9674;
  t9838 = t9817 + t9820 + t9831;
  t9865 = t34*t4630*t4725;
  t9866 = t6336*t8297;
  t9867 = -3.e-6*t999*t4630*t9674;
  t9868 = t9865 + t9866 + t9867;
  t9875 = -1.*t4630*t4725*t6336;
  t9879 = -1.000000000009*t999;
  t9883 = 1. + t9879;
  t9888 = t9883*t8297;
  t9893 = -3.e-6*t4630*t6336*t9674;
  t9898 = t9875 + t9888 + t9893;
  t9900 = 3.e-6*t9761;
  t9906 = -1.000000000009*t9761;
  t9907 = 1. + t9906;
  t9903 = 9.e-12*t9761;
  t9860 = -1.*t9770;
  t9901 = t9900 + t9778;
  t9911 = t9900 + t9810;
  t9926 = Sin(var1[3]);
  t9929 = Cos(var1[3]);
  t9749 = 2.5e-8*var1[21];
  t9762 = 6.75e-18*t9761;
  t9809 = -0.225000000003*t9795;
  t9815 = 0.100000000003*t9814;
  t9816 = t9749 + t9762 + t9809 + t9815;
  t9928 = t4725*t9926*t8297;
  t9930 = t9929*t9674;
  t9931 = t9928 + t9930;
  t9933 = t9929*t4725;
  t9934 = -1.*t9926*t8297*t9674;
  t9935 = t9933 + t9934;
  t9858 = -0.225000000005025*t9761;
  t9861 = t9859 + t9860;
  t9862 = 0.100000000003*t9861;
  t9863 = 3.75e-7*t9814;
  t9864 = t9853 + t9858 + t9862 + t9863;
  t9870 = 0.1000000000039*t9761;
  t9871 = 3.75e-7*t9795;
  t9872 = t9859 + t9770;
  t9873 = -0.225000000003*t9872;
  t9874 = t9853 + t9870 + t9871 + t9873;
  t9937 = 3.e-6*t4630*t6336*t9926;
  t9938 = 3.e-6*t999*t9931;
  t9939 = t9823*t9935;
  t9940 = t9937 + t9938 + t9939;
  t9904 = t9903 + t9770;
  t9942 = -1.*t4630*t6336*t9926;
  t9943 = t34*t9931;
  t9944 = 3.e-6*t999*t9935;
  t9946 = t9942 + t9943 + t9944;
  t9948 = -1.*t9883*t4630*t9926;
  t9949 = -1.*t6336*t9931;
  t9951 = 3.e-6*t6336*t9935;
  t9952 = t9948 + t9949 + t9951;
  t9914 = t9903 + t9860;
  t9918 = -1.8e-11*t9761;
  t9919 = 1. + t9918;
  t9972 = -1.*t9929*t4725*t8297;
  t9974 = t9926*t9674;
  t9975 = t9972 + t9974;
  t9977 = t4725*t9926;
  t9978 = t9929*t8297*t9674;
  t9979 = t9977 + t9978;
  t9981 = -3.e-6*t9929*t4630*t6336;
  t9982 = 3.e-6*t999*t9975;
  t9983 = t9823*t9979;
  t9984 = t9981 + t9982 + t9983;
  t9986 = t9929*t4630*t6336;
  t9987 = t34*t9975;
  t9988 = 3.e-6*t999*t9979;
  t9989 = t9986 + t9987 + t9988;
  t9992 = t9883*t9929*t4630;
  t9993 = -1.*t6336*t9975;
  t9994 = 3.e-6*t6336*t9979;
  t9995 = t9992 + t9993 + t9994;
  p_output1[0]=0.225000000002025*t6336*t8297 + t9816*t9838 + t9864*t9868 + t9874*t9898 - 0.14*(t9838*t9901 + t9868*t9904 + t9898*t9907) - 0.225*(t9868*t9907 + t9838*t9911 + t9898*t9914) - 0.129999*(t9868*t9901 + t9898*t9911 + t9838*t9919) - 0.225000000002025*t4630*t4725*t999 - 6.75000000006075e-7*t4630*t9674*t999 + var1[0];
  p_output1[1]=-0.225000000002025*t4630*t6336*t9926 + t9816*t9940 + t9864*t9946 + t9874*t9952 - 0.14*(t9901*t9940 + t9904*t9946 + t9907*t9952) - 0.129999*(t9919*t9940 + t9901*t9946 + t9911*t9952) - 0.225*(t9911*t9940 + t9907*t9946 + t9914*t9952) - 0.225000000002025*t9931*t999 + 6.75000000006075e-7*t9935*t999 + var1[1];
  p_output1[2]=0.225000000002025*t4630*t6336*t9929 + t9816*t9984 + t9864*t9989 - 0.225000000002025*t9975*t999 + 6.75000000006075e-7*t9979*t999 + t9874*t9995 - 0.14*(t9901*t9984 + t9904*t9989 + t9907*t9995) - 0.129999*(t9919*t9984 + t9901*t9989 + t9911*t9995) - 0.225*(t9911*t9984 + t9907*t9989 + t9914*t9995) + var1[2];
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

#include "toe_back_rightL_link_sphere_center.hh"

namespace SymFunction
{

void toe_back_rightL_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
