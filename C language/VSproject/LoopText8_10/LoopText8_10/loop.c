#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int Confirm = 0;
	int StagingArea = 0;
	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%c", password);
	while ((StagingArea = getchar()) != '\n');
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	Confirm = getchar();
	if (Confirm == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}

//int main()
//{
//	int ch = 0;
//	//EOF - end of file �ļ�������־
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}