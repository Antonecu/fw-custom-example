/**
 * @file board.h
 *
 * @date Jan 03, 2023
 * @author Andrey Gusakov, 2023
 */

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Board identifier.
 */
#define BOARD_NAME                  "F4 for rusEFI"

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

#define VAL_GPIOC_MODER (PIN_MODE_ALTERNATE(8) | \
                         PIN_MODE_ALTERNATE(9) | \
                         PIN_MODE_ALTERNATE(10) | \
                         PIN_MODE_ALTERNATE(11) | \
                         PIN_MODE_ALTERNATE(12))
#define VAL_GPIOD_MODER  PIN_MODE_ALTERNATE(2)
#define VAL_GPIOC_AFRL  (PIN_AFIO_AF(8, 11U) | \
                         PIN_AFIO_AF(9, 11U) | \
                         PIN_AFIO_AF(10, 10U) | \
                         PIN_AFIO_AF(11, 11U) | \
                         PIN_AFIO_AF(12, 11U))
#define VAL_GPIOD_AFRL   PIN_AFIO_AF(2, 11U)


#endif /* _BOARD_H_ */
