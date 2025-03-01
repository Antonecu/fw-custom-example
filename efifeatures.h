/**
 * @file boards/subaru_eg33/efifeatures.h
 *
 * @brief In this header we can override efifeatures.h.
 *
 * @date Feb 06, 2021
 * @author Andrey Gusakov, 2021
 */

#pragma once

#include "../../stm32f7ems/efifeatures.h"

#define EFI_SDC_DEVICE				SDCD2

#undef EFI_UART_GPS
#define EFI_UART_GPS				FALSE

#undef EFI_BLUETOOTH_SETUP
#define EFI_BLUETOOTH_SETUP			FALSE

#undef SERIAL_SPEED
#define SERIAL_SPEED				115200

#undef EFI_MAIN_RELAY_CONTROL
#define EFI_MAIN_RELAY_CONTROL		FALSE

#undef EFI_ONBOARD_MEMS
#define EFI_ONBOARD_MEMS 			FALSE
