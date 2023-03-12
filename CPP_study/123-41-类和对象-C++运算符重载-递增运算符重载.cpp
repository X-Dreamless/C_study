
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

				4.5.1 �Ӻ����������

				4.5.2 �������������

				4.5.3 �������������

					���ã� ͨ�����ص����������ʵ���Լ�����������

                    �ܽ᣺ ǰ�õ����������ã����õ�������ֵ
*/

#include <iostream>

using namespace std;

class MyInteger
{

    friend ostream& operator<<(ostream& out, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }

    //ǰ��++
    MyInteger& operator++()
    {
        //��++
        m_Num++;

        //�ٷ���
        return *this;

        /*
            ������������ΪҪ��ͬһ�������в���
            int a = 0;
            cout << ++(++a) << endl;// 2
            cout << a << endl;      // 2
        */
    }

    //����++��(�޷����ؽ��������������ֵĺ���)(��3�׶�-C++���ı��  3.2 ����ռλ����)
    MyInteger operator++(int)
    {
        //�ȼ�¼��ʱ���
        MyInteger temp = *this; //��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��

        // ����
        m_Num++;

        // ���ؼ�¼�Ľ��
        return temp;

        /*
            ����ֵ����Ϊ���ص��Ǿֲ��Ķ���
        */
    }

private:
    int m_Num;
};

// Ϊ�� cout �����ֻ��ȫ�ֺ���
ostream& operator<<(ostream& out, MyInteger myint)
{
    out << myint.m_Num;
    return out;
}


//ǰ��++ ��++ �ٷ���
void test01()
{
    MyInteger myInt;
    cout << ++myInt << endl;
    cout << myInt << endl;
}

//����++ �ȷ��� ��++
void test02()
{
    MyInteger myInt;
    cout << myInt++ << endl;
    cout << myInt << endl;
}

int main()
{
    test01();

    test02();

    return 0;
}

/*
    ����ռλ���� https://www.cnblogs.com/songhe364826110/p/11521451.html

        ��C++�п���Ϊ�����ṩռλ����

            ռλ����ֻ�в���������������û�в���������
            һ������£��ں������ڲ��޷�ʹ��ռλ����


        C++�к���ռλ���������壺ռλ������Ĭ�ϲ����������ʹ�ã�����C���Գ����п��ܳ��ֵĲ��淶д����

            ʾ��1��C���Բ��淶д��

                #include <stdio.h>

                ��C�����У��ú������Խ�������������������͵Ĳ���,
                void func(void)�ű�ʾ�������κβ���.

                void func()
                {

                }

                int main()
                {
                    func(1);
                    func(2, 3);

                    return 0;
                }


            ʾ��2�����ʹ��ռλ������Ĭ�ϲ���������С�ĸĶ�����ʾ��1������ֲ��C++��

                #include <stdio.h>

                void func(int x, int = 0);

                void func(int x, int)
                {

                }

                int main()
                {
                    func(1);
                    func(2, 3);

                    return 0;
                }
*/

















































/*
    ���Ե�Ļ��c++��c����++����ͷ��
*/