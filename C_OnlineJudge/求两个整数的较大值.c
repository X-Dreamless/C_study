/*
	�����������Ľϴ�ֵ
		дһ�����������������Ľϴ�ֵ
		��
			����:10 20
			����ϴ�ֵ:20

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int intMAX(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a = 0;
	int b = 0;

	printf("��������������\n");
	scanf("%d %d", &a, &b);

	int m = intMAX(a, b);
	printf("%d\n", m);



	return 0;
}