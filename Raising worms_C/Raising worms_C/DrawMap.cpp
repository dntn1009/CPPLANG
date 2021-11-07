
#include "DrawMap.h"


void DrawMap()
{
	//메모리를 아끼기 위해서 사용 => map[][]배열이용안함
	//for문을 이용
	for (int i = 0; i < MAP_WIDTH; i++)
	{
		gotoxy(i, 0);
		printf("■");
		gotoxy(i, MAP_HEIGHT - 1);
		printf("■");
	}
	for (int j = 1; j < MAP_HEIGHT - 1; j++)
	{
		gotoxy(0, j);
		printf("■");
		gotoxy(MAP_WIDTH - 1, j);
		printf("■");
	}
}

