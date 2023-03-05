
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

		1 �ڴ����ģ��

		2 ����

		3 �������

		4 ��Ͷ���

			4.1 ��װ

				4.1.1 ��װ������

				4.1.2 struct��class����

				4.1.3 ��Ա��������Ϊ˽��

					�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��

					�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*/

#include <iostream>

using namespace std;

class Person
{
public:

    //�������ÿɶ���д
    void setName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }


    //��ȡ���� 
    int getAge()
    {
        return m_Age;
    }
    //��������
    void setAge(int age)
    {
        if (age < 0 || age > 150)
        {
            cout << "���������!" << endl;
            return;
        }
        m_Age = age;
    }

    //��������Ϊֻд
    void setLover(string lover)
    {
        m_Lover = lover;
    }

private:
    string m_Name; //�ɶ���д  ����

    int m_Age; //ֻ��  ����

    string m_Lover; //ֻд  ����
};


int main()
{
    Person p;
    //��������
    p.setName("����");
    cout << "������ " << p.getName() << endl;

    //��������
    p.setAge(50);
    cout << "���䣺 " << p.getAge() << endl;

    //��������
    p.setLover("�Ծ�");
    //cout << "���ˣ� " << p.m_Lover << endl;  //ֻд���ԣ������Զ�ȡ

    /*
        ���Ե�Ļ����ʦ��������
        ���Ե�Ļ��С���㸽��
    */

    return 0;
}