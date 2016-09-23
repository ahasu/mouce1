
#ifndef TEKITOU_H_
#define TEKITOU_H_

#define DELT 0.001//CMTの周期と合わせる
#define PI 3.14159265358979
#define KEI 52.1

extern float speed, length, jiyuu, GVmax, GV0;
extern float speedR, speedL;
extern int TGRAR, TGRAL;

void keisan(void);
void daikei_kuro(float Vmax, float V0, float kasokudo, float kyori);
void kaiten(float Vmax, float V0, float kasokudo, float kakudo);
void mtuK(void)；

#endif /* TEKITOU_H_ */
