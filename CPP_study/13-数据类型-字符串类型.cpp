
/*
	1 C++��ʶ

	2 ��������

		2.6 �ַ�����

			���ã����ڱ�ʾһ���ַ�

			���ַ��

				C����ַ����� char ������[] = "�ַ���ֵ"
				C++����ַ����� string ������ = "�ַ���ֵ"
*/

#include <iostream>

using namespace std;

int main()
{
	// C
	// ע�⣺C�����ַ���Ҫ��˫����������
	char str1[] = "C hello world";
	cout << str1 << endl;

	// C++
	// ע�⣺C++����ַ�������Ҫ����ͷ�ļ� #include<string>
	string str = "CPP hello world";
	cout << str << endl;

	return 0;
}