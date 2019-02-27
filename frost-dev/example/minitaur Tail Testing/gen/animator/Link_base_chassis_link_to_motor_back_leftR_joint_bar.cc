/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:01 GMT-04:00
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
  double t450;
  double t452;
  double t557;
  double t1783;
  double t460;
  double t867;
  double t1829;
  double t1850;
  double t3363;
  double t3390;
  double t3385;
  double t3395;
  double t3404;
  double t3532;
  double t3536;
  double t3543;
  double t3368;
  double t3418;
  double t3552;
  double t3635;
  double t6829;
  double t6831;
  double t6833;
  double t6908;
  double t6911;
  double t6920;
  double t6825;
  double t6870;
  double t6928;
  double t6947;
  double t1914;
  double t2195;
  double t2288;
  double t2314;
  double t2335;
  double t2347;
  double t2399;
  double t2452;
  double t2475;
  double t2521;
  double t2801;
  double t2882;
  double t2927;
  double t2938;
  double t2947;
  double t2960;
  double t3103;
  double t3271;
  double t7506;
  double t7507;
  double t7511;
  double t3639;
  double t3701;
  double t3797;
  double t3926;
  double t3954;
  double t4018;
  double t4049;
  double t4061;
  double t4082;
  double t4112;
  double t4798;
  double t5073;
  double t5167;
  double t5247;
  double t5627;
  double t5777;
  double t6132;
  double t6647;
  double t7643;
  double t7644;
  double t7646;
  double t6948;
  double t7065;
  double t7091;
  double t7108;
  double t7169;
  double t7195;
  double t7230;
  double t7240;
  double t7255;
  double t7360;
  double t7386;
  double t7412;
  double t7438;
  double t7455;
  double t7461;
  double t7477;
  double t7483;
  double t7494;
  double t7773;
  double t7775;
  double t7777;
  t450 = Cos(var1[4]);
  t452 = Cos(var1[5]);
  t557 = Sin(var1[4]);
  t1783 = Sin(var1[5]);
  t460 = 0.006643*t450*t452;
  t867 = 0.006979*t557;
  t1829 = -0.011497*t450*t1783;
  t1850 = var1[0] + t460 + t867 + t1829;
  t3363 = Sin(var1[3]);
  t3390 = Cos(var1[3]);
  t3385 = t452*t3363*t557;
  t3395 = t3390*t1783;
  t3404 = t3385 + t3395;
  t3532 = t3390*t452;
  t3536 = -1.*t3363*t557*t1783;
  t3543 = t3532 + t3536;
  t3368 = -0.006979*t450*t3363;
  t3418 = 0.006643*t3404;
  t3552 = 0.011497*t3543;
  t3635 = var1[1] + t3368 + t3418 + t3552;
  t6829 = -1.*t3390*t452*t557;
  t6831 = t3363*t1783;
  t6833 = t6829 + t6831;
  t6908 = t452*t3363;
  t6911 = t3390*t557*t1783;
  t6920 = t6908 + t6911;
  t6825 = 0.006979*t3390*t450;
  t6870 = 0.006643*t6833;
  t6928 = 0.011497*t6920;
  t6947 = var1[2] + t6825 + t6870 + t6928;
  t1914 = 0.002289*t557;
  t2195 = -0.002648*t557;
  t2288 = -0.007299*t557;
  t2314 = -0.011158*t557;
  t2335 = -0.013809*t557;
  t2347 = -0.014963*t557;
  t2399 = -0.014495*t557;
  t2452 = -0.012457*t557;
  t2475 = -0.009069*t557;
  t2521 = -0.004698*t557;
  t2801 = 0.000182*t557;
  t2882 = 0.005042*t557;
  t2927 = 0.009356*t557;
  t2938 = 0.012656*t557;
  t2947 = 0.014585*t557;
  t2960 = 0.014933*t557;
  t3103 = 0.013662*t557;
  t3271 = 0.010912*t557;
  t7506 = -0.218357*t450*t452;
  t7507 = -0.141497*t450*t1783;
  t7511 = var1[0] + t7506 + t867 + t7507;
  t3639 = -0.002289*t450*t3363;
  t3701 = 0.002648*t450*t3363;
  t3797 = 0.007299*t450*t3363;
  t3926 = 0.011158*t450*t3363;
  t3954 = 0.013809*t450*t3363;
  t4018 = 0.014963*t450*t3363;
  t4049 = 0.014495*t450*t3363;
  t4061 = 0.012457*t450*t3363;
  t4082 = 0.009069*t450*t3363;
  t4112 = 0.004698*t450*t3363;
  t4798 = -0.000182*t450*t3363;
  t5073 = -0.005042*t450*t3363;
  t5167 = -0.009356*t450*t3363;
  t5247 = -0.012656*t450*t3363;
  t5627 = -0.014585*t450*t3363;
  t5777 = -0.014933*t450*t3363;
  t6132 = -0.013662*t450*t3363;
  t6647 = -0.010912*t450*t3363;
  t7643 = -0.218357*t3404;
  t7644 = 0.141497*t3543;
  t7646 = var1[1] + t3368 + t7643 + t7644;
  t6948 = 0.002289*t3390*t450;
  t7065 = -0.002648*t3390*t450;
  t7091 = -0.007299*t3390*t450;
  t7108 = -0.011158*t3390*t450;
  t7169 = -0.013809*t3390*t450;
  t7195 = -0.014963*t3390*t450;
  t7230 = -0.014495*t3390*t450;
  t7240 = -0.012457*t3390*t450;
  t7255 = -0.009069*t3390*t450;
  t7360 = -0.004698*t3390*t450;
  t7386 = 0.000182*t3390*t450;
  t7412 = 0.005042*t3390*t450;
  t7438 = 0.009356*t3390*t450;
  t7455 = 0.012656*t3390*t450;
  t7461 = 0.014585*t3390*t450;
  t7477 = 0.014933*t3390*t450;
  t7483 = 0.013662*t3390*t450;
  t7494 = 0.010912*t3390*t450;
  t7773 = -0.218357*t6833;
  t7775 = 0.141497*t6920;
  t7777 = var1[2] + t6825 + t7773 + t7775;
  p_output1[0]=t1850;
  p_output1[1]=t1914 - 0.012836*t1783*t450 + 0.007416*t450*t452 + var1[0];
  p_output1[2]=t2195 - 0.012784*t1783*t450 + 0.007386*t450*t452 + var1[0];
  p_output1[3]=t2288 - 0.011347*t1783*t450 + 0.006556*t450*t452 + var1[0];
  p_output1[4]=t2314 - 0.00868*t1783*t450 + 0.005015*t450*t452 + var1[0];
  p_output1[5]=t2335 - 0.005072*t1783*t450 + 0.002931*t450*t452 + var1[0];
  p_output1[6]=t2347 - 0.000915*t1783*t450 + 0.000529*t450*t452 + var1[0];
  p_output1[7]=t2399 + 0.003341*t1783*t450 - 0.00193*t450*t452 + var1[0];
  p_output1[8]=t2452 + 0.007235*t1783*t450 - 0.00418*t450*t452 + var1[0];
  p_output1[9]=t2475 + 0.010345*t1783*t450 - 0.005977*t450*t452 + var1[0];
  p_output1[10]=t2521 + 0.012335*t1783*t450 - 0.007127*t450*t452 + var1[0];
  p_output1[11]=t2801 + 0.012987*t1783*t450 - 0.007504*t450*t452 + var1[0];
  p_output1[12]=t2882 + 0.012232*t1783*t450 - 0.007067*t450*t452 + var1[0];
  p_output1[13]=t2927 + 0.010152*t1783*t450 - 0.005865*t450*t452 + var1[0];
  p_output1[14]=t2938 + 0.006971*t1783*t450 - 0.004028*t450*t452 + var1[0];
  p_output1[15]=t2947 + 0.003035*t1783*t450 - 0.001754*t450*t452 + var1[0];
  p_output1[16]=t2960 - 0.00123*t1783*t450 + 0.00071*t450*t452 + var1[0];
  p_output1[17]=t3103 - 0.005361*t1783*t450 + 0.003098*t450*t452 + var1[0];
  p_output1[18]=t3271 - 0.008912*t1783*t450 + 0.005149*t450*t452 + var1[0];
  p_output1[19]=t1850;
  p_output1[20]=t3635;
  p_output1[21]=0.007416*t3404 + 0.012836*t3543 + t3639 + var1[1];
  p_output1[22]=0.007386*t3404 + 0.012784*t3543 + t3701 + var1[1];
  p_output1[23]=0.006556*t3404 + 0.011347*t3543 + t3797 + var1[1];
  p_output1[24]=0.005015*t3404 + 0.00868*t3543 + t3926 + var1[1];
  p_output1[25]=0.002931*t3404 + 0.005072*t3543 + t3954 + var1[1];
  p_output1[26]=0.000529*t3404 + 0.000915*t3543 + t4018 + var1[1];
  p_output1[27]=-0.00193*t3404 - 0.003341*t3543 + t4049 + var1[1];
  p_output1[28]=-0.00418*t3404 - 0.007235*t3543 + t4061 + var1[1];
  p_output1[29]=-0.005977*t3404 - 0.010345*t3543 + t4082 + var1[1];
  p_output1[30]=-0.007127*t3404 - 0.012335*t3543 + t4112 + var1[1];
  p_output1[31]=-0.007504*t3404 - 0.012987*t3543 + t4798 + var1[1];
  p_output1[32]=-0.007067*t3404 - 0.012232*t3543 + t5073 + var1[1];
  p_output1[33]=-0.005865*t3404 - 0.010152*t3543 + t5167 + var1[1];
  p_output1[34]=-0.004028*t3404 - 0.006971*t3543 + t5247 + var1[1];
  p_output1[35]=-0.001754*t3404 - 0.003035*t3543 + t5627 + var1[1];
  p_output1[36]=0.00071*t3404 + 0.00123*t3543 + t5777 + var1[1];
  p_output1[37]=0.003098*t3404 + 0.005361*t3543 + t6132 + var1[1];
  p_output1[38]=0.005149*t3404 + 0.008912*t3543 + t6647 + var1[1];
  p_output1[39]=t3635;
  p_output1[40]=t6947;
  p_output1[41]=0.007416*t6833 + 0.012836*t6920 + t6948 + var1[2];
  p_output1[42]=0.007386*t6833 + 0.012784*t6920 + t7065 + var1[2];
  p_output1[43]=0.006556*t6833 + 0.011347*t6920 + t7091 + var1[2];
  p_output1[44]=0.005015*t6833 + 0.00868*t6920 + t7108 + var1[2];
  p_output1[45]=0.002931*t6833 + 0.005072*t6920 + t7169 + var1[2];
  p_output1[46]=0.000529*t6833 + 0.000915*t6920 + t7195 + var1[2];
  p_output1[47]=-0.00193*t6833 - 0.003341*t6920 + t7230 + var1[2];
  p_output1[48]=-0.00418*t6833 - 0.007235*t6920 + t7240 + var1[2];
  p_output1[49]=-0.005977*t6833 - 0.010345*t6920 + t7255 + var1[2];
  p_output1[50]=-0.007127*t6833 - 0.012335*t6920 + t7360 + var1[2];
  p_output1[51]=-0.007504*t6833 - 0.012987*t6920 + t7386 + var1[2];
  p_output1[52]=-0.007067*t6833 - 0.012232*t6920 + t7412 + var1[2];
  p_output1[53]=-0.005865*t6833 - 0.010152*t6920 + t7438 + var1[2];
  p_output1[54]=-0.004028*t6833 - 0.006971*t6920 + t7455 + var1[2];
  p_output1[55]=-0.001754*t6833 - 0.003035*t6920 + t7461 + var1[2];
  p_output1[56]=0.00071*t6833 + 0.00123*t6920 + t7477 + var1[2];
  p_output1[57]=0.003098*t6833 + 0.005361*t6920 + t7483 + var1[2];
  p_output1[58]=0.005149*t6833 + 0.008912*t6920 + t7494 + var1[2];
  p_output1[59]=t6947;
  p_output1[60]=t7511;
  p_output1[61]=t1914 - 0.142836*t1783*t450 - 0.217584*t450*t452 + var1[0];
  p_output1[62]=t2195 - 0.142784*t1783*t450 - 0.217614*t450*t452 + var1[0];
  p_output1[63]=t2288 - 0.141347*t1783*t450 - 0.218444*t450*t452 + var1[0];
  p_output1[64]=t2314 - 0.13868*t1783*t450 - 0.219985*t450*t452 + var1[0];
  p_output1[65]=t2335 - 0.135072*t1783*t450 - 0.222069*t450*t452 + var1[0];
  p_output1[66]=t2347 - 0.130915*t1783*t450 - 0.224471*t450*t452 + var1[0];
  p_output1[67]=t2399 - 0.126659*t1783*t450 - 0.22693*t450*t452 + var1[0];
  p_output1[68]=t2452 - 0.122765*t1783*t450 - 0.22918*t450*t452 + var1[0];
  p_output1[69]=t2475 - 0.119655*t1783*t450 - 0.230977*t450*t452 + var1[0];
  p_output1[70]=t2521 - 0.117665*t1783*t450 - 0.232127*t450*t452 + var1[0];
  p_output1[71]=t2801 - 0.117013*t1783*t450 - 0.232504*t450*t452 + var1[0];
  p_output1[72]=t2882 - 0.117768*t1783*t450 - 0.232067*t450*t452 + var1[0];
  p_output1[73]=t2927 - 0.119848*t1783*t450 - 0.230865*t450*t452 + var1[0];
  p_output1[74]=t2938 - 0.123029*t1783*t450 - 0.229028*t450*t452 + var1[0];
  p_output1[75]=t2947 - 0.126965*t1783*t450 - 0.226754*t450*t452 + var1[0];
  p_output1[76]=t2960 - 0.13123*t1783*t450 - 0.22429*t450*t452 + var1[0];
  p_output1[77]=t3103 - 0.135361*t1783*t450 - 0.221902*t450*t452 + var1[0];
  p_output1[78]=t3271 - 0.138912*t1783*t450 - 0.219851*t450*t452 + var1[0];
  p_output1[79]=t7511;
  p_output1[80]=t7646;
  p_output1[81]=-0.217584*t3404 + 0.142836*t3543 + t3639 + var1[1];
  p_output1[82]=-0.217614*t3404 + 0.142784*t3543 + t3701 + var1[1];
  p_output1[83]=-0.218444*t3404 + 0.141347*t3543 + t3797 + var1[1];
  p_output1[84]=-0.219985*t3404 + 0.13868*t3543 + t3926 + var1[1];
  p_output1[85]=-0.222069*t3404 + 0.135072*t3543 + t3954 + var1[1];
  p_output1[86]=-0.224471*t3404 + 0.130915*t3543 + t4018 + var1[1];
  p_output1[87]=-0.22693*t3404 + 0.126659*t3543 + t4049 + var1[1];
  p_output1[88]=-0.22918*t3404 + 0.122765*t3543 + t4061 + var1[1];
  p_output1[89]=-0.230977*t3404 + 0.119655*t3543 + t4082 + var1[1];
  p_output1[90]=-0.232127*t3404 + 0.117665*t3543 + t4112 + var1[1];
  p_output1[91]=-0.232504*t3404 + 0.117013*t3543 + t4798 + var1[1];
  p_output1[92]=-0.232067*t3404 + 0.117768*t3543 + t5073 + var1[1];
  p_output1[93]=-0.230865*t3404 + 0.119848*t3543 + t5167 + var1[1];
  p_output1[94]=-0.229028*t3404 + 0.123029*t3543 + t5247 + var1[1];
  p_output1[95]=-0.226754*t3404 + 0.126965*t3543 + t5627 + var1[1];
  p_output1[96]=-0.22429*t3404 + 0.13123*t3543 + t5777 + var1[1];
  p_output1[97]=-0.221902*t3404 + 0.135361*t3543 + t6132 + var1[1];
  p_output1[98]=-0.219851*t3404 + 0.138912*t3543 + t6647 + var1[1];
  p_output1[99]=t7646;
  p_output1[100]=t7777;
  p_output1[101]=-0.217584*t6833 + 0.142836*t6920 + t6948 + var1[2];
  p_output1[102]=-0.217614*t6833 + 0.142784*t6920 + t7065 + var1[2];
  p_output1[103]=-0.218444*t6833 + 0.141347*t6920 + t7091 + var1[2];
  p_output1[104]=-0.219985*t6833 + 0.13868*t6920 + t7108 + var1[2];
  p_output1[105]=-0.222069*t6833 + 0.135072*t6920 + t7169 + var1[2];
  p_output1[106]=-0.224471*t6833 + 0.130915*t6920 + t7195 + var1[2];
  p_output1[107]=-0.22693*t6833 + 0.126659*t6920 + t7230 + var1[2];
  p_output1[108]=-0.22918*t6833 + 0.122765*t6920 + t7240 + var1[2];
  p_output1[109]=-0.230977*t6833 + 0.119655*t6920 + t7255 + var1[2];
  p_output1[110]=-0.232127*t6833 + 0.117665*t6920 + t7360 + var1[2];
  p_output1[111]=-0.232504*t6833 + 0.117013*t6920 + t7386 + var1[2];
  p_output1[112]=-0.232067*t6833 + 0.117768*t6920 + t7412 + var1[2];
  p_output1[113]=-0.230865*t6833 + 0.119848*t6920 + t7438 + var1[2];
  p_output1[114]=-0.229028*t6833 + 0.123029*t6920 + t7455 + var1[2];
  p_output1[115]=-0.226754*t6833 + 0.126965*t6920 + t7461 + var1[2];
  p_output1[116]=-0.22429*t6833 + 0.13123*t6920 + t7477 + var1[2];
  p_output1[117]=-0.221902*t6833 + 0.135361*t6920 + t7483 + var1[2];
  p_output1[118]=-0.219851*t6833 + 0.138912*t6920 + t7494 + var1[2];
  p_output1[119]=t7777;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_base_chassis_link_to_motor_back_leftR_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_motor_back_leftR_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
