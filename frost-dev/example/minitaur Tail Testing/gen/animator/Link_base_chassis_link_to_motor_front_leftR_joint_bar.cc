/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:48 GMT-04:00
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
  double t11;
  double t90;
  double t363;
  double t438;
  double t213;
  double t380;
  double t540;
  double t676;
  double t8285;
  double t8304;
  double t8297;
  double t8307;
  double t8311;
  double t8328;
  double t8330;
  double t8333;
  double t8293;
  double t8322;
  double t8341;
  double t8345;
  double t8541;
  double t8542;
  double t8549;
  double t8570;
  double t8576;
  double t8604;
  double t8536;
  double t8550;
  double t8616;
  double t8621;
  double t751;
  double t3136;
  double t3490;
  double t3763;
  double t5007;
  double t5513;
  double t5645;
  double t6960;
  double t7159;
  double t7361;
  double t7725;
  double t7776;
  double t7801;
  double t7928;
  double t8061;
  double t8082;
  double t8107;
  double t8270;
  double t8932;
  double t8935;
  double t8937;
  double t8349;
  double t8357;
  double t8365;
  double t8391;
  double t8401;
  double t8418;
  double t8434;
  double t8448;
  double t8453;
  double t8471;
  double t8476;
  double t8488;
  double t8495;
  double t8500;
  double t8505;
  double t8510;
  double t8515;
  double t8528;
  double t9099;
  double t9103;
  double t9104;
  double t8622;
  double t8647;
  double t8655;
  double t8674;
  double t8689;
  double t8702;
  double t8719;
  double t8734;
  double t8757;
  double t8766;
  double t8780;
  double t8789;
  double t8804;
  double t8833;
  double t8844;
  double t8863;
  double t8883;
  double t8902;
  double t9454;
  double t9459;
  double t9460;
  t11 = Cos(var1[4]);
  t90 = Cos(var1[5]);
  t363 = Sin(var1[4]);
  t438 = Sin(var1[5]);
  t213 = 0.00449*t11*t90;
  t380 = -0.012019*t363;
  t540 = 0.007771*t11*t438;
  t676 = var1[0] + t213 + t380 + t540;
  t8285 = Sin(var1[3]);
  t8304 = Cos(var1[3]);
  t8297 = t90*t8285*t363;
  t8307 = t8304*t438;
  t8311 = t8297 + t8307;
  t8328 = t8304*t90;
  t8330 = -1.*t8285*t363*t438;
  t8333 = t8328 + t8330;
  t8293 = 0.012019*t11*t8285;
  t8322 = 0.00449*t8311;
  t8341 = -0.007771*t8333;
  t8345 = var1[1] + t8293 + t8322 + t8341;
  t8541 = -1.*t8304*t90*t363;
  t8542 = t8285*t438;
  t8549 = t8541 + t8542;
  t8570 = t90*t8285;
  t8576 = t8304*t363*t438;
  t8604 = t8570 + t8576;
  t8536 = -0.012019*t8304*t11;
  t8550 = 0.00449*t8549;
  t8616 = -0.007771*t8604;
  t8621 = var1[2] + t8536 + t8550 + t8616;
  t751 = -0.014282*t363;
  t3136 = -0.014997*t363;
  t3490 = -0.014087*t363;
  t3763 = -0.01165*t363;
  t5007 = -0.007951*t363;
  t5513 = -0.003391*t363;
  t5645 = 0.001537*t363;
  t6960 = 0.006299*t363;
  t7159 = 0.010378*t363;
  t7361 = 0.013332*t363;
  t7725 = 0.014842*t363;
  t7776 = 0.014743*t363;
  t7801 = 0.013047*t363;
  t7928 = 0.009936*t363;
  t8061 = 0.00575*t363;
  t8082 = 0.000939*t363;
  t8107 = -0.003972*t363;
  t8270 = -0.008454*t363;
  t8932 = 0.22949*t11*t90;
  t8935 = -0.122229*t11*t438;
  t8937 = var1[0] + t8932 + t380 + t8935;
  t8349 = 0.014282*t11*t8285;
  t8357 = 0.014997*t11*t8285;
  t8365 = 0.014087*t11*t8285;
  t8391 = 0.01165*t11*t8285;
  t8401 = 0.007951*t11*t8285;
  t8418 = 0.003391*t11*t8285;
  t8434 = -0.001537*t11*t8285;
  t8448 = -0.006299*t11*t8285;
  t8453 = -0.010378*t11*t8285;
  t8471 = -0.013332*t11*t8285;
  t8476 = -0.014842*t11*t8285;
  t8488 = -0.014743*t11*t8285;
  t8495 = -0.013047*t11*t8285;
  t8500 = -0.009936*t11*t8285;
  t8505 = -0.00575*t11*t8285;
  t8510 = -0.000939*t11*t8285;
  t8515 = 0.003972*t11*t8285;
  t8528 = 0.008454*t11*t8285;
  t9099 = 0.22949*t8311;
  t9103 = 0.122229*t8333;
  t9104 = var1[1] + t8293 + t9099 + t9103;
  t8622 = -0.014282*t8304*t11;
  t8647 = -0.014997*t8304*t11;
  t8655 = -0.014087*t8304*t11;
  t8674 = -0.01165*t8304*t11;
  t8689 = -0.007951*t8304*t11;
  t8702 = -0.003391*t8304*t11;
  t8719 = 0.001537*t8304*t11;
  t8734 = 0.006299*t8304*t11;
  t8757 = 0.010378*t8304*t11;
  t8766 = 0.013332*t8304*t11;
  t8780 = 0.014842*t8304*t11;
  t8789 = 0.014743*t8304*t11;
  t8804 = 0.013047*t8304*t11;
  t8833 = 0.009936*t8304*t11;
  t8844 = 0.00575*t8304*t11;
  t8863 = 0.000939*t8304*t11;
  t8883 = -0.003972*t8304*t11;
  t8902 = -0.008454*t8304*t11;
  t9454 = 0.22949*t8549;
  t9459 = 0.122229*t8604;
  t9460 = var1[2] + t8536 + t9454 + t9459;
  p_output1[0]=t676;
  p_output1[1]=0.003971*t11*t438 + t751 + 0.002294*t11*t90 + var1[0];
  p_output1[2]=t3136 - 0.00026*t11*t438 - 0.00015*t11*t90 + var1[0];
  p_output1[3]=t3490 - 0.004462*t11*t438 - 0.002578*t11*t90 + var1[0];
  p_output1[4]=t3763 - 0.008181*t11*t438 - 0.004727*t11*t90 + var1[0];
  p_output1[5]=-0.011013*t11*t438 + t5007 - 0.006363*t11*t90 + var1[0];
  p_output1[6]=-0.012652*t11*t438 + t5513 - 0.00731*t11*t90 + var1[0];
  p_output1[7]=-0.01292*t11*t438 + t5645 - 0.007465*t11*t90 + var1[0];
  p_output1[8]=-0.011787*t11*t438 + t6960 - 0.00681*t11*t90 + var1[0];
  p_output1[9]=-0.009378*t11*t438 + t7159 - 0.005418*t11*t90 + var1[0];
  p_output1[10]=-0.005952*t11*t438 + t7361 - 0.003439*t11*t90 + var1[0];
  p_output1[11]=-0.001881*t11*t438 + t7725 - 0.001087*t11*t90 + var1[0];
  p_output1[12]=0.002394*t11*t438 + t7776 + 0.001383*t11*t90 + var1[0];
  p_output1[13]=0.006409*t11*t438 + t7801 + 0.003703*t11*t90 + var1[0];
  p_output1[14]=0.00973*t11*t438 + t7928 + 0.005622*t11*t90 + var1[0];
  p_output1[15]=0.011996*t11*t438 + t8061 + 0.006931*t11*t90 + var1[0];
  p_output1[16]=0.012962*t11*t438 + t8082 + 0.007489*t11*t90 + var1[0];
  p_output1[17]=0.012524*t11*t438 + t8107 + 0.007236*t11*t90 + var1[0];
  p_output1[18]=0.010729*t11*t438 + t8270 + 0.006199*t11*t90 + var1[0];
  p_output1[19]=t676;
  p_output1[20]=t8345;
  p_output1[21]=0.002294*t8311 - 0.003971*t8333 + t8349 + var1[1];
  p_output1[22]=-0.00015*t8311 + 0.00026*t8333 + t8357 + var1[1];
  p_output1[23]=-0.002578*t8311 + 0.004462*t8333 + t8365 + var1[1];
  p_output1[24]=-0.004727*t8311 + 0.008181*t8333 + t8391 + var1[1];
  p_output1[25]=-0.006363*t8311 + 0.011013*t8333 + t8401 + var1[1];
  p_output1[26]=-0.00731*t8311 + 0.012652*t8333 + t8418 + var1[1];
  p_output1[27]=-0.007465*t8311 + 0.01292*t8333 + t8434 + var1[1];
  p_output1[28]=-0.00681*t8311 + 0.011787*t8333 + t8448 + var1[1];
  p_output1[29]=-0.005418*t8311 + 0.009378*t8333 + t8453 + var1[1];
  p_output1[30]=-0.003439*t8311 + 0.005952*t8333 + t8471 + var1[1];
  p_output1[31]=-0.001087*t8311 + 0.001881*t8333 + t8476 + var1[1];
  p_output1[32]=0.001383*t8311 - 0.002394*t8333 + t8488 + var1[1];
  p_output1[33]=0.003703*t8311 - 0.006409*t8333 + t8495 + var1[1];
  p_output1[34]=0.005622*t8311 - 0.00973*t8333 + t8500 + var1[1];
  p_output1[35]=0.006931*t8311 - 0.011996*t8333 + t8505 + var1[1];
  p_output1[36]=0.007489*t8311 - 0.012962*t8333 + t8510 + var1[1];
  p_output1[37]=0.007236*t8311 - 0.012524*t8333 + t8515 + var1[1];
  p_output1[38]=0.006199*t8311 - 0.010729*t8333 + t8528 + var1[1];
  p_output1[39]=t8345;
  p_output1[40]=t8621;
  p_output1[41]=0.002294*t8549 - 0.003971*t8604 + t8622 + var1[2];
  p_output1[42]=-0.00015*t8549 + 0.00026*t8604 + t8647 + var1[2];
  p_output1[43]=-0.002578*t8549 + 0.004462*t8604 + t8655 + var1[2];
  p_output1[44]=-0.004727*t8549 + 0.008181*t8604 + t8674 + var1[2];
  p_output1[45]=-0.006363*t8549 + 0.011013*t8604 + t8689 + var1[2];
  p_output1[46]=-0.00731*t8549 + 0.012652*t8604 + t8702 + var1[2];
  p_output1[47]=-0.007465*t8549 + 0.01292*t8604 + t8719 + var1[2];
  p_output1[48]=-0.00681*t8549 + 0.011787*t8604 + t8734 + var1[2];
  p_output1[49]=-0.005418*t8549 + 0.009378*t8604 + t8757 + var1[2];
  p_output1[50]=-0.003439*t8549 + 0.005952*t8604 + t8766 + var1[2];
  p_output1[51]=-0.001087*t8549 + 0.001881*t8604 + t8780 + var1[2];
  p_output1[52]=0.001383*t8549 - 0.002394*t8604 + t8789 + var1[2];
  p_output1[53]=0.003703*t8549 - 0.006409*t8604 + t8804 + var1[2];
  p_output1[54]=0.005622*t8549 - 0.00973*t8604 + t8833 + var1[2];
  p_output1[55]=0.006931*t8549 - 0.011996*t8604 + t8844 + var1[2];
  p_output1[56]=0.007489*t8549 - 0.012962*t8604 + t8863 + var1[2];
  p_output1[57]=0.007236*t8549 - 0.012524*t8604 + t8883 + var1[2];
  p_output1[58]=0.006199*t8549 - 0.010729*t8604 + t8902 + var1[2];
  p_output1[59]=t8621;
  p_output1[60]=t8937;
  p_output1[61]=-0.126029*t11*t438 + t751 + 0.227294*t11*t90 + var1[0];
  p_output1[62]=t3136 - 0.13026*t11*t438 + 0.22485*t11*t90 + var1[0];
  p_output1[63]=t3490 - 0.134462*t11*t438 + 0.222422*t11*t90 + var1[0];
  p_output1[64]=t3763 - 0.138181*t11*t438 + 0.220273*t11*t90 + var1[0];
  p_output1[65]=-0.141013*t11*t438 + t5007 + 0.218637*t11*t90 + var1[0];
  p_output1[66]=-0.142652*t11*t438 + t5513 + 0.21769*t11*t90 + var1[0];
  p_output1[67]=-0.14292*t11*t438 + t5645 + 0.217535*t11*t90 + var1[0];
  p_output1[68]=-0.141787*t11*t438 + t6960 + 0.21819*t11*t90 + var1[0];
  p_output1[69]=-0.139378*t11*t438 + t7159 + 0.219582*t11*t90 + var1[0];
  p_output1[70]=-0.135952*t11*t438 + t7361 + 0.221561*t11*t90 + var1[0];
  p_output1[71]=-0.131881*t11*t438 + t7725 + 0.223913*t11*t90 + var1[0];
  p_output1[72]=-0.127606*t11*t438 + t7776 + 0.226383*t11*t90 + var1[0];
  p_output1[73]=-0.123591*t11*t438 + t7801 + 0.228703*t11*t90 + var1[0];
  p_output1[74]=-0.12027*t11*t438 + t7928 + 0.230622*t11*t90 + var1[0];
  p_output1[75]=-0.118004*t11*t438 + t8061 + 0.231931*t11*t90 + var1[0];
  p_output1[76]=-0.117038*t11*t438 + t8082 + 0.232489*t11*t90 + var1[0];
  p_output1[77]=-0.117476*t11*t438 + t8107 + 0.232236*t11*t90 + var1[0];
  p_output1[78]=-0.119271*t11*t438 + t8270 + 0.231199*t11*t90 + var1[0];
  p_output1[79]=t8937;
  p_output1[80]=t9104;
  p_output1[81]=0.227294*t8311 + 0.126029*t8333 + t8349 + var1[1];
  p_output1[82]=0.22485*t8311 + 0.13026*t8333 + t8357 + var1[1];
  p_output1[83]=0.222422*t8311 + 0.134462*t8333 + t8365 + var1[1];
  p_output1[84]=0.220273*t8311 + 0.138181*t8333 + t8391 + var1[1];
  p_output1[85]=0.218637*t8311 + 0.141013*t8333 + t8401 + var1[1];
  p_output1[86]=0.21769*t8311 + 0.142652*t8333 + t8418 + var1[1];
  p_output1[87]=0.217535*t8311 + 0.14292*t8333 + t8434 + var1[1];
  p_output1[88]=0.21819*t8311 + 0.141787*t8333 + t8448 + var1[1];
  p_output1[89]=0.219582*t8311 + 0.139378*t8333 + t8453 + var1[1];
  p_output1[90]=0.221561*t8311 + 0.135952*t8333 + t8471 + var1[1];
  p_output1[91]=0.223913*t8311 + 0.131881*t8333 + t8476 + var1[1];
  p_output1[92]=0.226383*t8311 + 0.127606*t8333 + t8488 + var1[1];
  p_output1[93]=0.228703*t8311 + 0.123591*t8333 + t8495 + var1[1];
  p_output1[94]=0.230622*t8311 + 0.12027*t8333 + t8500 + var1[1];
  p_output1[95]=0.231931*t8311 + 0.118004*t8333 + t8505 + var1[1];
  p_output1[96]=0.232489*t8311 + 0.117038*t8333 + t8510 + var1[1];
  p_output1[97]=0.232236*t8311 + 0.117476*t8333 + t8515 + var1[1];
  p_output1[98]=0.231199*t8311 + 0.119271*t8333 + t8528 + var1[1];
  p_output1[99]=t9104;
  p_output1[100]=t9460;
  p_output1[101]=0.227294*t8549 + 0.126029*t8604 + t8622 + var1[2];
  p_output1[102]=0.22485*t8549 + 0.13026*t8604 + t8647 + var1[2];
  p_output1[103]=0.222422*t8549 + 0.134462*t8604 + t8655 + var1[2];
  p_output1[104]=0.220273*t8549 + 0.138181*t8604 + t8674 + var1[2];
  p_output1[105]=0.218637*t8549 + 0.141013*t8604 + t8689 + var1[2];
  p_output1[106]=0.21769*t8549 + 0.142652*t8604 + t8702 + var1[2];
  p_output1[107]=0.217535*t8549 + 0.14292*t8604 + t8719 + var1[2];
  p_output1[108]=0.21819*t8549 + 0.141787*t8604 + t8734 + var1[2];
  p_output1[109]=0.219582*t8549 + 0.139378*t8604 + t8757 + var1[2];
  p_output1[110]=0.221561*t8549 + 0.135952*t8604 + t8766 + var1[2];
  p_output1[111]=0.223913*t8549 + 0.131881*t8604 + t8780 + var1[2];
  p_output1[112]=0.226383*t8549 + 0.127606*t8604 + t8789 + var1[2];
  p_output1[113]=0.228703*t8549 + 0.123591*t8604 + t8804 + var1[2];
  p_output1[114]=0.230622*t8549 + 0.12027*t8604 + t8833 + var1[2];
  p_output1[115]=0.231931*t8549 + 0.118004*t8604 + t8844 + var1[2];
  p_output1[116]=0.232489*t8549 + 0.117038*t8604 + t8863 + var1[2];
  p_output1[117]=0.232236*t8549 + 0.117476*t8604 + t8883 + var1[2];
  p_output1[118]=0.231199*t8549 + 0.119271*t8604 + t8902 + var1[2];
  p_output1[119]=t9460;
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

#include "Link_base_chassis_link_to_motor_front_leftR_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_motor_front_leftR_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
