#ifndef _DRAW_MAP_H_
#define _DRAW_MAP_H_
#include <stdio.h>
#include "Util.h"

#define ROAD 0
#define WALL 1
#define GEM	 2
// 맵 크기

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ESC 27
// 플레이어의 위치 움직임

#define MAP_WIDTH 10
#define MAP_HEIGHT 10
// 플레이어의 최대 움직임 컷

extern int map[MAP_HEIGHT][MAP_WIDTH];
extern int playerX;
extern int playerY;
\
void DrawMap();

#endif
