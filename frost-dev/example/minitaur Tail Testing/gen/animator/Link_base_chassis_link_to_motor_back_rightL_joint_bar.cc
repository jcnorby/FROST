/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:21 GMT-04:00
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
  double t6559;
  double t6574;
  double t6623;
  double t6628;
  double t6595;
  double t6626;
  double t6633;
  double t6634;
  double t8628;
  double t8631;
  double t8630;
  double t8640;
  double t8644;
  double t8646;
  double t8648;
  double t8649;
  double t8629;
  double t8645;
  double t8650;
  double t8657;
  double t8829;
  double t8831;
  double t8834;
  double t8838;
  double t8841;
  double t8842;
  double t8825;
  double t8837;
  double t8843;
  double t8846;
  double t6688;
  double t6712;
  double t6736;
  double t6759;
  double t7534;
  double t7627;
  double t8052;
  double t8190;
  double t8313;
  double t8332;
  double t8377;
  double t8396;
  double t8414;
  double t8430;
  double t8473;
  double t8499;
  double t8532;
  double t8566;
  double t8967;
  double t8968;
  double t8969;
  double t8658;
  double t8664;
  double t8679;
  double t8699;
  double t8704;
  double t8718;
  double t8732;
  double t8743;
  double t8748;
  double t8758;
  double t8767;
  double t8774;
  double t8782;
  double t8788;
  double t8798;
  double t8805;
  double t8811;
  double t8818;
  double t9042;
  double t9043;
  double t9044;
  double t8848;
  double t8854;
  double t8860;
  double t8868;
  double t8892;
  double t8898;
  double t8907;
  double t8911;
  double t8915;
  double t8920;
  double t8925;
  double t8929;
  double t8934;
  double t8940;
  double t8945;
  double t8951;
  double t8957;
  double t8963;
  double t9118;
  double t9120;
  double t9122;
  t6559 = Cos(var1[4]);
  t6574 = Cos(var1[5]);
  t6623 = Sin(var1[4]);
  t6628 = Sin(var1[5]);
  t6595 = -0.004111*t6559*t6574;
  t6626 = 0.012549*t6623;
  t6633 = -0.007114*t6559*t6628;
  t6634 = var1[0] + t6595 + t6626 + t6633;
  t8628 = Sin(var1[3]);
  t8631 = Cos(var1[3]);
  t8630 = t6574*t8628*t6623;
  t8640 = t8631*t6628;
  t8644 = t8630 + t8640;
  t8646 = t8631*t6574;
  t8648 = -1.*t8628*t6623*t6628;
  t8649 = t8646 + t8648;
  t8629 = -0.012549*t6559*t8628;
  t8645 = -0.004111*t8644;
  t8650 = 0.007114*t8649;
  t8657 = var1[1] + t8629 + t8645 + t8650;
  t8829 = -1.*t8631*t6574*t6623;
  t8831 = t8628*t6628;
  t8834 = t8829 + t8831;
  t8838 = t6574*t8628;
  t8841 = t8631*t6623*t6628;
  t8842 = t8838 + t8841;
  t8825 = 0.012549*t8631*t6559;
  t8837 = -0.004111*t8834;
  t8843 = 0.007114*t8842;
  t8846 = var1[2] + t8825 + t8837 + t8843;
  t6688 = 0.009202*t6623;
  t6712 = 0.004857*t6623;
  t6736 = -0.000015*t6623;
  t6759 = -0.004884*t6623;
  t7534 = -0.009225*t6623;
  t7627 = -0.012566*t6623;
  t8052 = -0.014545*t6623;
  t8190 = -0.014948*t6623;
  t8313 = -0.013731*t6623;
  t8332 = -0.011026*t6623;
  t8377 = -0.007126*t6623;
  t8396 = -0.002454*t6623;
  t8414 = 0.002483*t6623;
  t8430 = 0.007152*t6623;
  t8473 = 0.011046*t6623;
  t8499 = 0.013743*t6623;
  t8532 = 0.01495*t6623;
  t8566 = 0.014537*t6623;
  t8967 = -0.229111*t6559*t6574;
  t8968 = 0.122886*t6559*t6628;
  t8969 = var1[0] + t8967 + t6626 + t8968;
  t8658 = -0.009202*t6559*t8628;
  t8664 = -0.004857*t6559*t8628;
  t8679 = 0.000015*t6559*t8628;
  t8699 = 0.004884*t6559*t8628;
  t8704 = 0.009225*t6559*t8628;
  t8718 = 0.012566*t6559*t8628;
  t8732 = 0.014545*t6559*t8628;
  t8743 = 0.014948*t6559*t8628;
  t8748 = 0.013731*t6559*t8628;
  t8758 = 0.011026*t6559*t8628;
  t8767 = 0.007126*t6559*t8628;
  t8774 = 0.002454*t6559*t8628;
  t8782 = -0.002483*t6559*t8628;
  t8788 = -0.007152*t6559*t8628;
  t8798 = -0.011046*t6559*t8628;
  t8805 = -0.013743*t6559*t8628;
  t8811 = -0.01495*t6559*t8628;
  t8818 = -0.014537*t6559*t8628;
  t9042 = -0.229111*t8644;
  t9043 = -0.122886*t8649;
  t9044 = var1[1] + t8629 + t9042 + t9043;
  t8848 = 0.009202*t8631*t6559;
  t8854 = 0.004857*t8631*t6559;
  t8860 = -0.000015*t8631*t6559;
  t8868 = -0.004884*t8631*t6559;
  t8892 = -0.009225*t8631*t6559;
  t8898 = -0.012566*t8631*t6559;
  t8907 = -0.014545*t8631*t6559;
  t8911 = -0.014948*t8631*t6559;
  t8915 = -0.013731*t8631*t6559;
  t8920 = -0.011026*t8631*t6559;
  t8925 = -0.007126*t8631*t6559;
  t8929 = -0.002454*t8631*t6559;
  t8934 = 0.002483*t8631*t6559;
  t8940 = 0.007152*t8631*t6559;
  t8945 = 0.011046*t8631*t6559;
  t8951 = 0.013743*t8631*t6559;
  t8957 = 0.01495*t8631*t6559;
  t8963 = 0.014537*t8631*t6559;
  t9118 = -0.229111*t8834;
  t9120 = -0.122886*t8842;
  t9122 = var1[2] + t8825 + t9118 + t9120;
  p_output1[0]=t6634;
  p_output1[1]=-0.005926*t6559*t6574 - 0.010257*t6559*t6628 + t6688 + var1[0];
  p_output1[2]=-0.0071*t6559*t6574 - 0.012288*t6559*t6628 + t6712 + var1[0];
  p_output1[3]=-0.007504*t6559*t6574 - 0.012988*t6559*t6628 + t6736 + var1[0];
  p_output1[4]=-0.007095*t6559*t6574 - 0.01228*t6559*t6628 + t6759 + var1[0];
  p_output1[5]=-0.005917*t6559*t6574 - 0.010241*t6559*t6628 + t7534 + var1[0];
  p_output1[6]=-0.004098*t6559*t6574 - 0.007093*t6559*t6628 + t7627 + var1[0];
  p_output1[7]=-0.001835*t6559*t6574 - 0.003176*t6559*t6628 + t8052 + var1[0];
  p_output1[8]=0.000627*t6559*t6574 + 0.001085*t6559*t6628 + t8190 + var1[0];
  p_output1[9]=0.003021*t6559*t6574 + 0.005229*t6559*t6628 + t8313 + var1[0];
  p_output1[10]=0.005088*t6559*t6574 + 0.008806*t6559*t6628 + t8332 + var1[0];
  p_output1[11]=0.006603*t6559*t6574 + 0.011429*t6559*t6628 + t8377 + var1[0];
  p_output1[12]=0.007403*t6559*t6574 + 0.012813*t6559*t6628 + t8396 + var1[0];
  p_output1[13]=0.007401*t6559*t6574 + 0.012809*t6559*t6628 + t8414 + var1[0];
  p_output1[14]=0.006596*t6559*t6574 + 0.011417*t6559*t6628 + t8430 + var1[0];
  p_output1[15]=0.005077*t6559*t6574 + 0.008787*t6559*t6628 + t8473 + var1[0];
  p_output1[16]=0.003008*t6559*t6574 + 0.005206*t6559*t6628 + t8499 + var1[0];
  p_output1[17]=0.000612*t6559*t6574 + 0.00106*t6559*t6628 + t8532 + var1[0];
  p_output1[18]=-0.001849*t6559*t6574 - 0.003201*t6559*t6628 + t8566 + var1[0];
  p_output1[19]=t6634;
  p_output1[20]=t8657;
  p_output1[21]=-0.005926*t8644 + 0.010257*t8649 + t8658 + var1[1];
  p_output1[22]=-0.0071*t8644 + 0.012288*t8649 + t8664 + var1[1];
  p_output1[23]=-0.007504*t8644 + 0.012988*t8649 + t8679 + var1[1];
  p_output1[24]=-0.007095*t8644 + 0.01228*t8649 + t8699 + var1[1];
  p_output1[25]=-0.005917*t8644 + 0.010241*t8649 + t8704 + var1[1];
  p_output1[26]=-0.004098*t8644 + 0.007093*t8649 + t8718 + var1[1];
  p_output1[27]=-0.001835*t8644 + 0.003176*t8649 + t8732 + var1[1];
  p_output1[28]=0.000627*t8644 - 0.001085*t8649 + t8743 + var1[1];
  p_output1[29]=0.003021*t8644 - 0.005229*t8649 + t8748 + var1[1];
  p_output1[30]=0.005088*t8644 - 0.008806*t8649 + t8758 + var1[1];
  p_output1[31]=0.006603*t8644 - 0.011429*t8649 + t8767 + var1[1];
  p_output1[32]=0.007403*t8644 - 0.012813*t8649 + t8774 + var1[1];
  p_output1[33]=0.007401*t8644 - 0.012809*t8649 + t8782 + var1[1];
  p_output1[34]=0.006596*t8644 - 0.011417*t8649 + t8788 + var1[1];
  p_output1[35]=0.005077*t8644 - 0.008787*t8649 + t8798 + var1[1];
  p_output1[36]=0.003008*t8644 - 0.005206*t8649 + t8805 + var1[1];
  p_output1[37]=0.000612*t8644 - 0.00106*t8649 + t8811 + var1[1];
  p_output1[38]=-0.001849*t8644 + 0.003201*t8649 + t8818 + var1[1];
  p_output1[39]=t8657;
  p_output1[40]=t8846;
  p_output1[41]=-0.005926*t8834 + 0.010257*t8842 + t8848 + var1[2];
  p_output1[42]=-0.0071*t8834 + 0.012288*t8842 + t8854 + var1[2];
  p_output1[43]=-0.007504*t8834 + 0.012988*t8842 + t8860 + var1[2];
  p_output1[44]=-0.007095*t8834 + 0.01228*t8842 + t8868 + var1[2];
  p_output1[45]=-0.005917*t8834 + 0.010241*t8842 + t8892 + var1[2];
  p_output1[46]=-0.004098*t8834 + 0.007093*t8842 + t8898 + var1[2];
  p_output1[47]=-0.001835*t8834 + 0.003176*t8842 + t8907 + var1[2];
  p_output1[48]=0.000627*t8834 - 0.001085*t8842 + t8911 + var1[2];
  p_output1[49]=0.003021*t8834 - 0.005229*t8842 + t8915 + var1[2];
  p_output1[50]=0.005088*t8834 - 0.008806*t8842 + t8920 + var1[2];
  p_output1[51]=0.006603*t8834 - 0.011429*t8842 + t8925 + var1[2];
  p_output1[52]=0.007403*t8834 - 0.012813*t8842 + t8929 + var1[2];
  p_output1[53]=0.007401*t8834 - 0.012809*t8842 + t8934 + var1[2];
  p_output1[54]=0.006596*t8834 - 0.011417*t8842 + t8940 + var1[2];
  p_output1[55]=0.005077*t8834 - 0.008787*t8842 + t8945 + var1[2];
  p_output1[56]=0.003008*t8834 - 0.005206*t8842 + t8951 + var1[2];
  p_output1[57]=0.000612*t8834 - 0.00106*t8842 + t8957 + var1[2];
  p_output1[58]=-0.001849*t8834 + 0.003201*t8842 + t8963 + var1[2];
  p_output1[59]=t8846;
  p_output1[60]=t8969;
  p_output1[61]=-0.230926*t6559*t6574 + 0.119743*t6559*t6628 + t6688 + var1[0];
  p_output1[62]=-0.2321*t6559*t6574 + 0.117712*t6559*t6628 + t6712 + var1[0];
  p_output1[63]=-0.232504*t6559*t6574 + 0.117012*t6559*t6628 + t6736 + var1[0];
  p_output1[64]=-0.232095*t6559*t6574 + 0.11772*t6559*t6628 + t6759 + var1[0];
  p_output1[65]=-0.230917*t6559*t6574 + 0.119759*t6559*t6628 + t7534 + var1[0];
  p_output1[66]=-0.229098*t6559*t6574 + 0.122907*t6559*t6628 + t7627 + var1[0];
  p_output1[67]=-0.226835*t6559*t6574 + 0.126824*t6559*t6628 + t8052 + var1[0];
  p_output1[68]=-0.224373*t6559*t6574 + 0.131085*t6559*t6628 + t8190 + var1[0];
  p_output1[69]=-0.221979*t6559*t6574 + 0.135229*t6559*t6628 + t8313 + var1[0];
  p_output1[70]=-0.219912*t6559*t6574 + 0.138806*t6559*t6628 + t8332 + var1[0];
  p_output1[71]=-0.218397*t6559*t6574 + 0.141429*t6559*t6628 + t8377 + var1[0];
  p_output1[72]=-0.217597*t6559*t6574 + 0.142813*t6559*t6628 + t8396 + var1[0];
  p_output1[73]=-0.217599*t6559*t6574 + 0.142809*t6559*t6628 + t8414 + var1[0];
  p_output1[74]=-0.218404*t6559*t6574 + 0.141417*t6559*t6628 + t8430 + var1[0];
  p_output1[75]=-0.219923*t6559*t6574 + 0.138787*t6559*t6628 + t8473 + var1[0];
  p_output1[76]=-0.221992*t6559*t6574 + 0.135206*t6559*t6628 + t8499 + var1[0];
  p_output1[77]=-0.224388*t6559*t6574 + 0.13106*t6559*t6628 + t8532 + var1[0];
  p_output1[78]=-0.226849*t6559*t6574 + 0.126799*t6559*t6628 + t8566 + var1[0];
  p_output1[79]=t8969;
  p_output1[80]=t9044;
  p_output1[81]=-0.230926*t8644 - 0.119743*t8649 + t8658 + var1[1];
  p_output1[82]=-0.2321*t8644 - 0.117712*t8649 + t8664 + var1[1];
  p_output1[83]=-0.232504*t8644 - 0.117012*t8649 + t8679 + var1[1];
  p_output1[84]=-0.232095*t8644 - 0.11772*t8649 + t8699 + var1[1];
  p_output1[85]=-0.230917*t8644 - 0.119759*t8649 + t8704 + var1[1];
  p_output1[86]=-0.229098*t8644 - 0.122907*t8649 + t8718 + var1[1];
  p_output1[87]=-0.226835*t8644 - 0.126824*t8649 + t8732 + var1[1];
  p_output1[88]=-0.224373*t8644 - 0.131085*t8649 + t8743 + var1[1];
  p_output1[89]=-0.221979*t8644 - 0.135229*t8649 + t8748 + var1[1];
  p_output1[90]=-0.219912*t8644 - 0.138806*t8649 + t8758 + var1[1];
  p_output1[91]=-0.218397*t8644 - 0.141429*t8649 + t8767 + var1[1];
  p_output1[92]=-0.217597*t8644 - 0.142813*t8649 + t8774 + var1[1];
  p_output1[93]=-0.217599*t8644 - 0.142809*t8649 + t8782 + var1[1];
  p_output1[94]=-0.218404*t8644 - 0.141417*t8649 + t8788 + var1[1];
  p_output1[95]=-0.219923*t8644 - 0.138787*t8649 + t8798 + var1[1];
  p_output1[96]=-0.221992*t8644 - 0.135206*t8649 + t8805 + var1[1];
  p_output1[97]=-0.224388*t8644 - 0.13106*t8649 + t8811 + var1[1];
  p_output1[98]=-0.226849*t8644 - 0.126799*t8649 + t8818 + var1[1];
  p_output1[99]=t9044;
  p_output1[100]=t9122;
  p_output1[101]=-0.230926*t8834 - 0.119743*t8842 + t8848 + var1[2];
  p_output1[102]=-0.2321*t8834 - 0.117712*t8842 + t8854 + var1[2];
  p_output1[103]=-0.232504*t8834 - 0.117012*t8842 + t8860 + var1[2];
  p_output1[104]=-0.232095*t8834 - 0.11772*t8842 + t8868 + var1[2];
  p_output1[105]=-0.230917*t8834 - 0.119759*t8842 + t8892 + var1[2];
  p_output1[106]=-0.229098*t8834 - 0.122907*t8842 + t8898 + var1[2];
  p_output1[107]=-0.226835*t8834 - 0.126824*t8842 + t8907 + var1[2];
  p_output1[108]=-0.224373*t8834 - 0.131085*t8842 + t8911 + var1[2];
  p_output1[109]=-0.221979*t8834 - 0.135229*t8842 + t8915 + var1[2];
  p_output1[110]=-0.219912*t8834 - 0.138806*t8842 + t8920 + var1[2];
  p_output1[111]=-0.218397*t8834 - 0.141429*t8842 + t8925 + var1[2];
  p_output1[112]=-0.217597*t8834 - 0.142813*t8842 + t8929 + var1[2];
  p_output1[113]=-0.217599*t8834 - 0.142809*t8842 + t8934 + var1[2];
  p_output1[114]=-0.218404*t8834 - 0.141417*t8842 + t8940 + var1[2];
  p_output1[115]=-0.219923*t8834 - 0.138787*t8842 + t8945 + var1[2];
  p_output1[116]=-0.221992*t8834 - 0.135206*t8842 + t8951 + var1[2];
  p_output1[117]=-0.224388*t8834 - 0.13106*t8842 + t8957 + var1[2];
  p_output1[118]=-0.226849*t8834 - 0.126799*t8842 + t8963 + var1[2];
  p_output1[119]=t9122;
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

#include "Link_base_chassis_link_to_motor_back_rightL_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_motor_back_rightL_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
