// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <stdlib.h>

#define MAX_USER 10

typedef struct tagUSER {
	char name[20];
	int id;
	int age;
}USER; // USER 에 name, id, ,age 설정

enum MENU // 열거형
{
	EXIT = 0,
	ADD_USER,
	DEL_USER,
	SHOW_USER,
};
//
void AddUser(USER * user[], int *len);
void ShowUserInfo(USER * user[], int * len);
void DeleteUser(USER * user[], int *len);
void ReleaseUserAll(USER * user[], int * len);
int SelectMenu(); // return sel;
int main()
{
	USER* users[MAX_USER];// users[10]
	int cur_user_len = 0;
	int sel = 0;
	do {
		switch (sel = SelectMenu())// printf문
		{
		case ADD_USER:// 아이디 추가 열거형
			AddUser(users, &cur_user_len);
			break;
		case DEL_USER:// 아이디 삭제 열거형
			DeleteUser(users, &cur_user_len);
			break;
		case SHOW_USER:// 생성된 아이디 출력 열거형
			ShowUserInfo(users, &cur_user_len);
			break;
		case EXIT: // EXIT = 0 열거형
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			break;
		}
	} while (sel);
	ReleaseUserAll(users, &cur_user_len);
	return 0;
}
void ReleaseUserAll(USER * user[], int * len)// int *len = USER 10명 제한두기 위해서
{
	for (int i = 0; i < *len; i++)
	{
		free(user[i]);
	}//전부다 삭제
}
void ShowUserInfo(USER * user[], int * len)
{
	if (*len <= 0)
	{
		printf("유저정보가 없습니다.\n");
		return;
	}
	printf("|%10s|%10s|%10s|\n", "ID", "Name", "Age");
	for (int i = 0; i < (*len); i++)
	{
		printf("|%10d|%10s|%10d|\n", user[i]->id, user[i]->name, user[i]->age);
	}
	printf("\n");
}// 생성된 아이디 전부다 출력
void AddUser(USER * user[], int *len)
{
	USER* tmp = NULL;
	if (*len >= MAX_USER) {
		printf("더 이상 추가할 수 없습니다.");
		return;
	}// len은 추가할때마다 점점+ 된다. 그래서 넘으면 추가할수 없도록 설정
	//while (getchar() != '\n');
	tmp = (USER *)malloc(sizeof(USER));//메모리 영역 넣음
	printf("ID를 입력하세요\n");
	scanf("%d", &tmp->id);
	printf("이름을 입력하세요\n");
	scanf("%s", &tmp->name);
	printf("나이를 입력하세요\n");
	scanf("%d", &tmp->age);// 메모리영역에 추가함
	user[(*len)++] = tmp; // USER의 len을 증가시킴 USER 10명 제한두기 위해
}
void DeleteUser(USER * user[], int *len)
{
	int id = 0, i = 0;
	printf("삭제할 ID를 입력하세요 : ");
	scanf("%d", &id);
	while (user[i]->id != id)
	{
		if(i <= *len-1)
			i++;
	}
	if (i > (*len) - 1)
	{
		printf("존재하지 않는 아이디 입니다.\n");
		return;
	}// i가 넘어가면 user[i]의 아이디에 없는 것이기 때문에 존재하지않는 id printf
	else if (i == (*len) - 1)
		free(user[i]);// 마지막 번호의 아이디면 그냥 삭제
	else
	{
		free(user[i]);
		while (i < *len)
		{
			user[i++] = user[i + 1];
		}
	}// 중간에있는 아이디면 삭제한 후에 앞에있는걸 뒤로 땡겨옴
	(*len)--;
}
int SelectMenu()
{
	int sel = 0;
	printf("============MENU=============\n");
	printf("1. User정보 추가\n");
	printf("2. User정보 삭제\n");
	printf("3. User정보 출력\n");
	printf("0. 종료\n");
	scanf("%d", &sel);
	printf("\n");
	return sel;
}