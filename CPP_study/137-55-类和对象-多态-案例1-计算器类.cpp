
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

			4.7 ��̬(������̬)

				4.7.1 ��̬�Ļ�������

				��̬��ԭ������

				4.7.2 ��̬����һ-��������

					����������

						�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������

					��̬���ŵ㣺

						������֯�ṹ����
						�ɶ���ǿ
						����ǰ�ںͺ��ڵ���չ�Լ�ά��

					�ܽ᣺C++�����ᳫ���ö�̬��Ƴ���ܹ�����Ϊ��̬�ŵ�ܶ�

                    ��ʵ�ʿ����� �ᳫ ����ԭ�򣬶���չ���п��ţ����޸Ľ��йر�
*/

#include <iostream>

using namespace std;

//��ͨʵ��
class Calculator
{
public:
    int getResult(string oper)
    {
        if (oper == "+") {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-") {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*") {
            return m_Num1 * m_Num2;
        }
        //���Ҫ�ṩ�µ����㣬��Ҫ�޸�Դ��
    }
public:
    int m_Num1;
    int m_Num2;
};

void test01()
{
    //��ͨʵ�ֲ���
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;

    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;

    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}



//��̬ʵ��
//����������� (Abstract - �����)
//��̬�ŵ㣺������֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չ�Լ�ά��
class AbstractCalculator
{
public:

    // �麯��
    virtual int getResult()
    {
        return 0;
    }

    int m_Num1;
    int m_Num2;
};

//�ӷ�������
class AddCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

//����������
class SubCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

//�˷�������
class MulCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
};


void test02()
{
    // ��̬ʹ������������ָ�������ָ���������
    // ���½��� ��������ָ���������
    // ������   ����ָ��ָ���������

    //�����ӷ�������
    AbstractCalculator* abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;  //�����˼ǵ�����

    //��������������
    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

    //�����˷�������
    abc = new MulCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;
}

int main()
{
    test01();

    test02();

    return 0;
}

/*
    ���Ե�Ļ��֪��Ϊʲô�������޸�����Ϊԭ���Ͳ�֪����ô�������������ģ��㻹�Ҹ�Դ��
*/