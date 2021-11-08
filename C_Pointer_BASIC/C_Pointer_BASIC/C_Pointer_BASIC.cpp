#include <stdio.h>
#include <stdlib.h>\

int global = 300; // 전역 변수 => Data segment

int main()
{
	static int a = 20; // Data segmetn => 정적(Static)으로 선언했기 때문에
	int b = 30; // Stack 영역 지역변수 이기때문에
	int* p = (int*)malloc(sizeof(int));// 지역변수이지만 포인터는 시작 메모리 주소를 기억함.
	// 주소를 할당받지 않은 포인터는 아무짝에 쓸모도 없고 쓰면도 안된다. = NULL
	// malloc 메모리를 동적으로 요구하는 함수 => (sizeof(int)); 원하는 크기만큼 heap영역에 할당받을수 있다.
	// 함수를 요청하여 (malloc) 크기를 할당했지만 변수를 통하여 설정하지 않았기때문에 불러올수가 없다.
	*p = 150; // 메모리 주소에 150을 저장함.
	printf("전역변수 global = %3d, &global=%d\n", global, &global);
	printf("정적변수 a = %3d, &a=%d\n", a, &a);
	printf("지역변수 b = %3d, &b=%d\n", b, &b);
	printf("포인터 *p = %3d, p=%d\n", *p, p); // *p가 가지고있는 시작메모리 주소
	printf("포인터 *p = %3d, &p=%d\n", *p, &p);// *p의 주소는 stack영역에 잇음

	// 해당 변수의 메모리 주소를 가져가는법
	int test = 32;
	int* ptr = &test;

	printf("int형 test의 값 %d, 주소 %d, 크기 %d\n", test, &test, sizeof(test));

	void *ptr = NULL; // 모든형식의 포인터로 설정가능하다. 선언할때 int 형이거나 float형이면 (int *)ptr 이거나 (float *)ptr
	// a와 b를 바꾸는 함수에서 포인터를 이용하여 주소를 바꾼다면 좀더 메모리영역이 수월하게 바뀐다.
	// ++(*pc)); // *연산자보다 ++연산자가 우선순위가 더 높다. 그러므로 저렇게 해야함.
	//배열을 이용할때도 int a[3]을 int *ptr 에 넣고 이용할수도있다.
	//픽셀 RGBA = A는 투명도 각각 8비트씩 하여 32비트로 표현함.
}