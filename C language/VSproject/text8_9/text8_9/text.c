#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 51;
	
	return 0;
}

//�ṹ��
//char int double...
//�� �� - ���Ӷ���
//��ʾ�˵�������+���+����+���֤����+...
//���Ӷ��� -- �ṹ�� -- �����Լ����������һ������

// #include<string.h>
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	strcpy(b1.name, "C++");//strcpy - string copy - �ַ�������-������-string.h
//	printf("%s\n", b1.name);
//	//struct Book* pd = &b1;
//
//	//����pd��ӡ���ҵ������ͼ۸�
//	//.		�ṹ����� . ��Ա
//	//->	�ṹ��ָ�� -> ��Ա
//	//printf("%s\n", pd->name);
//	//printf("%d\n", pd->price);
//	//printf("%s\n", (*pd).name);
//	//printf("%d\n", (*pd).price);
//
//	/*printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("���ۺ�ļ��۸�%d\n", b1.price);*/
//	return 0;
//}

//int main()
//{
//
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	//double d = 3.14;
//	//double* pd = &d;//32 - 4	64 - 8
//	//printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	//int a = 10;//������4���ֽڵĿռ�
//	////printf("%p\n", &a);
//	//int* p = &a;//p��һ������-ָ�����
//	////printf("%p\n", p);
//	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//	return 0;
//}