#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 51;
	
	return 0;
}

//结构体
//char int double...
//人 书 - 复杂对象
//表示人得有名字+身高+年龄+身份证号码+...
//复杂对象 -- 结构体 -- 我们自己创造出来的一种类型

// #include<string.h>
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	strcpy(b1.name, "C++");//strcpy - string copy - 字符串拷贝-函数库-string.h
//	printf("%s\n", b1.name);
//	//struct Book* pd = &b1;
//
//	//利用pd打印出我的书名和价格
//	//.		结构体变量 . 成员
//	//->	结构体指针 -> 成员
//	//printf("%s\n", pd->name);
//	//printf("%d\n", pd->price);
//	//printf("%s\n", (*pd).name);
//	//printf("%d\n", (*pd).price);
//
//	/*printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("降价后的及价格：%d\n", b1.price);*/
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
//	//int a = 10;//申请了4个字节的空间
//	////printf("%p\n", &a);
//	//int* p = &a;//p是一个变量-指针变量
//	////printf("%p\n", p);
//	//*p = 20;//* - 解引用操作符/间接访问操作符
//	//printf("a = %d\n", a);
//	return 0;
//}