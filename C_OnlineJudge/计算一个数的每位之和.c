/*
	����һ������ÿλ֮��
		дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
		��
			DigitSum(1729)���򷵻�1+7+2+9�����ĺ��� 19
			���룺1729�������19

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int DigitSum(int x)
{
	if (x > 9)
	{
		return DigitSum(x / 10) + (x % 10);
	}
	else
	{
		return x;
	}
}

int main()
{
	int num = 0;
	printf("����������>");
	scanf("%u", &num);

	int sum = DigitSum(num);
	printf("%d\n", sum);





	return 0;
}