
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

		6.5 �����ĳ�����ʽ

			�����ĺ�����ʽ��4��

				�޲��޷�
				�в��޷�
				�޲��з�
				�в��з�
*/

#include <iostream>

using namespace std;

//����������ʽ
//1�� �޲��޷�
void test01()
{
	//void a = 10; //�����Ͳ����Դ�������,ԭ���޷������ڴ�
	cout << "this is test01" << endl;
	//test01(); ��������
}

//2�� �в��޷�
void test02(int a)
{
	cout << "this is test02" << endl;
	cout << "a = " << a << endl;
}

//3���޲��з�
int test03()
{
	cout << "this is test03 " << endl;
	return 10;
}

//4���в��з�
int test04(int a, int b)
{
	cout << "this is test04 " << endl;
	int sum = a + b;
	return sum;
}

int main()
{

	return 0;
}