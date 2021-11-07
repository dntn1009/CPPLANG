#ifndef _UTIL_H_
#define _UTIL_H_
#include <Windows.h>
//커서 제어
//커서를 원하는 위치에 이동시키기 위함.(windows.h)
enum CURSOR_TYPE { NOCURSOR, SOLIDCURSOR, NORMALCURSOR };// ENUM 은 순서대로 1, 2, 3 값을 가짐

void gotoxy(int x, int y);
void setcursortype(CURSOR_TYPE c); //헤더에 미리 설정 해둔다.
#endif // ! _UTIL_H_

//기본적으로 #ifndef _UTIL_H_을 이용하여 헤더문이 선언이 안되있으면 선언되게 만들어주는 역할을한다.
// 한번만 하고 다시 이용할때는 건너뛰게 할 수 있기떄문에 반드시 해야되는 선언이다.


//define car로 car가 정의되어 있을때
//ifdef car ~ endif => car가 정의되어있을때만 사용한다는 뜻
//ifndef car ~ endif => 정의되어있지 않을때 사용한다.
/*이걸 사용하는 목적
android ios 같은 것들을 나눠서 이용해야하는 mobile 같은경우
defined IPHONE or define ANDROID 로 나누어서 if문을 이용하여 각각 실행되엇을때 조건을 나누어서 사용해야 하기 때문
*/

/*헤더파일 정의할때
var.h => int x, y;
sum.h => #include "var.h" int sum(){return x+y;};
이러면 sum.h 에 int x,y 가 적용된 상태이므로 sum.h만 불러오면 된다
하지만 이건 잘못된 방식 방법이다.*/

//sum.h sum.cpp
//sum.h에 #ifndef 를 위에 먼저 선언해놓고
//#define _SUM_H_를 선언하면 처음에만 #define 을 정의하고 나머지는 스킵할수있게가능하다.
//extern int x;
//extern int y; = > extern은 다른 곳에서도 사용가능하게 선언하는 문이다.

