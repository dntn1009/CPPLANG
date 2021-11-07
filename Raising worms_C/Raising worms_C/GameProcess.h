#ifndef _GAME_PROCESS_H_
#define _GAME_PROCESS_H_
#include "MakeFood.h"
#include "Initialize.h"

extern int speed; //속도가 너무빠르기 때문에 그림이 마구잡이로 그려지는것을 방지하기위해 속도조절

void ResetGame();
void GameProcess();
#endif
