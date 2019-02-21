/*
 * Automatically Generated from Mathematica.
 * Mon 6 Aug 2018 16:06:30 GMT-04:00
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
  double t61005;
  double t77002;
  double t91975;
  double t78628;
  double t91981;
  double t91982;
  double t108108;
  double t108000;
  double t108088;
  double t108102;
  double t108130;
  double t108142;
  double t108159;
  double t108162;
  double t108181;
  double t108155;
  double t108184;
  double t108239;
  double t108409;
  double t108411;
  double t108413;
  double t108441;
  double t108445;
  double t108456;
  double t108434;
  double t108457;
  double t108458;
  double t91983;
  double t108622;
  double t106450;
  double t106687;
  double t106691;
  double t106889;
  double t106918;
  double t107049;
  double t107064;
  double t107075;
  double t107085;
  double t107278;
  double t107351;
  double t107406;
  double t107463;
  double t107500;
  double t107503;
  double t107525;
  double t107528;
  double t107566;
  double t107622;
  double t107702;
  double t107705;
  double t107717;
  double t107720;
  double t107821;
  double t107891;
  double t107898;
  double t107901;
  double t107907;
  double t107911;
  double t107935;
  double t107951;
  double t107973;
  double t107976;
  double t107986;
  double t107989;
  double t108623;
  double t108670;
  double t108244;
  double t108247;
  double t108255;
  double t108259;
  double t108282;
  double t108289;
  double t108294;
  double t108323;
  double t108327;
  double t108329;
  double t108339;
  double t108340;
  double t108342;
  double t108343;
  double t108345;
  double t108349;
  double t108351;
  double t108353;
  double t108357;
  double t108358;
  double t108360;
  double t108361;
  double t108363;
  double t108364;
  double t108366;
  double t108367;
  double t108369;
  double t108370;
  double t108372;
  double t108373;
  double t108393;
  double t108394;
  double t108399;
  double t108400;
  double t108402;
  double t108407;
  double t108671;
  double t108756;
  double t108459;
  double t108461;
  double t108463;
  double t108495;
  double t108498;
  double t108499;
  double t108501;
  double t108502;
  double t108504;
  double t108506;
  double t108509;
  double t108512;
  double t108526;
  double t108527;
  double t108538;
  double t108540;
  double t108542;
  double t108560;
  double t108563;
  double t108564;
  double t108567;
  double t108568;
  double t108584;
  double t108586;
  double t108588;
  double t108604;
  double t108606;
  double t108607;
  double t108609;
  double t108610;
  double t108612;
  double t108613;
  double t108615;
  double t108616;
  double t108619;
  double t108620;
  double t108758;
  t61005 = Cos(var1[4]);
  t77002 = Cos(var1[5]);
  t91975 = Sin(var1[5]);
  t78628 = -0.012224*t61005*t77002;
  t91981 = 0.008694*t61005*t91975;
  t91982 = var1[0] + t78628 + t91981;
  t108108 = Cos(var1[3]);
  t108000 = Sin(var1[3]);
  t108088 = Sin(var1[4]);
  t108102 = t77002*t108000*t108088;
  t108130 = t108108*t91975;
  t108142 = t108102 + t108130;
  t108159 = t108108*t77002;
  t108162 = -1.*t108000*t108088*t91975;
  t108181 = t108159 + t108162;
  t108155 = -0.012224*t108142;
  t108184 = -0.008694*t108181;
  t108239 = var1[1] + t108155 + t108184;
  t108409 = -1.*t108108*t77002*t108088;
  t108411 = t108000*t91975;
  t108413 = t108409 + t108411;
  t108441 = t77002*t108000;
  t108445 = t108108*t108088*t91975;
  t108456 = t108441 + t108445;
  t108434 = -0.012224*t108413;
  t108457 = -0.008694*t108456;
  t108458 = var1[2] + t108434 + t108457;
  t91983 = -0.008738*t61005*t77002;
  t108622 = 0.1*t108088;
  t106450 = 0.012192*t61005*t91975;
  t106687 = -0.004306*t61005*t77002;
  t106691 = 0.014369*t61005*t91975;
  t106889 = 0.000593*t61005*t77002;
  t106918 = 0.014988*t61005*t91975;
  t107049 = 0.005427*t61005*t77002;
  t107064 = 0.013984*t61005*t91975;
  t107075 = 0.009674*t61005*t77002;
  t107085 = 0.011464*t61005*t91975;
  t107278 = 0.012872*t61005*t77002;
  t107351 = 0.007702*t61005*t91975;
  t107406 = 0.014675*t61005*t77002;
  t107463 = 0.003105*t61005*t91975;
  t107500 = 0.014888*t61005*t77002;
  t107503 = -0.001828*t61005*t91975;
  t107525 = 0.013488*t61005*t77002;
  t107528 = -0.006563*t61005*t91975;
  t107566 = 0.010626*t61005*t77002;
  t107622 = -0.010587*t61005*t91975;
  t107702 = 0.006613*t61005*t77002;
  t107705 = -0.013464*t61005*t91975;
  t107717 = 0.001883*t61005*t77002;
  t107720 = -0.014881*t61005*t91975;
  t107821 = -0.003051*t61005*t77002;
  t107891 = -0.014686*t61005*t91975;
  t107898 = -0.007655*t61005*t77002;
  t107901 = -0.0129*t61005*t91975;
  t107907 = -0.011429*t61005*t77002;
  t107911 = -0.009715*t61005*t91975;
  t107935 = -0.013964*t61005*t77002;
  t107951 = -0.005478*t61005*t91975;
  t107973 = -0.014986*t61005*t77002;
  t107976 = -0.000647*t61005*t91975;
  t107986 = -0.014384*t61005*t77002;
  t107989 = 0.004254*t61005*t91975;
  t108623 = var1[0] + t78628 + t108622 + t91981;
  t108670 = -0.1*t61005*t108000;
  t108244 = -0.008738*t108142;
  t108247 = -0.012192*t108181;
  t108255 = -0.004306*t108142;
  t108259 = -0.014369*t108181;
  t108282 = 0.000593*t108142;
  t108289 = -0.014988*t108181;
  t108294 = 0.005427*t108142;
  t108323 = -0.013984*t108181;
  t108327 = 0.009674*t108142;
  t108329 = -0.011464*t108181;
  t108339 = 0.012872*t108142;
  t108340 = -0.007702*t108181;
  t108342 = 0.014675*t108142;
  t108343 = -0.003105*t108181;
  t108345 = 0.014888*t108142;
  t108349 = 0.001828*t108181;
  t108351 = 0.013488*t108142;
  t108353 = 0.006563*t108181;
  t108357 = 0.010626*t108142;
  t108358 = 0.010587*t108181;
  t108360 = 0.006613*t108142;
  t108361 = 0.013464*t108181;
  t108363 = 0.001883*t108142;
  t108364 = 0.014881*t108181;
  t108366 = -0.003051*t108142;
  t108367 = 0.014686*t108181;
  t108369 = -0.007655*t108142;
  t108370 = 0.0129*t108181;
  t108372 = -0.011429*t108142;
  t108373 = 0.009715*t108181;
  t108393 = -0.013964*t108142;
  t108394 = 0.005478*t108181;
  t108399 = -0.014986*t108142;
  t108400 = 0.000647*t108181;
  t108402 = -0.014384*t108142;
  t108407 = -0.004254*t108181;
  t108671 = var1[1] + t108670 + t108155 + t108184;
  t108756 = 0.1*t108108*t61005;
  t108459 = -0.008738*t108413;
  t108461 = -0.012192*t108456;
  t108463 = -0.004306*t108413;
  t108495 = -0.014369*t108456;
  t108498 = 0.000593*t108413;
  t108499 = -0.014988*t108456;
  t108501 = 0.005427*t108413;
  t108502 = -0.013984*t108456;
  t108504 = 0.009674*t108413;
  t108506 = -0.011464*t108456;
  t108509 = 0.012872*t108413;
  t108512 = -0.007702*t108456;
  t108526 = 0.014675*t108413;
  t108527 = -0.003105*t108456;
  t108538 = 0.014888*t108413;
  t108540 = 0.001828*t108456;
  t108542 = 0.013488*t108413;
  t108560 = 0.006563*t108456;
  t108563 = 0.010626*t108413;
  t108564 = 0.010587*t108456;
  t108567 = 0.006613*t108413;
  t108568 = 0.013464*t108456;
  t108584 = 0.001883*t108413;
  t108586 = 0.014881*t108456;
  t108588 = -0.003051*t108413;
  t108604 = 0.014686*t108456;
  t108606 = -0.007655*t108413;
  t108607 = 0.0129*t108456;
  t108609 = -0.011429*t108413;
  t108610 = 0.009715*t108456;
  t108612 = -0.013964*t108413;
  t108613 = 0.005478*t108456;
  t108615 = -0.014986*t108413;
  t108616 = 0.000647*t108456;
  t108619 = -0.014384*t108413;
  t108620 = -0.004254*t108456;
  t108758 = var1[2] + t108756 + t108434 + t108457;
  p_output1[0]=t91982;
  p_output1[1]=t106450 + t91983 + var1[0];
  p_output1[2]=t106687 + t106691 + var1[0];
  p_output1[3]=t106889 + t106918 + var1[0];
  p_output1[4]=t107049 + t107064 + var1[0];
  p_output1[5]=t107075 + t107085 + var1[0];
  p_output1[6]=t107278 + t107351 + var1[0];
  p_output1[7]=t107406 + t107463 + var1[0];
  p_output1[8]=t107500 + t107503 + var1[0];
  p_output1[9]=t107525 + t107528 + var1[0];
  p_output1[10]=t107566 + t107622 + var1[0];
  p_output1[11]=t107702 + t107705 + var1[0];
  p_output1[12]=t107717 + t107720 + var1[0];
  p_output1[13]=t107821 + t107891 + var1[0];
  p_output1[14]=t107898 + t107901 + var1[0];
  p_output1[15]=t107907 + t107911 + var1[0];
  p_output1[16]=t107935 + t107951 + var1[0];
  p_output1[17]=t107973 + t107976 + var1[0];
  p_output1[18]=t107986 + t107989 + var1[0];
  p_output1[19]=t91982;
  p_output1[20]=t108239;
  p_output1[21]=t108244 + t108247 + var1[1];
  p_output1[22]=t108255 + t108259 + var1[1];
  p_output1[23]=t108282 + t108289 + var1[1];
  p_output1[24]=t108294 + t108323 + var1[1];
  p_output1[25]=t108327 + t108329 + var1[1];
  p_output1[26]=t108339 + t108340 + var1[1];
  p_output1[27]=t108342 + t108343 + var1[1];
  p_output1[28]=t108345 + t108349 + var1[1];
  p_output1[29]=t108351 + t108353 + var1[1];
  p_output1[30]=t108357 + t108358 + var1[1];
  p_output1[31]=t108360 + t108361 + var1[1];
  p_output1[32]=t108363 + t108364 + var1[1];
  p_output1[33]=t108366 + t108367 + var1[1];
  p_output1[34]=t108369 + t108370 + var1[1];
  p_output1[35]=t108372 + t108373 + var1[1];
  p_output1[36]=t108393 + t108394 + var1[1];
  p_output1[37]=t108399 + t108400 + var1[1];
  p_output1[38]=t108402 + t108407 + var1[1];
  p_output1[39]=t108239;
  p_output1[40]=t108458;
  p_output1[41]=t108459 + t108461 + var1[2];
  p_output1[42]=t108463 + t108495 + var1[2];
  p_output1[43]=t108498 + t108499 + var1[2];
  p_output1[44]=t108501 + t108502 + var1[2];
  p_output1[45]=t108504 + t108506 + var1[2];
  p_output1[46]=t108509 + t108512 + var1[2];
  p_output1[47]=t108526 + t108527 + var1[2];
  p_output1[48]=t108538 + t108540 + var1[2];
  p_output1[49]=t108542 + t108560 + var1[2];
  p_output1[50]=t108563 + t108564 + var1[2];
  p_output1[51]=t108567 + t108568 + var1[2];
  p_output1[52]=t108584 + t108586 + var1[2];
  p_output1[53]=t108588 + t108604 + var1[2];
  p_output1[54]=t108606 + t108607 + var1[2];
  p_output1[55]=t108609 + t108610 + var1[2];
  p_output1[56]=t108612 + t108613 + var1[2];
  p_output1[57]=t108615 + t108616 + var1[2];
  p_output1[58]=t108619 + t108620 + var1[2];
  p_output1[59]=t108458;
  p_output1[60]=t108623;
  p_output1[61]=t106450 + t108622 + t91983 + var1[0];
  p_output1[62]=t106687 + t106691 + t108622 + var1[0];
  p_output1[63]=t106889 + t106918 + t108622 + var1[0];
  p_output1[64]=t107049 + t107064 + t108622 + var1[0];
  p_output1[65]=t107075 + t107085 + t108622 + var1[0];
  p_output1[66]=t107278 + t107351 + t108622 + var1[0];
  p_output1[67]=t107406 + t107463 + t108622 + var1[0];
  p_output1[68]=t107500 + t107503 + t108622 + var1[0];
  p_output1[69]=t107525 + t107528 + t108622 + var1[0];
  p_output1[70]=t107566 + t107622 + t108622 + var1[0];
  p_output1[71]=t107702 + t107705 + t108622 + var1[0];
  p_output1[72]=t107717 + t107720 + t108622 + var1[0];
  p_output1[73]=t107821 + t107891 + t108622 + var1[0];
  p_output1[74]=t107898 + t107901 + t108622 + var1[0];
  p_output1[75]=t107907 + t107911 + t108622 + var1[0];
  p_output1[76]=t107935 + t107951 + t108622 + var1[0];
  p_output1[77]=t107973 + t107976 + t108622 + var1[0];
  p_output1[78]=t107986 + t107989 + t108622 + var1[0];
  p_output1[79]=t108623;
  p_output1[80]=t108671;
  p_output1[81]=t108244 + t108247 + t108670 + var1[1];
  p_output1[82]=t108255 + t108259 + t108670 + var1[1];
  p_output1[83]=t108282 + t108289 + t108670 + var1[1];
  p_output1[84]=t108294 + t108323 + t108670 + var1[1];
  p_output1[85]=t108327 + t108329 + t108670 + var1[1];
  p_output1[86]=t108339 + t108340 + t108670 + var1[1];
  p_output1[87]=t108342 + t108343 + t108670 + var1[1];
  p_output1[88]=t108345 + t108349 + t108670 + var1[1];
  p_output1[89]=t108351 + t108353 + t108670 + var1[1];
  p_output1[90]=t108357 + t108358 + t108670 + var1[1];
  p_output1[91]=t108360 + t108361 + t108670 + var1[1];
  p_output1[92]=t108363 + t108364 + t108670 + var1[1];
  p_output1[93]=t108366 + t108367 + t108670 + var1[1];
  p_output1[94]=t108369 + t108370 + t108670 + var1[1];
  p_output1[95]=t108372 + t108373 + t108670 + var1[1];
  p_output1[96]=t108393 + t108394 + t108670 + var1[1];
  p_output1[97]=t108399 + t108400 + t108670 + var1[1];
  p_output1[98]=t108402 + t108407 + t108670 + var1[1];
  p_output1[99]=t108671;
  p_output1[100]=t108758;
  p_output1[101]=t108459 + t108461 + t108756 + var1[2];
  p_output1[102]=t108463 + t108495 + t108756 + var1[2];
  p_output1[103]=t108498 + t108499 + t108756 + var1[2];
  p_output1[104]=t108501 + t108502 + t108756 + var1[2];
  p_output1[105]=t108504 + t108506 + t108756 + var1[2];
  p_output1[106]=t108509 + t108512 + t108756 + var1[2];
  p_output1[107]=t108526 + t108527 + t108756 + var1[2];
  p_output1[108]=t108538 + t108540 + t108756 + var1[2];
  p_output1[109]=t108542 + t108560 + t108756 + var1[2];
  p_output1[110]=t108563 + t108564 + t108756 + var1[2];
  p_output1[111]=t108567 + t108568 + t108756 + var1[2];
  p_output1[112]=t108584 + t108586 + t108756 + var1[2];
  p_output1[113]=t108588 + t108604 + t108756 + var1[2];
  p_output1[114]=t108606 + t108607 + t108756 + var1[2];
  p_output1[115]=t108609 + t108610 + t108756 + var1[2];
  p_output1[116]=t108612 + t108613 + t108756 + var1[2];
  p_output1[117]=t108615 + t108616 + t108756 + var1[2];
  p_output1[118]=t108619 + t108620 + t108756 + var1[2];
  p_output1[119]=t108758;
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

#include "Link_base_chassis_link_to_tail_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_tail_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
