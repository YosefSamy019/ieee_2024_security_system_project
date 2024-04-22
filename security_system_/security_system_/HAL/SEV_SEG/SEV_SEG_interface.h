/*
 * SEV_SEG_interface.h
 *
 * Created: 2024-03-15 3:19:30 PM
 *  Author: asus
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