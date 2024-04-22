/*
 * BUZZER_INTERFACE.h
 *
 * Created: 20/03/2024 01:48:50
 *  Author: shrou
 */ 




#ifndef BUZZER_INTERFACE_H_
#define BUZZER_INTERFACE_H_

#define Buz_pin PIN_C4
#include "STD_TYPES.h"
void BUZ_intiat(u8 BUZ_no);
void BUZ_on(u8 BUZ_no);
void BUZ_off(u8 BUZ_no);



#endif /* BUZZER_INTERFACE_H_ */