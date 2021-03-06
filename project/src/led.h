#include <msp430.h>

#ifndef led_included
#define led_included

// led vars definitions
#define LED_RED BIT0               // P1.0
#define LED_GREEN BIT6             // P1.6
#define LEDS (BIT0 | BIT6)

//extern unsigned char red_on, green_on;
// boolean flags
extern unsigned char led_changed, green_led_state, red_led_state;

void led_init();
void led_update();

#endif // included
