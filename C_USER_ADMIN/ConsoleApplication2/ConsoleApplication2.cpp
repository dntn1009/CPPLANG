// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <stdlib.h>

#define MAX_USER 10

typedef struct tagUSER {
	char name[20];
	int id;
	int age;
}USER; // USER �� name, id, ,age ����

enum MENU // ������
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
		switch (sel = SelectMenu())// printf��
		{
		case ADD_USER:// ���̵� �߰� ������
			AddUser(users, &cur_user_len);
			break;
		case DEL_USER:// ���̵� ���� ������
			DeleteUser(users, &cur_user_len);
			break;
		case SHOW_USER:// ������ ���̵� ��� ������
			ShowUserInfo(users, &cur_user_len);
			break;
		case EXIT: // EXIT = 0 ������
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
	} while (sel);
	ReleaseUserAll(users, &cur_user_len);
	return 0;
}
void ReleaseUserAll(USER * user[], int * len)// int *len = USER 10�� ���ѵα� ���ؼ�
{
	for (int i = 0; i < *len; i++)
	{
		free(user[i]);
	}//���δ� ����
}
void ShowUserInfo(USER * user[], int * len)
{
	if (*len <= 0)
	{
		printf("���������� �����ϴ�.\n");
		return;
	}
	printf("|%10s|%10s|%10s|\n", "ID", "Name", "Age");
	for (int i = 0; i < (*len); i++)
	{
		printf("|%10d|%10s|%10d|\n", user[i]->id, user[i]->name, user[i]->age);
	}
	printf("\n");
}// ������ ���̵� ���δ� ���
void AddUser(USER * user[], int *len)
{
	USER* tmp = NULL;
	if (*len >= MAX_USER) {
		printf("�� �̻� �߰��� �� �����ϴ�.");
		return;
	}// len�� �߰��Ҷ����� ����+ �ȴ�. �׷��� ������ �߰��Ҽ� ������ ����
	//while (getchar() != '\n');
	tmp = (USER *)malloc(sizeof(USER));//�޸� ���� ����
	printf("ID�� �Է��ϼ���\n");
	scanf("%d", &tmp->id);
	printf("�̸��� �Է��ϼ���\n");
	scanf("%s", &tmp->name);
	printf("���̸� �Է��ϼ���\n");
	scanf("%d", &tmp->age);// �޸𸮿����� �߰���
	user[(*len)++] = tmp; // USER�� len�� ������Ŵ USER 10�� ���ѵα� ����
}
void DeleteUser(USER * user[], int *len)
{
	int id = 0, i = 0;
	printf("������ ID�� �Է��ϼ��� : ");
	scanf("%d", &id);
	while (user[i]->id != id)
	{
		if(i <= *len-1)
			i++;
	}
	if (i > (*len) - 1)
	{
		printf("�������� �ʴ� ���̵� �Դϴ�.\n");
		return;
	}// i�� �Ѿ�� user[i]�� ���̵� ���� ���̱� ������ ���������ʴ� id printf
	else if (i == (*len) - 1)
		free(user[i]);// ������ ��ȣ�� ���̵�� �׳� ����
	else
	{
		free(user[i]);
		while (i < *len)
		{
			user[i++] = user[i + 1];
		}
	}// �߰����ִ� ���̵�� ������ �Ŀ� �տ��ִ°� �ڷ� ���ܿ�
	(*len)--;
}
int SelectMenu()
{
	int sel = 0;
	printf("============MENU=============\n");
	printf("1. User���� �߰�\n");
	printf("2. User���� ����\n");
	printf("3. User���� ���\n");
	printf("0. ����\n");
	scanf("%d", &sel);
	printf("\n");
	return sel;
}