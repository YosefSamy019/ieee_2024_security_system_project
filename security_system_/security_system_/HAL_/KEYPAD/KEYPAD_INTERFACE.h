/*
 * KEYPAD_INTERFACE.h
 *
 * Created: 20/03/2024 01:46:02
 *  Author: shrou
 */ 


#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_


#define        KPD_PORT      PORTB

#define        ROW1          PIN_B0
#define        ROW2          PIN_B1
#define        ROW3          PIN_B2
#define        ROW4          PIN_B3

#define        COL1          PIN_B4
#define        COL2          PIN_B5
#define        COL3          PIN_B6
#define        COL4          PIN_B7

#define        KPD_KEYS        {{'7','8','9','/'},{ '4' , '5' , '6' , '*'},{'1' , '2' , '3' , '-'},{'C' , '0' , '=' , '+'}}

#define  KPD_NOT_PRESSED   0xff

void KPD_Init(void);
u8 KPD_GetPressedKey(void);






#endif /* KEYPAD_INTERFACE_H_ */