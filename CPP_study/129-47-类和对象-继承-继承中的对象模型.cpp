
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

					���⣺�Ӹ���̳й����ĳ�Ա����Щ������������У�

					���ù��߲鿴��

						Visual Studio 2017 �ļ�����
							VS 2017�Ŀ�����Ա������ʾ��
							(Ӣ���ǣ�Developer command prompt for VS)

						�򿪹��ߴ��ں󣬶�λ����ǰCPP�ļ����̷�
							D:
							cd D:\ruchuruo\C\C_Study\CPP_study

						���� dir �鿴��ǰĿ¼�µ�����

						Ȼ�����룺 cl /d1 reportSingleClassLayout�鿴������ �����ļ���
						���룺     cl /d1 ����  ����  ��   �Ĳ���
						ʾ����     cl /d1 reportSingleClassLayoutSon 129-47-��Ͷ���-�̳�-�̳��еĶ���ģ��.cpp
						|                                        ��
						|                                        ����Son

						(Ҳ���� ��ͼ->�ն�->������������ʾ��ֱ���������һ�����������)


						��ʾ��
							D:\ruchuruo\C\C_Study\CPP_study>cl /d1 reportSingleClassLayoutSon 129-47-��Ͷ���-�̳�-�̳��еĶ���ģ��.cpp
							���� x86 �� Microsoft (R) C/C++ �Ż������� 19.32.31332 ��
							��Ȩ����(C) Microsoft Corporation����������Ȩ����

							129-47-��Ͷ���-�̳�-�̳��еĶ���ģ��.cpp

							class Son       size(16):
									+---
							 0      | +--- (base class Base)
							 0      | | m_A
							 4      | | m_B
							 8      | | m_C
									| +---
							12      | m_D
									+---
							D:\VisualStudio\IDE\VC\Tools\MSVC\14.32.31326\include\ostream(301): warning C4530: ʹ���� C++ �쳣������򣬵�δ����չ�����塣��ָ�� /EHsc
							D:\VisualStudio\IDE\VC\Tools\MSVC\14.32.31326\include\ostream(294): note: �ڱ��� �� ģ�� ��Ա������std::basic_ostream<char,std::char_traits<char>> &std::basic_ostream<char,std::char_traits<char>>::operator <<(unsigned int)��ʱ
							129-47-��Ͷ���-�̳�-�̳��еĶ���ģ��.cpp(81): note: �鿴�����ڱ���ĺ��� ģ�� ʵ������std::basic_ostream<char,std::char_traits<char>> &std::basic_ostream<char,std::char_traits<char>>::operator <<(unsigned int)��������
							129-47-��Ͷ���-�̳�-�̳��еĶ���ģ��.cpp(81): note: �鿴�����ڱ���� �� ģ�� ʵ������std::basic_ostream<char,std::char_traits<char>>��������
							Microsoft (R) Incremental Linker Version 14.32.31332.0
							Copyright (C) Microsoft Corporation.  All rights reserved.

							/out:129-47-��Ͷ���-�̳�-�̳��еĶ���ģ��.exe
							129-47-��Ͷ���-�̳�-�̳��еĶ���ģ��.obj


					���ۣ� ������˽�г�ԱҲ�Ǳ�����̳���ȥ�ˣ�ֻ���ɱ����������غ���ʲ���
*/

#include <iostream>

using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ
};

//�����̳�
class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;// 16
}

int main()
{
	test01();

	return 0;
}

/*
	���Ե�Ļ�����װ����п������ˣ����������뿴���顣����ȷʵ�õ����п��ˡ�
*/