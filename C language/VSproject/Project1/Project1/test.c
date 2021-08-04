#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	//int a = 1;
	//int b = 2;//较麻烦
	//int c = 3;
	//int d = 4;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整行数字的数组
	//printf("%d\n", arr[4]);//下标的方式访问元素
	// 0-9
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	//arr[下标]
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

//函数
//f(x)=2*x+1
//f(x,y)=x+y

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码=%d\n", line+1);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("回家种田\n");
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);// 1or0
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\x61');
//	//打印16进制字符
//
//	printf("\52\n");
//	//打印8进制字符
//
//	printf("%d\n",strlen("c:\test\32\test.c"));
//
//	// \32 -- 32是2个8进制数字
//	// 32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	// 32 -- > 10进制 26 ->作为代表 ASCII码值代表的字符
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "\"a\"");
//	// \" - 转义为一个 "
//	printf("%c\n", '\'');
//	// \' - 转义为一个 '
//	printf("c:\\test\\32\\test.c");
//	// \t - 水平制表符
//	// \\ - 转义为一个 \ 
//	return 0;
//}

//int main()
//{
//	printf("abc\n");// n - \n意义不同，转义字符
//  //\n - 换行符
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//数据在计算机上存储的时候，存储的都是2进制
//	//#av$
//	//a - 96
//	//A - 65
//	//ASCII 编码
//	//ASCII 码值
//	char arr1[] = "abc";//数组
//	//"abc" 包含 'a' 'b' 'c' '\0' -- '\0' 字符串结束标志
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
//字符串类型


//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//空字符串
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
//	printf("请输入第一个数：", &num1);
//	scanf("%d", &num1);
//	printf("请输入第二个数：", &num2);
//	scanf("%d", &num2);
//
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//不安全的
//	//strcpy_c//编译器提示用的不适用于全部的软件，容易出错
//	//...
//
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include<stdio.h>

//枚举常量
//枚举一一列举
//枚举关键字 - enum

//三原色：红、黄、蓝
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

//星期：1、2、3、4、5、6、7

//性别：男、女、保密
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	// Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//#define 定义的标识符常量
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
//	//const - 常属性
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[n] = {0};
//	n = 20;
//
//
//	//const修饰的常变量
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	
//	//3;//字面常量就是直接写出来的量
//	//100;
//	//3.14;
//
//	return 0;
//}