#include "iodefine.h"
#include "init.h"


/*

void init_all(void){
	init_clock();
	init_io();
}

void init_clock(){
	int i;
	CPG.FRQCR.BIT.IFC = 1;
	for(i = 0;i < 0xfffff; i++);
}

void init_io(){

}
*/
/*
void initMTU(void){
	STB.CR4.BIT._MTU2 = 0;      //MTUスタンバイモード解除

	MTU2.TSTR.BYTE = 0;         //カウント停止
	MTU20.TCR.BIT.TPSC = 1;     //クロック周波数φ/4(MTUのクロックは25Mhz)
	MTU20.TCR.BIT.CCLR = 1;     //TGRAコンペアマッチでTCNTクリア
	MTU20.TIOR.BIT.IOA = 1;     //初期状態で0出力 コンペアマッチしたら0出力
	MTU20.TIOR.BIT.IOB = 2;     //デューティ コンペアマッチでH
	MTU20.TGRA = 6144-1;
	MTU20.TGRB = 6143;
	MTU20.TMDR.BIT.MD = 2;      //PWMモード1

	PFC.PECRL1.BIT.PE0MD = 1;   //ポートEをMTU2に設定
	PFC.PEIORL.BYTE.L = 0xff;   //ポートE出力設定
	PE.DRL.BYTE.L = 0;          //LED消灯

	MTU2.TSTR.BIT.CST0 = 1;     //カウントスタート
}
*/


void initCMT(void)	//CMT割込の設定
{
	STB.CR4.BIT._CMT    = 0;//CMTスタンバイ解除

	//  (1)コンペアマッチタイマスタートレジスタ（CMSTR）
	CMT.CMSTR.BIT.STR0=0;// ステータスレジスタ　0：カウント停止, 1：カウント開始

	//  (2)コンペアマッチタイマコントロール／ステータスレジスタ（CMCSR）
	CMT0.CMCSR.BIT.CMIE = 1;     //割り込みイネーブル許可
	CMT0.CMCSR.BIT.CKS  = 0;     //1/8
	CMT0.CMCSR.BIT.CMF  = 0;     //フラグをクリア
	CMT0.CMCOR          = 5000;  //割り込み周期
	INTC.IPRJ.BIT._CMT0 = 0xf;//割り込み優先度(15)
}
/*
void delay(int time){//mouce1に書いたる
	cnt = 0;
	while(cnt<time);
}
*/
/*
void interrupt_cmt0(){//mouce1に書いたる
	CMT0.CMCSR.BIT.CMF = 0;
	cnt ++;
}
*/

void initAD(void) {//AD変換の設定
	STB.CR4.BIT._AD1 = 0;
	AD1.ADCR.BIT.ADST = 0;
	AD1.ADCSR.BIT.ADCS = 0;
	AD1.ADCSR.BIT.TRGE = 0;
	AD1.ADCSR.BIT.CKSL = 0;
	AD1.ADCSR.BIT.ADIE = 0;
	AD1.ADCSR.BIT.ADM = 0;
	AD1.ADCSR.BIT.CH = 0;	//AN4 CL
	AD1.ADCSR.BIT.CH = 1;	//AN5 CR
	AD1.ADCSR.BIT.CH = 2;	//AN6 L
	AD1.ADCSR.BIT.CH = 3;	//AN7 R
}

void init(){
	PFC.PEIORL.BIT.B0	= 1;//R_CW/CCW
	PFC.PEIORL.BIT.B1	= 1;//R_Clock
	PFC.PEIORL.BIT.B2	= 1;//MOT_RES
	PFC.PEIORL.BIT.B4	= 1;//L_CW/CCW
	PFC.PEIORL.BIT.B5	= 1;//L_Clock
	PFC.PEIORL.BIT.B8	= 1;//MOT_EN
	PFC.PEIORL.BIT.B10	= 0;//SW_L
	PFC.PEIORL.BIT.B11	= 0;//SW_R

	PFC.PAIORL.BIT.B12	= 1;//LED_CL
	PFC.PAIORL.BIT.B13	= 1;//LED_CR
	PFC.PAIORL.BIT.B14	= 1;//LED_L
	PFC.PAIORL.BIT.B15	= 1;//LED_R

	PFC.PEIORL.BIT.B12	= 1;//GREEN
	PFC.PEIORL.BIT.B13	= 1;//BLUE
	PFC.PEIORL.BIT.B14	= 1;//RED

//	MTU2.TOER.BIT.OE4A	= 1;//GREEN
//	MTU2.TOER.BIT.OE4B	= 1;//BLUE
//	MTU2.TOER.BIT.OE4C	= 1;//RED
}
