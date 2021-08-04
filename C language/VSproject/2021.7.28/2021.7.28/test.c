//包含一个叫stdio.h的文件
//std-标准 standard i-input o-output

#define _CRT_SECURE_NO_WARNINGS 1//调用运算符
#include<stdio.h>

//int mian()
//{
//	{
//		int a = 10;//局部变量开始与作用域，结束于作用域，“{}”表示一个生命周期
//		printf("a = %d", a);//OK
//	}
//	printf("a = %d", a);//error
//	return 0;
//}


//全局变量的生命周期是整个程序的生命周期
//int main()
//{
//	//为声明的标识符
//	//声明 extern 外部符号的引用
//	extern int g_val;
//	printf("g_avl = %d\n", g_val);
//	return 0;
//}

//int global = 2021;//全局变量是整个工程，都可以调用
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
//	//局部变量的作用域
//	int num = 0;
//	{
//		printf("num = %d\n", num);
//	}
//	//printf("num = %d\n", num);
//	return 0;
//}

int main()
{
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//取地址符号 -&
	//scanf是C语言提供的。
	// scanf_s不是标准C语言提供的，
	// 是VS编译器提供的，只能在VS里面使用，
	// 用其他是软件识别不出来
	
	//int sum = 0;
	//C语言语法规定，变量要定义在当前代码块的最前面
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
//	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}

//int num2 = 20;//全局变量-定义在代码块{}之外的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块{}内部的的变量
//	return 0;
//}

//int main()
//{
//	short age = 20;//向内存申请2个字节 -16bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数
//	
//	return 0;
//}

////各种类型占的空间
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
//	//%d - 打印整型
//	//%c - 打印字符
//	//%f - 打印浮点数字-打小数
//	//%p - 以地址的形式打印
//	//%x - 打印16进制数字
//	//%o ...
//
//	//char - 字符型
//	char ch = 'A';//申请内存
//	printf("%c\n",ch);//%c -- 打印字符格式的数据
//	
//	//short int - 短整型
//	//int - 整型
//	int age = 20;
//	printf("%d\n", age);//%d -- 打印整形十进制数据
//	
//	//long - 长整型
//	long num = 100;
//	printf("%d\n", num);
//
//	float f = 5.0;
//	printf("%f\n", f);
//
//	double d = 3.14;
//	printf("%lf\n", d);//打印双精度浮点型最好是使用%lf
//
//	return 0;
//}

//int main()//主函数-程序的入口,main函数有且仅有一个
//{
//	//这里完成任务
//	//在屏幕上输出hello world
//	//函数-print function - printf - 打印函数
//	//库函数-C语言本身提供给我们使用的函数
//	//别人的东西-打招呼
//	//#include
//	printf("hello world\n");
//	return 0;
//}

//int是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()
//{
//	return 0;//返回0
//}

//这种写法是过时的写法
//void main()
//{
//
//}
