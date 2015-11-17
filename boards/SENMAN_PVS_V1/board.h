/*
    ChibiOS/RT - Copyright (C) 2006-2013 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for Senman Prevodnik Vysilaci Stanice verze 1.
 */

/*
 * Board identifier.
 */
#define BOARD_SENMAN_PVS_V1
#define BOARD_NAME                  "Senman Prevodnik Vysilaci Stanice verze 1"

/*
 * Ethernet PHY type.
 */
#define BOARD_PHY_ID                MII_KSZ8081MLX_ID
#define BOARD_PHY_MII
#define BOARD_PHY_ADDRESS 0x00001

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                25000000
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330

/*
 * MCU type as defined in the ST header.
 */
#define STM32F2XX

/*
 * IO pins assignments.
 */
#define GPIOA_ETH_MII_CRS           0
#define GPIOA_ETH_MII_RX_CLK        1
#define GPIOA_ETH_MII_MDIO          2
#define GPIOA_ETH_MII_COL           3
#define GPIOA_SPI1_NSS              4
#define GPIOA_SPI1_SCK              5
#define GPIOA_SP11_MISO             6
#define GPIOA_ETH_MII_RX_DV         7
#define GPIOA_TIM1_CH1              8
#define GPIOA_PA9                   9
#define GPIOA_PA10                  10
#define GPIOA_PA11                  11
#define GPIOA_TIM1_ETR              12
#define GPIOA_JTAG_TMS              13
#define GPIOA_JTAG_TCK              14
#define GPIOA_JTAG_TDI              15

#define GPIOB_ETH_MII_RXD2          0
#define GPIOB_ETH_MII_RXD3          1
#define GPIOB_BOOT1                 2
#define GPIOB_JTAG_TDO              3
#define GPIOB_JTAG_TRST             4
#define GPIOB_ETH_PPS_OUT           5
#define GPIOB_UART1_TX              6
#define GPIOB_UART1_RX              7
#define GPIOB_ETH_MII_TXD3          8
#define GPIOB_PIN9                  9
#define GPIOB_ETH_MII_RX_ERR        10
#define GPIOB_ETH_MII_TX_EN         11
#define GPIOB_ETH_MII_TXD0          12
#define GPIOB_ETH_MII_TXD1          13
#define GPIOB_FFSK_CARRIER_DETECT   14
#define GPIOB_FFSK_CLOCK_RATE       15

#define GPIOC_ETH_INTRP             0
#define GPIOC_ETH_MII_MDC           1
#define GPIOC_ETH_MII_TXD2          2
#define GPIOC_ETH_MII_TX_CLK        3
#define GPIOC_ETH_MII_RXD0          4
#define GPIOC_ETH_MII_RXD1          5
#define GPIOC_TIM3_CH1              6
#define GPIOC_PIN7                  7
#define GPIOC_PIN8                  8
#define GPIOC_PIN9                  9
#define GPIOC_SPI3_SCK              10
#define GPIOC_PIN11                 11
#define GPIOC_SPI3_MOSI             12
#define GPIOC_PIN13                 13
#define GPIOC_OSC32_IN              14
#define GPIOC_OSC32_OUT             15

#define GPIOD_FFSK_BAUD_SELECT_LO   0
#define GPIOD_FFSK_BAUD_SELECT_HI   1
#define GPIOD_TIM3_ETR              2
#define GPIOD_FFSK_RX_EN            3
#define GPIOD_FFSK_BANDPASS         4
#define GPIOD_UART2_TX              5
#define GPIOD_UART2_RX              6
#define GPIOD_FFSK_TX_EN            7
#define GPIOD_UART3_TX              8
#define GPIOD_UART3_RX              9
#define GPIOD_PIN10                 10
#define GPIOD_PIN11                 11
#define GPIOD_PIN12                 12
#define GPIOD_PIN13                 13
#define GPIOD_PIN14                 14
#define GPIOD_PIN15                 15

#define GPIOE_LED1                  0
#define GPIOE_LED2                  1
#define GPIOE_ETH_RESET             2
#define GPIOE_LED3                  3
#define GPIOE_LED4                  4
#define GPIOE_PIN5                  5
#define GPIOE_PIN6                  6
#define GPIOE_PIN7                  7
#define GPIOE_PIN8                  8
#define GPIOE_PIN9                  9
#define GPIOE_PIN10                 10
#define GPIOE_PIN11                 11
#define GPIOE_PIN12                 12
#define GPIOE_PIN13                 13
#define GPIOE_PIN14                 14
#define GPIOE_PIN15                 15

#define GPIOF_PIN0                  0
#define GPIOF_PIN1                  1
#define GPIOF_PIN2                  2
#define GPIOF_PIN3                  3
#define GPIOF_PIN4                  4
#define GPIOF_PIN5                  5
#define GPIOF_PIN6                  6
#define GPIOF_PIN7                  7
#define GPIOF_PIN8                  8
#define GPIOF_PIN9                  9
#define GPIOF_PIN10                 10
#define GPIOF_PIN11                 11
#define GPIOF_PIN12                 12
#define GPIOF_PIN13                 13
#define GPIOF_PIN14                 14
#define GPIOF_PIN15                 15

#define GPIOG_PIN0                  0
#define GPIOG_PIN1                  1
#define GPIOG_PIN2                  2
#define GPIOG_PIN3                  3
#define GPIOG_PIN4                  4
#define GPIOG_PIN5                  5
#define GPIOG_PIN6                  6
#define GPIOG_PIN7                  7
#define GPIOG_PIN8                  8
#define GPIOG_PIN9                  9
#define GPIOG_PIN10                 10
#define GPIOG_PIN11                 11
#define GPIOG_PIN12                 12
#define GPIOG_PIN13                 13
#define GPIOG_PIN14                 14
#define GPIOG_PIN15                 15

#define GPIOH_OSC_IN                0
#define GPIOH_OSC_OUT               1
#define GPIOH_PIN2                  2
#define GPIOH_PIN3                  3
#define GPIOH_PIN4                  4
#define GPIOH_PIN5                  5
#define GPIOH_PIN6                  6
#define GPIOH_PIN7                  7
#define GPIOH_PIN8                  8
#define GPIOH_PIN9                  9
#define GPIOH_PIN10                 10
#define GPIOH_PIN11                 11
#define GPIOH_PIN12                 12
#define GPIOH_PIN13                 13
#define GPIOH_PIN14                 14
#define GPIOH_PIN15                 15

#define GPIOI_PIN0                  0
#define GPIOI_PIN1                  1
#define GPIOI_PIN2                  2
#define GPIOI_PIN3                  3
#define GPIOI_PIN4                  4
#define GPIOI_PIN5                  5
#define GPIOI_PIN6                  6
#define GPIOI_PIN7                  7
#define GPIOI_PIN8                  8
#define GPIOI_PIN9                  9
#define GPIOI_PIN10                 10
#define GPIOI_PIN11                 11
#define GPIOI_PIN12                 12
#define GPIOI_PIN13                 13
#define GPIOI_PIN14                 14
#define GPIOI_PIN15                 15

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_2M(n)            (0U << ((n) * 2))
#define PIN_OSPEED_25M(n)           (1U << ((n) * 2))
#define PIN_OSPEED_50M(n)           (2U << ((n) * 2))
#define PIN_OSPEED_100M(n)          (3U << ((n) * 2))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2))
#define PIN_AFIO_AF(n, v)           ((v##U) << ((n % 8) * 4))

