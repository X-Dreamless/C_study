/*
	���������������в�ͬλ�ĸ���
		���ʵ�֣�����int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
		�������ӣ�1999 2299
		������ӣ�7
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int f1(int m, int n)
{
	int ������ = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			������++;
		}
	}
	return ������;
}


// �Ľ�
// ͳ��һ��ret�Ķ��������м���1����˵��m��n�Ķ�����λ���м���λ��ͬ
int f2(int n)
{
	int ������ = 0;
	while (n)
	{
		n = n & (n - 1);
		������++;
	}
	return ������;
}

int main()
{
	int m = 1999;
	int n = 2299;

	int ret = f1(m, n);
	printf("%d\n", ret);
	

	int ret2 = m ^ n;// ��ͬΪ0 ����Ϊ1
	int count = f2(ret2);
	printf("%d\n", count);

	return 0;
}