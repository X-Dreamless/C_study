
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

		4.1 ѡ��ṹ

			4.1.1 if���

			��ϰ������ ��ֻС�������

				����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�
*/

#include <iostream>

using namespace std;

int main()
{
	int pig_a = 0;
	int pig_b = 0;
	int pig_c = 0;

	cout << "��a������>";
	cin >> pig_a;

	cout << "��b������>";
	cin >> pig_b;

	cout << "��c������>";
	cin >> pig_c;

	if (pig_a > pig_b)
	{
		if (pig_a > pig_c)
		{
			cout << "a����" << endl;
		}
		else
		{
			cout << "c����" << endl;
		}
	}
	else
	{
		if (pig_b > pig_c)
		{
			cout << "b����" << endl;
		}
		else
		{
			cout << "c����" << endl;
		}
	}

	return 0;
}