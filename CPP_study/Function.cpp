
#include "Function.h"

void n2(int ���д���, char* ���з���, int ���Ÿ���)
{
	int i = 0;

	if (���з��� != NULL && ���Ÿ��� > 0)
	{
		printf("\n");
		for (i = 0; i < ���Ÿ���; i++)
		{
			printf("%s", ���з���);
		}
	}

	for (i = 0; i < ���д���; i++)
	{
		printf("\n");
	}
}

// ��������λ��
int digit(int num)
{
	int counter = 1;

	while (num >= 10)
	{
		num = num / 10;
		counter++;
	}

	return counter;
}