/*
	��ӡ���������Ƶ�����λ��ż��λ
		��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	printf("������\n");
	scanf("%d", &n);

	// ��ȡn�Ķ������е�ż��λ
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}

	printf("\n");

	// ��ȡn�Ķ������е�����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}

	return 0;
}