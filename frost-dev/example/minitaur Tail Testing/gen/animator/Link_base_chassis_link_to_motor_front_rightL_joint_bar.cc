/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:10 GMT-04:00
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
  double t372;
  double t377;
  double t787;
  double t923;
  double t775;
  double t900;
  double t955;
  double t967;
  double t8056;
  double t8059;
  double t8058;
  double t8062;
  double t8063;
  double t8070;
  double t8073;
  double t8075;
  double t8057;
  double t8065;
  double t8085;
  double t8087;
  double t8210;
  double t8211;
  double t8213;
  double t8215;
  double t8219;
  double t8220;
  double t8209;
  double t8214;
  double t8221;
  double t8223;
  double t1025;
  double t2717;
  double t2989;
  double t4867;
  double t5595;
  double t7016;
  double t7841;
  double t7920;
  double t7966;
  double t7974;
  double t7989;
  double t8017;
  double t8021;
  double t8027;
  double t8039;
  double t8044;
  double t8048;
  double t8053;
  double t8368;
  double t8371;
  double t8372;
  double t8089;
  double t8093;
  double t8100;
  double t8104;
  double t8111;
  double t8115;
  double t8119;
  double t8126;
  double t8131;
  double t8137;
  double t8143;
  double t8147;
  double t8153;
  double t8157;
  double t8163;
  double t8185;
  double t8199;
  double t8203;
  double t8457;
  double t8459;
  double t8460;
  double t8224;
  double t8233;
  double t8244;
  double t8249;
  double t8254;
  double t8261;
  double t8271;
  double t8276;
  double t8283;
  double t8298;
  double t8305;
  double t8312;
  double t8320;
  double t8329;
  double t8337;
  double t8346;
  double t8353;
  double t8359;
  double t8575;
  double t8577;
  double t8583;
  t372 = Cos(var1[4]);
  t377 = Cos(var1[5]);
  t787 = Sin(var1[4]);
  t923 = Sin(var1[5]);
  t775 = -0.005212*t372*t377;
  t900 = -0.010792*t787;
  t955 = 0.00902*t372*t923;
  t967 = var1[0] + t775 + t900 + t955;
  t8056 = Sin(var1[3]);
  t8059 = Cos(var1[3]);
  t8058 = t377*t8056*t787;
  t8062 = t8059*t923;
  t8063 = t8058 + t8062;
  t8070 = t8059*t377;
  t8073 = -1.*t8056*t787*t923;
  t8075 = t8070 + t8073;
  t8057 = 0.010792*t372*t8056;
  t8065 = -0.005212*t8063;
  t8085 = -0.00902*t8075;
  t8087 = var1[1] + t8057 + t8065 + t8085;
  t8210 = -1.*t8059*t377*t787;
  t8211 = t8056*t923;
  t8213 = t8210 + t8211;
  t8215 = t377*t8056;
  t8219 = t8059*t787*t923;
  t8220 = t8215 + t8219;
  t8209 = -0.010792*t8059*t372;
  t8214 = -0.005212*t8213;
  t8221 = -0.00902*t8220;
  t8223 = var1[2] + t8209 + t8214 + t8221;
  t1025 = -0.01359*t787;
  t2717 = -0.014915*t787;
  t2989 = -0.014624*t787;
  t4867 = -0.012748*t787;
  t5595 = -0.009491*t787;
  t7016 = -0.005205*t787;
  t7841 = -0.000355*t787;
  t7920 = 0.004534*t787;
  t7966 = 0.008931*t787;
  t7974 = 0.01236*t787;
  t7989 = 0.01445*t787;
  t8017 = 0.014974*t787;
  t8021 = 0.013875*t787;
  t8027 = 0.011273*t787;
  t8039 = 0.007449*t787;
  t8044 = 0.002818*t787;
  t8048 = -0.002118*t787;
  t8053 = -0.006825*t787;
  t8368 = 0.219788*t372*t377;
  t8371 = 0.13902*t372*t923;
  t8372 = var1[0] + t8368 + t900 + t8371;
  t8089 = 0.01359*t372*t8056;
  t8093 = 0.014915*t372*t8056;
  t8100 = 0.014624*t372*t8056;
  t8104 = 0.012748*t372*t8056;
  t8111 = 0.009491*t372*t8056;
  t8115 = 0.005205*t372*t8056;
  t8119 = 0.000355*t372*t8056;
  t8126 = -0.004534*t372*t8056;
  t8131 = -0.008931*t372*t8056;
  t8137 = -0.01236*t372*t8056;
  t8143 = -0.01445*t372*t8056;
  t8147 = -0.014974*t372*t8056;
  t8153 = -0.013875*t372*t8056;
  t8157 = -0.011273*t372*t8056;
  t8163 = -0.007449*t372*t8056;
  t8185 = -0.002818*t372*t8056;
  t8199 = 0.002118*t372*t8056;
  t8203 = 0.006825*t372*t8056;
  t8457 = 0.219788*t8063;
  t8459 = -0.13902*t8075;
  t8460 = var1[1] + t8057 + t8457 + t8459;
  t8224 = -0.01359*t8059*t372;
  t8233 = -0.014915*t8059*t372;
  t8244 = -0.014624*t8059*t372;
  t8249 = -0.012748*t8059*t372;
  t8254 = -0.009491*t8059*t372;
  t8261 = -0.005205*t8059*t372;
  t8271 = -0.000355*t8059*t372;
  t8276 = 0.004534*t8059*t372;
  t8283 = 0.008931*t8059*t372;
  t8298 = 0.01236*t8059*t372;
  t8305 = 0.01445*t8059*t372;
  t8312 = 0.014974*t8059*t372;
  t8320 = 0.013875*t8059*t372;
  t8329 = 0.011273*t8059*t372;
  t8337 = 0.007449*t8059*t372;
  t8346 = 0.002818*t8059*t372;
  t8353 = -0.002118*t8059*t372;
  t8359 = -0.006825*t8059*t372;
  t8575 = 0.219788*t8213;
  t8577 = -0.13902*t8220;
  t8583 = var1[2] + t8209 + t8575 + t8577;
  p_output1[0]=t967;
  p_output1[1]=t1025 - 0.003176*t372*t377 + 0.005497*t372*t923 + var1[0];
  p_output1[2]=t2717 - 0.000796*t372*t377 + 0.001378*t372*t923 + var1[0];
  p_output1[3]=t2989 + 0.00167*t372*t377 - 0.00289*t372*t923 + var1[0];
  p_output1[4]=0.003955*t372*t377 + t4867 - 0.006845*t372*t923 + var1[0];
  p_output1[5]=0.005811*t372*t377 + t5595 - 0.010058*t372*t923 + var1[0];
  p_output1[6]=0.007038*t372*t377 + t7016 - 0.012181*t372*t923 + var1[0];
  p_output1[7]=0.007502*t372*t377 + t7841 - 0.012984*t372*t923 + var1[0];
  p_output1[8]=0.007153*t372*t377 + t7920 - 0.012381*t372*t923 + var1[0];
  p_output1[9]=0.006029*t372*t377 + t7966 - 0.010435*t372*t923 + var1[0];
  p_output1[10]=0.004252*t372*t377 + t7974 - 0.007359*t372*t923 + var1[0];
  p_output1[11]=0.002014*t372*t377 + t7989 - 0.003485*t372*t923 + var1[0];
  p_output1[12]=-0.000443*t372*t377 + t8017 + 0.000766*t372*t923 + var1[0];
  p_output1[13]=-0.002851*t372*t377 + t8021 + 0.004934*t372*t923 + var1[0];
  p_output1[14]=-0.00495*t372*t377 + t8027 + 0.008568*t372*t923 + var1[0];
  p_output1[15]=-0.006513*t372*t377 + t8039 + 0.011273*t372*t923 + var1[0];
  p_output1[16]=-0.007371*t372*t377 + t8044 + 0.012757*t372*t923 + var1[0];
  p_output1[17]=-0.007429*t372*t377 + t8048 + 0.012858*t372*t923 + var1[0];
  p_output1[18]=-0.006682*t372*t377 + t8053 + 0.011566*t372*t923 + var1[0];
  p_output1[19]=t967;
  p_output1[20]=t8087;
  p_output1[21]=-0.003176*t8063 - 0.005497*t8075 + t8089 + var1[1];
  p_output1[22]=-0.000796*t8063 - 0.001378*t8075 + t8093 + var1[1];
  p_output1[23]=0.00167*t8063 + 0.00289*t8075 + t8100 + var1[1];
  p_output1[24]=0.003955*t8063 + 0.006845*t8075 + t8104 + var1[1];
  p_output1[25]=0.005811*t8063 + 0.010058*t8075 + t8111 + var1[1];
  p_output1[26]=0.007038*t8063 + 0.012181*t8075 + t8115 + var1[1];
  p_output1[27]=0.007502*t8063 + 0.012984*t8075 + t8119 + var1[1];
  p_output1[28]=0.007153*t8063 + 0.012381*t8075 + t8126 + var1[1];
  p_output1[29]=0.006029*t8063 + 0.010435*t8075 + t8131 + var1[1];
  p_output1[30]=0.004252*t8063 + 0.007359*t8075 + t8137 + var1[1];
  p_output1[31]=0.002014*t8063 + 0.003485*t8075 + t8143 + var1[1];
  p_output1[32]=-0.000443*t8063 - 0.000766*t8075 + t8147 + var1[1];
  p_output1[33]=-0.002851*t8063 - 0.004934*t8075 + t8153 + var1[1];
  p_output1[34]=-0.00495*t8063 - 0.008568*t8075 + t8157 + var1[1];
  p_output1[35]=-0.006513*t8063 - 0.011273*t8075 + t8163 + var1[1];
  p_output1[36]=-0.007371*t8063 - 0.012757*t8075 + t8185 + var1[1];
  p_output1[37]=-0.007429*t8063 - 0.012858*t8075 + t8199 + var1[1];
  p_output1[38]=-0.006682*t8063 - 0.011566*t8075 + t8203 + var1[1];
  p_output1[39]=t8087;
  p_output1[40]=t8223;
  p_output1[41]=-0.003176*t8213 - 0.005497*t8220 + t8224 + var1[2];
  p_output1[42]=-0.000796*t8213 - 0.001378*t8220 + t8233 + var1[2];
  p_output1[43]=0.00167*t8213 + 0.00289*t8220 + t8244 + var1[2];
  p_output1[44]=0.003955*t8213 + 0.006845*t8220 + t8249 + var1[2];
  p_output1[45]=0.005811*t8213 + 0.010058*t8220 + t8254 + var1[2];
  p_output1[46]=0.007038*t8213 + 0.012181*t8220 + t8261 + var1[2];
  p_output1[47]=0.007502*t8213 + 0.012984*t8220 + t8271 + var1[2];
  p_output1[48]=0.007153*t8213 + 0.012381*t8220 + t8276 + var1[2];
  p_output1[49]=0.006029*t8213 + 0.010435*t8220 + t8283 + var1[2];
  p_output1[50]=0.004252*t8213 + 0.007359*t8220 + t8298 + var1[2];
  p_output1[51]=0.002014*t8213 + 0.003485*t8220 + t8305 + var1[2];
  p_output1[52]=-0.000443*t8213 - 0.000766*t8220 + t8312 + var1[2];
  p_output1[53]=-0.002851*t8213 - 0.004934*t8220 + t8320 + var1[2];
  p_output1[54]=-0.00495*t8213 - 0.008568*t8220 + t8329 + var1[2];
  p_output1[55]=-0.006513*t8213 - 0.011273*t8220 + t8337 + var1[2];
  p_output1[56]=-0.007371*t8213 - 0.012757*t8220 + t8346 + var1[2];
  p_output1[57]=-0.007429*t8213 - 0.012858*t8220 + t8353 + var1[2];
  p_output1[58]=-0.006682*t8213 - 0.011566*t8220 + t8359 + var1[2];
  p_output1[59]=t8223;
  p_output1[60]=t8372;
  p_output1[61]=t1025 + 0.221824*t372*t377 + 0.135497*t372*t923 + var1[0];
  p_output1[62]=t2717 + 0.224204*t372*t377 + 0.131378*t372*t923 + var1[0];
  p_output1[63]=t2989 + 0.22667*t372*t377 + 0.12711*t372*t923 + var1[0];
  p_output1[64]=0.228955*t372*t377 + t4867 + 0.123155*t372*t923 + var1[0];
  p_output1[65]=0.230811*t372*t377 + t5595 + 0.119942*t372*t923 + var1[0];
  p_output1[66]=0.232038*t372*t377 + t7016 + 0.117819*t372*t923 + var1[0];
  p_output1[67]=0.232502*t372*t377 + t7841 + 0.117016*t372*t923 + var1[0];
  p_output1[68]=0.232153*t372*t377 + t7920 + 0.117619*t372*t923 + var1[0];
  p_output1[69]=0.231029*t372*t377 + t7966 + 0.119565*t372*t923 + var1[0];
  p_output1[70]=0.229252*t372*t377 + t7974 + 0.122641*t372*t923 + var1[0];
  p_output1[71]=0.227014*t372*t377 + t7989 + 0.126515*t372*t923 + var1[0];
  p_output1[72]=0.224557*t372*t377 + t8017 + 0.130766*t372*t923 + var1[0];
  p_output1[73]=0.222149*t372*t377 + t8021 + 0.134934*t372*t923 + var1[0];
  p_output1[74]=0.22005*t372*t377 + t8027 + 0.138568*t372*t923 + var1[0];
  p_output1[75]=0.218487*t372*t377 + t8039 + 0.141273*t372*t923 + var1[0];
  p_output1[76]=0.217629*t372*t377 + t8044 + 0.142757*t372*t923 + var1[0];
  p_output1[77]=0.217571*t372*t377 + t8048 + 0.142858*t372*t923 + var1[0];
  p_output1[78]=0.218318*t372*t377 + t8053 + 0.141566*t372*t923 + var1[0];
  p_output1[79]=t8372;
  p_output1[80]=t8460;
  p_output1[81]=0.221824*t8063 - 0.135497*t8075 + t8089 + var1[1];
  p_output1[82]=0.224204*t8063 - 0.131378*t8075 + t8093 + var1[1];
  p_output1[83]=0.22667*t8063 - 0.12711*t8075 + t8100 + var1[1];
  p_output1[84]=0.228955*t8063 - 0.123155*t8075 + t8104 + var1[1];
  p_output1[85]=0.230811*t8063 - 0.119942*t8075 + t8111 + var1[1];
  p_output1[86]=0.232038*t8063 - 0.117819*t8075 + t8115 + var1[1];
  p_output1[87]=0.232502*t8063 - 0.117016*t8075 + t8119 + var1[1];
  p_output1[88]=0.232153*t8063 - 0.117619*t8075 + t8126 + var1[1];
  p_output1[89]=0.231029*t8063 - 0.119565*t8075 + t8131 + var1[1];
  p_output1[90]=0.229252*t8063 - 0.122641*t8075 + t8137 + var1[1];
  p_output1[91]=0.227014*t8063 - 0.126515*t8075 + t8143 + var1[1];
  p_output1[92]=0.224557*t8063 - 0.130766*t8075 + t8147 + var1[1];
  p_output1[93]=0.222149*t8063 - 0.134934*t8075 + t8153 + var1[1];
  p_output1[94]=0.22005*t8063 - 0.138568*t8075 + t8157 + var1[1];
  p_output1[95]=0.218487*t8063 - 0.141273*t8075 + t8163 + var1[1];
  p_output1[96]=0.217629*t8063 - 0.142757*t8075 + t8185 + var1[1];
  p_output1[97]=0.217571*t8063 - 0.142858*t8075 + t8199 + var1[1];
  p_output1[98]=0.218318*t8063 - 0.141566*t8075 + t8203 + var1[1];
  p_output1[99]=t8460;
  p_output1[100]=t8583;
  p_output1[101]=0.221824*t8213 - 0.135497*t8220 + t8224 + var1[2];
  p_output1[102]=0.224204*t8213 - 0.131378*t8220 + t8233 + var1[2];
  p_output1[103]=0.22667*t8213 - 0.12711*t8220 + t8244 + var1[2];
  p_output1[104]=0.228955*t8213 - 0.123155*t8220 + t8249 + var1[2];
  p_output1[105]=0.230811*t8213 - 0.119942*t8220 + t8254 + var1[2];
  p_output1[106]=0.232038*t8213 - 0.117819*t8220 + t8261 + var1[2];
  p_output1[107]=0.232502*t8213 - 0.117016*t8220 + t8271 + var1[2];
  p_output1[108]=0.232153*t8213 - 0.117619*t8220 + t8276 + var1[2];
  p_output1[109]=0.231029*t8213 - 0.119565*t8220 + t8283 + var1[2];
  p_output1[110]=0.229252*t8213 - 0.122641*t8220 + t8298 + var1[2];
  p_output1[111]=0.227014*t8213 - 0.126515*t8220 + t8305 + var1[2];
  p_output1[112]=0.224557*t8213 - 0.130766*t8220 + t8312 + var1[2];
  p_output1[113]=0.222149*t8213 - 0.134934*t8220 + t8320 + var1[2];
  p_output1[114]=0.22005*t8213 - 0.138568*t8220 + t8329 + var1[2];
  p_output1[115]=0.218487*t8213 - 0.141273*t8220 + t8337 + var1[2];
  p_output1[116]=0.217629*t8213 - 0.142757*t8220 + t8346 + var1[2];
  p_output1[117]=0.217571*t8213 - 0.142858*t8220 + t8353 + var1[2];
  p_output1[118]=0.218318*t8213 - 0.141566*t8220 + t8359 + var1[2];
  p_output1[119]=t8583;
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

#include "Link_base_chassis_link_to_motor_front_rightL_joint_bar.hh"

namespace SymFunction
{

void Link_base_chassis_link_to_motor_front_rightL_joint_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
