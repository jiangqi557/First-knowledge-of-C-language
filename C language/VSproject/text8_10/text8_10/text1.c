#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//whileѭ��
int main()
{
	int ch = 0;
	//ctrl + z �˳�
	//EOF = end of file -> -1		ֵ�� -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	//int ch = getchar();//getchar����һ��ֵ
	//putchar(ch);//putchar���һ��ֵ
	//printf("%c\n", ch);

	return 0;
}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//		break;//����ѭ��
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

//int main()
//{
//	if (1)//��ѭ��//while (1)
//		printf("hehe\n");
//	return 0;
//}

// ������ switch ���
// 
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//m=3
//	case 2:
//		n++;//n=2
//	case 3:
//		switch (n)//n=2
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;//m=4
//			n++;//n=3
//			break;
//		}
//	case 4:
//		m++;//m=5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);//m=5,n=3
//	return 0;
//}

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	//case 1:
//	//	printf("����1\n");
//	//	break;
//	//case 2:
//	//	printf("����2\n");
//	//	break;
//	//case 3:
//	//	printf("����3\n");
//	//	break;
//	//case 4:
//	//	printf("����4\n");
//	//	break;
//	//case 5:
//	//	printf("����5\n");
//	//	break;
//	//case 6:
//	//	printf("����6\n");
//	//	break;
//	//case 7:
//	//	printf("����7\n");
//	//	break;
//	default:
//		printf("��������ȷ��ֵ\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int b = 1;
//	while (b <= 100)
//	{
//		printf("%d\n", b);
//		b += 2;
//	}
//
//	printf("=============================\n");
//
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//	}
//
//	//���1-100֮�������
//	int i;
//	for(i=1;i<=100;i++)
//	{
//		int TakeMold = i % 2;
//		if (1 == TakeMold)
//		{
//			printf("%d �������������",i);
//		}
//		else
//		{
//			printf("%d �������ż����\n",i);
//		}
//	}
//	return 0;
//
//	//�ж��Ƿ�Ϊ����
//	//int a = 189;
//	//int TakeMold = a%2;
//	//if (0 == TakeMold)
//	//{
//	//	printf("�������ż����");
//	//}
//	//else
//	//{
//	//	printf("�������������");
//	//}
//	//return 0;
//}