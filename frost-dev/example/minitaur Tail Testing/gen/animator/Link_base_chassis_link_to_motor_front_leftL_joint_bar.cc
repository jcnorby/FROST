/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:07:44 GMT-04:00
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
  double t153;
  double t505;
  double t1755;
  double t2472;
  double t1526;
  double t2457;
  double t3947;
  double t4195;
  double t8551;
  double t8564;
  double t8562;
  double t8574;
  double t8578;
  double t8581;
  double t8586;
  double t8599;
  double t8555;
  double t8579;
  double t8601;
  double t8602;
  double t9563;
  double t9564;
  double t9565;
  double t9606;
  double t10011;
  double t10020;
  double t9562;
  double t9605;
  double t10043;
  double t10064;
  double t4827;
  double t5290;
  double t6490;
  double t6587;
  double t6865;
  double t6939;
  double t7001;
  double t7205;
  double t7302;
  double t7357;
  double t8162;
  double t8301;
  double t8340;
  double t8366;
  double t8432;
  double t8443;
  double t8485;
  double t8546;
  double t10956;
  double t10957;
  double t10959;
  double t8603;
  double t8708;
  double t8729;
  double t8760;
  double t8769;
  double t8793;
  double t8832;
  double t8895;
  double t8983;
  double t9049;
  double t9175;
  double t9207;
  double t9401;
  double t9442;
  double t9498;
  double t9535;
  double t9549;
  double t9553;
  double t11239;
  double t11241;
  double t11245;
  double t10070;
  double t10207;
  double t10218;
  double t10236;
  double t10240;
  double t10421;
  double t10556;
  double t10577;
  double t10631;
  double t10790;
  double t10794;
  double t10854;
  double t10869;
  double t10886;
  double t10894;
  double t10917;
  double t10921;
  double t10940;
  double t11506;
  double t11507;
  double t11549;
  t153 = Cos(var1[4]);
  t505 = Cos(var1[5]);
  t1755 = Sin(var1[4]);
  t2472 = Sin(var1[5]);
  t1526 = 0.005961*t153*t505;
  t2457 = -0.009111*t1755;
  t3947 = 0.010318*t153*t2472;
  t4195 = var1[0] + t1526 + t2457 + t3947;
  t8551 = Sin(var1[3]);
  t8564 = Cos(var1[3]);
  t8562 = t505*t8551*t1755;
  t8574 = t8564*t2472;
  t8578 = t8562 + t8574;
  t8581 = t8564*t505;
  t8586 = -1.*t8551*t1755*t2472;
  t8599 = t8581 + t8586;
  t8555 = 0.009111*t153*t8551;
  t8579 = 0.005961*t8578;
  t8601 = -0.010318*t8599;
  t8602 = var1[1] + t8555 + t8579 + t8601;
  t9563 = -1.*t8564*t505*t1755;
  t9564 = t8551*t2472;
  t9565 = t9563 + t9564;
  t9606 = t505*t8551;
  t10011 = t8564*t1755*t2472;
  t10020 = t9606 + t10011;
  t9562 = -0.009111*t8564*t153;
  t9605 = 0.005961*t9565;
  t10043 = -0.010318*t10020;
  t10064 = var1[2] + t9562 + t9605 + t10043;
  t4827 = -0.012486*t1755;
  t5290 = -0.014509*t1755;
  t6490 = -0.014959*t1755;
  t6587 = -0.013788*t1755;
  t6865 = -0.011123*t1755;
  t6939 = -0.007253*t1755;
  t7001 = -0.002596*t1755;
  t7205 = 0.002341*t1755;
  t7302 = 0.007025*t1755;
  t7357 = 0.010948*t1755;
  t8162 = 0.013684*t1755;
  t8301 = 0.014938*t1755;
  t8340 = 0.014572*t1755;
  t8366 = 0.012628*t1755;
  t8432 = 0.009315*t1755;
  t8443 = 0.004992*t1755;
  t8485 = 0.000129*t1755;
  t8546 = -0.004748*t1755;
  t10956 = 0.230961*t153*t505;
  t10957 = -0.119682*t153*t2472;
  t10959 = var1[0] + t10956 + t2457 + t10957;
  t8603 = 0.012486*t153*t8551;
  t8708 = 0.014509*t153*t8551;
  t8729 = 0.014959*t153*t8551;
  t8760 = 0.013788*t153*t8551;
  t8769 = 0.011123*t153*t8551;
  t8793 = 0.007253*t153*t8551;
  t8832 = 0.002596*t153*t8551;
  t8895 = -0.002341*t153*t8551;
  t8983 = -0.007025*t153*t8551;
  t9049 = -0.010948*t153*t8551;
  t9175 = -0.013684*t153*t8551;
  t9207 = -0.014938*t153*t8551;
  t9401 = -0.014572*t153*t8551;
  t9442 = -0.012628*t153*t8551;
  t9498 = -0.009315*t153*t8551;
  t9535 = -0.004992*t153*t8551;
  t9549 = -0.000129*t153*t8551;
  t9553 = 0.004748*t153*t8551;
  t11239 = 0.230961*t8578;
  t11241 = 0.119682*t8599;
  t11245 = var1[1] + t8555 + t11239 + t11241;
  t10070 = -0.012486*t8564*t153;
  t10207 = -0.014509*t8564*t153;
  t10218 = -0.014959*t8564*t153;
  t10236 = -0.013788*t8564*t153;
  t10240 = -0.011123*t8564*t153;
  t10421 = -0.007253*t8564*t153;
  t10556 = -0.002596*t8564*t153;
  t10577 = 0.002341*t8564*t153;
  t10631 = 0.007025*t8564*t153;
  t10790 = 0.010948*t8564*t153;
  t10794 = 0.013684*t8564*t153;
  t10854 = 0.014938*t8564*t153;
  t10869 = 0.014572*t8564*t153;
  t10886 = 0.012628*t8564*t153;
  t10894 = 0.009315*t8564*t153;
  t10917 = 0.004992*t8564*t153;
  t10921 = 0.000129*t8564*t153;
  t10940 = -0.004748*t8564*t153;
  t11506 = 0.230961*t9565;
  t11507 = 0.119682*t10020;
  t11549 = var1[2] + t9562 + t11506 + t11507;
  p_output1[0]=t4195;
  p_output1[1]=0.007197*t153*t2472 + t4827 + 0.004158*t153*t505 + var1[0];
  p_output1[2]=0.003297*t153*t2472 + 0.001905*t153*t505 + t5290 + var1[0];
  p_output1[3]=-0.000961*t153*t2472 - 0.000555*t153*t505 + t6490 + var1[0];
  p_output1[4]=-0.005115*t153*t2472 - 0.002955*t153*t505 + t6587 + var1[0];
  p_output1[5]=-0.008714*t153*t2472 - 0.005035*t153*t505 + t6865 + var1[0];
  p_output1[6]=-0.011369*t153*t2472 - 0.006569*t153*t505 + t6939 + var1[0];
  p_output1[7]=-0.012792*t153*t2472 - 0.007391*t153*t505 + t7001 + var1[0];
  p_output1[8]=-0.012829*t153*t2472 - 0.007412*t153*t505 + t7205 + var1[0];
  p_output1[9]=-0.011475*t153*t2472 - 0.00663*t153*t505 + t7302 + var1[0];
  p_output1[10]=-0.008878*t153*t2472 - 0.00513*t153*t505 + t7357 + var1[0];
  p_output1[11]=-0.005319*t153*t2472 - 0.003073*t153*t505 + t8162 + var1[0];
  p_output1[12]=-0.001184*t153*t2472 - 0.000684*t153*t505 + t8301 + var1[0];
  p_output1[13]=0.00308*t153*t2472 + 0.001779*t153*t505 + t8340 + var1[0];
  p_output1[14]=0.00701*t153*t2472 + 0.00405*t153*t505 + t8366 + var1[0];
  p_output1[15]=0.01018*t153*t2472 + 0.005882*t153*t505 + t8432 + var1[0];
  p_output1[16]=0.012247*t153*t2472 + 0.007076*t153*t505 + t8443 + var1[0];
  p_output1[17]=0.012987*t153*t2472 + 0.007504*t153*t505 + t8485 + var1[0];
  p_output1[18]=0.01232*t153*t2472 + 0.007118*t153*t505 + t8546 + var1[0];
  p_output1[19]=t4195;
  p_output1[20]=t8602;
  p_output1[21]=0.004158*t8578 - 0.007197*t8599 + t8603 + var1[1];
  p_output1[22]=0.001905*t8578 - 0.003297*t8599 + t8708 + var1[1];
  p_output1[23]=-0.000555*t8578 + 0.000961*t8599 + t8729 + var1[1];
  p_output1[24]=-0.002955*t8578 + 0.005115*t8599 + t8760 + var1[1];
  p_output1[25]=-0.005035*t8578 + 0.008714*t8599 + t8769 + var1[1];
  p_output1[26]=-0.006569*t8578 + 0.011369*t8599 + t8793 + var1[1];
  p_output1[27]=-0.007391*t8578 + 0.012792*t8599 + t8832 + var1[1];
  p_output1[28]=-0.007412*t8578 + 0.012829*t8599 + t8895 + var1[1];
  p_output1[29]=-0.00663*t8578 + 0.011475*t8599 + t8983 + var1[1];
  p_output1[30]=-0.00513*t8578 + 0.008878*t8599 + t9049 + var1[1];
  p_output1[31]=-0.003073*t8578 + 0.005319*t8599 + t9175 + var1[1];
  p_output1[32]=-0.000684*t8578 + 0.001184*t8599 + t9207 + var1[1];
  p_output1[33]=0.001779*t8578 - 0.00308*t8599 + t9401 + var1[1];
  p_output1[34]=0.00405*t8578 - 0.00701*t8599 + t9442 + var1[1];
  p_output1[35]=0.005882*t8578 - 0.01018*t8599 + t9498 + var1[1];
  p_output1[36]=0.007076*t8578 - 0.012247*t8599 + t9535 + var1[1];
  p_output1[37]=0.007504*t8578 - 0.012987*t8599 + t9549 + var1[1];
  p_output1[38]=0.007118*t8578 - 0.01232*t8599 + t9553 + var1[1];
  p_output1[39]=t8602;
  p_output1[40]=t10064;
  p_output1[41]=-0.007197*t10020 + t10070 + 0.004158*t9565 + var1[2];
  p_output1[42]=-0.003297*t10020 + t10207 + 0.001905*t9565 + var1[2];
  p_output1[43]=0.000961*t10020 + t10218 - 0.000555*t9565 + var1[2];
  p_output1[44]=0.005115*t10020 + t10236 - 0.002955*t9565 + var1[2];
  p_output1[45]=0.008714*t10020 + t10240 - 0.005035*t9565 + var1[2];
  p_output1[46]=0.011369*t10020 + t10421 - 0.006569*t9565 + var1[2];
  p_output1[47]=0.012792*t10020 + t10556 - 0.007391*t9565 + var1[2];
  p_output1[48]=0.012829*t10020 + t10577 - 0.007412*t9565 + var1[2];
  p_output1[49]=0.011475*t10020 + t10631 - 0.00663*t9565 + var1[2];
  p_output1[50]=0.008878*t10020 + t10790 - 0.00513*t9565 + var1[2];
  p_output1[51]=0.005319*t10020 + t10794 - 0.003073*t9565 + var1[2];
  p_output1[52]=0.001184*t10020 + t10854 - 0.000684*t9565 + var1[2];
  p_output1[53]=-0.00308*t10020 + t10869 + 0.001779*t9565 + var1[2];
  p_output1[54]=-0.00701*t10020 + t10886 + 0.00405*t9565 + var1[2];
  p_output1[55]=-0.01018*t10020 + t10894 + 0.005882*t9565 + var1[2];
  p_output1[56]=-0.012247*t10020 + t10917 + 0.007076*t9565 + var1[2];
  p_output1[57]=-0.012987*t10020 + t10921 + 0.007504*t9565 + var1[2];
  p_output1[58]=-0.01232*t10020 + t10940 + 0.007118*t9565 + var1[2];
  p_output1[59]=t10064;
  p_output1[60]=t10959;
  p_output1[61]=-0.122803*t153*t2472 + t4827 + 0.229158*t153*t505 + var1[0];
  p_output1[62]=-0.126703*t153*t2472 + 0.226905*t153*t505 + t5290 + var1[0];
  p_output1[63]=-0.130961*t153*t2472 + 0.224445*t153*t505 + t6490 + var1[0];
  p_output1[64]=-0.135115*t153*t2472 + 0.222045*t153*t505 + t6587 + var1[0];
  p_output1[65]=-0.138714*t153*t2472 + 0.219965*t153*t505 + t6865 + var1[0];
  p_output1[66]=-0.141369*t153*t2472 + 0.218431*t153*t505 + t6939 + var1[0];
  p_output1[67]=-0.142792*t153*t2472 + 0.217609*t153*t505 + t7001 + var1[0];
  p_output1[68]=-0.142829*t153*t2472 + 0.217588*t153*t505 + t7205 + var1[0];
  p_output1[69]=-0.141475*t153*t2472 + 0.21837*t153*t505 + t7302 + var1[0];
  p_output1[70]=-0.138878*t153*t2472 + 0.21987*t153*t505 + t7357 + var1[0];
  p_output1[71]=-0.135319*t153*t2472 + 0.221927*t153*t505 + t8162 + var1[0];
  p_output1[72]=-0.131184*t153*t2472 + 0.224316*t153*t505 + t8301 + var1[0];
  p_output1[73]=-0.12692*t153*t2472 + 0.226779*t153*t505 + t8340 + var1[0];
  p_output1[74]=-0.12299*t153*t2472 + 0.22905*t153*t505 + t8366 + var1[0];
  p_output1[75]=-0.11982*t153*t2472 + 0.230882*t153*t505 + t8432 + var1[0];
  p_output1[76]=-0.117753*t153*t2472 + 0.232076*t153*t505 + t8443 + var1[0];
  p_output1[77]=-0.117013*t153*t2472 + 0.232504*t153*t505 + t8485 + var1[0];
  p_output1[78]=-0.11768*t153*t2472 + 0.232118*t153*t505 + t8546 + var1[0];
  p_output1[79]=t10959;
  p_output1[80]=t11245;
  p_output1[81]=0.229158*t8578 + 0.122803*t8599 + t8603 + var1[1];
  p_output1[82]=0.226905*t8578 + 0.126703*t8599 + t8708 + var1[1];
  p_output1[83]=0.224445*t8578 + 0.130961*t8599 + t8729 + var1[1];
  p_output1[84]=0.222045*t8578 + 0.135115*t8599 + t8760 + var1[1];
  p_output1[85]=0.219965*t8578 + 0.138714*t8599 + t8769 + var1[1];
  p_output1[86]=0.218431*t8578 + 0.141369*t8599 + t8793 + var1[1];
  p_output1[87]=0.217609*t8578 + 0.142792*t8599 + t8832 + var1[1];
  p_output1[88]=0.217588*t8578 + 0.142829*t8599 + t8895 + var1[1];
  p_output1[89]=0.21837*t8578 + 0.141475*t8599 + t8983 + var1[1];
  p_output1[90]=0.21987*t8578 + 0.138878*t8599 + t9049 + var1[1];
  p_output1[91]=0.221927*t8578 + 0.135319*t8599 + t9175 + var1[1];
  p_output1[92]=0.224316*t8578 + 0.131184*t8599 + t9207 + var1[1];
  p_output1[93]=0.226779*t8578 + 0.12692*t8599 + t9401 + var1[1];
  p_output1[94]=0.22905*t8578 + 0.12299*t8599 + t9442 + var1[1];
  p_output1[95]=0.230882*t8578 + 0.11982*t8599 + t9498 + var1[1];
  p_output1[96]=0.232076*t8578 + 0.117753*t8599 + t9535 + var1[1];
  p_output1[97]=0.232504*t8578 + 0.117013*t8599 + t9549 + var1[1];
  p_output1[98]=0.232118*t8578 + 0.11768*t8599 + t9553 + var1[1];
  p_output1[99]=t11245;
  p_output1[100]=t11549;
  p_output1[101]=0.122803*t10020 + t10070 + 0.229158*t9565 + var1[2];
  p_output1[102]=0.126703*t10020 + t10207 + 0.226905*t9565 + var1[2];
  p_output1[103]=0.130961*t10020 + t10218 + 0.224445*t9565 + var1[2];
  p_output1[104]=0.135115*t10020 + t10236 + 0.222045*t9565 + var1[2];
  p_output1[105]=0.138714*t10020 + t10240 + 0.219965*t9565 + var1[2];
  p_output1[106]=0.141369*t10020 + t10421 + 0.218431*t9565 + var1[2];
  p_output1[107]=0.142792*t10020 + t10556 + 0.217609*t9565 + var1[2];
  p_output1[108]=0.142829*t10020 + t10577 + 0.217588*t9565 + var1[2];
  p_output1[109]=0.141475*t10020 + t10631 + 0.21837*t9565 + var1[2];
  p_output1[110]=0.138878*t10020 + t10790 + 0.21987*t9565 + var1[2];
  p_output1[111]=0.135319*t10020 + t10794 + 0.221927*t9565 + var1[2];
  p_output1[112]=0.131184*t10020 + t10854 + 0.224316*t9565 + var1[2];
  p_output1[113]=0.12692*t10020 + t10869 + 0.226779*t9565 + var1[2];
  p_output1[114]=0.12299*t10020 + t10886 + 0.22905*t9565 + var1[2];
  p_output1[115]=0.11982*t10020 + t10894 + 0.230882*t9565 + var1[2];
  p_output1[116]=0.117753*t10020 + t10917 + 0.232076*t9565 + var1[2];
  p_output1[117]=0.117013*t10020 + t10921 + 0.232504*t9565 + var1[2];
  p_output1[118]=0.11768*t10020 + t10940 + 0.232118*t9565 + var1[2];
  p_output1[119]=t11549;
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

#include "Link_base_chassis_link_to_motor_front_leftL_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_motor_front_leftL_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
