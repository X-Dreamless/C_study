
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
*/

#include <iostream>

using namespace std;

class Building;// ���� Building ��

class goodGay
{
public:

    goodGay();
    void visit();

private:
    Building* building;
};


class Building
{
    //���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽������
    friend class goodGay;

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
    // ���Ե�Ļ��
    //     �������new������ֻ��Building building ������  goodGay gg ;  ֮��building�����ͷ�
    //     ֮���ٵ���building������Ծͻ���ʵ���ָ��Ȼ���������Ҫ��new���ٶ�������
    building = new Building;
}

void goodGay::visit()
{
    cout << "�û������ڷ���" << building->m_SittingRoom << endl;
    cout << "�û������ڷ���" << building->m_BedRoom << endl;
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