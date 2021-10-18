#pragma warning(disable:4996)
#include <stdio.h>
#include "Util.h"// 정리한것을 불러온다.
#include "KeyProcess.h"
#include "GameProcess.h"
#include "DrawMap.h"

int main()
{

	//현재 플레이어의 위치는 [0],[0] 이 되어야함. 시작지점이 
	setcursortype(NOCURSOR);//커서가 안보이게 설정

	while (true)
	{
		KeyProcess();
		GameProcess();
		DrawMap();
	}

}
