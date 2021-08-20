#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int srt = 0;
//	scanf("%d", &n);
//	srt = Fib(n);
//	printf("%d\n", srt);
//	return 0;
//}

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int srt = 0;
//	scanf("%d", &n);
//	srt = Fib(n);
//	printf("%d\n", srt);
//	printf("%d\n", count);
//	return 0;
//}

//递归求 n 的阶乘
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &i);
//	ret = Fac2(i);
//	printf("%d\n", ret);
//	return 0;
//}
//循环求 n 的阶乘
int Fac1(int num)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= num; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 10;
	int i = 0;
	while (n != 0)
	{
		int ret = 0;
		scanf("%d", &i);
		ret = Fac1(i);
		printf("%d\n", ret);
		n--;
	}
	return 0;
}

//递归求字符串长度，不适用临时变量
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//函数求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[20] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//普通求字符串长度
//#include <string.h>
//int main()
//{
//	char arr[20] = "bit";
//	int len = strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//递归
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();	//自己调用自己，就是递归	容易栈溢出
//	return 0;
//}

//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//#include <string.h>
//#include <math.h>

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n", ret);
//	return 0;
//}

//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//int is_binary_scarch(int CharacterString[], int Lvalue, int RightValue, int parameter)
//{
//	int mid = 0;
//	while (Lvalue <= RightValue)
//	{
//		mid = (Lvalue + RightValue) / 2;
//		if (CharacterString[mid] < parameter)
//		{
//			Lvalue = mid + 1;
//		}
//		else if (CharacterString[mid] > parameter)
//		{
//			RightValue = mid - 1;
//		}
//		else
//			return mid;
//	}
//	if (Lvalue > RightValue)
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("输入1-10的数字，自动判断这个数在这个数组中的下标: ");
//	int input = 0;
//	scanf("%d", &input);
//
//	int bs = is_binary_scarch(arr, left, right, input);
//	
//	if (bs == 0)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("%d\n", bs);
//	}
//	return 0;
//}

//普通的二分查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	int input = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < input)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > input)
//		{
//			right = mid - 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//	{
//		printf("%d\n", mid);
//	}
//	else
//	{
//		printf("没找到");
//	}
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d\n", year);
//			i++;
//		}
//	}
//	printf(" %d\n", i);
//	return 0;
//}

//用函数判断是否是闰年
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{ 
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	int num = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(1 == is_leap_year(year))
//		{
//			printf("%d是闰年\n", year);
//			num++;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int is_prime(int n)
//{
//	//产生2至n-1个数
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int b = 0;
//there:
//	printf("num1 = ");
//	int num1 = 0;
//	scanf("%d", &num1);
//	printf("num2 = ");
//	int num2 = 0;
//	scanf("%d", &num2);
//	if (num1 > num2)
//	{
//		goto there;
//	}
//	for (i = num1; i <= num2; i++)
//	{
//		//判断 i 是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			b++;
//		}
//	}
//	printf("\n");
//	printf("总共有%d个素数\n", b);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int *pa, int *pb)
//{
//	int* tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
////指针操作
////int main()
////{
////	int a = 10;
////	int* pa = &a;	//pa指针变量，需要取地址
////	*pa=20;			//解引用操作
////	printf("%d\n", a);
////	return 0;
////}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("正常输出	a = %d b = %d\n", a, b);
//	Swap1(a, b);
//	printf("非指针交换	a = %d b = %d\n", a, b);
//	Swap2(&a, &b);
//	printf("指针交换	a = %d b = %d\n", a,b);
//	return 0;
//}

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