/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: K32L2B31xxxxA
package_id: K32L2B31VLH0A
mcu_data: ksdk2_0
processor_version: 0.7.1
board: FRDM-K32L2B
pin_labels:
- {pin_num: '29', pin_signal: PTA13/TPM1_CH1, label: 'J2[2]/D8', identifier: DP_DC}
- {pin_num: '59', pin_signal: LCD_P42/PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO/FXIO0_D2, label: 'J2[4]/D9/LCD_P42', identifier: LCD_P42;DP_RST}
- {pin_num: '61', pin_signal: LCD_P44/PTD4/LLWU_P14/SPI1_SS/UART2_RX/TPM0_CH4/FXIO0_D4, label: 'J2[6]/D10/SPI1_PCS0/LCD_P44', identifier: LCD_P44;DP_CS}
- {pin_num: '63', pin_signal: LCD_P46/ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/LPUART0_RX/SPI1_MISO/FXIO0_D6, label: 'J2[8]/D11/SPI1_MOSI/LCD_P46', identifier: DP_DIN}
- {pin_num: '64', pin_signal: LCD_P47/PTD7/SPI1_MISO/LPUART0_TX/SPI1_MOSI/FXIO0_D7, label: 'J2[10]/D12/SPI1_MISO/LCD_P47', identifier: DP_BUSY}
- {pin_num: '62', pin_signal: LCD_P45/ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5/FXIO0_D5, label: 'J2[12]/D13/SPI1_SCK/LED1/LCD_P45', identifier: LED1;DP_SCK}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '23', peripheral: LPUART0, signal: RX, pin_signal: PTA1/LPUART0_RX/TPM2_CH0, pull_enable: enable}
  - {pin_num: '24', peripheral: LPUART0, signal: TX, pin_signal: PTA2/LPUART0_TX/TPM2_CH1, pull_enable: enable}
  - {pin_num: '61', peripheral: SPI1, signal: PCS0, pin_signal: LCD_P44/PTD4/LLWU_P14/SPI1_SS/UART2_RX/TPM0_CH4/FXIO0_D4, identifier: DP_CS, pull_enable: enable}
  - {pin_num: '62', peripheral: SPI1, signal: SCK, pin_signal: LCD_P45/ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5/FXIO0_D5, identifier: DP_SCK, pull_enable: enable}
  - {pin_num: '63', peripheral: SPI1, signal: MOSI, pin_signal: LCD_P46/ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/LPUART0_RX/SPI1_MISO/FXIO0_D6, pull_enable: enable}
  - {pin_num: '29', peripheral: GPIOA, signal: 'GPIO, 13', pin_signal: PTA13/TPM1_CH1, direction: OUTPUT, pull_enable: enable}
  - {pin_num: '59', peripheral: GPIOD, signal: 'GPIO, 2', pin_signal: LCD_P42/PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO/FXIO0_D2, identifier: DP_RST, direction: OUTPUT,
    pull_enable: enable}
  - {pin_num: '64', peripheral: GPIOD, signal: 'GPIO, 7', pin_signal: LCD_P47/PTD7/SPI1_MISO/LPUART0_TX/SPI1_MOSI/FXIO0_D7, direction: INPUT, pull_enable: enable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port D Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);

    gpio_pin_config_t DP_DC_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA13 (pin 29)  */
    GPIO_PinInit(BOARD_DP_DC_GPIO, BOARD_DP_DC_PIN, &DP_DC_config);

    gpio_pin_config_t DP_RST_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD2 (pin 59)  */
    GPIO_PinInit(BOARD_DP_RST_GPIO, BOARD_DP_RST_PIN, &DP_RST_config);

    gpio_pin_config_t DP_BUSY_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD7 (pin 64)  */
    GPIO_PinInit(BOARD_DP_BUSY_GPIO, BOARD_DP_BUSY_PIN, &DP_BUSY_config);

    /* PORTA1 (pin 23) is configured as LPUART0_RX */
    PORT_SetPinMux(BOARD_DEBUG_UART0_RX_PORT, BOARD_DEBUG_UART0_RX_PIN, kPORT_MuxAlt2);

    PORTA->PCR[1] = ((PORTA->PCR[1] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Enable: Internal pullup or pulldown resistor is enabled on the corresponding pin. */
                     | (uint32_t)(PORT_PCR_PE_MASK));

    /* PORTA13 (pin 29) is configured as PTA13 */
    PORT_SetPinMux(BOARD_DP_DC_PORT, BOARD_DP_DC_PIN, kPORT_MuxAsGpio);

    PORTA->PCR[13] = ((PORTA->PCR[13] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Enable: Internal pullup or pulldown resistor is enabled on the corresponding pin. */
                      | (uint32_t)(PORT_PCR_PE_MASK));

    /* PORTA2 (pin 24) is configured as LPUART0_TX */
    PORT_SetPinMux(BOARD_DEBUG_UART0_TX_PORT, BOARD_DEBUG_UART0_TX_PIN, kPORT_MuxAlt2);

    PORTA->PCR[2] = ((PORTA->PCR[2] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Enable: Internal pullup or pulldown resistor is enabled on the corresponding pin. */
                     | (uint32_t)(PORT_PCR_PE_MASK));

    /* PORTD2 (pin 59) is configured as PTD2 */
    PORT_SetPinMux(BOARD_DP_RST_PORT, BOARD_DP_RST_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[2] = ((PORTD->PCR[2] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Enable: Internal pullup or pulldown resistor is enabled on the corresponding pin. */
                     | (uint32_t)(PORT_PCR_PE_MASK));

    /* PORTD4 (pin 61) is configured as SPI1_SS */
    PORT_SetPinMux(BOARD_DP_CS_PORT, BOARD_DP_CS_PIN, kPORT_MuxAlt2);

    PORTD->PCR[4] = ((PORTD->PCR[4] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Enable: Internal pullup or pulldown resistor is enabled on the corresponding pin. */
                     | (uint32_t)(PORT_PCR_PE_MASK));

    /* PORTD5 (pin 62) is configured as SPI1_SCK */
    PORT_SetPinMux(BOARD_DP_SCK_PORT, BOARD_DP_SCK_PIN, kPORT_MuxAlt2);

    PORTD->PCR[5] = ((PORTD->PCR[5] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Enable: Internal pullup or pulldown resistor is enabled on the corresponding pin. */
                     | (uint32_t)(PORT_PCR_PE_MASK));

    /* PORTD6 (pin 63) is configured as SPI1_MOSI */
    PORT_SetPinMux(BOARD_DP_DIN_PORT, BOARD_DP_DIN_PIN, kPORT_MuxAlt2);

    PORTD->PCR[6] = ((PORTD->PCR[6] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Enable: Internal pullup or pulldown resistor is enabled on the corresponding pin. */
                     | (uint32_t)(PORT_PCR_PE_MASK));

    /* PORTD7 (pin 64) is configured as PTD7 */
    PORT_SetPinMux(BOARD_DP_BUSY_PORT, BOARD_DP_BUSY_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[7] = ((PORTD->PCR[7] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Enable: Internal pullup or pulldown resistor is enabled on the corresponding pin. */
                     | (uint32_t)(PORT_PCR_PE_MASK));

    SIM->SOPT5 = ((SIM->SOPT5 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT5_LPUART0TXSRC_MASK | SIM_SOPT5_LPUART0RXSRC_MASK)))

                  /* LPUART0 Transmit Data Source Select: LPUART0_TX pin. */
                  | SIM_SOPT5_LPUART0TXSRC(SOPT5_LPUART0TXSRC_LPUART_TX)

                  /* LPUART0 Receive Data Source Select: LPUART_RX pin. */
                  | SIM_SOPT5_LPUART0RXSRC(SOPT5_LPUART0RXSRC_LPUART_RX));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/