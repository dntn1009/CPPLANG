#include "GameProcess.h"


void GameProcess()
{
	switch (_select)
	{
	case LEFT:
		if (playerX - 1 >= 0)
		{
			if (map[playerY][playerX - 1] == ROAD)
			{
				playerX--;
			}
			else if (map[playerY][playerX - 1] == GEM)
			{
				printf("\n�����մϴ�. ������ �߰��Ͽ����ϴ�.\n\n");
				playerX = 0;
				playerY = 0;
			}
		}
		break;
	case RIGHT:
		if (playerX + 1 < MAP_WIDTH)// Y��ǥ�� �ִ�ġ�� �����س�.
		{
			if (map[playerY][playerX + 1] == ROAD)// �ִ�ġ �ȿ��� ������ ��ǥ�� ROAD �����ϼ� �ִ� �����̸�
			{
				playerX++;// Y��ǥ�� +1 �Ͽ� �������ش�.
			}
			else if (map[playerY][playerX + 1] == GEM)
			{
				printf("\n�����մϴ�. ������ �߰��Ͽ����ϴ�.\n\n");
				playerX = 0;
				playerY = 0;
			}
		}
		break;
	case UP:
		if (playerY - 1 >= 0)
		{
			if (map[playerY - 1][playerX] == ROAD)
			{
				playerY--;
			}
			else if (map[playerY - 1][playerX] == GEM)
			{
				printf("\n�����մϴ�. ������ �߰��Ͽ����ϴ�.\n\n");
				playerX = 0;
				playerY = 0;
			}
		}
		break;
	case DOWN:
		if (playerY + 1 < MAP_HEIGHT)// Y��ǥ�� �ִ�ġ�� �����س�.
		{
			if (map[playerY + 1][playerX] == ROAD)// �ִ�ġ �ȿ��� ������ ��ǥ�� ROAD �����ϼ� �ִ� �����̸�
			{
				playerY++;// Y��ǥ�� +1 �Ͽ� �������ش�.
			}
			else if (map[playerY + 1][playerX] == GEM)
			{
				printf("\n�����մϴ�. ������ �߰��Ͽ����ϴ�.\n\n");

				playerX = 0;
				playerY = 0;
			}
		}
		break;
	}
}