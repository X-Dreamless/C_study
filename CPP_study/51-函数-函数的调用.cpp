
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

			���ܣ�ʹ�ö���õĺ���

			�﷨�� ��������������

			�ܽ᣺����������С�����ڳ�Ϊ�βΣ���������ʱ����Ĳ�����Ϊʵ��
*/

#include <iostream>

using namespace std;

// ʾ��������һ���ӷ�������ʵ�����������
// ��������
int add(int num1, int num2)// �����е�num1,num2��Ϊ��ʽ����������β�
{
	int sum = num1 + num2;

	return sum;
}

int main()
{
	int a = 10;
	int b = 10;

	//����add����
	int sum = add(a, b);//����ʱ��a��b��Ϊʵ�ʲ��������ʵ��

	cout << "sum = " << sum << endl;

	a = 100;
	b = 100;

	sum = add(a, b);
	cout << "sum = " << sum << endl;

	return 0;
}