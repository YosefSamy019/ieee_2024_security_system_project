/*
 * BUZZER_PROGRAM.c
 *
 * Created: 19/03/2024 22:11:08
 *  Author: shrou
 */ 
#include "BUZZER_interface.h"
#include "STD_TYPES.h"
#include "DIO/DIO_interface.h"

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