#include "Initialize.h"

void Initialize()//�ʱ�ȭ �ϴ� �κ� ���ӿ����� �ʼ����� ���
{
	isStart = false;
	dir = RIGHT;
	length = 4;
	speed = 300;// 0.3�� sleep

	snakeX[0] = MAP_WIDTH / 2 - 4;
	snakeY[0] = MAP_HEIGHT / 2;
	gotoxy(snakeX[0], snakeY[0]);
	printf("��");
	//���� �κ��� ���ϱ� ���� ����
	for (int i = 1; i < length; i++)
	{
		snakeX[i] = snakeX[0] - i;
		snakeY[i] = snakeY[0];
		gotoxy(snakeX[i], snakeY[i]);
		printf("��");
	}//�����κ��� �׷��ֱ� ���� for��

	foodX = MAP_WIDTH / 2 + 3;
	foodY = MAP_HEIGHT / 2;
	gotoxy(foodX, foodY);
	printf("��");
}