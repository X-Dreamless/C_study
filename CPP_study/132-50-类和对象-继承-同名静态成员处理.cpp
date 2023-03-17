
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

				4.6.1 �̳еĻ����﷨

				4.6.2 �̳з�ʽ

				4.6.3 �̳��еĶ���ģ��

				4.6.4 �̳��й��������˳��

				4.6.5 �̳�ͬ����Ա����ʽ

				4.6.6 �̳�ͬ����̬��Ա����ʽ

					���⣺�̳���ͬ���ľ�̬��Ա�������������ν��з��ʣ�

					��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��

						��������ͬ����Ա ֱ�ӷ��ʼ���
						���ʸ���ͬ����Ա ��Ҫ��������

                    �ܽ᣺ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����ֻ���������ַ��ʵķ�ʽ��ͨ������ �� ͨ��������
*/

#include <iostream>

using namespace std;

class Base
{
public:
    static void func()
    {
        cout << "Base - static void func()" << endl;
    }
    static void func(int a)
    {
        cout << "Base - static void func(int a)" << endl;
    }

    static int m_A;
};

int Base::m_A = 100;

class Son : public Base
{
public:
    static void func()
    {
        cout << "Son - static void func()" << endl;
    }
    static int m_A;
};

int Son::m_A = 200;

//ͬ����Ա����
void test01()
{
    //ͨ���������
    cout << "ͨ��������ʣ� " << endl;
    Son s;
    cout << "Son  �� m_A = " << s.m_A << endl;
    cout << "Base �� m_A = " << s.Base::m_A << endl;

    //ͨ����������
    cout << "ͨ���������ʣ� " << endl;
    cout << "Son  �� m_A = " << Son::m_A << endl;
    cout << "Base �� m_A = " << Son::Base::m_A << endl;

    // ��һ�� :: ����ͨ��������ʽ���ʣ��ڶ��� :: ������ʸ�����������
}

//ͬ����Ա����
void test02()
{
    //ͨ���������
    cout << "ͨ��������ʣ� " << endl;
    Son s;
    s.func();
    s.Base::func();

    cout << "ͨ���������ʣ� " << endl;
    Son::func();
    Son::Base::func();

    //����ͬ������������ص�����������ͬ����Ա��������Ҫ�������������
    Son::Base::func(100);
}

int main()
{
    //ͬ����Ա����
    test01();

    //ͬ����Ա����
    test02();

    return 0;
}