/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:51 GMT-04:00
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
  double t507;
  double t2191;
  double t3716;
  double t4600;
  double t7234;
  double t7454;
  double t7672;
  double t7898;
  double t8630;
  double t4651;
  double t5519;
  double t6318;
  double t6595;
  double t8648;
  double t8650;
  double t9118;
  double t8640;
  double t8645;
  double t9192;
  double t8838;
  double t8841;
  double t8843;
  double t8968;
  double t9042;
  double t9043;
  double t9468;
  double t9484;
  double t9594;
  double t9608;
  double t9634;
  double t9640;
  double t9641;
  double t9643;
  double t9646;
  double t9647;
  double t9649;
  double t9675;
  double t9680;
  double t9662;
  double t9202;
  double t9657;
  double t9684;
  double t9711;
  double t9722;
  double t7007;
  double t7849;
  double t8646;
  double t8825;
  double t8831;
  double t9717;
  double t9723;
  double t9724;
  double t9726;
  double t9727;
  double t9728;
  double t9120;
  double t9270;
  double t9288;
  double t9298;
  double t9318;
  double t9614;
  double t9623;
  double t9629;
  double t9632;
  double t9633;
  double t9730;
  double t9731;
  double t9732;
  double t9733;
  double t9667;
  double t9735;
  double t9736;
  double t9737;
  double t9738;
  double t9740;
  double t9741;
  double t9742;
  double t9743;
  double t9687;
  double t9692;
  double t9694;
  double t9767;
  double t9768;
  double t9769;
  double t9771;
  double t9773;
  double t9777;
  double t9779;
  double t9780;
  double t9782;
  double t9784;
  double t9789;
  double t9790;
  double t9793;
  double t9794;
  double t9796;
  double t9804;
  double t9806;
  double t9808;
  t507 = Cos(var1[10]);
  t2191 = -1.*t507;
  t3716 = 1. + t2191;
  t4600 = Cos(var1[4]);
  t7234 = Cos(var1[12]);
  t7454 = -1.*t7234;
  t7672 = 1. + t7454;
  t7898 = -3.e-6*t7672;
  t8630 = Sin(var1[12]);
  t4651 = Cos(var1[5]);
  t5519 = Sin(var1[10]);
  t6318 = Sin(var1[4]);
  t6595 = Sin(var1[5]);
  t8648 = 3.e-6*t8630;
  t8650 = t7898 + t8648;
  t9118 = 7.5e-14*var1[12];
  t8640 = -3.e-6*t8630;
  t8645 = t7898 + t8640;
  t9192 = -9.e-12*t7672;
  t8838 = 3.e-6*t3716*t4600*t4651;
  t8841 = -3.e-6*t5519*t6318;
  t8843 = -9.e-12*t3716;
  t8968 = 1. + t8843;
  t9042 = -1.*t8968*t4600*t6595;
  t9043 = t8838 + t8841 + t9042;
  t9468 = t507*t4600*t4651;
  t9484 = t5519*t6318;
  t9594 = -3.e-6*t3716*t4600*t6595;
  t9608 = t9468 + t9484 + t9594;
  t9634 = -1.*t4600*t4651*t5519;
  t9640 = -1.000000000009*t3716;
  t9641 = 1. + t9640;
  t9643 = t9641*t6318;
  t9646 = -3.e-6*t4600*t5519*t6595;
  t9647 = t9634 + t9643 + t9646;
  t9649 = 3.e-6*t7672;
  t9675 = -1.000000000009*t7672;
  t9680 = 1. + t9675;
  t9662 = 9.e-12*t7672;
  t9202 = -1.*t8630;
  t9657 = t9649 + t8640;
  t9684 = t9649 + t8648;
  t9711 = Sin(var1[3]);
  t9722 = Cos(var1[3]);
  t7007 = 2.5e-8*var1[12];
  t7849 = 6.75e-18*t7672;
  t8646 = -0.225000000003*t8645;
  t8825 = 0.100000000003*t8650;
  t8831 = t7007 + t7849 + t8646 + t8825;
  t9717 = t4651*t9711*t6318;
  t9723 = t9722*t6595;
  t9724 = t9717 + t9723;
  t9726 = t9722*t4651;
  t9727 = -1.*t9711*t6318*t6595;
  t9728 = t9726 + t9727;
  t9120 = -0.225000000005025*t7672;
  t9270 = t9192 + t9202;
  t9288 = 0.100000000003*t9270;
  t9298 = 3.75e-7*t8650;
  t9318 = t9118 + t9120 + t9288 + t9298;
  t9614 = 0.1000000000039*t7672;
  t9623 = 3.75e-7*t8645;
  t9629 = t9192 + t8630;
  t9632 = -0.225000000003*t9629;
  t9633 = t9118 + t9614 + t9623 + t9632;
  t9730 = 3.e-6*t4600*t5519*t9711;
  t9731 = 3.e-6*t3716*t9724;
  t9732 = t8968*t9728;
  t9733 = t9730 + t9731 + t9732;
  t9667 = t9662 + t8630;
  t9735 = -1.*t4600*t5519*t9711;
  t9736 = t507*t9724;
  t9737 = 3.e-6*t3716*t9728;
  t9738 = t9735 + t9736 + t9737;
  t9740 = -1.*t9641*t4600*t9711;
  t9741 = -1.*t5519*t9724;
  t9742 = 3.e-6*t5519*t9728;
  t9743 = t9740 + t9741 + t9742;
  t9687 = t9662 + t9202;
  t9692 = -1.8e-11*t7672;
  t9694 = 1. + t9692;
  t9767 = -1.*t9722*t4651*t6318;
  t9768 = t9711*t6595;
  t9769 = t9767 + t9768;
  t9771 = t4651*t9711;
  t9773 = t9722*t6318*t6595;
  t9777 = t9771 + t9773;
  t9779 = -3.e-6*t9722*t4600*t5519;
  t9780 = 3.e-6*t3716*t9769;
  t9782 = t8968*t9777;
  t9784 = t9779 + t9780 + t9782;
  t9789 = t9722*t4600*t5519;
  t9790 = t507*t9769;
  t9793 = 3.e-6*t3716*t9777;
  t9794 = t9789 + t9790 + t9793;
  t9796 = t9641*t9722*t4600;
  t9804 = -1.*t5519*t9769;
  t9806 = 3.e-6*t5519*t9777;
  t9808 = t9796 + t9804 + t9806;
  p_output1[0]=-0.225000000002025*t3716*t4600*t4651 + 0.225000000002025*t5519*t6318 - 6.75000000006075e-7*t3716*t4600*t6595 + t8831*t9043 + t9318*t9608 + t9633*t9647 - 0.14*(t9043*t9657 + t9608*t9667 + t9647*t9680) - 0.225*(t9608*t9680 + t9043*t9684 + t9647*t9687) + 0.130001*(t9608*t9657 + t9647*t9684 + t9043*t9694) + var1[0];
  p_output1[1]=-0.225000000002025*t4600*t5519*t9711 - 0.225000000002025*t3716*t9724 + 6.75000000006075e-7*t3716*t9728 + t8831*t9733 + t9318*t9738 + t9633*t9743 - 0.14*(t9657*t9733 + t9667*t9738 + t9680*t9743) + 0.130001*(t9694*t9733 + t9657*t9738 + t9684*t9743) - 0.225*(t9684*t9733 + t9680*t9738 + t9687*t9743) + var1[1];
  p_output1[2]=0.225000000002025*t4600*t5519*t9722 - 0.225000000002025*t3716*t9769 + 6.75000000006075e-7*t3716*t9777 + t8831*t9784 + t9318*t9794 + t9633*t9808 - 0.14*(t9657*t9784 + t9667*t9794 + t9680*t9808) + 0.130001*(t9694*t9784 + t9657*t9794 + t9684*t9808) - 0.225*(t9684*t9784 + t9680*t9794 + t9687*t9808) + var1[2];
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

#include "toe_back_leftR_link_sphere_center.hh"

namespace SymFunction
{

void toe_back_leftR_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
