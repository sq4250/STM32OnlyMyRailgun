#include "tim.h"
#include <cmath>

template <int F0, int S>
constexpr int PSC() { return (1000000 / (F0 * std::pow(2, S / 12.0f))); }

template <int F0, int S, int N>
void notes() { __HAL_TIM_SET_PRESCALER(&htim4, (PSC<F0, S>())); HAL_Delay(N); }

enum {Do = 0, Re = 2, Mi = 4, Fa = 5, So = 7, La = 9, Si = 11};
#define _0   {__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 0); HAL_Delay(T4); __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 36);}
#define _0_  {__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 0); HAL_Delay(T8); __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 36);}
#define _0__ {__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 0); HAL_Delay(T16); __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 36);}
#define _    HAL_Delay(T4);
#define __   HAL_Delay(T8);
#define ___  HAL_Delay(T16);
#define _1   notes<F0, Do     , T4 >();
#define _2   notes<F0, Re     , T4 >();
#define _3   notes<F0, Mi     , T4 >();
#define _4   notes<F0, Fa     , T4 >();
#define _5   notes<F0, So     , T4 >();
#define _6   notes<F0, La     , T4 >();
#define _7   notes<F0, Si     , T4 >();
#define h1   notes<F0, Do + 12, T4 >();
#define h2   notes<F0, Re + 12, T4 >();
#define h3   notes<F0, Mi + 12, T4 >();
#define h4   notes<F0, Fa + 12, T4 >();
#define h5   notes<F0, So + 12, T4 >();
#define h6   notes<F0, La + 12, T4 >();
#define h7   notes<F0, Si + 12, T4 >();
#define l1   notes<F0, Do - 12, T4 >();
#define l2   notes<F0, Re - 12, T4 >();
#define l3   notes<F0, Mi - 12, T4 >();
#define l4   notes<F0, Fa - 12, T4 >();
#define l5   notes<F0, So - 12, T4 >();
#define l6   notes<F0, La - 12, T4 >();
#define l7   notes<F0, Si - 12, T4 >();
#define _1_  notes<F0, Do     , T8 >();
#define _2_  notes<F0, Re     , T8 >();
#define _3_  notes<F0, Mi     , T8 >();
#define _4_  notes<F0, Fa     , T8 >();
#define _5_  notes<F0, So     , T8 >();
#define _6_  notes<F0, La     , T8 >();
#define _7_  notes<F0, Si     , T8 >();
#define h1_  notes<F0, Do + 12, T8 >();
#define h2_  notes<F0, Re + 12, T8 >();
#define h3_  notes<F0, Mi + 12, T8 >();
#define h4_  notes<F0, Fa + 12, T8 >();
#define h5_  notes<F0, So + 12, T8 >();
#define h6_  notes<F0, La + 12, T8 >();
#define h7_  notes<F0, Si + 12, T8 >();
#define l1_  notes<F0, Do - 12, T8 >();
#define l2_  notes<F0, Re - 12, T8 >();
#define l3_  notes<F0, Mi - 12, T8 >();
#define l4_  notes<F0, Fa - 12, T8 >();
#define l5_  notes<F0, So - 12, T8 >();
#define l6_  notes<F0, La - 12, T8 >();
#define l7_  notes<F0, Si - 12, T8 >();
#define _1__ notes<F0, Do     , T16>();
#define _2__ notes<F0, Re     , T16>();
#define _3__ notes<F0, Mi     , T16>();
#define _4__ notes<F0, Fa     , T16>();
#define _5__ notes<F0, So     , T16>();
#define _6__ notes<F0, La     , T16>();
#define _7__ notes<F0, Si     , T16>();
#define h1__ notes<F0, Do + 12, T16>();
#define h2__ notes<F0, Re + 12, T16>();
#define h3__ notes<F0, Mi + 12, T16>();
#define h4__ notes<F0, Fa + 12, T16>();
#define h5__ notes<F0, So + 12, T16>();
#define h6__ notes<F0, La + 12, T16>();
#define h7__ notes<F0, Si + 12, T16>();
#define l1__ notes<F0, Do - 12, T16>();
#define l2__ notes<F0, Re - 12, T16>();
#define l3__ notes<F0, Mi - 12, T16>();
#define l4__ notes<F0, Fa - 12, T16>();
#define l5__ notes<F0, So - 12, T16>();
#define l6__ notes<F0, La - 12, T16>();
#define l7__ notes<F0, Si - 12, T16>();
#define s2_  notes<F0, Re +  1, T8 >();
#define b6_  notes<F0, La -  1, T8 >();
#define sl6__ notes<F0, La - 11, T16>();