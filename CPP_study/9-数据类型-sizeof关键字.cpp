
/*
	1 C++��ʶ

	2 ��������

		2.2 sizeof�ؼ���

			���ã�����sizeof�ؼ��ֿ��� ͳ������������ռ�ڴ��С

			�﷨�� sizeof( �������� / ����)

			���ͽ��ۣ�short < int <= long <= long long
*/

#include <iostream>

using namespace std;

int main()
{

	//ʾ����

	cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl;

	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;

	cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;

	cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;

	return 0;
}