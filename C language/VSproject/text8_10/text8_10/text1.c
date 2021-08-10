#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//while循环
int main()
{
	int ch = 0;
	//ctrl + z 退出
	//EOF = end of file -> -1		值是 -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	//int ch = getchar();//getchar输入一个值
	//putchar(ch);//putchar输出一个值
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
//	//		break;//跳出循环
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

//int main()
//{
//	if (1)//死循环//while (1)
//		printf("hehe\n");
//	return 0;
//}

// 以下是 switch 语局
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
//		{//switch允许嵌套使用
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	//case 1:
//	//	printf("星期1\n");
//	//	break;
//	//case 2:
//	//	printf("星期2\n");
//	//	break;
//	//case 3:
//	//	printf("星期3\n");
//	//	break;
//	//case 4:
//	//	printf("星期4\n");
//	//	break;
//	//case 5:
//	//	printf("星期5\n");
//	//	break;
//	//case 6:
//	//	printf("星期6\n");
//	//	break;
//	//case 7:
//	//	printf("星期7\n");
//	//	break;
//	default:
//		printf("请输入正确的值\n");
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
//	//输出1-100之间的奇数
//	int i;
//	for(i=1;i<=100;i++)
//	{
//		int TakeMold = i % 2;
//		if (1 == TakeMold)
//		{
//			printf("%d 这个数是奇数。",i);
//		}
//		else
//		{
//			printf("%d 这个数是偶数。\n",i);
//		}
//	}
//	return 0;
//
//	//判断是否为奇数
//	//int a = 189;
//	//int TakeMold = a%2;
//	//if (0 == TakeMold)
//	//{
//	//	printf("这个数是偶数。");
//	//}
//	//else
//	//{
//	//	printf("这个数是奇数。");
//	//}
//	//return 0;
//}