#include "main.h"
#include "tim.h"
#include "gpio.h"
#include <cmath>
#define F0 1975.53
#define T4 444
#define T8 222
#define T16 111
#define _0 {__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 0); HAL_Delay(T4); __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 36);}
#define _0_ {__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 0); HAL_Delay(T8); __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 36);}
#define _0__ {__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 0); HAL_Delay(T16); __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 36);}
#define _ {HAL_Delay(T4);}
#define __ {HAL_Delay(T8);}
#define ___ {HAL_Delay(T16);}


constexpr const int P1 = (1000000/(F0*std::pow(2,(0)/12)));
constexpr const int P2 = (1000000/(F0*std::pow(2,(2)/12)));
constexpr const int P3 = (1000000/(F0*std::pow(2,(4)/12)));
constexpr const int P4 = (1000000/(F0*std::pow(2,(5)/12)));
constexpr const int P5 = (1000000/(F0*std::pow(2,(7)/12)));
constexpr const int P6 = (1000000/(F0*std::pow(2,(9)/12)));
constexpr const int P7 = (1000000/(F0*std::pow(2,(11)/12)));
constexpr const int Ph1 = (1000000/(F0*std::pow(2,(12 + 0)/12)));
constexpr const int Ph2 = (1000000/(F0*std::pow(2,(12 + 2)/12)));
constexpr const int Ph3 = (1000000/(F0*std::pow(2,(12 +4)/12)));
constexpr const int Ph4 = (1000000/(F0*std::pow(2,(12 + 5)/12)));
constexpr const int Ph5 = (1000000/(F0*std::pow(2,(12 + 7)/12)));
constexpr const int Ph6 = (1000000/(F0*std::pow(2,(12 + 9)/12)));
constexpr const int Ph7 = (1000000/(F0*std::pow(2,(12 + 11)/12)));
constexpr const int Pl1 = (1000000/(F0*std::pow(2,(-12)/12)));
constexpr const int Pl2 = (1000000/(F0*std::pow(2,(-10)/12)));
constexpr const int Pl3 = (1000000/(F0*std::pow(2,(-8)/12)));
constexpr const int Pl4 = (1000000/(F0*std::pow(2,(-7)/12)));
constexpr const int Pl5 = (1000000/(F0*std::pow(2,(-5)/12)));
constexpr const int Pl6 = (1000000/(F0*std::pow(2,(-3)/12)));
constexpr const int Pl7 = (1000000/(F0*std::pow(2,(-1)/12)));

#define ____(p,t) {__HAL_TIM_SET_PRESCALER(&htim4, p); HAL_Delay(t);}

#define _1 ____(P1,T4)
#define _2 ____(P2,T4)
#define _3 ____(P3,T4)
#define _4 ____(P4,T4)
#define _5 ____(P5,T4)
#define _6 ____(P6,T4)
#define _7 ____(P7,T4)

#define h1 ____(Ph1,T4)
#define h2 ____(Ph2,T4)
#define h3 ____(Ph3,T4)
#define h4 ____(Ph4,T4)
#define h5 ____(Ph5,T4)
#define h6 ____(Ph6,T4)
#define h7 ____(Ph7,T4)

#define l1 ____(Pl1,T4)
#define l2 ____(Pl2,T4)
#define l3 ____(Pl3,T4)
#define l4 ____(Pl4,T4)
#define l5 ____(Pl5,T4)
#define l6 ____(Pl6,T4)
#define l7 ____(Pl7,T4)


#define _1_ ____(P1,T8)
#define _2_ ____(P2,T8)
#define _3_ ____(P3,T8)
#define _4_ ____(P4,T8)
#define _5_ ____(P5,T8)
#define _6_ ____(P6,T8)
#define _7_ ____(P7,T8)

#define h1_ ____(Ph1,T8)
#define h2_ ____(Ph2,T8)
#define h3_ ____(Ph3,T8)
#define h4_ ____(Ph4,T8)
#define h5_ ____(Ph5,T8)
#define h6_ ____(Ph6,T8)
#define h7_ ____(Ph7,T8)

#define l1_ ____(Pl1,T8)
#define l2_ ____(Pl2,T8)
#define l3_ ____(Pl3,T8)
#define l4_ ____(Pl4,T8)
#define l5_ ____(Pl5,T8)
#define l6_ ____(Pl6,T8)
#define l7_ ____(Pl7,T8)


#define _1__ ____(P1,T16)
#define _2__ ____(P2,T16)
#define _3__ ____(P3,T16)
#define _4__ ____(P4,T16)
#define _5__ ____(P5,T16)
#define _6__ ____(P6,T16)
#define _7__ ____(P7,T16)

#define h1__ ____(Ph1,T16)
#define h2__ ____(Ph2,T16)
#define h3__ ____(Ph3,T16)
#define h4__ ____(Ph4,T16)
#define h5__ ____(Ph5,T16)
#define h6__ ____(Ph6,T16)
#define h7__ ____(Ph7,T16)

#define l1__ ____(Pl1,T16)
#define l2__ ____(Pl2,T16)
#define l3__ ____(Pl3,T16)
#define l4__ ____(Pl4,T16)
#define l5__ ____(Pl5,T16)
#define l6__ ____(Pl6,T16)
#define l7__ ____(Pl7,T16)

#define sl6__
#define sl6__
#define sl6__




int main() {
    init();
    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
    __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 36);
    while (1)
    {
        for (int i = 0; i < 7; i++) { _0_ l6_ l6_ l5__ l6__ _0_ l6_ l5_ l5__ l6__ }
        _0_ l6_ l6_ l5__ l6__ _0_ h1_ _7_ _5_

        
    }
}