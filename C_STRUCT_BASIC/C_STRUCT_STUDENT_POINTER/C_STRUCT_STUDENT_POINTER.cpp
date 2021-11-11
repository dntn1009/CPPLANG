#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>

struct Student {
	char name[11];
	int kor;
	int eng;
	int math;
};

int main()
{
	Student student[5] = { 0 }; // 배열 초기화
	Student std1 = { "민수", 100, 100, 100 };
	Student* std = &std1;//std1의 주소값을 가지게 되므로 *std는 std1의 값을 가짐
	(*std).kor -= 10;
	(*std).eng -= 20;
	(*std).math -= 29;

	printf("%s.학생의 국어 : %2d 영어 : %2d 수학 : %2d \n", (*std).name, (*std).kor, (*std).eng, (*std).math);

	//(*std.name).first, me.name -> last 포인터 이동할때 쓰임;
	// 구조체에도 포인터를 사용할수있음/
}