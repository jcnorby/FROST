/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:39 GMT-05:00
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
  double t22615;
  double t26917;
  double t26995;
  double t27311;
  double t1345;
  double t5169;
  double t940;
  double t3755;
  double t27680;
  double t27689;
  double t27699;
  double t27001;
  double t27107;
  double t27339;
  double t27393;
  double t29534;
  double t29749;
  double t29790;
  double t32305;
  double t30163;
  double t32321;
  double t32584;
  double t33842;
  double t33261;
  double t33548;
  double t33675;
  double t33779;
  double t33833;
  double t33843;
  double t33895;
  double t34914;
  double t34946;
  double t34955;
  double t35156;
  double t35158;
  double t35159;
  double t34984;
  double t34996;
  double t35139;
  double t35141;
  double t34750;
  double t34752;
  double t34755;
  double t33739;
  double t34058;
  double t34749;
  double t35193;
  double t29928;
  double t30242;
  double t31021;
  double t31451;
  double t31576;
  double t31586;
  double t24021;
  double t27458;
  double t27771;
  double t27791;
  double t27840;
  double t28032;
  double t28685;
  double t32295;
  double t34859;
  double t34967;
  double t35143;
  double t35147;
  double t35163;
  double t35210;
  double t35234;
  double t35250;
  double t35263;
  double t35309;
  double t35318;
  double t35531;
  double t35532;
  double t35545;
  double t35753;
  double t35980;
  double t35983;
  double t36081;
  double t29474;
  double t29817;
  double t29838;
  double t38028;
  double t38250;
  double t38253;
  double t38254;
  double t38263;
  double t38275;
  double t38277;
  double t38304;
  double t38306;
  double t48661;
  double t48737;
  double t50006;
  double t50407;
  double t50409;
  double t50812;
  double t50971;
  double t54325;
  double t54361;
  double t55131;
  double t55163;
  double t55175;
  double t55791;
  double t50548;
  double t50704;
  double t50544;
  double t56992;
  double t57006;
  double t57621;
  double t57663;
  double t57665;
  double t57668;
  double t57736;
  double t57738;
  double t57009;
  double t57119;
  double t58020;
  double t57997;
  double t58004;
  double t58010;
  double t58011;
  double t58012;
  double t58016;
  double t58019;
  double t58023;
  double t58025;
  double t58031;
  double t58040;
  double t58042;
  double t58047;
  double t58093;
  double t58095;
  double t58097;
  double t58100;
  double t58102;
  double t58106;
  double t38665;
  double t58204;
  double t58299;
  double t58300;
  double t58303;
  double t58310;
  double t58313;
  double t58323;
  double t31712;
  double t32301;
  double t38668;
  double t38681;
  double t38701;
  double t35214;
  double t35298;
  double t35300;
  double t35924;
  double t36098;
  double t36099;
  double t38029;
  double t38038;
  double t38058;
  double t38064;
  double t38255;
  double t38260;
  double t38261;
  double t45042;
  double t58631;
  double t58641;
  double t48317;
  double t58492;
  double t58497;
  double t58499;
  double t58502;
  double t50545;
  double t55807;
  double t56157;
  double t64711;
  double t64745;
  double t64749;
  double t64751;
  double t64758;
  double t64773;
  double t56161;
  double t65015;
  double t65021;
  double t65026;
  double t65006;
  double t65007;
  double t65011;
  double t58056;
  double t58061;
  double t58062;
  double t58065;
  double t58074;
  double t65102;
  double t65104;
  double t65162;
  double t65189;
  double t65192;
  double t65193;
  double t58169;
  double t58172;
  double t58173;
  double t58174;
  double t58176;
  double t65179;
  double t65195;
  double t65198;
  double t65229;
  double t65230;
  double t65231;
  double t58344;
  double t58498;
  double t58503;
  double t58504;
  double t58510;
  double t58644;
  double t58647;
  double t58650;
  double t58760;
  double t58763;
  double t58770;
  double t58772;
  double t64964;
  double t64966;
  double t64986;
  double t65039;
  double t65041;
  double t65042;
  double t65005;
  double t65013;
  double t65265;
  double t65266;
  double t65267;
  double t65275;
  double t65278;
  double t65279;
  double t65082;
  double t65083;
  t22615 = Cos(var1[4]);
  t26917 = -1.*t22615;
  t26995 = 1. + t26917;
  t27311 = Sin(var1[4]);
  t1345 = Sin(var1[2]);
  t5169 = Sin(var1[3]);
  t940 = Cos(var1[3]);
  t3755 = Cos(var1[2]);
  t27680 = 0.4*t26995;
  t27689 = 0.69*t22615;
  t27699 = t27680 + t27689;
  t27001 = -0.15*t26995;
  t27107 = -0.15*t22615;
  t27339 = -0.29*t27311;
  t27393 = t27001 + t27107 + t27339;
  t29534 = t940*t22615;
  t29749 = -1.*t5169*t27311;
  t29790 = t29534 + t29749;
  t32305 = Cos(var1[5]);
  t30163 = 0.15*t27311;
  t32321 = -1.*t32305;
  t32584 = 1. + t32321;
  t33842 = Sin(var1[5]);
  t33261 = 0.8*t32584;
  t33548 = 1.04*t32305;
  t33675 = t33261 + t33548;
  t33779 = -0.15*t32584;
  t33833 = -0.15*t32305;
  t33843 = -0.24*t33842;
  t33895 = t33779 + t33833 + t33843;
  t34914 = t22615*t32305;
  t34946 = -1.*t27311*t33842;
  t34955 = t34914 + t34946;
  t35156 = -1.*t32305*t27311;
  t35158 = -1.*t22615*t33842;
  t35159 = t35156 + t35158;
  t34984 = 0.4*t27311;
  t34996 = -1.*t33675*t27311;
  t35139 = t22615*t33895;
  t35141 = t27001 + t34984 + t34996 + t35139;
  t34750 = t32305*t27311;
  t34752 = t22615*t33842;
  t34755 = t34750 + t34752;
  t33739 = t22615*t33675;
  t34058 = t27311*t33895;
  t34749 = t27680 + t33739 + t30163 + t34058;
  t35193 = t940*t34955;
  t29928 = -1.*t27699*t22615;
  t30242 = t27393*t27311;
  t31021 = t29928 + t30163 + t30242;
  t31451 = t22615*t5169;
  t31576 = t940*t27311;
  t31586 = t31451 + t31576;
  t24021 = 0.15*t22615;
  t27458 = t22615*t27393;
  t27771 = t27699*t27311;
  t27791 = t24021 + t27458 + t27771;
  t27840 = -1.*t22615*t5169;
  t28032 = -1.*t940*t27311;
  t28685 = t27840 + t28032;
  t32295 = -1.*t1345*t29790;
  t34859 = t34749*t34755;
  t34967 = 0.15*t34955;
  t35143 = t35141*t34955;
  t35147 = t34859 + t34967 + t35143;
  t35163 = t5169*t35159;
  t35210 = t35163 + t35193;
  t35234 = t940*t35159;
  t35250 = -1.*t5169*t34955;
  t35263 = t35234 + t35250;
  t35309 = -1.*t35141*t35159;
  t35318 = 0.15*t34755;
  t35531 = -1.*t34749*t34955;
  t35532 = t35309 + t35318 + t35531;
  t35545 = -1.*t5169*t34755;
  t35753 = t35545 + t35193;
  t35980 = t940*t34755;
  t35983 = t5169*t34955;
  t36081 = t35980 + t35983;
  t29474 = -1.*t1345*t28685;
  t29817 = t3755*t29790;
  t29838 = t29474 + t29817;
  t38028 = t3755*t28685;
  t38250 = -1.*t940*t22615;
  t38253 = t5169*t27311;
  t38254 = t38250 + t38253;
  t38263 = -1.*t5169*t35159;
  t38275 = -1.*t940*t34955;
  t38277 = t38263 + t38275;
  t38304 = -1.*t940*t34755;
  t38306 = t38304 + t35250;
  t48661 = -1.*t940;
  t48737 = 1. + t48661;
  t50006 = -0.15*t48737;
  t50407 = -1.*t27699*t5169;
  t50409 = t940*t27393;
  t50812 = -1.*t940*t27699;
  t50971 = -0.15*t5169;
  t54325 = -1.*t5169*t27393;
  t54361 = t50812 + t50971 + t54325;
  t55131 = t940*t27699;
  t55163 = 0.15*t5169;
  t55175 = t5169*t27393;
  t55791 = t55131 + t55163 + t55175;
  t50548 = 0.15*t940;
  t50704 = t50548 + t50407 + t50409;
  t50544 = t50006 + t50407 + t50409;
  t56992 = t940*t35141;
  t57006 = -1.*t5169*t34749;
  t57621 = -1.*t5169*t35141;
  t57663 = -1.*t940*t34749;
  t57665 = t50971 + t57621 + t57663;
  t57668 = t5169*t35141;
  t57736 = t940*t34749;
  t57738 = t55163 + t57668 + t57736;
  t57009 = t50006 + t56992 + t57006;
  t57119 = t50548 + t56992 + t57006;
  t58020 = t24021 + t34984 + t34996 + t35139;
  t57997 = 0.4*t22615;
  t58004 = -1.*t22615*t33675;
  t58010 = -0.15*t27311;
  t58011 = -1.*t27311*t33895;
  t58012 = t57997 + t58004 + t58010 + t58011;
  t58016 = -1.*t58012*t35159;
  t58019 = -1.*t34749*t35159;
  t58023 = -1.*t58020*t34955;
  t58025 = -1.*t22615*t32305;
  t58031 = t27311*t33842;
  t58040 = t58025 + t58031;
  t58042 = -1.*t35141*t58040;
  t58047 = t58016 + t58019 + t34967 + t58023 + t58042;
  t58093 = 0.15*t35159;
  t58095 = t35141*t35159;
  t58097 = t58020*t34755;
  t58100 = t58012*t34955;
  t58102 = t34749*t34955;
  t58106 = t58093 + t58095 + t58097 + t58100 + t58102;
  t38665 = -13.6*t31021*t29838;
  t58204 = t27699*t22615;
  t58299 = Power(t22615,2);
  t58300 = -0.29*t58299;
  t58303 = -1.*t27393*t27311;
  t58310 = Power(t27311,2);
  t58313 = -0.29*t58310;
  t58323 = t58204 + t58300 + t58010 + t58303 + t58313;
  t31712 = t3755*t31586;
  t32301 = t31712 + t32295;
  t38668 = -1.*t1345*t38254;
  t38681 = t38028 + t38668;
  t38701 = -13.6*t27791*t38681;
  t35214 = t3755*t35210;
  t35298 = -1.*t1345*t35263;
  t35300 = t35214 + t35298;
  t35924 = -1.*t1345*t35753;
  t36098 = t3755*t36081;
  t36099 = t35924 + t36098;
  t38029 = t1345*t29790;
  t38038 = t38028 + t38029;
  t38058 = -13.6*t31021*t38038;
  t38064 = t1345*t28685;
  t38255 = t3755*t38254;
  t38260 = t38064 + t38255;
  t38261 = -13.6*t27791*t38260;
  t45042 = t3755*t35263;
  t58631 = t1345*t35210;
  t58641 = t58631 + t45042;
  t48317 = t3755*t35753;
  t58492 = t940*t58040;
  t58497 = t38263 + t58492;
  t58499 = t5169*t58040;
  t58502 = t35234 + t58499;
  t50545 = -1.*t50544*t28685;
  t55807 = -1.*t55791*t29790;
  t56157 = t55791*t28685;
  t64711 = -0.29*t22615*t5169;
  t64745 = -0.29*t940*t27311;
  t64749 = t64711 + t64745;
  t64751 = -0.29*t940*t22615;
  t64758 = 0.29*t5169*t27311;
  t64773 = t64751 + t64758;
  t56161 = t50544*t38254;
  t65015 = t940*t58020;
  t65021 = t5169*t58012;
  t65026 = t65015 + t65021;
  t65006 = -1.*t5169*t58020;
  t65007 = t940*t58012;
  t65011 = t65006 + t65007;
  t58056 = 0.15*t32305;
  t58061 = t32305*t33895;
  t58062 = -0.4*t33842;
  t58065 = t33675*t33842;
  t58074 = t58056 + t58061 + t58062 + t58065;
  t65102 = -0.24*t32305*t27311;
  t65104 = -0.24*t22615*t33842;
  t65162 = t65102 + t65104;
  t65189 = -0.24*t22615*t32305;
  t65192 = 0.24*t27311*t33842;
  t65193 = t65189 + t65192;
  t58169 = 0.4*t32305;
  t58172 = -1.*t32305*t33675;
  t58173 = 0.15*t33842;
  t58174 = t33895*t33842;
  t58176 = t58169 + t58172 + t58173 + t58174;
  t65179 = -1.*t65162*t34955;
  t65195 = -1.*t35159*t65193;
  t65198 = t58019 + t34967 + t65179 + t65195 + t58042;
  t65229 = t65162*t34755;
  t65230 = t34955*t65193;
  t65231 = t58093 + t58095 + t65229 + t58102 + t65230;
  t58344 = -12.*t35532*t35300;
  t58498 = -1.*t1345*t58497;
  t58503 = t3755*t58502;
  t58504 = t58498 + t58503;
  t58510 = -12.*t35147*t58504;
  t58644 = -12.*t35532*t58641;
  t58647 = t1345*t36081;
  t58650 = t48317 + t58647;
  t58760 = t3755*t58497;
  t58763 = t1345*t58502;
  t58770 = t58760 + t58763;
  t58772 = -12.*t35147*t58770;
  t64964 = t57738*t35210;
  t64966 = t57009*t35263;
  t64986 = t64964 + t64966;
  t65039 = -1.*t57009*t35753;
  t65041 = -1.*t57738*t36081;
  t65042 = t65039 + t65041;
  t65005 = -1.*t57738*t35210;
  t65013 = -1.*t57009*t35263;
  t65265 = -1.*t5169*t65162;
  t65266 = t940*t65193;
  t65267 = t65265 + t65266;
  t65275 = t940*t65162;
  t65278 = t5169*t65193;
  t65279 = t65275 + t65278;
  t65082 = t57009*t58497;
  t65083 = t57738*t58502;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(-13.6*t27791*t29838 - 13.6*t31021*t32301 - 12.*t35147*t35300 - 12.*t35532*t36099 + 1.024*(t3755*t5169 - 1.*t1345*t940))*var2[0] - 0.5*(-13.6*t27791*(t32295 - 1.*t28685*t3755) - 13.6*t31021*(-1.*t1345*t31586 - 1.*t29790*t3755) - 12.*t35147*(-1.*t1345*t35210 - 1.*t35263*t3755) - 12.*t35532*(-1.*t1345*t36081 - 1.*t35753*t3755) + 1.024*(-1.*t1345*t5169 - 1.*t3755*t940))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t38058 + t38261 - 12.*t35147*(t1345*t35263 + t3755*t38277) - 12.*t35532*(t1345*t35753 + t3755*t38306) + 1.024*(-1.*t3755*t5169 + t1345*t940))*var2[0] - 0.5*(t38665 + t38701 - 12.*t35147*(-1.*t1345*t38277 + t45042) - 12.*t35532*(-1.*t1345*t38306 + t48317) + 1.024*(t1345*t5169 + t3755*t940))*var2[1] - 0.5*(-13.6*t27791*(t50545 - 1.*t31586*t50704 - 1.*t29790*t54361 + t55807) - 13.6*t31021*(t29790*t50704 + t28685*t54361 + t56157 + t56161) - 12.*t35532*(t38277*t57009 + t35210*t57119 + t35263*t57665 + t35263*t57738) - 12.*t35147*(-1.*t38306*t57009 - 1.*t36081*t57119 - 1.*t35753*t57665 - 1.*t35753*t57738) + 1.024*(-0.16*t5169*t940 - 1.*(t50006 - 0.16*t5169 - 0.15*t940)*t940))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(-13.6*t27791*(t29817 + t1345*t31586) + t38058 + t38261 - 13.6*t38038*t58323 - 12.*t58106*t58641 + t58644 - 12.*t58047*t58650 + t58772)*var2[0] - 0.5*(-13.6*t27791*t32301 + t38665 + t38701 - 12.*t36099*t58047 - 12.*t35300*t58106 - 13.6*t29838*t58323 + t58344 + t58510)*var2[1] - 0.5*(-13.6*t27791*(t28685*t50544 + t29790*t55791) - 13.6*(-1.*t29790*t50544 - 1.*t31586*t55791)*t58323 - 13.6*t31021*(t56157 + t56161 + t29790*t64749 + t28685*t64773) - 13.6*t27791*(t50545 + t55807 - 1.*t31586*t64749 - 1.*t29790*t64773) - 12.*t58047*t64986 - 12.*t35147*(t65005 - 1.*t35753*t65011 + t65013 - 1.*t36081*t65026) - 12.*t58106*t65042 - 12.*t35532*(t35263*t65011 + t35210*t65026 + t65082 + t65083))*var2[2] - 0.5*(-27.2*t27791*t31021 - 24.*t35532*t58047 - 24.*t35147*t58106 - 27.2*t27791*t58323)*var2[3] - 0.5*(3.944*t27791 - 12.*t58074*t58106 - 12.*t58047*t58176)*var2[4] - 1.44*t58047*var2[5]);
  p_output1[5]=var2[3]*(-0.5*(t58644 + t58772 - 12.*t58650*t65198 - 12.*t58641*t65231)*var2[0] - 0.5*(t58344 + t58510 - 12.*t36099*t65198 - 12.*t35300*t65231)*var2[1] - 0.5*(-12.*t64986*t65198 - 12.*t65042*t65231 - 12.*t35532*(t65082 + t65083 + t35263*t65267 + t35210*t65279) - 12.*t35147*(t65005 + t65013 - 1.*t35753*t65267 - 1.*t36081*t65279))*var2[2] - 0.5*(-24.*t35532*t65198 - 24.*t35147*t65231)*var2[3] - 0.5*(-12.*(-0.4*t32305 - 0.24*Power(t32305,2) + t32305*t33675 - 0.15*t33842 - 0.24*Power(t33842,2) - 1.*t33842*t33895)*t35147 - 12.*t35532*t58074 - 12.*t58176*t65198 - 12.*t58074*t65231)*var2[4] - 1.44*t65198*var2[5]);
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

#include "Ce3_vec4_acrobot.hh"

namespace SymFunction
{

void Ce3_vec4_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
