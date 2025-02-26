BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp \
    $(BOARD_DIR)/default_tune.cpp \

BOARDINC += $(BOARD_DIR)/generated/controllers/generated

# defines SHORT_BOARD_NAME
include $(BOARD_DIR)/meta-info.env

# reduce memory usage monitoring
DDEFS += -DRAM_UNUSED_SIZE=100

# assign critical LED to a non-existent pin if you do not have it on your board
# good old PD14 is still the default value
DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15

DDEFS += $(PRIMARY_COMMUNICATION_PORT_USART2)
PRIMARY_COMMUNICATION_PORT_USART2=-DEFI_CONSOLE_TX_BRAIN_PIN=Gpio::D6 -DEFI_CONSOLE_RX_BRAIN_PIN=Gpio::D5 -DTS_PRIMARY_UxART_PORT=UARTD2 -DSTM32_UART_USE_USART2=1
