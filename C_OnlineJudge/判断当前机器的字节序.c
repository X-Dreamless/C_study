/*
	���һ��С�������жϵ�ǰ�������ֽ���
*/

#include <stdio.h>

int ��С��()
{
	// ���һ��С�������жϵ�ǰ�������ֽ���
	int a = 1;

	// ֻ�õ�һ���ֽ�
	char* p = (char*)&a;// ǿ������ת�� &aȡ������һ�����εĵ�ַ
	if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// ��
int ��С��2()
{

	int a = 1;
	char* p = (char*)&a;
	return *p;// ����1С�ˣ�����0���
}

int main()
{
	int ret = ��С��2();
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