
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

		1 �ڴ����ģ��

		2 ����

			2.1 ���õĻ���ʹ��

			2.2 ����ע������

			2.3 ��������������

				���ã���������ʱ�������������õļ������β�����ʵ��

				�ŵ㣺���Լ�ָ���޸�ʵ��

				�ܽ᣺ͨ�����ò���������Ч��ͬ����ַ������һ���ġ����õ��﷨�������
*/

#include <iostream>

using namespace std;

//1. ֵ����
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//2. ��ַ����
void mySwap02(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//3. ���ô���
void mySwap03(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    //1. ֵ����
    mySwap01(a, b);
    cout << "a:" << a << " b:" << b << endl;

    //2. ��ַ����
    mySwap02(&a, &b);
    cout << "a:" << a << " b:" << b << endl;

    //3. ���ô���
    mySwap03(a, b);
    cout << "a:" << a << " b:" << b << endl;

    return 0;
}