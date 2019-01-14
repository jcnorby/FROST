/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:05 GMT-06:00
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
  double t8648;
  double t31593;
  double t33134;
  double t33254;
  double t33526;
  double t33156;
  double t33170;
  double t33537;
  double t33566;
  double t33567;
  double t33568;
  double t33570;
  double t33593;
  double t33608;
  double t33613;
  double t33614;
  double t33616;
  double t33674;
  double t33675;
  double t33676;
  double t33705;
  double t33712;
  double t33713;
  double t33714;
  double t33718;
  double t33720;
  double t33722;
  double t33723;
  double t33734;
  double t33491;
  double t33514;
  double t33763;
  double t33542;
  double t33552;
  double t33762;
  double t33764;
  double t33798;
  double t33802;
  double t33804;
  double t33806;
  double t33571;
  double t33572;
  double t33585;
  double t33612;
  double t33812;
  double t33813;
  double t33815;
  double t33665;
  double t33666;
  double t33670;
  double t33708;
  double t33711;
  double t33820;
  double t33824;
  double t33827;
  double t33861;
  double t33865;
  double t33866;
  double t33871;
  double t33872;
  double t33874;
  double t33884;
  double t33895;
  double t33896;
  double t34014;
  double t34016;
  double t34020;
  double t34027;
  double t34032;
  double t34033;
  double t34040;
  double t34041;
  double t34051;
  double t34058;
  double t34061;
  double t34062;
  double t34162;
  double t34164;
  double t34170;
  double t34177;
  double t34179;
  double t34180;
  double t34182;
  double t34205;
  double t34212;
  t8648 = Cos(var1[4]);
  t31593 = Cos(var1[5]);
  t33134 = Sin(var1[19]);
  t33254 = Cos(var1[19]);
  t33526 = Sin(var1[5]);
  t33156 = Sin(var1[17]);
  t33170 = Sin(var1[4]);
  t33537 = Cos(var1[17]);
  t33566 = -1.*t8648*t31593*t33134;
  t33567 = -1.*t33254*t8648*t33526;
  t33568 = t33566 + t33567;
  t33570 = Cos(var1[18]);
  t33593 = Sin(var1[18]);
  t33608 = 0.05*t33593;
  t33613 = t33254*t8648*t31593;
  t33614 = -1.*t8648*t33134*t33526;
  t33616 = t33613 + t33614;
  t33674 = t33537*t33170;
  t33675 = -1.*t33156*t33568;
  t33676 = t33674 + t33675;
  t33705 = Cos(var1[20]);
  t33712 = t33593*t33616;
  t33713 = t33570*t33676;
  t33714 = t33712 + t33713;
  t33718 = Sin(var1[20]);
  t33720 = t33570*t33616;
  t33722 = -1.*t33593*t33676;
  t33723 = t33720 + t33722;
  t33734 = Sin(var1[3]);
  t33491 = -1.*t33254;
  t33514 = 1. + t33491;
  t33763 = Cos(var1[3]);
  t33542 = -1.*t33537;
  t33552 = 1. + t33542;
  t33762 = t31593*t33734*t33170;
  t33764 = t33763*t33526;
  t33798 = t33762 + t33764;
  t33802 = t33763*t31593;
  t33804 = -1.*t33734*t33170*t33526;
  t33806 = t33802 + t33804;
  t33571 = -1.*t33570;
  t33572 = 1. + t33571;
  t33585 = 0.05*t33572;
  t33612 = t33585 + t33608;
  t33812 = -1.*t33134*t33798;
  t33813 = t33254*t33806;
  t33815 = t33812 + t33813;
  t33665 = -1. + t33570;
  t33666 = 0.05*t33665;
  t33670 = t33666 + t33608;
  t33708 = -1.*t33705;
  t33711 = 1. + t33708;
  t33820 = t33254*t33798;
  t33824 = t33134*t33806;
  t33827 = t33820 + t33824;
  t33861 = -1.*t33537*t8648*t33734;
  t33865 = -1.*t33156*t33815;
  t33866 = t33861 + t33865;
  t33871 = t33593*t33827;
  t33872 = t33570*t33866;
  t33874 = t33871 + t33872;
  t33884 = t33570*t33827;
  t33895 = -1.*t33593*t33866;
  t33896 = t33884 + t33895;
  t34014 = -1.*t33763*t31593*t33170;
  t34016 = t33734*t33526;
  t34020 = t34014 + t34016;
  t34027 = t31593*t33734;
  t34032 = t33763*t33170*t33526;
  t34033 = t34027 + t34032;
  t34040 = -1.*t33134*t34020;
  t34041 = t33254*t34033;
  t34051 = t34040 + t34041;
  t34058 = t33254*t34020;
  t34061 = t33134*t34033;
  t34062 = t34058 + t34061;
  t34162 = t33537*t33763*t8648;
  t34164 = -1.*t33156*t34051;
  t34170 = t34162 + t34164;
  t34177 = t33593*t34062;
  t34179 = t33570*t34170;
  t34180 = t34177 + t34179;
  t34182 = t33570*t34062;
  t34205 = -1.*t33593*t34170;
  t34212 = t34182 + t34205;
  p_output1[0]=0.089*t33156*t33170 - 0.089*t33552*t33568 - 0.089*(t33156*t33170 + t33537*t33568) + t33612*t33616 + t33670*t33676 - 0.424*t33711*t33714 + 0.424*t33718*t33723 - 0.846*(t33705*t33714 + t33718*t33723) - 0.089*t31593*t33134*t8648 + 0.089*t33514*t33526*t8648 + var1[0];
  p_output1[1]=-0.089*t33134*t33798 - 0.089*t33514*t33806 - 0.089*t33552*t33815 + t33612*t33827 + t33670*t33866 - 0.424*t33711*t33874 + 0.424*t33718*t33896 - 0.846*(t33705*t33874 + t33718*t33896) - 0.089*t33156*t33734*t8648 - 0.089*(t33537*t33815 - 1.*t33156*t33734*t8648) + var1[1];
  p_output1[2]=-0.089*t33134*t34020 - 0.089*t33514*t34033 - 0.089*t33552*t34051 + t33612*t34062 + t33670*t34170 - 0.424*t33711*t34180 + 0.424*t33718*t34212 - 0.846*(t33705*t34180 + t33718*t34212) + 0.089*t33156*t33763*t8648 - 0.089*(t33537*t34051 + t33156*t33763*t8648) + var1[2];
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

#include "Joint_r_leg_aky_sphere_center.hh"

namespace SymFunction
{

void Joint_r_leg_aky_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
