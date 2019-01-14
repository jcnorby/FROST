/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:52 GMT-04:00
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
  double t213;
  double t380;
  double t540;
  double t4426;
  double t8330;
  double t8341;
  double t8536;
  double t8542;
  double t8550;
  double t4699;
  double t6633;
  double t8293;
  double t8307;
  double t8932;
  double t8935;
  double t9681;
  double t8570;
  double t8576;
  double t9683;
  double t9103;
  double t9114;
  double t9459;
  double t9611;
  double t9648;
  double t9661;
  double t9695;
  double t9696;
  double t9697;
  double t9701;
  double t9739;
  double t9744;
  double t9745;
  double t9746;
  double t9747;
  double t9748;
  double t9751;
  double t9759;
  double t9760;
  double t9755;
  double t9685;
  double t9752;
  double t9765;
  double t9822;
  double t9825;
  double t8328;
  double t8541;
  double t8616;
  double t9029;
  double t9099;
  double t9824;
  double t9826;
  double t9827;
  double t9832;
  double t9833;
  double t9836;
  double t9682;
  double t9686;
  double t9688;
  double t9689;
  double t9690;
  double t9706;
  double t9716;
  double t9725;
  double t9729;
  double t9734;
  double t9842;
  double t9844;
  double t9845;
  double t9846;
  double t9756;
  double t9848;
  double t9849;
  double t9850;
  double t9852;
  double t9854;
  double t9855;
  double t9856;
  double t9857;
  double t9788;
  double t9811;
  double t9813;
  double t9876;
  double t9877;
  double t9878;
  double t9880;
  double t9881;
  double t9882;
  double t9884;
  double t9885;
  double t9886;
  double t9887;
  double t9889;
  double t9890;
  double t9891;
  double t9892;
  double t9894;
  double t9895;
  double t9896;
  double t9897;
  t213 = Cos(var1[15]);
  t380 = -1.*t213;
  t540 = 1. + t380;
  t4426 = Cos(var1[4]);
  t8330 = Cos(var1[17]);
  t8341 = -1.*t8330;
  t8536 = 1. + t8341;
  t8542 = -3.e-6*t8536;
  t8550 = Sin(var1[17]);
  t4699 = Cos(var1[5]);
  t6633 = Sin(var1[15]);
  t8293 = Sin(var1[4]);
  t8307 = Sin(var1[5]);
  t8932 = 3.e-6*t8550;
  t8935 = t8542 + t8932;
  t9681 = 1.125e-12*var1[17];
  t8570 = -3.e-6*t8550;
  t8576 = t8542 + t8570;
  t9683 = -9.e-12*t8536;
  t9103 = 3.e-6*t540*t4426*t4699;
  t9114 = -3.e-6*t6633*t8293;
  t9459 = -9.e-12*t540;
  t9611 = 1. + t9459;
  t9648 = -1.*t9611*t4426*t8307;
  t9661 = t9103 + t9114 + t9648;
  t9695 = t213*t4426*t4699;
  t9696 = t6633*t8293;
  t9697 = -3.e-6*t540*t4426*t8307;
  t9701 = t9695 + t9696 + t9697;
  t9739 = -1.*t4426*t4699*t6633;
  t9744 = -1.000000000009*t540;
  t9745 = 1. + t9744;
  t9746 = t9745*t8293;
  t9747 = -3.e-6*t4426*t6633*t8307;
  t9748 = t9739 + t9746 + t9747;
  t9751 = 3.e-6*t8536;
  t9759 = -1.000000000009*t8536;
  t9760 = 1. + t9759;
  t9755 = 9.e-12*t8536;
  t9685 = -1.*t8550;
  t9752 = t9751 + t8570;
  t9765 = t9751 + t8932;
  t9822 = Sin(var1[3]);
  t9825 = Cos(var1[3]);
  t8328 = 3.75e-7*var1[17];
  t8541 = -1.755e-17*t8536;
  t8616 = 0.225*t8576;
  t9029 = 0.1*t8935;
  t9099 = t8328 + t8541 + t8616 + t9029;
  t9824 = t4699*t9822*t8293;
  t9826 = t9825*t8307;
  t9827 = t9824 + t9826;
  t9832 = t9825*t4699;
  t9833 = -1.*t9822*t8293*t8307;
  t9836 = t9832 + t9833;
  t9682 = 0.225000000002025*t8536;
  t9686 = t9683 + t9685;
  t9688 = 0.1*t9686;
  t9689 = -9.75e-7*t8935;
  t9690 = t9681 + t9682 + t9688 + t9689;
  t9706 = 0.1000000000009*t8536;
  t9716 = -9.75e-7*t8576;
  t9725 = t9683 + t8550;
  t9729 = 0.225*t9725;
  t9734 = t9681 + t9706 + t9716 + t9729;
  t9842 = 3.e-6*t4426*t6633*t9822;
  t9844 = 3.e-6*t540*t9827;
  t9845 = t9611*t9836;
  t9846 = t9842 + t9844 + t9845;
  t9756 = t9755 + t8550;
  t9848 = -1.*t4426*t6633*t9822;
  t9849 = t213*t9827;
  t9850 = 3.e-6*t540*t9836;
  t9852 = t9848 + t9849 + t9850;
  t9854 = -1.*t9745*t4426*t9822;
  t9855 = -1.*t6633*t9827;
  t9856 = 3.e-6*t6633*t9836;
  t9857 = t9854 + t9855 + t9856;
  t9788 = t9755 + t9685;
  t9811 = -1.8e-11*t8536;
  t9813 = 1. + t9811;
  t9876 = -1.*t9825*t4699*t8293;
  t9877 = t9822*t8307;
  t9878 = t9876 + t9877;
  t9880 = t4699*t9822;
  t9881 = t9825*t8293*t8307;
  t9882 = t9880 + t9881;
  t9884 = -3.e-6*t9825*t4426*t6633;
  t9885 = 3.e-6*t540*t9878;
  t9886 = t9611*t9882;
  t9887 = t9884 + t9885 + t9886;
  t9889 = t9825*t4426*t6633;
  t9890 = t213*t9878;
  t9891 = 3.e-6*t540*t9882;
  t9892 = t9889 + t9890 + t9891;
  t9894 = t9745*t9825*t4426;
  t9895 = -1.*t6633*t9878;
  t9896 = 3.e-6*t6633*t9882;
  t9897 = t9894 + t9895 + t9896;
  p_output1[0]=0.225000000002025*t4426*t4699*t540 - 0.225000000002025*t6633*t8293 + 6.75000000006075e-7*t4426*t540*t8307 + t9099*t9661 + t9690*t9701 + t9734*t9748 - 0.14*(t9661*t9752 + t9701*t9756 + t9748*t9760) + 0.225*(t9701*t9760 + t9661*t9765 + t9748*t9788) - 0.129999*(t9701*t9752 + t9748*t9765 + t9661*t9813) + var1[0];
  p_output1[1]=0.225000000002025*t4426*t6633*t9822 + 0.225000000002025*t540*t9827 - 6.75000000006075e-7*t540*t9836 + t9099*t9846 + t9690*t9852 + t9734*t9857 - 0.14*(t9752*t9846 + t9756*t9852 + t9760*t9857) - 0.129999*(t9813*t9846 + t9752*t9852 + t9765*t9857) + 0.225*(t9765*t9846 + t9760*t9852 + t9788*t9857) + var1[1];
  p_output1[2]=-0.225000000002025*t4426*t6633*t9825 + 0.225000000002025*t540*t9878 - 6.75000000006075e-7*t540*t9882 + t9099*t9887 + t9690*t9892 + t9734*t9897 - 0.14*(t9752*t9887 + t9756*t9892 + t9760*t9897) - 0.129999*(t9813*t9887 + t9752*t9892 + t9765*t9897) + 0.225*(t9765*t9887 + t9760*t9892 + t9788*t9897) + var1[2];
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

#include "toe_front_rightL_link_sphere_center.hh"

namespace SymFunction
{

void toe_front_rightL_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
