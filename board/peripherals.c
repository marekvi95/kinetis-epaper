/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v7.0
processor: K32L2B31xxxxA
package_id: K32L2B31VLH0A
mcu_data: ksdk2_0
processor_version: 0.7.1
board: FRDM-K32L2B
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: 0fe5e083-5d00-47af-955e-ef26cbfa4747
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'msg'
- type_id: 'msg_6e2baaf3b97dbeef01c0043275f9a0e7'
- global_messages: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * SPI1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'SPI1'
- type: 'spi'
- mode: 'SPI_Polling'
- custom_name_enabled: 'false'
- type_id: 'spi_672b694426b0a10a1d774659ee8f8435'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'SPI1'
- config_sets:
  - fsl_spi:
    - spi_mode: 'kSPI_Master'
    - clockSource: 'BusInterfaceClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - spi_master_config:
      - enableMaster: 'true'
      - enableStopInWaitMode: 'false'
      - polarity: 'kSPI_ClockPolarityActiveHigh'
      - phase: 'kSPI_ClockPhaseFirstEdge'
      - direction: 'kSPI_MsbFirst'
      - dataMode: 'kSPI_8BitMode'
      - txWatermark: 'kSPI_TxFifoOneHalfEmpty'
      - rxWatermark: 'kSPI_RxFifoOneHalfFull'
      - outputMode: 'kSPI_SlaveSelectAutomaticOutput'
      - pinMode: 'kSPI_PinModeNormal'
      - baudRate_Bps: '2500000'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const spi_master_config_t SPI1_config = {
  .enableMaster = true,
  .enableStopInWaitMode = false,
  .polarity = kSPI_ClockPolarityActiveHigh,
  .phase = kSPI_ClockPhaseFirstEdge,
  .direction = kSPI_MsbFirst,
  .dataMode = kSPI_8BitMode,
  .txWatermark = kSPI_TxFifoOneHalfEmpty,
  .rxWatermark = kSPI_RxFifoOneHalfFull,
  .outputMode = kSPI_SlaveSelectAutomaticOutput,
  .pinMode = kSPI_PinModeNormal,
  .baudRate_Bps = 2500000
};

void SPI1_init(void) {
  /* Initialization function */
  SPI_MasterInit(SPI1_PERIPHERAL, &SPI1_config, SPI1_CLK_FREQ);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  SPI1_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
