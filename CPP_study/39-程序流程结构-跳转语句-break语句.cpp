
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

		4.1 ѡ��ṹ

		4.2 ѭ���ṹ

		4.3 ��ת���

			4.3.1 break���

				����: �������� ѡ��ṹ ���� ѭ���ṹ

				breakʹ�õ�ʱ����

					������switch��������У���������ֹcase������switch
					������ѭ������У�������������ǰ��ѭ�����
					������Ƕ��ѭ���У�����������ڲ�ѭ�����
*/

#include <iostream>

using namespace std;

void test1()
{
	//1����switch �����ʹ��break
	cout << "��ѡ������ս�������Ѷȣ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;

	int num = 0;

	cin >> num;

	switch (num)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	}
}

void test2()
{
	//2����ѭ���������break
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break; //����ѭ�����
		}
		cout << i << endl;
	}
}

void test3()
{
	//��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "*" << " ";
		}
		cout << endl;
	}
}

int main()
{
	//1����switch �����ʹ��break
	test1();

	cout << "-------- -------- -------- --------" << endl;

	//2����ѭ���������break
	test2();

	cout << "-------- -------- -------- --------" << endl;

	//��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
	test3();

	return 0;
}