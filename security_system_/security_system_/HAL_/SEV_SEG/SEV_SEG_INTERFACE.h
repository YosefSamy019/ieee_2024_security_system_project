/*
 * SEV_SEG_INTERFACE.h
 *
 * Created: 20/03/2024 01:49:19
 *  Author: shrou
 */ 


#ifndef SEV_SEG_INTERFACE_H_
#define SEV_SEG_INTERFACE_H_



#define SEV_SEG_PIN_A PIN_C0
#define SEV_SEG_PIN_B PIN_C1
#define SEV_SEG_PIN_C PIN_C2
#define SEV_SEG_PIN_D PIN_C3
#define SEV_SEG_COMMON PIN_C7

void SEV_SEG_init(void);
void SEV_SEG_on(void);
void SEV_SEG_off(void);
void SEV_SEG_display(u8 digit);


#endif /* SEV_SEG_INTERFACE_H_ */