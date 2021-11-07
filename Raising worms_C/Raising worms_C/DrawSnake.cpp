#include "DrawSnake.h"

int snakeX[MAP_WIDTH * MAP_HEIGHT];
int snakeY[MAP_WIDTH * MAP_HEIGHT];
int length; //length를 이용하여 꼬리부분 생기게 하기

void DrawSnake()
{
	gotoxy(snakeX[0], snakeY[0]);//머리부분
	printf("●");//땡겨지면 몸통으로 바껴야함
	gotoxy(snakeX[length - 1], snakeY[length - 1]);
	printf("  ");//꼬리가 있던 부분은 여백으로 둬야함.

	for (int i = length - 1; i > 0; i--)
	{
		snakeX[i] = snakeX[i - 1];
		snakeY[i] = snakeY[i - 1];
	}
	switch (dir)
	{
	case LEFT:
		snakeX[0]--;
		break;
	case RIGHT:
		snakeX[0]++;
		break;
	case UP:
		snakeY[0]--;
		break;
	case DOWN:
		snakeY[0]++;
		break;
	}
	gotoxy(snakeX[0], snakeY[0]);// for문과 switch 이용하여 키패드를 움직였을때 지렁이의 머리부분의
	printf("◈");				//  좌표를 옮겼다. 그후 printf로 머리를 그려준다. gotoxy 필수
}
