#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[10] = { 0 };
	printf("%d\n", sizeof(arr1));
	printf("\n");
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);		//第一个元素的地址
	printf("%p\n", &arr[0]);	//第一个元素的地址
	printf("%p\n", &arr);		//整个元素第一个的地址
	printf("%d\n", *arr);		//数组第一个元素
	printf("\n");
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr+1);
	return 0;
}

//冒泡排序
//bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//对 arr 进行排序，拍成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//二维数组
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d:", i + 1);
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%c\n", i, j, arr[j]);
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	// 1 2 3 0
//	// 4 5 6 0
//	// 0 0 0 0
//	return 0;
//}



//一维数组的创建...
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	printf("%c\n", arr[3]);//d
//	printf("\n");
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a',97 };
//	char arr3[5] = "ab";//这样也是可以的
//	char arr4[] = "abcdef";
//
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof 计算 arr4 所占空间的大小
//	//7 个元素 - char 7*1=7
//
//	printf("%d\n", strlen(arr4));//6
//	//strlen 求字符串的长度 - '\0' 之前的字符个数
//	//[a b c d e f \0]
//	//6
//
//	printf("\n");
//
//	//1.strlen 和 sizeof 没有什么关联
//	//2.strlen 是求字符串长度的 - 只能针对字符串求长度 - 是库函数，使用得引头文件
//	//3.sizeof 计算变量、数组、类型的大小 - 单位是字节 - 是操作符
//
//	char arr10[] = "a,b,c";
//	char arr11[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr10));//6	逗号也是一个
//	printf("%d\n", sizeof(arr11));//3
//	printf("%d\n", strlen(arr10));//5
//	printf("%d\n", strlen(arr11));//...
//
//	printf("\n");
//
//	char arr100[] = "abc";
//	char arr111[3] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr100));//4
//	printf("%d\n", sizeof(arr111));//3
//	printf("%d\n", strlen(arr100));//3
//	printf("%d\n", strlen(arr111));//...
//
//	return 0;
//}