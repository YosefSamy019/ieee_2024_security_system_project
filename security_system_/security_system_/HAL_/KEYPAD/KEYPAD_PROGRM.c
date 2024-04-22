/*
 * KEYPAD_PROGRM.c
 *
 * Created: 20/03/2024 01:45:37
 *  Author: shrou
 */ 
#include "STD_TYPES.h"
#include "DIO/DIO_INTERFACE.h"
#include "REG.h"
#include "KEYPAD_INTERFACE.h"
#include <avr/delay.h>

u8 KPD_SwitchVal[4][4] = KPD_KEYS;

u8  KPD_RowsPins[4] ={ROW1,ROW2,ROW3,ROW4};
u8 KPD_ColsPins[4] ={COL1,COL2,COL3,COL4};


void KPD_Init(void)
{
	DIO_pinMode(ROW1,OUTPUT);
	DIO_pinMode(ROW2,OUTPUT);
	DIO_pinMode(ROW3,OUTPUT);
	DIO_pinMode(ROW4,OUTPUT);
	
    DIO_digitalWrite(ROW1,HIGH);
    DIO_digitalWrite(ROW2,HIGH);
	DIO_digitalWrite(ROW3,HIGH);
	DIO_digitalWrite(ROW4,HIGH);
			
	DIO_pinMode(COL1,INPUT);
	DIO_pinMode(COL2,INPUT);
	DIO_pinMode(COL3,INPUT);
	DIO_pinMode(COL4,INPUT);
	
	DIO_digitalWrite(COL1,HIGH);
	DIO_digitalWrite(COL2,HIGH);
	DIO_digitalWrite(COL3,HIGH);
	DIO_digitalWrite(COL4,HIGH);
	
}

u8 KPD_GetPressedKey(void)
{
	u8 Col , Row;
	u8 Sw = KPD_NOT_PRESSED , Flag = 0;

	for( Row=0 ;  Row <= 3 ; Row++)
	{
		DIO_digitalWrite(KPD_RowsPins[Row],LOW);
		
		for(Col = 0 ;Col <= 3 ;Col ++)
		{
			if(DIO_digitalRead(KPD_ColsPins[Col]) == LOW) /* switch is pressed */
			{
				
				//for bouncing
				_delay_ms(20);
				while(DIO_digitalRead(KPD_ColsPins[Col])== 0);//for the delay of pressing
				

				Sw = KPD_SwitchVal[Row][Col];
				Flag = 1;
				break;
				
				
			}
			
		}
		DIO_digitalWrite(KPD_RowsPins[Row],HIGH);
		if(Flag == 1)
		{
			break;
		}
		
	}
	return Sw;
}








