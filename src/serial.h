/*
 * serial.h
 *
 *  Created on: 2016/11/22
 *      Author: shuu
 */

#ifndef SERIAL_H_
#define SERIAL_H_

void init_sci1(void);
void put1byte(char c);
void putnbyte(char *buf, int len);
int myprintf(const char *fmt, ...);

/*
 How to use.
 //	init_sci1();
 //	myprintf("%d\n\r", value);
 */

#endif /* SERIAL_H_ */
