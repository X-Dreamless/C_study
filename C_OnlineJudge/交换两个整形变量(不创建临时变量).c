/*
	�����������α���(��������ʱ����)
		����������ʱ������������������������
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ���������ֵ��������
void f1(int a, int b)
{
	printf("����ǰ��a = %d, b = %d\n", a, b);
	a = a + b;// a = 10 + 20 = 30
	b = a - b;// b = 30 - 20 = 10
	a = a - b;// a = 30 - 10 = 20
	printf("������a = %d, b = %d\n", a, b);
}

void f2(int a, int b)
{
	printf("����ǰ��a = %d, b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;// a ^ b ^ b
	a = a ^ b;// a ^ b ^ a
	printf("������a = %d, b = %d\n", a, b);
}

int main()
{
	int a = 10;
	int b = 20;
	f1(a, b);
	f2(a, b);

	return 0;
}