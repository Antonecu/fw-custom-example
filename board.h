/**
 * @file board.h
 *
 * @date Feb 06, 2021
 * @author Andrey Gusakov, 2021
 */

#ifndef BOARD_H
#define BOARD_H
/*
 * Board identifier.
 */
#define BOARD_NAME                  "F4 for rusEFI"

#define EFI_USB_AF 10U
#define EFI_USB_SERIAL_DM Gpio::A11
#define EFI_USB_SERIAL_DP Gpio::A12

// Ignore USB VBUS pin (we're never a host, only a device)
#define BOARD_OTG_NOVBUSSENS TRUE

/*
 * Ethernet PHY type.
 */
#define BOARD_PHY_ID                MII_LAN8742A_ID
#define BOARD_PHY_RMII

/*
 * Default to input mode, with internal pulldown resistor enabled.
 */
#define EFI_PIN_MODE_DEFAULT PIN_MODE_INPUT
#ifndef EFI_DR_DEFAULT
#define EFI_DR_DEFAULT PIN_PUPDR_PULLDOWN
#endif

// See https://github.com/rusefi/rusefi/issues/397
#define DEFAULT_GPIO_SPEED PIN_OSPEED_HIGH

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   300U

/*
 * MCU type as defined in the ST header.
 * this declaration for stm32_registry.h
 */
#define STM32F407xx

#endif /* BOARD_H */
