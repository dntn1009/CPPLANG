#ifndef _UTIL_H_
#define _UTIL_H_
#include <Windows.h>
//Ŀ�� ����
//Ŀ���� ���ϴ� ��ġ�� �̵���Ű�� ����.(windows.h)
enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR };// ENUM �� ������� 1, 2, 3 ���� ����

void gotoxy(int x, int y);
void setcursortype(CURSOR_TYPE c); //����� �̸� ���� �صд�.
#endif // ! _UTIL_H_

//�⺻������ #ifndef _UTIL_H_�� �̿��Ͽ� ������� ������ �ȵ������� ����ǰ� ������ִ� �������Ѵ�.
// �ѹ��� �ϰ� �ٽ� �̿��Ҷ��� �ǳʶٰ� �� �� �ֱ⋚���� �ݵ�� �ؾߵǴ� �����̴�.


//define car�� car�� ���ǵǾ� ������
//ifdef car ~ endif => car�� ���ǵǾ��������� ����Ѵٴ� ��
//ifndef car ~ endif => ���ǵǾ����� ������ ����Ѵ�.
/*�̰� ����ϴ� ����
android ios ���� �͵��� ������ �̿��ؾ��ϴ� mobile �������
defined IPHONE or define ANDROID �� ����� if���� �̿��Ͽ� ���� ����Ǿ����� ������ ����� ����ؾ� �ϱ� ����
*/

/*������� �����Ҷ�
var.h => int x, y;
sum.h => #include "var.h" int sum(){return x+y;};
�̷��� sum.h �� int x,y �� ����� �����̹Ƿ� sum.h�� �ҷ����� �ȴ�
������ �̰� �߸��� ��� ����̴�.*/

//sum.h sum.cpp
//sum.h�� #ifndef �� ���� ���� �����س���
//#define _SUM_H_�� �����ϸ� ó������ #define �� �����ϰ� �������� ��ŵ�Ҽ��ְ԰����ϴ�.
//extern int x;
//extern int y; = > extern�� �ٸ� �������� ��밡���ϰ� �����ϴ� ���̴�.

