
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

		4.1 ѡ��ṹ

		4.2 ѭ���ṹ

		4.3 ��ת���

			4.3.1 break���

			4.3.2 continue���

				���ã��� ѭ����� �У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��

				ע�⣺continue��û��ʹ����ѭ����ֹ����break������ѭ��
*/

#include <iostream>

using namespace std;

int main()
{

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

	return 0;
}