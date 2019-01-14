/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:24 GMT-04:00
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
  double t578;
  double t971;
  double t3473;
  double t4001;
  double t2284;
  double t3829;
  double t4797;
  double t4865;
  double t8587;
  double t8615;
  double t8612;
  double t8617;
  double t8624;
  double t8661;
  double t8663;
  double t8668;
  double t8606;
  double t8659;
  double t8670;
  double t8675;
  double t8913;
  double t8914;
  double t8916;
  double t8918;
  double t8921;
  double t8922;
  double t8912;
  double t8917;
  double t8924;
  double t8926;
  double t4932;
  double t5238;
  double t6709;
  double t6720;
  double t6758;
  double t6927;
  double t7273;
  double t7607;
  double t7853;
  double t8036;
  double t8198;
  double t8318;
  double t8376;
  double t8400;
  double t8423;
  double t8462;
  double t8507;
  double t8540;
  double t9032;
  double t9034;
  double t9035;
  double t8684;
  double t8701;
  double t8710;
  double t8733;
  double t8745;
  double t8756;
  double t8768;
  double t8776;
  double t8787;
  double t8796;
  double t8806;
  double t8814;
  double t8824;
  double t8852;
  double t8858;
  double t8872;
  double t8894;
  double t8906;
  double t9115;
  double t9116;
  double t9117;
  double t8927;
  double t8933;
  double t8941;
  double t8949;
  double t8956;
  double t8964;
  double t8972;
  double t8978;
  double t8984;
  double t8988;
  double t8992;
  double t8996;
  double t9000;
  double t9004;
  double t9008;
  double t9016;
  double t9022;
  double t9026;
  double t9204;
  double t9205;
  double t9206;
  t578 = Cos(var1[4]);
  t971 = Cos(var1[5]);
  t3473 = Sin(var1[4]);
  t4001 = Sin(var1[5]);
  t2284 = -0.000483*t578*t971;
  t3829 = 0.014969*t3473;
  t4797 = -0.000836*t578*t4001;
  t4865 = var1[0] + t2284 + t3829 + t4797;
  t8587 = Sin(var1[3]);
  t8615 = Cos(var1[3]);
  t8612 = t971*t8587*t3473;
  t8617 = t8615*t4001;
  t8624 = t8612 + t8617;
  t8661 = t8615*t971;
  t8663 = -1.*t8587*t3473*t4001;
  t8668 = t8661 + t8663;
  t8606 = -0.014969*t578*t8587;
  t8659 = -0.000483*t8624;
  t8670 = 0.000836*t8668;
  t8675 = var1[1] + t8606 + t8659 + t8670;
  t8913 = -1.*t8615*t971*t3473;
  t8914 = t8587*t4001;
  t8916 = t8913 + t8914;
  t8918 = t971*t8587;
  t8921 = t8615*t3473*t4001;
  t8922 = t8918 + t8921;
  t8912 = 0.014969*t8615*t578;
  t8917 = -0.000483*t8916;
  t8924 = 0.000836*t8922;
  t8926 = var1[2] + t8912 + t8917 + t8924;
  t4932 = 0.013844*t3473;
  t5238 = 0.01122*t3473;
  t6709 = 0.007379*t3473;
  t6720 = 0.002739*t3473;
  t6758 = -0.002198*t3473;
  t6927 = -0.006897*t3473;
  t7273 = -0.010848*t3473;
  t7607 = -0.013624*t3473;
  t7853 = -0.014924*t3473;
  t8036 = -0.014606*t3473;
  t8198 = -0.012705*t3473;
  t8318 = -0.009428*t3473;
  t8376 = -0.005129*t3473;
  t8400 = -0.000274*t3473;
  t8423 = 0.00461*t3473;
  t8462 = 0.008995*t3473;
  t8507 = 0.012405*t3473;
  t8540 = 0.014471*t3473;
  t9032 = -0.225483*t578*t971;
  t9034 = 0.129164*t578*t4001;
  t9035 = var1[0] + t9032 + t3829 + t9034;
  t8684 = -0.013844*t578*t8587;
  t8701 = -0.01122*t578*t8587;
  t8710 = -0.007379*t578*t8587;
  t8733 = -0.002739*t578*t8587;
  t8745 = 0.002198*t578*t8587;
  t8756 = 0.006897*t578*t8587;
  t8768 = 0.010848*t578*t8587;
  t8776 = 0.013624*t578*t8587;
  t8787 = 0.014924*t578*t8587;
  t8796 = 0.014606*t578*t8587;
  t8806 = 0.012705*t578*t8587;
  t8814 = 0.009428*t578*t8587;
  t8824 = 0.005129*t578*t8587;
  t8852 = 0.000274*t578*t8587;
  t8858 = -0.00461*t578*t8587;
  t8872 = -0.008995*t578*t8587;
  t8894 = -0.012405*t578*t8587;
  t8906 = -0.014471*t578*t8587;
  t9115 = -0.225483*t8624;
  t9116 = -0.129164*t8668;
  t9117 = var1[1] + t8606 + t9115 + t9116;
  t8927 = 0.013844*t8615*t578;
  t8933 = 0.01122*t8615*t578;
  t8941 = 0.007379*t8615*t578;
  t8949 = 0.002739*t8615*t578;
  t8956 = -0.002198*t8615*t578;
  t8964 = -0.006897*t8615*t578;
  t8972 = -0.010848*t8615*t578;
  t8978 = -0.013624*t8615*t578;
  t8984 = -0.014924*t8615*t578;
  t8988 = -0.014606*t8615*t578;
  t8992 = -0.012705*t8615*t578;
  t8996 = -0.009428*t8615*t578;
  t9000 = -0.005129*t8615*t578;
  t9004 = -0.000274*t8615*t578;
  t9008 = 0.00461*t8615*t578;
  t9016 = 0.008995*t8615*t578;
  t9022 = 0.012405*t8615*t578;
  t9026 = 0.014471*t8615*t578;
  t9204 = -0.225483*t8916;
  t9205 = -0.129164*t8922;
  t9206 = var1[2] + t8912 + t9204 + t9205;
  p_output1[0]=t4865;
  p_output1[1]=t4932 - 0.004999*t4001*t578 - 0.002888*t578*t971 + var1[0];
  p_output1[2]=t5238 - 0.00862*t4001*t578 - 0.004981*t578*t971 + var1[0];
  p_output1[3]=-0.011308*t4001*t578 + t6709 - 0.006533*t578*t971 + var1[0];
  p_output1[4]=-0.01277*t4001*t578 + t6720 - 0.007378*t578*t971 + var1[0];
  p_output1[5]=-0.012848*t4001*t578 + t6758 - 0.007423*t578*t971 + var1[0];
  p_output1[6]=-0.011534*t4001*t578 + t6927 - 0.006664*t578*t971 + var1[0];
  p_output1[7]=-0.00897*t4001*t578 + t7273 - 0.005183*t578*t971 + var1[0];
  p_output1[8]=-0.005434*t4001*t578 + t7607 - 0.00314*t578*t971 + var1[0];
  p_output1[9]=-0.001309*t4001*t578 + t7853 - 0.000756*t578*t971 + var1[0];
  p_output1[10]=0.002958*t4001*t578 + t8036 + 0.001709*t578*t971 + var1[0];
  p_output1[11]=0.006904*t4001*t578 + t8198 + 0.003989*t578*t971 + var1[0];
  p_output1[12]=0.010102*t4001*t578 + t8318 + 0.005837*t578*t971 + var1[0];
  p_output1[13]=0.012205*t4001*t578 + t8376 + 0.007052*t578*t971 + var1[0];
  p_output1[14]=0.012986*t4001*t578 + t8400 + 0.007503*t578*t971 + var1[0];
  p_output1[15]=0.012359*t4001*t578 + t8423 + 0.007141*t578*t971 + var1[0];
  p_output1[16]=0.010394*t4001*t578 + t8462 + 0.006005*t578*t971 + var1[0];
  p_output1[17]=0.007301*t4001*t578 + t8507 + 0.004219*t578*t971 + var1[0];
  p_output1[18]=0.003418*t4001*t578 + t8540 + 0.001975*t578*t971 + var1[0];
  p_output1[19]=t4865;
  p_output1[20]=t8675;
  p_output1[21]=-0.002888*t8624 + 0.004999*t8668 + t8684 + var1[1];
  p_output1[22]=-0.004981*t8624 + 0.00862*t8668 + t8701 + var1[1];
  p_output1[23]=-0.006533*t8624 + 0.011308*t8668 + t8710 + var1[1];
  p_output1[24]=-0.007378*t8624 + 0.01277*t8668 + t8733 + var1[1];
  p_output1[25]=-0.007423*t8624 + 0.012848*t8668 + t8745 + var1[1];
  p_output1[26]=-0.006664*t8624 + 0.011534*t8668 + t8756 + var1[1];
  p_output1[27]=-0.005183*t8624 + 0.00897*t8668 + t8768 + var1[1];
  p_output1[28]=-0.00314*t8624 + 0.005434*t8668 + t8776 + var1[1];
  p_output1[29]=-0.000756*t8624 + 0.001309*t8668 + t8787 + var1[1];
  p_output1[30]=0.001709*t8624 - 0.002958*t8668 + t8796 + var1[1];
  p_output1[31]=0.003989*t8624 - 0.006904*t8668 + t8806 + var1[1];
  p_output1[32]=0.005837*t8624 - 0.010102*t8668 + t8814 + var1[1];
  p_output1[33]=0.007052*t8624 - 0.012205*t8668 + t8824 + var1[1];
  p_output1[34]=0.007503*t8624 - 0.012986*t8668 + t8852 + var1[1];
  p_output1[35]=0.007141*t8624 - 0.012359*t8668 + t8858 + var1[1];
  p_output1[36]=0.006005*t8624 - 0.010394*t8668 + t8872 + var1[1];
  p_output1[37]=0.004219*t8624 - 0.007301*t8668 + t8894 + var1[1];
  p_output1[38]=0.001975*t8624 - 0.003418*t8668 + t8906 + var1[1];
  p_output1[39]=t8675;
  p_output1[40]=t8926;
  p_output1[41]=-0.002888*t8916 + 0.004999*t8922 + t8927 + var1[2];
  p_output1[42]=-0.004981*t8916 + 0.00862*t8922 + t8933 + var1[2];
  p_output1[43]=-0.006533*t8916 + 0.011308*t8922 + t8941 + var1[2];
  p_output1[44]=-0.007378*t8916 + 0.01277*t8922 + t8949 + var1[2];
  p_output1[45]=-0.007423*t8916 + 0.012848*t8922 + t8956 + var1[2];
  p_output1[46]=-0.006664*t8916 + 0.011534*t8922 + t8964 + var1[2];
  p_output1[47]=-0.005183*t8916 + 0.00897*t8922 + t8972 + var1[2];
  p_output1[48]=-0.00314*t8916 + 0.005434*t8922 + t8978 + var1[2];
  p_output1[49]=-0.000756*t8916 + 0.001309*t8922 + t8984 + var1[2];
  p_output1[50]=0.001709*t8916 - 0.002958*t8922 + t8988 + var1[2];
  p_output1[51]=0.003989*t8916 - 0.006904*t8922 + t8992 + var1[2];
  p_output1[52]=0.005837*t8916 - 0.010102*t8922 + t8996 + var1[2];
  p_output1[53]=0.007052*t8916 - 0.012205*t8922 + t9000 + var1[2];
  p_output1[54]=0.007503*t8916 - 0.012986*t8922 + t9004 + var1[2];
  p_output1[55]=0.007141*t8916 - 0.012359*t8922 + t9008 + var1[2];
  p_output1[56]=0.006005*t8916 - 0.010394*t8922 + t9016 + var1[2];
  p_output1[57]=0.004219*t8916 - 0.007301*t8922 + t9022 + var1[2];
  p_output1[58]=0.001975*t8916 - 0.003418*t8922 + t9026 + var1[2];
  p_output1[59]=t8926;
  p_output1[60]=t9035;
  p_output1[61]=t4932 + 0.125001*t4001*t578 - 0.227888*t578*t971 + var1[0];
  p_output1[62]=t5238 + 0.12138*t4001*t578 - 0.229981*t578*t971 + var1[0];
  p_output1[63]=0.118692*t4001*t578 + t6709 - 0.231533*t578*t971 + var1[0];
  p_output1[64]=0.11723*t4001*t578 + t6720 - 0.232378*t578*t971 + var1[0];
  p_output1[65]=0.117152*t4001*t578 + t6758 - 0.232423*t578*t971 + var1[0];
  p_output1[66]=0.118466*t4001*t578 + t6927 - 0.231664*t578*t971 + var1[0];
  p_output1[67]=0.12103*t4001*t578 + t7273 - 0.230183*t578*t971 + var1[0];
  p_output1[68]=0.124566*t4001*t578 + t7607 - 0.22814*t578*t971 + var1[0];
  p_output1[69]=0.128691*t4001*t578 + t7853 - 0.225756*t578*t971 + var1[0];
  p_output1[70]=0.132958*t4001*t578 + t8036 - 0.223291*t578*t971 + var1[0];
  p_output1[71]=0.136904*t4001*t578 + t8198 - 0.221011*t578*t971 + var1[0];
  p_output1[72]=0.140102*t4001*t578 + t8318 - 0.219163*t578*t971 + var1[0];
  p_output1[73]=0.142205*t4001*t578 + t8376 - 0.217948*t578*t971 + var1[0];
  p_output1[74]=0.142986*t4001*t578 + t8400 - 0.217497*t578*t971 + var1[0];
  p_output1[75]=0.142359*t4001*t578 + t8423 - 0.217859*t578*t971 + var1[0];
  p_output1[76]=0.140394*t4001*t578 + t8462 - 0.218995*t578*t971 + var1[0];
  p_output1[77]=0.137301*t4001*t578 + t8507 - 0.220781*t578*t971 + var1[0];
  p_output1[78]=0.133418*t4001*t578 + t8540 - 0.223025*t578*t971 + var1[0];
  p_output1[79]=t9035;
  p_output1[80]=t9117;
  p_output1[81]=-0.227888*t8624 - 0.125001*t8668 + t8684 + var1[1];
  p_output1[82]=-0.229981*t8624 - 0.12138*t8668 + t8701 + var1[1];
  p_output1[83]=-0.231533*t8624 - 0.118692*t8668 + t8710 + var1[1];
  p_output1[84]=-0.232378*t8624 - 0.11723*t8668 + t8733 + var1[1];
  p_output1[85]=-0.232423*t8624 - 0.117152*t8668 + t8745 + var1[1];
  p_output1[86]=-0.231664*t8624 - 0.118466*t8668 + t8756 + var1[1];
  p_output1[87]=-0.230183*t8624 - 0.12103*t8668 + t8768 + var1[1];
  p_output1[88]=-0.22814*t8624 - 0.124566*t8668 + t8776 + var1[1];
  p_output1[89]=-0.225756*t8624 - 0.128691*t8668 + t8787 + var1[1];
  p_output1[90]=-0.223291*t8624 - 0.132958*t8668 + t8796 + var1[1];
  p_output1[91]=-0.221011*t8624 - 0.136904*t8668 + t8806 + var1[1];
  p_output1[92]=-0.219163*t8624 - 0.140102*t8668 + t8814 + var1[1];
  p_output1[93]=-0.217948*t8624 - 0.142205*t8668 + t8824 + var1[1];
  p_output1[94]=-0.217497*t8624 - 0.142986*t8668 + t8852 + var1[1];
  p_output1[95]=-0.217859*t8624 - 0.142359*t8668 + t8858 + var1[1];
  p_output1[96]=-0.218995*t8624 - 0.140394*t8668 + t8872 + var1[1];
  p_output1[97]=-0.220781*t8624 - 0.137301*t8668 + t8894 + var1[1];
  p_output1[98]=-0.223025*t8624 - 0.133418*t8668 + t8906 + var1[1];
  p_output1[99]=t9117;
  p_output1[100]=t9206;
  p_output1[101]=-0.227888*t8916 - 0.125001*t8922 + t8927 + var1[2];
  p_output1[102]=-0.229981*t8916 - 0.12138*t8922 + t8933 + var1[2];
  p_output1[103]=-0.231533*t8916 - 0.118692*t8922 + t8941 + var1[2];
  p_output1[104]=-0.232378*t8916 - 0.11723*t8922 + t8949 + var1[2];
  p_output1[105]=-0.232423*t8916 - 0.117152*t8922 + t8956 + var1[2];
  p_output1[106]=-0.231664*t8916 - 0.118466*t8922 + t8964 + var1[2];
  p_output1[107]=-0.230183*t8916 - 0.12103*t8922 + t8972 + var1[2];
  p_output1[108]=-0.22814*t8916 - 0.124566*t8922 + t8978 + var1[2];
  p_output1[109]=-0.225756*t8916 - 0.128691*t8922 + t8984 + var1[2];
  p_output1[110]=-0.223291*t8916 - 0.132958*t8922 + t8988 + var1[2];
  p_output1[111]=-0.221011*t8916 - 0.136904*t8922 + t8992 + var1[2];
  p_output1[112]=-0.219163*t8916 - 0.140102*t8922 + t8996 + var1[2];
  p_output1[113]=-0.217948*t8916 - 0.142205*t8922 + t9000 + var1[2];
  p_output1[114]=-0.217497*t8916 - 0.142986*t8922 + t9004 + var1[2];
  p_output1[115]=-0.217859*t8916 - 0.142359*t8922 + t9008 + var1[2];
  p_output1[116]=-0.218995*t8916 - 0.140394*t8922 + t9016 + var1[2];
  p_output1[117]=-0.220781*t8916 - 0.137301*t8922 + t9022 + var1[2];
  p_output1[118]=-0.223025*t8916 - 0.133418*t8922 + t9026 + var1[2];
  p_output1[119]=t9206;
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

#include "Link_base_chassis_link_to_motor_back_rightR_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_motor_back_rightR_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
