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

//ָ�����
//int main()
//{
//	int a = 10;
//	int* pa = &a;	//paָ���������Ҫȡ��ַ
//	*pa=20;			//�����ò���
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	printf("�������	a = %d b = %d\n", a, b);
	Swap1(a, b);
	printf("��ָ�뽻��	a = %d b = %d\n", a, b);
	Swap2(&a, &b);
	printf("ָ�뽻��	a = %d b = %d\n", a,b);
	return 0;
}

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