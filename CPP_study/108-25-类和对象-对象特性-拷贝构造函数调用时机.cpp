
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

					C++�п������캯������ʱ��ͨ�����������

						ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
						ֵ���ݵķ�ʽ������������ֵ
						��ֵ��ʽ���ؾֲ�����
*/

#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "�޲ι��캯��!" << endl;
        mAge = 0;
    }
    Person(int age)
    {
        cout << "�вι��캯��!" << endl;
        mAge = age;
    }
    Person(const Person& p)
    {
        cout << "�������캯��!" << endl;
        mAge = p.mAge;
    }
    //�����������ͷ��ڴ�֮ǰ����
    ~Person()
    {
        cout << "��������!" << endl;
    }
public:
    int mAge;
};

//1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
    Person man(100); //p�����Ѿ��������
    Person newman(man); //���ÿ������캯��
    Person newman2 = man; //��������

    //Person newman3;
    //newman3 = man; //���ǵ��ÿ������캯������ֵ����
}

//2. ֵ���ݵķ�ʽ������������ֵ
//�൱��Person p1 = p;
void doWork(Person p1) {}// ʵ�δ����β�ʱ���ÿ������캯��
void test02()
{
    Person p; //�޲ι��캯��
    doWork(p);
}

//3. ��ֵ��ʽ���ؾֲ�����
Person doWork2()
{
    Person p1;
    cout << (int*)&p1 << endl;
    return p1;
}

void test03()
{
    Person p = doWork2();
    cout << (int*)&p << endl;
}


int main()
{
    test01();
    test02();
    test03();

    return 0;
}