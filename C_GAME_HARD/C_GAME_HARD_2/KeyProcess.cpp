#include "KeyProcess.h"

int _select;
void KeyProcess() 
{
	_select = -1;
	if (_kbhit())
	{
		_select = _getch();
		if (_select == 224)// Ű������ ����Ű�� �ƽ�Ű�ڵ� 2������ �Ѱ��� 224, 75(LEFT) �׷��� �����ִ°���
		{
			_select = _getch();// the POSIX warning C4996 �ذ������ ó�� ���ۺκп� _�������� ���δ�.
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