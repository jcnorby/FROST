/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:06 GMT-04:00
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
  double t2027;
  double t2058;
  double t2924;
  double t3102;
  double t85;
  double t1447;
  double t1604;
  double t3360;
  double t3915;
  double t5187;
  double t6980;
  double t7143;
  double t7188;
  double t7202;
  double t7223;
  double t3714;
  double t4048;
  double t5101;
  double t5252;
  double t5467;
  double t5518;
  double t7051;
  double t7083;
  double t7238;
  double t7256;
  double t7328;
  double t7331;
  double t7349;
  double t7373;
  double t7376;
  double t7417;
  double t7423;
  double t7434;
  double t7444;
  double t7454;
  double t7466;
  double t7502;
  double t7516;
  double t7524;
  double t7532;
  double t7411;
  double t7415;
  double t7550;
  double t7551;
  double t7545;
  double t1678;
  double t1690;
  double t7599;
  double t7638;
  double t7629;
  double t7639;
  double t7647;
  double t7652;
  double t7654;
  double t7655;
  double t7606;
  double t7651;
  double t7656;
  double t7658;
  double t7546;
  double t7660;
  double t7663;
  double t7664;
  double t7667;
  double t7672;
  double t7674;
  double t7675;
  double t7677;
  double t7566;
  double t7579;
  double t7702;
  double t7704;
  double t7705;
  double t7709;
  double t7712;
  double t7713;
  double t7701;
  double t7708;
  double t7714;
  double t7715;
  double t7719;
  double t7720;
  double t7722;
  double t7724;
  double t7727;
  double t7728;
  double t7729;
  double t7731;
  t2027 = Cos(var1[10]);
  t2058 = -1.*t2027;
  t2924 = 1. + t2058;
  t3102 = Cos(var1[4]);
  t85 = Cos(var1[12]);
  t1447 = -1.*t85;
  t1604 = 1. + t1447;
  t3360 = Cos(var1[5]);
  t3915 = Sin(var1[10]);
  t5187 = Sin(var1[4]);
  t6980 = Sin(var1[5]);
  t7143 = 3.e-6*t1604;
  t7188 = Sin(var1[12]);
  t7202 = -3.e-6*t7188;
  t7223 = t7143 + t7202;
  t3714 = 3.e-6*t2924*t3102*t3360;
  t4048 = -3.e-6*t3915;
  t5101 = 0. + t4048;
  t5252 = t5101*t5187;
  t5467 = -9.000000000000001e-12*t2924;
  t5518 = 1. + t5467;
  t7051 = -1.*t5518*t3102*t6980;
  t7083 = t3714 + t5252 + t7051;
  t7238 = -1.*t2924;
  t7256 = 1. + t7238;
  t7328 = t7256*t3102*t3360;
  t7331 = 0. + t3915;
  t7349 = t7331*t5187;
  t7373 = -3.e-6*t2924*t3102*t6980;
  t7376 = t7328 + t7349 + t7373;
  t7417 = -1.*t3915;
  t7423 = 0. + t7417;
  t7434 = t3102*t3360*t7423;
  t7444 = -1.000000000009*t2924;
  t7454 = 1. + t7444;
  t7466 = t7454*t5187;
  t7502 = 3.e-6*t3915;
  t7516 = 0. + t7502;
  t7524 = -1.*t3102*t7516*t6980;
  t7532 = t7434 + t7466 + t7524;
  t7411 = 3.e-6*t7188;
  t7415 = t7143 + t7411;
  t7550 = -1.000000000009*t1604;
  t7551 = 1. + t7550;
  t7545 = 9.000000000000001e-12*t1604;
  t1678 = -1.8000000000000002e-11*t1604;
  t1690 = 1. + t1678;
  t7599 = Sin(var1[3]);
  t7638 = Cos(var1[3]);
  t7629 = t3360*t7599*t5187;
  t7639 = t7638*t6980;
  t7647 = t7629 + t7639;
  t7652 = t7638*t3360;
  t7654 = -1.*t7599*t5187*t6980;
  t7655 = t7652 + t7654;
  t7606 = -1.*t3102*t5101*t7599;
  t7651 = 3.e-6*t2924*t7647;
  t7656 = t5518*t7655;
  t7658 = t7606 + t7651 + t7656;
  t7546 = t7545 + t7188;
  t7660 = -1.*t3102*t7331*t7599;
  t7663 = t7256*t7647;
  t7664 = 3.e-6*t2924*t7655;
  t7667 = t7660 + t7663 + t7664;
  t7672 = -1.*t7454*t3102*t7599;
  t7674 = t7423*t7647;
  t7675 = t7516*t7655;
  t7677 = t7672 + t7674 + t7675;
  t7566 = -1.*t7188;
  t7579 = t7545 + t7566;
  t7702 = -1.*t7638*t3360*t5187;
  t7704 = t7599*t6980;
  t7705 = t7702 + t7704;
  t7709 = t3360*t7599;
  t7712 = t7638*t5187*t6980;
  t7713 = t7709 + t7712;
  t7701 = t7638*t3102*t5101;
  t7708 = 3.e-6*t2924*t7705;
  t7714 = t5518*t7713;
  t7715 = t7701 + t7708 + t7714;
  t7719 = t7638*t3102*t7331;
  t7720 = t7256*t7705;
  t7722 = 3.e-6*t2924*t7713;
  t7724 = t7719 + t7720 + t7722;
  t7727 = t7454*t7638*t3102;
  t7728 = t7423*t7705;
  t7729 = t7516*t7713;
  t7731 = t7727 + t7728 + t7729;
  p_output1[0]=t1690*t7083 + t7223*t7376 + t7415*t7532 + 3.e-6*(t7083*t7223 + t7376*t7546 + t7532*t7551) + 3.e-6*(t7083*t7415 + t7376*t7551 + t7532*t7579);
  p_output1[1]=t1690*t7658 + t7223*t7667 + t7415*t7677 + 3.e-6*(t7223*t7658 + t7546*t7667 + t7551*t7677) + 3.e-6*(t7415*t7658 + t7551*t7667 + t7579*t7677);
  p_output1[2]=t1690*t7715 + t7223*t7724 + t7415*t7731 + 3.e-6*(t7223*t7715 + t7546*t7724 + t7551*t7731) + 3.e-6*(t7415*t7715 + t7551*t7724 + t7579*t7731);
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

#include "Joint_knee_back_leftL_link_axis.hh"

namespace SymFunction
{

void Joint_knee_back_leftL_link_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
