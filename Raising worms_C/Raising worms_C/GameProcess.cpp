#include "GameProcess.h"

int speed; //속도가 너무빠르기 때문에 그림이 마구잡이로 그려지는것을 방지하기위해 속도조절

void ResetGame()
{
	system("cls");
	DrawMap();
	Initialize();

}

void GameProcess()
{
	if (snakeX[0] <= 0 || snakeX[0] >= MAP_WIDTH - 1 ||
		snakeY[0] <= 0 || snakeY[0] >= MAP_HEIGHT - 1)
	{
		ResetGame();
	}
	for (int i = 1; i < length; i++)
	{
		if (snakeX[0] == snakeX[i] && snakeY[0] == snakeY[i])
		{
			ResetGame();
		}
	}
	if (snakeX[0] == foodX && snakeY[0] == foodY)// 뱀의머리가 먹이에 닿았을 경우
	{
		length++;
		speed -= 2;
		if (speed <= 10) speed = 10; // 스피드가 점점 빨라지다가 10으로 고정됌.
		snakeX[length - 1] = snakeX[length - 2];
		snakeY[length - 1] = snakeY[length - 2];
		MakeFood();
	}
}