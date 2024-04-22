/*
 * LED_PROGRAM.c
 *
 * Created: 19/02/2024 07:05:45 
 *  Author: hp
 */ 
#include "STD_TYPES.h"
#include "DIO/DIO_interface.h"

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

