#include "MakeFood.h"

int reposition; // ���̰� ��� ��ġ�� ���� �ʰ��ϱ� ����
int foodX, foodY; // �������� ũ�Ⱑ Ŀ���� ������ִ� ������(����)

void MakeFood()
{
	do {
		reposition = 0;
		foodX = rand() % (MAP_WIDTH - 2) + 1; // 1 ~ 17���� ���;߉�
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
	printf("��");
}

