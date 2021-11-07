#include "KeyProcess.h"

int _select;
int isStart;
int dir;
void KeyProcess() 
{
	_select = -1;
	if (_kbhit())
	{
		isStart = true;// 트루는 양수값
		_select = _getch();
		if (_select == 224)// 키보드의 방향키는 아스키코드 2개값을 넘겨줌 224, 75(LEFT) 그래서 없애주는거임
		{
			_select = _getch();// the POSIX warning C4996 해결법으로 처음 시작부분에 _하이픈을 붙인다.
			if ((dir == LEFT && _select != RIGHT) ||
				(dir == RIGHT && _select != LEFT) ||
				(dir == UP && _select != DOWN) ||//위로올라가는 도중에는 아래로 못가게 설정!
				(dir == DOWN && _select != UP))// 아래로 내려가는 도중에 위로 못가게 설정!
			{
				dir = _select;// 그럴 경우에만 select 방향대로 움직이기
			}
		}
		else
		{
			if (_select == 27)
			{
				exit(0);
			}
		}
	}
}