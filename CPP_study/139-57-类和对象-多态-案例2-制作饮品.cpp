
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

		1 �ڴ����ģ��

		2 ����

		3 �������

		4 ��Ͷ���

			4.1 ��װ

			4.2 ����ĳ�ʼ��������

			4.3 C++����ģ�ͺ�thisָ��

			4.4 ��Ԫ

			4.5 ���������

			4.6 �̳�

			4.7 ��̬(������̬)

				4.7.1 ��̬�Ļ�������

				��̬��ԭ������

				4.7.2 ��̬����һ-��������

				4.7.3 ���麯���ͳ�����

				4.7.4 ��̬������-������Ʒ

					����������

						������Ʒ�Ĵ�������Ϊ����ˮ - ���� - ���뱭�� - ���븨��

						���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ

						�忧��
							1. ��ˮ
							2. ���ݿ���
							3. ���뱭��
							4. ���Ǻ�ţ��

						���Ҷ
							1. ��ˮ
							2. ���ݲ�Ҷ
							3. ���뱭��
							4. ������
*/

#include <iostream>

using namespace std;

//����������Ʒ
class AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//�涨����
	void MakeDrink()
	{
		Boil();         //��ˮ
		Brew();         //����
		PourInCup();    //���뱭��
		PutSomething(); //���븨��
	}
};

//��������
class Coffee : public AbstractDrinking
{
public:

	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	virtual void PutSomething()
	{
		cout << "���Ǻ�ţ��" << endl;
	}
};

//������ˮ
class Tea : public AbstractDrinking
{
public:

	virtual void Boil()
	{
		cout << "�����ɽ!" << endl;
	}

	virtual void Brew()
	{
		cout << "���ݲ�Ҷ!" << endl;
	}

	virtual void PourInCup()
	{
		cout << "����ˮ���뱭��!" << endl;
	}

	virtual void PutSomething()
	{
		cout << "�������!" << endl;
	}
};

//ҵ����
void DoWork(AbstractDrinking* drink)
{
	drink->MakeDrink();

	delete drink;
}



void test01()
{
	DoWork(new Coffee);
	cout << "--------------" << endl;
	DoWork(new Tea);
}

int main()
{
	test01();

	return 0;
}