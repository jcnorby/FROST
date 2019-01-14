/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:11 GMT-06:00
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
  double t3628;
  double t9704;
  double t9874;
  double t9860;
  double t10888;
  double t10960;
  double t16639;
  double t18002;
  double t18317;
  double t18658;
  double t19153;
  double t19553;
  double t17892;
  double t19846;
  double t20592;
  double t34281;
  double t34282;
  double t34287;
  double t34280;
  double t34290;
  double t34291;
  double t11987;
  double t12699;
  double t34659;
  double t13003;
  double t13027;
  double t13269;
  double t13328;
  double t13961;
  double t14090;
  double t14211;
  double t14212;
  double t14254;
  double t14263;
  double t14269;
  double t14275;
  double t14289;
  double t14290;
  double t14531;
  double t14542;
  double t14558;
  double t14607;
  double t14622;
  double t14624;
  double t14646;
  double t14647;
  double t14657;
  double t14661;
  double t14666;
  double t14667;
  double t14675;
  double t14676;
  double t14686;
  double t14689;
  double t14733;
  double t14820;
  double t14927;
  double t14931;
  double t34665;
  double t20794;
  double t21380;
  double t34713;
  double t34715;
  double t34716;
  double t34717;
  double t21965;
  double t21973;
  double t22242;
  double t22335;
  double t23334;
  double t24732;
  double t26503;
  double t26507;
  double t26556;
  double t26574;
  double t26703;
  double t26725;
  double t27050;
  double t27433;
  double t32315;
  double t32403;
  double t32466;
  double t32629;
  double t32999;
  double t33144;
  double t33158;
  double t33180;
  double t33387;
  double t33538;
  double t33651;
  double t33791;
  double t34078;
  double t34087;
  double t34174;
  double t34213;
  double t34251;
  double t34266;
  double t34273;
  double t34275;
  double t34719;
  double t34293;
  double t34302;
  double t34768;
  double t34770;
  double t34773;
  double t34774;
  double t34346;
  double t34350;
  double t34355;
  double t34357;
  double t34381;
  double t34382;
  double t34389;
  double t34390;
  double t34401;
  double t34402;
  double t34407;
  double t34409;
  double t34417;
  double t34419;
  double t34481;
  double t34487;
  double t34492;
  double t34494;
  double t34497;
  double t34504;
  double t34510;
  double t34512;
  double t34519;
  double t34524;
  double t34527;
  double t34532;
  double t34535;
  double t34539;
  double t34563;
  double t34628;
  double t34643;
  double t34644;
  double t34649;
  double t34650;
  double t34775;
  t3628 = Cos(var1[4]);
  t9704 = Cos(var1[5]);
  t9874 = Sin(var1[4]);
  t9860 = 0.013748*t3628*t9704;
  t10888 = 0.006*t9874;
  t10960 = var1[0] + t9860 + t10888;
  t16639 = Sin(var1[3]);
  t18002 = t9704*t16639*t9874;
  t18317 = Cos(var1[3]);
  t18658 = Sin(var1[5]);
  t19153 = t18317*t18658;
  t19553 = t18002 + t19153;
  t17892 = -0.006*t3628*t16639;
  t19846 = 0.013748*t19553;
  t20592 = var1[1] + t17892 + t19846;
  t34281 = -1.*t18317*t9704*t9874;
  t34282 = t16639*t18658;
  t34287 = t34281 + t34282;
  t34280 = 0.006*t18317*t3628;
  t34290 = 0.013748*t34287;
  t34291 = var1[2] + t34280 + t34290;
  t11987 = 0.011055*t3628*t9704;
  t12699 = 0.010139*t9874;
  t34659 = 0.089*t3628*t18658;
  t13003 = 0.007163*t3628*t9704;
  t13027 = 0.013179*t9874;
  t13269 = 0.002496*t3628*t9704;
  t13328 = 0.014791*t9874;
  t13961 = -0.002442*t3628*t9704;
  t14090 = 0.0148*t9874;
  t14211 = -0.007115*t3628*t9704;
  t14212 = 0.013205*t9874;
  t14254 = -0.011017*t3628*t9704;
  t14263 = 0.01018*t9874;
  t14269 = -0.013725*t3628*t9704;
  t14275 = 0.006051*t9874;
  t14289 = -0.014946*t3628*t9704;
  t14290 = 0.001266*t9874;
  t14531 = -0.014548*t3628*t9704;
  t14542 = -0.003656*t9874;
  t14558 = -0.012573*t3628*t9704;
  t14607 = -0.008181*t9874;
  t14622 = -0.009235*t3628*t9704;
  t14624 = -0.01182*t9874;
  t14646 = -0.004897*t3628*t9704;
  t14647 = -0.014178*t9874;
  t14657 = -0.000028*t3628*t9704;
  t14661 = -0.015*t9874;
  t14666 = 0.004844*t3628*t9704;
  t14667 = -0.014196*t9874;
  t14675 = 0.009191*t3628*t9704;
  t14676 = -0.011854*t9874;
  t14686 = 0.012542*t3628*t9704;
  t14689 = -0.008227*t9874;
  t14733 = 0.014534*t3628*t9704;
  t14820 = -0.003709*t9874;
  t14927 = 0.014951*t3628*t9704;
  t14931 = 0.001211*t9874;
  t34665 = var1[0] + t9860 + t10888 + t34659;
  t20794 = -0.010139*t3628*t16639;
  t21380 = 0.011055*t19553;
  t34713 = t18317*t9704;
  t34715 = -1.*t16639*t9874*t18658;
  t34716 = t34713 + t34715;
  t34717 = -0.089*t34716;
  t21965 = -0.013179*t3628*t16639;
  t21973 = 0.007163*t19553;
  t22242 = -0.014791*t3628*t16639;
  t22335 = 0.002496*t19553;
  t23334 = -0.0148*t3628*t16639;
  t24732 = -0.002442*t19553;
  t26503 = -0.013205*t3628*t16639;
  t26507 = -0.007115*t19553;
  t26556 = -0.01018*t3628*t16639;
  t26574 = -0.011017*t19553;
  t26703 = -0.006051*t3628*t16639;
  t26725 = -0.013725*t19553;
  t27050 = -0.001266*t3628*t16639;
  t27433 = -0.014946*t19553;
  t32315 = 0.003656*t3628*t16639;
  t32403 = -0.014548*t19553;
  t32466 = 0.008181*t3628*t16639;
  t32629 = -0.012573*t19553;
  t32999 = 0.01182*t3628*t16639;
  t33144 = -0.009235*t19553;
  t33158 = 0.014178*t3628*t16639;
  t33180 = -0.004897*t19553;
  t33387 = 0.015*t3628*t16639;
  t33538 = -0.000028*t19553;
  t33651 = 0.014196*t3628*t16639;
  t33791 = 0.004844*t19553;
  t34078 = 0.011854*t3628*t16639;
  t34087 = 0.009191*t19553;
  t34174 = 0.008227*t3628*t16639;
  t34213 = 0.012542*t19553;
  t34251 = 0.003709*t3628*t16639;
  t34266 = 0.014534*t19553;
  t34273 = -0.001211*t3628*t16639;
  t34275 = 0.014951*t19553;
  t34719 = var1[1] + t17892 + t19846 + t34717;
  t34293 = 0.010139*t18317*t3628;
  t34302 = 0.011055*t34287;
  t34768 = t9704*t16639;
  t34770 = t18317*t9874*t18658;
  t34773 = t34768 + t34770;
  t34774 = -0.089*t34773;
  t34346 = 0.013179*t18317*t3628;
  t34350 = 0.007163*t34287;
  t34355 = 0.014791*t18317*t3628;
  t34357 = 0.002496*t34287;
  t34381 = 0.0148*t18317*t3628;
  t34382 = -0.002442*t34287;
  t34389 = 0.013205*t18317*t3628;
  t34390 = -0.007115*t34287;
  t34401 = 0.01018*t18317*t3628;
  t34402 = -0.011017*t34287;
  t34407 = 0.006051*t18317*t3628;
  t34409 = -0.013725*t34287;
  t34417 = 0.001266*t18317*t3628;
  t34419 = -0.014946*t34287;
  t34481 = -0.003656*t18317*t3628;
  t34487 = -0.014548*t34287;
  t34492 = -0.008181*t18317*t3628;
  t34494 = -0.012573*t34287;
  t34497 = -0.01182*t18317*t3628;
  t34504 = -0.009235*t34287;
  t34510 = -0.014178*t18317*t3628;
  t34512 = -0.004897*t34287;
  t34519 = -0.015*t18317*t3628;
  t34524 = -0.000028*t34287;
  t34527 = -0.014196*t18317*t3628;
  t34532 = 0.004844*t34287;
  t34535 = -0.011854*t18317*t3628;
  t34539 = 0.009191*t34287;
  t34563 = -0.008227*t18317*t3628;
  t34628 = 0.012542*t34287;
  t34643 = -0.003709*t18317*t3628;
  t34644 = 0.014534*t34287;
  t34649 = 0.001211*t18317*t3628;
  t34650 = 0.014951*t34287;
  t34775 = var1[2] + t34280 + t34290 + t34774;
  p_output1[0]=t10960;
  p_output1[1]=t11987 + t12699 + var1[0];
  p_output1[2]=t13003 + t13027 + var1[0];
  p_output1[3]=t13269 + t13328 + var1[0];
  p_output1[4]=t13961 + t14090 + var1[0];
  p_output1[5]=t14211 + t14212 + var1[0];
  p_output1[6]=t14254 + t14263 + var1[0];
  p_output1[7]=t14269 + t14275 + var1[0];
  p_output1[8]=t14289 + t14290 + var1[0];
  p_output1[9]=t14531 + t14542 + var1[0];
  p_output1[10]=t14558 + t14607 + var1[0];
  p_output1[11]=t14622 + t14624 + var1[0];
  p_output1[12]=t14646 + t14647 + var1[0];
  p_output1[13]=t14657 + t14661 + var1[0];
  p_output1[14]=t14666 + t14667 + var1[0];
  p_output1[15]=t14675 + t14676 + var1[0];
  p_output1[16]=t14686 + t14689 + var1[0];
  p_output1[17]=t14733 + t14820 + var1[0];
  p_output1[18]=t14927 + t14931 + var1[0];
  p_output1[19]=t10960;
  p_output1[20]=t20592;
  p_output1[21]=t20794 + t21380 + var1[1];
  p_output1[22]=t21965 + t21973 + var1[1];
  p_output1[23]=t22242 + t22335 + var1[1];
  p_output1[24]=t23334 + t24732 + var1[1];
  p_output1[25]=t26503 + t26507 + var1[1];
  p_output1[26]=t26556 + t26574 + var1[1];
  p_output1[27]=t26703 + t26725 + var1[1];
  p_output1[28]=t27050 + t27433 + var1[1];
  p_output1[29]=t32315 + t32403 + var1[1];
  p_output1[30]=t32466 + t32629 + var1[1];
  p_output1[31]=t32999 + t33144 + var1[1];
  p_output1[32]=t33158 + t33180 + var1[1];
  p_output1[33]=t33387 + t33538 + var1[1];
  p_output1[34]=t33651 + t33791 + var1[1];
  p_output1[35]=t34078 + t34087 + var1[1];
  p_output1[36]=t34174 + t34213 + var1[1];
  p_output1[37]=t34251 + t34266 + var1[1];
  p_output1[38]=t34273 + t34275 + var1[1];
  p_output1[39]=t20592;
  p_output1[40]=t34291;
  p_output1[41]=t34293 + t34302 + var1[2];
  p_output1[42]=t34346 + t34350 + var1[2];
  p_output1[43]=t34355 + t34357 + var1[2];
  p_output1[44]=t34381 + t34382 + var1[2];
  p_output1[45]=t34389 + t34390 + var1[2];
  p_output1[46]=t34401 + t34402 + var1[2];
  p_output1[47]=t34407 + t34409 + var1[2];
  p_output1[48]=t34417 + t34419 + var1[2];
  p_output1[49]=t34481 + t34487 + var1[2];
  p_output1[50]=t34492 + t34494 + var1[2];
  p_output1[51]=t34497 + t34504 + var1[2];
  p_output1[52]=t34510 + t34512 + var1[2];
  p_output1[53]=t34519 + t34524 + var1[2];
  p_output1[54]=t34527 + t34532 + var1[2];
  p_output1[55]=t34535 + t34539 + var1[2];
  p_output1[56]=t34563 + t34628 + var1[2];
  p_output1[57]=t34643 + t34644 + var1[2];
  p_output1[58]=t34649 + t34650 + var1[2];
  p_output1[59]=t34291;
  p_output1[60]=t34665;
  p_output1[61]=t11987 + t12699 + t34659 + var1[0];
  p_output1[62]=t13003 + t13027 + t34659 + var1[0];
  p_output1[63]=t13269 + t13328 + t34659 + var1[0];
  p_output1[64]=t13961 + t14090 + t34659 + var1[0];
  p_output1[65]=t14211 + t14212 + t34659 + var1[0];
  p_output1[66]=t14254 + t14263 + t34659 + var1[0];
  p_output1[67]=t14269 + t14275 + t34659 + var1[0];
  p_output1[68]=t14289 + t14290 + t34659 + var1[0];
  p_output1[69]=t14531 + t14542 + t34659 + var1[0];
  p_output1[70]=t14558 + t14607 + t34659 + var1[0];
  p_output1[71]=t14622 + t14624 + t34659 + var1[0];
  p_output1[72]=t14646 + t14647 + t34659 + var1[0];
  p_output1[73]=t14657 + t14661 + t34659 + var1[0];
  p_output1[74]=t14666 + t14667 + t34659 + var1[0];
  p_output1[75]=t14675 + t14676 + t34659 + var1[0];
  p_output1[76]=t14686 + t14689 + t34659 + var1[0];
  p_output1[77]=t14733 + t14820 + t34659 + var1[0];
  p_output1[78]=t14927 + t14931 + t34659 + var1[0];
  p_output1[79]=t34665;
  p_output1[80]=t34719;
  p_output1[81]=t20794 + t21380 + t34717 + var1[1];
  p_output1[82]=t21965 + t21973 + t34717 + var1[1];
  p_output1[83]=t22242 + t22335 + t34717 + var1[1];
  p_output1[84]=t23334 + t24732 + t34717 + var1[1];
  p_output1[85]=t26503 + t26507 + t34717 + var1[1];
  p_output1[86]=t26556 + t26574 + t34717 + var1[1];
  p_output1[87]=t26703 + t26725 + t34717 + var1[1];
  p_output1[88]=t27050 + t27433 + t34717 + var1[1];
  p_output1[89]=t32315 + t32403 + t34717 + var1[1];
  p_output1[90]=t32466 + t32629 + t34717 + var1[1];
  p_output1[91]=t32999 + t33144 + t34717 + var1[1];
  p_output1[92]=t33158 + t33180 + t34717 + var1[1];
  p_output1[93]=t33387 + t33538 + t34717 + var1[1];
  p_output1[94]=t33651 + t33791 + t34717 + var1[1];
  p_output1[95]=t34078 + t34087 + t34717 + var1[1];
  p_output1[96]=t34174 + t34213 + t34717 + var1[1];
  p_output1[97]=t34251 + t34266 + t34717 + var1[1];
  p_output1[98]=t34273 + t34275 + t34717 + var1[1];
  p_output1[99]=t34719;
  p_output1[100]=t34775;
  p_output1[101]=t34293 + t34302 + t34774 + var1[2];
  p_output1[102]=t34346 + t34350 + t34774 + var1[2];
  p_output1[103]=t34355 + t34357 + t34774 + var1[2];
  p_output1[104]=t34381 + t34382 + t34774 + var1[2];
  p_output1[105]=t34389 + t34390 + t34774 + var1[2];
  p_output1[106]=t34401 + t34402 + t34774 + var1[2];
  p_output1[107]=t34407 + t34409 + t34774 + var1[2];
  p_output1[108]=t34417 + t34419 + t34774 + var1[2];
  p_output1[109]=t34481 + t34487 + t34774 + var1[2];
  p_output1[110]=t34492 + t34494 + t34774 + var1[2];
  p_output1[111]=t34497 + t34504 + t34774 + var1[2];
  p_output1[112]=t34510 + t34512 + t34774 + var1[2];
  p_output1[113]=t34519 + t34524 + t34774 + var1[2];
  p_output1[114]=t34527 + t34532 + t34774 + var1[2];
  p_output1[115]=t34535 + t34539 + t34774 + var1[2];
  p_output1[116]=t34563 + t34628 + t34774 + var1[2];
  p_output1[117]=t34643 + t34644 + t34774 + var1[2];
  p_output1[118]=t34649 + t34650 + t34774 + var1[2];
  p_output1[119]=t34775;
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
    ( !(mrows == 21 && ncols == 1) && 
      !(mrows == 1 && ncols == 21))) 
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

#include "Link_pelvis_to_r_leg_hpz_bar.hh"

namespace SymFunction
{

void Link_pelvis_to_r_leg_hpz_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
