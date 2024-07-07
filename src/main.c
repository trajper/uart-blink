#include "pico/stdio.h"
#include "FreeRTOS.h"

#include "gpio.h"
#include "uart_blink.h"

int main() {
    stdio_init_all();

    init_uart();
    init_gpio();

    while (1) {

    }
    return 0;
}
