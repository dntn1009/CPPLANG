#include "DrawSnake.h"

int snakeX[MAP_WIDTH * MAP_HEIGHT];
int snakeY[MAP_WIDTH * MAP_HEIGHT];
int length; //length�� �̿��Ͽ� �����κ� ����� �ϱ�

void DrawSnake()
{
	gotoxy(snakeX[0], snakeY[0]);//�Ӹ��κ�
	printf("��");//�������� �������� �ٲ�����
	gotoxy(snakeX[length - 1], snakeY[length - 1]);
	printf("  ");//������ �ִ� �κ��� �������� �־���.

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
	gotoxy(snakeX[0], snakeY[0]);// for���� switch �̿��Ͽ� Ű�е带 ���������� �������� �Ӹ��κ���
	printf("��");				//  ��ǥ�� �Ű��. ���� printf�� �Ӹ��� �׷��ش�. gotoxy �ʼ�
}
