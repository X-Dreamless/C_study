
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

				4.2.1 ���캯������������

				4.2.2 ���캯���ķ��༰����

				4.2.3 �������캯������ʱ��

				4.2.4 ���캯�����ù���

				4.2.5 �����ǳ����

				4.2.6 ��ʼ���б�

				4.2.7 �������Ϊ���Ա

					C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ �����Ա

					���磺
						class A {}
						class B
						{
							A a��
						}

					B�����ж���A��Ϊ��Ա��AΪ�����Ա��
					��ô������B����ʱ��A��B�Ĺ����������˳����˭��˭��

                    ���и첲�ȣ��������
                    ���Ե�Ļ���������壬�������ĸ�壻ĸ���ͷţ�������ָܻ������ͷ�
                    ���Ե�Ļ��ԭ������˹����ʱ����õ��ֻ������Ա������ֻ�������������ʱ��Ҳ�����õ��ֻ������Ժ������ֻ�
                    ���Ե�Ļ������ʱ������Ƚ�ջ,����ʱ���ǳ�ջ˳����
*/

#include <iostream>

using namespace std;

class Phone
{
public:
    Phone(string name)
    {
        m_PhoneName = name;
        cout << "Phone����" << endl;
    }

    ~Phone()
    {
        cout << "Phone����" << endl;
    }

    string m_PhoneName;

};


class Person
{
public:

    //��ʼ���б���Ը��߱�����������һ�����캯��
    // m_Phone(pName) ���� Phone m_Phone = pName ��ʽת����
    Person(string name, string pName) :m_Name(name), m_Phone(pName)
    {
        cout << "Person����" << endl;
    }

    ~Person()
    {
        cout << "Person����" << endl;
    }

    void playGame()
    {
        cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�! " << endl;
    }

    string m_Name;
    Phone m_Phone;

};


void test01()
{
    //�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
    //�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
    //����˳���빹���෴
    Person p("����", "ƻ��X");
    p.playGame();

}


int main()
{
    test01();

    return 0;
}