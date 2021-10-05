#pragma warning(disable : 4996)// scanf 반환값 무시 적용 리턴값을 무시하는 것
#include <stdio.h>

//기초부터 천천히

int main(void)
{

     char name[5];// 배열을 비워놓을수 없다. 그래서 ~~.size? android에서는 미리 받아온 것들의 길이 이런걸 넣어놓는다.
                    // 응용이 가능하다.
     char name2[] = "이런식으로도 만들수 있다.";// 이값이 넣어지고 이 값만큼 할당을 해준다.


    //int a;
    //a = 0;
    //int score = 123;
    //float pi = 3.141592;

    //printf("%.5d\n", score);// %.5d = 5자리의 숫자로 표현 자릿수 5개 표현
    //printf("%.2f\n", pi);// %.2f = 소수점 2자리까지만 표현
    //printf("[%-8s]  [%4s]   [%10s]\n", "이름", "나이", "주소"); // 
    //printf("[%-8s]  [%4d]   [%10s]\n", "이민수", 40, "서울특별시");// 4d = 4개까지만 표현하게 하는것 = 4s, 0.4s 동일
    //printf("[%-8s]  [%4d]   [%10s]\n", "원빈", 17, "수원시");
    //printf("[%-8s]  [%4d]   [%10s]\n", "제갈량", 100, "주소");

    //printf("a = ");
    //scanf("%d", &a); //원래 이것은 %s로 받아짐
     //&a = &는 주소값

    //printf("input a = %d", a); 
    //return 0;

    
}

