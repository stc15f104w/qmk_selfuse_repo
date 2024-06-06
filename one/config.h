// Copyright 2022 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Set HSE clock since it differs from F411 default */
#define STM32_HSECLK 12000000
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { B14, B13 }
#define MATRIX_COL_PINS { B15, A8, A10 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define ENCODERS_PAD_A {B5}
#define ENCODERS_PAD_B {B4}
#define ENCODER_RESOLUTION 4

#define HAL_USE_PWM TRUE
#undef STM32_PWM_USE_TIM2
#define STM32_PWM_USE_TIM2 TRUE
#define WS2812_PWM_DRIVER PWMD2
#define WS2812_PWM_CHANNEL 3
#define WS2812_PWM_DMA_STREAM STM32_DMA1_STREAM2
#define WS2812_PWM_DMA_CHANNEL	2

#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define WS2812_PWM_PAL_MODE 2
#define CH_CFG_ST_TIMEDELTA 0
#define WS2812_DI_PIN B10
#define RGB_MATRIX_LED_COUNT 6
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB

// 定义使用的 SPI 驱动器为 SPI1
#undef SPI_DRIVER
#define SPI_DRIVER SPID1

// 定义 SPI 的 SCK (时钟) 引脚为 B13
#undef SPI_SCK_PIN
#define SPI_SCK_PIN A5
// 定义 SCK 引脚的备用功能模式，通常为 AF5 （具体取决于 MCU）
#undef SPI_SCK_PAL_MODE
#define SPI_SCK_PAL_MODE 5

// 定义 SPI 的 MOSI (主输出从输入) 引脚为 B15
#undef SPI_MOSI_PIN
#define SPI_MOSI_PIN A7

// 定义 MOSI 引脚的备用功能模式，通常为 AF5
#undef SPI_MOSI_PAL_MODE
#define SPI_MOSI_PAL_MODE 5

// 定义 SPI 的 MISO (主输入从输出) 引脚为 B14
#undef SPI_MISO_PIN
#define SPI_MISO_PIN NO_PIN

// 定义 MISO 引脚的备用功能模式，通常为 AF5
#undef SPI_MISO_PAL_MODE
#define SPI_MISO_PAL_MODE 5