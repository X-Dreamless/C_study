
/*
	1 C++��ʶ

	2 ��������

		2.3 ʵ�ͣ������ͣ�

			���ã����� ��ʾС��

			�����ͱ�����Ϊ���֣�
				������float
				˫����double

				���ߵ��������ڱ�ʾ����Ч���ַ�Χ��ͬ��

			|   ��������   |   ռ�ÿռ�   |   ��Ч���ַ�Χ   |
			| ------------ | ------------ | ---------------- |
			| float        | 4�ֽ�        | 7λ��Ч����      |
			| double       | 8�ֽ�        | 15��16λ��Ч���� |
*/

#include <iostream>

using namespace std;

int main()
{
	float f1 = 3.14f;
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;

	cout << "-------- -------- -------- --------" << endl;

	// ���������ʾ6λ��Ч����
	float f = 0.123456789f;
	double d = 0.123456789;

	cout << f << endl;
	cout << d << endl;

	cout << "-------- -------- -------- --------" << endl;

	//��ѧ������
	float f2 = 3e2; // 3 * 10 ^ 2 
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;

	return 0;
}