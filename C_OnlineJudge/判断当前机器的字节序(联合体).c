/*
	���һ��С�������жϵ�ǰ�������ֽ���

	ʹ��������
*/

#include <stdio.h>

int ��С��()
{
	union U
	{
		char c;
		int i;
	}u;

	u.i = 1;

	return u.c;
}

int main()
{
	int ret = ��С��();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	return 0;
}