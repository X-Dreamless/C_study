
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

		1 �ڴ����ģ��

			1.1 ��������ǰ

			1.2 �������к�

			1.3 new������

				C++������ new �������ڶ�����������

				�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ��ͷ����ò����� delete

				�﷨�� new ��������

				����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
*/

#include <iostream>

using namespace std;



int* �����﷨_func()
{
	// new ���ص��Ǹ��������͵�ָ��
	int* a = new int(10);
	return a;
}
void �����﷨()
{
	int* p = �����﷨_func();

	cout << *p << endl;
	cout << *p << endl;

	//����delete�ͷŶ�������
	delete p;

	//cout << *p << endl; //�����ͷŵĿռ䲻�ɷ���
}



void ��������()
{
	// 10 ��Ԫ��
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷ����� delete ��� []
	// ���Ե�Ļ��delete arr����ֻ���ͷŵ�һ����ַָ��Ŀռ䣬�����Ŀռ�û�б��ͷš�����Ҫ��delete[] arr
	delete[] arr;
}



int main()
{
	�����﷨();

	��������();

	return 0;
}