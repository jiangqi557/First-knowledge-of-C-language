#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[10] = { 0 };
	printf("%d\n", sizeof(arr1));
	printf("\n");
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);		//��һ��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]);	//��һ��Ԫ�صĵ�ַ
	printf("%p\n", &arr);		//����Ԫ�ص�һ���ĵ�ַ
	printf("%d\n", *arr);		//�����һ��Ԫ��
	printf("\n");
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr+1);
	return 0;
}

//ð������
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
//	//�� arr ���������ĳ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//��ά����
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



//һά����Ĵ���...
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
//	//����һ������-�������-10��
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a',97 };
//	char arr3[5] = "ab";//����Ҳ�ǿ��Ե�
//	char arr4[] = "abcdef";
//
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof ���� arr4 ��ռ�ռ�Ĵ�С
//	//7 ��Ԫ�� - char 7*1=7
//
//	printf("%d\n", strlen(arr4));//6
//	//strlen ���ַ����ĳ��� - '\0' ֮ǰ���ַ�����
//	//[a b c d e f \0]
//	//6
//
//	printf("\n");
//
//	//1.strlen �� sizeof û��ʲô����
//	//2.strlen �����ַ������ȵ� - ֻ������ַ����󳤶� - �ǿ⺯����ʹ�õ���ͷ�ļ�
//	//3.sizeof ������������顢���͵Ĵ�С - ��λ���ֽ� - �ǲ�����
//
//	char arr10[] = "a,b,c";
//	char arr11[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr10));//6	����Ҳ��һ��
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