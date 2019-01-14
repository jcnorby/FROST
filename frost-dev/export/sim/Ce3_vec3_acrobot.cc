/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:38 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t4718;
  double t26146;
  double t28360;
  double t28048;
  double t28598;
  double t28760;
  double t28837;
  double t29125;
  double t29221;
  double t29236;
  double t31489;
  double t31526;
  double t31764;
  double t31787;
  double t31923;
  double t32054;
  double t32074;
  double t32151;
  double t32156;
  double t32157;
  double t32162;
  double t31592;
  double t31614;
  double t31616;
  double t32225;
  double t32255;
  double t32256;
  double t32262;
  double t32263;
  double t32288;
  double t31498;
  double t31563;
  double t31585;
  double t32113;
  double t32134;
  double t32163;
  double t32206;
  double t32384;
  double t32387;
  double t32392;
  double t32403;
  double t32427;
  double t32429;
  double t32431;
  double t32432;
  double t32433;
  double t32436;
  double t32437;
  double t32383;
  double t32430;
  double t32438;
  double t32439;
  double t32443;
  double t32449;
  double t32451;
  double t32467;
  double t32522;
  double t32528;
  double t32530;
  double t32573;
  double t32579;
  double t32587;
  double t32597;
  double t32663;
  double t32664;
  double t32670;
  double t32562;
  double t32641;
  double t32654;
  double t32656;
  double t32657;
  double t32647;
  double t32650;
  double t32653;
  double t32671;
  double t32674;
  double t32441;
  double t32511;
  double t32521;
  double t33488;
  double t33518;
  double t33534;
  double t29237;
  double t29392;
  double t30048;
  double t26673;
  double t28367;
  double t28369;
  double t30218;
  double t30519;
  double t30601;
  double t31449;
  double t32257;
  double t32289;
  double t32291;
  double t31676;
  double t32309;
  double t32310;
  double t32320;
  double t32645;
  double t32658;
  double t32661;
  double t33929;
  double t34649;
  double t34708;
  double t35376;
  double t35372;
  double t35327;
  double t35330;
  double t35368;
  double t35371;
  double t35374;
  double t35375;
  double t35377;
  double t35385;
  double t35387;
  double t35391;
  double t35525;
  double t35526;
  double t35594;
  double t35538;
  double t35541;
  double t35578;
  double t35590;
  double t35591;
  double t35596;
  double t37913;
  double t40198;
  double t42506;
  double t46982;
  double t47254;
  double t57219;
  double t61997;
  double t62249;
  double t64296;
  double t64328;
  double t64332;
  double t64333;
  double t30116;
  double t30186;
  double t30210;
  double t34831;
  double t34860;
  double t34868;
  double t34872;
  double t64752;
  double t64756;
  double t64757;
  double t64557;
  double t64560;
  double t64566;
  double t64579;
  double t64581;
  double t64779;
  double t64781;
  double t64785;
  double t34947;
  double t30057;
  double t64761;
  double t64764;
  double t64768;
  double t64769;
  double t34915;
  double t34956;
  double t34975;
  double t34977;
  double t64907;
  double t34989;
  double t34992;
  double t34993;
  double t65003;
  double t35074;
  double t35124;
  double t35134;
  double t64549;
  double t65109;
  double t65113;
  double t65114;
  double t65117;
  double t65129;
  double t65135;
  double t65145;
  double t65147;
  double t65148;
  double t51738;
  double t51956;
  double t54557;
  double t55381;
  double t55383;
  double t65140;
  double t65141;
  double t65142;
  double t65112;
  double t65136;
  double t65137;
  double t49936;
  double t50724;
  double t50732;
  double t50901;
  double t50937;
  double t65139;
  double t65143;
  double t65149;
  double t65150;
  double t65151;
  double t65152;
  double t65156;
  double t65157;
  double t65161;
  double t64550;
  double t64555;
  double t64556;
  double t65163;
  double t65166;
  double t65170;
  double t65173;
  double t65175;
  double t65176;
  double t64620;
  double t64621;
  double t64681;
  double t65171;
  double t65177;
  double t65178;
  double t64737;
  double t64721;
  double t64743;
  double t64744;
  double t65182;
  double t65184;
  double t65186;
  double t65187;
  double t65188;
  double t64692;
  double t64696;
  double t64697;
  double t64704;
  double t65216;
  double t65218;
  double t65219;
  double t65016;
  double t65017;
  double t65018;
  double t65020;
  double t64788;
  double t64790;
  double t64830;
  double t64843;
  double t64844;
  double t64848;
  double t64857;
  double t64997;
  double t65004;
  double t64909;
  double t64922;
  double t65282;
  double t65283;
  double t65284;
  double t65286;
  double t65288;
  double t65289;
  double t65285;
  double t65291;
  double t65293;
  double t65295;
  double t65297;
  double t65298;
  double t65294;
  double t65300;
  double t65301;
  double t65226;
  double t65228;
  double t65233;
  double t65234;
  double t65237;
  double t65317;
  double t65318;
  double t65320;
  double t65255;
  double t65258;
  double t65259;
  double t65260;
  double t65261;
  double t65268;
  double t65270;
  double t65271;
  double t65272;
  double t65274;
  t4718 = Sin(var1[2]);
  t26146 = Cos(var1[3]);
  t28360 = Sin(var1[3]);
  t28048 = Cos(var1[2]);
  t28598 = -1.*t26146;
  t28760 = 1. + t28598;
  t28837 = -0.15*t28760;
  t29125 = -0.15*t26146;
  t29221 = -0.16*t28360;
  t29236 = t28837 + t29125 + t29221;
  t31489 = Cos(var1[4]);
  t31526 = Sin(var1[4]);
  t31764 = -1.*t31489;
  t31787 = 1. + t31764;
  t31923 = 0.4*t31787;
  t32054 = 0.69*t31489;
  t32074 = t31923 + t32054;
  t32151 = -0.15*t31787;
  t32156 = -0.15*t31489;
  t32157 = -0.29*t31526;
  t32162 = t32151 + t32156 + t32157;
  t31592 = t26146*t31489;
  t31614 = -1.*t28360*t31526;
  t31616 = t31592 + t31614;
  t32225 = t31489*t28360;
  t32255 = t26146*t31526;
  t32256 = t32225 + t32255;
  t32262 = -1.*t32074*t28360;
  t32263 = t26146*t32162;
  t32288 = t28837 + t32262 + t32263;
  t31498 = -1.*t31489*t28360;
  t31563 = -1.*t26146*t31526;
  t31585 = t31498 + t31563;
  t32113 = t26146*t32074;
  t32134 = 0.15*t28360;
  t32163 = t28360*t32162;
  t32206 = t32113 + t32134 + t32163;
  t32384 = Cos(var1[5]);
  t32387 = -1.*t32384;
  t32392 = 1. + t32387;
  t32403 = 0.8*t32392;
  t32427 = 1.04*t32384;
  t32429 = t32403 + t32427;
  t32431 = -0.15*t32392;
  t32432 = -0.15*t32384;
  t32433 = Sin(var1[5]);
  t32436 = -0.24*t32433;
  t32437 = t32431 + t32432 + t32436;
  t32383 = 0.4*t31526;
  t32430 = -1.*t32429*t31526;
  t32438 = t31489*t32437;
  t32439 = t32151 + t32383 + t32430 + t32438;
  t32443 = t31489*t32429;
  t32449 = 0.15*t31526;
  t32451 = t31526*t32437;
  t32467 = t31923 + t32443 + t32449 + t32451;
  t32522 = -1.*t32384*t31526;
  t32528 = -1.*t31489*t32433;
  t32530 = t32522 + t32528;
  t32573 = t31489*t32384;
  t32579 = -1.*t31526*t32433;
  t32587 = t32573 + t32579;
  t32597 = t26146*t32587;
  t32663 = t32384*t31526;
  t32664 = t31489*t32433;
  t32670 = t32663 + t32664;
  t32562 = t28360*t32530;
  t32641 = t32562 + t32597;
  t32654 = t26146*t32530;
  t32656 = -1.*t28360*t32587;
  t32657 = t32654 + t32656;
  t32647 = t26146*t32439;
  t32650 = -1.*t28360*t32467;
  t32653 = t28837 + t32647 + t32650;
  t32671 = -1.*t28360*t32670;
  t32674 = t32671 + t32597;
  t32441 = t28360*t32439;
  t32511 = t26146*t32467;
  t32521 = t32134 + t32441 + t32511;
  t33488 = t26146*t32670;
  t33518 = t28360*t32587;
  t33534 = t33488 + t33518;
  t29237 = -1.*t26146*t29236;
  t29392 = -0.16*t26146*t28360;
  t30048 = t29237 + t29392;
  t26673 = -1.*t26146*t4718;
  t28367 = t28048*t28360;
  t28369 = t26673 + t28367;
  t30218 = Power(t26146,2);
  t30519 = 0.16*t30218;
  t30601 = -1.*t29236*t28360;
  t31449 = t30519 + t30601;
  t32257 = -1.*t32206*t32256;
  t32289 = -1.*t32288*t31616;
  t32291 = t32257 + t32289;
  t31676 = -1.*t4718*t31616;
  t32309 = t32288*t31585;
  t32310 = t32206*t31616;
  t32320 = t32309 + t32310;
  t32645 = t32521*t32641;
  t32658 = t32653*t32657;
  t32661 = t32645 + t32658;
  t33929 = -1.*t32653*t32674;
  t34649 = -1.*t32521*t33534;
  t34708 = t33929 + t34649;
  t35376 = -0.15*t28360;
  t35372 = 0.15*t26146;
  t35327 = -1.*t28360*t32530;
  t35330 = -1.*t26146*t32587;
  t35368 = t35327 + t35330;
  t35371 = t32653*t35368;
  t35374 = t35372 + t32647 + t32650;
  t35375 = t35374*t32641;
  t35377 = -1.*t28360*t32439;
  t35385 = -1.*t26146*t32467;
  t35387 = t35376 + t35377 + t35385;
  t35391 = t35387*t32657;
  t35525 = t32521*t32657;
  t35526 = t35371 + t35375 + t35391 + t35525;
  t35594 = t35372 + t32262 + t32263;
  t35538 = -1.*t26146*t32074;
  t35541 = -1.*t28360*t32162;
  t35578 = t35538 + t35376 + t35541;
  t35590 = t35578*t31585;
  t35591 = t32206*t31585;
  t35596 = t35594*t31616;
  t37913 = -1.*t26146*t31489;
  t40198 = t28360*t31526;
  t42506 = t37913 + t40198;
  t46982 = t32288*t42506;
  t47254 = t35590 + t35591 + t35596 + t46982;
  t57219 = -1.*t35387*t32674;
  t61997 = -1.*t32521*t32674;
  t62249 = -1.*t26146*t32670;
  t64296 = t62249 + t32656;
  t64328 = -1.*t32653*t64296;
  t64332 = -1.*t35374*t33534;
  t64333 = t57219 + t61997 + t64328 + t64332;
  t30116 = -1.*t28048*t26146;
  t30186 = -1.*t4718*t28360;
  t30210 = t30116 + t30186;
  t34831 = t28048*t26146;
  t34860 = t4718*t28360;
  t34868 = t34831 + t34860;
  t34872 = -6.4*t30048*t34868;
  t64752 = t26146*t4718;
  t64756 = -1.*t28048*t28360;
  t64757 = t64752 + t64756;
  t64557 = -1.*t32288*t31585;
  t64560 = -1.*t35594*t32256;
  t64566 = -1.*t35578*t31616;
  t64579 = -1.*t32206*t31616;
  t64581 = t64557 + t64560 + t64566 + t64579;
  t64779 = t28048*t31585;
  t64781 = t4718*t31616;
  t64785 = t64779 + t64781;
  t34947 = t28048*t31616;
  t30057 = -6.4*t28369*t30048;
  t64761 = t29236*t28360;
  t64764 = Power(t28360,2);
  t64768 = 0.16*t64764;
  t64769 = t64761 + t64768;
  t34915 = -1.*t4718*t31585;
  t34956 = t34915 + t34947;
  t34975 = t28048*t32256;
  t34977 = t34975 + t31676;
  t64907 = t28048*t32674;
  t34989 = -1.*t4718*t32674;
  t34992 = t28048*t33534;
  t34993 = t34989 + t34992;
  t65003 = t28048*t32657;
  t35074 = t28048*t32641;
  t35124 = -1.*t4718*t32657;
  t35134 = t35074 + t35124;
  t64549 = 0.15*t31489;
  t65109 = t64549 + t32383 + t32430 + t32438;
  t65113 = 0.4*t31489;
  t65114 = -1.*t31489*t32429;
  t65117 = -0.15*t31526;
  t65129 = -1.*t31526*t32437;
  t65135 = t65113 + t65114 + t65117 + t65129;
  t65145 = -1.*t31489*t32384;
  t65147 = t31526*t32433;
  t65148 = t65145 + t65147;
  t51738 = 0.15*t32384;
  t51956 = t32384*t32437;
  t54557 = -0.4*t32433;
  t55381 = t32429*t32433;
  t55383 = t51738 + t51956 + t54557 + t55381;
  t65140 = -1.*t28360*t65109;
  t65141 = t26146*t65135;
  t65142 = t65140 + t65141;
  t65112 = t26146*t65109;
  t65136 = t28360*t65135;
  t65137 = t65112 + t65136;
  t49936 = 0.4*t32384;
  t50724 = -1.*t32384*t32429;
  t50732 = 0.15*t32433;
  t50901 = t32437*t32433;
  t50937 = t49936 + t50724 + t50732 + t50901;
  t65139 = t65137*t32641;
  t65143 = t65142*t32657;
  t65149 = t26146*t65148;
  t65150 = t35327 + t65149;
  t65151 = t32653*t65150;
  t65152 = t28360*t65148;
  t65156 = t32654 + t65152;
  t65157 = t32521*t65156;
  t65161 = t65139 + t65143 + t65151 + t65157;
  t64550 = t31489*t32162;
  t64555 = t32074*t31526;
  t64556 = t64549 + t64550 + t64555;
  t65163 = -0.29*t31489*t28360;
  t65166 = -0.29*t26146*t31526;
  t65170 = t65163 + t65166;
  t65173 = -0.29*t26146*t31489;
  t65175 = 0.29*t28360*t31526;
  t65176 = t65173 + t65175;
  t64620 = -1.*t32074*t31489;
  t64621 = t32162*t31526;
  t64681 = t64620 + t32449 + t64621;
  t65171 = t65170*t31616;
  t65177 = t31585*t65176;
  t65178 = t35591 + t65171 + t65177 + t46982;
  t64737 = 0.15*t32587;
  t64721 = t32467*t32670;
  t64743 = t32439*t32587;
  t64744 = t64721 + t64737 + t64743;
  t65182 = -1.*t32521*t32641;
  t65184 = -1.*t65142*t32674;
  t65186 = -1.*t32653*t32657;
  t65187 = -1.*t65137*t33534;
  t65188 = t65182 + t65184 + t65186 + t65187;
  t64692 = -1.*t32439*t32530;
  t64696 = 0.15*t32670;
  t64697 = -1.*t32467*t32587;
  t64704 = t64692 + t64696 + t64697;
  t65216 = -1.*t65170*t32256;
  t65218 = -1.*t31616*t65176;
  t65219 = t64557 + t65216 + t64579 + t65218;
  t65016 = -13.6*t34956*t32320;
  t65017 = -1.*t4718*t42506;
  t65018 = t64779 + t65017;
  t65020 = -13.6*t32291*t65018;
  t64788 = -13.6*t64785*t32320;
  t64790 = t4718*t31585;
  t64830 = t28048*t42506;
  t64843 = t64790 + t64830;
  t64844 = -13.6*t32291*t64843;
  t64848 = t4718*t32256;
  t64857 = t64848 + t34947;
  t64997 = t4718*t32641;
  t65004 = t64997 + t65003;
  t64909 = t4718*t33534;
  t64922 = t64907 + t64909;
  t65282 = -0.24*t32384*t31526;
  t65283 = -0.24*t31489*t32433;
  t65284 = t65282 + t65283;
  t65286 = -0.24*t31489*t32384;
  t65288 = 0.24*t31526*t32433;
  t65289 = t65286 + t65288;
  t65285 = -1.*t28360*t65284;
  t65291 = t26146*t65289;
  t65293 = t65285 + t65291;
  t65295 = t26146*t65284;
  t65297 = t28360*t65289;
  t65298 = t65295 + t65297;
  t65294 = t32657*t65293;
  t65300 = t32641*t65298;
  t65301 = t65294 + t65300 + t65151 + t65157;
  t65226 = -1.*t32467*t32530;
  t65228 = -1.*t32439*t65148;
  t65233 = 0.15*t32530;
  t65234 = t32439*t32530;
  t65237 = t32467*t32587;
  t65317 = -1.*t32674*t65293;
  t65318 = -1.*t33534*t65298;
  t65320 = t65182 + t65186 + t65317 + t65318;
  t65255 = -12.*t35134*t32661;
  t65258 = -1.*t4718*t65150;
  t65259 = t28048*t65156;
  t65260 = t65258 + t65259;
  t65261 = -12.*t34708*t65260;
  t65268 = -12.*t65004*t32661;
  t65270 = t28048*t65150;
  t65271 = t4718*t65156;
  t65272 = t65270 + t65271;
  t65274 = -12.*t34708*t65272;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(-0.048*t28048 - 6.4*t28369*t31449 + t34872 - 13.6*t32291*t34956 - 13.6*t32320*t34977 - 12.*t32661*t34993 - 12.*t34708*t35134)*var2[0] - 0.5*(t30057 - 6.4*t30210*t31449 - 13.6*(-1.*t28048*t31585 + t31676)*t32291 + 0.048*t4718 - 13.6*t32320*(-1.*t28048*t31616 - 1.*t32256*t4718) - 12.*t34708*(-1.*t28048*t32657 - 1.*t32641*t4718) - 12.*t32661*(-1.*t28048*t32674 - 1.*t33534*t4718))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(-6.4*t30048*t30210 + t34872 - 12.*t34708*(t28048*t35368 + t32657*t4718) - 12.*t32661*(t32674*t4718 + t28048*t64296) - 6.4*t31449*t64757 - 6.4*t64757*t64769 - 13.6*t64581*t64785 + t64788 + t64844 - 13.6*t47254*t64857 - 12.*t35526*t64922 - 12.*t64333*t65004)*var2[0] - 0.5*(t30057 - 6.4*t31449*t34868 - 12.*t34993*t35526 - 13.6*t34977*t47254 - 12.*t35134*t64333 - 13.6*t34956*t64581 - 6.4*t30048*t64757 - 6.4*t34868*t64769 - 12.*t32661*(-1.*t4718*t64296 + t64907) - 12.*t34708*(-1.*t35368*t4718 + t65003) + t65016 + t65020)*var2[1] - 0.5*(-12.8*t30048*t31449 - 24.*t32661*t35526 - 27.2*t32320*t47254 - 24.*t34708*t64333 - 27.2*t32291*t64581 - 12.8*t30048*t64769)*var2[2] - 0.5*(1.024*t30048 - 13.6*t64556*t64581 - 13.6*t47254*t64681 - 12.*t35526*t64704 - 12.*t64333*t64744)*var2[3] - 0.5*(3.944*t47254 - 12.*t35526*t50937 - 12.*t55383*t64333)*var2[4] - 1.44*t35526*var2[5]);
  p_output1[4]=var2[2]*(-0.5*(t64788 + t64844 - 12.*t64922*t65161 - 13.6*t64857*t65178 - 12.*t65004*t65188 - 13.6*t64785*t65219 + t65268 + t65274)*var2[0] - 0.5*(t65016 + t65020 - 12.*t34993*t65161 - 13.6*t34977*t65178 - 12.*t35134*t65188 - 13.6*t34956*t65219 + t65255 + t65261)*var2[1] - 0.5*(-24.*t32661*t65161 - 27.2*t32320*t65178 - 24.*t34708*t65188 - 27.2*t32291*t65219)*var2[2] - 0.5*(-13.6*t32320*t64556 - 13.6*t32291*(-0.29*Power(t31489,2) - 0.29*Power(t31526,2) + t31489*t32074 - 1.*t31526*t32162 + t65117) - 12.*t64704*t65161 - 13.6*t64681*t65178 - 12.*t64744*t65188 - 13.6*t64556*t65219 - 12.*t32661*(t64737 - 1.*t32587*t65109 - 1.*t32530*t65135 + t65226 + t65228) - 12.*t34708*(t32670*t65109 + t32587*t65135 + t65233 + t65234 + t65237))*var2[3] - 0.5*(-12.*t50937*t65161 + 3.944*t65178 - 12.*t55383*t65188)*var2[4] - 1.44*t65161*var2[5]);
  p_output1[5]=var2[2]*(-0.5*(t65268 + t65274 - 12.*t64922*t65301 - 12.*t65004*t65320)*var2[0] - 0.5*(t65255 + t65261 - 12.*t34993*t65301 - 12.*t35134*t65320)*var2[1] - 0.5*(-24.*t32661*t65301 - 24.*t34708*t65320)*var2[2] - 0.5*(-12.*t32661*(t64737 + t65226 + t65228 - 1.*t32587*t65284 - 1.*t32530*t65289) - 12.*t34708*(t65233 + t65234 + t65237 + t32670*t65284 + t32587*t65289) - 12.*t64704*t65301 - 12.*t64744*t65320)*var2[3] - 0.5*(-12.*(-0.4*t32384 - 0.24*Power(t32384,2) + t32384*t32429 - 0.15*t32433 - 0.24*Power(t32433,2) - 1.*t32433*t32437)*t34708 - 12.*t32661*t55383 - 12.*t50937*t65301 - 12.*t55383*t65320)*var2[4] - 1.44*t65301*var2[5]);
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 6 && ncols == 1) && 
      !(mrows == 1 && ncols == 6))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec3_acrobot.hh"

namespace SymFunction
{

void Ce3_vec3_acrobot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
