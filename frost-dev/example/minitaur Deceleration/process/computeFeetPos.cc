/*
 * Automatically Generated from Mathematica.
 * Thu 14 Mar 2019 16:50:38 GMT-04:00
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
  double t2551;
  double t2625;
  double t2818;
  double t2851;
  double t2618;
  double t2956;
  double t2963;
  double t2964;
  double t3044;
  double t3046;
  double t3049;
  double t3054;
  double t3102;
  double t3127;
  double t3143;
  double t2972;
  double t2982;
  double t2987;
  double t3008;
  double t3058;
  double t3161;
  double t3162;
  double t3164;
  double t3165;
  double t3167;
  double t3168;
  double t3300;
  double t3177;
  double t3256;
  double t3272;
  double t3275;
  double t3278;
  double t3285;
  double t3290;
  double t3301;
  double t3043;
  double t3182;
  double t3051;
  double t3195;
  double t3196;
  double t3310;
  double t3295;
  double t3397;
  double t3398;
  double t3399;
  double t3417;
  double t3422;
  double t3423;
  double t3429;
  double t3430;
  double t3401;
  double t3434;
  double t3435;
  double t3445;
  double t3431;
  double t3432;
  double t3451;
  double t3438;
  double t3439;
  double t3440;
  double t3441;
  double t3442;
  double t3443;
  double t3465;
  double t3466;
  double t3467;
  double t3468;
  double t3475;
  double t3476;
  double t3477;
  double t3478;
  double t3479;
  double t3480;
  double t3490;
  double t3500;
  double t3501;
  double t3497;
  double t3456;
  double t3495;
  double t3505;
  double t3532;
  double t3533;
  double t3534;
  double t3540;
  double t3541;
  double t3542;
  double t3544;
  double t3545;
  double t3536;
  double t3559;
  double t3564;
  double t3578;
  double t3549;
  double t3553;
  double t3580;
  double t3571;
  double t3572;
  double t3573;
  double t3574;
  double t3575;
  double t3576;
  double t3586;
  double t3587;
  double t3588;
  double t3593;
  double t3608;
  double t3609;
  double t3610;
  double t3611;
  double t3612;
  double t3613;
  double t3615;
  double t3621;
  double t3622;
  double t3618;
  double t3581;
  double t3616;
  double t3638;
  double t3653;
  double t3654;
  double t3655;
  double t3673;
  double t3674;
  double t3675;
  double t3677;
  double t3678;
  double t3661;
  double t3682;
  double t3683;
  double t3693;
  double t3679;
  double t3680;
  double t3695;
  double t3686;
  double t3687;
  double t3688;
  double t3689;
  double t3690;
  double t3691;
  double t3701;
  double t3702;
  double t3703;
  double t3704;
  double t3711;
  double t3712;
  double t3713;
  double t3714;
  double t3715;
  double t3716;
  double t3718;
  double t3724;
  double t3725;
  double t3721;
  double t3696;
  double t3719;
  double t3729;
  double t3746;
  double t3744;
  double t3745;
  double t3747;
  double t3748;
  double t3750;
  double t3751;
  double t3752;
  double t3050;
  double t3065;
  double t3069;
  double t3154;
  double t3157;
  double t3169;
  double t3172;
  double t3187;
  double t3188;
  double t3189;
  double t3755;
  double t3756;
  double t3757;
  double t3758;
  double t3297;
  double t3760;
  double t3761;
  double t3762;
  double t3763;
  double t3307;
  double t3308;
  double t3766;
  double t3767;
  double t3768;
  double t3769;
  double t3363;
  double t3375;
  double t3378;
  double t3381;
  double t3384;
  double t3389;
  double t3412;
  double t3428;
  double t3433;
  double t3436;
  double t3437;
  double t3446;
  double t3461;
  double t3462;
  double t3463;
  double t3464;
  double t3470;
  double t3471;
  double t3472;
  double t3473;
  double t3474;
  double t3789;
  double t3790;
  double t3791;
  double t3792;
  double t3498;
  double t3794;
  double t3795;
  double t3796;
  double t3797;
  double t3799;
  double t3800;
  double t3801;
  double t3802;
  double t3508;
  double t3512;
  double t3513;
  double t3539;
  double t3543;
  double t3554;
  double t3565;
  double t3570;
  double t3579;
  double t3582;
  double t3583;
  double t3584;
  double t3585;
  double t3603;
  double t3604;
  double t3605;
  double t3606;
  double t3607;
  double t3823;
  double t3824;
  double t3825;
  double t3826;
  double t3619;
  double t3828;
  double t3829;
  double t3830;
  double t3831;
  double t3833;
  double t3834;
  double t3835;
  double t3836;
  double t3641;
  double t3645;
  double t3646;
  double t3672;
  double t3676;
  double t3681;
  double t3684;
  double t3685;
  double t3694;
  double t3697;
  double t3698;
  double t3699;
  double t3700;
  double t3706;
  double t3707;
  double t3708;
  double t3709;
  double t3710;
  double t3857;
  double t3858;
  double t3859;
  double t3860;
  double t3722;
  double t3862;
  double t3863;
  double t3864;
  double t3865;
  double t3867;
  double t3868;
  double t3869;
  double t3870;
  double t3732;
  double t3736;
  double t3737;
  double t3888;
  double t3889;
  double t3890;
  double t3892;
  double t3893;
  double t3894;
  double t3897;
  double t3898;
  double t3899;
  double t3900;
  double t3902;
  double t3903;
  double t3904;
  double t3905;
  double t3908;
  double t3909;
  double t3910;
  double t3911;
  double t3931;
  double t3932;
  double t3933;
  double t3934;
  double t3936;
  double t3937;
  double t3938;
  double t3939;
  double t3941;
  double t3942;
  double t3943;
  double t3944;
  double t3965;
  double t3966;
  double t3967;
  double t3968;
  double t3970;
  double t3971;
  double t3972;
  double t3973;
  double t3975;
  double t3976;
  double t3977;
  double t3978;
  double t3999;
  double t4000;
  double t4001;
  double t4002;
  double t4004;
  double t4005;
  double t4006;
  double t4007;
  double t4009;
  double t4010;
  double t4011;
  double t4012;
  t2551 = Cos(var1[4]);
  t2625 = Cos(var1[6]);
  t2818 = -1.*t2625;
  t2851 = 1. + t2818;
  t2618 = Cos(var1[5]);
  t2956 = Sin(var1[5]);
  t2963 = Sin(var1[4]);
  t2964 = Sin(var1[6]);
  t3044 = Cos(var1[8]);
  t3046 = -1.*t3044;
  t3049 = 1. + t3046;
  t3054 = Sin(var1[8]);
  t3102 = -3.e-6*t3049;
  t3127 = 3.e-6*t3054;
  t3143 = t3102 + t3127;
  t2972 = t2551*t2618*t2625;
  t2982 = -3.e-6*t2551*t2851*t2956;
  t2987 = t2963*t2964;
  t3008 = t2972 + t2982 + t2987;
  t3058 = -1.*t3054;
  t3161 = 3.e-6*t2551*t2618*t2851;
  t3162 = -9.e-12*t2851;
  t3164 = 1. + t3162;
  t3165 = -1.*t2551*t3164*t2956;
  t3167 = -3.e-6*t2963*t2964;
  t3168 = t3161 + t3165 + t3167;
  t3300 = 3.e-6*t3049;
  t3177 = -3.e-6*t3054;
  t3256 = -1.000000000009*t2851;
  t3272 = 1. + t3256;
  t3275 = t3272*t2963;
  t3278 = -1.*t2551*t2618*t2964;
  t3285 = -3.e-6*t2551*t2956*t2964;
  t3290 = t3275 + t3278 + t3285;
  t3301 = t3300 + t3127;
  t3043 = 1.125e-12*var1[8];
  t3182 = t3102 + t3177;
  t3051 = -9.e-12*t3049;
  t3195 = -1.000000000009*t3049;
  t3196 = 1. + t3195;
  t3310 = t3300 + t3177;
  t3295 = 9.e-12*t3049;
  t3397 = Cos(var1[10]);
  t3398 = -1.*t3397;
  t3399 = 1. + t3398;
  t3417 = Cos(var1[12]);
  t3422 = -1.*t3417;
  t3423 = 1. + t3422;
  t3429 = -3.e-6*t3423;
  t3430 = Sin(var1[12]);
  t3401 = Sin(var1[10]);
  t3434 = 3.e-6*t3430;
  t3435 = t3429 + t3434;
  t3445 = 7.5e-14*var1[12];
  t3431 = -3.e-6*t3430;
  t3432 = t3429 + t3431;
  t3451 = -9.e-12*t3423;
  t3438 = 3.e-6*t3399*t2551*t2618;
  t3439 = -3.e-6*t3401*t2963;
  t3440 = -9.e-12*t3399;
  t3441 = 1. + t3440;
  t3442 = -1.*t3441*t2551*t2956;
  t3443 = t3438 + t3439 + t3442;
  t3465 = t3397*t2551*t2618;
  t3466 = t3401*t2963;
  t3467 = -3.e-6*t3399*t2551*t2956;
  t3468 = t3465 + t3466 + t3467;
  t3475 = -1.*t2551*t2618*t3401;
  t3476 = -1.000000000009*t3399;
  t3477 = 1. + t3476;
  t3478 = t3477*t2963;
  t3479 = -3.e-6*t2551*t3401*t2956;
  t3480 = t3475 + t3478 + t3479;
  t3490 = 3.e-6*t3423;
  t3500 = -1.000000000009*t3423;
  t3501 = 1. + t3500;
  t3497 = 9.e-12*t3423;
  t3456 = -1.*t3430;
  t3495 = t3490 + t3431;
  t3505 = t3490 + t3434;
  t3532 = Cos(var1[15]);
  t3533 = -1.*t3532;
  t3534 = 1. + t3533;
  t3540 = Cos(var1[17]);
  t3541 = -1.*t3540;
  t3542 = 1. + t3541;
  t3544 = -3.e-6*t3542;
  t3545 = Sin(var1[17]);
  t3536 = Sin(var1[15]);
  t3559 = 3.e-6*t3545;
  t3564 = t3544 + t3559;
  t3578 = 1.125e-12*var1[17];
  t3549 = -3.e-6*t3545;
  t3553 = t3544 + t3549;
  t3580 = -9.e-12*t3542;
  t3571 = 3.e-6*t3534*t2551*t2618;
  t3572 = -3.e-6*t3536*t2963;
  t3573 = -9.e-12*t3534;
  t3574 = 1. + t3573;
  t3575 = -1.*t3574*t2551*t2956;
  t3576 = t3571 + t3572 + t3575;
  t3586 = t3532*t2551*t2618;
  t3587 = t3536*t2963;
  t3588 = -3.e-6*t3534*t2551*t2956;
  t3593 = t3586 + t3587 + t3588;
  t3608 = -1.*t2551*t2618*t3536;
  t3609 = -1.000000000009*t3534;
  t3610 = 1. + t3609;
  t3611 = t3610*t2963;
  t3612 = -3.e-6*t2551*t3536*t2956;
  t3613 = t3608 + t3611 + t3612;
  t3615 = 3.e-6*t3542;
  t3621 = -1.000000000009*t3542;
  t3622 = 1. + t3621;
  t3618 = 9.e-12*t3542;
  t3581 = -1.*t3545;
  t3616 = t3615 + t3549;
  t3638 = t3615 + t3559;
  t3653 = Cos(var1[19]);
  t3654 = -1.*t3653;
  t3655 = 1. + t3654;
  t3673 = Cos(var1[21]);
  t3674 = -1.*t3673;
  t3675 = 1. + t3674;
  t3677 = -3.e-6*t3675;
  t3678 = Sin(var1[21]);
  t3661 = Sin(var1[19]);
  t3682 = 3.e-6*t3678;
  t3683 = t3677 + t3682;
  t3693 = 7.5e-14*var1[21];
  t3679 = -3.e-6*t3678;
  t3680 = t3677 + t3679;
  t3695 = -9.e-12*t3675;
  t3686 = 3.e-6*t3655*t2551*t2618;
  t3687 = -3.e-6*t3661*t2963;
  t3688 = -9.e-12*t3655;
  t3689 = 1. + t3688;
  t3690 = -1.*t3689*t2551*t2956;
  t3691 = t3686 + t3687 + t3690;
  t3701 = t3653*t2551*t2618;
  t3702 = t3661*t2963;
  t3703 = -3.e-6*t3655*t2551*t2956;
  t3704 = t3701 + t3702 + t3703;
  t3711 = -1.*t2551*t2618*t3661;
  t3712 = -1.000000000009*t3655;
  t3713 = 1. + t3712;
  t3714 = t3713*t2963;
  t3715 = -3.e-6*t2551*t3661*t2956;
  t3716 = t3711 + t3714 + t3715;
  t3718 = 3.e-6*t3675;
  t3724 = -1.000000000009*t3675;
  t3725 = 1. + t3724;
  t3721 = 9.e-12*t3675;
  t3696 = -1.*t3678;
  t3719 = t3718 + t3679;
  t3729 = t3718 + t3682;
  t3746 = Cos(var1[3]);
  t3744 = Sin(var1[3]);
  t3745 = t2618*t3744*t2963;
  t3747 = t3746*t2956;
  t3748 = t3745 + t3747;
  t3750 = t3746*t2618;
  t3751 = -1.*t3744*t2963*t2956;
  t3752 = t3750 + t3751;
  t3050 = 0.225000000002025*t3049;
  t3065 = t3051 + t3058;
  t3069 = 0.1*t3065;
  t3154 = -9.75e-7*t3143;
  t3157 = t3043 + t3050 + t3069 + t3154;
  t3169 = 3.75e-7*var1[8];
  t3172 = -1.755e-17*t3049;
  t3187 = 0.225*t3182;
  t3188 = 0.1*t3143;
  t3189 = t3169 + t3172 + t3187 + t3188;
  t3755 = t2625*t3748;
  t3756 = 3.e-6*t2851*t3752;
  t3757 = -1.*t2551*t3744*t2964;
  t3758 = t3755 + t3756 + t3757;
  t3297 = t3295 + t3058;
  t3760 = 3.e-6*t2851*t3748;
  t3761 = t3164*t3752;
  t3762 = 3.e-6*t2551*t3744*t2964;
  t3763 = t3760 + t3761 + t3762;
  t3307 = -1.8e-11*t3049;
  t3308 = 1. + t3307;
  t3766 = -1.*t2551*t3272*t3744;
  t3767 = -1.*t3748*t2964;
  t3768 = 3.e-6*t3752*t2964;
  t3769 = t3766 + t3767 + t3768;
  t3363 = 0.1000000000009*t3049;
  t3375 = -9.75e-7*t3182;
  t3378 = t3051 + t3054;
  t3381 = 0.225*t3378;
  t3384 = t3043 + t3363 + t3375 + t3381;
  t3389 = t3295 + t3054;
  t3412 = 2.5e-8*var1[12];
  t3428 = 6.75e-18*t3423;
  t3433 = -0.225000000003*t3432;
  t3436 = 0.100000000003*t3435;
  t3437 = t3412 + t3428 + t3433 + t3436;
  t3446 = -0.225000000005025*t3423;
  t3461 = t3451 + t3456;
  t3462 = 0.100000000003*t3461;
  t3463 = 3.75e-7*t3435;
  t3464 = t3445 + t3446 + t3462 + t3463;
  t3470 = 0.1000000000039*t3423;
  t3471 = 3.75e-7*t3432;
  t3472 = t3451 + t3430;
  t3473 = -0.225000000003*t3472;
  t3474 = t3445 + t3470 + t3471 + t3473;
  t3789 = 3.e-6*t2551*t3401*t3744;
  t3790 = 3.e-6*t3399*t3748;
  t3791 = t3441*t3752;
  t3792 = t3789 + t3790 + t3791;
  t3498 = t3497 + t3430;
  t3794 = -1.*t2551*t3401*t3744;
  t3795 = t3397*t3748;
  t3796 = 3.e-6*t3399*t3752;
  t3797 = t3794 + t3795 + t3796;
  t3799 = -1.*t3477*t2551*t3744;
  t3800 = -1.*t3401*t3748;
  t3801 = 3.e-6*t3401*t3752;
  t3802 = t3799 + t3800 + t3801;
  t3508 = t3497 + t3456;
  t3512 = -1.8e-11*t3423;
  t3513 = 1. + t3512;
  t3539 = 3.75e-7*var1[17];
  t3543 = -1.755e-17*t3542;
  t3554 = 0.225*t3553;
  t3565 = 0.1*t3564;
  t3570 = t3539 + t3543 + t3554 + t3565;
  t3579 = 0.225000000002025*t3542;
  t3582 = t3580 + t3581;
  t3583 = 0.1*t3582;
  t3584 = -9.75e-7*t3564;
  t3585 = t3578 + t3579 + t3583 + t3584;
  t3603 = 0.1000000000009*t3542;
  t3604 = -9.75e-7*t3553;
  t3605 = t3580 + t3545;
  t3606 = 0.225*t3605;
  t3607 = t3578 + t3603 + t3604 + t3606;
  t3823 = 3.e-6*t2551*t3536*t3744;
  t3824 = 3.e-6*t3534*t3748;
  t3825 = t3574*t3752;
  t3826 = t3823 + t3824 + t3825;
  t3619 = t3618 + t3545;
  t3828 = -1.*t2551*t3536*t3744;
  t3829 = t3532*t3748;
  t3830 = 3.e-6*t3534*t3752;
  t3831 = t3828 + t3829 + t3830;
  t3833 = -1.*t3610*t2551*t3744;
  t3834 = -1.*t3536*t3748;
  t3835 = 3.e-6*t3536*t3752;
  t3836 = t3833 + t3834 + t3835;
  t3641 = t3618 + t3581;
  t3645 = -1.8e-11*t3542;
  t3646 = 1. + t3645;
  t3672 = 2.5e-8*var1[21];
  t3676 = 6.75e-18*t3675;
  t3681 = -0.225000000003*t3680;
  t3684 = 0.100000000003*t3683;
  t3685 = t3672 + t3676 + t3681 + t3684;
  t3694 = -0.225000000005025*t3675;
  t3697 = t3695 + t3696;
  t3698 = 0.100000000003*t3697;
  t3699 = 3.75e-7*t3683;
  t3700 = t3693 + t3694 + t3698 + t3699;
  t3706 = 0.1000000000039*t3675;
  t3707 = 3.75e-7*t3680;
  t3708 = t3695 + t3678;
  t3709 = -0.225000000003*t3708;
  t3710 = t3693 + t3706 + t3707 + t3709;
  t3857 = 3.e-6*t2551*t3661*t3744;
  t3858 = 3.e-6*t3655*t3748;
  t3859 = t3689*t3752;
  t3860 = t3857 + t3858 + t3859;
  t3722 = t3721 + t3678;
  t3862 = -1.*t2551*t3661*t3744;
  t3863 = t3653*t3748;
  t3864 = 3.e-6*t3655*t3752;
  t3865 = t3862 + t3863 + t3864;
  t3867 = -1.*t3713*t2551*t3744;
  t3868 = -1.*t3661*t3748;
  t3869 = 3.e-6*t3661*t3752;
  t3870 = t3867 + t3868 + t3869;
  t3732 = t3721 + t3696;
  t3736 = -1.8e-11*t3675;
  t3737 = 1. + t3736;
  t3888 = -1.*t3746*t2618*t2963;
  t3889 = t3744*t2956;
  t3890 = t3888 + t3889;
  t3892 = t2618*t3744;
  t3893 = t3746*t2963*t2956;
  t3894 = t3892 + t3893;
  t3897 = t2625*t3890;
  t3898 = 3.e-6*t2851*t3894;
  t3899 = t3746*t2551*t2964;
  t3900 = t3897 + t3898 + t3899;
  t3902 = 3.e-6*t2851*t3890;
  t3903 = t3164*t3894;
  t3904 = -3.e-6*t3746*t2551*t2964;
  t3905 = t3902 + t3903 + t3904;
  t3908 = t3746*t2551*t3272;
  t3909 = -1.*t3890*t2964;
  t3910 = 3.e-6*t3894*t2964;
  t3911 = t3908 + t3909 + t3910;
  t3931 = -3.e-6*t3746*t2551*t3401;
  t3932 = 3.e-6*t3399*t3890;
  t3933 = t3441*t3894;
  t3934 = t3931 + t3932 + t3933;
  t3936 = t3746*t2551*t3401;
  t3937 = t3397*t3890;
  t3938 = 3.e-6*t3399*t3894;
  t3939 = t3936 + t3937 + t3938;
  t3941 = t3477*t3746*t2551;
  t3942 = -1.*t3401*t3890;
  t3943 = 3.e-6*t3401*t3894;
  t3944 = t3941 + t3942 + t3943;
  t3965 = -3.e-6*t3746*t2551*t3536;
  t3966 = 3.e-6*t3534*t3890;
  t3967 = t3574*t3894;
  t3968 = t3965 + t3966 + t3967;
  t3970 = t3746*t2551*t3536;
  t3971 = t3532*t3890;
  t3972 = 3.e-6*t3534*t3894;
  t3973 = t3970 + t3971 + t3972;
  t3975 = t3610*t3746*t2551;
  t3976 = -1.*t3536*t3890;
  t3977 = 3.e-6*t3536*t3894;
  t3978 = t3975 + t3976 + t3977;
  t3999 = -3.e-6*t3746*t2551*t3661;
  t4000 = 3.e-6*t3655*t3890;
  t4001 = t3689*t3894;
  t4002 = t3999 + t4000 + t4001;
  t4004 = t3746*t2551*t3661;
  t4005 = t3653*t3890;
  t4006 = 3.e-6*t3655*t3894;
  t4007 = t4004 + t4005 + t4006;
  t4009 = t3713*t3746*t2551;
  t4010 = -1.*t3661*t3890;
  t4011 = 3.e-6*t3661*t3894;
  t4012 = t4009 + t4010 + t4011;
  p_output1[0]=0.225000000002025*t2551*t2618*t2851 + 6.75000000006075e-7*t2551*t2851*t2956 - 0.225000000002025*t2963*t2964 + t3008*t3157 + t3168*t3189 + 0.225*(t3008*t3196 + t3290*t3297 + t3168*t3301) + 0.130001*(t3290*t3301 + t3168*t3308 + t3008*t3310) + t3290*t3384 - 0.14*(t3196*t3290 + t3168*t3310 + t3008*t3389) + var1[0];
  p_output1[1]=-0.225000000002025*t2551*t2618*t3399 - 6.75000000006075e-7*t2551*t2956*t3399 + 0.225000000002025*t2963*t3401 + t3437*t3443 + t3464*t3468 + t3474*t3480 - 0.14*(t3443*t3495 + t3468*t3498 + t3480*t3501) - 0.225*(t3468*t3501 + t3443*t3505 + t3480*t3508) + 0.130001*(t3468*t3495 + t3480*t3505 + t3443*t3513) + var1[0];
  p_output1[2]=0.225000000002025*t2551*t2618*t3534 + 6.75000000006075e-7*t2551*t2956*t3534 - 0.225000000002025*t2963*t3536 + t3570*t3576 + t3585*t3593 + t3607*t3613 - 0.14*(t3576*t3616 + t3593*t3619 + t3613*t3622) + 0.225*(t3593*t3622 + t3576*t3638 + t3613*t3641) - 0.129999*(t3593*t3616 + t3613*t3638 + t3576*t3646) + var1[0];
  p_output1[3]=-0.225000000002025*t2551*t2618*t3655 - 6.75000000006075e-7*t2551*t2956*t3655 + 0.225000000002025*t2963*t3661 + t3685*t3691 + t3700*t3704 + t3710*t3716 - 0.14*(t3691*t3719 + t3704*t3722 + t3716*t3725) - 0.225*(t3704*t3725 + t3691*t3729 + t3716*t3732) - 0.129999*(t3704*t3719 + t3716*t3729 + t3691*t3737) + var1[0];
  p_output1[4]=0.225000000002025*t2551*t2964*t3744 + 0.225000000002025*t2851*t3748 - 6.75000000006075e-7*t2851*t3752 + t3157*t3758 + t3189*t3763 + t3384*t3769 - 0.14*(t3389*t3758 + t3310*t3763 + t3196*t3769) + 0.225*(t3196*t3758 + t3301*t3763 + t3297*t3769) + 0.130001*(t3310*t3758 + t3308*t3763 + t3301*t3769) + var1[1];
  p_output1[5]=-0.225000000002025*t2551*t3401*t3744 - 0.225000000002025*t3399*t3748 + 6.75000000006075e-7*t3399*t3752 + t3437*t3792 + t3464*t3797 + t3474*t3802 - 0.14*(t3495*t3792 + t3498*t3797 + t3501*t3802) + 0.130001*(t3513*t3792 + t3495*t3797 + t3505*t3802) - 0.225*(t3505*t3792 + t3501*t3797 + t3508*t3802) + var1[1];
  p_output1[6]=0.225000000002025*t2551*t3536*t3744 + 0.225000000002025*t3534*t3748 - 6.75000000006075e-7*t3534*t3752 + t3570*t3826 + t3585*t3831 + t3607*t3836 - 0.14*(t3616*t3826 + t3619*t3831 + t3622*t3836) - 0.129999*(t3646*t3826 + t3616*t3831 + t3638*t3836) + 0.225*(t3638*t3826 + t3622*t3831 + t3641*t3836) + var1[1];
  p_output1[7]=-0.225000000002025*t2551*t3661*t3744 - 0.225000000002025*t3655*t3748 + 6.75000000006075e-7*t3655*t3752 + t3685*t3860 + t3700*t3865 + t3710*t3870 - 0.14*(t3719*t3860 + t3722*t3865 + t3725*t3870) - 0.129999*(t3737*t3860 + t3719*t3865 + t3729*t3870) - 0.225*(t3729*t3860 + t3725*t3865 + t3732*t3870) + var1[1];
  p_output1[8]=-0.225000000002025*t2551*t2964*t3746 + 0.225000000002025*t2851*t3890 - 6.75000000006075e-7*t2851*t3894 + t3157*t3900 + t3189*t3905 + t3384*t3911 - 0.14*(t3389*t3900 + t3310*t3905 + t3196*t3911) + 0.225*(t3196*t3900 + t3301*t3905 + t3297*t3911) + 0.130001*(t3310*t3900 + t3308*t3905 + t3301*t3911) + var1[2];
  p_output1[9]=0.225000000002025*t2551*t3401*t3746 - 0.225000000002025*t3399*t3890 + 6.75000000006075e-7*t3399*t3894 + t3437*t3934 + t3464*t3939 + t3474*t3944 - 0.14*(t3495*t3934 + t3498*t3939 + t3501*t3944) + 0.130001*(t3513*t3934 + t3495*t3939 + t3505*t3944) - 0.225*(t3505*t3934 + t3501*t3939 + t3508*t3944) + var1[2];
  p_output1[10]=-0.225000000002025*t2551*t3536*t3746 + 0.225000000002025*t3534*t3890 - 6.75000000006075e-7*t3534*t3894 + t3570*t3968 + t3585*t3973 + t3607*t3978 - 0.14*(t3616*t3968 + t3619*t3973 + t3622*t3978) - 0.129999*(t3646*t3968 + t3616*t3973 + t3638*t3978) + 0.225*(t3638*t3968 + t3622*t3973 + t3641*t3978) + var1[2];
  p_output1[11]=0.225000000002025*t2551*t3661*t3746 - 0.225000000002025*t3655*t3890 + 6.75000000006075e-7*t3655*t3894 + t3685*t4002 + t3700*t4007 + t3710*t4012 - 0.14*(t3719*t4002 + t3722*t4007 + t3725*t4012) - 0.129999*(t3737*t4002 + t3719*t4007 + t3729*t4012) - 0.225*(t3729*t4002 + t3725*t4007 + t3732*t4012) + var1[2];
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
