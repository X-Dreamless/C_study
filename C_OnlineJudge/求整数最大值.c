/*
	��10�����������ֵ

	����������max�Ƚϣ������max����max�͸���

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int i = 0;
	int max = arr[0];

	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);


	return 0;
}