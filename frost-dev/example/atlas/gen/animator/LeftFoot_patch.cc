/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:17 GMT-06:00
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
  double t1304;
  double t2572;
  double t3398;
  double t5812;
  double t5872;
  double t5525;
  double t5742;
  double t6079;
  double t6798;
  double t7396;
  double t8052;
  double t8077;
  double t8094;
  double t8137;
  double t8153;
  double t8154;
  double t8155;
  double t9176;
  double t9218;
  double t9220;
  double t9289;
  double t9268;
  double t9271;
  double t9276;
  double t9243;
  double t9301;
  double t9306;
  double t9307;
  double t8583;
  double t8602;
  double t8810;
  double t8963;
  double t9345;
  double t9346;
  double t9355;
  double t9362;
  double t9373;
  double t9384;
  double t9391;
  double t9407;
  double t9138;
  double t9142;
  double t9150;
  double t9436;
  double t9443;
  double t9456;
  double t4941;
  double t5761;
  double t5844;
  double t5870;
  double t5928;
  double t6153;
  double t6378;
  double t8067;
  double t8082;
  double t8083;
  double t8093;
  double t8141;
  double t8185;
  double t8814;
  double t8988;
  double t9116;
  double t9161;
  double t9172;
  double t9174;
  double t9175;
  double t9242;
  double t9261;
  double t9267;
  double t9283;
  double t9334;
  double t9370;
  double t9379;
  double t9381;
  double t9408;
  double t9412;
  double t9425;
  double t9435;
  double t9459;
  double t9483;
  double t9489;
  double t9567;
  double t9649;
  double t9658;
  double t9730;
  double t9871;
  double t9897;
  double t9920;
  double t9922;
  double t9932;
  double t9957;
  double t9968;
  double t9933;
  double t10021;
  double t10041;
  double t10033;
  double t10047;
  double t10052;
  double t10065;
  double t10066;
  double t10079;
  double t10085;
  double t10093;
  double t10099;
  double t10111;
  double t10116;
  double t10152;
  double t10223;
  double t10226;
  double t10235;
  double t10292;
  double t10302;
  double t10316;
  double t10353;
  double t10366;
  double t10379;
  double t10450;
  double t10456;
  double t10463;
  double t10471;
  double t10472;
  double t10482;
  double t10172;
  double t10176;
  double t10194;
  double t10487;
  double t10494;
  double t10498;
  double t10028;
  double t10060;
  double t10084;
  double t10100;
  double t10162;
  double t10207;
  double t10240;
  double t10321;
  double t10432;
  double t10464;
  double t10483;
  double t10499;
  double t10500;
  double t10525;
  double t10535;
  double t10607;
  double t10618;
  double t10671;
  double t10701;
  double t10731;
  double t11017;
  double t11130;
  double t11132;
  double t11294;
  double t11308;
  double t11199;
  double t11478;
  double t11488;
  double t11492;
  double t11498;
  double t11503;
  double t11505;
  double t11508;
  double t11556;
  double t11624;
  double t11722;
  double t11781;
  double t11819;
  double t12197;
  double t12202;
  double t12477;
  double t12663;
  double t12843;
  double t12897;
  double t14609;
  double t14656;
  double t14668;
  double t14709;
  double t14795;
  double t15105;
  double t15173;
  double t15298;
  double t15307;
  double t12051;
  double t12146;
  double t12152;
  double t15873;
  double t15874;
  double t15879;
  double t11403;
  double t11493;
  double t11506;
  double t11694;
  double t11833;
  double t12185;
  double t12645;
  double t14543;
  double t14685;
  double t15167;
  double t15843;
  double t15880;
  double t15932;
  double t16138;
  double t16142;
  double t16148;
  double t16170;
  double t16298;
  double t18075;
  double t18097;
  double t18837;
  double t19037;
  double t19375;
  double t19487;
  double t19539;
  double t19454;
  t1304 = Cos(var1[4]);
  t2572 = Cos(var1[5]);
  t3398 = Sin(var1[13]);
  t5812 = Cos(var1[13]);
  t5872 = Sin(var1[5]);
  t5525 = Sin(var1[11]);
  t5742 = Sin(var1[4]);
  t6079 = Cos(var1[11]);
  t6798 = -1.*t1304*t2572*t3398;
  t7396 = -1.*t5812*t1304*t5872;
  t8052 = t6798 + t7396;
  t8077 = Cos(var1[12]);
  t8094 = Sin(var1[12]);
  t8137 = 0.05*t8094;
  t8153 = t5812*t1304*t2572;
  t8154 = -1.*t1304*t3398*t5872;
  t8155 = t8153 + t8154;
  t9176 = t6079*t5742;
  t9218 = -1.*t5525*t8052;
  t9220 = t9176 + t9218;
  t9289 = Sin(var1[14]);
  t9268 = t8094*t8155;
  t9271 = t8077*t9220;
  t9276 = t9268 + t9271;
  t9243 = Cos(var1[14]);
  t9301 = t8077*t8155;
  t9306 = -1.*t8094*t9220;
  t9307 = t9301 + t9306;
  t8583 = Cos(var1[9]);
  t8602 = -1.*t8583;
  t8810 = 1. + t8602;
  t8963 = Sin(var1[9]);
  t9345 = Sin(var1[10]);
  t9346 = -1.*t9289*t9276;
  t9355 = t9243*t9307;
  t9362 = t9346 + t9355;
  t9373 = Cos(var1[10]);
  t9384 = t9243*t9276;
  t9391 = t9289*t9307;
  t9407 = t9384 + t9391;
  t9138 = t5525*t5742;
  t9142 = t6079*t8052;
  t9150 = t9138 + t9142;
  t9436 = t9345*t9362;
  t9443 = t9373*t9407;
  t9456 = t9436 + t9443;
  t4941 = 0.089*t1304*t2572*t3398;
  t5761 = -0.089*t5525*t5742;
  t5844 = -1.*t5812;
  t5870 = 1. + t5844;
  t5928 = -0.089*t5870*t1304*t5872;
  t6153 = -1.*t6079;
  t6378 = 1. + t6153;
  t8067 = 0.089*t6378*t8052;
  t8082 = -1.*t8077;
  t8083 = 1. + t8082;
  t8093 = 0.05*t8083;
  t8141 = t8093 + t8137;
  t8185 = t8141*t8155;
  t8814 = 0.089*t8810;
  t8988 = -0.846*t8963;
  t9116 = t8814 + t8988;
  t9161 = t9116*t9150;
  t9172 = -1. + t8077;
  t9174 = 0.05*t9172;
  t9175 = t9174 + t8137;
  t9242 = t9175*t9220;
  t9261 = -1.*t9243;
  t9267 = 1. + t9261;
  t9283 = -0.424*t9267*t9276;
  t9334 = 0.424*t9289*t9307;
  t9370 = 0.846*t9345*t9362;
  t9379 = -1.*t9373;
  t9381 = 1. + t9379;
  t9408 = -0.846*t9381*t9407;
  t9412 = -0.846*t8810;
  t9425 = -0.089*t8963;
  t9435 = t9412 + t9425;
  t9459 = t9435*t9456;
  t9483 = -1.*t8963*t9150;
  t9489 = t8583*t9456;
  t9567 = t9483 + t9489;
  t9649 = t8583*t9150;
  t9658 = t8963*t9456;
  t9730 = t9649 + t9658;
  t9871 = t9373*t9362;
  t9897 = -1.*t9345*t9407;
  t9920 = t9871 + t9897;
  t9922 = 0.1728*t9920;
  t9932 = -0.92245*t9567;
  t9957 = 0.1652*t9730;
  t9968 = -0.082*t9920;
  t9933 = 0.0128*t9730;
  t10021 = Sin(var1[3]);
  t10041 = Cos(var1[3]);
  t10033 = t2572*t10021*t5742;
  t10047 = t10041*t5872;
  t10052 = t10033 + t10047;
  t10065 = t10041*t2572;
  t10066 = -1.*t10021*t5742*t5872;
  t10079 = t10065 + t10066;
  t10085 = -1.*t3398*t10052;
  t10093 = t5812*t10079;
  t10099 = t10085 + t10093;
  t10111 = t5812*t10052;
  t10116 = t3398*t10079;
  t10152 = t10111 + t10116;
  t10223 = -1.*t6079*t1304*t10021;
  t10226 = -1.*t5525*t10099;
  t10235 = t10223 + t10226;
  t10292 = t8094*t10152;
  t10302 = t8077*t10235;
  t10316 = t10292 + t10302;
  t10353 = t8077*t10152;
  t10366 = -1.*t8094*t10235;
  t10379 = t10353 + t10366;
  t10450 = -1.*t9289*t10316;
  t10456 = t9243*t10379;
  t10463 = t10450 + t10456;
  t10471 = t9243*t10316;
  t10472 = t9289*t10379;
  t10482 = t10471 + t10472;
  t10172 = -1.*t1304*t5525*t10021;
  t10176 = t6079*t10099;
  t10194 = t10172 + t10176;
  t10487 = t9345*t10463;
  t10494 = t9373*t10482;
  t10498 = t10487 + t10494;
  t10028 = 0.089*t1304*t5525*t10021;
  t10060 = 0.089*t3398*t10052;
  t10084 = 0.089*t5870*t10079;
  t10100 = 0.089*t6378*t10099;
  t10162 = t8141*t10152;
  t10207 = t9116*t10194;
  t10240 = t9175*t10235;
  t10321 = -0.424*t9267*t10316;
  t10432 = 0.424*t9289*t10379;
  t10464 = 0.846*t9345*t10463;
  t10483 = -0.846*t9381*t10482;
  t10499 = t9435*t10498;
  t10500 = -1.*t8963*t10194;
  t10525 = t8583*t10498;
  t10535 = t10500 + t10525;
  t10607 = t8583*t10194;
  t10618 = t8963*t10498;
  t10671 = t10607 + t10618;
  t10701 = t9373*t10463;
  t10731 = -1.*t9345*t10482;
  t11017 = t10701 + t10731;
  t11130 = 0.1728*t11017;
  t11132 = -0.92245*t10535;
  t11294 = 0.1652*t10671;
  t11308 = -0.082*t11017;
  t11199 = 0.0128*t10671;
  t11478 = -1.*t10041*t2572*t5742;
  t11488 = t10021*t5872;
  t11492 = t11478 + t11488;
  t11498 = t2572*t10021;
  t11503 = t10041*t5742*t5872;
  t11505 = t11498 + t11503;
  t11508 = -1.*t3398*t11492;
  t11556 = t5812*t11505;
  t11624 = t11508 + t11556;
  t11722 = t5812*t11492;
  t11781 = t3398*t11505;
  t11819 = t11722 + t11781;
  t12197 = t6079*t10041*t1304;
  t12202 = -1.*t5525*t11624;
  t12477 = t12197 + t12202;
  t12663 = t8094*t11819;
  t12843 = t8077*t12477;
  t12897 = t12663 + t12843;
  t14609 = t8077*t11819;
  t14656 = -1.*t8094*t12477;
  t14668 = t14609 + t14656;
  t14709 = -1.*t9289*t12897;
  t14795 = t9243*t14668;
  t15105 = t14709 + t14795;
  t15173 = t9243*t12897;
  t15298 = t9289*t14668;
  t15307 = t15173 + t15298;
  t12051 = t10041*t1304*t5525;
  t12146 = t6079*t11624;
  t12152 = t12051 + t12146;
  t15873 = t9345*t15105;
  t15874 = t9373*t15307;
  t15879 = t15873 + t15874;
  t11403 = -0.089*t10041*t1304*t5525;
  t11493 = 0.089*t3398*t11492;
  t11506 = 0.089*t5870*t11505;
  t11694 = 0.089*t6378*t11624;
  t11833 = t8141*t11819;
  t12185 = t9116*t12152;
  t12645 = t9175*t12477;
  t14543 = -0.424*t9267*t12897;
  t14685 = 0.424*t9289*t14668;
  t15167 = 0.846*t9345*t15105;
  t15843 = -0.846*t9381*t15307;
  t15880 = t9435*t15879;
  t15932 = -1.*t8963*t12152;
  t16138 = t8583*t15879;
  t16142 = t15932 + t16138;
  t16148 = t8583*t12152;
  t16170 = t8963*t15879;
  t16298 = t16148 + t16170;
  t18075 = t9373*t15105;
  t18097 = -1.*t9345*t15307;
  t18837 = t18075 + t18097;
  t19037 = 0.1728*t18837;
  t19375 = -0.92245*t16142;
  t19487 = 0.1652*t16298;
  t19539 = -0.082*t18837;
  t19454 = 0.0128*t16298;
  p_output1[0]=t4941 + t5761 + t5928 + t8067 + t8185 + t9161 + t9242 + t9283 + t9334 + t9370 + t9408 + t9459 - 0.846*t9567 + 0.089*t9730 + var1[0];
  p_output1[1]=t4941 + t5761 + t5928 + t8067 + t8185 + t9161 + t9242 + t9283 + t9334 + t9370 + t9408 + t9459 + t9922 + t9932 + t9933 + var1[0];
  p_output1[2]=t4941 + t5761 + t5928 + t8067 + t8185 + t9161 + t9242 + t9283 + t9334 + t9370 + t9408 + t9459 + t9922 + t9932 + t9957 + var1[0];
  p_output1[3]=t4941 + t5761 + t5928 + t8067 + t8185 + t9161 + t9242 + t9283 + t9334 + t9370 + t9408 + t9459 + t9932 + t9957 + t9968 + var1[0];
  p_output1[4]=t4941 + t5761 + t5928 + t8067 + t8185 + t9161 + t9242 + t9283 + t9334 + t9370 + t9408 + t9459 + t9932 + t9933 + t9968 + var1[0];
  p_output1[5]=t10028 + t10060 + t10084 + t10100 + t10162 + t10207 + t10240 + t10321 + t10432 + t10464 + t10483 + t10499 - 0.846*t10535 + 0.089*t10671 + var1[1];
  p_output1[6]=t10028 + t10060 + t10084 + t10100 + t10162 + t10207 + t10240 + t10321 + t10432 + t10464 + t10483 + t10499 + t11130 + t11132 + t11199 + var1[1];
  p_output1[7]=t10028 + t10060 + t10084 + t10100 + t10162 + t10207 + t10240 + t10321 + t10432 + t10464 + t10483 + t10499 + t11130 + t11132 + t11294 + var1[1];
  p_output1[8]=t10028 + t10060 + t10084 + t10100 + t10162 + t10207 + t10240 + t10321 + t10432 + t10464 + t10483 + t10499 + t11132 + t11294 + t11308 + var1[1];
  p_output1[9]=t10028 + t10060 + t10084 + t10100 + t10162 + t10207 + t10240 + t10321 + t10432 + t10464 + t10483 + t10499 + t11132 + t11199 + t11308 + var1[1];
  p_output1[10]=t11403 + t11493 + t11506 + t11694 + t11833 + t12185 + t12645 + t14543 + t14685 + t15167 + t15843 + t15880 - 0.846*t16142 + 0.089*t16298 + var1[2];
  p_output1[11]=t11403 + t11493 + t11506 + t11694 + t11833 + t12185 + t12645 + t14543 + t14685 + t15167 + t15843 + t15880 + t19037 + t19375 + t19454 + var1[2];
  p_output1[12]=t11403 + t11493 + t11506 + t11694 + t11833 + t12185 + t12645 + t14543 + t14685 + t15167 + t15843 + t15880 + t19037 + t19375 + t19487 + var1[2];
  p_output1[13]=t11403 + t11493 + t11506 + t11694 + t11833 + t12185 + t12645 + t14543 + t14685 + t15167 + t15843 + t15880 + t19375 + t19487 + t19539 + var1[2];
  p_output1[14]=t11403 + t11493 + t11506 + t11694 + t11833 + t12185 + t12645 + t14543 + t14685 + t15167 + t15843 + t15880 + t19375 + t19454 + t19539 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "LeftFoot_patch.hh"

namespace SymFunction
{

void LeftFoot_patch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
