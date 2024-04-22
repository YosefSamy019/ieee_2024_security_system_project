/*
 * LED_PROGRAMc.c
 *
 * Created: 20/03/2024 01:46:33
 *  Author: shrou
 */ 
#include "STD_TYPES.h"
#include "DIO/DIO_INTERFACE.h"

#include "LED_INTERFACE.h"


void LED_init(u8 led_no)
{
	DIO_pinMode(led_no,OUTPUT);
}

void LED_off(u8 led_no)
{
	DIO_digitalWrite(led_no,LOW);
}
void LED_on(u8 led_no)
{
	DIO_digitalWrite(led_no,HIGH);
}