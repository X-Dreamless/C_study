
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

		1 �ڴ����ģ��

		2 ����

		3 �������

		4 ��Ͷ���

		5 �ļ�����

			5.1�ı��ļ�

			5.2 �������ļ�

				�Զ����Ƶķ�ʽ���ļ����ж�д����

				�򿪷�ʽҪָ��Ϊ ios::binary

				5.2.1 д�ļ�

					�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write

					����ԭ�� ��ostream& write(const char * buffer,int len);

					�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

					�ܽ᣺
						�ļ���������� ����ͨ��write�������Զ����Ʒ�ʽд����

					д�ַ���ʱ�� string ���Ϳ��ܻ�����⣬������ �ַ����� char ch[64]��
					���Ե�Ļ��C++string������һ���࣬���Ի����д��ȥ
*/

#include <iostream>
#include <fstream>// ����ͷ�ļ�
#include "Function.h"
using namespace std;

class Person
{
public:
	char m_FileName[64];
	char m_Name[64];
	int m_Age;
};

void test1()
{
	// �ж��ļ��Ƿ���ڣ��ж��ļ�Ȩ��
	if (fileAccess("..\\�����ļ�����\\CPP_study_145-63-C++�ļ�����-�������ļ�-д�ļ�.txt", 0) == 0) { return; }

	// ����������
	ofstream ofs;
	//ofstream ofs("..\\�����ļ�����\\CPP_study_145-63-C++�ļ�����-�������ļ�-д�ļ�.txt", ios::out | ios::binary);

	// ���ļ�
	ofs.open("..\\�����ļ�����\\CPP_study_145-63-C++�ļ�����-�������ļ�-д�ļ�.txt", ios::out | ios::binary);

	// д�ļ�
	Person p = { "CPP_study_145-63-C++�ļ�����-�������ļ�-д�ļ�", "����", 18 };

	// ǿ������ת������Ϊ������Ҫ���� const char* �������
	ofs.write((const char*)&p, sizeof(Person));

	// �ر��ļ�
	ofs.close();
}

int main()
{
	test1();

	return 0;
}