#include "GameProcess.h"

int speed; //�ӵ��� �ʹ������� ������ �׸��� �������̷� �׷����°��� �����ϱ����� �ӵ�����

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
	if (snakeX[0] == foodX && snakeY[0] == foodY)// ���ǸӸ��� ���̿� ����� ���
	{
		length++;
		speed -= 2;
		if (speed <= 10) speed = 10; // ���ǵ尡 ���� �������ٰ� 10���� ������.
		snakeX[length - 1] = snakeX[length - 2];
		snakeY[length - 1] = snakeY[length - 2];
		MakeFood();
	}
}