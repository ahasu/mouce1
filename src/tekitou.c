#include "iodefine.h"
#define DELT 0.001//CMTの周期と合わせる
#define PI 3.14159265358979
#define KEI 52.1

float speed, length, jiyuu, GVmax, GV0;
float speedR, speedL;
int TGRAR, TGRAL;

//プロトタイプ宣言とextern宣言
//Grobal宣言を使いすぎないコト

void keisan(void) {
	speed += DELT * jiyuu;
	if (speed >= GVmax) {
		speed = GVmax;
	}
	if (speed <= GV0) {
		speed = GV0;
	}
	speedR = speed;
	speedL = speed;
	length += DELT * speed;
}

//モーターの回る方向を先に決める
void daikei_kuro(float Vmax, float V0, float kasokudo, float kyori) {
	float d1, d2;

	GVmax = Vmax;
	GV0 = V0;
	speed = V0;
	length = 0;
	jiyuu = kasokudo; //初期化

	d1 = (Vmax * Vmax - V0 * V0) / 2 / kasokudo;
	d2 = kyori - 2 * d1;

	if (kyori < 2 * d1) {
		d1 = kyori / 2;
		d2 = 0;
	}
	//モーターON(MTU)
	while (1) {
		if (length <= d1)
			jiyuu = kasokudo;
		else if (length > d1 && length <= d1 + d2)
			jiyuu = 0;
		else if (length > d1 + d2 && length <= kyori)
			jiyuu = -kasokudo;
		else if (length > kyori) {
			jiyuu = 0;
			//mo-ta-OFF(MTU)
			break;
		}
	}
}
//向きを決める//気を付ける！！//////////
void kaiten(float Vmax, float V0, float kasokudo, float kakudo) {//超新地
	float kakudoX;
	kakudoX = PI * KEI * kakudo / 360;
	daikei_kuro(Vmax, V0, kasokudo,kakudoX);
}

void mtuK(void) {//早さ→Hz変換

	TGRAR = 25 / 4 * 1000000 * 0.9 * PI / 180 * KEI / 2 / speedR;
	TGRAL = 25 / 4 * 1000000 * 0.9 * PI / 180 * KEI / 2 / speedL; //書き換えはMTU割り込みでやる。

}
