
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

			4.3.3 goto���

				���ã�������������ת���

				�﷨�� goto ���;

				���ͣ������ǵ����ƴ��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��

				ע�⣺�ڳ����в�����ʹ��goto��䣬������ɳ������̻���

				�������һ���ô�д����СдҲû����
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "1" << endl;

	goto FLAG;

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

FLAG:

	cout << "5" << endl;

	return 0;
}