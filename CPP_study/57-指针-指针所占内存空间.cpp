
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

	5 ����

	6 ����

	7 ָ��

		7.1 ָ��Ļ�������

		7.2 ָ������Ķ����ʹ��

		7.3 ָ����ռ�ڴ�ռ�

			���ʣ�ָ��Ҳ�����������ͣ���ô������������ռ�ö����ڴ�ռ䣿

			�ܽ᣺����ָ��������32λ����ϵͳ����4���ֽ�
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 10;

	int* p;
	p = &a; //ָ��ָ������a�ĵ�ַ

	cout << *p << endl; //* ������
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;

	return 0;
}