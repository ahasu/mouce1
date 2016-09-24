#include"iodefine.h"
#include"def.h"
#include"init.h"
volatile int cnt;
//50MHz 0.0000002s 5000で1ms

void interrupt_cmt0(void){
	CMT0.CMCSR.BIT.CMF = 0;
	cnt ++;
}
void delay(int time){
	cnt = 0;
	while(cnt<time);
}

void main(void){
	int x;
	init();
	initCMT();
	BLUE = 1;
	interrupt_cmt0();
	CMT.CMSTR.BIT.STR0=1;
//	MOT_RES = 1;
	delay(100);
//	MOT_RES = 0;
	MOT_EN = 1;
//	R_CW = 1;
//	L_CW = 1;

	while(1){
		GREEN = 1;
		delay(1000);
		RED =1;
		GREEN = 0;
		delay(1000);
		RED=0;
	}
}
