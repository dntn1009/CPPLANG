#ifndef _DRAW_SNAKE_H_
#define _DRAW_SNAKE_H_
#include "DrawMap.h"
#include "KeyProcess.h"

extern int snakeX[MAP_WIDTH * MAP_HEIGHT];
extern int snakeY[MAP_WIDTH * MAP_HEIGHT];
extern int length; //length�� �̿��Ͽ� �����κ� ����� �ϱ�
void DrawSnake();
#endif
