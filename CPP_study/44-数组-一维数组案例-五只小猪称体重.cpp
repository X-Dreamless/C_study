
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

				����������

					��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};

					�ҳ�����ӡ���ص�С�����ء�
*/

#include <iostream>

using namespace std;

void test1()
{
	// ����5ֻС�������
	int arr[5] = { 300,350,200,400,250 };

	// ���������ҵ����ֵ
	// ���趨���ֵΪ0
	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		// ��������е�Ԫ�ر� max �󣬾ͽ�����Ԫ�ظ�ֵ�� max
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	// ��ӡ���ֵ
	cout << max << endl;
}

void test2()
{
	int arr[5] = { 300,350,200,400,250 };

	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		max = (max < arr[i] ? arr[i] : max);
	}

	cout << max << endl;
}

void test3()
{
	int arr[5] = { 0 };

	int compare = 0;
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arrSize; i++)
	{
		cout << "����С�� " << i + 1 << " ������>";

		cin >> arr[i];

		if (arr[i] > compare)
		{
			compare = arr[i];
		}
	}

	cout << compare << endl;
}

int main()
{
	test1();

	cout << "-------- -------- -------- --------" << endl;

	// �����汾
	test2();

	cout << "-------- -------- -------- --------" << endl;

	// �����汾
	test3();

	return 0;
}