/*
	�������
		��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������

		���磺 2 + 22 + 222 + 2222 + 22222

		2 + (2*10+2) + (22*10+2)......
*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int ret = 0;// һ��

	printf("a��ɵ�ǰn��֮��>");
	scanf("%d %d", &a, &n);

	int i = 0;
	for (i = 0; i < n; i++)
	{
		// ���һ��
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	printf("%d\n", sum);

	return 0;
}