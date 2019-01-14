/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:01:55 GMT-05:00
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
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=2;
  p_output1[6]=2;
  p_output1[7]=2;
  p_output1[8]=2;
  p_output1[9]=2;
  p_output1[10]=3;
  p_output1[11]=3;
  p_output1[12]=3;
  p_output1[13]=3;
  p_output1[14]=3;
  p_output1[15]=4;
  p_output1[16]=4;
  p_output1[17]=4;
  p_output1[18]=4;
  p_output1[19]=4;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=6;
  p_output1[26]=6;
  p_output1[27]=6;
  p_output1[28]=6;
  p_output1[29]=6;
  p_output1[30]=7;
  p_output1[31]=7;
  p_output1[32]=7;
  p_output1[33]=7;
  p_output1[34]=7;
  p_output1[35]=8;
  p_output1[36]=8;
  p_output1[37]=8;
  p_output1[38]=8;
  p_output1[39]=8;
  p_output1[40]=9;
  p_output1[41]=9;
  p_output1[42]=9;
  p_output1[43]=9;
  p_output1[44]=9;
  p_output1[45]=10;
  p_output1[46]=10;
  p_output1[47]=10;
  p_output1[48]=10;
  p_output1[49]=10;
  p_output1[50]=11;
  p_output1[51]=11;
  p_output1[52]=11;
  p_output1[53]=11;
  p_output1[54]=11;
  p_output1[55]=12;
  p_output1[56]=12;
  p_output1[57]=12;
  p_output1[58]=12;
  p_output1[59]=12;
  p_output1[60]=13;
  p_output1[61]=13;
  p_output1[62]=13;
  p_output1[63]=13;
  p_output1[64]=13;
  p_output1[65]=14;
  p_output1[66]=14;
  p_output1[67]=14;
  p_output1[68]=14;
  p_output1[69]=14;
  p_output1[70]=15;
  p_output1[71]=15;
  p_output1[72]=15;
  p_output1[73]=15;
  p_output1[74]=15;
  p_output1[75]=16;
  p_output1[76]=16;
  p_output1[77]=16;
  p_output1[78]=16;
  p_output1[79]=16;
  p_output1[80]=1;
  p_output1[81]=9;
  p_output1[82]=25;
  p_output1[83]=33;
  p_output1[84]=41;
  p_output1[85]=2;
  p_output1[86]=10;
  p_output1[87]=26;
  p_output1[88]=34;
  p_output1[89]=42;
  p_output1[90]=3;
  p_output1[91]=11;
  p_output1[92]=27;
  p_output1[93]=35;
  p_output1[94]=43;
  p_output1[95]=4;
  p_output1[96]=12;
  p_output1[97]=28;
  p_output1[98]=36;
  p_output1[99]=44;
  p_output1[100]=5;
  p_output1[101]=13;
  p_output1[102]=29;
  p_output1[103]=37;
  p_output1[104]=45;
  p_output1[105]=6;
  p_output1[106]=14;
  p_output1[107]=30;
  p_output1[108]=38;
  p_output1[109]=46;
  p_output1[110]=7;
  p_output1[111]=15;
  p_output1[112]=31;
  p_output1[113]=39;
  p_output1[114]=47;
  p_output1[115]=8;
  p_output1[116]=16;
  p_output1[117]=32;
  p_output1[118]=40;
  p_output1[119]=48;
  p_output1[120]=1;
  p_output1[121]=9;
  p_output1[122]=17;
  p_output1[123]=33;
  p_output1[124]=41;
  p_output1[125]=2;
  p_output1[126]=10;
  p_output1[127]=18;
  p_output1[128]=34;
  p_output1[129]=42;
  p_output1[130]=3;
  p_output1[131]=11;
  p_output1[132]=19;
  p_output1[133]=35;
  p_output1[134]=43;
  p_output1[135]=4;
  p_output1[136]=12;
  p_output1[137]=20;
  p_output1[138]=36;
  p_output1[139]=44;
  p_output1[140]=5;
  p_output1[141]=13;
  p_output1[142]=21;
  p_output1[143]=37;
  p_output1[144]=45;
  p_output1[145]=6;
  p_output1[146]=14;
  p_output1[147]=22;
  p_output1[148]=38;
  p_output1[149]=46;
  p_output1[150]=7;
  p_output1[151]=15;
  p_output1[152]=23;
  p_output1[153]=39;
  p_output1[154]=47;
  p_output1[155]=8;
  p_output1[156]=16;
  p_output1[157]=24;
  p_output1[158]=40;
  p_output1[159]=48;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 80, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_hs_int_x.hh"

namespace truckopt
{

void Js_hs_int_x_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
