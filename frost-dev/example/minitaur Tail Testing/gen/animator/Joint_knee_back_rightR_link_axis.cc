/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:32 GMT-04:00
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
  double t3937;
  double t4103;
  double t4143;
  double t4148;
  double t2029;
  double t2048;
  double t2056;
  double t4149;
  double t4161;
  double t4168;
  double t4241;
  double t4250;
  double t4259;
  double t4265;
  double t4302;
  double t4151;
  double t4162;
  double t4167;
  double t4170;
  double t4174;
  double t4176;
  double t4243;
  double t4244;
  double t4335;
  double t4344;
  double t4347;
  double t4349;
  double t4350;
  double t4352;
  double t4353;
  double t4359;
  double t4362;
  double t4364;
  double t4365;
  double t4367;
  double t4368;
  double t4370;
  double t4371;
  double t4373;
  double t4382;
  double t4356;
  double t4358;
  double t4404;
  double t4405;
  double t4397;
  double t2180;
  double t2980;
  double t4420;
  double t4423;
  double t4422;
  double t4424;
  double t4425;
  double t4427;
  double t4428;
  double t4429;
  double t4421;
  double t4426;
  double t4430;
  double t4431;
  double t4402;
  double t4433;
  double t4435;
  double t4436;
  double t4437;
  double t4439;
  double t4440;
  double t4441;
  double t4445;
  double t4414;
  double t4415;
  double t4459;
  double t4460;
  double t4461;
  double t4463;
  double t4464;
  double t4465;
  double t4458;
  double t4462;
  double t4466;
  double t4467;
  double t4469;
  double t4470;
  double t4471;
  double t4472;
  double t4474;
  double t4475;
  double t4476;
  double t4477;
  t3937 = Cos(var1[19]);
  t4103 = -1.*t3937;
  t4143 = 1. + t4103;
  t4148 = Cos(var1[4]);
  t2029 = Cos(var1[21]);
  t2048 = -1.*t2029;
  t2056 = 1. + t2048;
  t4149 = Cos(var1[5]);
  t4161 = Sin(var1[19]);
  t4168 = Sin(var1[4]);
  t4241 = Sin(var1[5]);
  t4250 = 3.e-6*t2056;
  t4259 = Sin(var1[21]);
  t4265 = -3.e-6*t4259;
  t4302 = t4250 + t4265;
  t4151 = 3.e-6*t4143*t4148*t4149;
  t4162 = -3.e-6*t4161;
  t4167 = 0. + t4162;
  t4170 = t4167*t4168;
  t4174 = -9.000000000000001e-12*t4143;
  t4176 = 1. + t4174;
  t4243 = -1.*t4176*t4148*t4241;
  t4244 = t4151 + t4170 + t4243;
  t4335 = -1.*t4143;
  t4344 = 1. + t4335;
  t4347 = t4344*t4148*t4149;
  t4349 = 0. + t4161;
  t4350 = t4349*t4168;
  t4352 = -3.e-6*t4143*t4148*t4241;
  t4353 = t4347 + t4350 + t4352;
  t4359 = -1.*t4161;
  t4362 = 0. + t4359;
  t4364 = t4148*t4149*t4362;
  t4365 = -1.000000000009*t4143;
  t4367 = 1. + t4365;
  t4368 = t4367*t4168;
  t4370 = 3.e-6*t4161;
  t4371 = 0. + t4370;
  t4373 = -1.*t4148*t4371*t4241;
  t4382 = t4364 + t4368 + t4373;
  t4356 = 3.e-6*t4259;
  t4358 = t4250 + t4356;
  t4404 = -1.000000000009*t2056;
  t4405 = 1. + t4404;
  t4397 = 9.000000000000001e-12*t2056;
  t2180 = -1.8000000000000002e-11*t2056;
  t2980 = 1. + t2180;
  t4420 = Sin(var1[3]);
  t4423 = Cos(var1[3]);
  t4422 = t4149*t4420*t4168;
  t4424 = t4423*t4241;
  t4425 = t4422 + t4424;
  t4427 = t4423*t4149;
  t4428 = -1.*t4420*t4168*t4241;
  t4429 = t4427 + t4428;
  t4421 = -1.*t4148*t4167*t4420;
  t4426 = 3.e-6*t4143*t4425;
  t4430 = t4176*t4429;
  t4431 = t4421 + t4426 + t4430;
  t4402 = t4397 + t4259;
  t4433 = -1.*t4148*t4349*t4420;
  t4435 = t4344*t4425;
  t4436 = 3.e-6*t4143*t4429;
  t4437 = t4433 + t4435 + t4436;
  t4439 = -1.*t4367*t4148*t4420;
  t4440 = t4362*t4425;
  t4441 = t4371*t4429;
  t4445 = t4439 + t4440 + t4441;
  t4414 = -1.*t4259;
  t4415 = t4397 + t4414;
  t4459 = -1.*t4423*t4149*t4168;
  t4460 = t4420*t4241;
  t4461 = t4459 + t4460;
  t4463 = t4149*t4420;
  t4464 = t4423*t4168*t4241;
  t4465 = t4463 + t4464;
  t4458 = t4423*t4148*t4167;
  t4462 = 3.e-6*t4143*t4461;
  t4466 = t4176*t4465;
  t4467 = t4458 + t4462 + t4466;
  t4469 = t4423*t4148*t4349;
  t4470 = t4344*t4461;
  t4471 = 3.e-6*t4143*t4465;
  t4472 = t4469 + t4470 + t4471;
  t4474 = t4367*t4423*t4148;
  t4475 = t4362*t4461;
  t4476 = t4371*t4465;
  t4477 = t4474 + t4475 + t4476;
  p_output1[0]=t2980*t4244 + t4302*t4353 + t4358*t4382 + 3.e-6*(t4244*t4302 + t4353*t4402 + t4382*t4405) + 3.e-6*(t4244*t4358 + t4353*t4405 + t4382*t4415);
  p_output1[1]=t2980*t4431 + t4302*t4437 + t4358*t4445 + 3.e-6*(t4302*t4431 + t4402*t4437 + t4405*t4445) + 3.e-6*(t4358*t4431 + t4405*t4437 + t4415*t4445);
  p_output1[2]=t2980*t4467 + t4302*t4472 + t4358*t4477 + 3.e-6*(t4302*t4467 + t4402*t4472 + t4405*t4477) + 3.e-6*(t4358*t4467 + t4405*t4472 + t4415*t4477);
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

#include "Joint_knee_back_rightR_link_axis.hh"

namespace SymFunction
{

void Joint_knee_back_rightR_link_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
