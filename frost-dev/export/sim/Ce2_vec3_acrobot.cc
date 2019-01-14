/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:31 GMT-05:00
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
  double t4765;
  double t4519;
  double t4525;
  double t4804;
  double t4879;
  double t4540;
  double t4809;
  double t4877;
  double t4470;
  double t4885;
  double t4892;
  double t4899;
  double t4907;
  double t4448;
  double t5344;
  double t5530;
  double t4901;
  double t5621;
  double t5626;
  double t5678;
  double t5592;
  double t5593;
  double t5594;
  double t5534;
  double t5535;
  double t5553;
  double t5576;
  double t4878;
  double t4903;
  double t4906;
  double t4910;
  double t4932;
  double t4934;
  double t4952;
  double t4953;
  double t5782;
  double t5783;
  double t5254;
  double t5286;
  double t5306;
  double t5855;
  double t5856;
  double t5857;
  double t5839;
  double t5843;
  double t5845;
  double t5852;
  double t4960;
  double t5205;
  double t5219;
  double t5238;
  double t5308;
  double t5320;
  double t5926;
  double t5693;
  double t5694;
  double t5695;
  double t5701;
  double t5703;
  double t5704;
  double t5705;
  double t5722;
  double t5975;
  double t5980;
  double t5985;
  double t5986;
  double t5941;
  double t5950;
  double t5954;
  double t5761;
  double t5770;
  double t5771;
  double t6092;
  double t6102;
  double t6104;
  double t5888;
  double t5875;
  double t5880;
  double t5881;
  double t5885;
  double t5893;
  double t6050;
  double t6069;
  double t6079;
  double t6113;
  double t6118;
  double t6147;
  double t6154;
  double t6155;
  double t6173;
  double t6174;
  double t6175;
  double t6181;
  double t6195;
  double t6205;
  double t6900;
  double t7003;
  double t7008;
  double t7011;
  double t7025;
  double t7026;
  double t7382;
  double t7440;
  double t7451;
  double t7335;
  double t7338;
  double t7351;
  double t7359;
  double t7734;
  double t7761;
  double t8047;
  double t7513;
  double t7519;
  double t7520;
  double t6687;
  double t6698;
  double t6745;
  double t6601;
  double t6603;
  double t6605;
  double t5338;
  double t5585;
  double t5586;
  double t5595;
  double t5596;
  double t6641;
  double t6643;
  double t6647;
  double t5734;
  double t5738;
  double t5739;
  double t5742;
  double t5744;
  double t6323;
  double t6326;
  double t6588;
  double t5925;
  double t5928;
  double t5935;
  double t5781;
  double t5853;
  double t5862;
  double t5870;
  double t6620;
  double t6625;
  double t5968;
  double t5973;
  double t5987;
  double t5988;
  double t5996;
  double t6000;
  double t6009;
  double t6010;
  double t6109;
  double t6239;
  double t6291;
  double t6320;
  double t6589;
  double t6591;
  double t6594;
  double t6596;
  double t6600;
  double t6606;
  double t6607;
  double t6612;
  double t6635;
  double t6657;
  double t6662;
  double t6663;
  double t6674;
  double t6678;
  double t6758;
  double t6759;
  double t7035;
  double t7038;
  double t7043;
  double t7299;
  double t7307;
  double t7310;
  double t7314;
  double t7375;
  double t7475;
  double t7478;
  double t7482;
  double t7484;
  double t7508;
  double t7579;
  double t8048;
  double t8705;
  double t8784;
  double t8833;
  double t8995;
  double t9649;
  double t9698;
  double t9762;
  double t9809;
  double t9822;
  double t9826;
  double t9827;
  double t9855;
  double t6833;
  double t7111;
  double t7320;
  double t7480;
  double t7511;
  double t8779;
  double t8996;
  double t9001;
  double t5778;
  double t5898;
  double t5939;
  double t5989;
  double t6033;
  double t6037;
  double t9258;
  double t9322;
  double t9376;
  double t9390;
  double t9430;
  double t9443;
  double t5324;
  double t5732;
  double t5746;
  double t5748;
  double t9137;
  double t9141;
  double t9142;
  double t9235;
  t4765 = Cos(var1[4]);
  t4519 = Cos(var1[5]);
  t4525 = Sin(var1[4]);
  t4804 = Sin(var1[5]);
  t4879 = Cos(var1[3]);
  t4540 = t4519*t4525;
  t4809 = t4765*t4804;
  t4877 = t4540 + t4809;
  t4470 = Sin(var1[3]);
  t4885 = t4765*t4519;
  t4892 = -1.*t4525*t4804;
  t4899 = t4885 + t4892;
  t4907 = Cos(var1[2]);
  t4448 = Sin(var1[2]);
  t5344 = -1.*t4519;
  t5530 = 1. + t5344;
  t4901 = t4879*t4899;
  t5621 = -1.*t4519*t4525;
  t5626 = -1.*t4765*t4804;
  t5678 = t5621 + t5626;
  t5592 = 0.8*t5530;
  t5593 = 1.04*t4519;
  t5594 = t5592 + t5593;
  t5534 = -0.15*t5530;
  t5535 = -0.15*t4519;
  t5553 = -0.24*t4804;
  t5576 = t5534 + t5535 + t5553;
  t4878 = -1.*t4470*t4877;
  t4903 = t4878 + t4901;
  t4906 = -1.*t4448*t4903;
  t4910 = t4879*t4877;
  t4932 = t4470*t4899;
  t4934 = t4910 + t4932;
  t4952 = t4907*t4934;
  t4953 = t4906 + t4952;
  t5782 = -1.*t4765;
  t5783 = 1. + t5782;
  t5254 = t4879*t4765;
  t5286 = -1.*t4470*t4525;
  t5306 = t5254 + t5286;
  t5855 = 0.4*t5783;
  t5856 = 0.69*t4765;
  t5857 = t5855 + t5856;
  t5839 = -0.15*t5783;
  t5843 = -0.15*t4765;
  t5845 = -0.29*t4525;
  t5852 = t5839 + t5843 + t5845;
  t4960 = t4765*t4470;
  t5205 = t4879*t4525;
  t5219 = t4960 + t5205;
  t5238 = t4907*t5219;
  t5308 = -1.*t4448*t5306;
  t5320 = t5238 + t5308;
  t5926 = 0.15*t4525;
  t5693 = t4470*t5678;
  t5694 = t5693 + t4901;
  t5695 = t4907*t5694;
  t5701 = t4879*t5678;
  t5703 = -1.*t4470*t4899;
  t5704 = t5701 + t5703;
  t5705 = -1.*t4448*t5704;
  t5722 = t5695 + t5705;
  t5975 = 0.4*t4525;
  t5980 = -1.*t5594*t4525;
  t5985 = t4765*t5576;
  t5986 = t5839 + t5975 + t5980 + t5985;
  t5941 = t4765*t5594;
  t5950 = t4525*t5576;
  t5954 = t5855 + t5941 + t5926 + t5950;
  t5761 = -1.*t4879*t4448;
  t5770 = t4907*t4470;
  t5771 = t5761 + t5770;
  t6092 = t4907*t4879;
  t6102 = t4448*t4470;
  t6104 = t6092 + t6102;
  t5888 = t4907*t5306;
  t5875 = -1.*t4765*t4470;
  t5880 = -1.*t4879*t4525;
  t5881 = t5875 + t5880;
  t5885 = -1.*t4448*t5881;
  t5893 = t5885 + t5888;
  t6050 = t4879*t4448;
  t6069 = -1.*t4907*t4470;
  t6079 = t6050 + t6069;
  t6113 = t4448*t5219;
  t6118 = t6113 + t5888;
  t6147 = t4907*t5881;
  t6154 = t4448*t5306;
  t6155 = t6147 + t6154;
  t6173 = t4448*t5694;
  t6174 = t4907*t5704;
  t6175 = t6173 + t6174;
  t6181 = t4907*t4903;
  t6195 = t4448*t4934;
  t6205 = t6181 + t6195;
  t6900 = -1.*t4879;
  t7003 = 1. + t6900;
  t7008 = -0.15*t7003;
  t7011 = -0.15*t4879;
  t7025 = -0.16*t4470;
  t7026 = t7008 + t7011 + t7025;
  t7382 = -1.*t5857*t4470;
  t7440 = t4879*t5852;
  t7451 = t7008 + t7382 + t7440;
  t7335 = t4879*t5857;
  t7338 = 0.15*t4470;
  t7351 = t4470*t5852;
  t7359 = t7335 + t7338 + t7351;
  t7734 = t4879*t5986;
  t7761 = -1.*t4470*t5954;
  t8047 = t7008 + t7734 + t7761;
  t7513 = t4470*t5986;
  t7519 = t4879*t5954;
  t7520 = t7338 + t7513 + t7519;
  t6687 = -1.*t4907*t4903;
  t6698 = -1.*t4448*t4934;
  t6745 = t6687 + t6698;
  t6601 = -1.*t4448*t5219;
  t6603 = -1.*t4907*t5306;
  t6605 = t6601 + t6603;
  t5338 = 0.15*t4519;
  t5585 = t4519*t5576;
  t5586 = -0.4*t4804;
  t5595 = t5594*t4804;
  t5596 = t5338 + t5585 + t5586 + t5595;
  t6641 = -1.*t4448*t5694;
  t6643 = -1.*t4907*t5704;
  t6647 = t6641 + t6643;
  t5734 = 0.4*t4519;
  t5738 = -1.*t4519*t5594;
  t5739 = 0.15*t4804;
  t5742 = t5576*t4804;
  t5744 = t5734 + t5738 + t5739 + t5742;
  t6323 = -1.*t4907*t4879;
  t6326 = -1.*t4448*t4470;
  t6588 = t6323 + t6326;
  t5925 = -1.*t5857*t4765;
  t5928 = t5852*t4525;
  t5935 = t5925 + t5926 + t5928;
  t5781 = 0.15*t4765;
  t5853 = t4765*t5852;
  t5862 = t5857*t4525;
  t5870 = t5781 + t5853 + t5862;
  t6620 = -1.*t4907*t5881;
  t6625 = t6620 + t5308;
  t5968 = t5954*t4877;
  t5973 = 0.15*t4899;
  t5987 = t5986*t4899;
  t5988 = t5968 + t5973 + t5987;
  t5996 = -1.*t5986*t5678;
  t6000 = 0.15*t4877;
  t6009 = -1.*t5954*t4899;
  t6010 = t5996 + t6000 + t6009;
  t6109 = 12.8*t5771*t6104;
  t6239 = 6.4*t6079*t5771;
  t6291 = Power(t5771,2);
  t6320 = 6.4*t6291;
  t6589 = 6.4*t6588*t6104;
  t6591 = Power(t6104,2);
  t6594 = 6.4*t6591;
  t6596 = Power(t5893,2);
  t6600 = 13.6*t6596;
  t6606 = 13.6*t6605*t6118;
  t6607 = Power(t5320,2);
  t6612 = 13.6*t6607;
  t6635 = 13.6*t6625*t6155;
  t6657 = 12.*t6647*t6175;
  t6662 = Power(t5722,2);
  t6663 = 12.*t6662;
  t6674 = Power(t4953,2);
  t6678 = 12.*t6674;
  t6758 = 12.*t6745*t6205;
  t6759 = t6239 + t6320 + t6589 + t6594 + t6600 + t6606 + t6612 + t6635 + t6657 + t6663 + t6678 + t6758;
  t7035 = -1.*t4879*t7026;
  t7038 = -0.16*t4879*t4470;
  t7043 = t7035 + t7038;
  t7299 = Power(t4879,2);
  t7307 = 0.16*t7299;
  t7310 = -1.*t7026*t4470;
  t7314 = t7307 + t7310;
  t7375 = -1.*t7359*t5219;
  t7475 = -1.*t7451*t5306;
  t7478 = t7375 + t7475;
  t7482 = t7451*t5881;
  t7484 = t7359*t5306;
  t7508 = t7482 + t7484;
  t7579 = t7520*t5694;
  t8048 = t8047*t5704;
  t8705 = t7579 + t8048;
  t8784 = -1.*t8047*t4903;
  t8833 = -1.*t7520*t4934;
  t8995 = t8784 + t8833;
  t9649 = -0.048*t4448;
  t9698 = 6.4*t5771*t7043;
  t9762 = 6.4*t6588*t7314;
  t9809 = 13.6*t6625*t7478;
  t9822 = 13.6*t6605*t7508;
  t9826 = 12.*t8705*t6745;
  t9827 = 12.*t6647*t8995;
  t9855 = t9649 + t9698 + t9762 + t9809 + t9822 + t9826 + t9827;
  t6833 = 0.048*t4907;
  t7111 = 6.4*t7043*t6104;
  t7320 = 6.4*t5771*t7314;
  t7480 = 13.6*t5893*t7478;
  t7511 = 13.6*t5320*t7508;
  t8779 = 12.*t8705*t4953;
  t8996 = 12.*t5722*t8995;
  t9001 = t6833 + t7111 + t7320 + t7480 + t7511 + t8779 + t8996;
  t5778 = -1.024*t5771;
  t5898 = 13.6*t5870*t5893;
  t5939 = 13.6*t5935*t5320;
  t5989 = 12.*t5988*t5722;
  t6033 = 12.*t6010*t4953;
  t6037 = t5778 + t5898 + t5939 + t5989 + t6033;
  t9258 = -1.024*t6588;
  t9322 = 13.6*t5935*t6605;
  t9376 = 13.6*t5870*t6625;
  t9390 = 12.*t5988*t6647;
  t9430 = 12.*t6010*t6745;
  t9443 = t9258 + t9322 + t9376 + t9390 + t9430;
  t5324 = -3.944*t5320;
  t5732 = 12.*t5596*t5722;
  t5746 = 12.*t5744*t4953;
  t5748 = t5324 + t5732 + t5746;
  t9137 = -3.944*t6605;
  t9141 = 12.*t5596*t6647;
  t9142 = 12.*t5744*t6745;
  t9235 = t9137 + t9141 + t9142;
  p_output1[0]=var2[2]*(-0.5*(12.8*t6079*t6104 + t6109 + 27.2*t5320*t6118 + 27.2*t5893*t6155 + 24.*t5722*t6175 + 24.*t4953*t6205)*var2[0] - 0.5*t6759*var2[1] - 0.5*t9001*var2[2] - 0.5*t6037*var2[3] - 0.5*t5748*var2[4] + 1.44*t4953*var2[5]);
  p_output1[1]=var2[2]*(-0.5*t6759*var2[0] - 0.5*(t6109 + 12.8*t5771*t6588 + 27.2*t5320*t6605 + 27.2*t5893*t6625 + 24.*t5722*t6647 + 24.*t4953*t6745)*var2[1] - 0.5*t9855*var2[2] - 0.5*t9443*var2[3] - 0.5*t9235*var2[4] + 1.44*t6745*var2[5]);
  p_output1[2]=(-0.5*t9001*var2[0] - 0.5*t9855*var2[1])*var2[2];
  p_output1[3]=(-0.5*t6037*var2[0] - 0.5*t9443*var2[1])*var2[2];
  p_output1[4]=(-0.5*t5748*var2[0] - 0.5*t9235*var2[1])*var2[2];
  p_output1[5]=(1.44*t4953*var2[0] + 1.44*t6745*var2[1])*var2[2];
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

#include "Ce2_vec3_acrobot.hh"

namespace SymFunction
{

void Ce2_vec3_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
