/*
	��Ļ�����99�˷��ھ���
		1*1=1
		2*1=2 2*2=4
		3*1=3 3*2=6 3*3=9
		......

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;

	// ����
	for (i = 1; i <= 9; i++)
	{
		// ��ӡһ��,���Ƕ��پʹ�ӡ������
		for (j = 1; j <= i; j++)
		{
			//		��   ��
			printf("%d * %d = %-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}