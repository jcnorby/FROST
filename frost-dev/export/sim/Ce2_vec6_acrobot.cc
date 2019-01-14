/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:34 GMT-05:00
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
  double t12145;
  double t2279;
  double t5013;
  double t17033;
  double t22783;
  double t12142;
  double t19501;
  double t22776;
  double t1329;
  double t22784;
  double t22785;
  double t22786;
  double t23133;
  double t23135;
  double t260;
  double t22778;
  double t22787;
  double t22915;
  double t23075;
  double t23076;
  double t23077;
  double t23080;
  double t23086;
  double t23129;
  double t23130;
  double t23137;
  double t23138;
  double t23162;
  double t23166;
  double t23179;
  double t23215;
  double t23220;
  double t23283;
  double t23284;
  double t23287;
  double t23277;
  double t23278;
  double t23279;
  double t23280;
  double t23282;
  double t23307;
  double t23308;
  double t23309;
  double t23327;
  double t23329;
  double t23331;
  double t23341;
  double t23343;
  double t23345;
  double t23348;
  double t23355;
  double t23356;
  double t23364;
  double t23365;
  double t23367;
  double t23407;
  double t23410;
  double t23412;
  double t23420;
  double t23421;
  double t23423;
  double t23289;
  double t23291;
  double t23292;
  double t23293;
  double t23295;
  double t23298;
  double t23300;
  double t23301;
  double t23436;
  double t23306;
  double t23310;
  double t23311;
  double t23312;
  double t23314;
  double t23315;
  double t23316;
  double t23317;
  double t23478;
  double t23479;
  double t23480;
  double t23495;
  double t23496;
  double t23497;
  double t23498;
  double t23508;
  double t23510;
  double t23515;
  double t23516;
  double t23522;
  double t23523;
  double t23549;
  double t23551;
  double t23552;
  double t23557;
  double t23558;
  double t23559;
  double t23132;
  double t23163;
  double t23164;
  double t23223;
  double t23226;
  double t23229;
  double t23236;
  double t23238;
  double t23240;
  double t23246;
  double t23249;
  double t23250;
  double t23262;
  double t23270;
  double t23473;
  double t23474;
  double t23475;
  double t23483;
  double t23485;
  double t23486;
  double t23353;
  double t23354;
  double t23395;
  double t23397;
  double t23403;
  double t23405;
  double t23416;
  double t23418;
  double t23426;
  double t23427;
  double t23435;
  double t23437;
  double t23442;
  double t23443;
  double t23447;
  double t23451;
  double t23453;
  double t23455;
  double t23476;
  double t23481;
  double t23487;
  double t23488;
  double t23489;
  double t23500;
  double t23524;
  double t23525;
  double t23530;
  double t23531;
  double t23556;
  double t23561;
  double t23562;
  double t23572;
  double t23574;
  double t23575;
  double t23579;
  double t23580;
  double t23583;
  double t23585;
  double t23586;
  double t23638;
  double t23639;
  double t23640;
  double t23642;
  double t23647;
  double t23529;
  double t23566;
  double t23578;
  double t23587;
  double t23588;
  double t23610;
  double t23613;
  double t23614;
  double t23624;
  double t23626;
  double t23401;
  double t23434;
  double t23449;
  double t23459;
  double t23463;
  double t23670;
  double t23676;
  double t23677;
  double t23678;
  double t23679;
  double t23702;
  double t23704;
  double t23709;
  double t23711;
  double t23712;
  double t23602;
  double t23603;
  double t23604;
  double t23605;
  double t23608;
  double t23227;
  double t23271;
  double t23304;
  double t23318;
  double t23319;
  double t23656;
  double t23661;
  double t23663;
  double t23664;
  double t23666;
  t12145 = Cos(var1[4]);
  t2279 = Cos(var1[5]);
  t5013 = Sin(var1[4]);
  t17033 = Sin(var1[5]);
  t22783 = Cos(var1[3]);
  t12142 = -1.*t2279*t5013;
  t19501 = -1.*t12145*t17033;
  t22776 = t12142 + t19501;
  t1329 = Sin(var1[3]);
  t22784 = t12145*t2279;
  t22785 = -1.*t5013*t17033;
  t22786 = t22784 + t22785;
  t23133 = -1.*t2279;
  t23135 = 1. + t23133;
  t260 = Sin(var1[2]);
  t22778 = t1329*t22776;
  t22787 = t22783*t22786;
  t22915 = t22778 + t22787;
  t23075 = t260*t22915;
  t23076 = Cos(var1[2]);
  t23077 = t22783*t22776;
  t23080 = -1.*t1329*t22786;
  t23086 = t23077 + t23080;
  t23129 = t23076*t23086;
  t23130 = t23075 + t23129;
  t23137 = 0.8*t23135;
  t23138 = 1.04*t2279;
  t23162 = t23137 + t23138;
  t23166 = -0.15*t23135;
  t23179 = -0.15*t2279;
  t23215 = -0.24*t17033;
  t23220 = t23166 + t23179 + t23215;
  t23283 = t2279*t5013;
  t23284 = t12145*t17033;
  t23287 = t23283 + t23284;
  t23277 = 0.15*t2279;
  t23278 = t2279*t23220;
  t23279 = -0.4*t17033;
  t23280 = t23162*t17033;
  t23282 = t23277 + t23278 + t23279 + t23280;
  t23307 = -1.*t12145*t2279;
  t23308 = t5013*t17033;
  t23309 = t23307 + t23308;
  t23327 = -1.*t12145;
  t23329 = 1. + t23327;
  t23331 = -0.15*t23329;
  t23341 = 0.4*t5013;
  t23343 = -1.*t23162*t5013;
  t23345 = t12145*t23220;
  t23348 = t23331 + t23341 + t23343 + t23345;
  t23355 = 0.4*t23329;
  t23356 = t12145*t23162;
  t23364 = 0.15*t5013;
  t23365 = t5013*t23220;
  t23367 = t23355 + t23356 + t23364 + t23365;
  t23407 = -0.24*t2279*t5013;
  t23410 = -0.24*t12145*t17033;
  t23412 = t23407 + t23410;
  t23420 = -0.24*t12145*t2279;
  t23421 = 0.24*t5013*t17033;
  t23423 = t23420 + t23421;
  t23289 = -1.*t1329*t23287;
  t23291 = t23289 + t22787;
  t23292 = t23076*t23291;
  t23293 = t22783*t23287;
  t23295 = t1329*t22786;
  t23298 = t23293 + t23295;
  t23300 = t260*t23298;
  t23301 = t23292 + t23300;
  t23436 = 0.15*t22786;
  t23306 = -1.*t1329*t22776;
  t23310 = t22783*t23309;
  t23311 = t23306 + t23310;
  t23312 = t23076*t23311;
  t23314 = t1329*t23309;
  t23315 = t23077 + t23314;
  t23316 = t260*t23315;
  t23317 = t23312 + t23316;
  t23478 = t23076*t22915;
  t23479 = -1.*t260*t23086;
  t23480 = t23478 + t23479;
  t23495 = 0.15*t1329;
  t23496 = t1329*t23348;
  t23497 = t22783*t23367;
  t23498 = t23495 + t23496 + t23497;
  t23508 = -1.*t22783;
  t23510 = 1. + t23508;
  t23515 = -0.15*t23510;
  t23516 = t22783*t23348;
  t23522 = -1.*t1329*t23367;
  t23523 = t23515 + t23516 + t23522;
  t23549 = -1.*t1329*t23412;
  t23551 = t22783*t23423;
  t23552 = t23549 + t23551;
  t23557 = t22783*t23412;
  t23558 = t1329*t23423;
  t23559 = t23557 + t23558;
  t23132 = 0.4*t2279;
  t23163 = -1.*t2279*t23162;
  t23164 = 0.15*t17033;
  t23223 = t23220*t17033;
  t23226 = t23132 + t23163 + t23164 + t23223;
  t23229 = -0.4*t2279;
  t23236 = Power(t2279,2);
  t23238 = -0.24*t23236;
  t23240 = t2279*t23162;
  t23246 = -0.15*t17033;
  t23249 = -1.*t23220*t17033;
  t23250 = Power(t17033,2);
  t23262 = -0.24*t23250;
  t23270 = t23229 + t23238 + t23240 + t23246 + t23249 + t23262;
  t23473 = -1.*t260*t23291;
  t23474 = t23076*t23298;
  t23475 = t23473 + t23474;
  t23483 = -1.*t260*t23311;
  t23485 = t23076*t23315;
  t23486 = t23483 + t23485;
  t23353 = -1.*t23348*t22776;
  t23354 = 0.15*t23287;
  t23395 = -1.*t23367*t22786;
  t23397 = t23353 + t23354 + t23395;
  t23403 = 0.15*t22776;
  t23405 = t23348*t22776;
  t23416 = t23412*t23287;
  t23418 = t23367*t22786;
  t23426 = t22786*t23423;
  t23427 = t23403 + t23405 + t23416 + t23418 + t23426;
  t23435 = -1.*t23367*t22776;
  t23437 = -1.*t23412*t22786;
  t23442 = -1.*t22776*t23423;
  t23443 = -1.*t23348*t23309;
  t23447 = t23435 + t23436 + t23437 + t23442 + t23443;
  t23451 = t23367*t23287;
  t23453 = t23348*t22786;
  t23455 = t23451 + t23436 + t23453;
  t23476 = 12.*t23130*t23475;
  t23481 = 12.*t23480*t23301;
  t23487 = 12.*t23130*t23486;
  t23488 = 12.*t23480*t23317;
  t23489 = t23476 + t23481 + t23487 + t23488;
  t23500 = t23498*t22915;
  t23524 = t23523*t23086;
  t23525 = t23500 + t23524;
  t23530 = -1.*t23498*t22915;
  t23531 = -1.*t23523*t23086;
  t23556 = -1.*t23291*t23552;
  t23561 = -1.*t23298*t23559;
  t23562 = t23530 + t23531 + t23556 + t23561;
  t23572 = -1.*t23523*t23291;
  t23574 = -1.*t23498*t23298;
  t23575 = t23572 + t23574;
  t23579 = t23086*t23552;
  t23580 = t22915*t23559;
  t23583 = t23523*t23311;
  t23585 = t23498*t23315;
  t23586 = t23579 + t23580 + t23583 + t23585;
  t23638 = 12.*t23480*t23525;
  t23639 = 12.*t23480*t23562;
  t23640 = 12.*t23575*t23486;
  t23642 = 12.*t23475*t23586;
  t23647 = t23638 + t23639 + t23640 + t23642;
  t23529 = 12.*t23130*t23525;
  t23566 = 12.*t23130*t23562;
  t23578 = 12.*t23575*t23317;
  t23587 = 12.*t23301*t23586;
  t23588 = t23529 + t23566 + t23578 + t23587;
  t23610 = 12.*t23397*t23480;
  t23613 = 12.*t23427*t23480;
  t23614 = 12.*t23447*t23475;
  t23624 = 12.*t23455*t23486;
  t23626 = t23610 + t23613 + t23614 + t23624;
  t23401 = 12.*t23397*t23130;
  t23434 = 12.*t23427*t23130;
  t23449 = 12.*t23447*t23301;
  t23459 = 12.*t23455*t23317;
  t23463 = t23401 + t23434 + t23449 + t23459;
  t23670 = 12.*t23447*t23525;
  t23676 = 12.*t23427*t23575;
  t23677 = 12.*t23455*t23562;
  t23678 = 12.*t23397*t23586;
  t23679 = t23670 + t23676 + t23677 + t23678;
  t23702 = 12.*t23270*t23455;
  t23704 = 12.*t23282*t23397;
  t23709 = 12.*t23282*t23427;
  t23711 = 12.*t23226*t23447;
  t23712 = t23702 + t23704 + t23709 + t23711;
  t23602 = 12.*t23226*t23480;
  t23603 = 12.*t23270*t23480;
  t23604 = 12.*t23282*t23475;
  t23605 = 12.*t23282*t23486;
  t23608 = t23602 + t23603 + t23604 + t23605;
  t23227 = 12.*t23226*t23130;
  t23271 = 12.*t23270*t23130;
  t23304 = 12.*t23282*t23301;
  t23318 = 12.*t23282*t23317;
  t23319 = t23227 + t23271 + t23304 + t23318;
  t23656 = 12.*t23282*t23525;
  t23661 = 12.*t23270*t23575;
  t23663 = 12.*t23282*t23562;
  t23664 = 12.*t23226*t23586;
  t23666 = t23656 + t23661 + t23663 + t23664;
  p_output1[0]=var2[5]*(-0.5*(24.*t23130*t23301 + 24.*t23130*t23317)*var2[0] - 0.5*t23489*var2[1] - 0.5*t23588*var2[2] - 0.5*t23463*var2[3] - 0.5*t23319*var2[4] + 1.44*t23130*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t23489*var2[0] - 0.5*(24.*t23475*t23480 + 24.*t23480*t23486)*var2[1] - 0.5*t23647*var2[2] - 0.5*t23626*var2[3] - 0.5*t23608*var2[4] + 1.44*t23480*var2[5]);
  p_output1[2]=var2[5]*(-0.5*t23588*var2[0] - 0.5*t23647*var2[1] - 0.5*(24.*t23562*t23575 + 24.*t23525*t23586)*var2[2] - 0.5*t23679*var2[3] - 0.5*t23666*var2[4] + 1.44*t23586*var2[5]);
  p_output1[3]=var2[5]*(-0.5*t23463*var2[0] - 0.5*t23626*var2[1] - 0.5*t23679*var2[2] - 0.5*(24.*t23397*t23447 + 24.*t23427*t23455)*var2[3] - 0.5*t23712*var2[4] + 1.44*t23447*var2[5]);
  p_output1[4]=var2[5]*(-0.5*t23319*var2[0] - 0.5*t23608*var2[1] - 0.5*t23666*var2[2] - 0.5*t23712*var2[3] - 0.5*(24.*t23226*t23282 + 24.*t23270*t23282)*var2[4] + 1.44*t23282*var2[5]);
  p_output1[5]=(1.44*t23130*var2[0] + 1.44*t23480*var2[1] + 1.44*t23586*var2[2] + 1.44*t23447*var2[3] + 1.44*t23282*var2[4])*var2[5];
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

#include "Ce2_vec6_acrobot.hh"

namespace SymFunction
{

void Ce2_vec6_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
