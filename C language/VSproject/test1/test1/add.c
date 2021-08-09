//static int g_val = 2020;//改变了变量的作用域
//让静态的全局变量只能在自己所在的原文件内部使用
//出了原文件就没法在使用了
int g_val = 2020;

//定义了一个函数
static int Add(int x, int y)
{
	int z = x + y;
	return z;
}