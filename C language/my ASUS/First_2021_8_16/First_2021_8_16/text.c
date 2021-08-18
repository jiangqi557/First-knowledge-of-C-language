#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb)
{
	int* tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//指针操作
//int main()
//{
//	int a = 10;
//	int* pa = &a;	//pa指针变量，需要取地址
//	*pa=20;			//解引用操作
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	printf("正常输出	a = %d b = %d\n", a, b);
	Swap1(a, b);
	printf("非指针交换	a = %d b = %d\n", a, b);
	Swap2(&a, &b);
	printf("指针交换	a = %d b = %d\n", a,b);
	return 0;
}

//定义函数名
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	max = get_max(330, 10);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	printf("%d\n", '#');
//	return 0;
//}