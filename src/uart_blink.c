#include "gpio.h"
#include "uart_blink.h"

void init_uart() {
    uart_init(UART_ID, 115200);
    uart_set_hw_flow(UART_ID, false, false);
    uart_set_format(UART_ID, DATA_BITS, STOP_BITS, UART_PARITY_NONE);
    uart_set_fifo_enabled(UART_ID, false);
    irq_set_exclusive_handler(UART_IRQ, uart_receive);
    irq_set_enabled(UART_IRQ, true);
    uart_set_irq_enables(UART_ID, true, false);
}

void uart_receive() {
    while (uart_is_readable(UART_ID)) {
        uint8_t ch = uart_getc(UART_ID);
        if (uart_is_writable(UART_ID)) {
            if (ch == '1') {
                gpio_toggle(LED_PIN_1);
                gpio_toggle(LED_PIN_2);
            } else {
                uart_putc(UART_ID, ch);
            }
        }   
    }
}
