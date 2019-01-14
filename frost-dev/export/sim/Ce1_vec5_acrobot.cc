/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:27 GMT-05:00
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
  double t11265;
  double t4189;
  double t5463;
  double t15551;
  double t38547;
  double t47467;
  double t40060;
  double t45912;
  double t2707;
  double t32795;
  double t64262;
  double t64266;
  double t64268;
  double t64271;
  double t64274;
  double t64275;
  double t64217;
  double t64225;
  double t64226;
  double t45986;
  double t47465;
  double t48011;
  double t48012;
  double t64484;
  double t64485;
  double t64520;
  double t64318;
  double t33171;
  double t33844;
  double t33860;
  double t38550;
  double t50935;
  double t55929;
  double t64228;
  double t64257;
  double t64535;
  double t64307;
  double t64327;
  double t64334;
  double t64335;
  double t64383;
  double t64424;
  double t64465;
  double t64532;
  double t64536;
  double t6055;
  double t15579;
  double t28916;
  double t32478;
  double t35418;
  double t38457;
  double t38470;
  double t64561;
  double t64562;
  double t64269;
  double t64592;
  double t64593;
  double t64594;
  double t64584;
  double t64585;
  double t64590;
  double t64591;
  double t64570;
  double t64571;
  double t64572;
  double t64597;
  double t64600;
  double t64611;
  double t64613;
  double t64614;
  double t64617;
  double t64618;
  double t64619;
  double t64280;
  double t64281;
  double t64686;
  double t64538;
  double t64539;
  double t64551;
  double t64552;
  double t64553;
  double t64726;
  double t64728;
  double t64733;
  double t64735;
  double t64563;
  double t64564;
  double t64565;
  double t64791;
  double t64626;
  double t64632;
  double t64633;
  double t64642;
  double t64643;
  double t64644;
  double t64645;
  double t64659;
  double t64671;
  double t64567;
  double t64573;
  double t64578;
  double t64803;
  double t64815;
  double t64825;
  double t64829;
  double t64864;
  double t64865;
  double t64873;
  double t64882;
  double t64885;
  double t64892;
  double t64897;
  double t64898;
  double t64901;
  double t64920;
  double t64921;
  double t64928;
  double t64931;
  double t64932;
  double t64918;
  double t64967;
  double t64968;
  double t64969;
  double t64970;
  double t64974;
  double t64977;
  double t64979;
  double t64980;
  double t64982;
  double t64984;
  double t64890;
  double t64911;
  double t64991;
  double t64993;
  double t64994;
  double t64998;
  double t64999;
  double t65002;
  double t64985;
  double t64988;
  double t64910;
  double t64912;
  double t64914;
  double t64916;
  double t64945;
  double t64956;
  double t64961;
  double t64962;
  double t64963;
  double t65046;
  double t65049;
  double t65052;
  double t65054;
  double t65058;
  double t65062;
  double t65063;
  double t65076;
  double t65077;
  double t65078;
  double t65051;
  double t65064;
  double t65068;
  double t65044;
  double t65074;
  double t65119;
  double t65120;
  double t65121;
  double t65123;
  double t65124;
  double t65125;
  double t65122;
  double t65126;
  double t65128;
  double t65130;
  double t65131;
  double t65133;
  double t65086;
  double t65090;
  double t65165;
  double t65153;
  double t65154;
  double t65159;
  double t65164;
  double t65168;
  t11265 = Cos(var1[3]);
  t4189 = Cos(var1[4]);
  t5463 = Sin(var1[3]);
  t15551 = Sin(var1[4]);
  t38547 = Cos(var1[5]);
  t47467 = Sin(var1[5]);
  t40060 = -1.*t38547;
  t45912 = 1. + t40060;
  t2707 = Cos(var1[2]);
  t32795 = Sin(var1[2]);
  t64262 = -1.*t38547*t15551;
  t64266 = -1.*t4189*t47467;
  t64268 = t64262 + t64266;
  t64271 = t4189*t38547;
  t64274 = -1.*t15551*t47467;
  t64275 = t64271 + t64274;
  t64217 = 0.8*t45912;
  t64225 = 1.04*t38547;
  t64226 = t64217 + t64225;
  t45986 = -0.15*t45912;
  t47465 = -0.15*t38547;
  t48011 = -0.24*t47467;
  t48012 = t45986 + t47465 + t48011;
  t64484 = t38547*t15551;
  t64485 = t4189*t47467;
  t64520 = t64484 + t64485;
  t64318 = -1.*t5463*t64275;
  t33171 = t11265*t4189;
  t33844 = -1.*t5463*t15551;
  t33860 = t33171 + t33844;
  t38550 = 0.15*t38547;
  t50935 = t38547*t48012;
  t55929 = -0.4*t47467;
  t64228 = t64226*t47467;
  t64257 = t38550 + t50935 + t55929 + t64228;
  t64535 = t11265*t64275;
  t64307 = t11265*t64268;
  t64327 = t64307 + t64318;
  t64334 = 0.4*t38547;
  t64335 = -1.*t38547*t64226;
  t64383 = 0.15*t47467;
  t64424 = t48012*t47467;
  t64465 = t64334 + t64335 + t64383 + t64424;
  t64532 = -1.*t5463*t64520;
  t64536 = t64532 + t64535;
  t6055 = -1.*t4189*t5463;
  t15579 = -1.*t11265*t15551;
  t28916 = t6055 + t15579;
  t32478 = t2707*t28916;
  t35418 = t32795*t33860;
  t38457 = t32478 + t35418;
  t38470 = -3.944*t38457;
  t64561 = t5463*t64268;
  t64562 = t64561 + t64535;
  t64269 = -1.*t5463*t64268;
  t64592 = -1.*t4189*t38547;
  t64593 = t15551*t47467;
  t64594 = t64592 + t64593;
  t64584 = t32795*t64562;
  t64585 = t2707*t64327;
  t64590 = t64584 + t64585;
  t64591 = 12.*t64465*t64590;
  t64570 = t11265*t64520;
  t64571 = t5463*t64275;
  t64572 = t64570 + t64571;
  t64597 = t11265*t64594;
  t64600 = t64269 + t64597;
  t64611 = t2707*t64600;
  t64613 = t5463*t64594;
  t64614 = t64307 + t64613;
  t64617 = t32795*t64614;
  t64618 = t64611 + t64617;
  t64619 = 12.*t64257*t64618;
  t64280 = -1.*t11265*t64275;
  t64281 = t64269 + t64280;
  t64686 = t2707*t64536;
  t64538 = -1.*t11265*t64520;
  t64539 = t64538 + t64318;
  t64551 = t4189*t5463;
  t64552 = t11265*t15551;
  t64553 = t64551 + t64552;
  t64726 = -1.*t32795*t28916;
  t64728 = t2707*t33860;
  t64733 = t64726 + t64728;
  t64735 = -3.944*t64733;
  t64563 = t2707*t64562;
  t64564 = -1.*t32795*t64327;
  t64565 = t64563 + t64564;
  t64791 = 12.*t64465*t64565;
  t64626 = -0.4*t38547;
  t64632 = Power(t38547,2);
  t64633 = -0.24*t64632;
  t64642 = t38547*t64226;
  t64643 = -0.15*t47467;
  t64644 = -1.*t48012*t47467;
  t64645 = Power(t47467,2);
  t64659 = -0.24*t64645;
  t64671 = t64626 + t64633 + t64642 + t64643 + t64644 + t64659;
  t64567 = -1.*t32795*t64536;
  t64573 = t2707*t64572;
  t64578 = t64567 + t64573;
  t64803 = -1.*t32795*t64600;
  t64815 = t2707*t64614;
  t64825 = t64803 + t64815;
  t64829 = 12.*t64257*t64825;
  t64864 = -1.*t4189;
  t64865 = 1. + t64864;
  t64873 = 0.4*t64865;
  t64882 = 0.69*t4189;
  t64885 = t64873 + t64882;
  t64892 = -0.15*t64865;
  t64897 = -0.15*t4189;
  t64898 = -0.29*t15551;
  t64901 = t64892 + t64897 + t64898;
  t64920 = -1.*t64885*t5463;
  t64921 = t11265*t64901;
  t64928 = -1.*t11265;
  t64931 = 1. + t64928;
  t64932 = -0.15*t64931;
  t64918 = 0.15*t11265;
  t64967 = 0.4*t15551;
  t64968 = -1.*t64226*t15551;
  t64969 = t4189*t48012;
  t64970 = t64892 + t64967 + t64968 + t64969;
  t64974 = t11265*t64970;
  t64977 = t4189*t64226;
  t64979 = 0.15*t15551;
  t64980 = t15551*t48012;
  t64982 = t64873 + t64977 + t64979 + t64980;
  t64984 = -1.*t5463*t64982;
  t64890 = -0.15*t5463;
  t64911 = 0.15*t5463;
  t64991 = -1.*t5463*t64970;
  t64993 = -1.*t11265*t64982;
  t64994 = t64890 + t64991 + t64993;
  t64998 = t5463*t64970;
  t64999 = t11265*t64982;
  t65002 = t64911 + t64998 + t64999;
  t64985 = t64932 + t64974 + t64984;
  t64988 = t64918 + t64974 + t64984;
  t64910 = t11265*t64885;
  t64912 = t5463*t64901;
  t64914 = t64910 + t64911 + t64912;
  t64916 = t64914*t28916;
  t64945 = t64932 + t64920 + t64921;
  t64956 = -1.*t11265*t4189;
  t64961 = t5463*t15551;
  t64962 = t64956 + t64961;
  t64963 = t64945*t64962;
  t65046 = 0.15*t4189;
  t65049 = t65046 + t64967 + t64968 + t64969;
  t65052 = 0.4*t4189;
  t65054 = -1.*t4189*t64226;
  t65058 = -0.15*t15551;
  t65062 = -1.*t15551*t48012;
  t65063 = t65052 + t65054 + t65058 + t65062;
  t65076 = t11265*t65049;
  t65077 = t5463*t65063;
  t65078 = t65076 + t65077;
  t65051 = -1.*t5463*t65049;
  t65064 = t11265*t65063;
  t65068 = t65051 + t65064;
  t65044 = -1.*t65002*t64562;
  t65074 = -1.*t64985*t64327;
  t65119 = -0.24*t38547*t15551;
  t65120 = -0.24*t4189*t47467;
  t65121 = t65119 + t65120;
  t65123 = -0.24*t4189*t38547;
  t65124 = 0.24*t15551*t47467;
  t65125 = t65123 + t65124;
  t65122 = -1.*t5463*t65121;
  t65126 = t11265*t65125;
  t65128 = t65122 + t65126;
  t65130 = t11265*t65121;
  t65131 = t5463*t65125;
  t65133 = t65130 + t65131;
  t65086 = t64985*t64600;
  t65090 = t65002*t64614;
  t65165 = 0.15*t64275;
  t65153 = 0.15*t64268;
  t65154 = t64970*t64268;
  t65159 = t64982*t64275;
  t65164 = -1.*t64982*t64268;
  t65168 = -1.*t64970*t64594;
  p_output1[0]=var2[4]*(-0.5*(-3.944*(-1.*t32795*t33860 + t2707*t64553) + 12.*t64257*t64565 + 12.*t64465*t64578)*var2[2] - 0.5*(t38470 + 12.*t64257*(t2707*t64281 + t32795*t64327) + 12.*t64465*(t32795*t64536 + t2707*t64539))*var2[3] - 0.5*(t38470 + t64591 + t64619)*var2[4] - 0.5*(t64591 + t64619 + 12.*t64590*t64671 + 12.*t64257*(t32795*t64572 + t64686))*var2[5]);
  p_output1[1]=var2[4]*(-0.5*(-3.944*(-1.*t2707*t33860 - 1.*t32795*t64553) + 12.*t64257*(-1.*t2707*t64327 - 1.*t32795*t64562) + 12.*t64465*(-1.*t2707*t64536 - 1.*t32795*t64572))*var2[2] - 0.5*(12.*t64257*(-1.*t32795*t64281 + t64585) + 12.*t64465*(-1.*t32795*t64539 + t64686) + t64735)*var2[3] - 0.5*(t64735 + t64791 + t64829)*var2[4] - 0.5*(12.*t64257*t64578 + 12.*t64565*t64671 + t64791 + t64829)*var2[5]);
  p_output1[2]=var2[4]*(-0.5*(-3.944*(t28916*(-1.*t11265*t64885 + t64890 - 1.*t5463*t64901) + t64916 + t33860*(t64918 + t64920 + t64921) + t64963) + 12.*t64465*(t64281*t64985 + t64562*t64988 + t64327*t64994 + t64327*t65002) + 12.*t64257*(-1.*t64539*t64985 - 1.*t64572*t64988 - 1.*t64536*t64994 - 1.*t64536*t65002))*var2[3] - 0.5*(-3.944*(t28916*(-0.29*t11265*t4189 + 0.29*t15551*t5463) + t33860*(-0.29*t11265*t15551 - 0.29*t4189*t5463) + t64916 + t64963) + 12.*t64257*(t65044 - 1.*t64536*t65068 + t65074 - 1.*t64572*t65078) + 12.*t64465*(t64327*t65068 + t64562*t65078 + t65086 + t65090))*var2[4] - 0.5*(12.*t64257*(t64327*t64985 + t64562*t65002) + 12.*t64671*(-1.*t64536*t64985 - 1.*t64572*t65002) + 12.*t64465*(t65086 + t65090 + t64327*t65128 + t64562*t65133) + 12.*t64257*(t65044 + t65074 - 1.*t64536*t65128 - 1.*t64572*t65133))*var2[5]);
  p_output1[3]=var2[4]*(-0.5*(-3.944*(t15551*t64885 + t4189*t64901 + t65046) + 12.*t64257*(t64520*t65049 + t64275*t65063 + t65153 + t65154 + t65159) + 12.*t64465*(-1.*t64275*t65049 - 1.*t64268*t65063 + t65164 + t65165 + t65168))*var2[4] - 0.5*(12.*t64257*(0.15*t64520 - 1.*t64268*t64970 - 1.*t64275*t64982) + 12.*t64257*(t64520*t65121 + t64275*t65125 + t65153 + t65154 + t65159) + 12.*t64671*(t64275*t64970 + t64520*t64982 + t65165) + 12.*t64465*(-1.*t64275*t65121 - 1.*t64268*t65125 + t65164 + t65165 + t65168))*var2[5]);
  p_output1[4]=-0.5*(24.*t64257*t64465 + 24.*t64257*t64671)*var2[4]*var2[5];
  p_output1[5]=1.44*t64257*var2[4]*var2[5];
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

#include "Ce1_vec5_acrobot.hh"

namespace SymFunction
{

void Ce1_vec5_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
