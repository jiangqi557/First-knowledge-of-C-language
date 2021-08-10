#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int Confirm = 0;
	int StagingArea = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%c", password);
	while ((StagingArea = getchar()) != '\n');
	{
		;
	}
	printf("请确认(Y/N):>");
	Confirm = getchar();
	if (Confirm == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}

//int main()
//{
//	int ch = 0;
//	//EOF - end of file 文件解锁标志
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}