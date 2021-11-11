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
	Student student[5] = {0}; // 배열 초기화
	for (int i = 0; i < 5; i++)
	{
		printf("이름 입력 : \n");
		scanf("%s", student[i].name);
		printf("국어상식 입력 : \n");
		scanf("%d", &student[i].kor);// 변수를 입력받을때는 &을 넣어줘야함.
		printf("영어상식 입력 : \n");
		scanf("%d", &student[i].eng);
		printf("수학상식 입력 : \n");
		scanf("%d", &student[i].math);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s.학생의 국어 : %2d 영어 : %2d 수학 : %2d \n", student[i].name, student[i].kor, student[i].eng, student[i].math);
	}

}
