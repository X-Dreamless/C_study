/*
	��9�ĸ���
		��дһ������ ��һ��1��100�����������г��ֶ��ٸ�����9

		9 19 29 39 49 59 69 79 89 99
		90 91 92 93...99

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int ��λ = 0;
	int ʮλ = 0;

	for (i = 1; i <= 100; i++)
	{
		// ��λ9
		if (i % 10 == 9)
		{
			��λ++;
		}
		if (i / 10 == 9)
		{
			ʮλ++;
		}
	}
	printf("%d\n%d\n", ��λ, ʮλ);

	return 0;
}