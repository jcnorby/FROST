/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:16 GMT-04:00
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
  double t5429;
  double t6492;
  double t6698;
  double t7338;
  double t7378;
  double t5593;
  double t5936;
  double t7140;
  double t7385;
  double t7576;
  double t7616;
  double t7750;
  double t7791;
  double t7781;
  double t7793;
  double t7798;
  double t8230;
  double t8245;
  double t8241;
  double t8246;
  double t8250;
  double t8237;
  double t8251;
  double t8252;
  double t8255;
  double t8258;
  double t8267;
  double t8268;
  double t8273;
  double t8260;
  double t8275;
  double t8277;
  double t8433;
  double t8439;
  double t8440;
  double t8431;
  double t8441;
  double t8444;
  double t8445;
  double t8447;
  double t8452;
  double t8454;
  double t8455;
  double t8450;
  double t8458;
  double t8463;
  double t8598;
  double t8600;
  double t8605;
  double t8608;
  double t7816;
  double t7968;
  double t7986;
  double t7988;
  double t7991;
  double t8018;
  double t8023;
  double t8025;
  double t8035;
  double t8040;
  double t8046;
  double t8047;
  double t8051;
  double t8054;
  double t8091;
  double t8092;
  double t8099;
  double t8101;
  double t8108;
  double t8109;
  double t8113;
  double t8114;
  double t8118;
  double t8145;
  double t8148;
  double t8150;
  double t8155;
  double t8158;
  double t8161;
  double t8180;
  double t8189;
  double t8191;
  double t8200;
  double t8201;
  double t8205;
  double t8207;
  double t8610;
  double t8278;
  double t8284;
  double t8651;
  double t8652;
  double t8653;
  double t8654;
  double t8288;
  double t8302;
  double t8306;
  double t8308;
  double t8315;
  double t8319;
  double t8325;
  double t8331;
  double t8334;
  double t8336;
  double t8342;
  double t8347;
  double t8350;
  double t8374;
  double t8378;
  double t8380;
  double t8384;
  double t8389;
  double t8392;
  double t8393;
  double t8397;
  double t8398;
  double t8402;
  double t8403;
  double t8406;
  double t8407;
  double t8411;
  double t8412;
  double t8415;
  double t8416;
  double t8420;
  double t8421;
  double t8424;
  double t8426;
  double t8656;
  double t8464;
  double t8467;
  double t8685;
  double t8686;
  double t8687;
  double t8688;
  double t8469;
  double t8472;
  double t8474;
  double t8478;
  double t8480;
  double t8486;
  double t8489;
  double t8494;
  double t8497;
  double t8498;
  double t8501;
  double t8502;
  double t8504;
  double t8506;
  double t8509;
  double t8511;
  double t8514;
  double t8516;
  double t8520;
  double t8521;
  double t8523;
  double t8524;
  double t8526;
  double t8531;
  double t8534;
  double t8535;
  double t8539;
  double t8543;
  double t8552;
  double t8554;
  double t8560;
  double t8561;
  double t8565;
  double t8584;
  double t8690;
  t5429 = Cos(var1[14]);
  t6492 = Cos(var1[4]);
  t6698 = Cos(var1[5]);
  t7338 = Sin(var1[14]);
  t7378 = Sin(var1[4]);
  t5593 = -1.*t5429;
  t5936 = 1. + t5593;
  t7140 = 0.225*t5936*t6492*t6698;
  t7385 = 0.225*t7338*t7378;
  t7576 = t5429*t6492*t6698;
  t7616 = -1.*t7338*t7378;
  t7750 = t7576 + t7616;
  t7791 = Sin(var1[5]);
  t7781 = 0.215405*t7750;
  t7793 = 0.14153*t6492*t7791;
  t7798 = var1[0] + t7140 + t7385 + t7781 + t7793;
  t8230 = Sin(var1[3]);
  t8245 = Cos(var1[3]);
  t8241 = t6698*t8230*t7378;
  t8246 = t8245*t7791;
  t8250 = t8241 + t8246;
  t8237 = -0.225*t6492*t7338*t8230;
  t8251 = 0.225*t5936*t8250;
  t8252 = t8245*t6698;
  t8255 = -1.*t8230*t7378*t7791;
  t8258 = t8252 + t8255;
  t8267 = t6492*t7338*t8230;
  t8268 = t5429*t8250;
  t8273 = t8267 + t8268;
  t8260 = -0.14153*t8258;
  t8275 = 0.215405*t8273;
  t8277 = var1[1] + t8237 + t8251 + t8260 + t8275;
  t8433 = -1.*t8245*t6698*t7378;
  t8439 = t8230*t7791;
  t8440 = t8433 + t8439;
  t8431 = 0.225*t8245*t6492*t7338;
  t8441 = 0.225*t5936*t8440;
  t8444 = t6698*t8230;
  t8445 = t8245*t7378*t7791;
  t8447 = t8444 + t8445;
  t8452 = -1.*t8245*t6492*t7338;
  t8454 = t5429*t8440;
  t8455 = t8452 + t8454;
  t8450 = -0.14153*t8447;
  t8458 = 0.215405*t8455;
  t8463 = var1[2] + t8431 + t8441 + t8450 + t8458;
  t8598 = t6492*t6698*t7338;
  t8600 = t5429*t7378;
  t8605 = t8598 + t8600;
  t8608 = 0.1*t8605;
  t7816 = 0.219669*t7750;
  t7968 = 0.144021*t6492*t7791;
  t7986 = 0.22451*t7750;
  t7988 = 0.144992*t6492*t7791;
  t7991 = 0.229404*t7750;
  t8018 = 0.144339*t6492*t7791;
  t8023 = 0.233822*t7750;
  t8025 = 0.142132*t6492*t7791;
  t8035 = 0.237283*t7750;
  t8040 = 0.13861*t6492*t7791;
  t8046 = 0.239413*t7750;
  t8047 = 0.134155*t6492*t7791;
  t8051 = 0.239981*t7750;
  t8054 = 0.12925*t6492*t7791;
  t8091 = 0.238926*t7750;
  t8092 = 0.124427*t6492*t7791;
  t8099 = 0.236362*t7750;
  t8101 = 0.120207*t6492*t7791;
  t8108 = 0.232566*t7750;
  t8109 = 0.117048*t6492*t7791;
  t8113 = 0.227951*t7750;
  t8114 = 0.115293*t6492*t7791;
  t8118 = 0.223016*t7750;
  t8145 = 0.115132*t6492*t7791;
  t8148 = 0.218296*t7750;
  t8150 = 0.116582*t6492*t7791;
  t8155 = 0.214302*t7750;
  t8158 = 0.119486*t6492*t7791;
  t8161 = 0.211468*t7750;
  t8180 = 0.123529*t6492*t7791;
  t8189 = 0.2101*t7750;
  t8191 = 0.128274*t6492*t7791;
  t8200 = 0.210346*t7750;
  t8201 = 0.133205*t6492*t7791;
  t8205 = 0.212181*t7750;
  t8207 = 0.13779*t6492*t7791;
  t8610 = var1[0] + t7140 + t7385 + t8608 + t7781 + t7793;
  t8278 = -0.144021*t8258;
  t8284 = 0.219669*t8273;
  t8651 = -1.*t5429*t6492*t8230;
  t8652 = t7338*t8250;
  t8653 = t8651 + t8652;
  t8654 = 0.1*t8653;
  t8288 = -0.144992*t8258;
  t8302 = 0.22451*t8273;
  t8306 = -0.144339*t8258;
  t8308 = 0.229404*t8273;
  t8315 = -0.142132*t8258;
  t8319 = 0.233822*t8273;
  t8325 = -0.13861*t8258;
  t8331 = 0.237283*t8273;
  t8334 = -0.134155*t8258;
  t8336 = 0.239413*t8273;
  t8342 = -0.12925*t8258;
  t8347 = 0.239981*t8273;
  t8350 = -0.124427*t8258;
  t8374 = 0.238926*t8273;
  t8378 = -0.120207*t8258;
  t8380 = 0.236362*t8273;
  t8384 = -0.117048*t8258;
  t8389 = 0.232566*t8273;
  t8392 = -0.115293*t8258;
  t8393 = 0.227951*t8273;
  t8397 = -0.115132*t8258;
  t8398 = 0.223016*t8273;
  t8402 = -0.116582*t8258;
  t8403 = 0.218296*t8273;
  t8406 = -0.119486*t8258;
  t8407 = 0.214302*t8273;
  t8411 = -0.123529*t8258;
  t8412 = 0.211468*t8273;
  t8415 = -0.128274*t8258;
  t8416 = 0.2101*t8273;
  t8420 = -0.133205*t8258;
  t8421 = 0.210346*t8273;
  t8424 = -0.13779*t8258;
  t8426 = 0.212181*t8273;
  t8656 = var1[1] + t8237 + t8251 + t8260 + t8275 + t8654;
  t8464 = -0.144021*t8447;
  t8467 = 0.219669*t8455;
  t8685 = t5429*t8245*t6492;
  t8686 = t7338*t8440;
  t8687 = t8685 + t8686;
  t8688 = 0.1*t8687;
  t8469 = -0.144992*t8447;
  t8472 = 0.22451*t8455;
  t8474 = -0.144339*t8447;
  t8478 = 0.229404*t8455;
  t8480 = -0.142132*t8447;
  t8486 = 0.233822*t8455;
  t8489 = -0.13861*t8447;
  t8494 = 0.237283*t8455;
  t8497 = -0.134155*t8447;
  t8498 = 0.239413*t8455;
  t8501 = -0.12925*t8447;
  t8502 = 0.239981*t8455;
  t8504 = -0.124427*t8447;
  t8506 = 0.238926*t8455;
  t8509 = -0.120207*t8447;
  t8511 = 0.236362*t8455;
  t8514 = -0.117048*t8447;
  t8516 = 0.232566*t8455;
  t8520 = -0.115293*t8447;
  t8521 = 0.227951*t8455;
  t8523 = -0.115132*t8447;
  t8524 = 0.223016*t8455;
  t8526 = -0.116582*t8447;
  t8531 = 0.218296*t8455;
  t8534 = -0.119486*t8447;
  t8535 = 0.214302*t8455;
  t8539 = -0.123529*t8447;
  t8543 = 0.211468*t8455;
  t8552 = -0.128274*t8447;
  t8554 = 0.2101*t8455;
  t8560 = -0.133205*t8447;
  t8561 = 0.210346*t8455;
  t8565 = -0.13779*t8447;
  t8584 = 0.212181*t8455;
  t8690 = var1[2] + t8431 + t8441 + t8450 + t8458 + t8688;
  p_output1[0]=t7798;
  p_output1[1]=t7140 + t7385 + t7816 + t7968 + var1[0];
  p_output1[2]=t7140 + t7385 + t7986 + t7988 + var1[0];
  p_output1[3]=t7140 + t7385 + t7991 + t8018 + var1[0];
  p_output1[4]=t7140 + t7385 + t8023 + t8025 + var1[0];
  p_output1[5]=t7140 + t7385 + t8035 + t8040 + var1[0];
  p_output1[6]=t7140 + t7385 + t8046 + t8047 + var1[0];
  p_output1[7]=t7140 + t7385 + t8051 + t8054 + var1[0];
  p_output1[8]=t7140 + t7385 + t8091 + t8092 + var1[0];
  p_output1[9]=t7140 + t7385 + t8099 + t8101 + var1[0];
  p_output1[10]=t7140 + t7385 + t8108 + t8109 + var1[0];
  p_output1[11]=t7140 + t7385 + t8113 + t8114 + var1[0];
  p_output1[12]=t7140 + t7385 + t8118 + t8145 + var1[0];
  p_output1[13]=t7140 + t7385 + t8148 + t8150 + var1[0];
  p_output1[14]=t7140 + t7385 + t8155 + t8158 + var1[0];
  p_output1[15]=t7140 + t7385 + t8161 + t8180 + var1[0];
  p_output1[16]=t7140 + t7385 + t8189 + t8191 + var1[0];
  p_output1[17]=t7140 + t7385 + t8200 + t8201 + var1[0];
  p_output1[18]=t7140 + t7385 + t8205 + t8207 + var1[0];
  p_output1[19]=t7798;
  p_output1[20]=t8277;
  p_output1[21]=t8237 + t8251 + t8278 + t8284 + var1[1];
  p_output1[22]=t8237 + t8251 + t8288 + t8302 + var1[1];
  p_output1[23]=t8237 + t8251 + t8306 + t8308 + var1[1];
  p_output1[24]=t8237 + t8251 + t8315 + t8319 + var1[1];
  p_output1[25]=t8237 + t8251 + t8325 + t8331 + var1[1];
  p_output1[26]=t8237 + t8251 + t8334 + t8336 + var1[1];
  p_output1[27]=t8237 + t8251 + t8342 + t8347 + var1[1];
  p_output1[28]=t8237 + t8251 + t8350 + t8374 + var1[1];
  p_output1[29]=t8237 + t8251 + t8378 + t8380 + var1[1];
  p_output1[30]=t8237 + t8251 + t8384 + t8389 + var1[1];
  p_output1[31]=t8237 + t8251 + t8392 + t8393 + var1[1];
  p_output1[32]=t8237 + t8251 + t8397 + t8398 + var1[1];
  p_output1[33]=t8237 + t8251 + t8402 + t8403 + var1[1];
  p_output1[34]=t8237 + t8251 + t8406 + t8407 + var1[1];
  p_output1[35]=t8237 + t8251 + t8411 + t8412 + var1[1];
  p_output1[36]=t8237 + t8251 + t8415 + t8416 + var1[1];
  p_output1[37]=t8237 + t8251 + t8420 + t8421 + var1[1];
  p_output1[38]=t8237 + t8251 + t8424 + t8426 + var1[1];
  p_output1[39]=t8277;
  p_output1[40]=t8463;
  p_output1[41]=t8431 + t8441 + t8464 + t8467 + var1[2];
  p_output1[42]=t8431 + t8441 + t8469 + t8472 + var1[2];
  p_output1[43]=t8431 + t8441 + t8474 + t8478 + var1[2];
  p_output1[44]=t8431 + t8441 + t8480 + t8486 + var1[2];
  p_output1[45]=t8431 + t8441 + t8489 + t8494 + var1[2];
  p_output1[46]=t8431 + t8441 + t8497 + t8498 + var1[2];
  p_output1[47]=t8431 + t8441 + t8501 + t8502 + var1[2];
  p_output1[48]=t8431 + t8441 + t8504 + t8506 + var1[2];
  p_output1[49]=t8431 + t8441 + t8509 + t8511 + var1[2];
  p_output1[50]=t8431 + t8441 + t8514 + t8516 + var1[2];
  p_output1[51]=t8431 + t8441 + t8520 + t8521 + var1[2];
  p_output1[52]=t8431 + t8441 + t8523 + t8524 + var1[2];
  p_output1[53]=t8431 + t8441 + t8526 + t8531 + var1[2];
  p_output1[54]=t8431 + t8441 + t8534 + t8535 + var1[2];
  p_output1[55]=t8431 + t8441 + t8539 + t8543 + var1[2];
  p_output1[56]=t8431 + t8441 + t8552 + t8554 + var1[2];
  p_output1[57]=t8431 + t8441 + t8560 + t8561 + var1[2];
  p_output1[58]=t8431 + t8441 + t8565 + t8584 + var1[2];
  p_output1[59]=t8463;
  p_output1[60]=t8610;
  p_output1[61]=t7140 + t7385 + t7816 + t7968 + t8608 + var1[0];
  p_output1[62]=t7140 + t7385 + t7986 + t7988 + t8608 + var1[0];
  p_output1[63]=t7140 + t7385 + t7991 + t8018 + t8608 + var1[0];
  p_output1[64]=t7140 + t7385 + t8023 + t8025 + t8608 + var1[0];
  p_output1[65]=t7140 + t7385 + t8035 + t8040 + t8608 + var1[0];
  p_output1[66]=t7140 + t7385 + t8046 + t8047 + t8608 + var1[0];
  p_output1[67]=t7140 + t7385 + t8051 + t8054 + t8608 + var1[0];
  p_output1[68]=t7140 + t7385 + t8091 + t8092 + t8608 + var1[0];
  p_output1[69]=t7140 + t7385 + t8099 + t8101 + t8608 + var1[0];
  p_output1[70]=t7140 + t7385 + t8108 + t8109 + t8608 + var1[0];
  p_output1[71]=t7140 + t7385 + t8113 + t8114 + t8608 + var1[0];
  p_output1[72]=t7140 + t7385 + t8118 + t8145 + t8608 + var1[0];
  p_output1[73]=t7140 + t7385 + t8148 + t8150 + t8608 + var1[0];
  p_output1[74]=t7140 + t7385 + t8155 + t8158 + t8608 + var1[0];
  p_output1[75]=t7140 + t7385 + t8161 + t8180 + t8608 + var1[0];
  p_output1[76]=t7140 + t7385 + t8189 + t8191 + t8608 + var1[0];
  p_output1[77]=t7140 + t7385 + t8200 + t8201 + t8608 + var1[0];
  p_output1[78]=t7140 + t7385 + t8205 + t8207 + t8608 + var1[0];
  p_output1[79]=t8610;
  p_output1[80]=t8656;
  p_output1[81]=t8237 + t8251 + t8278 + t8284 + t8654 + var1[1];
  p_output1[82]=t8237 + t8251 + t8288 + t8302 + t8654 + var1[1];
  p_output1[83]=t8237 + t8251 + t8306 + t8308 + t8654 + var1[1];
  p_output1[84]=t8237 + t8251 + t8315 + t8319 + t8654 + var1[1];
  p_output1[85]=t8237 + t8251 + t8325 + t8331 + t8654 + var1[1];
  p_output1[86]=t8237 + t8251 + t8334 + t8336 + t8654 + var1[1];
  p_output1[87]=t8237 + t8251 + t8342 + t8347 + t8654 + var1[1];
  p_output1[88]=t8237 + t8251 + t8350 + t8374 + t8654 + var1[1];
  p_output1[89]=t8237 + t8251 + t8378 + t8380 + t8654 + var1[1];
  p_output1[90]=t8237 + t8251 + t8384 + t8389 + t8654 + var1[1];
  p_output1[91]=t8237 + t8251 + t8392 + t8393 + t8654 + var1[1];
  p_output1[92]=t8237 + t8251 + t8397 + t8398 + t8654 + var1[1];
  p_output1[93]=t8237 + t8251 + t8402 + t8403 + t8654 + var1[1];
  p_output1[94]=t8237 + t8251 + t8406 + t8407 + t8654 + var1[1];
  p_output1[95]=t8237 + t8251 + t8411 + t8412 + t8654 + var1[1];
  p_output1[96]=t8237 + t8251 + t8415 + t8416 + t8654 + var1[1];
  p_output1[97]=t8237 + t8251 + t8420 + t8421 + t8654 + var1[1];
  p_output1[98]=t8237 + t8251 + t8424 + t8426 + t8654 + var1[1];
  p_output1[99]=t8656;
  p_output1[100]=t8690;
  p_output1[101]=t8431 + t8441 + t8464 + t8467 + t8688 + var1[2];
  p_output1[102]=t8431 + t8441 + t8469 + t8472 + t8688 + var1[2];
  p_output1[103]=t8431 + t8441 + t8474 + t8478 + t8688 + var1[2];
  p_output1[104]=t8431 + t8441 + t8480 + t8486 + t8688 + var1[2];
  p_output1[105]=t8431 + t8441 + t8489 + t8494 + t8688 + var1[2];
  p_output1[106]=t8431 + t8441 + t8497 + t8498 + t8688 + var1[2];
  p_output1[107]=t8431 + t8441 + t8501 + t8502 + t8688 + var1[2];
  p_output1[108]=t8431 + t8441 + t8504 + t8506 + t8688 + var1[2];
  p_output1[109]=t8431 + t8441 + t8509 + t8511 + t8688 + var1[2];
  p_output1[110]=t8431 + t8441 + t8514 + t8516 + t8688 + var1[2];
  p_output1[111]=t8431 + t8441 + t8520 + t8521 + t8688 + var1[2];
  p_output1[112]=t8431 + t8441 + t8523 + t8524 + t8688 + var1[2];
  p_output1[113]=t8431 + t8441 + t8526 + t8531 + t8688 + var1[2];
  p_output1[114]=t8431 + t8441 + t8534 + t8535 + t8688 + var1[2];
  p_output1[115]=t8431 + t8441 + t8539 + t8543 + t8688 + var1[2];
  p_output1[116]=t8431 + t8441 + t8552 + t8554 + t8688 + var1[2];
  p_output1[117]=t8431 + t8441 + t8560 + t8561 + t8688 + var1[2];
  p_output1[118]=t8431 + t8441 + t8565 + t8584 + t8688 + var1[2];
  p_output1[119]=t8690;
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

#include "Link_upper_leg_front_rightL_link_to_knee_front_rightL_link_bar.hh"

namespace SymFunction
{

void Link_upper_leg_front_rightL_link_to_knee_front_rightL_link_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
