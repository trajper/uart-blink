#include "hardware/gpio.h"

#ifndef GPIO_H
#define GPIO_H

#define LED_PIN_1 2
#define LED_PIN_2 3

#define GPIO_ON 1
#define GPIO_OFF 0

void init_gpio();
void gpio_toggle(int gpioNum);

#endif
