#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int number = 0;
	int n = 1;
	int count = 0;
	for (number = 100; number <= 200; number++)
	{
		//�ж�number�Ƿ�Ϊ������
		//�������жϹ���
		//1���Գ���
		//���� 2->number-1������
		int j = 0;
		for (j = 2; j < number; j++)
		{
			if (0 == number % j)
			{
				break;
			}
		}
		if (j == number)
		{
			count++;
			printf("%d\n", number);
		}
	}
	printf("count=%d\n", count);
	return 0;
}

//��ӡ����
//int main()
//{
//	int year = 0;
//	printf("�����У�\n");
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1���ܱ�4�������Ҳ��ܱ�100������������
//		//2���ܹ���400������������
//		//if (0 == year % 4 && 0 != year % 100)
//		//{
//		//	printf("%d\n", year);
//		//	count++;
//		//}
//		//else if(0 == year % 400)
//		//{
//		//	printf("%d\n", year);
//		//	count++;
//		//}
//
//		if ((0 == year % 4) && (0 != year % 100) || (0 == year % 400))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//���Լ��
//շת�������ŷ������㷨
/*https://baike.baidu.com/item/%E6%9C%80%E5%A4%A7%E5%85%AC%E7%BA%A6%E6%95%B0/869308?fr=aladdin*/
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	//scanf("%d%d", &m, &n);
//
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}

//��ӡ3�ı�������
//int main()
//{
//	int i;
//	//int n = 0;
//	//scanf("%d", &n);
//	for (i = 1; ; i++)
//	{
//		if (0 == i % 3)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//����Ӵ�С��������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�㷨ʵ��
//	//a�з����ֵ
//	//c�з���Сֵ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for( i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		//if (password == "123456")//�ַ������������Ƚ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		if (strcmp (password , "123456")==0)
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("��������������˳�");
//	}
//
//	return 0;
//}