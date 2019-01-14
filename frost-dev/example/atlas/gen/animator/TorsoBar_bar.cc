/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:15 GMT-06:00
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
  double t173;
  double t4032;
  double t721;
  double t4047;
  double t5350;
  double t24791;
  double t22181;
  double t23690;
  double t24796;
  double t24825;
  double t25048;
  double t34673;
  double t34675;
  double t34677;
  double t34680;
  double t35021;
  double t35022;
  double t35031;
  double t35207;
  double t35209;
  double t35214;
  double t35215;
  double t35342;
  double t35350;
  double t35353;
  double t35355;
  t173 = Cos(var1[4]);
  t4032 = Sin(var1[4]);
  t721 = -0.006739*t173;
  t4047 = -0.006761*t4032;
  t5350 = var1[0] + t721 + t4047;
  t24791 = Sin(var1[3]);
  t22181 = Cos(var1[3]);
  t23690 = -0.011571*t22181;
  t24796 = 0.006761*t173*t24791;
  t24825 = -0.006739*t24791*t4032;
  t25048 = var1[1] + t23690 + t24796 + t24825;
  t34673 = -0.006761*t22181*t173;
  t34675 = -0.011571*t24791;
  t34677 = 0.006739*t22181*t4032;
  t34680 = var1[2] + t34673 + t34675 + t34677;
  t35021 = -0.014902*t173;
  t35022 = 0.023836*t4032;
  t35031 = var1[0] + t35021 + t35022;
  t35207 = -0.024696*t22181;
  t35209 = -0.023836*t173*t24791;
  t35214 = -0.014902*t24791*t4032;
  t35215 = var1[1] + t35207 + t35209 + t35214;
  t35342 = 0.023836*t22181*t173;
  t35350 = -0.024696*t24791;
  t35353 = 0.014902*t22181*t4032;
  t35355 = var1[2] + t35342 + t35350 + t35353;
  p_output1[0]=t5350;
  p_output1[1]=-0.00218*t173 - 0.006338*t4032 + var1[0];
  p_output1[2]=0.002616*t173 - 0.005228*t4032 + var1[0];
  p_output1[3]=0.007127*t173 - 0.003551*t4032 + var1[0];
  p_output1[4]=0.010867*t173 - 0.00149*t4032 + var1[0];
  p_output1[5]=0.013429*t173 + 0.000733*t4032 + var1[0];
  p_output1[6]=0.014535*t173 + 0.002876*t4032 + var1[0];
  p_output1[7]=0.014067*t173 + 0.004708*t4032 + var1[0];
  p_output1[8]=0.012074*t173 + 0.00603*t4032 + var1[0];
  p_output1[9]=0.008773*t173 + 0.006698*t4032 + var1[0];
  p_output1[10]=0.004521*t173 + 0.00664*t4032 + var1[0];
  p_output1[11]=-0.000221*t173 + 0.005863*t4032 + var1[0];
  p_output1[12]=-0.004939*t173 + 0.00445*t4032 + var1[0];
  p_output1[13]=-0.009122*t173 + 0.002556*t4032 + var1[0];
  p_output1[14]=-0.012316*t173 + 0.000384*t4032 + var1[0];
  p_output1[15]=-0.014175*t173 - 0.00183*t4032 + var1[0];
  p_output1[16]=-0.014499*t173 - 0.003845*t4032 + var1[0];
  p_output1[17]=-0.013251*t173 - 0.005443*t4032 + var1[0];
  p_output1[18]=-0.010567*t173 - 0.006452*t4032 + var1[0];
  p_output1[19]=t5350;
  p_output1[20]=t25048;
  p_output1[21]=-0.013419*t22181 + 0.006338*t173*t24791 - 0.00218*t24791*t4032 + var1[1];
  p_output1[22]=-0.013814*t22181 + 0.005228*t173*t24791 + 0.002616*t24791*t4032 + var1[1];
  p_output1[23]=-0.012712*t22181 + 0.003551*t173*t24791 + 0.007127*t24791*t4032 + var1[1];
  p_output1[24]=-0.010232*t22181 + 0.00149*t173*t24791 + 0.010867*t24791*t4032 + var1[1];
  p_output1[25]=-0.006643*t22181 - 0.000733*t173*t24791 + 0.013429*t24791*t4032 + var1[1];
  p_output1[26]=-0.002335*t22181 - 0.002876*t173*t24791 + 0.014535*t24791*t4032 + var1[1];
  p_output1[27]=0.002227*t22181 - 0.004708*t173*t24791 + 0.014067*t24791*t4032 + var1[1];
  p_output1[28]=0.006547*t22181 - 0.00603*t173*t24791 + 0.012074*t24791*t4032 + var1[1];
  p_output1[29]=0.010158*t22181 - 0.006698*t173*t24791 + 0.008773*t24791*t4032 + var1[1];
  p_output1[30]=0.012668*t22181 - 0.00664*t173*t24791 + 0.004521*t24791*t4032 + var1[1];
  p_output1[31]=0.013805*t22181 - 0.005863*t173*t24791 - 0.000221*t24791*t4032 + var1[1];
  p_output1[32]=0.013446*t22181 - 0.00445*t173*t24791 - 0.004939*t24791*t4032 + var1[1];
  p_output1[33]=0.01163*t22181 - 0.002556*t173*t24791 - 0.009122*t24791*t4032 + var1[1];
  p_output1[34]=0.008554*t22181 - 0.000384*t173*t24791 - 0.012316*t24791*t4032 + var1[1];
  p_output1[35]=0.004551*t22181 + 0.00183*t173*t24791 - 0.014175*t24791*t4032 + var1[1];
  p_output1[36]=0.000055*t22181 + 0.003845*t173*t24791 - 0.014499*t24791*t4032 + var1[1];
  p_output1[37]=-0.004447*t22181 + 0.005443*t173*t24791 - 0.013251*t24791*t4032 + var1[1];
  p_output1[38]=-0.008468*t22181 + 0.006452*t173*t24791 - 0.010567*t24791*t4032 + var1[1];
  p_output1[39]=t25048;
  p_output1[40]=t34680;
  p_output1[41]=-0.006338*t173*t22181 - 0.013419*t24791 + 0.00218*t22181*t4032 + var1[2];
  p_output1[42]=-0.005228*t173*t22181 - 0.013814*t24791 - 0.002616*t22181*t4032 + var1[2];
  p_output1[43]=-0.003551*t173*t22181 - 0.012712*t24791 - 0.007127*t22181*t4032 + var1[2];
  p_output1[44]=-0.00149*t173*t22181 - 0.010232*t24791 - 0.010867*t22181*t4032 + var1[2];
  p_output1[45]=0.000733*t173*t22181 - 0.006643*t24791 - 0.013429*t22181*t4032 + var1[2];
  p_output1[46]=0.002876*t173*t22181 - 0.002335*t24791 - 0.014535*t22181*t4032 + var1[2];
  p_output1[47]=0.004708*t173*t22181 + 0.002227*t24791 - 0.014067*t22181*t4032 + var1[2];
  p_output1[48]=0.00603*t173*t22181 + 0.006547*t24791 - 0.012074*t22181*t4032 + var1[2];
  p_output1[49]=0.006698*t173*t22181 + 0.010158*t24791 - 0.008773*t22181*t4032 + var1[2];
  p_output1[50]=0.00664*t173*t22181 + 0.012668*t24791 - 0.004521*t22181*t4032 + var1[2];
  p_output1[51]=0.005863*t173*t22181 + 0.013805*t24791 + 0.000221*t22181*t4032 + var1[2];
  p_output1[52]=0.00445*t173*t22181 + 0.013446*t24791 + 0.004939*t22181*t4032 + var1[2];
  p_output1[53]=0.002556*t173*t22181 + 0.01163*t24791 + 0.009122*t22181*t4032 + var1[2];
  p_output1[54]=0.000384*t173*t22181 + 0.008554*t24791 + 0.012316*t22181*t4032 + var1[2];
  p_output1[55]=-0.00183*t173*t22181 + 0.004551*t24791 + 0.014175*t22181*t4032 + var1[2];
  p_output1[56]=-0.003845*t173*t22181 + 0.000055*t24791 + 0.014499*t22181*t4032 + var1[2];
  p_output1[57]=-0.005443*t173*t22181 - 0.004447*t24791 + 0.013251*t22181*t4032 + var1[2];
  p_output1[58]=-0.006452*t173*t22181 - 0.008468*t24791 + 0.010567*t22181*t4032 + var1[2];
  p_output1[59]=t34680;
  p_output1[60]=t35031;
  p_output1[61]=-0.010343*t173 + 0.024259*t4032 + var1[0];
  p_output1[62]=-0.005547*t173 + 0.025369*t4032 + var1[0];
  p_output1[63]=-0.001036*t173 + 0.027046*t4032 + var1[0];
  p_output1[64]=0.002704*t173 + 0.029107*t4032 + var1[0];
  p_output1[65]=0.005266*t173 + 0.03133*t4032 + var1[0];
  p_output1[66]=0.006372*t173 + 0.033473*t4032 + var1[0];
  p_output1[67]=0.005904*t173 + 0.035305*t4032 + var1[0];
  p_output1[68]=0.003911*t173 + 0.036627*t4032 + var1[0];
  p_output1[69]=0.00061*t173 + 0.037295*t4032 + var1[0];
  p_output1[70]=-0.003642*t173 + 0.037237*t4032 + var1[0];
  p_output1[71]=-0.008384*t173 + 0.03646*t4032 + var1[0];
  p_output1[72]=-0.013102*t173 + 0.035047*t4032 + var1[0];
  p_output1[73]=-0.017285*t173 + 0.033153*t4032 + var1[0];
  p_output1[74]=-0.020479*t173 + 0.030981*t4032 + var1[0];
  p_output1[75]=-0.022338*t173 + 0.028767*t4032 + var1[0];
  p_output1[76]=-0.022662*t173 + 0.026752*t4032 + var1[0];
  p_output1[77]=-0.021414*t173 + 0.025154*t4032 + var1[0];
  p_output1[78]=-0.01873*t173 + 0.024145*t4032 + var1[0];
  p_output1[79]=t35031;
  p_output1[80]=t35215;
  p_output1[81]=-0.026544*t22181 - 0.024259*t173*t24791 - 0.010343*t24791*t4032 + var1[1];
  p_output1[82]=-0.026939*t22181 - 0.025369*t173*t24791 - 0.005547*t24791*t4032 + var1[1];
  p_output1[83]=-0.025837*t22181 - 0.027046*t173*t24791 - 0.001036*t24791*t4032 + var1[1];
  p_output1[84]=-0.023357*t22181 - 0.029107*t173*t24791 + 0.002704*t24791*t4032 + var1[1];
  p_output1[85]=-0.019768*t22181 - 0.03133*t173*t24791 + 0.005266*t24791*t4032 + var1[1];
  p_output1[86]=-0.01546*t22181 - 0.033473*t173*t24791 + 0.006372*t24791*t4032 + var1[1];
  p_output1[87]=-0.010898*t22181 - 0.035305*t173*t24791 + 0.005904*t24791*t4032 + var1[1];
  p_output1[88]=-0.006578*t22181 - 0.036627*t173*t24791 + 0.003911*t24791*t4032 + var1[1];
  p_output1[89]=-0.002967*t22181 - 0.037295*t173*t24791 + 0.00061*t24791*t4032 + var1[1];
  p_output1[90]=-0.000457*t22181 - 0.037237*t173*t24791 - 0.003642*t24791*t4032 + var1[1];
  p_output1[91]=0.00068*t22181 - 0.03646*t173*t24791 - 0.008384*t24791*t4032 + var1[1];
  p_output1[92]=0.000321*t22181 - 0.035047*t173*t24791 - 0.013102*t24791*t4032 + var1[1];
  p_output1[93]=-0.001495*t22181 - 0.033153*t173*t24791 - 0.017285*t24791*t4032 + var1[1];
  p_output1[94]=-0.004571*t22181 - 0.030981*t173*t24791 - 0.020479*t24791*t4032 + var1[1];
  p_output1[95]=-0.008574*t22181 - 0.028767*t173*t24791 - 0.022338*t24791*t4032 + var1[1];
  p_output1[96]=-0.01307*t22181 - 0.026752*t173*t24791 - 0.022662*t24791*t4032 + var1[1];
  p_output1[97]=-0.017572*t22181 - 0.025154*t173*t24791 - 0.021414*t24791*t4032 + var1[1];
  p_output1[98]=-0.021593*t22181 - 0.024145*t173*t24791 - 0.01873*t24791*t4032 + var1[1];
  p_output1[99]=t35215;
  p_output1[100]=t35355;
  p_output1[101]=0.024259*t173*t22181 - 0.026544*t24791 + 0.010343*t22181*t4032 + var1[2];
  p_output1[102]=0.025369*t173*t22181 - 0.026939*t24791 + 0.005547*t22181*t4032 + var1[2];
  p_output1[103]=0.027046*t173*t22181 - 0.025837*t24791 + 0.001036*t22181*t4032 + var1[2];
  p_output1[104]=0.029107*t173*t22181 - 0.023357*t24791 - 0.002704*t22181*t4032 + var1[2];
  p_output1[105]=0.03133*t173*t22181 - 0.019768*t24791 - 0.005266*t22181*t4032 + var1[2];
  p_output1[106]=0.033473*t173*t22181 - 0.01546*t24791 - 0.006372*t22181*t4032 + var1[2];
  p_output1[107]=0.035305*t173*t22181 - 0.010898*t24791 - 0.005904*t22181*t4032 + var1[2];
  p_output1[108]=0.036627*t173*t22181 - 0.006578*t24791 - 0.003911*t22181*t4032 + var1[2];
  p_output1[109]=0.037295*t173*t22181 - 0.002967*t24791 - 0.00061*t22181*t4032 + var1[2];
  p_output1[110]=0.037237*t173*t22181 - 0.000457*t24791 + 0.003642*t22181*t4032 + var1[2];
  p_output1[111]=0.03646*t173*t22181 + 0.00068*t24791 + 0.008384*t22181*t4032 + var1[2];
  p_output1[112]=0.035047*t173*t22181 + 0.000321*t24791 + 0.013102*t22181*t4032 + var1[2];
  p_output1[113]=0.033153*t173*t22181 - 0.001495*t24791 + 0.017285*t22181*t4032 + var1[2];
  p_output1[114]=0.030981*t173*t22181 - 0.004571*t24791 + 0.020479*t22181*t4032 + var1[2];
  p_output1[115]=0.028767*t173*t22181 - 0.008574*t24791 + 0.022338*t22181*t4032 + var1[2];
  p_output1[116]=0.026752*t173*t22181 - 0.01307*t24791 + 0.022662*t22181*t4032 + var1[2];
  p_output1[117]=0.025154*t173*t22181 - 0.017572*t24791 + 0.021414*t22181*t4032 + var1[2];
  p_output1[118]=0.024145*t173*t22181 - 0.021593*t24791 + 0.01873*t22181*t4032 + var1[2];
  p_output1[119]=t35355;
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

#include "TorsoBar_bar.hh"

namespace SymFunction
{

void TorsoBar_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
