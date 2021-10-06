#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32
#define ESC 27

int main()
{
	int key = 0;
	while (true)
	{
		if (kbhit())//kbhit 는 키가 눌렸는지 파악함
		{
			key = getch();//getch() 는 눌린 키값이다. key에 눌린 키값을 넣어준다. 키값은 아스키코드로 정의됨.
			if (key == 224) 
			{
				key = getch();
				switch (key) 
				{
				case UP:
					printf("UP 눌림\n");
					break;
				case LEFT:
					printf("LEFT 눌림\n");
					break;
				case RIGHT:
					printf("RIGHT 눌림\n");
					break;
				case DOWN:
					printf("DOWN 눌림\n");
					break; 
				default:
					break;
				}
			}
		}
	}
	return 0;

}

