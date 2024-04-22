/*
 * BIT_MATH.h
 *
 * Created: 20/03/2024 01:51:55
 *  Author: shrou
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(REG, BIT) ((REG)=(REG)|(1<<(BIT)))
#define TOG_BIT(REG, BIT) ((REG)=(REG)^(1<<(BIT)))
#define CLR_BIT(REG, BIT) ((REG)=(REG)&~(1<<(BIT)))
#define GET_BIT(REG, BIT) (((REG)>>(BIT))&1)


#endif /* BIT_MATH_H_ */