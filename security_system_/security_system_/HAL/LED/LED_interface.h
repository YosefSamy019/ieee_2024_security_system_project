/*
 * LED_INTERFACE.h
 *
 * Created: 19/02/2024 07:06:06 
 *  Author: hp
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#define LED_GREEN PIN_C5
#define LED_RED PIN_C6

void LED_init(u8 led_no);
void LED_on(u8 led_no);
void LED_off(u8 led_no);


#endif /* LED_INTERFACE_H_ */