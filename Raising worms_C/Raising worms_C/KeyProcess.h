#ifndef _KEY_PROCESS_H_
#define _KEY_PROCESS_H_
#include <conio.h>
#include <stdlib.h>

#define LEFT	75
#define RIGHT	77
#define UP		72
#define DOWN	80
#define ESC		27

// 플레이어의 위치 움직임

extern int _select;
extern int dir;
extern int isStart;
void KeyProcess();
#endif
