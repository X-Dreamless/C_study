
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

		4.1 ѡ��ṹ

		4.2 ѭ���ṹ

			4.2.1 whileѭ�����

			whileѭ����ϰ������������

			4.2.2 do...whileѭ�����

				���ã� ����ѭ��������ִ��ѭ�����

				�﷨�� do{ ѭ����� } while(ѭ������);

				ע�⣺��while���������� do...while����ִ��һ��ѭ����䣬���ж�ѭ������

				�ܽ᣺��whileѭ���������ڣ�do...while��ִ��һ��ѭ����䣬���ж�ѭ������
*/

#include <iostream>

using namespace std;

int main()
{
	int num = 0;

	do
	{
		cout << num << endl;
		num++;

	} while (num < 10);

	return 0;
}