/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:21 GMT-05:00
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
  double t2779;
  double t486;
  double t3960;
  double t4951;
  double t9922;
  double t11115;
  double t12135;
  double t13207;
  double t13374;
  double t27069;
  double t27391;
  double t27369;
  double t27400;
  double t27408;
  double t28935;
  double t29694;
  double t29951;
  double t32351;
  double t60496;
  double t60577;
  double t60654;
  double t4950;
  double t5127;
  double t5391;
  double t5494;
  double t6086;
  double t6283;
  double t10664;
  double t11410;
  double t11776;
  double t11880;
  double t13433;
  double t13678;
  double t19795;
  double t19839;
  double t20130;
  double t20269;
  double t22101;
  double t22151;
  double t28786;
  double t35451;
  double t59659;
  double t59664;
  double t59676;
  double t60128;
  double t60143;
  double t60296;
  double t60713;
  double t60731;
  double t60791;
  double t60872;
  double t61071;
  double t60744;
  double t61084;
  double t61088;
  double t62213;
  double t62214;
  double t62216;
  double t62220;
  double t62222;
  double t62223;
  double t62367;
  double t62380;
  double t62396;
  double t62498;
  double t62519;
  double t62657;
  double t62661;
  double t62666;
  double t62670;
  double t62682;
  double t62683;
  double t62684;
  double t62521;
  double t62524;
  double t62671;
  double t62673;
  double t62750;
  double t62751;
  double t62757;
  double t62761;
  double t62762;
  double t62765;
  double t62766;
  double t62767;
  double t62768;
  double t62749;
  double t62763;
  double t62769;
  double t62770;
  double t62772;
  double t62773;
  double t62775;
  double t62777;
  double t62787;
  double t62789;
  double t62793;
  double t62771;
  double t62778;
  double t62779;
  double t61361;
  double t61424;
  double t61438;
  double t61455;
  double t61535;
  double t61635;
  double t61653;
  double t61791;
  double t61792;
  double t61899;
  double t61924;
  double t61977;
  double t61999;
  double t62026;
  double t62038;
  double t62039;
  double t62040;
  double t62155;
  double t62170;
  double t62172;
  double t62191;
  double t753;
  double t2286;
  double t3322;
  double t3763;
  double t8767;
  double t9828;
  double t62253;
  double t62254;
  double t62255;
  double t62286;
  double t62287;
  double t62318;
  double t62332;
  double t62678;
  double t62685;
  double t62706;
  double t62708;
  double t62710;
  double t62711;
  double t62786;
  double t62795;
  double t62798;
  double t62813;
  double t62832;
  double t62844;
  double t62874;
  double t62876;
  double t62877;
  double t62879;
  double t62869;
  double t62870;
  double t62871;
  double t62911;
  double t62912;
  double t62916;
  double t62917;
  double t62942;
  double t62943;
  double t62944;
  double t62947;
  double t62957;
  double t62962;
  double t62987;
  double t62988;
  double t62989;
  double t62991;
  double t62992;
  double t62993;
  double t62994;
  double t62995;
  double t62212;
  double t62265;
  double t62366;
  double t62707;
  double t62716;
  double t62801;
  double t62845;
  double t62861;
  double t63043;
  double t63045;
  double t63046;
  double t63048;
  double t63050;
  double t63051;
  double t63052;
  double t63054;
  double t62866;
  double t62872;
  double t62903;
  double t62938;
  double t62953;
  double t62954;
  double t63060;
  double t63062;
  double t63064;
  double t63066;
  double t63068;
  double t63069;
  double t63122;
  double t63123;
  double t63124;
  double t63125;
  double t63126;
  double t63127;
  double t62956;
  double t62990;
  double t63015;
  double t63019;
  double t63070;
  double t63071;
  double t63072;
  double t63073;
  double t63130;
  double t63132;
  double t63133;
  double t63134;
  double t63179;
  double t63183;
  double t63184;
  double t63185;
  double t63021;
  double t63074;
  double t63142;
  double t63143;
  double t63187;
  double t63196;
  double t63238;
  double t63241;
  t2779 = Sin(var1[2]);
  t486 = Cos(var1[2]);
  t3960 = Cos(var1[3]);
  t4951 = Sin(var1[3]);
  t9922 = Cos(var1[4]);
  t11115 = Sin(var1[4]);
  t12135 = t3960*t9922;
  t13207 = -1.*t4951*t11115;
  t13374 = t12135 + t13207;
  t27069 = Cos(var1[5]);
  t27391 = Sin(var1[5]);
  t27369 = -1.*t27069*t11115;
  t27400 = -1.*t9922*t27391;
  t27408 = t27369 + t27400;
  t28935 = t9922*t27069;
  t29694 = -1.*t11115*t27391;
  t29951 = t28935 + t29694;
  t32351 = t3960*t29951;
  t60496 = t27069*t11115;
  t60577 = t9922*t27391;
  t60654 = t60496 + t60577;
  t4950 = t3960*t2779;
  t5127 = -1.*t486*t4951;
  t5391 = t4950 + t5127;
  t5494 = t486*t3960;
  t6086 = t2779*t4951;
  t6283 = t5494 + t6086;
  t10664 = t9922*t4951;
  t11410 = t3960*t11115;
  t11776 = t10664 + t11410;
  t11880 = t2779*t11776;
  t13433 = t486*t13374;
  t13678 = t11880 + t13433;
  t19795 = -1.*t9922*t4951;
  t19839 = -1.*t3960*t11115;
  t20130 = t19795 + t19839;
  t20269 = t486*t20130;
  t22101 = t2779*t13374;
  t22151 = t20269 + t22101;
  t28786 = t4951*t27408;
  t35451 = t28786 + t32351;
  t59659 = t2779*t35451;
  t59664 = t3960*t27408;
  t59676 = -1.*t4951*t29951;
  t60128 = t59664 + t59676;
  t60143 = t486*t60128;
  t60296 = t59659 + t60143;
  t60713 = -1.*t4951*t60654;
  t60731 = t60713 + t32351;
  t60791 = t3960*t60654;
  t60872 = t4951*t29951;
  t61071 = t60791 + t60872;
  t60744 = t486*t60731;
  t61084 = t2779*t61071;
  t61088 = t60744 + t61084;
  t62213 = -1.*t3960;
  t62214 = 1. + t62213;
  t62216 = -0.15*t62214;
  t62220 = -0.15*t3960;
  t62222 = -0.16*t4951;
  t62223 = t62216 + t62220 + t62222;
  t62367 = -1.*t9922;
  t62380 = 1. + t62367;
  t62396 = 0.4*t62380;
  t62498 = 0.69*t9922;
  t62519 = t62396 + t62498;
  t62657 = -0.15*t62380;
  t62661 = -0.15*t9922;
  t62666 = -0.29*t11115;
  t62670 = t62657 + t62661 + t62666;
  t62682 = -1.*t62519*t4951;
  t62683 = t3960*t62670;
  t62684 = t62216 + t62682 + t62683;
  t62521 = t3960*t62519;
  t62524 = 0.15*t4951;
  t62671 = t4951*t62670;
  t62673 = t62521 + t62524 + t62671;
  t62750 = -1.*t27069;
  t62751 = 1. + t62750;
  t62757 = 0.8*t62751;
  t62761 = 1.04*t27069;
  t62762 = t62757 + t62761;
  t62765 = -0.15*t62751;
  t62766 = -0.15*t27069;
  t62767 = -0.24*t27391;
  t62768 = t62765 + t62766 + t62767;
  t62749 = 0.4*t11115;
  t62763 = -1.*t62762*t11115;
  t62769 = t9922*t62768;
  t62770 = t62657 + t62749 + t62763 + t62769;
  t62772 = t9922*t62762;
  t62773 = 0.15*t11115;
  t62775 = t11115*t62768;
  t62777 = t62396 + t62772 + t62773 + t62775;
  t62787 = t3960*t62770;
  t62789 = -1.*t4951*t62777;
  t62793 = t62216 + t62787 + t62789;
  t62771 = t4951*t62770;
  t62778 = t3960*t62777;
  t62779 = t62524 + t62771 + t62778;
  t61361 = 6.4*t5391*t6283;
  t61424 = -1.*t3960*t2779;
  t61438 = t486*t4951;
  t61455 = t61424 + t61438;
  t61535 = 6.4*t61455*t6283;
  t61635 = t486*t11776;
  t61653 = -1.*t2779*t13374;
  t61791 = t61635 + t61653;
  t61792 = 13.6*t13678*t61791;
  t61899 = -1.*t2779*t20130;
  t61924 = t61899 + t13433;
  t61977 = 13.6*t61924*t22151;
  t61999 = t486*t35451;
  t62026 = -1.*t2779*t60128;
  t62038 = t61999 + t62026;
  t62039 = 12.*t60296*t62038;
  t62040 = -1.*t2779*t60731;
  t62155 = t486*t61071;
  t62170 = t62040 + t62155;
  t62172 = 12.*t62170*t61088;
  t62191 = t61361 + t61535 + t61792 + t61977 + t62039 + t62172;
  t753 = Power(t486,2);
  t2286 = 0.4*t753;
  t3322 = Power(t2779,2);
  t3763 = 0.4*t3322;
  t8767 = Power(t6283,2);
  t9828 = 6.4*t8767;
  t62253 = -1.*t3960*t62223;
  t62254 = -0.16*t3960*t4951;
  t62255 = t62253 + t62254;
  t62286 = Power(t3960,2);
  t62287 = 0.16*t62286;
  t62318 = -1.*t62223*t4951;
  t62332 = t62287 + t62318;
  t62678 = -1.*t62673*t11776;
  t62685 = -1.*t62684*t13374;
  t62706 = t62678 + t62685;
  t62708 = t62684*t20130;
  t62710 = t62673*t13374;
  t62711 = t62708 + t62710;
  t62786 = t62779*t35451;
  t62795 = t62793*t60128;
  t62798 = t62786 + t62795;
  t62813 = -1.*t62793*t60731;
  t62832 = -1.*t62779*t61071;
  t62844 = t62813 + t62832;
  t62874 = 0.15*t9922;
  t62876 = t9922*t62670;
  t62877 = t62519*t11115;
  t62879 = t62874 + t62876 + t62877;
  t62869 = -1.*t62519*t9922;
  t62870 = t62670*t11115;
  t62871 = t62869 + t62773 + t62870;
  t62911 = t62777*t60654;
  t62912 = 0.15*t29951;
  t62916 = t62770*t29951;
  t62917 = t62911 + t62912 + t62916;
  t62942 = -1.*t62770*t27408;
  t62943 = 0.15*t60654;
  t62944 = -1.*t62777*t29951;
  t62947 = t62942 + t62943 + t62944;
  t62957 = 0.15*t27069;
  t62962 = t27069*t62768;
  t62987 = -0.4*t27391;
  t62988 = t62762*t27391;
  t62989 = t62957 + t62962 + t62987 + t62988;
  t62991 = 0.4*t27069;
  t62992 = -1.*t27069*t62762;
  t62993 = 0.15*t27391;
  t62994 = t62768*t27391;
  t62995 = t62991 + t62992 + t62993 + t62994;
  t62212 = 0.048*t2779;
  t62265 = 6.4*t5391*t62255;
  t62366 = 6.4*t6283*t62332;
  t62707 = 13.6*t22151*t62706;
  t62716 = 13.6*t13678*t62711;
  t62801 = 12.*t62798*t61088;
  t62845 = 12.*t60296*t62844;
  t62861 = t62212 + t62265 + t62366 + t62707 + t62716 + t62801 + t62845;
  t63043 = 0.048*t486;
  t63045 = 6.4*t62255*t6283;
  t63046 = 6.4*t61455*t62332;
  t63048 = 13.6*t61924*t62706;
  t63050 = 13.6*t61791*t62711;
  t63051 = 12.*t62798*t62170;
  t63052 = 12.*t62038*t62844;
  t63054 = t63043 + t63045 + t63046 + t63048 + t63050 + t63051 + t63052;
  t62866 = -1.024*t6283;
  t62872 = 13.6*t62871*t13678;
  t62903 = 13.6*t62879*t22151;
  t62938 = 12.*t62917*t60296;
  t62953 = 12.*t62947*t61088;
  t62954 = t62866 + t62872 + t62903 + t62938 + t62953;
  t63060 = -1.024*t61455;
  t63062 = 13.6*t62879*t61924;
  t63064 = 13.6*t62871*t61791;
  t63066 = 12.*t62917*t62038;
  t63068 = 12.*t62947*t62170;
  t63069 = t63060 + t63062 + t63064 + t63066 + t63068;
  t63122 = -1.024*t62332;
  t63123 = 13.6*t62879*t62706;
  t63124 = 13.6*t62871*t62711;
  t63125 = 12.*t62947*t62798;
  t63126 = 12.*t62917*t62844;
  t63127 = -2.67 + t63122 + t63123 + t63124 + t63125 + t63126;
  t62956 = -3.944*t13678;
  t62990 = 12.*t62989*t60296;
  t63015 = 12.*t62995*t61088;
  t63019 = t62956 + t62990 + t63015;
  t63070 = -3.944*t61791;
  t63071 = 12.*t62989*t62038;
  t63072 = 12.*t62995*t62170;
  t63073 = t63070 + t63071 + t63072;
  t63130 = -3.944*t62711;
  t63132 = 12.*t62995*t62798;
  t63133 = 12.*t62989*t62844;
  t63134 = -2.27 + t63130 + t63132 + t63133;
  t63179 = -3.944*t62871;
  t63183 = 12.*t62989*t62917;
  t63184 = 12.*t62995*t62947;
  t63185 = 2.27 + t63179 + t63183 + t63184;
  t63021 = -2.88*t61088;
  t63074 = -2.88*t62170;
  t63142 = -2.88*t62798;
  t63143 = -1.33 + t63142;
  t63187 = -2.88*t62947;
  t63196 = 1.33 + t63187;
  t63238 = -2.88*t62995;
  t63241 = 1.33 + t63238;
  p_output1[0]=13.6*Power(t13678,2) + 13.6*Power(t22151,2) + t2286 + t3763 + 6.4*Power(t5391,2) + 12.*Power(t60296,2) + 12.*Power(t61088,2) + t9828;
  p_output1[1]=t62191;
  p_output1[2]=t62861;
  p_output1[3]=t62954;
  p_output1[4]=t63019;
  p_output1[5]=t63021;
  p_output1[6]=t62191;
  p_output1[7]=t2286 + t3763 + 6.4*Power(t61455,2) + 13.6*Power(t61791,2) + 13.6*Power(t61924,2) + 12.*Power(t62038,2) + 12.*Power(t62170,2) + t9828;
  p_output1[8]=t63054;
  p_output1[9]=t63069;
  p_output1[10]=t63073;
  p_output1[11]=t63074;
  p_output1[12]=t62861;
  p_output1[13]=t63054;
  p_output1[14]=2.77576 + 6.4*Power(t62255,2) + 6.4*Power(t62332,2) + 13.6*Power(t62706,2) + 13.6*Power(t62711,2) + 12.*Power(t62798,2) + 12.*Power(t62844,2);
  p_output1[15]=t63127;
  p_output1[16]=t63134;
  p_output1[17]=t63143;
  p_output1[18]=t62954;
  p_output1[19]=t63069;
  p_output1[20]=t63127;
  p_output1[21]=2.83384 + 13.6*Power(t62871,2) + 13.6*Power(t62879,2) + 12.*Power(t62917,2) + 12.*Power(t62947,2);
  p_output1[22]=t63185;
  p_output1[23]=t63196;
  p_output1[24]=t63019;
  p_output1[25]=t63073;
  p_output1[26]=t63134;
  p_output1[27]=t63185;
  p_output1[28]=3.41376 + 12.*Power(t62989,2) + 12.*Power(t62995,2);
  p_output1[29]=t63241;
  p_output1[30]=t63021;
  p_output1[31]=t63074;
  p_output1[32]=t63143;
  p_output1[33]=t63196;
  p_output1[34]=t63241;
  p_output1[35]=2.0212;
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
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat_acrobot.hh"

namespace SymFunction
{

void Mmat_acrobot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
