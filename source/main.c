/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_spi.h"
#include "fsl_debug_console.h"

#include "board.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "peripherals.h"

#include "epaper_2in13.h"
#include "Fonts/fonts.h"
#include "GUI/GUI_Paint.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

int main(void)
{
    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
    BOARD_InitPeripherals();
    PRINTF("\n\r Demo Start...\n\r");

    EPD_Reset();
    unsigned char status;
    status = EPD_Init(FULL_UPDATE);

    EPD_Clear();
//    EPD_Black();
    EPD_Display(nxp_image);

    unsigned char BlackImage[4000];
    Paint_NewImage(BlackImage, EPD_WIDTH, EPD_HEIGHT, 270, WHITE);
    Paint_SelectImage(BlackImage);
    Paint_SetMirroring(MIRROR_HORIZONTAL); //
    Paint_Clear(WHITE);

    Paint_DrawString_EN(10,10,"Display DEMO",&Font24, WHITE, BLACK);
    Paint_DrawString_EN(10,70,"Battery $",&Font24, WHITE, BLACK);
//    Paint_DrawString_EN(100,35,"65'C",&Font20, WHITE, BLACK);
//    Paint_DrawString_EN(10,70,"Teplota Boileru:",&Font24, WHITE, BLACK);
//    Paint_DrawString_EN(100,95,"55'C",&Font20, WHITE, BLACK);
    EPD_Display(BlackImage);


    while (1)
    {
    }
}
