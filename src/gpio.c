#include "hardware/gpio.h"
#include "gpio.h"
#include "uart_blink.h"

void init_gpio() {
    gpio_init(LED_PIN_1);
    gpio_init(LED_PIN_2);
    gpio_set_dir(LED_PIN_1, GPIO_OUT);
    gpio_set_dir(LED_PIN_2, GPIO_OUT);

    gpio_set_function(UART_TX, GPIO_FUNC_UART);
    gpio_set_function(UART_RX, GPIO_FUNC_UART);
}

void gpio_toggle(int gpioNum) {
    gpio_put(gpioNum, !gpio_get(gpioNum));
}
