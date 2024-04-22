/*
 * SEV_SEG_program.c
 *
 * Created: 2024-03-15 3:19:17 PM
 *  Author: asus
 */ 

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "DIO/DIO_interface.h"

#include "SEV_SEG_interface.h"

void SEV_SEG_init(void){
	DIO_pinMode(SEV_SEG_PIN_A,OUTPUT);
	DIO_pinMode(SEV_SEG_PIN_B,OUTPUT);
	DIO_pinMode(SEV_SEG_PIN_C,OUTPUT);
	DIO_pinMode(SEV_SEG_PIN_D,OUTPUT);
	DIO_pinMode(SEV_SEG_COMMON,OUTPUT);
}

void SEV_SEG_on(void){
		DIO_digitalWrite(SEV_SEG_COMMON, 1 );
}

void SEV_SEG_off(void){
	DIO_digitalWrite(SEV_SEG_COMMON, 0 );
}

void SEV_SEG_display(u8 digit){
	DIO_digitalWrite(SEV_SEG_PIN_A, GET_BIT(digit,0) );	
	DIO_digitalWrite(SEV_SEG_PIN_B, GET_BIT(digit,1) );
	DIO_digitalWrite(SEV_SEG_PIN_C, GET_BIT(digit,2) );
	DIO_digitalWrite(SEV_SEG_PIN_D, GET_BIT(digit,3) );
}