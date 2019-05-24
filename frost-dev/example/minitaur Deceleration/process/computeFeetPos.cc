/*
 * Automatically Generated from Mathematica.
 * Fri 24 May 2019 16:14:16 GMT-04:00
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
  double t6433;
  double t6507;
  double t6700;
  double t6733;
  double t6500;
  double t6838;
  double t6845;
  double t6846;
  double t6926;
  double t6928;
  double t6931;
  double t6936;
  double t6984;
  double t7009;
  double t7025;
  double t6854;
  double t6864;
  double t6869;
  double t6890;
  double t6940;
  double t7043;
  double t7044;
  double t7046;
  double t7047;
  double t7049;
  double t7050;
  double t7182;
  double t7059;
  double t7138;
  double t7154;
  double t7157;
  double t7160;
  double t7167;
  double t7172;
  double t7183;
  double t6925;
  double t7064;
  double t6933;
  double t7077;
  double t7078;
  double t7192;
  double t7177;
  double t7279;
  double t7280;
  double t7281;
  double t7299;
  double t7304;
  double t7305;
  double t7311;
  double t7312;
  double t7283;
  double t7316;
  double t7317;
  double t7327;
  double t7313;
  double t7314;
  double t7333;
  double t7320;
  double t7321;
  double t7322;
  double t7323;
  double t7324;
  double t7325;
  double t7347;
  double t7348;
  double t7349;
  double t7350;
  double t7357;
  double t7358;
  double t7359;
  double t7360;
  double t7361;
  double t7362;
  double t7372;
  double t7382;
  double t7383;
  double t7379;
  double t7338;
  double t7377;
  double t7387;
  double t7414;
  double t7415;
  double t7416;
  double t7422;
  double t7423;
  double t7424;
  double t7426;
  double t7427;
  double t7418;
  double t7441;
  double t7446;
  double t7460;
  double t7431;
  double t7435;
  double t7462;
  double t7453;
  double t7454;
  double t7455;
  double t7456;
  double t7457;
  double t7458;
  double t7468;
  double t7469;
  double t7470;
  double t7475;
  double t7490;
  double t7491;
  double t7492;
  double t7493;
  double t7494;
  double t7495;
  double t7497;
  double t7503;
  double t7504;
  double t7500;
  double t7463;
  double t7498;
  double t7520;
  double t7535;
  double t7536;
  double t7537;
  double t7555;
  double t7556;
  double t7557;
  double t7559;
  double t7560;
  double t7543;
  double t7564;
  double t7565;
  double t7575;
  double t7561;
  double t7562;
  double t7577;
  double t7568;
  double t7569;
  double t7570;
  double t7571;
  double t7572;
  double t7573;
  double t7583;
  double t7584;
  double t7585;
  double t7586;
  double t7593;
  double t7594;
  double t7595;
  double t7596;
  double t7597;
  double t7598;
  double t7600;
  double t7606;
  double t7607;
  double t7603;
  double t7578;
  double t7601;
  double t7611;
  double t7628;
  double t7626;
  double t7627;
  double t7629;
  double t7630;
  double t7632;
  double t7633;
  double t7634;
  double t6932;
  double t6947;
  double t6951;
  double t7036;
  double t7039;
  double t7051;
  double t7054;
  double t7069;
  double t7070;
  double t7071;
  double t7637;
  double t7638;
  double t7639;
  double t7640;
  double t7179;
  double t7642;
  double t7643;
  double t7644;
  double t7645;
  double t7189;
  double t7190;
  double t7648;
  double t7649;
  double t7650;
  double t7651;
  double t7245;
  double t7257;
  double t7260;
  double t7263;
  double t7266;
  double t7271;
  double t7294;
  double t7310;
  double t7315;
  double t7318;
  double t7319;
  double t7328;
  double t7343;
  double t7344;
  double t7345;
  double t7346;
  double t7352;
  double t7353;
  double t7354;
  double t7355;
  double t7356;
  double t7671;
  double t7672;
  double t7673;
  double t7674;
  double t7380;
  double t7676;
  double t7677;
  double t7678;
  double t7679;
  double t7681;
  double t7682;
  double t7683;
  double t7684;
  double t7390;
  double t7394;
  double t7395;
  double t7421;
  double t7425;
  double t7436;
  double t7447;
  double t7452;
  double t7461;
  double t7464;
  double t7465;
  double t7466;
  double t7467;
  double t7485;
  double t7486;
  double t7487;
  double t7488;
  double t7489;
  double t7705;
  double t7706;
  double t7707;
  double t7708;
  double t7501;
  double t7710;
  double t7711;
  double t7712;
  double t7713;
  double t7715;
  double t7716;
  double t7717;
  double t7718;
  double t7523;
  double t7527;
  double t7528;
  double t7554;
  double t7558;
  double t7563;
  double t7566;
  double t7567;
  double t7576;
  double t7579;
  double t7580;
  double t7581;
  double t7582;
  double t7588;
  double t7589;
  double t7590;
  double t7591;
  double t7592;
  double t7739;
  double t7740;
  double t7741;
  double t7742;
  double t7604;
  double t7744;
  double t7745;
  double t7746;
  double t7747;
  double t7749;
  double t7750;
  double t7751;
  double t7752;
  double t7614;
  double t7618;
  double t7619;
  double t7770;
  double t7771;
  double t7772;
  double t7774;
  double t7775;
  double t7776;
  double t7779;
  double t7780;
  double t7781;
  double t7782;
  double t7784;
  double t7785;
  double t7786;
  double t7787;
  double t7790;
  double t7791;
  double t7792;
  double t7793;
  double t7813;
  double t7814;
  double t7815;
  double t7816;
  double t7818;
  double t7819;
  double t7820;
  double t7821;
  double t7823;
  double t7824;
  double t7825;
  double t7826;
  double t7847;
  double t7848;
  double t7849;
  double t7850;
  double t7852;
  double t7853;
  double t7854;
  double t7855;
  double t7857;
  double t7858;
  double t7859;
  double t7860;
  double t7881;
  double t7882;
  double t7883;
  double t7884;
  double t7886;
  double t7887;
  double t7888;
  double t7889;
  double t7891;
  double t7892;
  double t7893;
  double t7894;
  t6433 = Cos(var1[4]);
  t6507 = Cos(var1[6]);
  t6700 = -1.*t6507;
  t6733 = 1. + t6700;
  t6500 = Cos(var1[5]);
  t6838 = Sin(var1[5]);
  t6845 = Sin(var1[4]);
  t6846 = Sin(var1[6]);
  t6926 = Cos(var1[8]);
  t6928 = -1.*t6926;
  t6931 = 1. + t6928;
  t6936 = Sin(var1[8]);
  t6984 = -3.e-6*t6931;
  t7009 = 3.e-6*t6936;
  t7025 = t6984 + t7009;
  t6854 = t6433*t6500*t6507;
  t6864 = -3.e-6*t6433*t6733*t6838;
  t6869 = t6845*t6846;
  t6890 = t6854 + t6864 + t6869;
  t6940 = -1.*t6936;
  t7043 = 3.e-6*t6433*t6500*t6733;
  t7044 = -9.e-12*t6733;
  t7046 = 1. + t7044;
  t7047 = -1.*t6433*t7046*t6838;
  t7049 = -3.e-6*t6845*t6846;
  t7050 = t7043 + t7047 + t7049;
  t7182 = 3.e-6*t6931;
  t7059 = -3.e-6*t6936;
  t7138 = -1.000000000009*t6733;
  t7154 = 1. + t7138;
  t7157 = t7154*t6845;
  t7160 = -1.*t6433*t6500*t6846;
  t7167 = -3.e-6*t6433*t6838*t6846;
  t7172 = t7157 + t7160 + t7167;
  t7183 = t7182 + t7009;
  t6925 = 1.125e-12*var1[8];
  t7064 = t6984 + t7059;
  t6933 = -9.e-12*t6931;
  t7077 = -1.000000000009*t6931;
  t7078 = 1. + t7077;
  t7192 = t7182 + t7059;
  t7177 = 9.e-12*t6931;
  t7279 = Cos(var1[10]);
  t7280 = -1.*t7279;
  t7281 = 1. + t7280;
  t7299 = Cos(var1[12]);
  t7304 = -1.*t7299;
  t7305 = 1. + t7304;
  t7311 = -3.e-6*t7305;
  t7312 = Sin(var1[12]);
  t7283 = Sin(var1[10]);
  t7316 = 3.e-6*t7312;
  t7317 = t7311 + t7316;
  t7327 = 7.5e-14*var1[12];
  t7313 = -3.e-6*t7312;
  t7314 = t7311 + t7313;
  t7333 = -9.e-12*t7305;
  t7320 = 3.e-6*t7281*t6433*t6500;
  t7321 = -3.e-6*t7283*t6845;
  t7322 = -9.e-12*t7281;
  t7323 = 1. + t7322;
  t7324 = -1.*t7323*t6433*t6838;
  t7325 = t7320 + t7321 + t7324;
  t7347 = t7279*t6433*t6500;
  t7348 = t7283*t6845;
  t7349 = -3.e-6*t7281*t6433*t6838;
  t7350 = t7347 + t7348 + t7349;
  t7357 = -1.*t6433*t6500*t7283;
  t7358 = -1.000000000009*t7281;
  t7359 = 1. + t7358;
  t7360 = t7359*t6845;
  t7361 = -3.e-6*t6433*t7283*t6838;
  t7362 = t7357 + t7360 + t7361;
  t7372 = 3.e-6*t7305;
  t7382 = -1.000000000009*t7305;
  t7383 = 1. + t7382;
  t7379 = 9.e-12*t7305;
  t7338 = -1.*t7312;
  t7377 = t7372 + t7313;
  t7387 = t7372 + t7316;
  t7414 = Cos(var1[15]);
  t7415 = -1.*t7414;
  t7416 = 1. + t7415;
  t7422 = Cos(var1[17]);
  t7423 = -1.*t7422;
  t7424 = 1. + t7423;
  t7426 = -3.e-6*t7424;
  t7427 = Sin(var1[17]);
  t7418 = Sin(var1[15]);
  t7441 = 3.e-6*t7427;
  t7446 = t7426 + t7441;
  t7460 = 1.125e-12*var1[17];
  t7431 = -3.e-6*t7427;
  t7435 = t7426 + t7431;
  t7462 = -9.e-12*t7424;
  t7453 = 3.e-6*t7416*t6433*t6500;
  t7454 = -3.e-6*t7418*t6845;
  t7455 = -9.e-12*t7416;
  t7456 = 1. + t7455;
  t7457 = -1.*t7456*t6433*t6838;
  t7458 = t7453 + t7454 + t7457;
  t7468 = t7414*t6433*t6500;
  t7469 = t7418*t6845;
  t7470 = -3.e-6*t7416*t6433*t6838;
  t7475 = t7468 + t7469 + t7470;
  t7490 = -1.*t6433*t6500*t7418;
  t7491 = -1.000000000009*t7416;
  t7492 = 1. + t7491;
  t7493 = t7492*t6845;
  t7494 = -3.e-6*t6433*t7418*t6838;
  t7495 = t7490 + t7493 + t7494;
  t7497 = 3.e-6*t7424;
  t7503 = -1.000000000009*t7424;
  t7504 = 1. + t7503;
  t7500 = 9.e-12*t7424;
  t7463 = -1.*t7427;
  t7498 = t7497 + t7431;
  t7520 = t7497 + t7441;
  t7535 = Cos(var1[19]);
  t7536 = -1.*t7535;
  t7537 = 1. + t7536;
  t7555 = Cos(var1[21]);
  t7556 = -1.*t7555;
  t7557 = 1. + t7556;
  t7559 = -3.e-6*t7557;
  t7560 = Sin(var1[21]);
  t7543 = Sin(var1[19]);
  t7564 = 3.e-6*t7560;
  t7565 = t7559 + t7564;
  t7575 = 7.5e-14*var1[21];
  t7561 = -3.e-6*t7560;
  t7562 = t7559 + t7561;
  t7577 = -9.e-12*t7557;
  t7568 = 3.e-6*t7537*t6433*t6500;
  t7569 = -3.e-6*t7543*t6845;
  t7570 = -9.e-12*t7537;
  t7571 = 1. + t7570;
  t7572 = -1.*t7571*t6433*t6838;
  t7573 = t7568 + t7569 + t7572;
  t7583 = t7535*t6433*t6500;
  t7584 = t7543*t6845;
  t7585 = -3.e-6*t7537*t6433*t6838;
  t7586 = t7583 + t7584 + t7585;
  t7593 = -1.*t6433*t6500*t7543;
  t7594 = -1.000000000009*t7537;
  t7595 = 1. + t7594;
  t7596 = t7595*t6845;
  t7597 = -3.e-6*t6433*t7543*t6838;
  t7598 = t7593 + t7596 + t7597;
  t7600 = 3.e-6*t7557;
  t7606 = -1.000000000009*t7557;
  t7607 = 1. + t7606;
  t7603 = 9.e-12*t7557;
  t7578 = -1.*t7560;
  t7601 = t7600 + t7561;
  t7611 = t7600 + t7564;
  t7628 = Cos(var1[3]);
  t7626 = Sin(var1[3]);
  t7627 = t6500*t7626*t6845;
  t7629 = t7628*t6838;
  t7630 = t7627 + t7629;
  t7632 = t7628*t6500;
  t7633 = -1.*t7626*t6845*t6838;
  t7634 = t7632 + t7633;
  t6932 = 0.225000000002025*t6931;
  t6947 = t6933 + t6940;
  t6951 = 0.1*t6947;
  t7036 = -9.75e-7*t7025;
  t7039 = t6925 + t6932 + t6951 + t7036;
  t7051 = 3.75e-7*var1[8];
  t7054 = -1.755e-17*t6931;
  t7069 = 0.225*t7064;
  t7070 = 0.1*t7025;
  t7071 = t7051 + t7054 + t7069 + t7070;
  t7637 = t6507*t7630;
  t7638 = 3.e-6*t6733*t7634;
  t7639 = -1.*t6433*t7626*t6846;
  t7640 = t7637 + t7638 + t7639;
  t7179 = t7177 + t6940;
  t7642 = 3.e-6*t6733*t7630;
  t7643 = t7046*t7634;
  t7644 = 3.e-6*t6433*t7626*t6846;
  t7645 = t7642 + t7643 + t7644;
  t7189 = -1.8e-11*t6931;
  t7190 = 1. + t7189;
  t7648 = -1.*t6433*t7154*t7626;
  t7649 = -1.*t7630*t6846;
  t7650 = 3.e-6*t7634*t6846;
  t7651 = t7648 + t7649 + t7650;
  t7245 = 0.1000000000009*t6931;
  t7257 = -9.75e-7*t7064;
  t7260 = t6933 + t6936;
  t7263 = 0.225*t7260;
  t7266 = t6925 + t7245 + t7257 + t7263;
  t7271 = t7177 + t6936;
  t7294 = 2.5e-8*var1[12];
  t7310 = 6.75e-18*t7305;
  t7315 = -0.225000000003*t7314;
  t7318 = 0.100000000003*t7317;
  t7319 = t7294 + t7310 + t7315 + t7318;
  t7328 = -0.225000000005025*t7305;
  t7343 = t7333 + t7338;
  t7344 = 0.100000000003*t7343;
  t7345 = 3.75e-7*t7317;
  t7346 = t7327 + t7328 + t7344 + t7345;
  t7352 = 0.1000000000039*t7305;
  t7353 = 3.75e-7*t7314;
  t7354 = t7333 + t7312;
  t7355 = -0.225000000003*t7354;
  t7356 = t7327 + t7352 + t7353 + t7355;
  t7671 = 3.e-6*t6433*t7283*t7626;
  t7672 = 3.e-6*t7281*t7630;
  t7673 = t7323*t7634;
  t7674 = t7671 + t7672 + t7673;
  t7380 = t7379 + t7312;
  t7676 = -1.*t6433*t7283*t7626;
  t7677 = t7279*t7630;
  t7678 = 3.e-6*t7281*t7634;
  t7679 = t7676 + t7677 + t7678;
  t7681 = -1.*t7359*t6433*t7626;
  t7682 = -1.*t7283*t7630;
  t7683 = 3.e-6*t7283*t7634;
  t7684 = t7681 + t7682 + t7683;
  t7390 = t7379 + t7338;
  t7394 = -1.8e-11*t7305;
  t7395 = 1. + t7394;
  t7421 = 3.75e-7*var1[17];
  t7425 = -1.755e-17*t7424;
  t7436 = 0.225*t7435;
  t7447 = 0.1*t7446;
  t7452 = t7421 + t7425 + t7436 + t7447;
  t7461 = 0.225000000002025*t7424;
  t7464 = t7462 + t7463;
  t7465 = 0.1*t7464;
  t7466 = -9.75e-7*t7446;
  t7467 = t7460 + t7461 + t7465 + t7466;
  t7485 = 0.1000000000009*t7424;
  t7486 = -9.75e-7*t7435;
  t7487 = t7462 + t7427;
  t7488 = 0.225*t7487;
  t7489 = t7460 + t7485 + t7486 + t7488;
  t7705 = 3.e-6*t6433*t7418*t7626;
  t7706 = 3.e-6*t7416*t7630;
  t7707 = t7456*t7634;
  t7708 = t7705 + t7706 + t7707;
  t7501 = t7500 + t7427;
  t7710 = -1.*t6433*t7418*t7626;
  t7711 = t7414*t7630;
  t7712 = 3.e-6*t7416*t7634;
  t7713 = t7710 + t7711 + t7712;
  t7715 = -1.*t7492*t6433*t7626;
  t7716 = -1.*t7418*t7630;
  t7717 = 3.e-6*t7418*t7634;
  t7718 = t7715 + t7716 + t7717;
  t7523 = t7500 + t7463;
  t7527 = -1.8e-11*t7424;
  t7528 = 1. + t7527;
  t7554 = 2.5e-8*var1[21];
  t7558 = 6.75e-18*t7557;
  t7563 = -0.225000000003*t7562;
  t7566 = 0.100000000003*t7565;
  t7567 = t7554 + t7558 + t7563 + t7566;
  t7576 = -0.225000000005025*t7557;
  t7579 = t7577 + t7578;
  t7580 = 0.100000000003*t7579;
  t7581 = 3.75e-7*t7565;
  t7582 = t7575 + t7576 + t7580 + t7581;
  t7588 = 0.1000000000039*t7557;
  t7589 = 3.75e-7*t7562;
  t7590 = t7577 + t7560;
  t7591 = -0.225000000003*t7590;
  t7592 = t7575 + t7588 + t7589 + t7591;
  t7739 = 3.e-6*t6433*t7543*t7626;
  t7740 = 3.e-6*t7537*t7630;
  t7741 = t7571*t7634;
  t7742 = t7739 + t7740 + t7741;
  t7604 = t7603 + t7560;
  t7744 = -1.*t6433*t7543*t7626;
  t7745 = t7535*t7630;
  t7746 = 3.e-6*t7537*t7634;
  t7747 = t7744 + t7745 + t7746;
  t7749 = -1.*t7595*t6433*t7626;
  t7750 = -1.*t7543*t7630;
  t7751 = 3.e-6*t7543*t7634;
  t7752 = t7749 + t7750 + t7751;
  t7614 = t7603 + t7578;
  t7618 = -1.8e-11*t7557;
  t7619 = 1. + t7618;
  t7770 = -1.*t7628*t6500*t6845;
  t7771 = t7626*t6838;
  t7772 = t7770 + t7771;
  t7774 = t6500*t7626;
  t7775 = t7628*t6845*t6838;
  t7776 = t7774 + t7775;
  t7779 = t6507*t7772;
  t7780 = 3.e-6*t6733*t7776;
  t7781 = t7628*t6433*t6846;
  t7782 = t7779 + t7780 + t7781;
  t7784 = 3.e-6*t6733*t7772;
  t7785 = t7046*t7776;
  t7786 = -3.e-6*t7628*t6433*t6846;
  t7787 = t7784 + t7785 + t7786;
  t7790 = t7628*t6433*t7154;
  t7791 = -1.*t7772*t6846;
  t7792 = 3.e-6*t7776*t6846;
  t7793 = t7790 + t7791 + t7792;
  t7813 = -3.e-6*t7628*t6433*t7283;
  t7814 = 3.e-6*t7281*t7772;
  t7815 = t7323*t7776;
  t7816 = t7813 + t7814 + t7815;
  t7818 = t7628*t6433*t7283;
  t7819 = t7279*t7772;
  t7820 = 3.e-6*t7281*t7776;
  t7821 = t7818 + t7819 + t7820;
  t7823 = t7359*t7628*t6433;
  t7824 = -1.*t7283*t7772;
  t7825 = 3.e-6*t7283*t7776;
  t7826 = t7823 + t7824 + t7825;
  t7847 = -3.e-6*t7628*t6433*t7418;
  t7848 = 3.e-6*t7416*t7772;
  t7849 = t7456*t7776;
  t7850 = t7847 + t7848 + t7849;
  t7852 = t7628*t6433*t7418;
  t7853 = t7414*t7772;
  t7854 = 3.e-6*t7416*t7776;
  t7855 = t7852 + t7853 + t7854;
  t7857 = t7492*t7628*t6433;
  t7858 = -1.*t7418*t7772;
  t7859 = 3.e-6*t7418*t7776;
  t7860 = t7857 + t7858 + t7859;
  t7881 = -3.e-6*t7628*t6433*t7543;
  t7882 = 3.e-6*t7537*t7772;
  t7883 = t7571*t7776;
  t7884 = t7881 + t7882 + t7883;
  t7886 = t7628*t6433*t7543;
  t7887 = t7535*t7772;
  t7888 = 3.e-6*t7537*t7776;
  t7889 = t7886 + t7887 + t7888;
  t7891 = t7595*t7628*t6433;
  t7892 = -1.*t7543*t7772;
  t7893 = 3.e-6*t7543*t7776;
  t7894 = t7891 + t7892 + t7893;
  p_output1[0]=0.225000000002025*t6433*t6500*t6733 + 6.75000000006075e-7*t6433*t6733*t6838 - 0.225000000002025*t6845*t6846 + t6890*t7039 + t7050*t7071 + 0.225*(t6890*t7078 + t7172*t7179 + t7050*t7183) + 0.130001*(t7172*t7183 + t7050*t7190 + t6890*t7192) + t7172*t7266 - 0.14*(t7078*t7172 + t7050*t7192 + t6890*t7271) + var1[0];
  p_output1[1]=-0.225000000002025*t6433*t6500*t7281 - 6.75000000006075e-7*t6433*t6838*t7281 + 0.225000000002025*t6845*t7283 + t7319*t7325 + t7346*t7350 + t7356*t7362 - 0.14*(t7325*t7377 + t7350*t7380 + t7362*t7383) - 0.225*(t7350*t7383 + t7325*t7387 + t7362*t7390) + 0.130001*(t7350*t7377 + t7362*t7387 + t7325*t7395) + var1[0];
  p_output1[2]=0.225000000002025*t6433*t6500*t7416 + 6.75000000006075e-7*t6433*t6838*t7416 - 0.225000000002025*t6845*t7418 + t7452*t7458 + t7467*t7475 + t7489*t7495 - 0.14*(t7458*t7498 + t7475*t7501 + t7495*t7504) + 0.225*(t7475*t7504 + t7458*t7520 + t7495*t7523) - 0.129999*(t7475*t7498 + t7495*t7520 + t7458*t7528) + var1[0];
  p_output1[3]=-0.225000000002025*t6433*t6500*t7537 - 6.75000000006075e-7*t6433*t6838*t7537 + 0.225000000002025*t6845*t7543 + t7567*t7573 + t7582*t7586 + t7592*t7598 - 0.14*(t7573*t7601 + t7586*t7604 + t7598*t7607) - 0.225*(t7586*t7607 + t7573*t7611 + t7598*t7614) - 0.129999*(t7586*t7601 + t7598*t7611 + t7573*t7619) + var1[0];
  p_output1[4]=0.225000000002025*t6433*t6846*t7626 + 0.225000000002025*t6733*t7630 - 6.75000000006075e-7*t6733*t7634 + t7039*t7640 + t7071*t7645 + t7266*t7651 - 0.14*(t7271*t7640 + t7192*t7645 + t7078*t7651) + 0.225*(t7078*t7640 + t7183*t7645 + t7179*t7651) + 0.130001*(t7192*t7640 + t7190*t7645 + t7183*t7651) + var1[1];
  p_output1[5]=-0.225000000002025*t6433*t7283*t7626 - 0.225000000002025*t7281*t7630 + 6.75000000006075e-7*t7281*t7634 + t7319*t7674 + t7346*t7679 + t7356*t7684 - 0.14*(t7377*t7674 + t7380*t7679 + t7383*t7684) + 0.130001*(t7395*t7674 + t7377*t7679 + t7387*t7684) - 0.225*(t7387*t7674 + t7383*t7679 + t7390*t7684) + var1[1];
  p_output1[6]=0.225000000002025*t6433*t7418*t7626 + 0.225000000002025*t7416*t7630 - 6.75000000006075e-7*t7416*t7634 + t7452*t7708 + t7467*t7713 + t7489*t7718 - 0.14*(t7498*t7708 + t7501*t7713 + t7504*t7718) - 0.129999*(t7528*t7708 + t7498*t7713 + t7520*t7718) + 0.225*(t7520*t7708 + t7504*t7713 + t7523*t7718) + var1[1];
  p_output1[7]=-0.225000000002025*t6433*t7543*t7626 - 0.225000000002025*t7537*t7630 + 6.75000000006075e-7*t7537*t7634 + t7567*t7742 + t7582*t7747 + t7592*t7752 - 0.14*(t7601*t7742 + t7604*t7747 + t7607*t7752) - 0.129999*(t7619*t7742 + t7601*t7747 + t7611*t7752) - 0.225*(t7611*t7742 + t7607*t7747 + t7614*t7752) + var1[1];
  p_output1[8]=-0.225000000002025*t6433*t6846*t7628 + 0.225000000002025*t6733*t7772 - 6.75000000006075e-7*t6733*t7776 + t7039*t7782 + t7071*t7787 + t7266*t7793 - 0.14*(t7271*t7782 + t7192*t7787 + t7078*t7793) + 0.225*(t7078*t7782 + t7183*t7787 + t7179*t7793) + 0.130001*(t7192*t7782 + t7190*t7787 + t7183*t7793) + var1[2];
  p_output1[9]=0.225000000002025*t6433*t7283*t7628 - 0.225000000002025*t7281*t7772 + 6.75000000006075e-7*t7281*t7776 + t7319*t7816 + t7346*t7821 + t7356*t7826 - 0.14*(t7377*t7816 + t7380*t7821 + t7383*t7826) + 0.130001*(t7395*t7816 + t7377*t7821 + t7387*t7826) - 0.225*(t7387*t7816 + t7383*t7821 + t7390*t7826) + var1[2];
  p_output1[10]=-0.225000000002025*t6433*t7418*t7628 + 0.225000000002025*t7416*t7772 - 6.75000000006075e-7*t7416*t7776 + t7452*t7850 + t7467*t7855 + t7489*t7860 - 0.14*(t7498*t7850 + t7501*t7855 + t7504*t7860) - 0.129999*(t7528*t7850 + t7498*t7855 + t7520*t7860) + 0.225*(t7520*t7850 + t7504*t7855 + t7523*t7860) + var1[2];
  p_output1[11]=0.225000000002025*t6433*t7543*t7628 - 0.225000000002025*t7537*t7772 + 6.75000000006075e-7*t7537*t7776 + t7567*t7884 + t7582*t7889 + t7592*t7894 - 0.14*(t7601*t7884 + t7604*t7889 + t7607*t7894) - 0.129999*(t7619*t7884 + t7601*t7889 + t7611*t7894) - 0.225*(t7611*t7884 + t7607*t7889 + t7614*t7894) + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "computeFeetPos.hh"

namespace SymFunction
{

void computeFeetPos_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
