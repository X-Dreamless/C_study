
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

	5 ����

	6 ����

		6.1 ����

		6.2 �����Ķ���

		6.3 �����ĵ���

		6.4 ֵ����

			��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�

			ֵ����ʱ������βη�����������Ӱ��ʵ��

			�ܽ᣺ ֵ����ʱ���β������β���ʵ�ε�
*/

#include <iostream>

using namespace std;

void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//return ; ����������ʱ�򣬲���Ҫ����ֵ�����Բ�дreturn
}

int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);

	cout << "mian�е� a = " << a << endl;
	cout << "mian�е� b = " << b << endl;

	return 0;
}