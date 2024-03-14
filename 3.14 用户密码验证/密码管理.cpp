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
			printf("请一分钟后在重试\n");
			Sleep(60000);
			i = 0;
		}
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	return 0;
}