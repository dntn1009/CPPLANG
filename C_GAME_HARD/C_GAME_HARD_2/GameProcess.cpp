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
				printf("\n축하합니다. 보석을 발견하였습니다.\n\n");
				playerX = 0;
				playerY = 0;
			}
		}
		break;
	case RIGHT:
		if (playerX + 1 < MAP_WIDTH)// Y좌표의 최대치를 설정해놈.
		{
			if (map[playerY][playerX + 1] == ROAD)// 최대치 안에서 움직인 좌표가 ROAD 움직일수 있는 공간이면
			{
				playerX++;// Y좌표를 +1 하여 움직여준다.
			}
			else if (map[playerY][playerX + 1] == GEM)
			{
				printf("\n축하합니다. 보석을 발견하였습니다.\n\n");
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
				printf("\n축하합니다. 보석을 발견하였습니다.\n\n");
				playerX = 0;
				playerY = 0;
			}
		}
		break;
	case DOWN:
		if (playerY + 1 < MAP_HEIGHT)// Y좌표의 최대치를 설정해놈.
		{
			if (map[playerY + 1][playerX] == ROAD)// 최대치 안에서 움직인 좌표가 ROAD 움직일수 있는 공간이면
			{
				playerY++;// Y좌표를 +1 하여 움직여준다.
			}
			else if (map[playerY + 1][playerX] == GEM)
			{
				printf("\n축하합니다. 보석을 발견하였습니다.\n\n");

				playerX = 0;
				playerY = 0;
			}
		}
		break;
	}
}