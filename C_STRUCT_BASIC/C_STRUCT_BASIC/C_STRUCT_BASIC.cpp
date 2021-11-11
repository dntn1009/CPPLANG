#include <stdio.h>
#include <string.h>

typedef unsigned int uint;// unsigned int로 매번 쓰기 번거로우므로 uint로 고정.

//1. 구조체
/*
typedef struct tagHero;
typedef struct tagMonster;

 struct Hero {
	int hp;
	int mp;
};
struct Monster {//구조체
	int hp;
	int mp;
	int lv;
	float atk;
	float def;
};// 하나의 새로운 자료형을 구축했다고 생각하면 된다.
 // 배열을 이용하여 일일이 여러개를 나눌 필요가 없이 하나의 자료형으로 만듬.
 */

//2. typedef 구조체
/* typedef struct tagHero {
	int hp;
	int mp;
}Hero;
typedef struct tagMonster {//구조체
	int hp;
	int mp;
	int lv;
	float atk;
	float def;
}Monster;
//typedef을 이용하여 구조체를 만들게 되면 번거롭게 struct를 적을 필요가 없어짐.
//회사에 따라서 만들어둔 규약에 맞춰 만든다.
*/

struct Hero {
	int hp;
	int mp;
};
struct Monster {//구조체
	int hp;
	int mp;
	int lv;
	float atk;
	float def;
}; //Cpp(C++)과 C#은 typedef를 안해도 가능.

void SetDemage(Monster mon) {//struct를 일일이 치기 번거로움.

}

int main()
{
	uint number; // unsigned int와 같음.
	Monster mon; // Monset의 메모리만큼을 가지게됨.
	Hero hero;
	mon.hp = 100;
	hero.hp = 300;// 각각의 구조체 HP에 값을 부여함.
	// 각각 초기화를 해줘야함. => 

}

