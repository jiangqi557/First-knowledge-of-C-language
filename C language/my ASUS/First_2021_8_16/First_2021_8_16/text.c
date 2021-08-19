#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

int is_binary_scarch(int CharacterString[], int Lvalue, int RightValue, int parameter)
{
	int mid = 0;
	while (Lvalue <= RightValue)
	{
		mid = (Lvalue + RightValue) / 2;
		if (CharacterString[mid] < parameter)
		{
			Lvalue = mid + 1;
		}
		else if (CharacterString[mid] > parameter)
		{
			RightValue = mid - 1;
		}
		else
			return mid;
	}
	if (Lvalue > RightValue)
	{
		return 0;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("����1-10�����֣��Զ��ж����������������е��±�: ");
	int input = 0;
	scanf("%d", &input);

	int bs = is_binary_scarch(arr, left, right, input);
	
	if (bs == 0)
	{
		printf("û�ҵ�");
	}
	else
	{
		printf("%d\n", bs);
	}
	return 0;
}

//��ͨ�Ķ��ֲ����㷨
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
//		printf("û�ҵ�");
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

//�ú����ж��Ƿ�������
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
//			printf("%d������\n", year);
//			num++;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int is_prime(int n)
//{
//	//����2��n-1����
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
//		//�ж� i �Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			b++;
//		}
//	}
//	printf("\n");
//	printf("�ܹ���%d������\n", b);
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
////ָ�����
////int main()
////{
////	int a = 10;
////	int* pa = &a;	//paָ���������Ҫȡ��ַ
////	*pa=20;			//�����ò���
////	printf("%d\n", a);
////	return 0;
////}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("�������	a = %d b = %d\n", a, b);
//	Swap1(a, b);
//	printf("��ָ�뽻��	a = %d b = %d\n", a, b);
//	Swap2(&a, &b);
//	printf("ָ�뽻��	a = %d b = %d\n", a,b);
//	return 0;
//}

//���庯����
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
//	//������ʹ��
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