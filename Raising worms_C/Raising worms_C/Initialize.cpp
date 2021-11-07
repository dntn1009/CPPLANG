#include "Initialize.h"

void Initialize()//초기화 하는 부분 게임에서는 필수적인 요소
{
	isStart = false;
	dir = RIGHT;
	length = 4;
	speed = 300;// 0.3초 sleep

	snakeX[0] = MAP_WIDTH / 2 - 4;
	snakeY[0] = MAP_HEIGHT / 2;
	gotoxy(snakeX[0], snakeY[0]);
	printf("◈");
	//시작 부분을 정하기 위해 만듬
	for (int i = 1; i < length; i++)
	{
		snakeX[i] = snakeX[0] - i;
		snakeY[i] = snakeY[0];
		gotoxy(snakeX[i], snakeY[i]);
		printf("●");
	}//꼬리부분을 그려주기 위한 for문

	foodX = MAP_WIDTH / 2 + 3;
	foodY = MAP_HEIGHT / 2;
	gotoxy(foodX, foodY);
	printf("♥");
}