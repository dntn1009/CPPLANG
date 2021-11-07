#ifndef _MAKE_FOOD_H_
#define _MAKE_FOOD_H_
#include "DrawSnake.h"


extern int reposition; // 먹이가 뱀과 겹치게 하지 않게하기 위해
extern int foodX, foodY; // 지렁이의 크기가 커지게 만들어주는 아이템(먹이)
void MakeFood();
#endif