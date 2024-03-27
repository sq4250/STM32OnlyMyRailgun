#include "main.h"
#include "notes.h"
namespace A{
    const int T4 = 444;
    const int T8 = 222;
    const int T16 = 111;
    namespace part_A {
    const int F0 = 1975.53;
    }
    namespace part_B {
    const int F0 = 1661.22;
    }
    namespace part_C {
    const int F0 = 1864.66;
    }
}
namespace B{
    const int T4 = 480;
    const int T8 = 240;
    const int T16 = 120;
    namespace part_A {
        const int F0 = 1567.98;
        }
    namespace part_B {
        const int F0 = 1318.51;
    }
}
int main()
{
    init();
    HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
    __HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_1, 36);
    while (1)
    {
        // {
        //     using namespace A;
        //     #include "only_my_railgun.h"
        // }
        {
            using namespace B;
            #include "cyberangel.h"
        }
    }
}