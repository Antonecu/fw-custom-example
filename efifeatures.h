/**
 * @file efifeatures.h
 */

#pragma once

#include "../../stm32f4ems/efifeatures.h"

#define EFI_SDC_DEVICE SDCD1

#undef EFI_RTC
#define EFI_RTC FALSE

#undef EFI_BLUETOOTH_SETUP
#define EFI_BLUETOOTH_SETUP FALSE

#undef SERIAL_SPEED
#define SERIAL_SPEED 115200

#undef EFI_MAIN_RELAY_CONTROL
#define EFI_MAIN_RELAY_CONTROL FALSE

#undef EFI_ONBOARD_MEMS
#define EFI_ONBOARD_MEMS FALSE

#undef EFI_HPFP
#define EFI_HPFP FALSE

#undef EFI_ALTERNATOR_CONTROL
#define EFI_ALTERNATOR_CONTROL FALSE


