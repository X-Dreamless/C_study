
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

	5 ����

		5.1 ����

		5.2 һά����

			5.2.1 һά���鶨�巽ʽ

			5.2.2 һά����������

			��ϰ����1����ֻС�������

			��ϰ����2������Ԫ������

				����������������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.

				(��ԭ����Ԫ��Ϊ��1,3,2,5,4;���ú�������Ϊ:4,5,2,3,1);
*/

#include <iostream>

using namespace std;

void arrPrint(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void test1()
{
	int arr[5] = { 1,3,2,5,4 };

	int start = 0;// ��ʼԪ���±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;// ĩβԪ���±�

	arrPrint(arr, (sizeof(arr) / sizeof(arr[0])));

	// ��ʼԪ�� �� ĩβԪ�� ����
	// ���Ե�Ļ��start����û��Ҫ���˷��ˣ�ֻҪfor(int i=0;i<=(end+1)/2;i++){�������}
	while (start < end)
	{
		// ��ʱ������¼ ��ʼԪ��
		int tmp = arr[start];

		// ĩβԪ�� ��ֵ�� ��ʼԪ��
		arr[start] = arr[end];

		// ��ʱ���� ��ֵ�� ĩβԪ��
		arr[end] = tmp;

		// ��ʼλ��++��ĩβλ��--
		start++;
		end--;
	}

	arrPrint(arr, (sizeof(arr) / sizeof(arr[0])));
}

void test2()
{
	int arr[5] = { 1,2,3,4,5 };

	int tmp = 0;
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = arrSize - 1;

	arrPrint(arr, arrSize);

	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}

	arrPrint(arr, arrSize);
}

int main()
{
	test1();

	cout << "-------- -------- -------- --------" << endl;

	// �����汾
	test2();

	return 0;
}