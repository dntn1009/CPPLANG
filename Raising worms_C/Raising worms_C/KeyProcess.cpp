#include "KeyProcess.h"

int _select;
int isStart;
int dir;
void KeyProcess() 
{
	_select = -1;
	if (_kbhit())
	{
		isStart = true;// Ʈ��� �����
		_select = _getch();
		if (_select == 224)// Ű������ ����Ű�� �ƽ�Ű�ڵ� 2������ �Ѱ��� 224, 75(LEFT) �׷��� �����ִ°���
		{
			_select = _getch();// the POSIX warning C4996 �ذ������ ó�� ���ۺκп� _�������� ���δ�.
			if ((dir == LEFT && _select != RIGHT) ||
				(dir == RIGHT && _select != LEFT) ||
				(dir == UP && _select != DOWN) ||//���οö󰡴� ���߿��� �Ʒ��� ������ ����!
				(dir == DOWN && _select != UP))// �Ʒ��� �������� ���߿� ���� ������ ����!
			{
				dir = _select;// �׷� ��쿡�� select ������ �����̱�
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