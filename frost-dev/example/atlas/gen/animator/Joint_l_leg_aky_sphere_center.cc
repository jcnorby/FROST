/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:52 GMT-06:00
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
  double t6511;
  double t7403;
  double t8221;
  double t8421;
  double t8496;
  double t8276;
  double t8296;
  double t8499;
  double t8559;
  double t8560;
  double t8567;
  double t8578;
  double t8635;
  double t8694;
  double t8712;
  double t8716;
  double t8732;
  double t8796;
  double t8802;
  double t8803;
  double t8823;
  double t8857;
  double t8859;
  double t8866;
  double t8874;
  double t8875;
  double t8884;
  double t8911;
  double t8929;
  double t8465;
  double t8494;
  double t8955;
  double t8506;
  double t8538;
  double t8953;
  double t8956;
  double t8960;
  double t8962;
  double t8964;
  double t8968;
  double t8580;
  double t8593;
  double t8626;
  double t8709;
  double t8973;
  double t8982;
  double t9010;
  double t8779;
  double t8783;
  double t8785;
  double t8829;
  double t8832;
  double t9046;
  double t9064;
  double t9072;
  double t9105;
  double t9110;
  double t9128;
  double t9132;
  double t9137;
  double t9145;
  double t9180;
  double t9193;
  double t9205;
  double t9369;
  double t9372;
  double t9429;
  double t9446;
  double t9473;
  double t9500;
  double t9517;
  double t9556;
  double t9557;
  double t9630;
  double t9634;
  double t9650;
  double t9756;
  double t9779;
  double t9794;
  double t9834;
  double t9836;
  double t9840;
  double t9851;
  double t9855;
  double t9859;
  t6511 = Cos(var1[4]);
  t7403 = Cos(var1[5]);
  t8221 = Sin(var1[13]);
  t8421 = Cos(var1[13]);
  t8496 = Sin(var1[5]);
  t8276 = Sin(var1[11]);
  t8296 = Sin(var1[4]);
  t8499 = Cos(var1[11]);
  t8559 = -1.*t6511*t7403*t8221;
  t8560 = -1.*t8421*t6511*t8496;
  t8567 = t8559 + t8560;
  t8578 = Cos(var1[12]);
  t8635 = Sin(var1[12]);
  t8694 = 0.05*t8635;
  t8712 = t8421*t6511*t7403;
  t8716 = -1.*t6511*t8221*t8496;
  t8732 = t8712 + t8716;
  t8796 = t8499*t8296;
  t8802 = -1.*t8276*t8567;
  t8803 = t8796 + t8802;
  t8823 = Cos(var1[14]);
  t8857 = t8635*t8732;
  t8859 = t8578*t8803;
  t8866 = t8857 + t8859;
  t8874 = Sin(var1[14]);
  t8875 = t8578*t8732;
  t8884 = -1.*t8635*t8803;
  t8911 = t8875 + t8884;
  t8929 = Sin(var1[3]);
  t8465 = -1.*t8421;
  t8494 = 1. + t8465;
  t8955 = Cos(var1[3]);
  t8506 = -1.*t8499;
  t8538 = 1. + t8506;
  t8953 = t7403*t8929*t8296;
  t8956 = t8955*t8496;
  t8960 = t8953 + t8956;
  t8962 = t8955*t7403;
  t8964 = -1.*t8929*t8296*t8496;
  t8968 = t8962 + t8964;
  t8580 = -1.*t8578;
  t8593 = 1. + t8580;
  t8626 = 0.05*t8593;
  t8709 = t8626 + t8694;
  t8973 = -1.*t8221*t8960;
  t8982 = t8421*t8968;
  t9010 = t8973 + t8982;
  t8779 = -1. + t8578;
  t8783 = 0.05*t8779;
  t8785 = t8783 + t8694;
  t8829 = -1.*t8823;
  t8832 = 1. + t8829;
  t9046 = t8421*t8960;
  t9064 = t8221*t8968;
  t9072 = t9046 + t9064;
  t9105 = -1.*t8499*t6511*t8929;
  t9110 = -1.*t8276*t9010;
  t9128 = t9105 + t9110;
  t9132 = t8635*t9072;
  t9137 = t8578*t9128;
  t9145 = t9132 + t9137;
  t9180 = t8578*t9072;
  t9193 = -1.*t8635*t9128;
  t9205 = t9180 + t9193;
  t9369 = -1.*t8955*t7403*t8296;
  t9372 = t8929*t8496;
  t9429 = t9369 + t9372;
  t9446 = t7403*t8929;
  t9473 = t8955*t8296*t8496;
  t9500 = t9446 + t9473;
  t9517 = -1.*t8221*t9429;
  t9556 = t8421*t9500;
  t9557 = t9517 + t9556;
  t9630 = t8421*t9429;
  t9634 = t8221*t9500;
  t9650 = t9630 + t9634;
  t9756 = t8499*t8955*t6511;
  t9779 = -1.*t8276*t9557;
  t9794 = t9756 + t9779;
  t9834 = t8635*t9650;
  t9836 = t8578*t9794;
  t9840 = t9834 + t9836;
  t9851 = t8578*t9650;
  t9855 = -1.*t8635*t9794;
  t9859 = t9851 + t9855;
  p_output1[0]=0.089*t6511*t7403*t8221 - 0.089*t8276*t8296 - 0.089*t6511*t8494*t8496 + 0.089*t8538*t8567 + 0.089*(t8276*t8296 + t8499*t8567) + t8709*t8732 + t8785*t8803 - 0.424*t8832*t8866 + 0.424*t8874*t8911 - 0.846*(t8823*t8866 + t8874*t8911) + var1[0];
  p_output1[1]=0.089*t6511*t8276*t8929 + 0.089*t8221*t8960 + 0.089*t8494*t8968 + 0.089*t8538*t9010 + 0.089*(-1.*t6511*t8276*t8929 + t8499*t9010) + t8709*t9072 + t8785*t9128 - 0.424*t8832*t9145 + 0.424*t8874*t9205 - 0.846*(t8823*t9145 + t8874*t9205) + var1[1];
  p_output1[2]=-0.089*t6511*t8276*t8955 + 0.089*t8221*t9429 + 0.089*t8494*t9500 + 0.089*t8538*t9557 + 0.089*(t6511*t8276*t8955 + t8499*t9557) + t8709*t9650 + t8785*t9794 - 0.424*t8832*t9840 + 0.424*t8874*t9859 - 0.846*(t8823*t9840 + t8874*t9859) + var1[2];
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
    ( !(mrows == 21 && ncols == 1) && 
      !(mrows == 1 && ncols == 21))) 
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

#include "Joint_l_leg_aky_sphere_center.hh"

namespace SymFunction
{

void Joint_l_leg_aky_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
