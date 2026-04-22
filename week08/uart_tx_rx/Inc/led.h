/*
 * File:    led.h
 * Author:  Alexander130892
 * Date:    19-4-2026
 *
 * Description:
 *   This header file defines the interface for controlling an LED,
 *   providing functions to initialize, turn on/off, and query the
 *   state of the LED. It offers a simple abstraction layer for LED
 *   control in embedded systems programming.
 */



#ifndef LED_H
#define LED_H

#include <stdbool.h>

void led_init(void);
void led_on(void);
void led_off(void);
bool led_get_state(void);

#endif
