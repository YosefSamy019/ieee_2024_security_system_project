/*
 * BUZZER_PROGRAM.c
 *
 * Created: 20/03/2024 01:48:25
 *  Author: shrou
 */ 
#include "BUZZER_INTERFACE.h"
#include "STD_TYPES.h"
#include "DIO/DIO_INTERFACE.h"

void BUZ_intiat(u8 BUZ_no)
{
	DIO_pinMode(BUZ_no,OUTPUT);
}
void BUZ_off(u8 BUZ_no)
{
	DIO_digitalWrite(BUZ_no,LOW);
}
void BUZ_on(u8 BUZ_no)
{
	DIO_digitalWrite(BUZ_no,HIGH);
}