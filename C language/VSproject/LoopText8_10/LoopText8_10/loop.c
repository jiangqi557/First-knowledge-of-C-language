#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!!!";
	char arr2[] = "#####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//-2����Ϊ����һ��\n
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣһ��
		Sleep(1000);
		system("cls");//ִ��ϵͳ�����һ������ -cls�������Ļ
		left++;
		right--;
	}

	return 0;
}

//int main()
//{
//	//���ֲ����㷨����˳��Ѱ�Ҹ�����Ч��
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int left = 0;//��ʾ���±�
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int right = sz - 1;//��ʾ���±�
//
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (arr[middle] > k)
//		{
//			right = middle - 1;
//		}
//		else if (arr[middle] < k)
//		{
//			left = middle + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", middle);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	//����Ǵӵ�һ������ʼѰ�ң�Ч�ʽ���
//	//дһ�����룬��arr���飨�������еģ����ҵ�7
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//		}
//	}
//	if (sz == k)
//	{
//		printf("������˼��û���ҵ�\n");
//	}
//	return 0;
//}

//int main()
//{
//	//1!+2!+3!+......+10!
//	//10�Ľ׳˵ĺ� �򻯰�
//	long n = 0;
//	long ret = 1;
//	long sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;//����1-10�����Ľ׳�
//		sum = sum + ret;//�����н׳˽������
//	}
//	printf("sum = %d\n", sum);
//	////10�Ľ׳˵ĺ�
//	//long i = 0;
//	//long n = 0;
//	//long ret = 1;
//	//long sum = 0;
//	//for (n = 1; n <= 10; n++)
//	//{
//	//	ret = 1;
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret = ret * i;
//	//	}
//	//	printf("%d\n", ret);
//	//	sum = sum + ret;
//	//}
//	//printf("sum = %d\n", sum);
//	return 0;
//}

//����n�Ľײ�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("����n�Ľ׳ˣ������� n=");
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			//break;//�˳�ѭ��
//			continue;//�����������δ��룬ֱ��ִ��while��������ѭ��
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{	//��ѭ����������ж� = �Ǹ�ֵ�������ж����
//	int i = 0;
//	int k = 0;
//	for (i = 0,k = 0; k = 0; k++)
//		k++;
//	printf("%d %d", i, k);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");//�������hehe
//	}
//	return 0;
//}

////��ѭ��
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//break��continue��for���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d", i);
//	}
//	printf("\n");
//	int con = 0;
//	for (con = 1; con <= 10; con++)
//	{
//		if (5 == con)
//		{
//			continue;
//		}
//		printf("%d", con);
//	}
//	return 0;
//}

//int main()
//{
//	//for���while�Ƚϼ�����continue������ѭ��
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d.hehe\n", i);
//		i++;
//	}
//	for (int a = 0; a <= 10; a++)
//	{
//		printf("%d.haha\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	int Confirm = 0;
//	int StagingArea = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%c", password);
//	while ((StagingArea = getchar()) != '\n');
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	Confirm = getchar();
//	if (Confirm == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOF - end of file �ļ�������־
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}