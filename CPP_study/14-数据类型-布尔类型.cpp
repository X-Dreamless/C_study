
/*
	1 C++��ʶ

	2 ��������
		
		2.7 �������� bool

			���ã������������ʹ������ٵ�ֵ

			bool����ֻ������ֵ��

			true --- �棨������1��(��0��Ϊ��)
			false --- �٣�������0��
			bool����ռ 1���ֽ� ��С
*/

#include <iostream>

using namespace std;

int main()
{
	bool flag = true;
	cout << flag << endl; // 1

	flag = false;
	cout << flag << endl; // 0

	cout << "size of bool = " << sizeof(bool) << endl; //1

	return 0;
}