#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	//int a = 1;
	//int b = 2;//���鷳
	//int c = 3;
	//int d = 4;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
	// 0-9
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	//arr[�±�]
	/*char ch[20];
	float arr2[20];*/
	return 0;
}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = a + b;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//����
//f(x)=2*x+1
//f(x,y)=x+y

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���=%d\n", line+1);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("�ؼ�����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);// 1or0
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\x61');
//	//��ӡ16�����ַ�
//
//	printf("\52\n");
//	//��ӡ8�����ַ�
//
//	printf("%d\n",strlen("c:\test\32\test.c"));
//
//	// \32 -- 32��2��8��������
//	// 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	// 32 -- > 10���� 26 ->��Ϊ���� ASCII��ֵ������ַ�
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "\"a\"");
//	// \" - ת��Ϊһ�� "
//	printf("%c\n", '\'');
//	// \' - ת��Ϊһ�� '
//	printf("c:\\test\\32\\test.c");
//	// \t - ˮƽ�Ʊ��
//	// \\ - ת��Ϊһ�� \ 
//	return 0;
//}

//int main()
//{
//	printf("abc\n");// n - \n���岻ͬ��ת���ַ�
//  //\n - ���з�
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));//strlen - string length - �����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢�Ķ���2����
//	//#av$
//	//a - 96
//	//A - 65
//	//ASCII ����
//	//ASCII ��ֵ
//	char arr1[] = "abc";//����
//	//"abc" ���� 'a' 'b' 'c' '\0' -- '\0' �ַ���������־
//	char arr2[] = { 'a','b','c', 0 };
//	// '\0' = 0
//	// 'a' = 97
//	//'a' 'b' 'c'
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int float
//char
//�ַ�������


//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//���ַ���
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//scanf("%d%d", &num1, &num2);
//
//	printf("�������һ������", &num1);
//	scanf("%d", &num1);
//	printf("������ڶ�������", &num2);
//	scanf("%d", &num2);
//
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//����ȫ��
//	//strcpy_c//��������ʾ�õĲ�������ȫ������������׳���
//	//...
//
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include<stdio.h>

//ö�ٳ���
//ö��һһ�о�
//ö�ٹؼ��� - enum

//��ԭɫ���졢�ơ���
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	color = RED;
//	printf("%d\n", color);
//	//BLUE = 6;//err
//
//	return 0;
//}

//���ڣ�1��2��3��4��5��6��7

//�Ա��С�Ů������
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET - ö�ٳ���
//int main()
//{
//	// Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//#define ����ı�ʶ������
//#define max 10
//
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	//const - ������
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	//int arr[n] = {0};
//	n = 20;
//
//
//	//const���εĳ�����
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	
//	//3;//���泣������ֱ��д��������
//	//100;
//	//3.14;
//
//	return 0;
//}