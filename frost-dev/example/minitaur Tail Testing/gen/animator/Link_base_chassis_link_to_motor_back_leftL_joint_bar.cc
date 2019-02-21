/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:58 GMT-04:00
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
  double t57;
  double t6716;
  double t6860;
  double t6917;
  double t6817;
  double t6883;
  double t6986;
  double t7017;
  double t7558;
  double t7562;
  double t7560;
  double t7563;
  double t7567;
  double t7569;
  double t7571;
  double t7572;
  double t7559;
  double t7568;
  double t7573;
  double t7577;
  double t7808;
  double t7811;
  double t7815;
  double t7826;
  double t7827;
  double t7828;
  double t7803;
  double t7825;
  double t7829;
  double t7830;
  double t7089;
  double t7369;
  double t7409;
  double t7413;
  double t7433;
  double t7450;
  double t7460;
  double t7481;
  double t7489;
  double t7503;
  double t7508;
  double t7523;
  double t7528;
  double t7533;
  double t7538;
  double t7543;
  double t7547;
  double t7552;
  double t7908;
  double t7909;
  double t7910;
  double t7578;
  double t7583;
  double t7591;
  double t7598;
  double t7603;
  double t7636;
  double t7640;
  double t7653;
  double t7676;
  double t7680;
  double t7697;
  double t7706;
  double t7721;
  double t7734;
  double t7740;
  double t7769;
  double t7774;
  double t7795;
  double t7972;
  double t7973;
  double t7975;
  double t7831;
  double t7835;
  double t7840;
  double t7844;
  double t7848;
  double t7852;
  double t7857;
  double t7861;
  double t7865;
  double t7870;
  double t7874;
  double t7878;
  double t7882;
  double t7887;
  double t7891;
  double t7895;
  double t7900;
  double t7904;
  double t8076;
  double t8080;
  double t8081;
  t57 = Cos(var1[4]);
  t6716 = Cos(var1[5]);
  t6860 = Sin(var1[4]);
  t6917 = Sin(var1[5]);
  t6817 = -0.005208*t57*t6716;
  t6883 = -0.0108*t6860;
  t6986 = 0.009013*t57*t6917;
  t7017 = var1[0] + t6817 + t6883 + t6986;
  t7558 = Sin(var1[3]);
  t7562 = Cos(var1[3]);
  t7560 = t6716*t7558*t6860;
  t7563 = t7562*t6917;
  t7567 = t7560 + t7563;
  t7569 = t7562*t6716;
  t7571 = -1.*t7558*t6860*t6917;
  t7572 = t7569 + t7571;
  t7559 = 0.0108*t57*t7558;
  t7568 = -0.005208*t7567;
  t7573 = -0.009013*t7572;
  t7577 = var1[1] + t7559 + t7568 + t7573;
  t7808 = -1.*t7562*t6716*t6860;
  t7811 = t7558*t6917;
  t7815 = t7808 + t7811;
  t7826 = t6716*t7558;
  t7827 = t7562*t6860*t6917;
  t7828 = t7826 + t7827;
  t7803 = -0.0108*t7562*t57;
  t7825 = -0.005208*t7815;
  t7829 = -0.009013*t7828;
  t7830 = var1[2] + t7803 + t7825 + t7829;
  t7089 = -0.006835*t6860;
  t7369 = -0.002129*t6860;
  t7409 = 0.002808*t6860;
  t7413 = 0.00744*t6860;
  t7433 = 0.011266*t6860;
  t7450 = 0.013871*t6860;
  t7460 = 0.014973*t6860;
  t7481 = 0.014453*t6860;
  t7489 = 0.012366*t6860;
  t7503 = 0.008939*t6860;
  t7508 = 0.004544*t6860;
  t7523 = -0.000344*t6860;
  t7528 = -0.005195*t6860;
  t7533 = -0.009482*t6860;
  t7538 = -0.012742*t6860;
  t7543 = -0.014622*t6860;
  t7547 = -0.014916*t6860;
  t7552 = -0.013595*t6860;
  t7908 = -0.230208*t57*t6716;
  t7909 = -0.120987*t57*t6917;
  t7910 = var1[0] + t7908 + t6883 + t7909;
  t7578 = 0.006835*t57*t7558;
  t7583 = 0.002129*t57*t7558;
  t7591 = -0.002808*t57*t7558;
  t7598 = -0.00744*t57*t7558;
  t7603 = -0.011266*t57*t7558;
  t7636 = -0.013871*t57*t7558;
  t7640 = -0.014973*t57*t7558;
  t7653 = -0.014453*t57*t7558;
  t7676 = -0.012366*t57*t7558;
  t7680 = -0.008939*t57*t7558;
  t7697 = -0.004544*t57*t7558;
  t7706 = 0.000344*t57*t7558;
  t7721 = 0.005195*t57*t7558;
  t7734 = 0.009482*t57*t7558;
  t7740 = 0.012742*t57*t7558;
  t7769 = 0.014622*t57*t7558;
  t7774 = 0.014916*t57*t7558;
  t7795 = 0.013595*t57*t7558;
  t7972 = -0.230208*t7567;
  t7973 = 0.120987*t7572;
  t7975 = var1[1] + t7559 + t7972 + t7973;
  t7831 = -0.006835*t7562*t57;
  t7835 = -0.002129*t7562*t57;
  t7840 = 0.002808*t7562*t57;
  t7844 = 0.00744*t7562*t57;
  t7848 = 0.011266*t7562*t57;
  t7852 = 0.013871*t7562*t57;
  t7857 = 0.014973*t7562*t57;
  t7861 = 0.014453*t7562*t57;
  t7865 = 0.012366*t7562*t57;
  t7870 = 0.008939*t7562*t57;
  t7874 = 0.004544*t7562*t57;
  t7878 = -0.000344*t7562*t57;
  t7882 = -0.005195*t7562*t57;
  t7887 = -0.009482*t7562*t57;
  t7891 = -0.012742*t7562*t57;
  t7895 = -0.014622*t7562*t57;
  t7900 = -0.014916*t7562*t57;
  t7904 = -0.013595*t7562*t57;
  t8076 = -0.230208*t7815;
  t8080 = 0.120987*t7828;
  t8081 = var1[2] + t7803 + t8076 + t8080;
  p_output1[0]=t7017;
  p_output1[1]=-0.00668*t57*t6716 + 0.011561*t57*t6917 + t7089 + var1[0];
  p_output1[2]=-0.007428*t57*t6716 + 0.012857*t57*t6917 + t7369 + var1[0];
  p_output1[3]=-0.007372*t57*t6716 + 0.012758*t57*t6917 + t7409 + var1[0];
  p_output1[4]=-0.006516*t57*t6716 + 0.011278*t57*t6917 + t7413 + var1[0];
  p_output1[5]=-0.004954*t57*t6716 + 0.008575*t57*t6917 + t7433 + var1[0];
  p_output1[6]=-0.002856*t57*t6716 + 0.004943*t57*t6917 + t7450 + var1[0];
  p_output1[7]=-0.000448*t57*t6716 + 0.000775*t57*t6917 + t7460 + var1[0];
  p_output1[8]=0.002009*t57*t6716 - 0.003476*t57*t6917 + t7481 + var1[0];
  p_output1[9]=0.004247*t57*t6716 - 0.007351*t57*t6917 + t7489 + var1[0];
  p_output1[10]=0.006026*t57*t6716 - 0.01043*t57*t6917 + t7503 + var1[0];
  p_output1[11]=0.007152*t57*t6716 - 0.012378*t57*t6917 + t7508 + var1[0];
  p_output1[12]=0.007502*t57*t6716 - 0.012985*t57*t6917 + t7523 + var1[0];
  p_output1[13]=0.00704*t57*t6716 - 0.012184*t57*t6917 + t7528 + var1[0];
  p_output1[14]=0.005815*t57*t6716 - 0.010064*t57*t6917 + t7533 + var1[0];
  p_output1[15]=0.003959*t57*t6716 - 0.006852*t57*t6917 + t7538 + var1[0];
  p_output1[16]=0.001675*t57*t6716 - 0.002899*t57*t6917 + t7543 + var1[0];
  p_output1[17]=-0.000791*t57*t6716 + 0.001369*t57*t6917 + t7547 + var1[0];
  p_output1[18]=-0.003171*t57*t6716 + 0.005489*t57*t6917 + t7552 + var1[0];
  p_output1[19]=t7017;
  p_output1[20]=t7577;
  p_output1[21]=-0.00668*t7567 - 0.011561*t7572 + t7578 + var1[1];
  p_output1[22]=-0.007428*t7567 - 0.012857*t7572 + t7583 + var1[1];
  p_output1[23]=-0.007372*t7567 - 0.012758*t7572 + t7591 + var1[1];
  p_output1[24]=-0.006516*t7567 - 0.011278*t7572 + t7598 + var1[1];
  p_output1[25]=-0.004954*t7567 - 0.008575*t7572 + t7603 + var1[1];
  p_output1[26]=-0.002856*t7567 - 0.004943*t7572 + t7636 + var1[1];
  p_output1[27]=-0.000448*t7567 - 0.000775*t7572 + t7640 + var1[1];
  p_output1[28]=0.002009*t7567 + 0.003476*t7572 + t7653 + var1[1];
  p_output1[29]=0.004247*t7567 + 0.007351*t7572 + t7676 + var1[1];
  p_output1[30]=0.006026*t7567 + 0.01043*t7572 + t7680 + var1[1];
  p_output1[31]=0.007152*t7567 + 0.012378*t7572 + t7697 + var1[1];
  p_output1[32]=0.007502*t7567 + 0.012985*t7572 + t7706 + var1[1];
  p_output1[33]=0.00704*t7567 + 0.012184*t7572 + t7721 + var1[1];
  p_output1[34]=0.005815*t7567 + 0.010064*t7572 + t7734 + var1[1];
  p_output1[35]=0.003959*t7567 + 0.006852*t7572 + t7740 + var1[1];
  p_output1[36]=0.001675*t7567 + 0.002899*t7572 + t7769 + var1[1];
  p_output1[37]=-0.000791*t7567 - 0.001369*t7572 + t7774 + var1[1];
  p_output1[38]=-0.003171*t7567 - 0.005489*t7572 + t7795 + var1[1];
  p_output1[39]=t7577;
  p_output1[40]=t7830;
  p_output1[41]=-0.00668*t7815 - 0.011561*t7828 + t7831 + var1[2];
  p_output1[42]=-0.007428*t7815 - 0.012857*t7828 + t7835 + var1[2];
  p_output1[43]=-0.007372*t7815 - 0.012758*t7828 + t7840 + var1[2];
  p_output1[44]=-0.006516*t7815 - 0.011278*t7828 + t7844 + var1[2];
  p_output1[45]=-0.004954*t7815 - 0.008575*t7828 + t7848 + var1[2];
  p_output1[46]=-0.002856*t7815 - 0.004943*t7828 + t7852 + var1[2];
  p_output1[47]=-0.000448*t7815 - 0.000775*t7828 + t7857 + var1[2];
  p_output1[48]=0.002009*t7815 + 0.003476*t7828 + t7861 + var1[2];
  p_output1[49]=0.004247*t7815 + 0.007351*t7828 + t7865 + var1[2];
  p_output1[50]=0.006026*t7815 + 0.01043*t7828 + t7870 + var1[2];
  p_output1[51]=0.007152*t7815 + 0.012378*t7828 + t7874 + var1[2];
  p_output1[52]=0.007502*t7815 + 0.012985*t7828 + t7878 + var1[2];
  p_output1[53]=0.00704*t7815 + 0.012184*t7828 + t7882 + var1[2];
  p_output1[54]=0.005815*t7815 + 0.010064*t7828 + t7887 + var1[2];
  p_output1[55]=0.003959*t7815 + 0.006852*t7828 + t7891 + var1[2];
  p_output1[56]=0.001675*t7815 + 0.002899*t7828 + t7895 + var1[2];
  p_output1[57]=-0.000791*t7815 - 0.001369*t7828 + t7900 + var1[2];
  p_output1[58]=-0.003171*t7815 - 0.005489*t7828 + t7904 + var1[2];
  p_output1[59]=t7830;
  p_output1[60]=t7910;
  p_output1[61]=-0.23168*t57*t6716 - 0.118439*t57*t6917 + t7089 + var1[0];
  p_output1[62]=-0.232428*t57*t6716 - 0.117143*t57*t6917 + t7369 + var1[0];
  p_output1[63]=-0.232372*t57*t6716 - 0.117242*t57*t6917 + t7409 + var1[0];
  p_output1[64]=-0.231516*t57*t6716 - 0.118722*t57*t6917 + t7413 + var1[0];
  p_output1[65]=-0.229954*t57*t6716 - 0.121425*t57*t6917 + t7433 + var1[0];
  p_output1[66]=-0.227856*t57*t6716 - 0.125057*t57*t6917 + t7450 + var1[0];
  p_output1[67]=-0.225448*t57*t6716 - 0.129225*t57*t6917 + t7460 + var1[0];
  p_output1[68]=-0.222991*t57*t6716 - 0.133476*t57*t6917 + t7481 + var1[0];
  p_output1[69]=-0.220753*t57*t6716 - 0.137351*t57*t6917 + t7489 + var1[0];
  p_output1[70]=-0.218974*t57*t6716 - 0.14043*t57*t6917 + t7503 + var1[0];
  p_output1[71]=-0.217848*t57*t6716 - 0.142378*t57*t6917 + t7508 + var1[0];
  p_output1[72]=-0.217498*t57*t6716 - 0.142985*t57*t6917 + t7523 + var1[0];
  p_output1[73]=-0.21796*t57*t6716 - 0.142184*t57*t6917 + t7528 + var1[0];
  p_output1[74]=-0.219185*t57*t6716 - 0.140064*t57*t6917 + t7533 + var1[0];
  p_output1[75]=-0.221041*t57*t6716 - 0.136852*t57*t6917 + t7538 + var1[0];
  p_output1[76]=-0.223325*t57*t6716 - 0.132899*t57*t6917 + t7543 + var1[0];
  p_output1[77]=-0.225791*t57*t6716 - 0.128631*t57*t6917 + t7547 + var1[0];
  p_output1[78]=-0.228171*t57*t6716 - 0.124511*t57*t6917 + t7552 + var1[0];
  p_output1[79]=t7910;
  p_output1[80]=t7975;
  p_output1[81]=-0.23168*t7567 + 0.118439*t7572 + t7578 + var1[1];
  p_output1[82]=-0.232428*t7567 + 0.117143*t7572 + t7583 + var1[1];
  p_output1[83]=-0.232372*t7567 + 0.117242*t7572 + t7591 + var1[1];
  p_output1[84]=-0.231516*t7567 + 0.118722*t7572 + t7598 + var1[1];
  p_output1[85]=-0.229954*t7567 + 0.121425*t7572 + t7603 + var1[1];
  p_output1[86]=-0.227856*t7567 + 0.125057*t7572 + t7636 + var1[1];
  p_output1[87]=-0.225448*t7567 + 0.129225*t7572 + t7640 + var1[1];
  p_output1[88]=-0.222991*t7567 + 0.133476*t7572 + t7653 + var1[1];
  p_output1[89]=-0.220753*t7567 + 0.137351*t7572 + t7676 + var1[1];
  p_output1[90]=-0.218974*t7567 + 0.14043*t7572 + t7680 + var1[1];
  p_output1[91]=-0.217848*t7567 + 0.142378*t7572 + t7697 + var1[1];
  p_output1[92]=-0.217498*t7567 + 0.142985*t7572 + t7706 + var1[1];
  p_output1[93]=-0.21796*t7567 + 0.142184*t7572 + t7721 + var1[1];
  p_output1[94]=-0.219185*t7567 + 0.140064*t7572 + t7734 + var1[1];
  p_output1[95]=-0.221041*t7567 + 0.136852*t7572 + t7740 + var1[1];
  p_output1[96]=-0.223325*t7567 + 0.132899*t7572 + t7769 + var1[1];
  p_output1[97]=-0.225791*t7567 + 0.128631*t7572 + t7774 + var1[1];
  p_output1[98]=-0.228171*t7567 + 0.124511*t7572 + t7795 + var1[1];
  p_output1[99]=t7975;
  p_output1[100]=t8081;
  p_output1[101]=-0.23168*t7815 + 0.118439*t7828 + t7831 + var1[2];
  p_output1[102]=-0.232428*t7815 + 0.117143*t7828 + t7835 + var1[2];
  p_output1[103]=-0.232372*t7815 + 0.117242*t7828 + t7840 + var1[2];
  p_output1[104]=-0.231516*t7815 + 0.118722*t7828 + t7844 + var1[2];
  p_output1[105]=-0.229954*t7815 + 0.121425*t7828 + t7848 + var1[2];
  p_output1[106]=-0.227856*t7815 + 0.125057*t7828 + t7852 + var1[2];
  p_output1[107]=-0.225448*t7815 + 0.129225*t7828 + t7857 + var1[2];
  p_output1[108]=-0.222991*t7815 + 0.133476*t7828 + t7861 + var1[2];
  p_output1[109]=-0.220753*t7815 + 0.137351*t7828 + t7865 + var1[2];
  p_output1[110]=-0.218974*t7815 + 0.14043*t7828 + t7870 + var1[2];
  p_output1[111]=-0.217848*t7815 + 0.142378*t7828 + t7874 + var1[2];
  p_output1[112]=-0.217498*t7815 + 0.142985*t7828 + t7878 + var1[2];
  p_output1[113]=-0.21796*t7815 + 0.142184*t7828 + t7882 + var1[2];
  p_output1[114]=-0.219185*t7815 + 0.140064*t7828 + t7887 + var1[2];
  p_output1[115]=-0.221041*t7815 + 0.136852*t7828 + t7891 + var1[2];
  p_output1[116]=-0.223325*t7815 + 0.132899*t7828 + t7895 + var1[2];
  p_output1[117]=-0.225791*t7815 + 0.128631*t7828 + t7900 + var1[2];
  p_output1[118]=-0.228171*t7815 + 0.124511*t7828 + t7904 + var1[2];
  p_output1[119]=t8081;
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

#include "Link_base_chassis_link_to_motor_back_leftL_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_motor_back_leftL_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
