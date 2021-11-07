#include "KeyProcess.h"
#include "DrawMap.h"
#include "DrawSnake.h"
#include "MakeFood.h"
#include "GameProcess.h"
#include "Initialize.h"


int main()
{
	DrawMap();
	Initialize();
	setcursortype(NOCURSOR);
	while (true)
	{
		KeyProcess(); // 키밑에 놔야지 가능 isStart가 true가 되려면 키값을 받아야 하기 때문
		if (isStart == false) continue;// continue는 루프문에서만 사용가능
		GameProcess();
		DrawSnake();
		Sleep(speed);
	}
}

