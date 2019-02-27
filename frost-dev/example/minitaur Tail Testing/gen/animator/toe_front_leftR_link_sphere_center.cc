/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:50 GMT-04:00
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
  double t1473;
  double t4476;
  double t4509;
  double t4566;
  double t3544;
  double t4615;
  double t4958;
  double t5130;
  double t6385;
  double t6403;
  double t6477;
  double t6840;
  double t7661;
  double t7694;
  double t8442;
  double t5763;
  double t5825;
  double t5908;
  double t5991;
  double t7012;
  double t9173;
  double t9218;
  double t9237;
  double t9251;
  double t9256;
  double t9275;
  double t9597;
  double t9376;
  double t9494;
  double t9542;
  double t9554;
  double t9564;
  double t9578;
  double t9582;
  double t9600;
  double t6039;
  double t9385;
  double t6511;
  double t9471;
  double t9480;
  double t9626;
  double t9588;
  double t9654;
  double t9650;
  double t9651;
  double t9655;
  double t9656;
  double t9658;
  double t9659;
  double t9660;
  double t6482;
  double t7444;
  double t7642;
  double t8466;
  double t8481;
  double t9349;
  double t9367;
  double t9389;
  double t9393;
  double t9414;
  double t9663;
  double t9664;
  double t9665;
  double t9666;
  double t9591;
  double t9668;
  double t9669;
  double t9670;
  double t9671;
  double t9617;
  double t9620;
  double t9676;
  double t9677;
  double t9678;
  double t9679;
  double t9635;
  double t9636;
  double t9637;
  double t9638;
  double t9639;
  double t9645;
  double t9698;
  double t9699;
  double t9700;
  double t9702;
  double t9703;
  double t9704;
  double t9707;
  double t9708;
  double t9709;
  double t9710;
  double t9712;
  double t9713;
  double t9714;
  double t9715;
  double t9718;
  double t9719;
  double t9720;
  double t9721;
  t1473 = Cos(var1[4]);
  t4476 = Cos(var1[6]);
  t4509 = -1.*t4476;
  t4566 = 1. + t4509;
  t3544 = Cos(var1[5]);
  t4615 = Sin(var1[5]);
  t4958 = Sin(var1[4]);
  t5130 = Sin(var1[6]);
  t6385 = Cos(var1[8]);
  t6403 = -1.*t6385;
  t6477 = 1. + t6403;
  t6840 = Sin(var1[8]);
  t7661 = -3.e-6*t6477;
  t7694 = 3.e-6*t6840;
  t8442 = t7661 + t7694;
  t5763 = t1473*t3544*t4476;
  t5825 = -3.e-6*t1473*t4566*t4615;
  t5908 = t4958*t5130;
  t5991 = t5763 + t5825 + t5908;
  t7012 = -1.*t6840;
  t9173 = 3.e-6*t1473*t3544*t4566;
  t9218 = -9.e-12*t4566;
  t9237 = 1. + t9218;
  t9251 = -1.*t1473*t9237*t4615;
  t9256 = -3.e-6*t4958*t5130;
  t9275 = t9173 + t9251 + t9256;
  t9597 = 3.e-6*t6477;
  t9376 = -3.e-6*t6840;
  t9494 = -1.000000000009*t4566;
  t9542 = 1. + t9494;
  t9554 = t9542*t4958;
  t9564 = -1.*t1473*t3544*t5130;
  t9578 = -3.e-6*t1473*t4615*t5130;
  t9582 = t9554 + t9564 + t9578;
  t9600 = t9597 + t7694;
  t6039 = 1.125e-12*var1[8];
  t9385 = t7661 + t9376;
  t6511 = -9.e-12*t6477;
  t9471 = -1.000000000009*t6477;
  t9480 = 1. + t9471;
  t9626 = t9597 + t9376;
  t9588 = 9.e-12*t6477;
  t9654 = Cos(var1[3]);
  t9650 = Sin(var1[3]);
  t9651 = t3544*t9650*t4958;
  t9655 = t9654*t4615;
  t9656 = t9651 + t9655;
  t9658 = t9654*t3544;
  t9659 = -1.*t9650*t4958*t4615;
  t9660 = t9658 + t9659;
  t6482 = 0.225000000002025*t6477;
  t7444 = t6511 + t7012;
  t7642 = 0.1*t7444;
  t8466 = -9.75e-7*t8442;
  t8481 = t6039 + t6482 + t7642 + t8466;
  t9349 = 3.75e-7*var1[8];
  t9367 = -1.755e-17*t6477;
  t9389 = 0.225*t9385;
  t9393 = 0.1*t8442;
  t9414 = t9349 + t9367 + t9389 + t9393;
  t9663 = t4476*t9656;
  t9664 = 3.e-6*t4566*t9660;
  t9665 = -1.*t1473*t9650*t5130;
  t9666 = t9663 + t9664 + t9665;
  t9591 = t9588 + t7012;
  t9668 = 3.e-6*t4566*t9656;
  t9669 = t9237*t9660;
  t9670 = 3.e-6*t1473*t9650*t5130;
  t9671 = t9668 + t9669 + t9670;
  t9617 = -1.8e-11*t6477;
  t9620 = 1. + t9617;
  t9676 = -1.*t1473*t9542*t9650;
  t9677 = -1.*t9656*t5130;
  t9678 = 3.e-6*t9660*t5130;
  t9679 = t9676 + t9677 + t9678;
  t9635 = 0.1000000000009*t6477;
  t9636 = -9.75e-7*t9385;
  t9637 = t6511 + t6840;
  t9638 = 0.225*t9637;
  t9639 = t6039 + t9635 + t9636 + t9638;
  t9645 = t9588 + t6840;
  t9698 = -1.*t9654*t3544*t4958;
  t9699 = t9650*t4615;
  t9700 = t9698 + t9699;
  t9702 = t3544*t9650;
  t9703 = t9654*t4958*t4615;
  t9704 = t9702 + t9703;
  t9707 = t4476*t9700;
  t9708 = 3.e-6*t4566*t9704;
  t9709 = t9654*t1473*t5130;
  t9710 = t9707 + t9708 + t9709;
  t9712 = 3.e-6*t4566*t9700;
  t9713 = t9237*t9704;
  t9714 = -3.e-6*t9654*t1473*t5130;
  t9715 = t9712 + t9713 + t9714;
  t9718 = t9654*t1473*t9542;
  t9719 = -1.*t9700*t5130;
  t9720 = 3.e-6*t9704*t5130;
  t9721 = t9718 + t9719 + t9720;
  p_output1[0]=0.225000000002025*t1473*t3544*t4566 + 6.75000000006075e-7*t1473*t4566*t4615 - 0.225000000002025*t4958*t5130 + t5991*t8481 + t9275*t9414 + 0.225*(t5991*t9480 + t9582*t9591 + t9275*t9600) + 0.130001*(t9582*t9600 + t9275*t9620 + t5991*t9626) + t9582*t9639 - 0.14*(t9480*t9582 + t9275*t9626 + t5991*t9645) + var1[0];
  p_output1[1]=0.225000000002025*t1473*t5130*t9650 + 0.225000000002025*t4566*t9656 - 6.75000000006075e-7*t4566*t9660 + t8481*t9666 + t9414*t9671 + t9639*t9679 - 0.14*(t9645*t9666 + t9626*t9671 + t9480*t9679) + 0.225*(t9480*t9666 + t9600*t9671 + t9591*t9679) + 0.130001*(t9626*t9666 + t9620*t9671 + t9600*t9679) + var1[1];
  p_output1[2]=-0.225000000002025*t1473*t5130*t9654 + 0.225000000002025*t4566*t9700 - 6.75000000006075e-7*t4566*t9704 + t8481*t9710 + t9414*t9715 + t9639*t9721 - 0.14*(t9645*t9710 + t9626*t9715 + t9480*t9721) + 0.225*(t9480*t9710 + t9600*t9715 + t9591*t9721) + 0.130001*(t9626*t9710 + t9620*t9715 + t9600*t9721) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "toe_front_leftR_link_sphere_center.hh"

namespace SymFunction
{

void toe_front_leftR_link_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
