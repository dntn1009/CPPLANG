#include "KeyProcess.h"

int _select;
void KeyProcess() 
{
	_select = -1;
	if (_kbhit())
	{
		_select = _getch();
		if (_select == 224)// 키보드의 방향키는 아스키코드 2개값을 넘겨줌 224, 75(LEFT) 그래서 없애주는거임
		{
			_select = _getch();// the POSIX warning C4996 해결법으로 처음 시작부분에 _하이픈을 붙인다.
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