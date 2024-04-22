/*
 * LED_INTERFACE.h
 *
 * Created: 20/03/2024 01:46:56
 *  Author: shrou
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#define LED_GREEN PIN_C6
#define LED_RED PIN_C5

void LED_init(u8 led_no);
void LED_on(u8 led_no);
void LED_off(u8 led_no);



#endif /* LED_INTERFACE_H_ */