#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define ROAD 0
#define WALL 1
#define GEM	 2
// 맵 크기

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ESC 27
// 플레이어의 위치 움직임

#define MAP_WIDTH 10
#define MAP_HEIGHT 10
// 플레이어의 최대 움직임 컷

//커서 제어
//커서를 원하는 위치에 이동시키기 위함.(windows.h)
enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR };// ENUM 은 순서대로 1, 2, 3 값을 가짐

void  gotoxy(int x, int y) {
	COORD pos = { 2 * x, y };//X축이 Y축보다 2배 작기때문에 2배를 곱해준다.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void setcursortype(CURSOR_TYPE c)
{
	CONSOLE_CURSOR_INFO CurInfo;

	switch (c)
	{
	case NOCURSOR:
		CurInfo.dwSize = 1;
		CurInfo.bVisible = FALSE;
		break;
	case SOLIDCURSOR:
		CurInfo.dwSize = 100;
		CurInfo.bVisible = TRUE;
		break;
	case NORMALCURSOR:
		CurInfo.dwSize = 20;
		CurInfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}//커서가 보일지 안보일지 설정하는 함수

int main()
{
	int map[10][10] =
	{
		{0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 1, 1, 0, 1},
		{1, 0, 0, 0, 2, 0, 1, 1, 0, 1},
		{1, 1, 1, 1, 1, 0, 1, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};//배열에 숫자를 이용하여 벽과, 로드지점 보석이 있는곳을 지정해둠

	int playerX = 0;
	int playerY = 0;
	//현재 플레이어의 위치는 [0],[0] 이 되어야함. 시작지점이 
	int select = 0; // 저장할수 있는 곳
	setcursortype(NOCURSOR);//커서가 안보이게 설정
	while (true)
	{
		select = -1;
		if (kbhit())
		{
			select = getch();
			if (select == 224)// 키보드의 방향키는 아스키코드 2개값을 넘겨줌 224, 75(LEFT) 그래서 없애주는거임
			{
				select = getch();
			}
			else
			{
				if (select == ESC)
				{
					exit(0);
				}
			}
		}
		switch (select)
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

		for (int i = 0; i < MAP_HEIGHT; i++)
		{
			for (int j = 0; j < MAP_WIDTH; j++)
			{
				gotoxy(j, i);
				if (map[i][j] == ROAD)// 움직일수 있는 공간
				{
					if (playerX == j && playerY == i)// 여기서 플레이어의 X,Y좌표가 같은곳은 캐릭터를 표시해줌 
					{
						printf("♠");
					}
					else
					{
						printf("■");// 움직일수 있는 공간을 칠해놈
					}
				}
				else if (map[i][j] == WALL)
				{
					printf("▨");
				}
				else if (map[i][j] == GEM)
				{
					printf("◈");
				}
			}
			printf("\n");// [i][1~10] 까지 끝낸후 아래로 내려가기위해서 사각형 모양 만들기위해
		}
	}

}
