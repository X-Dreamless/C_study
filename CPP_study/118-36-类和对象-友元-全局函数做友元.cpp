
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

				��������ļ��п���(Public)�����������(Private)

				�����������Ŀ��˶����Խ�ȥ���������������˽�еģ�Ҳ����˵ֻ�����ܽ�ȥ

				�����أ���Ҳ����������ĺù��ۺû��ѽ�ȥ��

				�ڳ������Щ˽������ Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���

				��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա

				��Ԫ�Ĺؼ���Ϊ friend

				��Ԫ������ʵ��

					ȫ�ֺ�������Ԫ
					������Ԫ
					��Ա��������Ԫ

				4.4.1 ȫ�ֺ�������Ԫ
*/

#include <iostream>

using namespace std;

class Building
{
	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
	friend void goodGay(Building* building);

public:

	Building()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}


public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����
};


void goodGay(Building* building)
{
	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
}


void test01()
{
	Building b;
	goodGay(&b);
}

int main()
{
	test01();

	return 0;
}