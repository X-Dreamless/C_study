/*
	ʹ��ָ���ӡ��������
		дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
		arr��һ������һά����
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void ��ӡ����1(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}

void ��ӡ����2(int* p, int* pend)
{
	while (p <= pend)
	{
		printf("%d ", *p);
		p++;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int* p = arr;
	int* pend = arr + sz - 1;

	��ӡ����1(p, sz);

	printf("\n");

	��ӡ����2(p, pend);


	return 0;
}