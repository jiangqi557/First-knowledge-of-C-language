//����һ����stdio.h���ļ�
//std-��׼ standard i-input o-output

#define _CRT_SECURE_NO_WARNINGS 1//���������
#include<stdio.h>

//int mian()
//{
//	{
//		int a = 10;//�ֲ�������ʼ�������򣬽����������򣬡�{}����ʾһ����������
//		printf("a = %d", a);//OK
//	}
//	printf("a = %d", a);//error
//	return 0;
//}


//ȫ�ֱ��������������������������������
//int main()
//{
//	//Ϊ�����ı�ʶ��
//	//���� extern �ⲿ���ŵ�����
//	extern int g_val;
//	printf("g_avl = %d\n", g_val);
//	return 0;
//}

//int global = 2021;//ȫ�ֱ������������̣������Ե���
//
//void test()
//{
//	printf("test()-- %d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	//�ֲ�������������
//	int num = 0;
//	{
//		printf("num = %d\n", num);
//	}
//	//printf("num = %d\n", num);
//	return 0;
//}

int main()
{
	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//ȡ��ַ���� -&
	//scanf��C�����ṩ�ġ�
	// scanf_s���Ǳ�׼C�����ṩ�ģ�
	// ��VS�������ṩ�ģ�ֻ����VS����ʹ�ã�
	// �����������ʶ�𲻳���
	
	//int sum = 0;
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}

//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int a = 100;
//int main()
//{
//	//int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
//	printf("%d\n", a);
//	return 0;
//}

//int num2 = 20;//ȫ�ֱ���-�����ڴ����{}֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ����{}�ڲ��ĵı���
//	return 0;
//}

//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ� -16bitλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽڣ����С��
//	
//	return 0;
//}

////��������ռ�Ŀռ�
//int main()
//{
//	int b = 0b1111111111111111;
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n",b);
//
//	return 0;
//}

//int main()
//{
//	//%d - ��ӡ����
//	//%c - ��ӡ�ַ�
//	//%f - ��ӡ��������-��С��
//	//%p - �Ե�ַ����ʽ��ӡ
//	//%x - ��ӡ16��������
//	//%o ...
//
//	//char - �ַ���
//	char ch = 'A';//�����ڴ�
//	printf("%c\n",ch);//%c -- ��ӡ�ַ���ʽ������
//	
//	//short int - ������
//	//int - ����
//	int age = 20;
//	printf("%d\n", age);//%d -- ��ӡ����ʮ��������
//	
//	//long - ������
//	long num = 100;
//	printf("%d\n", num);
//
//	float f = 5.0;
//	printf("%f\n", f);
//
//	double d = 3.14;
//	printf("%lf\n", d);//��ӡ˫���ȸ����������ʹ��%lf
//
//	return 0;
//}

//int main()//������-��������,main�������ҽ���һ��
//{
//	//�����������
//	//����Ļ�����hello world
//	//����-print function - printf - ��ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//���˵Ķ���-���к�
//	//#include
//	printf("hello world\n");
//	return 0;
//}

//int�����͵���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//int main()
//{
//	return 0;//����0
//}

//����д���ǹ�ʱ��д��
//void main()
//{
//
//}
