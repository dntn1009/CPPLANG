#pragma warning (disable:4996)
//scanf 사용시 무시
#include <stdio.h>

////착용 무기 선언(비트를 이용함)
//#define WP_SWORD 0x00000001// 검
//#define WP_AXE 0x00000002 // 도끼
//#define WP_GUN 0x00000004 // 총
//#define WP_BOW 0x00000008 // 활
//#define WP_STAFF 0x00000010 // 지팡이
//#define 으로 WP_SWORD 는 0x00000001 로 지정한거임

#define WP_SWORD 1// 검
#define WP_AXE 2 // 도끼
#define WP_GUN 3 // 총
#define WP_BOW 4 // 활
#define WP_STAFF 5 // 지팡이

int main()
{
	int iWEAPON = 0;

	printf("현재 제공된 무기 목록");

	printf("\n1. 검");

	printf("\n2. 도끼");

	printf("\n3. 총");

	printf("\n4. 활");

	printf("\n5. 지팡이");
	
	printf("\n어떤 종류의 무기를 사용하겠습니까? : ");
	scanf("%d", &iWEAPON);

	if (iWEAPON == WP_SWORD)
	{
		printf("\n검을 선택하셨습니다.");
	}
	else if (iWEAPON == WP_AXE)
	{
		printf("\n도끼를 선택하셨습니다.");
	}
	else if (iWEAPON == WP_GUN)
	{
		printf("\n총을 선택하셨습니다.");
	}
	else if (iWEAPON == WP_BOW)
	{
		printf("\n활을 선택하셨습니다.");
	}
	else if (iWEAPON == WP_STAFF)
	{
		printf("\n지팡이를 선택하셨습니다.");
	}

}

