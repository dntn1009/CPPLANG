#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int input = 0;
    int num[7] = { 0 }; // 총 뽑을 횟수
    int checkNum[45] = { 0 }; // 횟수에 나올 번호들
    srand((unsigned)time(NULL)); //난수 여러숫자 정의 이거 안쓰면 값이 계속 동일
    int value = 0;
    while (true)
    {
        printf("로또 번호 생성기 입니다.\n");
        printf("1. 번호 생성    2. 종료하기\n");
        printf("입력 : ");
        scanf("%d", &input);
        if (input == 1) 
        {
            for (int i = 0; i < 7; i++)
            {
                do 
                {
                    value = rand() % 45;// value 안에 1~45의 숫자를 입력
                } while (checkNum[value]); // cehckNum[value] 안에 1을 넣음 한번넣으면 못쓰게 
                checkNum[value] = 1;
                num[i] = value;// num[i] =  value 를 넣음 현재 골라진 로또 번호를 순서대로 넣기위한것
            }
            for (int i = 0; i < 6; i++)
            {
                printf("%4d", num[i] + 1);
            }
            printf("\t보너스 %4d", num[6] + 1);
            printf("\n");
        }
        system("pause");//종료
        system("cls"); // clear screen
    }
    return 0;


}