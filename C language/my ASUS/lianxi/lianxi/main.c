#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void text()
{
	double a = 0;
	int b = 0;
	scanf("%lf", &a);
	scanf("%d", &b);
	int i = 0;
		for (i = 1; i < b; i++)
		{
			if (i >= 1)
			{
				a *= a;
			}
		}
	printf("%lf", a);
}

int main()
{
	text();
	return 0;
}

//int main()
//{
//    int hanoi(int, char, char, char);
//    int n, counter;
//    printf("Input the number of diskes：");
//    scanf("%d", &n);
//    printf("\n");
//    counter = hanoi(n, 'A', 'B', 'C');
//    return 0;
//}
//
//int hanoi(int n, char x, char y, char z)
//{
//    int move(char, int, char);
//    if (n == 1)
//        move(x, 1, z);
//    else
//    {
//        hanoi(n - 1, x, z, y);
//        move(x, n, z);
//        hanoi(n - 1, y, x, z);
//    }
//    return 0;
//}
//
//int move(char getone, int n, char putone)
//{
//    static int k = 1;
//    printf("%2d:%3d # %c---%c\n", k, n, getone, putone);
//    if (k++ % 3 == 0)
//        printf("\n");
//    return 0;
//}


// 青蛙跳台阶.
//方法一：循环实现2的正整数次幂
//int JumpFloor_1(int n)
//{
//    if (n <= 0) return 0;
//    int result = 1;
//    for (int i = 1; i < n; i++)
//    {
//        result = result * 2;
//    }
//    return result;
//};
////方法二 ，位操作方法
//int JumpFloor_2(int n)
//{
//    int a = 1;
//    return a << (n - 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = JumpFloor_1(n);
//    int tmp = JumpFloor_2(n);
//    printf("%d\n", ret);
//    printf("%d\n", tmp);
//    return 0;
//}