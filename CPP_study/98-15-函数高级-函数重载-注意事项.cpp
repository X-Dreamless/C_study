
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

		1 �ڴ����ģ��

		2 ����

		3 �������

			3.1 ����Ĭ�ϲ���

			3.2 ����ռλ����

			3.3 ��������

				3.3.1 �������ظ���

				3.3.2 ��������ע������

					������Ϊ��������
					����������������Ĭ�ϲ���
*/

#include <iostream>

using namespace std;

//��������ע������
//1��������Ϊ��������

void func(int& a)
{
	cout << "func (int &a) ���� " << endl;
}

void func(const int& a)
{
	cout << "func (const int &a) ���� " << endl;
}


//2������������������Ĭ�ϲ���

void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) ����" << endl;
}

void func2(int a)
{
	cout << "func2(int a) ����" << endl;
}

int main()
{
	int a = 10;

	func(a); //������const
	func(10);//������const


	//func2(10); //����Ĭ�ϲ�����������(������)����Ҫ����

	return 0;
}