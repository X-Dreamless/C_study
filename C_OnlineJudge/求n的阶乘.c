/*

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>

// �ݹ������
// ��ϰ3
// ��n�Ľ׳�(���������)
// n!
// 1*2*3*...*n
// 
// �׳���ѧ��ʽ
//		   --- n <= 1 , 1
//		   |
// Fac(n) -|
//		   |
//		   --- n > 1  , n * Fac(n - 1)
int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

int main()
{
	// �ݹ������
	// ��ϰ3
	// ��n�Ľ׳�(���������)
	// n!
	// 1*2*3*...*n
	// 
	// �׳���ѧ��ʽ
	//		   --- n <= 1 , 1
	//		   |
	// Fac(n) -|
	//		   |
	//		   --- n > 1  , n * Fac(n - 1)
	//int n = 0;
	//int i = 0;
	//int ret = 1;
	//printf("�׳�>")
	//scanf("%d", &n);
	//// ѭ��Ҳ��Ҳ��ν����
	//for (i = 1; i <= n; i++)
	//{
	//	ret = ret * i;
	//}
	//printf("%d\n", ret);

	int n = 0;
	printf("�׳�>");
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);

	return 0;
}