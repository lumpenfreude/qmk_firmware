#include_next <mcuconf.h>
#undef STM32_PWM_USE_TIM1
#define STM32_PWM_USE_TIM1 TRUE
#undef STM32_GPT_USE_TIM4
#define STM32_GPT_USE_TIM4 TRUE
