/*
	��ӡ����
		����Ļ�ϴ�ӡ����
			*
		   ***
		  *****
		 *******
		*********
		 *******
		  *****
		   ***
		    *
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int �� = 0;
	int i = 0;

	printf("������Ҫ��ӡ������\n");
	scanf("%d", &��);

	//��
	for (i = 0; i < ��; i++)
	{
		// ��ӡһ��
		// �ո�
		int j = 0;
		for (j = 0; j < �� - 1 - i; j++)
		{
			printf(" ");
		}

		// *
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//��
	for (i = 0; i < �� - 1; i++)
	{
		// ��ӡһ��
		// �ո�
		int j = 0;
		for (j = 0; j <= i ; j++)
		{
			printf(" ");
		}
		
		// *
		for (j = 0; j < 2 * (�� - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}