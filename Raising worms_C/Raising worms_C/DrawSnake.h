#ifndef _DRAW_SNAKE_H_
#define _DRAW_SNAKE_H_
#include "DrawMap.h"
#include "KeyProcess.h"

extern int snakeX[MAP_WIDTH * MAP_HEIGHT];
extern int snakeY[MAP_WIDTH * MAP_HEIGHT];
extern int length; //length를 이용하여 꼬리부분 생기게 하기
void DrawSnake();
#endif
