
#include "DrawMap.h"


void DrawMap()
{
	//�޸𸮸� �Ƴ��� ���ؼ� ��� => map[][]�迭�̿����
	//for���� �̿�
	for (int i = 0; i < MAP_WIDTH; i++)
	{
		gotoxy(i, 0);
		printf("��");
		gotoxy(i, MAP_HEIGHT - 1);
		printf("��");
	}
	for (int j = 1; j < MAP_HEIGHT - 1; j++)
	{
		gotoxy(0, j);
		printf("��");
		gotoxy(MAP_WIDTH - 1, j);
		printf("��");
	}
}

