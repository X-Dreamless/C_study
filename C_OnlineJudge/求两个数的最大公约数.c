/*
	�������������Լ��
		ͬʱ������������

		���Լ�����ᳬ��18��������������С������ʼ������
			18
			17
			16
			15
			��

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int max = 0;

	printf("��������������\n");
	scanf("%d %d", &m, &n);//24 18

	// �������Լ������m��n�Ľ�Сֵ
	if (m > n)
	{
		max = n;
	}
	else
	{
		max = m;
	}


	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("���Լ���ǣ�%d", max);
			break;
		}
		max--;
	}

	return 0;
}