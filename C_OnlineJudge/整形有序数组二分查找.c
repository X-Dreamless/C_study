#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

	// 3.��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x, int v[], int n);���ܣ���v[] <= v[1] <= v[2] <=...<= v[n-1]�������в���x
	// ���� 1 2 3 4 5 6 7 8 9 10 ���� 7
	// ���ֲ���
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ�����

	// ��arr������������в���k��ֵ

	//��������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	// ȷ�����±�
	int left = 0;
	// ȷ�����±�
	int right = sz - 1;

	// �ҵ�����ƽ��ֵ���±�
	//arr[mid]


	while (left <= right)
	{
		// ���������±�ƽ��ֵ
		int mid = (left + right) / 2;

		// �Ƚ� С�Ҵ���
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���%d\n", arr[mid]);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}