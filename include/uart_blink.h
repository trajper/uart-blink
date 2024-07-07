#include "hardware/uart.h"

#ifndef UART_H
#define UART_H

#define UART_ID uart0
#define UART_IRQ UART0_IRQ
#define DATA_BITS 8
#define STOP_BITS 1
#define UART_TX 0
#define UART_RX 1

void init_uart();
void uart_receive();

#endif
