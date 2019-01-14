/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:59 GMT-06:00
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
  double t10578;
  double t10825;
  double t10867;
  double t10864;
  double t11472;
  double t11637;
  double t16497;
  double t16564;
  double t16607;
  double t16643;
  double t16650;
  double t16719;
  double t16530;
  double t16772;
  double t16774;
  double t18468;
  double t18470;
  double t18472;
  double t18462;
  double t18495;
  double t18498;
  double t11708;
  double t11745;
  double t20183;
  double t12142;
  double t12313;
  double t12358;
  double t12369;
  double t12409;
  double t12479;
  double t12529;
  double t12627;
  double t12764;
  double t12795;
  double t12806;
  double t13026;
  double t13272;
  double t13289;
  double t13366;
  double t13596;
  double t13621;
  double t13666;
  double t15295;
  double t15344;
  double t15352;
  double t15415;
  double t15423;
  double t15446;
  double t15512;
  double t16033;
  double t16103;
  double t16155;
  double t16242;
  double t16247;
  double t16274;
  double t16362;
  double t16462;
  double t16481;
  double t20187;
  double t16778;
  double t16947;
  double t20245;
  double t20247;
  double t20251;
  double t20255;
  double t16988;
  double t17147;
  double t17249;
  double t17254;
  double t17304;
  double t17357;
  double t17448;
  double t17720;
  double t17835;
  double t17847;
  double t17854;
  double t17869;
  double t17948;
  double t17964;
  double t17976;
  double t17980;
  double t17987;
  double t17995;
  double t18059;
  double t18071;
  double t18085;
  double t18098;
  double t18179;
  double t18180;
  double t18189;
  double t18201;
  double t18333;
  double t18350;
  double t18365;
  double t18373;
  double t18406;
  double t18408;
  double t18414;
  double t18449;
  double t20256;
  double t18499;
  double t18601;
  double t20864;
  double t20996;
  double t21000;
  double t21016;
  double t18774;
  double t18828;
  double t18961;
  double t18981;
  double t19030;
  double t19042;
  double t19170;
  double t19187;
  double t19461;
  double t19610;
  double t19682;
  double t19687;
  double t19970;
  double t19986;
  double t19989;
  double t19990;
  double t19993;
  double t20002;
  double t20006;
  double t20010;
  double t20013;
  double t20024;
  double t20029;
  double t20031;
  double t20037;
  double t20054;
  double t20060;
  double t20097;
  double t20103;
  double t20121;
  double t20137;
  double t20139;
  double t20164;
  double t20166;
  double t21026;
  t10578 = Cos(var1[4]);
  t10825 = Cos(var1[5]);
  t10867 = Sin(var1[4]);
  t10864 = -0.002297*t10578*t10825;
  t11472 = -0.014823*t10867;
  t11637 = var1[0] + t10864 + t11472;
  t16497 = Sin(var1[3]);
  t16564 = t10825*t16497*t10867;
  t16607 = Cos(var1[3]);
  t16643 = Sin(var1[5]);
  t16650 = t16607*t16643;
  t16719 = t16564 + t16650;
  t16530 = 0.014823*t10578*t16497;
  t16772 = -0.002297*t16719;
  t16774 = var1[1] + t16530 + t16772;
  t18468 = -1.*t16607*t10825*t10867;
  t18470 = t16497*t16643;
  t18472 = t18468 + t18470;
  t18462 = -0.014823*t16607*t10578;
  t18495 = -0.002297*t18472;
  t18498 = var1[2] + t18462 + t18495;
  t11708 = -0.006985*t10578*t10825;
  t11745 = -0.013274*t10867;
  t20183 = -0.089*t10578*t16643;
  t12142 = -0.010917*t10578*t10825;
  t12313 = -0.010287*t10867;
  t12358 = -0.013666*t10578*t10825;
  t12369 = -0.006185*t10867;
  t12409 = -0.014933*t10578*t10825;
  t12479 = -0.001412*t10867;
  t12529 = -0.014583*t10578*t10825;
  t12627 = 0.003513*t10867;
  t12764 = -0.012652*t10578*t10825;
  t12795 = 0.008058*t10867;
  t12806 = -0.00935*t10578*t10825;
  t13026 = 0.011729*t10867;
  t13272 = -0.005035*t10578*t10825;
  t13289 = 0.01413*t10867;
  t13366 = -0.000174*t10578*t10825;
  t13596 = 0.014999*t10867;
  t13621 = 0.004705*t10578*t10825;
  t13666 = 0.014243*t10867;
  t15295 = 0.009075*t10578*t10825;
  t15344 = 0.011943*t10867;
  t15352 = 0.012461*t10578*t10825;
  t15415 = 0.00835*t10867;
  t15423 = 0.014497*t10578*t10825;
  t15446 = 0.003851*t10867;
  t15512 = 0.014962*t10578*t10825;
  t16033 = -0.001065*t10867;
  t16103 = 0.013806*t10578*t10825;
  t16155 = -0.005865*t10867;
  t16242 = 0.011153*t10578*t10825;
  t16247 = -0.01003*t10867;
  t16274 = 0.007292*t10578*t10825;
  t16362 = -0.013108*t10867;
  t16462 = 0.002641*t10578*t10825;
  t16481 = -0.014766*t10867;
  t20187 = var1[0] + t10864 + t11472 + t20183;
  t16778 = 0.013274*t10578*t16497;
  t16947 = -0.006985*t16719;
  t20245 = t16607*t10825;
  t20247 = -1.*t16497*t10867*t16643;
  t20251 = t20245 + t20247;
  t20255 = 0.089*t20251;
  t16988 = 0.010287*t10578*t16497;
  t17147 = -0.010917*t16719;
  t17249 = 0.006185*t10578*t16497;
  t17254 = -0.013666*t16719;
  t17304 = 0.001412*t10578*t16497;
  t17357 = -0.014933*t16719;
  t17448 = -0.003513*t10578*t16497;
  t17720 = -0.014583*t16719;
  t17835 = -0.008058*t10578*t16497;
  t17847 = -0.012652*t16719;
  t17854 = -0.011729*t10578*t16497;
  t17869 = -0.00935*t16719;
  t17948 = -0.01413*t10578*t16497;
  t17964 = -0.005035*t16719;
  t17976 = -0.014999*t10578*t16497;
  t17980 = -0.000174*t16719;
  t17987 = -0.014243*t10578*t16497;
  t17995 = 0.004705*t16719;
  t18059 = -0.011943*t10578*t16497;
  t18071 = 0.009075*t16719;
  t18085 = -0.00835*t10578*t16497;
  t18098 = 0.012461*t16719;
  t18179 = -0.003851*t10578*t16497;
  t18180 = 0.014497*t16719;
  t18189 = 0.001065*t10578*t16497;
  t18201 = 0.014962*t16719;
  t18333 = 0.005865*t10578*t16497;
  t18350 = 0.013806*t16719;
  t18365 = 0.01003*t10578*t16497;
  t18373 = 0.011153*t16719;
  t18406 = 0.013108*t10578*t16497;
  t18408 = 0.007292*t16719;
  t18414 = 0.014766*t10578*t16497;
  t18449 = 0.002641*t16719;
  t20256 = var1[1] + t16530 + t16772 + t20255;
  t18499 = -0.013274*t16607*t10578;
  t18601 = -0.006985*t18472;
  t20864 = t10825*t16497;
  t20996 = t16607*t10867*t16643;
  t21000 = t20864 + t20996;
  t21016 = 0.089*t21000;
  t18774 = -0.010287*t16607*t10578;
  t18828 = -0.010917*t18472;
  t18961 = -0.006185*t16607*t10578;
  t18981 = -0.013666*t18472;
  t19030 = -0.001412*t16607*t10578;
  t19042 = -0.014933*t18472;
  t19170 = 0.003513*t16607*t10578;
  t19187 = -0.014583*t18472;
  t19461 = 0.008058*t16607*t10578;
  t19610 = -0.012652*t18472;
  t19682 = 0.011729*t16607*t10578;
  t19687 = -0.00935*t18472;
  t19970 = 0.01413*t16607*t10578;
  t19986 = -0.005035*t18472;
  t19989 = 0.014999*t16607*t10578;
  t19990 = -0.000174*t18472;
  t19993 = 0.014243*t16607*t10578;
  t20002 = 0.004705*t18472;
  t20006 = 0.011943*t16607*t10578;
  t20010 = 0.009075*t18472;
  t20013 = 0.00835*t16607*t10578;
  t20024 = 0.012461*t18472;
  t20029 = 0.003851*t16607*t10578;
  t20031 = 0.014497*t18472;
  t20037 = -0.001065*t16607*t10578;
  t20054 = 0.014962*t18472;
  t20060 = -0.005865*t16607*t10578;
  t20097 = 0.013806*t18472;
  t20103 = -0.01003*t16607*t10578;
  t20121 = 0.011153*t18472;
  t20137 = -0.013108*t16607*t10578;
  t20139 = 0.007292*t18472;
  t20164 = -0.014766*t16607*t10578;
  t20166 = 0.002641*t18472;
  t21026 = var1[2] + t18462 + t18495 + t21016;
  p_output1[0]=t11637;
  p_output1[1]=t11708 + t11745 + var1[0];
  p_output1[2]=t12142 + t12313 + var1[0];
  p_output1[3]=t12358 + t12369 + var1[0];
  p_output1[4]=t12409 + t12479 + var1[0];
  p_output1[5]=t12529 + t12627 + var1[0];
  p_output1[6]=t12764 + t12795 + var1[0];
  p_output1[7]=t12806 + t13026 + var1[0];
  p_output1[8]=t13272 + t13289 + var1[0];
  p_output1[9]=t13366 + t13596 + var1[0];
  p_output1[10]=t13621 + t13666 + var1[0];
  p_output1[11]=t15295 + t15344 + var1[0];
  p_output1[12]=t15352 + t15415 + var1[0];
  p_output1[13]=t15423 + t15446 + var1[0];
  p_output1[14]=t15512 + t16033 + var1[0];
  p_output1[15]=t16103 + t16155 + var1[0];
  p_output1[16]=t16242 + t16247 + var1[0];
  p_output1[17]=t16274 + t16362 + var1[0];
  p_output1[18]=t16462 + t16481 + var1[0];
  p_output1[19]=t11637;
  p_output1[20]=t16774;
  p_output1[21]=t16778 + t16947 + var1[1];
  p_output1[22]=t16988 + t17147 + var1[1];
  p_output1[23]=t17249 + t17254 + var1[1];
  p_output1[24]=t17304 + t17357 + var1[1];
  p_output1[25]=t17448 + t17720 + var1[1];
  p_output1[26]=t17835 + t17847 + var1[1];
  p_output1[27]=t17854 + t17869 + var1[1];
  p_output1[28]=t17948 + t17964 + var1[1];
  p_output1[29]=t17976 + t17980 + var1[1];
  p_output1[30]=t17987 + t17995 + var1[1];
  p_output1[31]=t18059 + t18071 + var1[1];
  p_output1[32]=t18085 + t18098 + var1[1];
  p_output1[33]=t18179 + t18180 + var1[1];
  p_output1[34]=t18189 + t18201 + var1[1];
  p_output1[35]=t18333 + t18350 + var1[1];
  p_output1[36]=t18365 + t18373 + var1[1];
  p_output1[37]=t18406 + t18408 + var1[1];
  p_output1[38]=t18414 + t18449 + var1[1];
  p_output1[39]=t16774;
  p_output1[40]=t18498;
  p_output1[41]=t18499 + t18601 + var1[2];
  p_output1[42]=t18774 + t18828 + var1[2];
  p_output1[43]=t18961 + t18981 + var1[2];
  p_output1[44]=t19030 + t19042 + var1[2];
  p_output1[45]=t19170 + t19187 + var1[2];
  p_output1[46]=t19461 + t19610 + var1[2];
  p_output1[47]=t19682 + t19687 + var1[2];
  p_output1[48]=t19970 + t19986 + var1[2];
  p_output1[49]=t19989 + t19990 + var1[2];
  p_output1[50]=t19993 + t20002 + var1[2];
  p_output1[51]=t20006 + t20010 + var1[2];
  p_output1[52]=t20013 + t20024 + var1[2];
  p_output1[53]=t20029 + t20031 + var1[2];
  p_output1[54]=t20037 + t20054 + var1[2];
  p_output1[55]=t20060 + t20097 + var1[2];
  p_output1[56]=t20103 + t20121 + var1[2];
  p_output1[57]=t20137 + t20139 + var1[2];
  p_output1[58]=t20164 + t20166 + var1[2];
  p_output1[59]=t18498;
  p_output1[60]=t20187;
  p_output1[61]=t11708 + t11745 + t20183 + var1[0];
  p_output1[62]=t12142 + t12313 + t20183 + var1[0];
  p_output1[63]=t12358 + t12369 + t20183 + var1[0];
  p_output1[64]=t12409 + t12479 + t20183 + var1[0];
  p_output1[65]=t12529 + t12627 + t20183 + var1[0];
  p_output1[66]=t12764 + t12795 + t20183 + var1[0];
  p_output1[67]=t12806 + t13026 + t20183 + var1[0];
  p_output1[68]=t13272 + t13289 + t20183 + var1[0];
  p_output1[69]=t13366 + t13596 + t20183 + var1[0];
  p_output1[70]=t13621 + t13666 + t20183 + var1[0];
  p_output1[71]=t15295 + t15344 + t20183 + var1[0];
  p_output1[72]=t15352 + t15415 + t20183 + var1[0];
  p_output1[73]=t15423 + t15446 + t20183 + var1[0];
  p_output1[74]=t15512 + t16033 + t20183 + var1[0];
  p_output1[75]=t16103 + t16155 + t20183 + var1[0];
  p_output1[76]=t16242 + t16247 + t20183 + var1[0];
  p_output1[77]=t16274 + t16362 + t20183 + var1[0];
  p_output1[78]=t16462 + t16481 + t20183 + var1[0];
  p_output1[79]=t20187;
  p_output1[80]=t20256;
  p_output1[81]=t16778 + t16947 + t20255 + var1[1];
  p_output1[82]=t16988 + t17147 + t20255 + var1[1];
  p_output1[83]=t17249 + t17254 + t20255 + var1[1];
  p_output1[84]=t17304 + t17357 + t20255 + var1[1];
  p_output1[85]=t17448 + t17720 + t20255 + var1[1];
  p_output1[86]=t17835 + t17847 + t20255 + var1[1];
  p_output1[87]=t17854 + t17869 + t20255 + var1[1];
  p_output1[88]=t17948 + t17964 + t20255 + var1[1];
  p_output1[89]=t17976 + t17980 + t20255 + var1[1];
  p_output1[90]=t17987 + t17995 + t20255 + var1[1];
  p_output1[91]=t18059 + t18071 + t20255 + var1[1];
  p_output1[92]=t18085 + t18098 + t20255 + var1[1];
  p_output1[93]=t18179 + t18180 + t20255 + var1[1];
  p_output1[94]=t18189 + t18201 + t20255 + var1[1];
  p_output1[95]=t18333 + t18350 + t20255 + var1[1];
  p_output1[96]=t18365 + t18373 + t20255 + var1[1];
  p_output1[97]=t18406 + t18408 + t20255 + var1[1];
  p_output1[98]=t18414 + t18449 + t20255 + var1[1];
  p_output1[99]=t20256;
  p_output1[100]=t21026;
  p_output1[101]=t18499 + t18601 + t21016 + var1[2];
  p_output1[102]=t18774 + t18828 + t21016 + var1[2];
  p_output1[103]=t18961 + t18981 + t21016 + var1[2];
  p_output1[104]=t19030 + t19042 + t21016 + var1[2];
  p_output1[105]=t19170 + t19187 + t21016 + var1[2];
  p_output1[106]=t19461 + t19610 + t21016 + var1[2];
  p_output1[107]=t19682 + t19687 + t21016 + var1[2];
  p_output1[108]=t19970 + t19986 + t21016 + var1[2];
  p_output1[109]=t19989 + t19990 + t21016 + var1[2];
  p_output1[110]=t19993 + t20002 + t21016 + var1[2];
  p_output1[111]=t20006 + t20010 + t21016 + var1[2];
  p_output1[112]=t20013 + t20024 + t21016 + var1[2];
  p_output1[113]=t20029 + t20031 + t21016 + var1[2];
  p_output1[114]=t20037 + t20054 + t21016 + var1[2];
  p_output1[115]=t20060 + t20097 + t21016 + var1[2];
  p_output1[116]=t20103 + t20121 + t21016 + var1[2];
  p_output1[117]=t20137 + t20139 + t21016 + var1[2];
  p_output1[118]=t20164 + t20166 + t21016 + var1[2];
  p_output1[119]=t21026;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_pelvis_to_l_leg_hpz_bar.hh"

namespace SymFunction
{

void Link_pelvis_to_l_leg_hpz_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
