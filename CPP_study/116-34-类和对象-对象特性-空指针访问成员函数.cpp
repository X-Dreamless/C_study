
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

				4.3.1 ��Ա�����ͳ�Ա�����ֿ��洢

				4.3.2 thisָ�����

				4.3.3 ��ָ����ʳ�Ա����

					C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��

					����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
*/

#include <iostream>

using namespace std;

//��ָ����ʳ�Ա����
class Person
{
public:

    void ShowClassName()
	{
        cout << "����Person��!" << endl;
    }

    void ShowPerson()
	{
        if (this == NULL)
		{
            return;
        }

		// ��Ա������Ĭ���� this->mAge
        cout << mAge << endl;
    }

public:
    int mAge;
};

void test01()
{
    Person* p = NULL;
    p->ShowClassName(); //��ָ�룬���Ե��ó�Ա����
    p->ShowPerson();    //���������Ա�������õ���thisָ�룬�Ͳ�������

	// ���Ե�Ļ������Ů���Ѷ�û�У���ô����Ů���ѵ�����
}

int main()
{
    test01();

    return 0;
}