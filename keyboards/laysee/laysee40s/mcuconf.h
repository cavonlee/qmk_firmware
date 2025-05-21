
#pragma once

#include_next <mcuconf.h>

// I2C
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 TRUE

// PWM
#undef RP_PWM_USE_PWM2
#define RP_PWM_USE_PWM2 TRUE

// SERIAL
// #undef RP_SIO_USE_USART1
// #define RP_SIO_USE_USART1 TRUE
// #undef RP_SERIAL_USE_USART1
// #define RP_SERIAL_USE_USART1 TRUE