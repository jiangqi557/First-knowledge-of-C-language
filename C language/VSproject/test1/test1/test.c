#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(pc));
	/**pc = 'a';
	printf("%c\n", ch);*/
	return 0;
}

//int main()
//{
//	int a = 10;//����4���ֽ�
//	int* p = &a;//ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 02;//* - �����ò�����
//	printf("%d\n",a);
//	//��һ�ֱ�����������ŵ�ַ�� - ��Ϊָ�����
//	//printf("%p\n", &a);
//	return 0;
//}


//#define �����ʶ������
//#define MAX 100
//#define ���Զ���� - ������

//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(x,y) (x>y?x:y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
////static���κ���
////Ҳ�Ǹı��˺����������� - ��׼ȷ
////static���κ����ı��˺�������������
////�ⲿ�������� -> �ڲ���������
////�����ⲿ����
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//static����ȫ�ֱ���
//int main()
//{
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//static ���ξֲ�����
//�ֲ��������������ڱ䳤

//void test()
//{
//	//int a = 1;//���2��2��2��2��2
//	static int a = 1;//a ��һ����̬�ľֲ����� ���2��3��4��5��6
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//�����a����Ϊ�Ĵ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int == int;
//	unsigned int num = 1;
//	//struct - �ṹ��ؼ���
//	//union - ������/������
//	//typedef - ���Ͷ��� - �����ض���
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//�ֲ����������Զ����������Ծ�ȥ����auto
//	return 0;
//}

//long Add(long x, long y)
//{
//	long z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];// [ ] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);// ( ) - �������ò�����
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 50;
//	int b = 0;
//	int max = 0;
//	
//	max = (a > b ? a : b);//��Ŀ������
//	printf("%d\n", max);
//
//	/*if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}*/
//	return 0;
//}

//int main()
//{
//	// ��  -  ��0
//	// ��  -  0
//	//&& - �߼���
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	//|| - �߼���
//	int cb = a || b;
//	printf("%d\n", c);
//	printf("%d\n", cb);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//double --> int
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//printf("a = %d b = %d\n", a, b);//a=11 b=10
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//printf("a = %d b = %d\n", a, b);//a=11 b=11
//	//int b = a--;//����--����ʹ�ã���--
//	//printf("a = %d b = %d\n", a, b);//a=9 b=10
//	int b = --a;//ǰ��--����--����ʹ��
//	printf("a = %d b = %d\n", a, b);//a=9 b=9
//
//	return 0;
//}

//11111111111111111111111111111111
//100000000000000000000000000000000
// 1*2`32-1
//
// ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ����--ԭ�룬���룬���� ��ͬ
// ����
//ԭ��				-->			����			-->		����
//ֱ�Ӱ�������д			ԭ��ķ���λ����			����+1
// ���Ķ���������			����λ��λȡ���õ�
// -2
//10000000000000000000000000000010	-ԭ��
//11111111111111111111111111111101	-����
//11111111111111111111111111111110	-����
//
//
//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;//b���з��ŵ�����
//	// ~ -- ����2���ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111	����
//	//11111111111111111111111111111110	���� �ڲ��������-1
//	//10000000000000000000000000000001	ԭ�� �ڷ��������ȡ��
//	//11111111111111111111111111111111	��ǰ���1��0�������-��+
//	printf("%d\n", b);
//
//	return 0;
//}

//int Max(int x, int y)
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
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//
//
//	/*if (num1 > num2)
//	{
//		printf("�ϴ�ֵ��%d\n", num1);
//	}
//	else
//	{
//		printf("�ϴ�ֵ��%d\n", num2);
//	}*/
//
//	//�ַ����Ľ�����־��'\0'
//	//"abcdef";
//	//'\0' - ת���ַ� - 0
//	//0 -> ����0
//	//'0' -> �ַ�0����ASCII���� 48
//	// 'a' 'b' 'c'��ĸ�ַ� '0' '1' '2'�����ַ�
//	// 
//	//EOF -end of file - �ļ�������־ - 1
//
//	return 0;
//}