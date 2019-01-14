/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:28 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2979;
  double t1125;
  double t2601;
  double t3535;
  double t4140;
  double t2742;
  double t3545;
  double t3993;
  double t711;
  double t4193;
  double t4209;
  double t4309;
  double t707;
  double t4053;
  double t4312;
  double t4313;
  double t4366;
  double t4371;
  double t4374;
  double t4385;
  double t4396;
  double t4408;
  double t4420;
  double t4492;
  double t4508;
  double t4511;
  double t4516;
  double t4517;
  double t4895;
  double t4897;
  double t4898;
  double t4521;
  double t4524;
  double t4810;
  double t4828;
  double t4866;
  double t5039;
  double t5043;
  double t5022;
  double t5029;
  double t5046;
  double t5050;
  double t5054;
  double t5060;
  double t5061;
  double t5078;
  double t5083;
  double t5037;
  double t5038;
  double t5059;
  double t5084;
  double t5124;
  double t5158;
  double t5161;
  double t5166;
  double t5167;
  double t5180;
  double t5193;
  double t5201;
  double t5571;
  double t5575;
  double t5577;
  double t5578;
  double t5580;
  double t5581;
  double t5583;
  double t4973;
  double t4991;
  double t4999;
  double t5202;
  double t5204;
  double t5512;
  double t5513;
  double t5515;
  double t5528;
  double t5598;
  double t5605;
  double t5609;
  double t5630;
  double t5647;
  double t5649;
  double t5680;
  double t5688;
  double t5692;
  double t5614;
  double t5615;
  double t5616;
  double t5618;
  double t5619;
  double t5620;
  double t5740;
  double t5741;
  double t5743;
  t2979 = Cos(var1[4]);
  t1125 = Cos(var1[5]);
  t2601 = Sin(var1[4]);
  t3535 = Sin(var1[5]);
  t4140 = Cos(var1[3]);
  t2742 = -1.*t1125*t2601;
  t3545 = -1.*t2979*t3535;
  t3993 = t2742 + t3545;
  t711 = Sin(var1[3]);
  t4193 = t2979*t1125;
  t4209 = -1.*t2601*t3535;
  t4309 = t4193 + t4209;
  t707 = Sin(var1[2]);
  t4053 = t711*t3993;
  t4312 = t4140*t4309;
  t4313 = t4053 + t4312;
  t4366 = t707*t4313;
  t4371 = Cos(var1[2]);
  t4374 = t4140*t3993;
  t4385 = -1.*t711*t4309;
  t4396 = t4374 + t4385;
  t4408 = t4371*t4396;
  t4420 = t4366 + t4408;
  t4492 = t1125*t2601;
  t4508 = t2979*t3535;
  t4511 = t4492 + t4508;
  t4516 = -1.*t711*t4511;
  t4517 = t4516 + t4312;
  t4895 = t4371*t4313;
  t4897 = -1.*t707*t4396;
  t4898 = t4895 + t4897;
  t4521 = -1.*t4140*t4511;
  t4524 = t4521 + t4385;
  t4810 = t4140*t4511;
  t4828 = t711*t4309;
  t4866 = t4810 + t4828;
  t5039 = -1.*t1125;
  t5043 = 1. + t5039;
  t5022 = -1.*t2979;
  t5029 = 1. + t5022;
  t5046 = 0.8*t5043;
  t5050 = 1.04*t1125;
  t5054 = t5046 + t5050;
  t5060 = -0.15*t5043;
  t5061 = -0.15*t1125;
  t5078 = -0.24*t3535;
  t5083 = t5060 + t5061 + t5078;
  t5037 = -0.15*t5029;
  t5038 = 0.4*t2601;
  t5059 = -1.*t5054*t2601;
  t5084 = t2979*t5083;
  t5124 = t5037 + t5038 + t5059 + t5084;
  t5158 = t4140*t5124;
  t5161 = 0.4*t5029;
  t5166 = t2979*t5054;
  t5167 = 0.15*t2601;
  t5180 = t2601*t5083;
  t5193 = t5161 + t5166 + t5167 + t5180;
  t5201 = -1.*t711*t5193;
  t5571 = 0.15*t2979;
  t5575 = t5571 + t5038 + t5059 + t5084;
  t5577 = 0.4*t2979;
  t5578 = -1.*t2979*t5054;
  t5580 = -0.15*t2601;
  t5581 = -1.*t2601*t5083;
  t5583 = t5577 + t5578 + t5580 + t5581;
  t4973 = -1.*t4140;
  t4991 = 1. + t4973;
  t4999 = -0.15*t4991;
  t5202 = t4999 + t5158 + t5201;
  t5204 = -1.*t711*t3993;
  t5512 = 0.15*t711;
  t5513 = t711*t5124;
  t5515 = t4140*t5193;
  t5528 = t5512 + t5513 + t5515;
  t5598 = -1.*t2979*t1125;
  t5605 = t2601*t3535;
  t5609 = t5598 + t5605;
  t5630 = -0.24*t1125*t2601;
  t5647 = -0.24*t2979*t3535;
  t5649 = t5630 + t5647;
  t5680 = -0.24*t2979*t1125;
  t5688 = 0.24*t2601*t3535;
  t5692 = t5680 + t5688;
  t5614 = t4140*t5609;
  t5615 = t5204 + t5614;
  t5616 = t5202*t5615;
  t5618 = t711*t5609;
  t5619 = t4374 + t5618;
  t5620 = t5528*t5619;
  t5740 = -1.*t5193*t3993;
  t5741 = 0.15*t4309;
  t5743 = -1.*t5124*t5609;
  p_output1[0]=var2[5]*(1.44*(t4371*t4866 - 1.*t4517*t707)*var2[2] + 1.44*(t4371*t4524 + t4517*t707)*var2[3] + 1.44*t4420*var2[4] + 1.44*t4420*var2[5]);
  p_output1[1]=var2[5]*(1.44*(-1.*t4371*t4517 - 1.*t4866*t707)*var2[2] + 1.44*(t4371*t4517 - 1.*t4524*t707)*var2[3] + 1.44*t4898*var2[4] + 1.44*t4898*var2[5]);
  p_output1[2]=var2[5]*(1.44*(t4313*(0.15*t4140 + t5158 + t5201) + t5202*(-1.*t4140*t4309 + t5204) + t4396*t5528 + t4396*(-1.*t4140*t5193 - 0.15*t711 - 1.*t5124*t711))*var2[3] + 1.44*(t5616 + t5620 + t4396*(t4140*t5583 - 1.*t5575*t711) + t4313*(t4140*t5575 + t5583*t711))*var2[4] + 1.44*(t5616 + t5620 + t4396*(t4140*t5692 - 1.*t5649*t711) + t4313*(t4140*t5649 + t5692*t711))*var2[5]);
  p_output1[3]=var2[5]*(1.44*(-1.*t4309*t5575 - 1.*t3993*t5583 + t5740 + t5741 + t5743)*var2[4] + 1.44*(-1.*t4309*t5649 - 1.*t3993*t5692 + t5740 + t5741 + t5743)*var2[5]);
  p_output1[4]=1.44*(0.15*t1125 - 0.4*t3535 + t3535*t5054 + t1125*t5083)*Power(var2[5],2);
  p_output1[5]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec6_acrobot.hh"

namespace SymFunction
{

void Ce1_vec6_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
