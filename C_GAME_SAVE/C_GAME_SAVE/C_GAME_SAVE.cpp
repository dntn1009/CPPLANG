#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>

struct HERO {
	char name[20];
	int hp;
	int mp;
	int att;
	int def;
	int exp;
};

int main()
{
	HERO hero = { "정수현", 200, 150, 15, 32, 3200 };
	HERO tmphero;

	//1. txt로 생성하여 만들경우.
	/*
	FILE* fp = fopen("save.txt", "wt");// wt는 쓰기 권한
	fprintf(fp, "%s %d %d %d %d %d", hero.name, hero.hp, hero.mp, hero.att, hero.def, hero.exp);
	fclose(fp);
	fp = fopen("save.txt", "rt");// rt는 읽기권한
	fscanf(fp, "%s %d %d %d %d %d", &tmphero.name, &tmphero.hp, &tmphero.mp, &tmphero.att, &tmphero.def, &tmphero.exp);
	fclose(fp);
	printf("주인공 이름 : %s \n", tmphero.name);
	printf("주인공 생명력 : %d \n", tmphero.hp);
	printf("주인공 마법력 : %d \n", tmphero.mp);
	printf("주인공 공격력 : %d \n", tmphero.att);
	printf("주인공 방어력 : %d \n", tmphero.def);
	printf("주인공 경험치 : %d \n", tmphero.exp);
	*/
	// 일일이 번거롭게 hero의 내용들을 선언해야됌.
	
	//2. dat을 이용하여 만들 경우. 바이너리 한번에 읽고 한번에 가져오는 경우임.
	//이진데이터 덩어리
	FILE* fp = fopen("save.dat", "wb");
	fwrite((void*)&hero, sizeof(HERO), 1, fp);
	fclose(fp);
	fp = fopen("save.dat", "rb");
	fread((void*)&tmphero, sizeof(HERO), 1, fp);
	fclose(fp);
	printf("주인공 이름 : %s \n", tmphero.name);
	printf("주인공 생명력 : %d \n", tmphero.hp);
	printf("주인공 마법력 : %d \n", tmphero.mp);
	printf("주인공 공격력 : %d \n", tmphero.att);
	printf("주인공 방어력 : %d \n", tmphero.def);
	printf("주인공 경험치 : %d \n", tmphero.exp);
	// 이방법이 훨씬 간결함.
	return 0;
}
