/*
 * Automatically Generated from Mathematica.
 * Wed 10 Apr 2019 17:15:25 GMT-04:00
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
  double t1524;
  double t1598;
  double t1791;
  double t1824;
  double t1591;
  double t1929;
  double t1936;
  double t1937;
  double t2018;
  double t2020;
  double t2023;
  double t2028;
  double t2076;
  double t2101;
  double t2117;
  double t1945;
  double t1955;
  double t1960;
  double t1981;
  double t2032;
  double t2135;
  double t2136;
  double t2138;
  double t2139;
  double t2141;
  double t2142;
  double t2274;
  double t2151;
  double t2230;
  double t2246;
  double t2249;
  double t2252;
  double t2259;
  double t2264;
  double t2275;
  double t2017;
  double t2156;
  double t2025;
  double t2169;
  double t2170;
  double t2284;
  double t2269;
  double t2371;
  double t2372;
  double t2373;
  double t2391;
  double t2396;
  double t2397;
  double t2403;
  double t2404;
  double t2375;
  double t2408;
  double t2409;
  double t2419;
  double t2405;
  double t2406;
  double t2425;
  double t2412;
  double t2413;
  double t2414;
  double t2415;
  double t2416;
  double t2417;
  double t2439;
  double t2440;
  double t2441;
  double t2442;
  double t2449;
  double t2450;
  double t2451;
  double t2452;
  double t2453;
  double t2454;
  double t2464;
  double t2474;
  double t2475;
  double t2471;
  double t2430;
  double t2469;
  double t2479;
  double t2506;
  double t2507;
  double t2508;
  double t2514;
  double t2515;
  double t2516;
  double t2518;
  double t2519;
  double t2510;
  double t2533;
  double t2538;
  double t2552;
  double t2523;
  double t2527;
  double t2554;
  double t2545;
  double t2546;
  double t2547;
  double t2548;
  double t2549;
  double t2550;
  double t2560;
  double t2561;
  double t2562;
  double t2567;
  double t2582;
  double t2583;
  double t2584;
  double t2585;
  double t2586;
  double t2587;
  double t2589;
  double t2595;
  double t2596;
  double t2592;
  double t2555;
  double t2590;
  double t2612;
  double t2627;
  double t2628;
  double t2629;
  double t2647;
  double t2648;
  double t2649;
  double t2651;
  double t2652;
  double t2635;
  double t2656;
  double t2657;
  double t2667;
  double t2653;
  double t2654;
  double t2669;
  double t2660;
  double t2661;
  double t2662;
  double t2663;
  double t2664;
  double t2665;
  double t2675;
  double t2676;
  double t2677;
  double t2678;
  double t2685;
  double t2686;
  double t2687;
  double t2688;
  double t2689;
  double t2690;
  double t2692;
  double t2698;
  double t2699;
  double t2695;
  double t2670;
  double t2693;
  double t2703;
  double t2720;
  double t2718;
  double t2719;
  double t2721;
  double t2722;
  double t2724;
  double t2725;
  double t2726;
  double t2024;
  double t2039;
  double t2043;
  double t2128;
  double t2131;
  double t2143;
  double t2146;
  double t2161;
  double t2162;
  double t2163;
  double t2729;
  double t2730;
  double t2731;
  double t2732;
  double t2271;
  double t2734;
  double t2735;
  double t2736;
  double t2737;
  double t2281;
  double t2282;
  double t2740;
  double t2741;
  double t2742;
  double t2743;
  double t2337;
  double t2349;
  double t2352;
  double t2355;
  double t2358;
  double t2363;
  double t2386;
  double t2402;
  double t2407;
  double t2410;
  double t2411;
  double t2420;
  double t2435;
  double t2436;
  double t2437;
  double t2438;
  double t2444;
  double t2445;
  double t2446;
  double t2447;
  double t2448;
  double t2763;
  double t2764;
  double t2765;
  double t2766;
  double t2472;
  double t2768;
  double t2769;
  double t2770;
  double t2771;
  double t2773;
  double t2774;
  double t2775;
  double t2776;
  double t2482;
  double t2486;
  double t2487;
  double t2513;
  double t2517;
  double t2528;
  double t2539;
  double t2544;
  double t2553;
  double t2556;
  double t2557;
  double t2558;
  double t2559;
  double t2577;
  double t2578;
  double t2579;
  double t2580;
  double t2581;
  double t2797;
  double t2798;
  double t2799;
  double t2800;
  double t2593;
  double t2802;
  double t2803;
  double t2804;
  double t2805;
  double t2807;
  double t2808;
  double t2809;
  double t2810;
  double t2615;
  double t2619;
  double t2620;
  double t2646;
  double t2650;
  double t2655;
  double t2658;
  double t2659;
  double t2668;
  double t2671;
  double t2672;
  double t2673;
  double t2674;
  double t2680;
  double t2681;
  double t2682;
  double t2683;
  double t2684;
  double t2831;
  double t2832;
  double t2833;
  double t2834;
  double t2696;
  double t2836;
  double t2837;
  double t2838;
  double t2839;
  double t2841;
  double t2842;
  double t2843;
  double t2844;
  double t2706;
  double t2710;
  double t2711;
  double t2862;
  double t2863;
  double t2864;
  double t2866;
  double t2867;
  double t2868;
  double t2871;
  double t2872;
  double t2873;
  double t2874;
  double t2876;
  double t2877;
  double t2878;
  double t2879;
  double t2882;
  double t2883;
  double t2884;
  double t2885;
  double t2905;
  double t2906;
  double t2907;
  double t2908;
  double t2910;
  double t2911;
  double t2912;
  double t2913;
  double t2915;
  double t2916;
  double t2917;
  double t2918;
  double t2939;
  double t2940;
  double t2941;
  double t2942;
  double t2944;
  double t2945;
  double t2946;
  double t2947;
  double t2949;
  double t2950;
  double t2951;
  double t2952;
  double t2973;
  double t2974;
  double t2975;
  double t2976;
  double t2978;
  double t2979;
  double t2980;
  double t2981;
  double t2983;
  double t2984;
  double t2985;
  double t2986;
  t1524 = Cos(var1[4]);
  t1598 = Cos(var1[6]);
  t1791 = -1.*t1598;
  t1824 = 1. + t1791;
  t1591 = Cos(var1[5]);
  t1929 = Sin(var1[5]);
  t1936 = Sin(var1[4]);
  t1937 = Sin(var1[6]);
  t2018 = Cos(var1[8]);
  t2020 = -1.*t2018;
  t2023 = 1. + t2020;
  t2028 = Sin(var1[8]);
  t2076 = -3.e-6*t2023;
  t2101 = 3.e-6*t2028;
  t2117 = t2076 + t2101;
  t1945 = t1524*t1591*t1598;
  t1955 = -3.e-6*t1524*t1824*t1929;
  t1960 = t1936*t1937;
  t1981 = t1945 + t1955 + t1960;
  t2032 = -1.*t2028;
  t2135 = 3.e-6*t1524*t1591*t1824;
  t2136 = -9.e-12*t1824;
  t2138 = 1. + t2136;
  t2139 = -1.*t1524*t2138*t1929;
  t2141 = -3.e-6*t1936*t1937;
  t2142 = t2135 + t2139 + t2141;
  t2274 = 3.e-6*t2023;
  t2151 = -3.e-6*t2028;
  t2230 = -1.000000000009*t1824;
  t2246 = 1. + t2230;
  t2249 = t2246*t1936;
  t2252 = -1.*t1524*t1591*t1937;
  t2259 = -3.e-6*t1524*t1929*t1937;
  t2264 = t2249 + t2252 + t2259;
  t2275 = t2274 + t2101;
  t2017 = 1.125e-12*var1[8];
  t2156 = t2076 + t2151;
  t2025 = -9.e-12*t2023;
  t2169 = -1.000000000009*t2023;
  t2170 = 1. + t2169;
  t2284 = t2274 + t2151;
  t2269 = 9.e-12*t2023;
  t2371 = Cos(var1[10]);
  t2372 = -1.*t2371;
  t2373 = 1. + t2372;
  t2391 = Cos(var1[12]);
  t2396 = -1.*t2391;
  t2397 = 1. + t2396;
  t2403 = -3.e-6*t2397;
  t2404 = Sin(var1[12]);
  t2375 = Sin(var1[10]);
  t2408 = 3.e-6*t2404;
  t2409 = t2403 + t2408;
  t2419 = 7.5e-14*var1[12];
  t2405 = -3.e-6*t2404;
  t2406 = t2403 + t2405;
  t2425 = -9.e-12*t2397;
  t2412 = 3.e-6*t2373*t1524*t1591;
  t2413 = -3.e-6*t2375*t1936;
  t2414 = -9.e-12*t2373;
  t2415 = 1. + t2414;
  t2416 = -1.*t2415*t1524*t1929;
  t2417 = t2412 + t2413 + t2416;
  t2439 = t2371*t1524*t1591;
  t2440 = t2375*t1936;
  t2441 = -3.e-6*t2373*t1524*t1929;
  t2442 = t2439 + t2440 + t2441;
  t2449 = -1.*t1524*t1591*t2375;
  t2450 = -1.000000000009*t2373;
  t2451 = 1. + t2450;
  t2452 = t2451*t1936;
  t2453 = -3.e-6*t1524*t2375*t1929;
  t2454 = t2449 + t2452 + t2453;
  t2464 = 3.e-6*t2397;
  t2474 = -1.000000000009*t2397;
  t2475 = 1. + t2474;
  t2471 = 9.e-12*t2397;
  t2430 = -1.*t2404;
  t2469 = t2464 + t2405;
  t2479 = t2464 + t2408;
  t2506 = Cos(var1[15]);
  t2507 = -1.*t2506;
  t2508 = 1. + t2507;
  t2514 = Cos(var1[17]);
  t2515 = -1.*t2514;
  t2516 = 1. + t2515;
  t2518 = -3.e-6*t2516;
  t2519 = Sin(var1[17]);
  t2510 = Sin(var1[15]);
  t2533 = 3.e-6*t2519;
  t2538 = t2518 + t2533;
  t2552 = 1.125e-12*var1[17];
  t2523 = -3.e-6*t2519;
  t2527 = t2518 + t2523;
  t2554 = -9.e-12*t2516;
  t2545 = 3.e-6*t2508*t1524*t1591;
  t2546 = -3.e-6*t2510*t1936;
  t2547 = -9.e-12*t2508;
  t2548 = 1. + t2547;
  t2549 = -1.*t2548*t1524*t1929;
  t2550 = t2545 + t2546 + t2549;
  t2560 = t2506*t1524*t1591;
  t2561 = t2510*t1936;
  t2562 = -3.e-6*t2508*t1524*t1929;
  t2567 = t2560 + t2561 + t2562;
  t2582 = -1.*t1524*t1591*t2510;
  t2583 = -1.000000000009*t2508;
  t2584 = 1. + t2583;
  t2585 = t2584*t1936;
  t2586 = -3.e-6*t1524*t2510*t1929;
  t2587 = t2582 + t2585 + t2586;
  t2589 = 3.e-6*t2516;
  t2595 = -1.000000000009*t2516;
  t2596 = 1. + t2595;
  t2592 = 9.e-12*t2516;
  t2555 = -1.*t2519;
  t2590 = t2589 + t2523;
  t2612 = t2589 + t2533;
  t2627 = Cos(var1[19]);
  t2628 = -1.*t2627;
  t2629 = 1. + t2628;
  t2647 = Cos(var1[21]);
  t2648 = -1.*t2647;
  t2649 = 1. + t2648;
  t2651 = -3.e-6*t2649;
  t2652 = Sin(var1[21]);
  t2635 = Sin(var1[19]);
  t2656 = 3.e-6*t2652;
  t2657 = t2651 + t2656;
  t2667 = 7.5e-14*var1[21];
  t2653 = -3.e-6*t2652;
  t2654 = t2651 + t2653;
  t2669 = -9.e-12*t2649;
  t2660 = 3.e-6*t2629*t1524*t1591;
  t2661 = -3.e-6*t2635*t1936;
  t2662 = -9.e-12*t2629;
  t2663 = 1. + t2662;
  t2664 = -1.*t2663*t1524*t1929;
  t2665 = t2660 + t2661 + t2664;
  t2675 = t2627*t1524*t1591;
  t2676 = t2635*t1936;
  t2677 = -3.e-6*t2629*t1524*t1929;
  t2678 = t2675 + t2676 + t2677;
  t2685 = -1.*t1524*t1591*t2635;
  t2686 = -1.000000000009*t2629;
  t2687 = 1. + t2686;
  t2688 = t2687*t1936;
  t2689 = -3.e-6*t1524*t2635*t1929;
  t2690 = t2685 + t2688 + t2689;
  t2692 = 3.e-6*t2649;
  t2698 = -1.000000000009*t2649;
  t2699 = 1. + t2698;
  t2695 = 9.e-12*t2649;
  t2670 = -1.*t2652;
  t2693 = t2692 + t2653;
  t2703 = t2692 + t2656;
  t2720 = Cos(var1[3]);
  t2718 = Sin(var1[3]);
  t2719 = t1591*t2718*t1936;
  t2721 = t2720*t1929;
  t2722 = t2719 + t2721;
  t2724 = t2720*t1591;
  t2725 = -1.*t2718*t1936*t1929;
  t2726 = t2724 + t2725;
  t2024 = 0.225000000002025*t2023;
  t2039 = t2025 + t2032;
  t2043 = 0.1*t2039;
  t2128 = -9.75e-7*t2117;
  t2131 = t2017 + t2024 + t2043 + t2128;
  t2143 = 3.75e-7*var1[8];
  t2146 = -1.755e-17*t2023;
  t2161 = 0.225*t2156;
  t2162 = 0.1*t2117;
  t2163 = t2143 + t2146 + t2161 + t2162;
  t2729 = t1598*t2722;
  t2730 = 3.e-6*t1824*t2726;
  t2731 = -1.*t1524*t2718*t1937;
  t2732 = t2729 + t2730 + t2731;
  t2271 = t2269 + t2032;
  t2734 = 3.e-6*t1824*t2722;
  t2735 = t2138*t2726;
  t2736 = 3.e-6*t1524*t2718*t1937;
  t2737 = t2734 + t2735 + t2736;
  t2281 = -1.8e-11*t2023;
  t2282 = 1. + t2281;
  t2740 = -1.*t1524*t2246*t2718;
  t2741 = -1.*t2722*t1937;
  t2742 = 3.e-6*t2726*t1937;
  t2743 = t2740 + t2741 + t2742;
  t2337 = 0.1000000000009*t2023;
  t2349 = -9.75e-7*t2156;
  t2352 = t2025 + t2028;
  t2355 = 0.225*t2352;
  t2358 = t2017 + t2337 + t2349 + t2355;
  t2363 = t2269 + t2028;
  t2386 = 2.5e-8*var1[12];
  t2402 = 6.75e-18*t2397;
  t2407 = -0.225000000003*t2406;
  t2410 = 0.100000000003*t2409;
  t2411 = t2386 + t2402 + t2407 + t2410;
  t2420 = -0.225000000005025*t2397;
  t2435 = t2425 + t2430;
  t2436 = 0.100000000003*t2435;
  t2437 = 3.75e-7*t2409;
  t2438 = t2419 + t2420 + t2436 + t2437;
  t2444 = 0.1000000000039*t2397;
  t2445 = 3.75e-7*t2406;
  t2446 = t2425 + t2404;
  t2447 = -0.225000000003*t2446;
  t2448 = t2419 + t2444 + t2445 + t2447;
  t2763 = 3.e-6*t1524*t2375*t2718;
  t2764 = 3.e-6*t2373*t2722;
  t2765 = t2415*t2726;
  t2766 = t2763 + t2764 + t2765;
  t2472 = t2471 + t2404;
  t2768 = -1.*t1524*t2375*t2718;
  t2769 = t2371*t2722;
  t2770 = 3.e-6*t2373*t2726;
  t2771 = t2768 + t2769 + t2770;
  t2773 = -1.*t2451*t1524*t2718;
  t2774 = -1.*t2375*t2722;
  t2775 = 3.e-6*t2375*t2726;
  t2776 = t2773 + t2774 + t2775;
  t2482 = t2471 + t2430;
  t2486 = -1.8e-11*t2397;
  t2487 = 1. + t2486;
  t2513 = 3.75e-7*var1[17];
  t2517 = -1.755e-17*t2516;
  t2528 = 0.225*t2527;
  t2539 = 0.1*t2538;
  t2544 = t2513 + t2517 + t2528 + t2539;
  t2553 = 0.225000000002025*t2516;
  t2556 = t2554 + t2555;
  t2557 = 0.1*t2556;
  t2558 = -9.75e-7*t2538;
  t2559 = t2552 + t2553 + t2557 + t2558;
  t2577 = 0.1000000000009*t2516;
  t2578 = -9.75e-7*t2527;
  t2579 = t2554 + t2519;
  t2580 = 0.225*t2579;
  t2581 = t2552 + t2577 + t2578 + t2580;
  t2797 = 3.e-6*t1524*t2510*t2718;
  t2798 = 3.e-6*t2508*t2722;
  t2799 = t2548*t2726;
  t2800 = t2797 + t2798 + t2799;
  t2593 = t2592 + t2519;
  t2802 = -1.*t1524*t2510*t2718;
  t2803 = t2506*t2722;
  t2804 = 3.e-6*t2508*t2726;
  t2805 = t2802 + t2803 + t2804;
  t2807 = -1.*t2584*t1524*t2718;
  t2808 = -1.*t2510*t2722;
  t2809 = 3.e-6*t2510*t2726;
  t2810 = t2807 + t2808 + t2809;
  t2615 = t2592 + t2555;
  t2619 = -1.8e-11*t2516;
  t2620 = 1. + t2619;
  t2646 = 2.5e-8*var1[21];
  t2650 = 6.75e-18*t2649;
  t2655 = -0.225000000003*t2654;
  t2658 = 0.100000000003*t2657;
  t2659 = t2646 + t2650 + t2655 + t2658;
  t2668 = -0.225000000005025*t2649;
  t2671 = t2669 + t2670;
  t2672 = 0.100000000003*t2671;
  t2673 = 3.75e-7*t2657;
  t2674 = t2667 + t2668 + t2672 + t2673;
  t2680 = 0.1000000000039*t2649;
  t2681 = 3.75e-7*t2654;
  t2682 = t2669 + t2652;
  t2683 = -0.225000000003*t2682;
  t2684 = t2667 + t2680 + t2681 + t2683;
  t2831 = 3.e-6*t1524*t2635*t2718;
  t2832 = 3.e-6*t2629*t2722;
  t2833 = t2663*t2726;
  t2834 = t2831 + t2832 + t2833;
  t2696 = t2695 + t2652;
  t2836 = -1.*t1524*t2635*t2718;
  t2837 = t2627*t2722;
  t2838 = 3.e-6*t2629*t2726;
  t2839 = t2836 + t2837 + t2838;
  t2841 = -1.*t2687*t1524*t2718;
  t2842 = -1.*t2635*t2722;
  t2843 = 3.e-6*t2635*t2726;
  t2844 = t2841 + t2842 + t2843;
  t2706 = t2695 + t2670;
  t2710 = -1.8e-11*t2649;
  t2711 = 1. + t2710;
  t2862 = -1.*t2720*t1591*t1936;
  t2863 = t2718*t1929;
  t2864 = t2862 + t2863;
  t2866 = t1591*t2718;
  t2867 = t2720*t1936*t1929;
  t2868 = t2866 + t2867;
  t2871 = t1598*t2864;
  t2872 = 3.e-6*t1824*t2868;
  t2873 = t2720*t1524*t1937;
  t2874 = t2871 + t2872 + t2873;
  t2876 = 3.e-6*t1824*t2864;
  t2877 = t2138*t2868;
  t2878 = -3.e-6*t2720*t1524*t1937;
  t2879 = t2876 + t2877 + t2878;
  t2882 = t2720*t1524*t2246;
  t2883 = -1.*t2864*t1937;
  t2884 = 3.e-6*t2868*t1937;
  t2885 = t2882 + t2883 + t2884;
  t2905 = -3.e-6*t2720*t1524*t2375;
  t2906 = 3.e-6*t2373*t2864;
  t2907 = t2415*t2868;
  t2908 = t2905 + t2906 + t2907;
  t2910 = t2720*t1524*t2375;
  t2911 = t2371*t2864;
  t2912 = 3.e-6*t2373*t2868;
  t2913 = t2910 + t2911 + t2912;
  t2915 = t2451*t2720*t1524;
  t2916 = -1.*t2375*t2864;
  t2917 = 3.e-6*t2375*t2868;
  t2918 = t2915 + t2916 + t2917;
  t2939 = -3.e-6*t2720*t1524*t2510;
  t2940 = 3.e-6*t2508*t2864;
  t2941 = t2548*t2868;
  t2942 = t2939 + t2940 + t2941;
  t2944 = t2720*t1524*t2510;
  t2945 = t2506*t2864;
  t2946 = 3.e-6*t2508*t2868;
  t2947 = t2944 + t2945 + t2946;
  t2949 = t2584*t2720*t1524;
  t2950 = -1.*t2510*t2864;
  t2951 = 3.e-6*t2510*t2868;
  t2952 = t2949 + t2950 + t2951;
  t2973 = -3.e-6*t2720*t1524*t2635;
  t2974 = 3.e-6*t2629*t2864;
  t2975 = t2663*t2868;
  t2976 = t2973 + t2974 + t2975;
  t2978 = t2720*t1524*t2635;
  t2979 = t2627*t2864;
  t2980 = 3.e-6*t2629*t2868;
  t2981 = t2978 + t2979 + t2980;
  t2983 = t2687*t2720*t1524;
  t2984 = -1.*t2635*t2864;
  t2985 = 3.e-6*t2635*t2868;
  t2986 = t2983 + t2984 + t2985;
  p_output1[0]=0.225000000002025*t1524*t1591*t1824 + 6.75000000006075e-7*t1524*t1824*t1929 - 0.225000000002025*t1936*t1937 + t1981*t2131 + t2142*t2163 + 0.225*(t1981*t2170 + t2264*t2271 + t2142*t2275) + 0.130001*(t2264*t2275 + t2142*t2282 + t1981*t2284) + t2264*t2358 - 0.14*(t2170*t2264 + t2142*t2284 + t1981*t2363) + var1[0];
  p_output1[1]=-0.225000000002025*t1524*t1591*t2373 - 6.75000000006075e-7*t1524*t1929*t2373 + 0.225000000002025*t1936*t2375 + t2411*t2417 + t2438*t2442 + t2448*t2454 - 0.14*(t2417*t2469 + t2442*t2472 + t2454*t2475) - 0.225*(t2442*t2475 + t2417*t2479 + t2454*t2482) + 0.130001*(t2442*t2469 + t2454*t2479 + t2417*t2487) + var1[0];
  p_output1[2]=0.225000000002025*t1524*t1591*t2508 + 6.75000000006075e-7*t1524*t1929*t2508 - 0.225000000002025*t1936*t2510 + t2544*t2550 + t2559*t2567 + t2581*t2587 - 0.14*(t2550*t2590 + t2567*t2593 + t2587*t2596) + 0.225*(t2567*t2596 + t2550*t2612 + t2587*t2615) - 0.129999*(t2567*t2590 + t2587*t2612 + t2550*t2620) + var1[0];
  p_output1[3]=-0.225000000002025*t1524*t1591*t2629 - 6.75000000006075e-7*t1524*t1929*t2629 + 0.225000000002025*t1936*t2635 + t2659*t2665 + t2674*t2678 + t2684*t2690 - 0.14*(t2665*t2693 + t2678*t2696 + t2690*t2699) - 0.225*(t2678*t2699 + t2665*t2703 + t2690*t2706) - 0.129999*(t2678*t2693 + t2690*t2703 + t2665*t2711) + var1[0];
  p_output1[4]=0.225000000002025*t1524*t1937*t2718 + 0.225000000002025*t1824*t2722 - 6.75000000006075e-7*t1824*t2726 + t2131*t2732 + t2163*t2737 + t2358*t2743 - 0.14*(t2363*t2732 + t2284*t2737 + t2170*t2743) + 0.225*(t2170*t2732 + t2275*t2737 + t2271*t2743) + 0.130001*(t2284*t2732 + t2282*t2737 + t2275*t2743) + var1[1];
  p_output1[5]=-0.225000000002025*t1524*t2375*t2718 - 0.225000000002025*t2373*t2722 + 6.75000000006075e-7*t2373*t2726 + t2411*t2766 + t2438*t2771 + t2448*t2776 - 0.14*(t2469*t2766 + t2472*t2771 + t2475*t2776) + 0.130001*(t2487*t2766 + t2469*t2771 + t2479*t2776) - 0.225*(t2479*t2766 + t2475*t2771 + t2482*t2776) + var1[1];
  p_output1[6]=0.225000000002025*t1524*t2510*t2718 + 0.225000000002025*t2508*t2722 - 6.75000000006075e-7*t2508*t2726 + t2544*t2800 + t2559*t2805 + t2581*t2810 - 0.14*(t2590*t2800 + t2593*t2805 + t2596*t2810) - 0.129999*(t2620*t2800 + t2590*t2805 + t2612*t2810) + 0.225*(t2612*t2800 + t2596*t2805 + t2615*t2810) + var1[1];
  p_output1[7]=-0.225000000002025*t1524*t2635*t2718 - 0.225000000002025*t2629*t2722 + 6.75000000006075e-7*t2629*t2726 + t2659*t2834 + t2674*t2839 + t2684*t2844 - 0.14*(t2693*t2834 + t2696*t2839 + t2699*t2844) - 0.129999*(t2711*t2834 + t2693*t2839 + t2703*t2844) - 0.225*(t2703*t2834 + t2699*t2839 + t2706*t2844) + var1[1];
  p_output1[8]=-0.225000000002025*t1524*t1937*t2720 + 0.225000000002025*t1824*t2864 - 6.75000000006075e-7*t1824*t2868 + t2131*t2874 + t2163*t2879 + t2358*t2885 - 0.14*(t2363*t2874 + t2284*t2879 + t2170*t2885) + 0.225*(t2170*t2874 + t2275*t2879 + t2271*t2885) + 0.130001*(t2284*t2874 + t2282*t2879 + t2275*t2885) + var1[2];
  p_output1[9]=0.225000000002025*t1524*t2375*t2720 - 0.225000000002025*t2373*t2864 + 6.75000000006075e-7*t2373*t2868 + t2411*t2908 + t2438*t2913 + t2448*t2918 - 0.14*(t2469*t2908 + t2472*t2913 + t2475*t2918) + 0.130001*(t2487*t2908 + t2469*t2913 + t2479*t2918) - 0.225*(t2479*t2908 + t2475*t2913 + t2482*t2918) + var1[2];
  p_output1[10]=-0.225000000002025*t1524*t2510*t2720 + 0.225000000002025*t2508*t2864 - 6.75000000006075e-7*t2508*t2868 + t2544*t2942 + t2559*t2947 + t2581*t2952 - 0.14*(t2590*t2942 + t2593*t2947 + t2596*t2952) - 0.129999*(t2620*t2942 + t2590*t2947 + t2612*t2952) + 0.225*(t2612*t2942 + t2596*t2947 + t2615*t2952) + var1[2];
  p_output1[11]=0.225000000002025*t1524*t2635*t2720 - 0.225000000002025*t2629*t2864 + 6.75000000006075e-7*t2629*t2868 + t2659*t2976 + t2674*t2981 + t2684*t2986 - 0.14*(t2693*t2976 + t2696*t2981 + t2699*t2986) - 0.129999*(t2711*t2976 + t2693*t2981 + t2703*t2986) - 0.225*(t2703*t2976 + t2699*t2981 + t2706*t2986) + var1[2];
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
