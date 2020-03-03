/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT5_LPUART0RXSRC_LPUART_RX 0x00u /*!<@brief LPUART0 Receive Data Source Select: LPUART_RX pin */
#define SOPT5_LPUART0TXSRC_LPUART_TX 0x00u /*!<@brief LPUART0 Transmit Data Source Select: LPUART0_TX pin */

/*! @name PORTA1 (number 23), J1[2]/D0/UART0_RX
  @{ */
#define BOARD_DEBUG_UART0_RX_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_DEBUG_UART0_RX_PIN 1U     /*!<@brief PORTA pin index: 1 */
                                        /* @} */

/*! @name PORTA2 (number 24), J1[4]/D1/UART0_TX
  @{ */
#define BOARD_DEBUG_UART0_TX_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_DEBUG_UART0_TX_PIN 2U     /*!<@brief PORTA pin index: 2 */
                                        /* @} */

/*! @name PORTD4 (number 61), J2[6]/D10/SPI1_PCS0/LCD_P44
  @{ */
#define BOARD_DP_CS_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_DP_CS_PIN 4U     /*!<@brief PORTD pin index: 4 */
                               /* @} */

/*! @name PORTD5 (number 62), J2[12]/D13/SPI1_SCK/LED1/LCD_P45
  @{ */
#define BOARD_DP_SCK_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_DP_SCK_PIN 5U     /*!<@brief PORTD pin index: 5 */
                                /* @} */

/*! @name PORTD6 (number 63), J2[8]/D11/SPI1_MOSI/LCD_P46
  @{ */
#define BOARD_DP_DIN_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_DP_DIN_PIN 6U     /*!<@brief PORTD pin index: 6 */
                                /* @} */

/*! @name PORTA13 (number 29), J2[2]/D8
  @{ */
#define BOARD_DP_DC_GPIO GPIOA /*!<@brief GPIO device name: GPIOA */
#define BOARD_DP_DC_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_DP_DC_PIN 13U    /*!<@brief PORTA pin index: 13 */
                               /* @} */

/*! @name PORTD2 (number 59), J2[4]/D9/LCD_P42
  @{ */
#define BOARD_DP_RST_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_DP_RST_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_DP_RST_PIN 2U     /*!<@brief PORTD pin index: 2 */
                                /* @} */

/*! @name PORTD7 (number 64), J2[10]/D12/SPI1_MISO/LCD_P47
  @{ */
#define BOARD_DP_BUSY_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_DP_BUSY_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_DP_BUSY_PIN 7U     /*!<@brief PORTD pin index: 7 */
                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
