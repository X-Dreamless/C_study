
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

			��ϰ������ˮ�ɻ���

				����������ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������

				���磺1^3 + 5^3+ 3^3 = 153

				������do...while��䣬�������3λ���е�ˮ�ɻ���

				˼·��
					���е���λ�� 100 �� 999

					��ȡÿ��λ

					��λ^3 + ʮλ^3 + ��λ^3 = ����


				�⺯�� pow

					<cmath> (math.h)
					double pow (double base, double exponent);

					Raise to power
					Returns base raised to the power exponent:

					base ^ exponent

					����Ȩ��
					������ߵ���ָ���Ļ�����

					���� ^ ָ��


					����
						base
						����
						Base value.
						��ֵ��

						exponent
						ָ��
						Exponent value.
						ָ��ֵ��

					����ֵ
						The result of raising base to the power exponent.

						If the base is finite negative and the exponent is finite but not an integer value, it causes a domain error.
						If both base and exponent are zero, it may also cause a domain error on certain implementations.
						If base is zero and exponent is negative, it may cause a domain error or a pole error (or none, depending on the library implementation).
						The function may also cause a range error if the result is too great or too small to be represented by a value of the return type.
						
						���Ȩ���Ľ��.

						��� �����޸������� �����޵ĵ���������ֵ����ᵼ�������
						������߾�Ϊ�㣬�򻹿��ܵ���ĳЩʵ�ֳ��������
						���Ϊ����Ϊ����������ܻᵼ�������򼫵���󣨻��ޣ�����ȡ���ڿ�ʵ�֣���
						������̫���̫С���޷��÷������͵�ֵ��ʾ����ú���Ҳ���ܵ��·�Χ����baseexponentbaseexponentbaseexponentbaseexponent

*/

#include <iostream>

using namespace std;

void test1()
{
	int num = 100;

	do
	{
		int a = 0; // ��λ
		int b = 0; // ʮλ
		int c = 0; // ��λ

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}

		num++;

	} while (num < 1000);
}

// ���õ�
void test2()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ��������
		// 1.����i��λ�� - n
		int λ�� = 1;
		int tmp = i;
		while (tmp / 10)
		{
			λ��++;
			tmp = tmp / 10;
		}

		// 2.����i��ÿһλ��n�η�֮��
		tmp = i;
		int �� = 0;
		while (tmp)
		{
			�� += pow(tmp % 10, λ��);
			tmp = tmp / 10;// ȥ��ĳһλ
		}

		// 3.�ж�
		if (�� == i)
		{
			printf("%d\n", i);
		}
	}
}

int main()
{

	test1();

	cout << "-------- -------- -------- --------" << endl;

	// ���õ�
	test2();

	return 0;
}