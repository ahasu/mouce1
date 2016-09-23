#include"iodefine.h"
#include"def.h"
#include"init.h"
//50MHz 0.0000002s 5000で1ms




void main(void){
	int x;
	init();
	initCMT();
	CMT.CMSTR.BIT.STR0=1;
	MOT_RES = 1;
	R_CW = 1;
	L_CW = 1;

	while(1){
		GREEN = 1;
		delay(1000);
		GREEN = 0;
		delay(1000);
	}
}
