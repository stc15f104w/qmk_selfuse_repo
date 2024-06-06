
#define STM32F4xx_MCUCONF
#define STM32F411_MCUCONF
#include <stdint.h>
/*
 * HAL driver system settings.
 */

#define STM32F411xx
//#define STM32_HSECLK (12000000) // HSE 12MHz
#define STM32_PLLMUL_VALUE 6
#define HAL_USE_PWM TRUE
#define STM32_NO_INIT                       FALSE
#define STM32_PVD_ENABLE                    FALSE
#define STM32_PLS                           STM32_PLS_LEV0
#define STM32_BKPRAM_ENABLE                 FALSE
#define STM32_HSI_ENABLED                   TRUE
#define STM32_LSI_ENABLED                   TRUE
#define STM32_HSE_ENABLED                   TRUE
#define STM32_LSE_ENABLED                   FALSE
#define STM32_CLOCK48_REQUIRED              TRUE
#define STM32_SW                            STM32_SW_PLL
#define STM32_PLLSRC                        STM32_PLLSRC_HSE
#define STM32_PLLM_VALUE                    6   // 使用12MHz外部晶振
#define STM32_PLLN_VALUE                    96   // PLL倍频值，确保系统频率为96MHz
#define STM32_PLLP_VALUE                    2
#define STM32_PLLQ_VALUE                    4
#define STM32_HPRE                          STM32_HPRE_DIV1
#define STM32_PPRE1                         STM32_PPRE1_DIV2
#define STM32_PPRE2                         STM32_PPRE2_DIV1
#define STM32_RTCSEL                        STM32_RTCSEL_LSI
#define STM32_RTCPRE_VALUE                  8
#define STM32_MCO1SEL                       STM32_MCO1SEL_HSI
#define STM32_MCO1PRE                       STM32_MCO1PRE_DIV1
#define STM32_MCO2SEL                       STM32_MCO2SEL_SYSCLK
#define STM32_MCO2PRE                       STM32_MCO2PRE_DIV5
#define STM32_I2SSRC                        STM32_I2SSRC_CKIN
#define STM32_PLLI2SN_VALUE                 192
#define STM32_PLLI2SR_VALUE                 5

/*
 * USB driver system settings.
 */
#define STM32_USB_USE_OTG1                  TRUE
#define STM32_USB_OTG1_IRQ_PRIORITY         14
#define STM32_USB_OTG1_RX_FIFO_SIZE         512
#define STM32_USB_HOST_WAKEUP_DURATION      2


// EXTI Interrupts
#define STM32_IRQ_EXTI0_PRIORITY           6
#define STM32_IRQ_EXTI1_PRIORITY           6
#define STM32_IRQ_EXTI2_PRIORITY           6
#define STM32_IRQ_EXTI3_PRIORITY           6
#define STM32_IRQ_EXTI4_PRIORITY           6
#define STM32_IRQ_EXTI5_9_PRIORITY         6
#define STM32_IRQ_EXTI10_15_PRIORITY       6
#define STM32_IRQ_EXTI16_PRIORITY          6
#define STM32_IRQ_EXTI17_PRIORITY          6
#define STM32_IRQ_EXTI18_PRIORITY          6
#define STM32_IRQ_EXTI19_PRIORITY          6
#define STM32_IRQ_EXTI20_PRIORITY          6
#define STM32_IRQ_EXTI21_PRIORITY          6
#define STM32_IRQ_EXTI22_PRIORITY          6

// USART Interrupts
#define STM32_IRQ_USART1_PRIORITY          7
#define STM32_IRQ_USART2_PRIORITY          7
#define STM32_IRQ_USART6_PRIORITY          7

// Timer Interrupts
#define STM32_IRQ_TIM1_BRK_TIM9_PRIORITY   5
#define STM32_IRQ_TIM1_UP_TIM10_PRIORITY   5
#define STM32_IRQ_TIM1_TRGCO_TIM11_PRIORITY 5
#define STM32_IRQ_TIM1_CC_PRIORITY         5
#define STM32_IRQ_TIM2_PRIORITY            5
#define STM32_IRQ_TIM3_PRIORITY            5
#define STM32_IRQ_TIM4_PRIORITY            5
#define STM32_IRQ_TIM5_PRIORITY            5


#define STM32_ADC_ADCPRE ADC_CCR_ADCPRE_DIV8
#define HAL_USE_ADC1
#define STM32_ADC_USE_ADC1 TRUE

#define STM32_USE_SPI TRUE
#define STM32_SPI_USE_SPI1 TRUE
#define STM32_SPI_SPI1_RX_DMA_STREAM STM32_DMA_STREAM_ID(2, 2)  // DMA2, Stream 3
#define STM32_SPI_SPI1_TX_DMA_STREAM STM32_DMA_STREAM_ID(2, 3)  // DMA2, Stream 4
