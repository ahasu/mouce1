/*
 * init.h
 *
 *  Created on: 2015/10/31
 *      Author: shuu
 */

#ifndef INIT_H_
#define INIT_H_

extern int SEN_CL;
extern int SEN_CR;
extern int SEN_L;
extern int SEN_R;

void init(void);
void initCMT(void);
void delay(int time);
void interrupt_cmt0(void);
void initAD(void);
void ADC(void);
//void init_mtu(void);

#endif /* INIT_H_ */
