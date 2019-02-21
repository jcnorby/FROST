/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:13 GMT-04:00
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
  double t431;
  double t1623;
  double t3524;
  double t5035;
  double t2842;
  double t5011;
  double t5377;
  double t5441;
  double t8120;
  double t8127;
  double t8125;
  double t8129;
  double t8130;
  double t8135;
  double t8136;
  double t8139;
  double t8121;
  double t8132;
  double t8141;
  double t8142;
  double t8352;
  double t8355;
  double t8356;
  double t8361;
  double t8362;
  double t8364;
  double t8351;
  double t8358;
  double t8367;
  double t8369;
  double t5679;
  double t6468;
  double t7243;
  double t7686;
  double t7836;
  double t7898;
  double t7967;
  double t7987;
  double t8001;
  double t8022;
  double t8030;
  double t8043;
  double t8049;
  double t8055;
  double t8096;
  double t8102;
  double t8110;
  double t8116;
  double t8490;
  double t8491;
  double t8493;
  double t8144;
  double t8149;
  double t8156;
  double t8172;
  double t8195;
  double t8202;
  double t8226;
  double t8239;
  double t8247;
  double t8253;
  double t8264;
  double t8274;
  double t8279;
  double t8300;
  double t8317;
  double t8327;
  double t8335;
  double t8344;
  double t8633;
  double t8634;
  double t8639;
  double t8373;
  double t8379;
  double t8385;
  double t8395;
  double t8399;
  double t8404;
  double t8409;
  double t8413;
  double t8417;
  double t8422;
  double t8427;
  double t8436;
  double t8442;
  double t8451;
  double t8466;
  double t8470;
  double t8477;
  double t8482;
  double t8752;
  double t8753;
  double t8755;
  t431 = Cos(var1[4]);
  t1623 = Cos(var1[5]);
  t3524 = Sin(var1[4]);
  t5035 = Sin(var1[5]);
  t2842 = -0.007456*t431*t1623;
  t5011 = -0.001698*t3524;
  t5377 = 0.012904*t431*t5035;
  t5441 = var1[0] + t2842 + t5011 + t5377;
  t8120 = Sin(var1[3]);
  t8127 = Cos(var1[3]);
  t8125 = t1623*t8120*t3524;
  t8129 = t8127*t5035;
  t8130 = t8125 + t8129;
  t8135 = t8127*t1623;
  t8136 = -1.*t8120*t3524*t5035;
  t8139 = t8135 + t8136;
  t8121 = 0.001698*t431*t8120;
  t8132 = -0.007456*t8130;
  t8141 = -0.012904*t8139;
  t8142 = var1[1] + t8121 + t8132 + t8141;
  t8352 = -1.*t8127*t1623*t3524;
  t8355 = t8120*t5035;
  t8356 = t8352 + t8355;
  t8361 = t1623*t8120;
  t8362 = t8127*t3524*t5035;
  t8364 = t8361 + t8362;
  t8351 = -0.001698*t8127*t431;
  t8358 = -0.007456*t8356;
  t8367 = -0.012904*t8364;
  t8369 = var1[2] + t8351 + t8358 + t8367;
  t5679 = -0.006445*t3524;
  t6468 = -0.010494*t3524;
  t7243 = -0.013406*t3524;
  t7686 = -0.014864*t3524;
  t7836 = -0.014712*t3524;
  t7898 = -0.012966*t3524;
  t7967 = -0.009815*t3524;
  t7987 = -0.0056*t3524;
  t8001 = -0.000778*t3524;
  t8022 = 0.004128*t3524;
  t8030 = 0.008587*t3524;
  t8043 = 0.012115*t3524;
  t8049 = 0.01433*t3524;
  t8055 = 0.014993*t3524;
  t8096 = 0.014031*t3524;
  t8102 = 0.011548*t3524;
  t8110 = 0.007814*t3524;
  t8116 = 0.003233*t3524;
  t8490 = 0.217544*t431*t1623;
  t8491 = 0.142904*t431*t5035;
  t8493 = var1[0] + t8490 + t5011 + t8491;
  t8144 = 0.006445*t431*t8120;
  t8149 = 0.010494*t431*t8120;
  t8156 = 0.013406*t431*t8120;
  t8172 = 0.014864*t431*t8120;
  t8195 = 0.014712*t431*t8120;
  t8202 = 0.012966*t431*t8120;
  t8226 = 0.009815*t431*t8120;
  t8239 = 0.0056*t431*t8120;
  t8247 = 0.000778*t431*t8120;
  t8253 = -0.004128*t431*t8120;
  t8264 = -0.008587*t431*t8120;
  t8274 = -0.012115*t431*t8120;
  t8279 = -0.01433*t431*t8120;
  t8300 = -0.014993*t431*t8120;
  t8317 = -0.014031*t431*t8120;
  t8327 = -0.011548*t431*t8120;
  t8335 = -0.007814*t431*t8120;
  t8344 = -0.003233*t431*t8120;
  t8633 = 0.217544*t8130;
  t8634 = -0.142904*t8139;
  t8639 = var1[1] + t8121 + t8633 + t8634;
  t8373 = -0.006445*t8127*t431;
  t8379 = -0.010494*t8127*t431;
  t8385 = -0.013406*t8127*t431;
  t8395 = -0.014864*t8127*t431;
  t8399 = -0.014712*t8127*t431;
  t8404 = -0.012966*t8127*t431;
  t8409 = -0.009815*t8127*t431;
  t8413 = -0.0056*t8127*t431;
  t8417 = -0.000778*t8127*t431;
  t8422 = 0.004128*t8127*t431;
  t8427 = 0.008587*t8127*t431;
  t8436 = 0.012115*t8127*t431;
  t8442 = 0.01433*t8127*t431;
  t8451 = 0.014993*t8127*t431;
  t8466 = 0.014031*t8127*t431;
  t8470 = 0.011548*t8127*t431;
  t8477 = 0.007814*t8127*t431;
  t8482 = 0.003233*t8127*t431;
  t8752 = 0.217544*t8356;
  t8753 = -0.142904*t8364;
  t8755 = var1[2] + t8351 + t8752 + t8753;
  p_output1[0]=t5441;
  p_output1[1]=-0.006776*t1623*t431 + 0.011728*t431*t5035 + t5679 + var1[0];
  p_output1[2]=-0.005362*t1623*t431 + 0.00928*t431*t5035 + t6468 + var1[0];
  p_output1[3]=-0.003367*t1623*t431 + 0.005827*t431*t5035 + t7243 + var1[0];
  p_output1[4]=-0.001007*t1623*t431 + 0.001742*t431*t5035 + t7686 + var1[0];
  p_output1[5]=0.001462*t1623*t431 - 0.002531*t431*t5035 + t7836 + var1[0];
  p_output1[6]=0.003773*t1623*t431 - 0.00653*t431*t5035 + t7898 + var1[0];
  p_output1[7]=0.005675*t1623*t431 - 0.009822*t431*t5035 + t7967 + var1[0];
  p_output1[8]=0.006962*t1623*t431 - 0.012049*t431*t5035 + t7987 + var1[0];
  p_output1[9]=0.007494*t1623*t431 - 0.01297*t431*t5035 + t8001 + var1[0];
  p_output1[10]=0.007214*t1623*t431 - 0.012486*t431*t5035 + t8022 + var1[0];
  p_output1[11]=0.006153*t1623*t431 - 0.010649*t431*t5035 + t8030 + var1[0];
  p_output1[12]=0.004425*t1623*t431 - 0.007658*t431*t5035 + t8043 + var1[0];
  p_output1[13]=0.002217*t1623*t431 - 0.003837*t431*t5035 + t8049 + var1[0];
  p_output1[14]=-0.000231*t1623*t431 + 0.0004*t431*t5035 + t8055 + var1[0];
  p_output1[15]=-0.002654*t1623*t431 + 0.004593*t431*t5035 + t8096 + var1[0];
  p_output1[16]=-0.004789*t1623*t431 + 0.008289*t431*t5035 + t8102 + var1[0];
  p_output1[17]=-0.006406*t1623*t431 + 0.011087*t431*t5035 + t8110 + var1[0];
  p_output1[18]=-0.007328*t1623*t431 + 0.012683*t431*t5035 + t8116 + var1[0];
  p_output1[19]=t5441;
  p_output1[20]=t8142;
  p_output1[21]=-0.006776*t8130 - 0.011728*t8139 + t8144 + var1[1];
  p_output1[22]=-0.005362*t8130 - 0.00928*t8139 + t8149 + var1[1];
  p_output1[23]=-0.003367*t8130 - 0.005827*t8139 + t8156 + var1[1];
  p_output1[24]=-0.001007*t8130 - 0.001742*t8139 + t8172 + var1[1];
  p_output1[25]=0.001462*t8130 + 0.002531*t8139 + t8195 + var1[1];
  p_output1[26]=0.003773*t8130 + 0.00653*t8139 + t8202 + var1[1];
  p_output1[27]=0.005675*t8130 + 0.009822*t8139 + t8226 + var1[1];
  p_output1[28]=0.006962*t8130 + 0.012049*t8139 + t8239 + var1[1];
  p_output1[29]=0.007494*t8130 + 0.01297*t8139 + t8247 + var1[1];
  p_output1[30]=0.007214*t8130 + 0.012486*t8139 + t8253 + var1[1];
  p_output1[31]=0.006153*t8130 + 0.010649*t8139 + t8264 + var1[1];
  p_output1[32]=0.004425*t8130 + 0.007658*t8139 + t8274 + var1[1];
  p_output1[33]=0.002217*t8130 + 0.003837*t8139 + t8279 + var1[1];
  p_output1[34]=0.0004*(t3524*t5035*t8120 - 1.*t1623*t8127) - 0.000231*t8130 + t8300 + var1[1];
  p_output1[35]=-0.002654*t8130 - 0.004593*t8139 + t8317 + var1[1];
  p_output1[36]=-0.004789*t8130 - 0.008289*t8139 + t8327 + var1[1];
  p_output1[37]=-0.006406*t8130 - 0.011087*t8139 + t8335 + var1[1];
  p_output1[38]=-0.007328*t8130 - 0.012683*t8139 + t8344 + var1[1];
  p_output1[39]=t8142;
  p_output1[40]=t8369;
  p_output1[41]=-0.006776*t8356 - 0.011728*t8364 + t8373 + var1[2];
  p_output1[42]=-0.005362*t8356 - 0.00928*t8364 + t8379 + var1[2];
  p_output1[43]=-0.003367*t8356 - 0.005827*t8364 + t8385 + var1[2];
  p_output1[44]=-0.001007*t8356 - 0.001742*t8364 + t8395 + var1[2];
  p_output1[45]=0.001462*t8356 + 0.002531*t8364 + t8399 + var1[2];
  p_output1[46]=0.003773*t8356 + 0.00653*t8364 + t8404 + var1[2];
  p_output1[47]=0.005675*t8356 + 0.009822*t8364 + t8409 + var1[2];
  p_output1[48]=0.006962*t8356 + 0.012049*t8364 + t8413 + var1[2];
  p_output1[49]=0.007494*t8356 + 0.01297*t8364 + t8417 + var1[2];
  p_output1[50]=0.007214*t8356 + 0.012486*t8364 + t8422 + var1[2];
  p_output1[51]=0.006153*t8356 + 0.010649*t8364 + t8427 + var1[2];
  p_output1[52]=0.004425*t8356 + 0.007658*t8364 + t8436 + var1[2];
  p_output1[53]=0.002217*t8356 + 0.003837*t8364 + t8442 + var1[2];
  p_output1[54]=0.0004*(-1.*t1623*t8120 - 1.*t3524*t5035*t8127) - 0.000231*t8356 + t8451 + var1[2];
  p_output1[55]=-0.002654*t8356 - 0.004593*t8364 + t8466 + var1[2];
  p_output1[56]=-0.004789*t8356 - 0.008289*t8364 + t8470 + var1[2];
  p_output1[57]=-0.006406*t8356 - 0.011087*t8364 + t8477 + var1[2];
  p_output1[58]=-0.007328*t8356 - 0.012683*t8364 + t8482 + var1[2];
  p_output1[59]=t8369;
  p_output1[60]=t8493;
  p_output1[61]=0.218224*t1623*t431 + 0.141728*t431*t5035 + t5679 + var1[0];
  p_output1[62]=0.219638*t1623*t431 + 0.13928*t431*t5035 + t6468 + var1[0];
  p_output1[63]=0.221633*t1623*t431 + 0.135827*t431*t5035 + t7243 + var1[0];
  p_output1[64]=0.223993*t1623*t431 + 0.131742*t431*t5035 + t7686 + var1[0];
  p_output1[65]=0.226462*t1623*t431 + 0.127469*t431*t5035 + t7836 + var1[0];
  p_output1[66]=0.228773*t1623*t431 + 0.12347*t431*t5035 + t7898 + var1[0];
  p_output1[67]=0.230675*t1623*t431 + 0.120178*t431*t5035 + t7967 + var1[0];
  p_output1[68]=0.231962*t1623*t431 + 0.117951*t431*t5035 + t7987 + var1[0];
  p_output1[69]=0.232494*t1623*t431 + 0.11703*t431*t5035 + t8001 + var1[0];
  p_output1[70]=0.232214*t1623*t431 + 0.117514*t431*t5035 + t8022 + var1[0];
  p_output1[71]=0.231153*t1623*t431 + 0.119351*t431*t5035 + t8030 + var1[0];
  p_output1[72]=0.229425*t1623*t431 + 0.122342*t431*t5035 + t8043 + var1[0];
  p_output1[73]=0.227217*t1623*t431 + 0.126163*t431*t5035 + t8049 + var1[0];
  p_output1[74]=0.224769*t1623*t431 + 0.1304*t431*t5035 + t8055 + var1[0];
  p_output1[75]=0.222346*t1623*t431 + 0.134593*t431*t5035 + t8096 + var1[0];
  p_output1[76]=0.220211*t1623*t431 + 0.138289*t431*t5035 + t8102 + var1[0];
  p_output1[77]=0.218594*t1623*t431 + 0.141087*t431*t5035 + t8110 + var1[0];
  p_output1[78]=0.217672*t1623*t431 + 0.142683*t431*t5035 + t8116 + var1[0];
  p_output1[79]=t8493;
  p_output1[80]=t8639;
  p_output1[81]=0.218224*t8130 - 0.141728*t8139 + t8144 + var1[1];
  p_output1[82]=0.219638*t8130 - 0.13928*t8139 + t8149 + var1[1];
  p_output1[83]=0.221633*t8130 - 0.135827*t8139 + t8156 + var1[1];
  p_output1[84]=0.223993*t8130 - 0.131742*t8139 + t8172 + var1[1];
  p_output1[85]=0.226462*t8130 - 0.127469*t8139 + t8195 + var1[1];
  p_output1[86]=0.228773*t8130 - 0.12347*t8139 + t8202 + var1[1];
  p_output1[87]=0.230675*t8130 - 0.120178*t8139 + t8226 + var1[1];
  p_output1[88]=0.231962*t8130 - 0.117951*t8139 + t8239 + var1[1];
  p_output1[89]=0.232494*t8130 - 0.11703*t8139 + t8247 + var1[1];
  p_output1[90]=0.232214*t8130 - 0.117514*t8139 + t8253 + var1[1];
  p_output1[91]=0.231153*t8130 - 0.119351*t8139 + t8264 + var1[1];
  p_output1[92]=0.229425*t8130 - 0.122342*t8139 + t8274 + var1[1];
  p_output1[93]=0.227217*t8130 - 0.126163*t8139 + t8279 + var1[1];
  p_output1[94]=0.224769*t8130 - 0.1304*t8139 + t8300 + var1[1];
  p_output1[95]=0.222346*t8130 - 0.134593*t8139 + t8317 + var1[1];
  p_output1[96]=0.220211*t8130 - 0.138289*t8139 + t8327 + var1[1];
  p_output1[97]=0.218594*t8130 - 0.141087*t8139 + t8335 + var1[1];
  p_output1[98]=0.217672*t8130 - 0.142683*t8139 + t8344 + var1[1];
  p_output1[99]=t8639;
  p_output1[100]=t8755;
  p_output1[101]=0.218224*t8356 - 0.141728*t8364 + t8373 + var1[2];
  p_output1[102]=0.219638*t8356 - 0.13928*t8364 + t8379 + var1[2];
  p_output1[103]=0.221633*t8356 - 0.135827*t8364 + t8385 + var1[2];
  p_output1[104]=0.223993*t8356 - 0.131742*t8364 + t8395 + var1[2];
  p_output1[105]=0.226462*t8356 - 0.127469*t8364 + t8399 + var1[2];
  p_output1[106]=0.228773*t8356 - 0.12347*t8364 + t8404 + var1[2];
  p_output1[107]=0.230675*t8356 - 0.120178*t8364 + t8409 + var1[2];
  p_output1[108]=0.231962*t8356 - 0.117951*t8364 + t8413 + var1[2];
  p_output1[109]=0.232494*t8356 - 0.11703*t8364 + t8417 + var1[2];
  p_output1[110]=0.232214*t8356 - 0.117514*t8364 + t8422 + var1[2];
  p_output1[111]=0.231153*t8356 - 0.119351*t8364 + t8427 + var1[2];
  p_output1[112]=0.229425*t8356 - 0.122342*t8364 + t8436 + var1[2];
  p_output1[113]=0.227217*t8356 - 0.126163*t8364 + t8442 + var1[2];
  p_output1[114]=0.224769*t8356 - 0.1304*t8364 + t8451 + var1[2];
  p_output1[115]=0.222346*t8356 - 0.134593*t8364 + t8466 + var1[2];
  p_output1[116]=0.220211*t8356 - 0.138289*t8364 + t8470 + var1[2];
  p_output1[117]=0.218594*t8356 - 0.141087*t8364 + t8477 + var1[2];
  p_output1[118]=0.217672*t8356 - 0.142683*t8364 + t8482 + var1[2];
  p_output1[119]=t8755;
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

#include "Link_base_chassis_link_to_motor_front_rightR_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_motor_front_rightR_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
