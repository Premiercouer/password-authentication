#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i;
	char password[20] = {0};
	for (i = 0;; i++)
	{
		scanf("%s", password);
		if (i == 3)
		{
			printf("��һ���Ӻ�������\n");
			Sleep(60000);
			i = 0;
		}
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	return 0;
}