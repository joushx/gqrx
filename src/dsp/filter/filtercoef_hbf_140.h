/*
 * Half-band filter coefficients with 140 dB stop band attenuation.
 *
 * Copyright 2010-2011 Moe Wheatley
 * Copyright 2015 Alexandru Csete
 * All rights reserved.
 *
 * This Software is released under the Simplified BSD License.
 *
 */
#ifndef FILTERCOEF_HBF_140_H
#define FILTERCOEF_HBF_140_H


// normalized 140 dB alias free bandwidths for the filters
#define HBF_140_7_BW        0.013
#define HBF_140_11_BW       0.050
#define HBF_140_15_BW       0.100
#define HBF_140_19_BW       0.143
#define HBF_140_23_BW       0.182
#define HBF_140_27_BW       0.216
#define HBF_140_31_BW       0.244
#define HBF_140_35_BW       0.268
#define HBF_140_39_BW       0.288
#define HBF_140_43_BW       0.306
#define HBF_140_47_BW       0.320
#define HBF_140_51_BW       0.333
#define HBF_140_87_BW       0.400


/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 7
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.013
 * Passband ripple   : +/- 5e-7 dB
 * Stop band         : -140 dB
 */
#define HBF_140_7_LENGTH     7
const float HBF_140_7[HBF_140_7_LENGTH] =
{
    -0.0312891214414,
    0.0,
    0.2812890888126,
    0.5,
    0.2812890888126,
    0.0,
    -0.0312891214414
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 11
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.05
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_11_LENGTH   11
const float HBF_140_11[HBF_140_11_LENGTH] =
{
   0.0060431029837374152,
   0.0,
   -0.049372515458761493,
   0.0,
   0.29332944952052842,
   0.5,
   0.29332944952052842,
   0.0,
   -0.049372515458761493,
   0.0,
   0.0060431029837374152,
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 15
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.1
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_15_LENGTH   15
const float HBF_140_15[HBF_140_15_LENGTH] =
{
    -0.001442203300285281,
    0.0,
    0.013017512802724852,
    0.0,
    -0.061653278604903369,
    0.0,
    0.30007792316024057,
    0.5,
    0.30007792316024057,
    0.0,
    -0.061653278604903369,
    0.0,
    0.013017512802724852,
    0.0,
    -0.001442203300285281
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 19
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.143
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_19_LENGTH   19
const float HBF_140_19[HBF_140_19_LENGTH] =
{
    0.00042366527106480427,
    0.0,
    -0.0040717333369021894,
    0.0,
    0.019895653881950692,
    0.0,
    -0.070740034412329067,
    0.0,
    0.30449249772844139,
    0.5,
    0.30449249772844139,
    0.0,
    -0.070740034412329067,
    0.0,
    0.019895653881950692,
    0.0,
    -0.0040717333369021894,
    0.0,
    0.00042366527106480427
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 23
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.182
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_23_LENGTH    23
const float HBF_140_23[HBF_140_23_LENGTH] =
{
    -0.00014987651418332164,
    0.0,
    0.0014748633283609852,
    0.0,
    -0.0074416944990005314,
    0.0,
    0.026163522731980929,
    0.0,
    -0.077593699116544707,
    0.0,
    0.30754683719791986,
    0.5,
    0.30754683719791986,
    0.0,
    -0.077593699116544707,
    0.0,
    0.026163522731980929,
    0.0,
    -0.0074416944990005314,
    0.0,
    0.0014748633283609852,
    0.0,
    -0.00014987651418332164
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 27
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.216
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_27_LENGTH    27
const float HBF_140_27[HBF_140_27_LENGTH] =
{
    0.000063730426952664685,
    0.0,
    -0.00061985193978569082,
    0.0,
    0.0031512504783365756,
    0.0,
    -0.011173151342856621,
    0.0,
    0.03171888754393197,
    0.0,
    -0.082917863582770729,
    0.0,
    0.3097770473566307,
    0.5,
    0.3097770473566307,
    0.0,
    -0.082917863582770729,
    0.0,
    0.03171888754393197,
    0.0,
    -0.011173151342856621,
    0.0,
    0.0031512504783365756,
    0.0,
    -0.00061985193978569082,
    0.0,
    0.000063730426952664685
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 31
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.244
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_31_LENGTH    31
const float HBF_140_31[HBF_140_31_LENGTH] =
{
    -0.000030957335326552226,
    0.0,
    0.00029271992847303054,
    0.0,
    -0.0014770381124258423,
    0.0,
    0.0052539088990950535,
    0.0,
    -0.014856378748476874,
    0.0,
    0.036406651919555999,
    0.0,
    -0.08699862567952929,
    0.0,
    0.31140967076042625,
    0.5,
    0.31140967076042625,
    0.0,
    -0.08699862567952929,
    0.0,
    0.036406651919555999,
    0.0,
    -0.014856378748476874,
    0.0,
    0.0052539088990950535,
    0.0,
    -0.0014770381124258423,
    0.0,
    0.00029271992847303054,
    0.0,
    -0.000030957335326552226
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 35
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.268
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_35_LENGTH    35
const float HBF_140_35[HBF_140_35_LENGTH] =
{
    0.000017017718072971716,
    0.0,
    -0.00015425042851962818,
    0.0,
    0.00076219685751140838,
    0.0,
    -0.002691614694785393,
    0.0,
    0.0075927497927344764,
    0.0,
    -0.018325727896057686,
    0.0,
    0.040351004914363969,
    0.0,
    -0.090198224668969554,
    0.0,
    0.31264689763504327,
    0.5,
    0.31264689763504327,
    0.0,
    -0.090198224668969554,
    0.0,
    0.040351004914363969,
    0.0,
    -0.018325727896057686,
    0.0,
    0.0075927497927344764,
    0.0,
    -0.002691614694785393,
    0.0,
    0.00076219685751140838,
    0.0,
    -0.00015425042851962818,
    0.0,
    0.000017017718072971716
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 39
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.288
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_39_LENGTH    39
const float HBF_140_39[HBF_140_39_LENGTH] =
{
    -0.000010175082832074367,
    0.0,
    0.000088036416015024345,
    0.0,
    -0.00042370835558387595,
    0.0,
    0.0014772557414459019,
    0.0,
    -0.0041468438954260153,
    0.0,
    0.0099579126901608011,
    0.0,
    -0.021433527104289002,
    0.0,
    0.043598963493432855,
    0.0,
    -0.092695953625928404,
    0.0,
    0.31358799113382152,
    0.5,
    0.31358799113382152,
    0,
    -0.092695953625928404,
    0.0,
    0.043598963493432855,
    0.0,
    -0.021433527104289002,
    0.0,
    0.0099579126901608011,
    0.0,
    -0.0041468438954260153,
    0.0,
    0.0014772557414459019,
    0.0,
    -0.00042370835558387595,
    0.0,
    0.000088036416015024345,
    0.0,
    -0.000010175082832074367
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 43
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.306
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -139 dB
 */
#define HBF_140_43_LENGTH    43
const float HBF_140_43[HBF_140_43_LENGTH] =
{
    0.0000067666739082756387,
    0.0,
    -0.000055275221547958285,
    0.0,
    0.00025654074579418561,
    0.0,
    -0.0008748125689163153,
    0.0,
    0.0024249876017061502,
    0.0,
    -0.0057775190656021748,
    0.0,
    0.012299834239523121,
    0.0,
    -0.024244050662087069,
    0.0,
    0.046354303503099069,
    0.0,
    -0.094729903598633314,
    0.0,
    0.31433918020123208,
    0.5,
    0.31433918020123208,
    0.0,
    -0.094729903598633314,
    0.0,
    0.046354303503099069,
    0.0,
    -0.024244050662087069,
    0.0,
    0.012299834239523121,
    0.0,
    -0.0057775190656021748,
    0.0,
    0.0024249876017061502,
    0.0,
    -0.0008748125689163153,
    0.0,
    0.00025654074579418561,
    0.0,
    -0.000055275221547958285,
    0.0,
    0.0000067666739082756387
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 47
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.32
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -140 dB
 */
#define HBF_140_47_LENGTH    47
const float HBF_140_47[HBF_140_47_LENGTH] =
{
    -0.0000045298314172004251,
    0.0,
    0.000035333704512843228,
    0.0,
    -0.00015934776420643447,
    0.0,
    0.0005340788063118928,
    0.0,
    -0.0014667949695500761,
    0.0,
    0.0034792089350833247,
    0.0,
    -0.0073794356720317733,
    0.0,
    0.014393786384683398,
    0.0,
    -0.026586603160193314,
    0.0,
    0.048538673667907428,
    0.0,
    -0.09629115286535718,
    0.0,
    0.31490673428547367,
    0.5,
    0.31490673428547367,
    0.0,
    -0.09629115286535718,
    0.0,
    0.048538673667907428,
    0.0,
    -0.026586603160193314,
    0.0,
    0.014393786384683398,
    0.0,
    -0.0073794356720317733,
    0.0,
    0.0034792089350833247,
    0.0,
    -0.0014667949695500761,
    0.0,
    0.0005340788063118928,
    0.0,
    -0.00015934776420643447,
    0.0,
    0.000035333704512843228,
    0.0,
    -0.0000045298314172004251
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 51
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.333
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -139 dB
 */
#define HBF_140_51_LENGTH    51
const float HBF_140_51[HBF_140_51_LENGTH] =
{
    0.0000033359253688981639,
    0.0,
    -0.000024584155158361803,
    0.0,
    0.00010677777483317733,
    0.0,
    -0.00034890723143173914,
    0.0,
    0.00094239127078189603,
    0.0,
    -0.0022118302078923137,
    0.0,
    0.0046575030752162277,
    0.0,
    -0.0090130973415220566,
    0.0,
    0.016383673864361164,
    0.0,
    -0.028697281101743237,
    0.0,
    0.05043292242400841,
    0.0,
    -0.097611898315791965,
    0.0,
    0.31538104435015801,
    0.5,
    0.31538104435015801,
    0.0,
    -0.097611898315791965,
    0.0,
    0.05043292242400841,
    0.0,
    -0.028697281101743237,
    0.0,
    0.016383673864361164,
    0.0,
    -0.0090130973415220566,
    0.0,
    0.0046575030752162277,
    0.0,
    -0.0022118302078923137,
    0.0,
    0.00094239127078189603,
    0.0,
    -0.00034890723143173914,
    0.0,
    0.00010677777483317733,
    0.0,
    -0.000024584155158361803,
    0.0,
    0.0000033359253688981639
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 87
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.4
 * Passband ripple   : +/- 1e-6 dB
 * Stop band         : -139 dB
 */
#define HBF_140_87_LENGTH    87
const float HBF_140_87[HBF_140_87_LENGTH] = {
    -6.662792202e-007,
    0.0,
    3.182105957e-006,
    0.0,
    -1.036207959e-005,
    0.0,
    2.745109305e-005,
    0.0,
    -6.34655371e-005,
    0.0,
    0.0001327739883,
    0.0,
    -0.0002569012286,
    0.0,
    0.0004664516309,
    0.0,
    -0.0008030554163,
    0.0,
    0.001321306569,
    0.0,
    -0.002090826631,
    0.0,
    0.003198919585,
    0.0,
    -0.004754905123,
    0.0,
    0.006898404565,
    0.0,
    -0.009816322476,
    0.0,
    0.01377890632,
    0.0,
    -0.01921991631,
    0.0,
    0.02692959271,
    0.0,
    -0.03858491778,
    0.0,
    0.05855843052,
    0.0,
    -0.1029648632,
    0.0,
    0.3172507286,
    0.5,
    0.3172507286,
    0.0,
    -0.1029648632,
    0.0,
    0.05855843052,
    0.0,
    -0.03858491778,
    0.0,
    0.02692959271,
    0.0,
    -0.01921991631,
    0.0,
    0.01377890632,
    0.0,
    -0.009816322476,
    0.0,
    0.006898404565,
    0.0,
    -0.004754905123,
    0.0,
    0.003198919585,
    0.0,
    -0.002090826631,
    0.0,
    0.001321306569,
    0.0,
    -0.0008030554163,
    0.0,
    0.0004664516309,
    0.0,
    -0.0002569012286,
    0.0,
    0.0001327739883,
    0.0,
    -6.34655371e-005,
    0.0,
    2.745109305e-005,
    0.0,
    -1.036207959e-005,
    0.0,
    3.182105957e-006,
    0.0,
    -6.662792202e-007
};

#endif
