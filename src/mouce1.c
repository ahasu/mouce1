#include	"iodefine.h"
#include	"def.h"
#include	"init.h"
//#include	"util7125.h"
volatile int cnt;

//50MHz 0.0000002s 5000で1ms

void interrupt_cmt0(void){
	CMT0.CMCSR.BIT.CMF = 0;		//コンペアマッチフラグを不一致にする
	cnt ++;
}
void delay(int time){
	cnt = 0;
	while(cnt<time);
}

void main(void){
	init();
	initCMT();
	initAD();
	interrupt_cmt0();
	CMT.CMSTR.BIT.STR0 = 1;		//CMTカウントスタート
//	MOT_RES = 1;
//	delay(100);
//	MOT_RES = 0;
//	MOT_EN = 1;
//	R_CW = 1;
//	L_CW = 1;


	while(1){
		GREEN = 0;		//ピンinit
		LED_CL = 0;
		LED_CR = 0;
		LED_L = 0;
		LED_R = 0;		//ここまで
		ADC();

		if(SEN_CL<500);//LED_CL = 1;
		if(SEN_CR<500);//LED_CR = 1;
		if(SEN_L<500)//LED_L = 1;
			GREEN = 1;
		if(SEN_R<500);//LED_R = 1;

	}
}
