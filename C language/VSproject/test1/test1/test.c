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
//	int a = 10;//申请4个字节
//	int* p = &a;//取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 02;//* - 解引用操作符
//	printf("%d\n",a);
//	//有一种变量是用来存放地址的 - 称为指针变量
//	//printf("%p\n", &a);
//	return 0;
//}


//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏 - 带参数

//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(x,y) (x>y?x:y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
////static修饰函数
////也是改变了函数的作用域 - 不准确
////static修饰函数改变了函数的链接属性
////外部链接属性 -> 内部链接属性
////声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//static修饰全局变量
//int main()
//{
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//static 修饰局部变量
//局部变量的生命周期变长

//void test()
//{
//	//int a = 1;//输出2，2，2，2，2
//	static int a = 1;//a 是一个静态的局部变量 输出2，3，4，5，6
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
//	//register int a = 10;//建议把a定义为寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int == int;
//	unsigned int num = 1;
//	//struct - 结构体关键字
//	//union - 联合体/共用体
//	//typedef - 类型定义 - 类型重定义
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//局部变量就是自动变量，所以就去掉了auto
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
//	//arr[4];// [ ] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);// ( ) - 函数调用操作符
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
//	max = (a > b ? a : b);//三目操作符
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
//	// 真  -  非0
//	// 假  -  0
//	//&& - 逻辑与
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	//|| - 逻辑或
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
//	//int b = a++;//后置++，先使用，在++
//	//printf("a = %d b = %d\n", a, b);//a=11 b=10
//	//int b = ++a;//前置++，先++，在使用
//	//printf("a = %d b = %d\n", a, b);//a=11 b=11
//	//int b = a--;//后置--，先使用，在--
//	//printf("a = %d b = %d\n", a, b);//a=9 b=10
//	int b = --a;//前置--，先--，在使用
//	printf("a = %d b = %d\n", a, b);//a=9 b=9
//
//	return 0;
//}

//11111111111111111111111111111111
//100000000000000000000000000000000
// 1*2`32-1
//
// 只要是整数，内存中存储的都是二进制的补码
// 正数--原码，反码，补码 相同
// 负数
//原码				-->			反码			-->		补码
//直接按照正负写			原码的符号位不变			反码+1
// 出的二进制序列			其他位按位取反得到
// -2
//10000000000000000000000000000010	-原码
//11111111111111111111111111111101	-反码
//11111111111111111111111111111110	-补码
//
//
//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//b是有符号的整形
//	// ~ -- 按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//11111111111111111111111111111111	补码
//	//11111111111111111111111111111110	反码 在补码基础上-1
//	//10000000000000000000000000000001	原码 在反码基础上取反
//	//11111111111111111111111111111111	最前面的1和0代表符号-和+
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
//		printf("较大值是%d\n", num1);
//	}
//	else
//	{
//		printf("较大值是%d\n", num2);
//	}*/
//
//	//字符串的结束标志：'\0'
//	//"abcdef";
//	//'\0' - 转义字符 - 0
//	//0 -> 数字0
//	//'0' -> 字符0，在ASCII码是 48
//	// 'a' 'b' 'c'字母字符 '0' '1' '2'数字字符
//	// 
//	//EOF -end of file - 文件结束标志 - 1
//
//	return 0;
//}