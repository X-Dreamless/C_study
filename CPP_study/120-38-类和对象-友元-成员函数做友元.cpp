
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

				4.4.1 ȫ�ֺ�������Ԫ

				4.4.2 ������Ԫ

				4.4.3 ��Ա��������Ԫ
*/

#include <iostream>

using namespace std;

class Building;

class goodGay
{
public:

    goodGay();
    void visit(); //ֻ��visit������ΪBuilding�ĺ����ѣ����Է�����Building��˽������
    void visit2();

private:
    Building* building;
};


class Building
{
    //���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
    friend void goodGay::visit();

public:
    Building();

public:
    string m_SittingRoom; //����
private:
    string m_BedRoom;//����
};



Building::Building()
{
    this->m_SittingRoom = "����";
    this->m_BedRoom = "����";
}

goodGay::goodGay()
{
    building = new Building;
}

void goodGay::visit()
{
    cout << "�û������ڷ���" << building->m_SittingRoom << endl;
    cout << "�û������ڷ���" << building->m_BedRoom << endl;
}

void goodGay::visit2()
{
    cout << "�û������ڷ���" << building->m_SittingRoom << endl;
    //cout << "�û������ڷ���" << building->m_BedRoom << endl;
}



void test01()
{
    goodGay gg;
    gg.visit();
}

int main()
{
    test01();

    return 0;
}