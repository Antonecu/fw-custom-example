 *
 * @date Feb 06, 2021
 * @author Andrey Gusakov, 2021
 */

#ifndef BOARD_IO_H
#define BOARD_IO_H

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
   
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

   /*
 * GPIOC setup:
 * PC8  - MMC D0
 * PC9  - MMC D1
 * PC10 - MMC D2
 * PC11 - MMC D3
 * PC12 - MMC CLK
 */
#define VAL_GPIOC_MODER    (PIN_MODE_INPUT(0) | \
               PIN_MODE_INPUT(1) | \
               PIN_MODE_INPUT(2) | \
               PIN_MODE_INPUT(3) | \
               PIN_MODE_INPUT(4) | \
               PIN_MODE_INPUT(5) | \
               PIN_MODE_INPUT(6) | \
               PIN_MODE_INPUT(7) | \
               PIN_MODE_ALTERNATE(8) | \
               PIN_MODE_ALTERNATE(9) | \
               PIN_MODE_ALTERNATE(10) | \
               PIN_MODE_ALTERNATE(11) | \
               PIN_MODE_ALTERNATE(12) | \
               PIN_MODE_INPUT(13) | \
               PIN_MODE_INPUT(14) | \
               PIN_MODE_INPUT(15))
#define VAL_GPIOC_PUPDR   (PIN_PUPDR_PULLDOWN( 0)	| \
							 PIN_PUPDR_PULLDOWN( 1)	| \
							 PIN_PUPDR_PULLDOWN( 2)	| \
							 PIN_PUPDR_PULLDOWN( 3)	| \
							 PIN_PUPDR_PULLDOWN( 4)	| \
							 PIN_PUPDR_PULLDOWN( 5)	| \
							 PIN_PUPDR_PULLDOWN( 6)	| \
							 PIN_PUPDR_PULLDOWN( 7)	| \
							 PIN_PUPDR_PULLUP( 8)	| \
							 PIN_PUPDR_PULLUP( 9)	| \
							 PIN_PUPDR_PULLUP(10)	| \
							 PIN_PUPDR_PULLUP(11)	| \
							 PIN_PUPDR_FLOATING(12)	| \
							 PIN_PUPDR_PULLDOWN(13)	| \
							 PIN_PUPDR_PULLDOWN(14)	| \
							 PIN_PUPDR_PULLDOWN(15))
#define VAL_GPIOC_AFRL   (PIN_AFIO_AF(0, 0U) | \
               PIN_AFIO_AF(1, 0U) | \
               PIN_AFIO_AF(2, 0U) | \
               PIN_AFIO_AF(3, 0U) | \
               PIN_AFIO_AF(4, 0U) | \
               PIN_AFIO_AF(5, 0U) | \
               PIN_AFIO_AF(6, 0U) | \
               PIN_AFIO_AF(7, 0U))
#define VAL_GPIOC_AFRH   (PIN_AFIO_AF(8, 11U) | \
               PIN_AFIO_AF(9, 11U) | \
               PIN_AFIO_AF(10, 10U) | \
               PIN_AFIO_AF(11, 11U) | \
               PIN_AFIO_AF(12, 11U) | \
               PIN_AFIO_AF(13, 0U) | \
               PIN_AFIO_AF(14, 0U) | \
               PIN_AFIO_AF(15, 0U))

/*
 * GPIOD setup:
 *
 * PD2 - MMC CMD
 */
#define VAL_GPIOD_MODER    (PIN_MODE_INPUT(0) | \
               PIN_MODE_INPUT(1) | \
               PIN_MODE_ALTERNATE(2) | \
               PIN_MODE_INPUT(3) | \
               PIN_MODE_INPUT(4) | \
               PIN_MODE_INPUT(5) | \
               PIN_MODE_INPUT(6) | \
               PIN_MODE_INPUT(7) | \
               PIN_MODE_INPUT(8) | \
               PIN_MODE_INPUT(9) | \
               PIN_MODE_INPUT(10) | \
               PIN_MODE_INPUT(11) | \
               PIN_MODE_INPUT(12) | \
               PIN_MODE_INPUT(13) | \
               PIN_MODE_INPUT(14) | \
               PIN_MODE_INPUT(15))
#define VAL_GPIOC_PUPDR   (PIN_PUPDR_PULLDOWN( 0)	| \
							 PIN_PUPDR_PULLDOWN( 1)	| \
							 PIN_PUPDR_PULLUP( 2)	| \
							 PIN_PUPDR_PULLDOWN( 3)	| \
							 PIN_PUPDR_PULLDOWN( 4)	| \
							 PIN_PUPDR_PULLDOWN( 5)	| \
							 PIN_PUPDR_PULLDOWN( 6)	| \
							 PIN_PUPDR_PULLDOWN( 7)	| \
							 PIN_PUPDR_PULLDOWN( 8)	| \
							 PIN_PUPDR_PULLDOWN( 9)	| \
							 PIN_PUPDR_PULLDOWN(10)	| \
							 PIN_PUPDR_PULLDOWN(11)	| \
							 PIN_PUPDR_PULLDOWN(12)	| \
							 PIN_PUPDR_PULLDOWN(13)	| \
							 PIN_PUPDR_PULLDOWN(14)	| \
							 PIN_PUPDR_PULLDOWN(15))
#define VAL_GPIOD_AFRL   (PIN_AFIO_AF(0, 0U) | \
               PIN_AFIO_AF(1, 0U) | \
               PIN_AFIO_AF(2, 11U) | \
               PIN_AFIO_AF(3, 0U) | \
               PIN_AFIO_AF(4, 0U) | \
               PIN_AFIO_AF(5, 0U) | \
               PIN_AFIO_AF(6, 0U) | \
               PIN_AFIO_AF(7, 0U))

#endif /* BOARD_IO_H */
