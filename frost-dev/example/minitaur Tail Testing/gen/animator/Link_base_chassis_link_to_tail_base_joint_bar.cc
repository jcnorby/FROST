/*
 * Automatically Generated from Mathematica.
 * Mon 6 Aug 2018 16:06:35 GMT-04:00
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
  double t54982;
  double t106473;
  double t107787;
  double t106988;
  double t107894;
  double t107904;
  double t108675;
  double t108669;
  double t108673;
  double t108674;
  double t108731;
  double t108733;
  double t108742;
  double t108744;
  double t108745;
  double t108741;
  double t108746;
  double t108747;
  double t108935;
  double t108936;
  double t108937;
  double t108939;
  double t108940;
  double t108941;
  double t108938;
  double t108942;
  double t108952;
  double t107914;
  double t109241;
  double t107961;
  double t107994;
  double t108324;
  double t108341;
  double t108344;
  double t108356;
  double t108359;
  double t108365;
  double t108368;
  double t108377;
  double t108395;
  double t108408;
  double t108462;
  double t108500;
  double t108503;
  double t108523;
  double t108536;
  double t108562;
  double t108566;
  double t108587;
  double t108605;
  double t108611;
  double t108614;
  double t108621;
  double t108624;
  double t108626;
  double t108627;
  double t108646;
  double t108647;
  double t108649;
  double t108650;
  double t108652;
  double t108660;
  double t108665;
  double t108666;
  double t109242;
  double t109333;
  double t108748;
  double t108749;
  double t108751;
  double t108752;
  double t108755;
  double t108759;
  double t108762;
  double t108763;
  double t108765;
  double t108766;
  double t108768;
  double t108769;
  double t108772;
  double t108773;
  double t108776;
  double t108777;
  double t108782;
  double t108785;
  double t108791;
  double t108792;
  double t108803;
  double t108814;
  double t108818;
  double t108824;
  double t108855;
  double t108856;
  double t108909;
  double t108910;
  double t108912;
  double t108914;
  double t108916;
  double t108917;
  double t108919;
  double t108920;
  double t108932;
  double t108933;
  double t109356;
  double t109529;
  double t108955;
  double t108956;
  double t108959;
  double t108960;
  double t108962;
  double t108963;
  double t108965;
  double t108966;
  double t108968;
  double t109001;
  double t109003;
  double t109007;
  double t109014;
  double t109016;
  double t109020;
  double t109021;
  double t109023;
  double t109025;
  double t109027;
  double t109028;
  double t109032;
  double t109033;
  double t109038;
  double t109039;
  double t109048;
  double t109053;
  double t109056;
  double t109057;
  double t109059;
  double t109060;
  double t109062;
  double t109072;
  double t109075;
  double t109235;
  double t109238;
  double t109239;
  double t109531;
  t54982 = Cos(var1[4]);
  t106473 = Cos(var1[5]);
  t107787 = Sin(var1[5]);
  t106988 = -0.009609*t54982*t106473;
  t107894 = 0.011518*t54982*t107787;
  t107904 = var1[0] + t106988 + t107894;
  t108675 = Cos(var1[3]);
  t108669 = Sin(var1[3]);
  t108673 = Sin(var1[4]);
  t108674 = t106473*t108669*t108673;
  t108731 = t108675*t107787;
  t108733 = t108674 + t108731;
  t108742 = t108675*t106473;
  t108744 = -1.*t108669*t108673*t107787;
  t108745 = t108742 + t108744;
  t108741 = -0.009609*t108733;
  t108746 = -0.011518*t108745;
  t108747 = var1[1] + t108741 + t108746;
  t108935 = -1.*t108675*t106473*t108673;
  t108936 = t108669*t107787;
  t108937 = t108935 + t108936;
  t108939 = t106473*t108669;
  t108940 = t108675*t108673*t107787;
  t108941 = t108939 + t108940;
  t108938 = -0.009609*t108937;
  t108942 = -0.011518*t108941;
  t108952 = var1[2] + t108938 + t108942;
  t107914 = -0.005348*t54982*t106473;
  t109241 = 0.1*t108673;
  t107961 = 0.014014*t54982*t107787;
  t107994 = -0.000508*t54982*t106473;
  t108324 = 0.014991*t54982*t107787;
  t108341 = 0.004387*t54982*t106473;
  t108344 = 0.014344*t54982*t107787;
  t108356 = 0.008807*t54982*t106473;
  t108359 = 0.012142*t54982*t107787;
  t108365 = 0.012272*t54982*t106473;
  t108368 = 0.008625*t54982*t107787;
  t108377 = 0.014408*t54982*t106473;
  t108395 = 0.004173*t54982*t107787;
  t108408 = 0.014982*t54982*t106473;
  t108462 = -0.000732*t54982*t107787;
  t108500 = 0.013933*t54982*t106473;
  t108503 = -0.005557*t54982*t107787;
  t108523 = 0.011374*t54982*t106473;
  t108536 = -0.00978*t54982*t107787;
  t108562 = 0.007582*t54982*t106473;
  t108566 = -0.012943*t54982*t107787;
  t108587 = 0.002969*t54982*t106473;
  t108605 = -0.014703*t54982*t107787;
  t108611 = -0.001966*t54982*t106473;
  t108614 = -0.014871*t54982*t107787;
  t108621 = -0.006688*t54982*t106473;
  t108624 = -0.013426*t54982*t107787;
  t108626 = -0.010685*t54982*t106473;
  t108627 = -0.010527*t54982*t107787;
  t108646 = -0.013525*t54982*t106473;
  t108647 = -0.006487*t54982*t107787;
  t108649 = -0.014898*t54982*t106473;
  t108650 = -0.001744*t54982*t107787;
  t108652 = -0.014657*t54982*t106473;
  t108660 = 0.003188*t54982*t107787;
  t108665 = -0.012828*t54982*t106473;
  t108666 = 0.007774*t54982*t107787;
  t109242 = var1[0] + t106988 + t109241 + t107894;
  t109333 = -0.1*t54982*t108669;
  t108748 = -0.005348*t108733;
  t108749 = -0.014014*t108745;
  t108751 = -0.000508*t108733;
  t108752 = -0.014991*t108745;
  t108755 = 0.004387*t108733;
  t108759 = -0.014344*t108745;
  t108762 = 0.008807*t108733;
  t108763 = -0.012142*t108745;
  t108765 = 0.012272*t108733;
  t108766 = -0.008625*t108745;
  t108768 = 0.014408*t108733;
  t108769 = -0.004173*t108745;
  t108772 = 0.014982*t108733;
  t108773 = 0.000732*t108745;
  t108776 = 0.013933*t108733;
  t108777 = 0.005557*t108745;
  t108782 = 0.011374*t108733;
  t108785 = 0.00978*t108745;
  t108791 = 0.007582*t108733;
  t108792 = 0.012943*t108745;
  t108803 = 0.002969*t108733;
  t108814 = 0.014703*t108745;
  t108818 = -0.001966*t108733;
  t108824 = 0.014871*t108745;
  t108855 = -0.006688*t108733;
  t108856 = 0.013426*t108745;
  t108909 = -0.010685*t108733;
  t108910 = 0.010527*t108745;
  t108912 = -0.013525*t108733;
  t108914 = 0.006487*t108745;
  t108916 = -0.014898*t108733;
  t108917 = 0.001744*t108745;
  t108919 = -0.014657*t108733;
  t108920 = -0.003188*t108745;
  t108932 = -0.012828*t108733;
  t108933 = -0.007774*t108745;
  t109356 = var1[1] + t109333 + t108741 + t108746;
  t109529 = 0.1*t108675*t54982;
  t108955 = -0.005348*t108937;
  t108956 = -0.014014*t108941;
  t108959 = -0.000508*t108937;
  t108960 = -0.014991*t108941;
  t108962 = 0.004387*t108937;
  t108963 = -0.014344*t108941;
  t108965 = 0.008807*t108937;
  t108966 = -0.012142*t108941;
  t108968 = 0.012272*t108937;
  t109001 = -0.008625*t108941;
  t109003 = 0.014408*t108937;
  t109007 = -0.004173*t108941;
  t109014 = 0.014982*t108937;
  t109016 = 0.000732*t108941;
  t109020 = 0.013933*t108937;
  t109021 = 0.005557*t108941;
  t109023 = 0.011374*t108937;
  t109025 = 0.00978*t108941;
  t109027 = 0.007582*t108937;
  t109028 = 0.012943*t108941;
  t109032 = 0.002969*t108937;
  t109033 = 0.014703*t108941;
  t109038 = -0.001966*t108937;
  t109039 = 0.014871*t108941;
  t109048 = -0.006688*t108937;
  t109053 = 0.013426*t108941;
  t109056 = -0.010685*t108937;
  t109057 = 0.010527*t108941;
  t109059 = -0.013525*t108937;
  t109060 = 0.006487*t108941;
  t109062 = -0.014898*t108937;
  t109072 = 0.001744*t108941;
  t109075 = -0.014657*t108937;
  t109235 = -0.003188*t108941;
  t109238 = -0.012828*t108937;
  t109239 = -0.007774*t108941;
  t109531 = var1[2] + t109529 + t108938 + t108942;
  p_output1[0]=t107904;
  p_output1[1]=t107914 + t107961 + var1[0];
  p_output1[2]=t107994 + t108324 + var1[0];
  p_output1[3]=t108341 + t108344 + var1[0];
  p_output1[4]=t108356 + t108359 + var1[0];
  p_output1[5]=t108365 + t108368 + var1[0];
  p_output1[6]=t108377 + t108395 + var1[0];
  p_output1[7]=t108408 + t108462 + var1[0];
  p_output1[8]=t108500 + t108503 + var1[0];
  p_output1[9]=t108523 + t108536 + var1[0];
  p_output1[10]=t108562 + t108566 + var1[0];
  p_output1[11]=t108587 + t108605 + var1[0];
  p_output1[12]=t108611 + t108614 + var1[0];
  p_output1[13]=t108621 + t108624 + var1[0];
  p_output1[14]=t108626 + t108627 + var1[0];
  p_output1[15]=t108646 + t108647 + var1[0];
  p_output1[16]=t108649 + t108650 + var1[0];
  p_output1[17]=t108652 + t108660 + var1[0];
  p_output1[18]=t108665 + t108666 + var1[0];
  p_output1[19]=t107904;
  p_output1[20]=t108747;
  p_output1[21]=t108748 + t108749 + var1[1];
  p_output1[22]=t108751 + t108752 + var1[1];
  p_output1[23]=t108755 + t108759 + var1[1];
  p_output1[24]=t108762 + t108763 + var1[1];
  p_output1[25]=t108765 + t108766 + var1[1];
  p_output1[26]=t108768 + t108769 + var1[1];
  p_output1[27]=t108772 + t108773 + var1[1];
  p_output1[28]=t108776 + t108777 + var1[1];
  p_output1[29]=t108782 + t108785 + var1[1];
  p_output1[30]=t108791 + t108792 + var1[1];
  p_output1[31]=t108803 + t108814 + var1[1];
  p_output1[32]=t108818 + t108824 + var1[1];
  p_output1[33]=t108855 + t108856 + var1[1];
  p_output1[34]=t108909 + t108910 + var1[1];
  p_output1[35]=t108912 + t108914 + var1[1];
  p_output1[36]=t108916 + t108917 + var1[1];
  p_output1[37]=t108919 + t108920 + var1[1];
  p_output1[38]=t108932 + t108933 + var1[1];
  p_output1[39]=t108747;
  p_output1[40]=t108952;
  p_output1[41]=t108955 + t108956 + var1[2];
  p_output1[42]=t108959 + t108960 + var1[2];
  p_output1[43]=t108962 + t108963 + var1[2];
  p_output1[44]=t108965 + t108966 + var1[2];
  p_output1[45]=t108968 + t109001 + var1[2];
  p_output1[46]=t109003 + t109007 + var1[2];
  p_output1[47]=t109014 + t109016 + var1[2];
  p_output1[48]=t109020 + t109021 + var1[2];
  p_output1[49]=t109023 + t109025 + var1[2];
  p_output1[50]=t109027 + t109028 + var1[2];
  p_output1[51]=t109032 + t109033 + var1[2];
  p_output1[52]=t109038 + t109039 + var1[2];
  p_output1[53]=t109048 + t109053 + var1[2];
  p_output1[54]=t109056 + t109057 + var1[2];
  p_output1[55]=t109059 + t109060 + var1[2];
  p_output1[56]=t109062 + t109072 + var1[2];
  p_output1[57]=t109075 + t109235 + var1[2];
  p_output1[58]=t109238 + t109239 + var1[2];
  p_output1[59]=t108952;
  p_output1[60]=t109242;
  p_output1[61]=t107914 + t107961 + t109241 + var1[0];
  p_output1[62]=t107994 + t108324 + t109241 + var1[0];
  p_output1[63]=t108341 + t108344 + t109241 + var1[0];
  p_output1[64]=t108356 + t108359 + t109241 + var1[0];
  p_output1[65]=t108365 + t108368 + t109241 + var1[0];
  p_output1[66]=t108377 + t108395 + t109241 + var1[0];
  p_output1[67]=t108408 + t108462 + t109241 + var1[0];
  p_output1[68]=t108500 + t108503 + t109241 + var1[0];
  p_output1[69]=t108523 + t108536 + t109241 + var1[0];
  p_output1[70]=t108562 + t108566 + t109241 + var1[0];
  p_output1[71]=t108587 + t108605 + t109241 + var1[0];
  p_output1[72]=t108611 + t108614 + t109241 + var1[0];
  p_output1[73]=t108621 + t108624 + t109241 + var1[0];
  p_output1[74]=t108626 + t108627 + t109241 + var1[0];
  p_output1[75]=t108646 + t108647 + t109241 + var1[0];
  p_output1[76]=t108649 + t108650 + t109241 + var1[0];
  p_output1[77]=t108652 + t108660 + t109241 + var1[0];
  p_output1[78]=t108665 + t108666 + t109241 + var1[0];
  p_output1[79]=t109242;
  p_output1[80]=t109356;
  p_output1[81]=t108748 + t108749 + t109333 + var1[1];
  p_output1[82]=t108751 + t108752 + t109333 + var1[1];
  p_output1[83]=t108755 + t108759 + t109333 + var1[1];
  p_output1[84]=t108762 + t108763 + t109333 + var1[1];
  p_output1[85]=t108765 + t108766 + t109333 + var1[1];
  p_output1[86]=t108768 + t108769 + t109333 + var1[1];
  p_output1[87]=t108772 + t108773 + t109333 + var1[1];
  p_output1[88]=t108776 + t108777 + t109333 + var1[1];
  p_output1[89]=t108782 + t108785 + t109333 + var1[1];
  p_output1[90]=t108791 + t108792 + t109333 + var1[1];
  p_output1[91]=t108803 + t108814 + t109333 + var1[1];
  p_output1[92]=t108818 + t108824 + t109333 + var1[1];
  p_output1[93]=t108855 + t108856 + t109333 + var1[1];
  p_output1[94]=t108909 + t108910 + t109333 + var1[1];
  p_output1[95]=t108912 + t108914 + t109333 + var1[1];
  p_output1[96]=t108916 + t108917 + t109333 + var1[1];
  p_output1[97]=t108919 + t108920 + t109333 + var1[1];
  p_output1[98]=t108932 + t108933 + t109333 + var1[1];
  p_output1[99]=t109356;
  p_output1[100]=t109531;
  p_output1[101]=t108955 + t108956 + t109529 + var1[2];
  p_output1[102]=t108959 + t108960 + t109529 + var1[2];
  p_output1[103]=t108962 + t108963 + t109529 + var1[2];
  p_output1[104]=t108965 + t108966 + t109529 + var1[2];
  p_output1[105]=t108968 + t109001 + t109529 + var1[2];
  p_output1[106]=t109003 + t109007 + t109529 + var1[2];
  p_output1[107]=t109014 + t109016 + t109529 + var1[2];
  p_output1[108]=t109020 + t109021 + t109529 + var1[2];
  p_output1[109]=t109023 + t109025 + t109529 + var1[2];
  p_output1[110]=t109027 + t109028 + t109529 + var1[2];
  p_output1[111]=t109032 + t109033 + t109529 + var1[2];
  p_output1[112]=t109038 + t109039 + t109529 + var1[2];
  p_output1[113]=t109048 + t109053 + t109529 + var1[2];
  p_output1[114]=t109056 + t109057 + t109529 + var1[2];
  p_output1[115]=t109059 + t109060 + t109529 + var1[2];
  p_output1[116]=t109062 + t109072 + t109529 + var1[2];
  p_output1[117]=t109075 + t109235 + t109529 + var1[2];
  p_output1[118]=t109238 + t109239 + t109529 + var1[2];
  p_output1[119]=t109531;
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
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

#include "Link_base_chassis_link_to_tail_base_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_tail_base_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
