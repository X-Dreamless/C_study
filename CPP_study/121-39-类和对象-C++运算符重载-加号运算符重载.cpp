
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

				��������ظ�������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������

				4.5.1 �Ӻ����������

					���ã�ʵ�������Զ�������������ӵ�����

                    ���磺
                        p3 = p1 + p2
                        p3��m_A = p1��m_A + p2��m_A

                        ͨ���Լ�д�ĳ�Ա������ʵ����������������Ժ󣬷����µĶ���

                            Person PersonAddPerson(Person &p)
                            {
                                Person temp;
                                temp.m_A = this->m_A + p.m_A;
                                temp.m_B = this->m_B + p.m_B;
                                return temp;
                            }

                        �������ֿ��Խ������ģ����Ա������ṩ�� operator��operator �� ����� �滻������

                            Person operator+(const Person& p)
                            {
                                Person temp;
                                temp.m_A = this->m_A + p.m_A;
                                temp.m_B = this->m_B + p.m_B;
                                return temp;
                            }

                        ��Ա������������ر��ʵ���
                            Person p3 = p1.operaor+(p2)
                            �򻯳�
                            Person p3 = p1 + p2;

                        ȫ�ֺ�����������ر��ʵ���
                            Person p3 = operaor+(p1, p2)
                            �򻯳�
                            Person p3 = p1 + p2;

					�ܽ�1���������õ��������͵ı��ʽ�ĵ�������ǲ����ܸı��
					�ܽ�2����Ҫ�������������
*/

#include <iostream>

using namespace std;

class Person
{
public:
    Person() {};

    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }

    //��Ա����ʵ�� + �����������
    Person operator+(const Person& p)
    {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }


public:
    int m_A;
    int m_B;
};

//ȫ�ֺ���ʵ�� + �����������
//Person operator+(const Person& p1, const Person& p2) {
//	Person temp(0, 0);
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}

//��������� ���Է����������� 
Person operator+(const Person& p2, int val)
{
    Person temp;
    temp.m_A = p2.m_A + val;
    temp.m_B = p2.m_B + val;
    return temp;
}

void test()
{
    Person p1(10, 10);
    Person p2(20, 20);

    //��Ա������ʽ
    Person p3 = p2 + p1;  //�൱�� p2.operaor+(p1)
    cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;


    Person p4 = p3 + 10; //�൱�� operator+(p3,10)
    cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;
}

int main()
{
    test();

    return 0;
}

















































/*
    ��ͼ����д����ʱ
        ���Ե�Ļ���Ҿͷ�������д���룬����ô�죬����׼������
        ���Ե�Ļ��������ܲ�֪��˭�Ƕž۱�
*/