/*
	��ӡ����
		��ӡ1000�굽2000��֮�������

		�ж�����
			1.��4���������ܱ�100����
			1.�ܱ�400����

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int y = 0;
	int ���� = 0;

	for (y = 1000; y <= 2000; y++)
	{
		if ((y % 4 == 0)&&(y % 100 != 0) || (y % 400 == 0))
		{
			printf("%d ", y);
			����++;
		}
	}
	printf("\n������%d", ����);



	return 0;
}