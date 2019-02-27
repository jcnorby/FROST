/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:52 GMT-04:00
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
  double t442;
  double t903;
  double t3120;
  double t3126;
  double t895;
  double t3231;
  double t3287;
  double t3293;
  double t3503;
  double t3526;
  double t3544;
  double t3629;
  double t4862;
  double t4902;
  double t4955;
  double t3328;
  double t3373;
  double t3374;
  double t3376;
  double t3646;
  double t5278;
  double t5464;
  double t5553;
  double t5605;
  double t5757;
  double t5770;
  double t6271;
  double t5852;
  double t6164;
  double t6203;
  double t6209;
  double t6214;
  double t6220;
  double t6225;
  double t6286;
  double t3476;
  double t5908;
  double t3617;
  double t6057;
  double t6158;
  double t6399;
  double t6233;
  double t6496;
  double t6476;
  double t6495;
  double t6510;
  double t6511;
  double t6515;
  double t6516;
  double t6517;
  double t3587;
  double t3661;
  double t3675;
  double t4958;
  double t5075;
  double t5774;
  double t5787;
  double t5935;
  double t5965;
  double t5984;
  double t6521;
  double t6522;
  double t6525;
  double t6529;
  double t6256;
  double t6532;
  double t6533;
  double t6535;
  double t6536;
  double t6342;
  double t6364;
  double t6582;
  double t6583;
  double t6584;
  double t6586;
  double t6439;
  double t6441;
  double t6442;
  double t6448;
  double t6449;
  double t6457;
  double t6652;
  double t6656;
  double t6664;
  double t6682;
  double t6683;
  double t6687;
  double t6697;
  double t6699;
  double t6700;
  double t6701;
  double t6707;
  double t6715;
  double t6717;
  double t6718;
  double t6723;
  double t6724;
  double t6725;
  double t6726;
  t442 = Cos(var1[4]);
  t903 = Cos(var1[6]);
  t3120 = -1.*t903;
  t3126 = 1. + t3120;
  t895 = Cos(var1[5]);
  t3231 = Sin(var1[5]);
  t3287 = Sin(var1[4]);
  t3293 = Sin(var1[6]);
  t3503 = Cos(var1[8]);
  t3526 = -1.*t3503;
  t3544 = 1. + t3526;
  t3629 = Sin(var1[8]);
  t4862 = -3.e-6*t3544;
  t4902 = 3.e-6*t3629;
  t4955 = t4862 + t4902;
  t3328 = t442*t895*t903;
  t3373 = -3.e-6*t442*t3126*t3231;
  t3374 = t3287*t3293;
  t3376 = t3328 + t3373 + t3374;
  t3646 = -1.*t3629;
  t5278 = 3.e-6*t442*t895*t3126;
  t5464 = -9.e-12*t3126;
  t5553 = 1. + t5464;
  t5605 = -1.*t442*t5553*t3231;
  t5757 = -3.e-6*t3287*t3293;
  t5770 = t5278 + t5605 + t5757;
  t6271 = 3.e-6*t3544;
  t5852 = -3.e-6*t3629;
  t6164 = -1.000000000009*t3126;
  t6203 = 1. + t6164;
  t6209 = t6203*t3287;
  t6214 = -1.*t442*t895*t3293;
  t6220 = -3.e-6*t442*t3231*t3293;
  t6225 = t6209 + t6214 + t6220;
  t6286 = t6271 + t4902;
  t3476 = 1.125e-12*var1[8];
  t5908 = t4862 + t5852;
  t3617 = -9.e-12*t3544;
  t6057 = -1.000000000009*t3544;
  t6158 = 1. + t6057;
  t6399 = t6271 + t5852;
  t6233 = 9.e-12*t3544;
  t6496 = Cos(var1[3]);
  t6476 = Sin(var1[3]);
  t6495 = t895*t6476*t3287;
  t6510 = t6496*t3231;
  t6511 = t6495 + t6510;
  t6515 = t6496*t895;
  t6516 = -1.*t6476*t3287*t3231;
  t6517 = t6515 + t6516;
  t3587 = 0.225000000002025*t3544;
  t3661 = t3617 + t3646;
  t3675 = 0.1*t3661;
  t4958 = -9.75e-7*t4955;
  t5075 = t3476 + t3587 + t3675 + t4958;
  t5774 = 3.75e-7*var1[8];
  t5787 = -1.755e-17*t3544;
  t5935 = 0.225*t5908;
  t5965 = 0.1*t4955;
  t5984 = t5774 + t5787 + t5935 + t5965;
  t6521 = t903*t6511;
  t6522 = 3.e-6*t3126*t6517;
  t6525 = -1.*t442*t6476*t3293;
  t6529 = t6521 + t6522 + t6525;
  t6256 = t6233 + t3646;
  t6532 = 3.e-6*t3126*t6511;
  t6533 = t5553*t6517;
  t6535 = 3.e-6*t442*t6476*t3293;
  t6536 = t6532 + t6533 + t6535;
  t6342 = -1.8e-11*t3544;
  t6364 = 1. + t6342;
  t6582 = -1.*t442*t6203*t6476;
  t6583 = -1.*t6511*t3293;
  t6584 = 3.e-6*t6517*t3293;
  t6586 = t6582 + t6583 + t6584;
  t6439 = 0.1000000000009*t3544;
  t6441 = -9.75e-7*t5908;
  t6442 = t3617 + t3629;
  t6448 = 0.225*t6442;
  t6449 = t3476 + t6439 + t6441 + t6448;
  t6457 = t6233 + t3629;
  t6652 = -1.*t6496*t895*t3287;
  t6656 = t6476*t3231;
  t6664 = t6652 + t6656;
  t6682 = t895*t6476;
  t6683 = t6496*t3287*t3231;
  t6687 = t6682 + t6683;
  t6697 = t903*t6664;
  t6699 = 3.e-6*t3126*t6687;
  t6700 = t6496*t442*t3293;
  t6701 = t6697 + t6699 + t6700;
  t6707 = 3.e-6*t3126*t6664;
  t6715 = t5553*t6687;
  t6717 = -3.e-6*t6496*t442*t3293;
  t6718 = t6707 + t6715 + t6717;
  t6723 = t6496*t442*t6203;
  t6724 = -1.*t6664*t3293;
  t6725 = 3.e-6*t6687*t3293;
  t6726 = t6723 + t6724 + t6725;
  p_output1[0]=-0.225000000002025*t3287*t3293 + 6.75000000006075e-7*t3126*t3231*t442 + t3376*t5075 + t5770*t5984 + 0.225*(t3376*t6158 + t6225*t6256 + t5770*t6286) + 0.13*(t6225*t6286 + t5770*t6364 + t3376*t6399) + t6225*t6449 + 0.1*(t6158*t6225 + t5770*t6399 + t3376*t6457) + 0.225000000002025*t3126*t442*t895 + var1[0];
  p_output1[1]=0.225000000002025*t3293*t442*t6476 + 0.225000000002025*t3126*t6511 - 6.75000000006075e-7*t3126*t6517 + t5075*t6529 + t5984*t6536 + t6449*t6586 + 0.1*(t6457*t6529 + t6399*t6536 + t6158*t6586) + 0.225*(t6158*t6529 + t6286*t6536 + t6256*t6586) + 0.13*(t6399*t6529 + t6364*t6536 + t6286*t6586) + var1[1];
  p_output1[2]=-0.225000000002025*t3293*t442*t6496 + 0.225000000002025*t3126*t6664 - 6.75000000006075e-7*t3126*t6687 + t5075*t6701 + t5984*t6718 + t6449*t6726 + 0.1*(t6457*t6701 + t6399*t6718 + t6158*t6726) + 0.225*(t6158*t6701 + t6286*t6718 + t6256*t6726) + 0.13*(t6399*t6701 + t6364*t6718 + t6286*t6726) + var1[2];
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

#include "Joint_knee_front_leftL_link_sphere_center.hh"

namespace SymFunction
{

void Joint_knee_front_leftL_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
