/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:46 GMT-06:00
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
  double t3415;
  double t3549;
  double t3632;
  double t3521;
  double t3668;
  double t3682;
  double t4343;
  double t4347;
  double t4348;
  double t4349;
  double t4355;
  double t4365;
  double t4345;
  double t4372;
  double t4376;
  double t5017;
  double t5033;
  double t5045;
  double t5007;
  double t5072;
  double t5112;
  double t5814;
  double t3696;
  double t3713;
  double t3741;
  double t3759;
  double t3862;
  double t3880;
  double t3907;
  double t3926;
  double t3955;
  double t3976;
  double t4003;
  double t4009;
  double t4021;
  double t4028;
  double t4057;
  double t4073;
  double t4175;
  double t4191;
  double t4206;
  double t4212;
  double t4227;
  double t4241;
  double t4260;
  double t4264;
  double t4283;
  double t4289;
  double t4306;
  double t4311;
  double t4318;
  double t4320;
  double t4328;
  double t4329;
  double t4333;
  double t4334;
  double t4336;
  double t4337;
  double t5836;
  double t4377;
  double t6150;
  double t6155;
  double t6160;
  double t6164;
  double t4399;
  double t4410;
  double t4431;
  double t4470;
  double t4483;
  double t4496;
  double t4500;
  double t4502;
  double t4506;
  double t4528;
  double t4532;
  double t4545;
  double t4552;
  double t4556;
  double t4592;
  double t4614;
  double t4637;
  double t4659;
  double t4674;
  double t4692;
  double t4694;
  double t4716;
  double t4724;
  double t4739;
  double t4760;
  double t4818;
  double t4819;
  double t4833;
  double t4873;
  double t4899;
  double t4921;
  double t4930;
  double t4931;
  double t4937;
  double t4973;
  double t6173;
  double t5117;
  double t6359;
  double t6418;
  double t6438;
  double t6439;
  double t5140;
  double t5183;
  double t5184;
  double t5222;
  double t5234;
  double t5271;
  double t5276;
  double t5323;
  double t5343;
  double t5401;
  double t5420;
  double t5450;
  double t5458;
  double t5466;
  double t5483;
  double t5510;
  double t5516;
  double t5522;
  double t5528;
  double t5556;
  double t5562;
  double t5622;
  double t5625;
  double t5627;
  double t5636;
  double t5665;
  double t5674;
  double t5682;
  double t5686;
  double t5689;
  double t5700;
  double t5747;
  double t5756;
  double t5796;
  double t5797;
  double t6459;
  t3415 = Sin(var1[4]);
  t3549 = Cos(var1[4]);
  t3632 = Sin(var1[5]);
  t3521 = 0.013025*t3415;
  t3668 = -0.007439*t3549*t3632;
  t3682 = var1[0] + t3521 + t3668;
  t4343 = Sin(var1[3]);
  t4347 = Cos(var1[3]);
  t4348 = Cos(var1[5]);
  t4349 = t4347*t4348;
  t4355 = -1.*t4343*t3415*t3632;
  t4365 = t4349 + t4355;
  t4345 = -0.013025*t3549*t4343;
  t4372 = 0.007439*t4365;
  t4376 = var1[1] + t4345 + t4372;
  t5017 = t4348*t4343;
  t5033 = t4347*t3415*t3632;
  t5045 = t5017 + t5033;
  t5007 = 0.013025*t4347*t3549;
  t5072 = 0.007439*t5045;
  t5112 = var1[2] + t5007 + t5072;
  t5814 = -0.0125*t3549*t4348;
  t3696 = 0.009904*t3415;
  t3713 = -0.011266*t3549*t3632;
  t3741 = 0.005709*t3415;
  t3759 = -0.013871*t3549*t3632;
  t3862 = 0.000896*t3415;
  t3880 = -0.014973*t3549*t3632;
  t3907 = -0.004014*t3415;
  t3926 = -0.014453*t3549*t3632;
  t3955 = -0.00849*t3415;
  t3976 = -0.012366*t3549*t3632;
  t4003 = -0.012045*t3415;
  t4009 = -0.00894*t3549*t3632;
  t4021 = -0.014295*t3415;
  t4028 = -0.004544*t3549*t3632;
  t4057 = -0.014996*t3415;
  t4073 = 0.000343*t3549*t3632;
  t4175 = -0.014072*t3415;
  t4191 = 0.005194*t3549*t3632;
  t4206 = -0.011623*t3415;
  t4212 = 0.009482*t3549*t3632;
  t4227 = -0.007915*t3415;
  t4241 = 0.012742*t3549*t3632;
  t4260 = -0.003348*t3415;
  t4264 = 0.014621*t3549*t3632;
  t4283 = 0.001581*t3415;
  t4289 = 0.014916*t3549*t3632;
  t4306 = 0.006338*t3415;
  t4311 = 0.013595*t3549*t3632;
  t4318 = 0.010409*t3415;
  t4320 = 0.0108*t3549*t3632;
  t4328 = 0.013352*t3415;
  t4329 = 0.006835*t3549*t3632;
  t4333 = 0.014848*t3415;
  t4334 = 0.00213*t3549*t3632;
  t4336 = 0.014735*t3415;
  t4337 = -0.002807*t3549*t3632;
  t5836 = var1[0] + t5814 + t3521 + t3668;
  t4377 = -0.009904*t3549*t4343;
  t6150 = -1.*t4348*t4343*t3415;
  t6155 = -1.*t4347*t3632;
  t6160 = t6150 + t6155;
  t6164 = 0.0125*t6160;
  t4399 = 0.011266*t4365;
  t4410 = -0.005709*t3549*t4343;
  t4431 = 0.013871*t4365;
  t4470 = -0.000896*t3549*t4343;
  t4483 = 0.014973*t4365;
  t4496 = 0.004014*t3549*t4343;
  t4500 = 0.014453*t4365;
  t4502 = 0.00849*t3549*t4343;
  t4506 = 0.012366*t4365;
  t4528 = 0.012045*t3549*t4343;
  t4532 = 0.00894*t4365;
  t4545 = 0.014295*t3549*t4343;
  t4552 = 0.004544*t4365;
  t4556 = 0.014996*t3549*t4343;
  t4592 = -0.000343*t4365;
  t4614 = 0.014072*t3549*t4343;
  t4637 = -0.005194*t4365;
  t4659 = 0.011623*t3549*t4343;
  t4674 = -0.009482*t4365;
  t4692 = 0.007915*t3549*t4343;
  t4694 = -0.012742*t4365;
  t4716 = 0.003348*t3549*t4343;
  t4724 = -0.014621*t4365;
  t4739 = -0.001581*t3549*t4343;
  t4760 = -0.014916*t4365;
  t4818 = -0.006338*t3549*t4343;
  t4819 = -0.013595*t4365;
  t4833 = -0.010409*t3549*t4343;
  t4873 = -0.0108*t4365;
  t4899 = -0.013352*t3549*t4343;
  t4921 = -0.006835*t4365;
  t4930 = -0.014848*t3549*t4343;
  t4931 = -0.00213*t4365;
  t4937 = -0.014735*t3549*t4343;
  t4973 = 0.002807*t4365;
  t6173 = var1[1] + t4345 + t6164 + t4372;
  t5117 = 0.009904*t4347*t3549;
  t6359 = t4347*t4348*t3415;
  t6418 = -1.*t4343*t3632;
  t6438 = t6359 + t6418;
  t6439 = 0.0125*t6438;
  t5140 = 0.011266*t5045;
  t5183 = 0.005709*t4347*t3549;
  t5184 = 0.013871*t5045;
  t5222 = 0.000896*t4347*t3549;
  t5234 = 0.014973*t5045;
  t5271 = -0.004014*t4347*t3549;
  t5276 = 0.014453*t5045;
  t5323 = -0.00849*t4347*t3549;
  t5343 = 0.012366*t5045;
  t5401 = -0.012045*t4347*t3549;
  t5420 = 0.00894*t5045;
  t5450 = -0.014295*t4347*t3549;
  t5458 = 0.004544*t5045;
  t5466 = -0.014996*t4347*t3549;
  t5483 = -0.000343*t5045;
  t5510 = -0.014072*t4347*t3549;
  t5516 = -0.005194*t5045;
  t5522 = -0.011623*t4347*t3549;
  t5528 = -0.009482*t5045;
  t5556 = -0.007915*t4347*t3549;
  t5562 = -0.012742*t5045;
  t5622 = -0.003348*t4347*t3549;
  t5625 = -0.014621*t5045;
  t5627 = 0.001581*t4347*t3549;
  t5636 = -0.014916*t5045;
  t5665 = 0.006338*t4347*t3549;
  t5674 = -0.013595*t5045;
  t5682 = 0.010409*t4347*t3549;
  t5686 = -0.0108*t5045;
  t5689 = 0.013352*t4347*t3549;
  t5700 = -0.006835*t5045;
  t5747 = 0.014848*t4347*t3549;
  t5756 = -0.00213*t5045;
  t5796 = 0.014735*t4347*t3549;
  t5797 = 0.002807*t5045;
  t6459 = var1[2] + t5007 + t6439 + t5072;
  p_output1[0]=t3682;
  p_output1[1]=t3696 + t3713 + var1[0];
  p_output1[2]=t3741 + t3759 + var1[0];
  p_output1[3]=t3862 + t3880 + var1[0];
  p_output1[4]=t3907 + t3926 + var1[0];
  p_output1[5]=t3955 + t3976 + var1[0];
  p_output1[6]=t4003 + t4009 + var1[0];
  p_output1[7]=t4021 + t4028 + var1[0];
  p_output1[8]=t4057 + t4073 + var1[0];
  p_output1[9]=t4175 + t4191 + var1[0];
  p_output1[10]=t4206 + t4212 + var1[0];
  p_output1[11]=t4227 + t4241 + var1[0];
  p_output1[12]=t4260 + t4264 + var1[0];
  p_output1[13]=t4283 + t4289 + var1[0];
  p_output1[14]=t4306 + t4311 + var1[0];
  p_output1[15]=t4318 + t4320 + var1[0];
  p_output1[16]=t4328 + t4329 + var1[0];
  p_output1[17]=t4333 + t4334 + var1[0];
  p_output1[18]=t4336 + t4337 + var1[0];
  p_output1[19]=t3682;
  p_output1[20]=t4376;
  p_output1[21]=t4377 + t4399 + var1[1];
  p_output1[22]=t4410 + t4431 + var1[1];
  p_output1[23]=t4470 + t4483 + var1[1];
  p_output1[24]=t4496 + t4500 + var1[1];
  p_output1[25]=t4502 + t4506 + var1[1];
  p_output1[26]=t4528 + t4532 + var1[1];
  p_output1[27]=t4545 + t4552 + var1[1];
  p_output1[28]=t4556 + t4592 + var1[1];
  p_output1[29]=t4614 + t4637 + var1[1];
  p_output1[30]=t4659 + t4674 + var1[1];
  p_output1[31]=t4692 + t4694 + var1[1];
  p_output1[32]=t4716 + t4724 + var1[1];
  p_output1[33]=t4739 + t4760 + var1[1];
  p_output1[34]=t4818 + t4819 + var1[1];
  p_output1[35]=t4833 + t4873 + var1[1];
  p_output1[36]=t4899 + t4921 + var1[1];
  p_output1[37]=t4930 + t4931 + var1[1];
  p_output1[38]=t4937 + t4973 + var1[1];
  p_output1[39]=t4376;
  p_output1[40]=t5112;
  p_output1[41]=t5117 + t5140 + var1[2];
  p_output1[42]=t5183 + t5184 + var1[2];
  p_output1[43]=t5222 + t5234 + var1[2];
  p_output1[44]=t5271 + t5276 + var1[2];
  p_output1[45]=t5323 + t5343 + var1[2];
  p_output1[46]=t5401 + t5420 + var1[2];
  p_output1[47]=t5450 + t5458 + var1[2];
  p_output1[48]=t5466 + t5483 + var1[2];
  p_output1[49]=t5510 + t5516 + var1[2];
  p_output1[50]=t5522 + t5528 + var1[2];
  p_output1[51]=t5556 + t5562 + var1[2];
  p_output1[52]=t5622 + t5625 + var1[2];
  p_output1[53]=t5627 + t5636 + var1[2];
  p_output1[54]=t5665 + t5674 + var1[2];
  p_output1[55]=t5682 + t5686 + var1[2];
  p_output1[56]=t5689 + t5700 + var1[2];
  p_output1[57]=t5747 + t5756 + var1[2];
  p_output1[58]=t5796 + t5797 + var1[2];
  p_output1[59]=t5112;
  p_output1[60]=t5836;
  p_output1[61]=t3696 + t3713 + t5814 + var1[0];
  p_output1[62]=t3741 + t3759 + t5814 + var1[0];
  p_output1[63]=t3862 + t3880 + t5814 + var1[0];
  p_output1[64]=t3907 + t3926 + t5814 + var1[0];
  p_output1[65]=t3955 + t3976 + t5814 + var1[0];
  p_output1[66]=t4003 + t4009 + t5814 + var1[0];
  p_output1[67]=t4021 + t4028 + t5814 + var1[0];
  p_output1[68]=t4057 + t4073 + t5814 + var1[0];
  p_output1[69]=t4175 + t4191 + t5814 + var1[0];
  p_output1[70]=t4206 + t4212 + t5814 + var1[0];
  p_output1[71]=t4227 + t4241 + t5814 + var1[0];
  p_output1[72]=t4260 + t4264 + t5814 + var1[0];
  p_output1[73]=t4283 + t4289 + t5814 + var1[0];
  p_output1[74]=t4306 + t4311 + t5814 + var1[0];
  p_output1[75]=t4318 + t4320 + t5814 + var1[0];
  p_output1[76]=t4328 + t4329 + t5814 + var1[0];
  p_output1[77]=t4333 + t4334 + t5814 + var1[0];
  p_output1[78]=t4336 + t4337 + t5814 + var1[0];
  p_output1[79]=t5836;
  p_output1[80]=t6173;
  p_output1[81]=t4377 + t4399 + t6164 + var1[1];
  p_output1[82]=t4410 + t4431 + t6164 + var1[1];
  p_output1[83]=t4470 + t4483 + t6164 + var1[1];
  p_output1[84]=t4496 + t4500 + t6164 + var1[1];
  p_output1[85]=t4502 + t4506 + t6164 + var1[1];
  p_output1[86]=t4528 + t4532 + t6164 + var1[1];
  p_output1[87]=t4545 + t4552 + t6164 + var1[1];
  p_output1[88]=t4556 + t4592 + t6164 + var1[1];
  p_output1[89]=t4614 + t4637 + t6164 + var1[1];
  p_output1[90]=t4659 + t4674 + t6164 + var1[1];
  p_output1[91]=t4692 + t4694 + t6164 + var1[1];
  p_output1[92]=t4716 + t4724 + t6164 + var1[1];
  p_output1[93]=t4739 + t4760 + t6164 + var1[1];
  p_output1[94]=t4818 + t4819 + t6164 + var1[1];
  p_output1[95]=t4833 + t4873 + t6164 + var1[1];
  p_output1[96]=t4899 + t4921 + t6164 + var1[1];
  p_output1[97]=t4930 + t4931 + t6164 + var1[1];
  p_output1[98]=t4937 + t4973 + t6164 + var1[1];
  p_output1[99]=t6173;
  p_output1[100]=t6459;
  p_output1[101]=t5117 + t5140 + t6439 + var1[2];
  p_output1[102]=t5183 + t5184 + t6439 + var1[2];
  p_output1[103]=t5222 + t5234 + t6439 + var1[2];
  p_output1[104]=t5271 + t5276 + t6439 + var1[2];
  p_output1[105]=t5323 + t5343 + t6439 + var1[2];
  p_output1[106]=t5401 + t5420 + t6439 + var1[2];
  p_output1[107]=t5450 + t5458 + t6439 + var1[2];
  p_output1[108]=t5466 + t5483 + t6439 + var1[2];
  p_output1[109]=t5510 + t5516 + t6439 + var1[2];
  p_output1[110]=t5522 + t5528 + t6439 + var1[2];
  p_output1[111]=t5556 + t5562 + t6439 + var1[2];
  p_output1[112]=t5622 + t5625 + t6439 + var1[2];
  p_output1[113]=t5627 + t5636 + t6439 + var1[2];
  p_output1[114]=t5665 + t5674 + t6439 + var1[2];
  p_output1[115]=t5682 + t5686 + t6439 + var1[2];
  p_output1[116]=t5689 + t5700 + t6439 + var1[2];
  p_output1[117]=t5747 + t5756 + t6439 + var1[2];
  p_output1[118]=t5796 + t5797 + t6439 + var1[2];
  p_output1[119]=t6459;
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

#include "Link_pelvis_to_back_bkz_bar.hh"

namespace SymFunction
{

void Link_pelvis_to_back_bkz_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