/*
 * GPIOA setup:
 *
 * PA0  - ETH_MII_CRS               (alternate 11).
 * PA1  - ETH_MII_RX_CLK            (alternate 11).
 * PA2  - ETH_MII_MDIO              (alternate 11).
 * PA3  - ETH_MII_COL               (alternate 11).
 * PA4  - SPI1_NSS                  (alternate 5).
 * PA5  - SPI1_SCK                  (alternate 5).
 * PA6  - SP11_MISO                 (alternate 5).
 * PA7  - ETH_MII_RX_DV             (alternate 11).
 * PA8  - TIM1_CH1                  (alternate 1).
 * PA9  - PA9                       (output pushpull floating).
 * PA10 - PA10                      (output pushpull floating).
 * PA11 - PA11                      (output pushpull floating).
 * PA12 - TIM1_ETR                  (alternate 1).
 * PA13 - JTAG_TMS                  (alternate 0).
 * PA14 - JTAG_TCK                  (alternate 0).
 * PA15 - JTAG_TDI                  (alternate 0).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_ALTERNATE(0) |    \
                                     PIN_MODE_ALTERNATE(1) |\
                                     PIN_MODE_ALTERNATE(2) |\
                                     PIN_MODE_ALTERNATE(3) | \
                                     PIN_MODE_ALTERNATE(4) |           \
                                     PIN_MODE_ALTERNATE(5) |           \
                                     PIN_MODE_ALTERNATE(6) |           \
                                     PIN_MODE_ALTERNATE(7) |\
                                     PIN_MODE_ALTERNATE(8) |  \
                                     PIN_MODE_OUTPUT(9) |    \
                                     PIN_MODE_OUTPUT(10) |  \
                                     PIN_MODE_OUTPUT(11) |  \
                                     PIN_MODE_ALTERNATE(12) |  \
                                     PIN_MODE_ALTERNATE(13) |   \
                                     PIN_MODE_ALTERNATE(14) |   \
                                     PIN_MODE_ALTERNATE(15))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(0) |\
                                     PIN_OTYPE_PUSHPULL(1) |\
                                     PIN_OTYPE_PUSHPULL(2) |\
                                     PIN_OTYPE_PUSHPULL(3) |\
                                     PIN_OTYPE_PUSHPULL(4) |       \
                                     PIN_OTYPE_PUSHPULL(5) |       \
                                     PIN_OTYPE_PUSHPULL(6) |       \
                                     PIN_OTYPE_PUSHPULL(7) |\
                                     PIN_OTYPE_PUSHPULL(8) |\
                                     PIN_OTYPE_PUSHPULL(9) |\
                                     PIN_OTYPE_PUSHPULL(10) |  \
                                     PIN_OTYPE_PUSHPULL(11) |  \
                                     PIN_OTYPE_PUSHPULL(12) |  \
                                     PIN_OTYPE_PUSHPULL(13) |   \
                                     PIN_OTYPE_PUSHPULL(14) |   \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_100M(0) |   \
                                     PIN_OSPEED_100M(1) |\
                                     PIN_OSPEED_100M(2) | \
                                     PIN_OSPEED_100M(3) |\
                                     PIN_OSPEED_100M(4) |          \
                                     PIN_OSPEED_100M(5) |          \
                                     PIN_OSPEED_100M(6) |          \
                                     PIN_OSPEED_100M(7) |\
                                     PIN_OSPEED_100M(8) |  \
                                     PIN_OSPEED_100M(9) |   \
                                     PIN_OSPEED_100M(10) |     \
                                     PIN_OSPEED_100M(11) |     \
                                     PIN_OSPEED_100M(12) |     \
                                     PIN_OSPEED_100M(13) |      \
                                     PIN_OSPEED_100M(14) |      \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(0) |\
                                     PIN_PUPDR_FLOATING(1) |\
                                     PIN_PUPDR_FLOATING(2) |\
                                     PIN_PUPDR_FLOATING(3) |\
                                     PIN_PUPDR_FLOATING(4) |         \
                                     PIN_PUPDR_FLOATING(5) |         \
                                     PIN_PUPDR_FLOATING(6) |         \
                                     PIN_PUPDR_FLOATING(7) |\
                                     PIN_PUPDR_FLOATING(8) |\
                                     PIN_PUPDR_FLOATING(9) |\
                                     PIN_PUPDR_FLOATING(10) |  \
                                     PIN_PUPDR_FLOATING(11) |  \
                                     PIN_PUPDR_FLOATING(12) |  \
                                     PIN_PUPDR_FLOATING(13) |   \
                                     PIN_PUPDR_FLOATING(14) |   \
                                     PIN_PUPDR_FLOATING(15))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(0) |      \
                                     PIN_ODR_HIGH(1) | \
                                     PIN_ODR_HIGH(2) |    \
                                     PIN_ODR_HIGH(3) |   \
                                     PIN_ODR_HIGH(4) |             \
                                     PIN_ODR_HIGH(5) |             \
                                     PIN_ODR_HIGH(6) |             \
                                     PIN_ODR_HIGH(7) |  \
                                     PIN_ODR_HIGH(8) |      \
                                     PIN_ODR_HIGH(9) |      \
                                     PIN_ODR_HIGH(10) |        \
                                     PIN_ODR_HIGH(11) |        \
                                     PIN_ODR_HIGH(12) |        \
                                     PIN_ODR_HIGH(13) |         \
                                     PIN_ODR_HIGH(14) |         \
                                     PIN_ODR_HIGH(15))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(0, 11) |    \
                                     PIN_AFIO_AF(1, 11) |\
                                     PIN_AFIO_AF(2, 11) | \
                                     PIN_AFIO_AF(3, 11) | \
                                     PIN_AFIO_AF(4, 5) |           \
                                     PIN_AFIO_AF(5, 5) |           \
                                     PIN_AFIO_AF(6, 5) |           \
                                     PIN_AFIO_AF(7, 11))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(8, 1) |   \
                                     PIN_AFIO_AF(9, 0) |    \
                                     PIN_AFIO_AF(10, 0) |     \
                                     PIN_AFIO_AF(11, 0) |     \
                                     PIN_AFIO_AF(12, 1) |     \
                                     PIN_AFIO_AF(13, 0) |       \
                                     PIN_AFIO_AF(14, 0) |       \
                                     PIN_AFIO_AF(15, 0))

/*
 * GPIOB setup:
 *
 * PB0  - ETH_MII_RXD2              (alternate 11).
 * PB1  - ETH_MII_RXD3             	(alternate 11).
 * PB2  - BOOT1                     (input floating).
 * PB3  - JTAG_TDO                  (alternate 0).
 * PB4  - JTAG_TRST                 (alternate 0).
 * PB5  - ETH_PPS_OUT               (alternate 11).
 * PB6  - UART1_TX                  (alternate 7).
 * PB7  - UART1_RX                  (alternate 7).
 * PB8  - ETH_MII_TXD               (alternate 11).
 * PB9  - PIN9                  	(output pushpull floating).
 * PB10 - ETH_MII_RX_ERR            (alternate 11).
 * PB11 - ETH_MII_TX_EN             (alertnate 11).
 * PB12 - ETH_MII_TXD0              (alternate 11).
 * PB13 - ETH_MII_TXD1              (alternate 11)..
 * PB14 - FFSK_CARRIER_DETECT       (input floating).
 * PB15 - FFSK_CLOCK_RATE           (output pushpull floating).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_ALTERNATE(0) |  \
                                     PIN_MODE_ALTERNATE(1) |   \
                                     PIN_MODE_INPUT(2) |          \
                                     PIN_MODE_ALTERNATE(3) |   \
                                     PIN_MODE_ALTERNATE(4) |  \
                                     PIN_MODE_ALTERNATE(5) |           \
                                     PIN_MODE_ALTERNATE(6) |           \
                                     PIN_MODE_ALTERNATE(7) |           \
                                     PIN_MODE_ALTERNATE(8) |   \
                                     PIN_MODE_OUTPUT(9) |   \
                                     PIN_MODE_ALTERNATE(10) |   \
                                     PIN_MODE_ALTERNATE(11) |          \
                                     PIN_MODE_ALTERNATE(12) |  \
                                     PIN_MODE_ALTERNATE(13) |    \
                                     PIN_MODE_INPUT(14) |  \
                                     PIN_MODE_OUTPUT(15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(0) |\
                                     PIN_OTYPE_PUSHPULL(1) |\
                                     PIN_OTYPE_PUSHPULL(2) |      \
                                     PIN_OTYPE_PUSHPULL(3) |   \
                                     PIN_OTYPE_PUSHPULL(4) |  \
                                     PIN_OTYPE_PUSHPULL(5) |       \
                                     PIN_OTYPE_PUSHPULL(6) |       \
                                     PIN_OTYPE_PUSHPULL(7) |       \
                                     PIN_OTYPE_PUSHPULL(8) |  \
                                     PIN_OTYPE_PUSHPULL(9) |  \
                                     PIN_OTYPE_PUSHPULL(10) |   \
                                     PIN_OTYPE_PUSHPULL(11) |      \
                                     PIN_OTYPE_PUSHPULL(12) |  \
                                     PIN_OTYPE_PUSHPULL(13) |\
                                     PIN_OTYPE_PUSHPULL(14) |  \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_100M(0) |  \
                                     PIN_OSPEED_100M(1) |  \
                                     PIN_OSPEED_100M(2) |         \
                                     PIN_OSPEED_100M(3) |      \
                                     PIN_OSPEED_100M(4) |     \
                                     PIN_OSPEED_100M(5) |          \
                                     PIN_OSPEED_100M(6) |          \
                                     PIN_OSPEED_100M(7) |          \
                                     PIN_OSPEED_100M(8) |      \
                                     PIN_OSPEED_100M(9) |      \
                                     PIN_OSPEED_100M(10) |      \
                                     PIN_OSPEED_100M(11) |         \
                                     PIN_OSPEED_100M(12) |     \
                                     PIN_OSPEED_100M(13) |   \
                                     PIN_OSPEED_100M(14) |     \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(0) |\
                                     PIN_PUPDR_FLOATING(1) |\
                                     PIN_PUPDR_FLOATING(2) |      \
                                     PIN_PUPDR_FLOATING(3) |   \
                                     PIN_PUPDR_FLOATING(4) |  \
                                     PIN_PUPDR_FLOATING(5) |         \
                                     PIN_PUPDR_FLOATING(6) |         \
                                     PIN_PUPDR_FLOATING(7) |         \
                                     PIN_PUPDR_FLOATING(8) |   \
                                     PIN_PUPDR_FLOATING(9) |   \
                                     PIN_PUPDR_FLOATING(10) |   \
                                     PIN_PUPDR_FLOATING(11) |        \
                                     PIN_PUPDR_FLOATING(12) |  \
                                     PIN_PUPDR_FLOATING(13) |\
                                     PIN_PUPDR_FLOATING(14) |  \
                                     PIN_PUPDR_FLOATING(15))
#define VAL_GPIOB_ODR               (PIN_ODR_LOW(0) |      \
                                     PIN_ODR_HIGH(1) |     \
                                     PIN_ODR_HIGH(2) |            \
                                     PIN_ODR_HIGH(3) |         \
                                     PIN_ODR_HIGH(4) |        \
                                     PIN_ODR_HIGH(5) |             \
                                     PIN_ODR_HIGH(6) |             \
                                     PIN_ODR_HIGH(7) |             \
                                     PIN_ODR_HIGH(8) |         \
                                     PIN_ODR_HIGH(9) |         \
                                     PIN_ODR_HIGH(10) |         \
                                     PIN_ODR_HIGH(11) |            \
                                     PIN_ODR_HIGH(12) |        \
                                     PIN_ODR_HIGH(13) |      \
                                     PIN_ODR_HIGH(14) |        \
                                     PIN_ODR_HIGH(15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(0, 11) |   \
                                     PIN_AFIO_AF(1, 11) |   \
                                     PIN_AFIO_AF(2, 0) |          \
                                     PIN_AFIO_AF(3, 0) |       \
                                     PIN_AFIO_AF(4, 0) |      \
                                     PIN_AFIO_AF(5, 11) |           \
                                     PIN_AFIO_AF(6, 7) |           \
                                     PIN_AFIO_AF(7, 7))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(8, 11) |       \
                                     PIN_AFIO_AF(9, 0) |       \
                                     PIN_AFIO_AF(10, 11) |       \
                                     PIN_AFIO_AF(11, 11) |          \
                                     PIN_AFIO_AF(12, 11) |     \
                                     PIN_AFIO_AF(13, 11) |    \
                                     PIN_AFIO_AF(14, 0) |     \
                                     PIN_AFIO_AF(15, 0))

/*
 * GPIOC setup:
 *
 * PC0  - ETH_INTRP                 (input floating).
 * PC1  - ETH_MII_MDC               (alternate 11).
 * PC2  - ETH_MII_TXD2              (alternate 11).
 * PC3  - ETH_MII_TX_CLK            (alternate 11).
 * PC4  - ETH_MII_RXD0              (alternate 11).
 * PC5  - ETH_MII_RXD1              (alternate 11).
 * PC6  - TIM3_CH1                 	(alternate 2).
 * PC7  - PIN7                 		(output pushpull floating).
 * PC8  - PIN8                      (output pushpull floating).
 * PC9  - PIN9                      (output pushpull floating).
 * PC10 - SPI3_SCK                  (alternate 6).
 * PC11 - SPI3_MISO                 (alternate 6).
 * PC12 - SPI3_MOSI                 (alternate 6).
 * PC13 - PIN13                     (output pushpull pullup).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(0) |           \
                                     PIN_MODE_ALTERNATE(1) |\
                                     PIN_MODE_ALTERNATE(2) |  \
                                     PIN_MODE_ALTERNATE(3) |  \
                                     PIN_MODE_ALTERNATE(4) |\
                                     PIN_MODE_ALTERNATE(5) |\
                                     PIN_MODE_ALTERNATE(6) |  \
                                     PIN_MODE_OUTPUT(7) |  \
                                     PIN_MODE_OUTPUT(8) |      \
                                     PIN_MODE_OUTPUT(9) |      \
                                     PIN_MODE_ALTERNATE(10) |      \
                                     PIN_MODE_ALTERNATE(11) |      \
                                     PIN_MODE_ALTERNATE(12) |     \
                                     PIN_MODE_OUTPUT(13) |           \
                                     PIN_MODE_INPUT(14) |       \
                                     PIN_MODE_INPUT(15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(0) |       \
                                     PIN_OTYPE_PUSHPULL(1) |\
                                     PIN_OTYPE_PUSHPULL(2) |  \
                                     PIN_OTYPE_PUSHPULL(3) |  \
                                     PIN_OTYPE_PUSHPULL(4) |\
                                     PIN_OTYPE_PUSHPULL(5) |\
                                     PIN_OTYPE_PUSHPULL(6) |  \
                                     PIN_OTYPE_PUSHPULL(7) |  \
                                     PIN_OTYPE_PUSHPULL(8) |      \
                                     PIN_OTYPE_PUSHPULL(9) |      \
                                     PIN_OTYPE_PUSHPULL(10) |      \
                                     PIN_OTYPE_PUSHPULL(11) |      \
                                     PIN_OTYPE_PUSHPULL(12) |     \
                                     PIN_OTYPE_PUSHPULL(13) |        \
                                     PIN_OTYPE_PUSHPULL(14) |   \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_100M(0) |          \
                                     PIN_OSPEED_100M(1) |  \
                                     PIN_OSPEED_100M(2) |     \
                                     PIN_OSPEED_100M(3) |     \
                                     PIN_OSPEED_100M(4) | \
                                     PIN_OSPEED_100M(5) | \
                                     PIN_OSPEED_100M(6) |     \
                                     PIN_OSPEED_100M(7) |     \
                                     PIN_OSPEED_100M(8) |         \
                                     PIN_OSPEED_100M(9) |         \
                                     PIN_OSPEED_100M(10) |         \
                                     PIN_OSPEED_100M(11) |         \
                                     PIN_OSPEED_100M(12) |        \
                                     PIN_OSPEED_100M(13) |           \
                                     PIN_OSPEED_100M(14) |      \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(0) |         \
                                     PIN_PUPDR_FLOATING(1) |\
                                     PIN_PUPDR_FLOATING(2) |  \
                                     PIN_PUPDR_FLOATING(3) |  \
                                     PIN_PUPDR_FLOATING(4) |\
                                     PIN_PUPDR_FLOATING(5) |\
                                     PIN_PUPDR_FLOATING(6) |  \
                                     PIN_PUPDR_FLOATING(7) |  \
                                     PIN_PUPDR_FLOATING(8) |      \
                                     PIN_PUPDR_FLOATING(9) |      \
                                     PIN_PUPDR_FLOATING(10) |      \
                                     PIN_PUPDR_FLOATING(11) |      \
                                     PIN_PUPDR_FLOATING(12) |     \
                                     PIN_PUPDR_FLOATING(13) |        \
                                     PIN_PUPDR_FLOATING(14) |   \
                                     PIN_PUPDR_FLOATING(15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(0) |             \
                                     PIN_ODR_HIGH(1) |     \
                                     PIN_ODR_HIGH(2) |        \
                                     PIN_ODR_HIGH(3) |        \
                                     PIN_ODR_HIGH(4) |    \
                                     PIN_ODR_HIGH(5) |    \
                                     PIN_ODR_HIGH(6) |        \
                                     PIN_ODR_HIGH(7) |        \
                                     PIN_ODR_HIGH(8) |            \
                                     PIN_ODR_HIGH(9) |            \
                                     PIN_ODR_HIGH(10) |            \
                                     PIN_ODR_HIGH(11) |            \
                                     PIN_ODR_HIGH(12) |           \
                                     PIN_ODR_HIGH(13) |              \
                                     PIN_ODR_HIGH(14) |         \
                                     PIN_ODR_HIGH(15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(0, 0) |           \
                                     PIN_AFIO_AF(1, 11) |  \
                                     PIN_AFIO_AF(2, 11) |      \
                                     PIN_AFIO_AF(3, 11) |      \
                                     PIN_AFIO_AF(4, 11) | \
                                     PIN_AFIO_AF(5, 11) | \
                                     PIN_AFIO_AF(6, 2) |      \
                                     PIN_AFIO_AF(7, 0))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(8, 0) |         \
                                     PIN_AFIO_AF(9, 0) |         \
                                     PIN_AFIO_AF(10, 6) |         \
                                     PIN_AFIO_AF(11, 6) |         \
                                     PIN_AFIO_AF(12, 6) |        \
                                     PIN_AFIO_AF(13, 0) |            \
                                     PIN_AFIO_AF(14, 0) |       \
                                     PIN_AFIO_AF(15, 0))

/*
 * GPIOD setup:
 *
 * PD0  - FFSK_BAUD_SELECT_LO       (output pushpull floating).
 * PD1  - FFSK_BAUD_SELECT_HI       (output pushpull floating).
 * PD2  - TIM3_ETR                  (alternate 2).
 * PD3  - FFSK_RX_EN                (output pushpull floating).
 * PD4  - FFSK_BANDPASS             (input pullup floating).
 * PD5  - UART2_TX                  (alternate 7).
 * PD6  - UART2_RX                  (alternate 7).
 * PD7  - FFSK_TX_EN                (output pushpull floating).
 * PD8  - UART3_TX                  (alternate 7).
 * PD9  - UART3_RX                  (alternate 7).
 * PD10 - PIN10                     (input pullup pulldown).
 * PD11 - PIN11                     (input pullup pulldown).
 * PD12 - PIN12                     (input pullup pulldown).
 * PD13 - PIN13                     (input pullup pulldown).
 * PD14 - PIN14                     (input pullup pulldown).
 * PD15 - PIN15                     (input pullup pulldown).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_OUTPUT(0) |           \
                                     PIN_MODE_OUTPUT(1) |           \
                                     PIN_MODE_ALTERNATE(2) |     \
                                     PIN_MODE_OUTPUT(3) |           \
                                     PIN_MODE_INPUT(4) |           \
                                     PIN_MODE_ALTERNATE(5) |           \
                                     PIN_MODE_ALTERNATE(6) |           \
                                     PIN_MODE_OUTPUT(7) |           \
                                     PIN_MODE_ALTERNATE(8) |           \
                                     PIN_MODE_ALTERNATE(9) |           \
                                     PIN_MODE_INPUT(10) |          \
                                     PIN_MODE_INPUT(11) |          \
                                     PIN_MODE_INPUT(12) |          \
                                     PIN_MODE_INPUT(13) |          \
                                     PIN_MODE_INPUT(14) |          \
                                     PIN_MODE_INPUT(15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(0) |       \
                                     PIN_OTYPE_PUSHPULL(1) |       \
                                     PIN_OTYPE_PUSHPULL(2) |     \
                                     PIN_OTYPE_PUSHPULL(3) |       \
                                     PIN_OTYPE_PUSHPULL(4) |       \
                                     PIN_OTYPE_PUSHPULL(5) |       \
                                     PIN_OTYPE_PUSHPULL(6) |       \
                                     PIN_OTYPE_PUSHPULL(7) |       \
                                     PIN_OTYPE_PUSHPULL(8) |       \
                                     PIN_OTYPE_PUSHPULL(9) |       \
                                     PIN_OTYPE_PUSHPULL(10) |      \
                                     PIN_OTYPE_PUSHPULL(11) |      \
                                     PIN_OTYPE_PUSHPULL(12) |      \
                                     PIN_OTYPE_PUSHPULL(13) |      \
                                     PIN_OTYPE_PUSHPULL(14) |      \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_100M(0) |          \
                                     PIN_OSPEED_100M(1) |          \
                                     PIN_OSPEED_100M(2) |        \
                                     PIN_OSPEED_100M(3) |          \
                                     PIN_OSPEED_100M(4) |          \
                                     PIN_OSPEED_100M(5) |          \
                                     PIN_OSPEED_100M(6) |          \
                                     PIN_OSPEED_100M(7) |          \
                                     PIN_OSPEED_100M(8) |          \
                                     PIN_OSPEED_100M(9) |          \
                                     PIN_OSPEED_100M(10) |         \
                                     PIN_OSPEED_100M(11) |         \
                                     PIN_OSPEED_100M(12) |         \
                                     PIN_OSPEED_100M(13) |         \
                                     PIN_OSPEED_100M(14) |         \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(0) |         \
                                     PIN_PUPDR_FLOATING(1) |         \
                                     PIN_PUPDR_FLOATING(2) |     \
                                     PIN_PUPDR_FLOATING(3) |         \
                                     PIN_PUPDR_FLOATING(4) |         \
                                     PIN_PUPDR_FLOATING(5) |         \
                                     PIN_PUPDR_FLOATING(6) |         \
                                     PIN_PUPDR_FLOATING(7) |         \
                                     PIN_PUPDR_FLOATING(8) |         \
                                     PIN_PUPDR_FLOATING(9) |         \
                                     PIN_PUPDR_PULLDOWN(10) |        \
                                     PIN_PUPDR_PULLDOWN(11) |        \
                                     PIN_PUPDR_PULLDOWN(12) |        \
                                     PIN_PUPDR_PULLDOWN(13) |        \
                                     PIN_PUPDR_PULLDOWN(14) |        \
                                     PIN_PUPDR_PULLDOWN(15))
#define VAL_GPIOD_ODR               (PIN_ODR_LOW(0) |             \
                                     PIN_ODR_HIGH(1) |             \
                                     PIN_ODR_HIGH(2) |           \
                                     PIN_ODR_LOW(3) |             \
                                     PIN_ODR_HIGH(4) |             \
                                     PIN_ODR_HIGH(5) |             \
                                     PIN_ODR_HIGH(6) |             \
                                     PIN_ODR_LOW(7) |             \
                                     PIN_ODR_HIGH(8) |             \
                                     PIN_ODR_HIGH(9) |             \
                                     PIN_ODR_HIGH(10) |            \
                                     PIN_ODR_HIGH(11) |            \
                                     PIN_ODR_HIGH(12) |            \
                                     PIN_ODR_HIGH(13) |            \
                                     PIN_ODR_HIGH(14) |            \
                                     PIN_ODR_HIGH(15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(0, 0) |           \
                                     PIN_AFIO_AF(1, 0) |           \
                                     PIN_AFIO_AF(2, 2) |        \
                                     PIN_AFIO_AF(3, 0) |           \
                                     PIN_AFIO_AF(4, 0) |           \
                                     PIN_AFIO_AF(5, 7) |           \
                                     PIN_AFIO_AF(6, 7) |           \
                                     PIN_AFIO_AF(7, 0))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(8, 7) |           \
                                     PIN_AFIO_AF(9, 7) |           \
                                     PIN_AFIO_AF(10, 0) |          \
                                     PIN_AFIO_AF(11, 0) |          \
                                     PIN_AFIO_AF(12, 0) |          \
                                     PIN_AFIO_AF(13, 0) |          \
                                     PIN_AFIO_AF(14, 0) |          \
                                     PIN_AFIO_AF(15, 0))

/*
 * GPIOE setup:
 *
 * PE0  - LED1                      (output opendrain low).
 * PE1  - LED2                      (output opendrain low).
 * PE2  - ETH_RESET                 (output opendrain high).
 * PE3  - LED3                      (output opendrain low).
 * PE4  - LED4                      (output opendrain low).
 * PE5  - PIN5                      (output pushpull pulldown).
 * PE6  - PIN6                      (output pushpull pulldown).
 * PE7  - PIN7                      (output pushpull pulldown).
 * PE8  - PIN8                      (output pushpull pulldown).
 * PE9  - PIN9                      (output pushpull pulldown).
 * PE10 - PIN10                     (output pushpull pulldown).
 * PE11 - PIN11                     (output pushpull pulldown).
 * PE12 - PIN12                     (output pushpull pulldown).
 * PE13 - PIN13                     (output pushpull pulldown).
 * PE14 - PIN14                     (output pushpull pulldown).
 * PE15 - PIN15                     (output pushpull pulldown).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_OUTPUT(0) |           \
                                     PIN_MODE_OUTPUT(1) |           \
                                     PIN_MODE_OUTPUT(2) |           \
                                     PIN_MODE_OUTPUT(3) |           \
                                     PIN_MODE_OUTPUT(4) |           \
                                     PIN_MODE_OUTPUT(5) |           \
                                     PIN_MODE_OUTPUT(6) |           \
                                     PIN_MODE_OUTPUT(7) |           \
                                     PIN_MODE_OUTPUT(8) |           \
                                     PIN_MODE_OUTPUT(9) |           \
                                     PIN_MODE_OUTPUT(10) |          \
                                     PIN_MODE_OUTPUT(11) |          \
                                     PIN_MODE_OUTPUT(12) |          \
                                     PIN_MODE_OUTPUT(13) |          \
                                     PIN_MODE_OUTPUT(14) |          \
                                     PIN_MODE_OUTPUT(15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_OPENDRAIN(0) |       \
                                     PIN_OTYPE_OPENDRAIN(1) |       \
                                     PIN_OTYPE_OPENDRAIN(2) |       \
                                     PIN_OTYPE_OPENDRAIN(3) |       \
                                     PIN_OTYPE_OPENDRAIN(4) |       \
                                     PIN_OTYPE_PUSHPULL(5) |       \
                                     PIN_OTYPE_PUSHPULL(6) |       \
                                     PIN_OTYPE_PUSHPULL(7) |       \
                                     PIN_OTYPE_PUSHPULL(8) |       \
                                     PIN_OTYPE_PUSHPULL(9) |       \
                                     PIN_OTYPE_PUSHPULL(10) |      \
                                     PIN_OTYPE_PUSHPULL(11) |      \
                                     PIN_OTYPE_PUSHPULL(12) |      \
                                     PIN_OTYPE_PUSHPULL(13) |      \
                                     PIN_OTYPE_PUSHPULL(14) |      \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_100M(0) |          \
                                     PIN_OSPEED_100M(1) |          \
                                     PIN_OSPEED_100M(2) |          \
                                     PIN_OSPEED_100M(3) |          \
                                     PIN_OSPEED_100M(4) |          \
                                     PIN_OSPEED_100M(5) |          \
                                     PIN_OSPEED_100M(6) |          \
                                     PIN_OSPEED_100M(7) |          \
                                     PIN_OSPEED_100M(8) |          \
                                     PIN_OSPEED_100M(9) |          \
                                     PIN_OSPEED_100M(10) |         \
                                     PIN_OSPEED_100M(11) |         \
                                     PIN_OSPEED_100M(12) |         \
                                     PIN_OSPEED_100M(13) |         \
                                     PIN_OSPEED_100M(14) |         \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(0) |         \
                                     PIN_PUPDR_FLOATING(1) |         \
                                     PIN_PUPDR_FLOATING(2) |         \
                                     PIN_PUPDR_FLOATING(3) |         \
                                     PIN_PUPDR_FLOATING(4) |         \
                                     PIN_PUPDR_PULLUP(5) |         \
                                     PIN_PUPDR_PULLUP(6) |         \
                                     PIN_PUPDR_PULLUP(7) |         \
                                     PIN_PUPDR_PULLUP(8) |         \
                                     PIN_PUPDR_PULLUP(9) |         \
                                     PIN_PUPDR_PULLUP(10) |        \
                                     PIN_PUPDR_PULLUP(11) |        \
                                     PIN_PUPDR_PULLUP(12) |        \
                                     PIN_PUPDR_PULLUP(13) |        \
                                     PIN_PUPDR_PULLUP(14) |        \
                                     PIN_PUPDR_PULLUP(15))
#define VAL_GPIOE_ODR               (PIN_ODR_LOW(0) |             \
                                     PIN_ODR_LOW(1) |             \
                                     PIN_ODR_LOW(2) |             \
                                     PIN_ODR_LOW(3) |             \
                                     PIN_ODR_LOW(4) |             \
                                     PIN_ODR_LOW(5) |             \
                                     PIN_ODR_LOW(6) |             \
                                     PIN_ODR_LOW(7) |             \
                                     PIN_ODR_LOW(8) |             \
                                     PIN_ODR_LOW(9) |             \
                                     PIN_ODR_LOW(10) |            \
                                     PIN_ODR_LOW(11) |            \
                                     PIN_ODR_LOW(12) |            \
                                     PIN_ODR_LOW(13) |            \
                                     PIN_ODR_LOW(14) |            \
                                     PIN_ODR_LOW(15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(0, 0) |           \
                                     PIN_AFIO_AF(1, 0) |           \
                                     PIN_AFIO_AF(2, 0) |           \
                                     PIN_AFIO_AF(3, 0) |           \
                                     PIN_AFIO_AF(4, 0) |           \
                                     PIN_AFIO_AF(5, 0) |           \
                                     PIN_AFIO_AF(6, 0) |           \
                                     PIN_AFIO_AF(7, 0))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(8, 0) |           \
                                     PIN_AFIO_AF(9, 0) |           \
                                     PIN_AFIO_AF(10, 0) |          \
                                     PIN_AFIO_AF(11, 0) |          \
                                     PIN_AFIO_AF(12, 0) |          \
                                     PIN_AFIO_AF(13, 0) |          \
                                     PIN_AFIO_AF(14, 0) |          \
                                     PIN_AFIO_AF(15, 0))

/*
 * GPIOF setup:
 *
 * PF0  - PF15                      (output pushpull pulldown).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_OUTPUT(0) |           \
                                     PIN_MODE_OUTPUT(1) |           \
                                     PIN_MODE_OUTPUT(2) |           \
                                     PIN_MODE_OUTPUT(3) |           \
                                     PIN_MODE_OUTPUT(4) |           \
                                     PIN_MODE_OUTPUT(5) |           \
                                     PIN_MODE_OUTPUT(6) |           \
                                     PIN_MODE_OUTPUT(7) |           \
                                     PIN_MODE_OUTPUT(8) |           \
                                     PIN_MODE_OUTPUT(9) |           \
                                     PIN_MODE_OUTPUT(10) |          \
                                     PIN_MODE_OUTPUT(11) |          \
                                     PIN_MODE_OUTPUT(12) |          \
                                     PIN_MODE_OUTPUT(13) |          \
                                     PIN_MODE_OUTPUT(14) |          \
                                     PIN_MODE_OUTPUT(15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(0) |       \
                                     PIN_OTYPE_PUSHPULL(1) |       \
                                     PIN_OTYPE_PUSHPULL(2) |       \
                                     PIN_OTYPE_PUSHPULL(3) |       \
                                     PIN_OTYPE_PUSHPULL(4) |       \
                                     PIN_OTYPE_PUSHPULL(5) |       \
                                     PIN_OTYPE_PUSHPULL(6) |       \
                                     PIN_OTYPE_PUSHPULL(7) |       \
                                     PIN_OTYPE_PUSHPULL(8) |       \
                                     PIN_OTYPE_PUSHPULL(9) |       \
                                     PIN_OTYPE_PUSHPULL(10) |      \
                                     PIN_OTYPE_PUSHPULL(11) |      \
                                     PIN_OTYPE_PUSHPULL(12) |      \
                                     PIN_OTYPE_PUSHPULL(13) |      \
                                     PIN_OTYPE_PUSHPULL(14) |      \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_100M(0) |          \
                                     PIN_OSPEED_100M(1) |          \
                                     PIN_OSPEED_100M(2) |          \
                                     PIN_OSPEED_100M(3) |          \
                                     PIN_OSPEED_100M(4) |          \
                                     PIN_OSPEED_100M(5) |          \
                                     PIN_OSPEED_100M(6) |          \
                                     PIN_OSPEED_100M(7) |          \
                                     PIN_OSPEED_100M(8) |          \
                                     PIN_OSPEED_100M(9) |          \
                                     PIN_OSPEED_100M(10) |         \
                                     PIN_OSPEED_100M(11) |         \
                                     PIN_OSPEED_100M(12) |         \
                                     PIN_OSPEED_100M(13) |         \
                                     PIN_OSPEED_100M(14) |         \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_PULLDOWN(0) |       \
                                     PIN_PUPDR_PULLDOWN(1) |       \
                                     PIN_PUPDR_PULLDOWN(2) |       \
                                     PIN_PUPDR_PULLDOWN(3) |       \
                                     PIN_PUPDR_PULLDOWN(4) |       \
                                     PIN_PUPDR_PULLDOWN(5) |       \
                                     PIN_PUPDR_PULLDOWN(6) |       \
                                     PIN_PUPDR_PULLDOWN(7) |       \
                                     PIN_PUPDR_PULLDOWN(8) |       \
                                     PIN_PUPDR_PULLDOWN(9) |       \
                                     PIN_PUPDR_PULLDOWN(10) |      \
                                     PIN_PUPDR_PULLDOWN(11) |      \
                                     PIN_PUPDR_PULLDOWN(12) |      \
                                     PIN_PUPDR_PULLDOWN(13) |      \
                                     PIN_PUPDR_PULLDOWN(14) |      \
                                     PIN_PUPDR_PULLDOWN(15))
#define VAL_GPIOF_ODR               (PIN_ODR_LOW(0) |             \
                                     PIN_ODR_LOW(1) |             \
                                     PIN_ODR_LOW(2) |             \
                                     PIN_ODR_LOW(3) |             \
                                     PIN_ODR_LOW(4) |             \
                                     PIN_ODR_LOW(5) |             \
                                     PIN_ODR_LOW(6) |             \
                                     PIN_ODR_LOW(7) |             \
                                     PIN_ODR_LOW(8) |             \
                                     PIN_ODR_LOW(9) |             \
                                     PIN_ODR_LOW(10) |            \
                                     PIN_ODR_LOW(11) |            \
                                     PIN_ODR_LOW(12) |            \
                                     PIN_ODR_LOW(13) |            \
                                     PIN_ODR_LOW(14) |            \
                                     PIN_ODR_LOW(15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(0, 0) |           \
                                     PIN_AFIO_AF(1, 0) |           \
                                     PIN_AFIO_AF(2, 0) |           \
                                     PIN_AFIO_AF(3, 0) |           \
                                     PIN_AFIO_AF(4, 0) |           \
                                     PIN_AFIO_AF(5, 0) |           \
                                     PIN_AFIO_AF(6, 0) |           \
                                     PIN_AFIO_AF(7, 0))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(8, 0) |           \
                                     PIN_AFIO_AF(9, 0) |           \
                                     PIN_AFIO_AF(10, 0) |          \
                                     PIN_AFIO_AF(11, 0) |          \
                                     PIN_AFIO_AF(12, 0) |          \
                                     PIN_AFIO_AF(13, 0) |          \
                                     PIN_AFIO_AF(14, 0) |          \
                                     PIN_AFIO_AF(15, 0))

/*
 * GPIOG setup:
 *
 * PG0  - PG15                      (output pushpull pulldown).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_OUTPUT(0) |           \
                                     PIN_MODE_OUTPUT(1) |           \
                                     PIN_MODE_OUTPUT(2) |           \
                                     PIN_MODE_OUTPUT(3) |           \
                                     PIN_MODE_OUTPUT(4) |           \
                                     PIN_MODE_OUTPUT(5) |           \
                                     PIN_MODE_OUTPUT(6) |           \
                                     PIN_MODE_OUTPUT(7) |           \
                                     PIN_MODE_OUTPUT(8) |           \
                                     PIN_MODE_OUTPUT(9) |           \
                                     PIN_MODE_OUTPUT(10) |          \
                                     PIN_MODE_OUTPUT(11) |          \
                                     PIN_MODE_OUTPUT(12) |          \
                                     PIN_MODE_OUTPUT(13) |          \
                                     PIN_MODE_OUTPUT(14) |          \
                                     PIN_MODE_OUTPUT(15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(0) |       \
                                     PIN_OTYPE_PUSHPULL(1) |       \
                                     PIN_OTYPE_PUSHPULL(2) |       \
                                     PIN_OTYPE_PUSHPULL(3) |       \
                                     PIN_OTYPE_PUSHPULL(4) |       \
                                     PIN_OTYPE_PUSHPULL(5) |       \
                                     PIN_OTYPE_PUSHPULL(6) |       \
                                     PIN_OTYPE_PUSHPULL(7) |       \
                                     PIN_OTYPE_PUSHPULL(8) |       \
                                     PIN_OTYPE_PUSHPULL(9) |       \
                                     PIN_OTYPE_PUSHPULL(10) |      \
                                     PIN_OTYPE_PUSHPULL(11) |      \
                                     PIN_OTYPE_PUSHPULL(12) |      \
                                     PIN_OTYPE_PUSHPULL(13) |      \
                                     PIN_OTYPE_PUSHPULL(14) |      \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_100M(0) |          \
                                     PIN_OSPEED_100M(1) |          \
                                     PIN_OSPEED_100M(2) |          \
                                     PIN_OSPEED_100M(3) |          \
                                     PIN_OSPEED_100M(4) |          \
                                     PIN_OSPEED_100M(5) |          \
                                     PIN_OSPEED_100M(6) |          \
                                     PIN_OSPEED_100M(7) |          \
                                     PIN_OSPEED_100M(8) |          \
                                     PIN_OSPEED_100M(9) |          \
                                     PIN_OSPEED_100M(10) |         \
                                     PIN_OSPEED_100M(11) |         \
                                     PIN_OSPEED_100M(12) |         \
                                     PIN_OSPEED_100M(13) |         \
                                     PIN_OSPEED_100M(14) |         \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_PULLDOWN(0) |       \
                                     PIN_PUPDR_PULLDOWN(1) |       \
                                     PIN_PUPDR_PULLDOWN(2) |       \
                                     PIN_PUPDR_PULLDOWN(3) |       \
                                     PIN_PUPDR_PULLDOWN(4) |       \
                                     PIN_PUPDR_PULLDOWN(5) |       \
                                     PIN_PUPDR_PULLDOWN(6) |       \
                                     PIN_PUPDR_PULLDOWN(7) |       \
                                     PIN_PUPDR_PULLDOWN(8) |       \
                                     PIN_PUPDR_PULLDOWN(9) |       \
                                     PIN_PUPDR_PULLDOWN(10) |      \
                                     PIN_PUPDR_PULLDOWN(11) |      \
                                     PIN_PUPDR_PULLDOWN(12) |      \
                                     PIN_PUPDR_PULLDOWN(13) |      \
                                     PIN_PUPDR_PULLDOWN(14) |      \
                                     PIN_PUPDR_PULLDOWN(15))
#define VAL_GPIOG_ODR               (PIN_ODR_LOW(0) |             \
                                     PIN_ODR_LOW(1) |             \
                                     PIN_ODR_LOW(2) |             \
                                     PIN_ODR_LOW(3) |             \
                                     PIN_ODR_LOW(4) |             \
                                     PIN_ODR_LOW(5) |             \
                                     PIN_ODR_LOW(6) |             \
                                     PIN_ODR_LOW(7) |             \
                                     PIN_ODR_LOW(8) |             \
                                     PIN_ODR_LOW(9) |             \
                                     PIN_ODR_LOW(10) |            \
                                     PIN_ODR_LOW(11) |            \
                                     PIN_ODR_LOW(12) |            \
                                     PIN_ODR_LOW(13) |            \
                                     PIN_ODR_LOW(14) |            \
                                     PIN_ODR_LOW(15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(0, 0) |           \
                                     PIN_AFIO_AF(1, 0) |           \
                                     PIN_AFIO_AF(2, 0) |           \
                                     PIN_AFIO_AF(3, 0) |           \
                                     PIN_AFIO_AF(4, 0) |           \
                                     PIN_AFIO_AF(5, 0) |           \
                                     PIN_AFIO_AF(6, 0) |           \
                                     PIN_AFIO_AF(7, 0))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(8, 0) |           \
                                     PIN_AFIO_AF(9, 0) |           \
                                     PIN_AFIO_AF(10, 0) |          \
                                     PIN_AFIO_AF(11, 0) |          \
                                     PIN_AFIO_AF(12, 0) |          \
                                     PIN_AFIO_AF(13, 0) |          \
                                     PIN_AFIO_AF(14, 0) |          \
                                     PIN_AFIO_AF(15, 0))

/*
 * GPIOH setup:
 * PH0 - OSC_IN						(input floating)
 * PH1 - OSC_OUT					(input floating)
 * PH2 - PH15                       (output pushpull pulldown).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(0) |           \
                                     PIN_MODE_INPUT(1) |           \
                                     PIN_MODE_OUTPUT(2) |           \
                                     PIN_MODE_OUTPUT(3) |           \
                                     PIN_MODE_OUTPUT(4) |           \
                                     PIN_MODE_OUTPUT(5) |           \
                                     PIN_MODE_OUTPUT(6) |           \
                                     PIN_MODE_OUTPUT(7) |           \
                                     PIN_MODE_OUTPUT(8) |           \
                                     PIN_MODE_OUTPUT(9) |           \
                                     PIN_MODE_OUTPUT(10) |          \
                                     PIN_MODE_OUTPUT(11) |          \
                                     PIN_MODE_OUTPUT(12) |          \
                                     PIN_MODE_OUTPUT(13) |          \
                                     PIN_MODE_OUTPUT(14) |          \
                                     PIN_MODE_OUTPUT(15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(0) |       \
                                     PIN_OTYPE_PUSHPULL(1) |       \
                                     PIN_OTYPE_PUSHPULL(2) |       \
                                     PIN_OTYPE_PUSHPULL(3) |       \
                                     PIN_OTYPE_PUSHPULL(4) |       \
                                     PIN_OTYPE_PUSHPULL(5) |       \
                                     PIN_OTYPE_PUSHPULL(6) |       \
                                     PIN_OTYPE_PUSHPULL(7) |       \
                                     PIN_OTYPE_PUSHPULL(8) |       \
                                     PIN_OTYPE_PUSHPULL(9) |       \
                                     PIN_OTYPE_PUSHPULL(10) |      \
                                     PIN_OTYPE_PUSHPULL(11) |      \
                                     PIN_OTYPE_PUSHPULL(12) |      \
                                     PIN_OTYPE_PUSHPULL(13) |      \
                                     PIN_OTYPE_PUSHPULL(14) |      \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_100M(0) |          \
                                     PIN_OSPEED_100M(1) |          \
                                     PIN_OSPEED_100M(2) |          \
                                     PIN_OSPEED_100M(3) |          \
                                     PIN_OSPEED_100M(4) |          \
                                     PIN_OSPEED_100M(5) |          \
                                     PIN_OSPEED_100M(6) |          \
                                     PIN_OSPEED_100M(7) |          \
                                     PIN_OSPEED_100M(8) |          \
                                     PIN_OSPEED_100M(9) |          \
                                     PIN_OSPEED_100M(10) |         \
                                     PIN_OSPEED_100M(11) |         \
                                     PIN_OSPEED_100M(12) |         \
                                     PIN_OSPEED_100M(13) |         \
                                     PIN_OSPEED_100M(14) |         \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(0) |       \
                                     PIN_PUPDR_FLOATING(1) |       \
                                     PIN_PUPDR_PULLDOWN(2) |       \
                                     PIN_PUPDR_PULLDOWN(3) |       \
                                     PIN_PUPDR_PULLDOWN(4) |       \
                                     PIN_PUPDR_PULLDOWN(5) |       \
                                     PIN_PUPDR_PULLDOWN(6) |       \
                                     PIN_PUPDR_PULLDOWN(7) |       \
                                     PIN_PUPDR_PULLDOWN(8) |       \
                                     PIN_PUPDR_PULLDOWN(9) |       \
                                     PIN_PUPDR_PULLDOWN(10) |      \
                                     PIN_PUPDR_PULLDOWN(11) |      \
                                     PIN_PUPDR_PULLDOWN(12) |      \
                                     PIN_PUPDR_PULLDOWN(13) |      \
                                     PIN_PUPDR_PULLDOWN(14) |      \
                                     PIN_PUPDR_PULLDOWN(15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(0) |             \
                                     PIN_ODR_HIGH(1) |             \
                                     PIN_ODR_LOW(2) |             \
                                     PIN_ODR_LOW(3) |             \
                                     PIN_ODR_LOW(4) |             \
                                     PIN_ODR_LOW(5) |             \
                                     PIN_ODR_LOW(6) |             \
                                     PIN_ODR_LOW(7) |             \
                                     PIN_ODR_LOW(8) |             \
                                     PIN_ODR_LOW(9) |             \
                                     PIN_ODR_LOW(10) |            \
                                     PIN_ODR_LOW(11) |            \
                                     PIN_ODR_LOW(12) |            \
                                     PIN_ODR_LOW(13) |            \
                                     PIN_ODR_LOW(14) |            \
                                     PIN_ODR_LOW(15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(0, 0) |           \
                                     PIN_AFIO_AF(1, 0) |           \
                                     PIN_AFIO_AF(2, 0) |           \
                                     PIN_AFIO_AF(3, 0) |           \
                                     PIN_AFIO_AF(4, 0) |           \
                                     PIN_AFIO_AF(5, 0) |           \
                                     PIN_AFIO_AF(6, 0) |           \
                                     PIN_AFIO_AF(7, 0))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(8, 0) |           \
                                     PIN_AFIO_AF(9, 0) |           \
                                     PIN_AFIO_AF(10, 0) |          \
                                     PIN_AFIO_AF(11, 0) |          \
                                     PIN_AFIO_AF(12, 0) |          \
                                     PIN_AFIO_AF(13, 0) |          \
                                     PIN_AFIO_AF(14, 0) |          \
                                     PIN_AFIO_AF(15, 0))

/*
 * GPIOI setup:
 *
 * PI0  - PI15                      (output pushpull pulldown).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_OUTPUT(0) |           \
                                     PIN_MODE_OUTPUT(1) |           \
                                     PIN_MODE_OUTPUT(2) |           \
                                     PIN_MODE_OUTPUT(3) |           \
                                     PIN_MODE_OUTPUT(4) |           \
                                     PIN_MODE_OUTPUT(5) |           \
                                     PIN_MODE_OUTPUT(6) |           \
                                     PIN_MODE_OUTPUT(7) |           \
                                     PIN_MODE_OUTPUT(8) |           \
                                     PIN_MODE_OUTPUT(9) |           \
                                     PIN_MODE_OUTPUT(10) |          \
                                     PIN_MODE_OUTPUT(11) |          \
                                     PIN_MODE_OUTPUT(12) |          \
                                     PIN_MODE_OUTPUT(13) |          \
                                     PIN_MODE_OUTPUT(14) |          \
                                     PIN_MODE_OUTPUT(15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(0) |       \
                                     PIN_OTYPE_PUSHPULL(1) |       \
                                     PIN_OTYPE_PUSHPULL(2) |       \
                                     PIN_OTYPE_PUSHPULL(3) |       \
                                     PIN_OTYPE_PUSHPULL(4) |       \
                                     PIN_OTYPE_PUSHPULL(5) |       \
                                     PIN_OTYPE_PUSHPULL(6) |       \
                                     PIN_OTYPE_PUSHPULL(7) |       \
                                     PIN_OTYPE_PUSHPULL(8) |       \
                                     PIN_OTYPE_PUSHPULL(9) |       \
                                     PIN_OTYPE_PUSHPULL(10) |      \
                                     PIN_OTYPE_PUSHPULL(11) |      \
                                     PIN_OTYPE_PUSHPULL(12) |      \
                                     PIN_OTYPE_PUSHPULL(13) |      \
                                     PIN_OTYPE_PUSHPULL(14) |      \
                                     PIN_OTYPE_PUSHPULL(15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_100M(0) |          \
                                     PIN_OSPEED_100M(1) |          \
                                     PIN_OSPEED_100M(2) |          \
                                     PIN_OSPEED_100M(3) |          \
                                     PIN_OSPEED_100M(4) |          \
                                     PIN_OSPEED_100M(5) |          \
                                     PIN_OSPEED_100M(6) |          \
                                     PIN_OSPEED_100M(7) |          \
                                     PIN_OSPEED_100M(8) |          \
                                     PIN_OSPEED_100M(9) |          \
                                     PIN_OSPEED_100M(10) |         \
                                     PIN_OSPEED_100M(11) |         \
                                     PIN_OSPEED_100M(12) |         \
                                     PIN_OSPEED_100M(13) |         \
                                     PIN_OSPEED_100M(14) |         \
                                     PIN_OSPEED_100M(15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLDOWN(0) |       \
                                     PIN_PUPDR_PULLDOWN(1) |       \
                                     PIN_PUPDR_PULLDOWN(2) |       \
                                     PIN_PUPDR_PULLDOWN(3) |       \
                                     PIN_PUPDR_PULLDOWN(4) |       \
                                     PIN_PUPDR_PULLDOWN(5) |       \
                                     PIN_PUPDR_PULLDOWN(6) |       \
                                     PIN_PUPDR_PULLDOWN(7) |       \
                                     PIN_PUPDR_PULLDOWN(8) |       \
                                     PIN_PUPDR_PULLDOWN(9) |       \
                                     PIN_PUPDR_PULLDOWN(10) |      \
                                     PIN_PUPDR_PULLDOWN(11) |      \
                                     PIN_PUPDR_PULLDOWN(12) |      \
                                     PIN_PUPDR_PULLDOWN(13) |      \
                                     PIN_PUPDR_PULLDOWN(14) |      \
                                     PIN_PUPDR_PULLDOWN(15))
#define VAL_GPIOI_ODR               (PIN_ODR_LOW(0) |             \
                                     PIN_ODR_LOW(1) |             \
                                     PIN_ODR_LOW(2) |             \
                                     PIN_ODR_LOW(3) |             \
                                     PIN_ODR_LOW(4) |             \
                                     PIN_ODR_LOW(5) |             \
                                     PIN_ODR_LOW(6) |             \
                                     PIN_ODR_LOW(7) |             \
                                     PIN_ODR_LOW(8) |             \
                                     PIN_ODR_LOW(9) |             \
                                     PIN_ODR_LOW(10) |            \
                                     PIN_ODR_LOW(11) |            \
                                     PIN_ODR_LOW(12) |            \
                                     PIN_ODR_LOW(13) |            \
                                     PIN_ODR_LOW(14) |            \
                                     PIN_ODR_LOW(15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(0, 0) |           \
                                     PIN_AFIO_AF(1, 0) |           \
                                     PIN_AFIO_AF(2, 0) |           \
                                     PIN_AFIO_AF(3, 0) |           \
                                     PIN_AFIO_AF(4, 0) |           \
                                     PIN_AFIO_AF(5, 0) |           \
                                     PIN_AFIO_AF(6, 0) |           \
                                     PIN_AFIO_AF(7, 0))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(8, 0) |           \
                                     PIN_AFIO_AF(9, 0) |           \
                                     PIN_AFIO_AF(10, 0) |          \
                                     PIN_AFIO_AF(11, 0) |          \
                                     PIN_AFIO_AF(12, 0) |          \
                                     PIN_AFIO_AF(13, 0) |          \
                                     PIN_AFIO_AF(14, 0) |          \
                                     PIN_AFIO_AF(15, 0))



#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
