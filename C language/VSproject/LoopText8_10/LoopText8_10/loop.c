#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!!!";
	char arr2[] = "#####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//-2是因为还有一个\n
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息一秒
		Sleep(1000);
		system("cls");//执行系统命令的一个函数 -cls，清空屏幕
		left++;
		right--;
	}

	return 0;
}

//int main()
//{
//	//二分查找算法，比顺序寻找更加有效率
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int left = 0;//表示左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int right = sz - 1;//表示右下标
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (arr[middle] > k)
//		{
//			right = middle - 1;
//		}
//		else if (arr[middle] < k)
//		{
//			left = middle + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", middle);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	//这个是从第一个数开始寻找，效率较慢
//	//写一个代码，在arr数组（有序排列的）中找到7
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//		}
//	}
//	if (sz == k)
//	{
//		printf("不好意思，没有找到\n");
//	}
//	return 0;
//}

//int main()
//{
//	//1!+2!+3!+......+10!
//	//10的阶乘的和 简化版
//	long n = 0;
//	long ret = 1;
//	long sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;//计算1-10各个的阶乘
//		sum = sum + ret;//将所有阶乘进行相加
//	}
//	printf("sum = %d\n", sum);
//	////10的阶乘的和
//	//long i = 0;
//	//long n = 0;
//	//long ret = 1;
//	//long sum = 0;
//	//for (n = 1; n <= 10; n++)
//	//{
//	//	ret = 1;
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret = ret * i;
//	//	}
//	//	printf("%d\n", ret);
//	//	sum = sum + ret;
//	//}
//	//printf("sum = %d\n", sum);
//	return 0;
//}

//计算n的阶层
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("计算n的阶乘，请输入 n=");
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			//break;//退出循环
//			continue;//跳过下面两段代码，直接执行while，进入死循环
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{	//不循环：里面的判断 = 是赋值，不是判断相等
//	int i = 0;
//	int k = 0;
//	for (i = 0,k = 0; k = 0; k++)
//		k++;
//	printf("%d %d", i, k);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");//输出两个hehe
//	}
//	return 0;
//}

////死循环
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//break与continue在for里面的区别
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d", i);
//	}
//	printf("\n");
//	int con = 0;
//	for (con = 1; con <= 10; con++)
//	{
//		if (5 == con)
//		{
//			continue;
//		}
//		printf("%d", con);
//	}
//	return 0;
//}

//int main()
//{
//	//for相对while比较简介添加continue不易死循环
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d.hehe\n", i);
//		i++;
//	}
//	for (int a = 0; a <= 10; a++)
//	{
//		printf("%d.haha\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	int Confirm = 0;
//	int StagingArea = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%c", password);
//	while ((StagingArea = getchar()) != '\n');
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	Confirm = getchar();
//	if (Confirm == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

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