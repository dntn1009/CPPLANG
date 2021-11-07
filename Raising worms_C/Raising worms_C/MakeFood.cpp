#include "MakeFood.h"

int reposition; // 먹이가 뱀과 겹치게 하지 않게하기 위해
int foodX, foodY; // 지렁이의 크기가 커지게 만들어주는 아이템(먹이)

void MakeFood()
{
	do {
		reposition = 0;
		foodX = rand() % (MAP_WIDTH - 2) + 1; // 1 ~ 17까지 나와야됌
		foodY = rand() % (MAP_HEIGHT - 2) + 1;
		for (int i = 0; i < length; i++)
		{
			if (foodX == snakeX[i] && foodY == snakeY[i])
			{
				reposition = 1;
				break;
			}
		}
	} while (reposition);
	gotoxy(foodX, foodY);
	printf("♥");
}

