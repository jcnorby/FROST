/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:31 GMT-04:00
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
  double t585;
  double t593;
  double t595;
  double t823;
  double t2063;
  double t2066;
  double t2069;
  double t2075;
  double t2078;
  double t2023;
  double t2038;
  double t2044;
  double t2051;
  double t2098;
  double t2130;
  double t2183;
  double t2082;
  double t2086;
  double t2190;
  double t2140;
  double t2144;
  double t2148;
  double t2155;
  double t2158;
  double t2162;
  double t2343;
  double t2379;
  double t2572;
  double t2695;
  double t3229;
  double t3270;
  double t3309;
  double t3318;
  double t3388;
  double t3397;
  double t4010;
  double t4145;
  double t4146;
  double t4118;
  double t2194;
  double t4040;
  double t4152;
  double t4249;
  double t4255;
  double t2060;
  double t2072;
  double t2091;
  double t2133;
  double t2137;
  double t4253;
  double t4256;
  double t4258;
  double t4261;
  double t4262;
  double t4264;
  double t2186;
  double t2198;
  double t2241;
  double t2254;
  double t2275;
  double t3010;
  double t3057;
  double t3152;
  double t3162;
  double t3189;
  double t4268;
  double t4270;
  double t4271;
  double t4283;
  double t4140;
  double t4325;
  double t4326;
  double t4329;
  double t4332;
  double t4337;
  double t4338;
  double t4341;
  double t4343;
  double t4165;
  double t4171;
  double t4173;
  double t4374;
  double t4377;
  double t4381;
  double t4383;
  double t4384;
  double t4385;
  double t4387;
  double t4388;
  double t4390;
  double t4391;
  double t4393;
  double t4394;
  double t4395;
  double t4396;
  double t4398;
  double t4399;
  double t4400;
  double t4401;
  t585 = Cos(var1[19]);
  t593 = -1.*t585;
  t595 = 1. + t593;
  t823 = Cos(var1[4]);
  t2063 = Cos(var1[21]);
  t2066 = -1.*t2063;
  t2069 = 1. + t2066;
  t2075 = -3.e-6*t2069;
  t2078 = Sin(var1[21]);
  t2023 = Cos(var1[5]);
  t2038 = Sin(var1[19]);
  t2044 = Sin(var1[4]);
  t2051 = Sin(var1[5]);
  t2098 = 3.e-6*t2078;
  t2130 = t2075 + t2098;
  t2183 = 7.5e-14*var1[21];
  t2082 = -3.e-6*t2078;
  t2086 = t2075 + t2082;
  t2190 = -9.e-12*t2069;
  t2140 = 3.e-6*t595*t823*t2023;
  t2144 = -3.e-6*t2038*t2044;
  t2148 = -9.e-12*t595;
  t2155 = 1. + t2148;
  t2158 = -1.*t2155*t823*t2051;
  t2162 = t2140 + t2144 + t2158;
  t2343 = t585*t823*t2023;
  t2379 = t2038*t2044;
  t2572 = -3.e-6*t595*t823*t2051;
  t2695 = t2343 + t2379 + t2572;
  t3229 = -1.*t823*t2023*t2038;
  t3270 = -1.000000000009*t595;
  t3309 = 1. + t3270;
  t3318 = t3309*t2044;
  t3388 = -3.e-6*t823*t2038*t2051;
  t3397 = t3229 + t3318 + t3388;
  t4010 = 3.e-6*t2069;
  t4145 = -1.000000000009*t2069;
  t4146 = 1. + t4145;
  t4118 = 9.e-12*t2069;
  t2194 = -1.*t2078;
  t4040 = t4010 + t2082;
  t4152 = t4010 + t2098;
  t4249 = Sin(var1[3]);
  t4255 = Cos(var1[3]);
  t2060 = 2.5e-8*var1[21];
  t2072 = 6.75e-18*t2069;
  t2091 = -0.225000000003*t2086;
  t2133 = 0.100000000003*t2130;
  t2137 = t2060 + t2072 + t2091 + t2133;
  t4253 = t2023*t4249*t2044;
  t4256 = t4255*t2051;
  t4258 = t4253 + t4256;
  t4261 = t4255*t2023;
  t4262 = -1.*t4249*t2044*t2051;
  t4264 = t4261 + t4262;
  t2186 = -0.225000000005025*t2069;
  t2198 = t2190 + t2194;
  t2241 = 0.100000000003*t2198;
  t2254 = 3.75e-7*t2130;
  t2275 = t2183 + t2186 + t2241 + t2254;
  t3010 = 0.1000000000039*t2069;
  t3057 = 3.75e-7*t2086;
  t3152 = t2190 + t2078;
  t3162 = -0.225000000003*t3152;
  t3189 = t2183 + t3010 + t3057 + t3162;
  t4268 = 3.e-6*t823*t2038*t4249;
  t4270 = 3.e-6*t595*t4258;
  t4271 = t2155*t4264;
  t4283 = t4268 + t4270 + t4271;
  t4140 = t4118 + t2078;
  t4325 = -1.*t823*t2038*t4249;
  t4326 = t585*t4258;
  t4329 = 3.e-6*t595*t4264;
  t4332 = t4325 + t4326 + t4329;
  t4337 = -1.*t3309*t823*t4249;
  t4338 = -1.*t2038*t4258;
  t4341 = 3.e-6*t2038*t4264;
  t4343 = t4337 + t4338 + t4341;
  t4165 = t4118 + t2194;
  t4171 = -1.8e-11*t2069;
  t4173 = 1. + t4171;
  t4374 = -1.*t4255*t2023*t2044;
  t4377 = t4249*t2051;
  t4381 = t4374 + t4377;
  t4383 = t2023*t4249;
  t4384 = t4255*t2044*t2051;
  t4385 = t4383 + t4384;
  t4387 = -3.e-6*t4255*t823*t2038;
  t4388 = 3.e-6*t595*t4381;
  t4390 = t2155*t4385;
  t4391 = t4387 + t4388 + t4390;
  t4393 = t4255*t823*t2038;
  t4394 = t585*t4381;
  t4395 = 3.e-6*t595*t4385;
  t4396 = t4393 + t4394 + t4395;
  t4398 = t3309*t4255*t823;
  t4399 = -1.*t2038*t4381;
  t4400 = 3.e-6*t2038*t4385;
  t4401 = t4398 + t4399 + t4400;
  p_output1[0]=0.225000000002025*t2038*t2044 + t2137*t2162 + t2275*t2695 + t3189*t3397 + 0.1*(t2162*t4040 + t2695*t4140 + t3397*t4146) - 0.225*(t2695*t4146 + t2162*t4152 + t3397*t4165) - 0.13*(t2695*t4040 + t3397*t4152 + t2162*t4173) - 0.225000000002025*t2023*t595*t823 - 6.75000000006075e-7*t2051*t595*t823 + var1[0];
  p_output1[1]=t2137*t4283 + t2275*t4332 + t3189*t4343 + 0.1*(t4040*t4283 + t4140*t4332 + t4146*t4343) - 0.13*(t4173*t4283 + t4040*t4332 + t4152*t4343) - 0.225*(t4152*t4283 + t4146*t4332 + t4165*t4343) - 0.225000000002025*t4258*t595 + 6.75000000006075e-7*t4264*t595 - 0.225000000002025*t2038*t4249*t823 + var1[1];
  p_output1[2]=t2137*t4391 + t2275*t4396 + t3189*t4401 + 0.1*(t4040*t4391 + t4140*t4396 + t4146*t4401) - 0.13*(t4173*t4391 + t4040*t4396 + t4152*t4401) - 0.225*(t4152*t4391 + t4146*t4396 + t4165*t4401) - 0.225000000002025*t4381*t595 + 6.75000000006075e-7*t4385*t595 + 0.225000000002025*t2038*t4255*t823 + var1[2];
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

#include "Joint_knee_back_rightR_link_sphere_center.hh"

namespace SymFunction
{

void Joint_knee_back_rightR_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
