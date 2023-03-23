
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

				5.2.2 ���ļ�

					�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read

					����ԭ�ͣ�istream& read(char *buffer,int len);

					�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

					�ļ����������� ����ͨ��read�������Զ����Ʒ�ʽ������
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

// д�ļ�
void writeFile()
{
	// �ж��ļ��Ƿ���ڣ��ж��ļ�Ȩ��
	if (fileAccess("..\\�����ļ�����\\CPP_study_146-64-C++�ļ�����-�������ļ�-���ļ�.txt", 0) == 0) { return; }

	// ����������
	ofstream ofs;
	//ofstream ofs("..\\�����ļ�����\\CPP_study_145-63-C++�ļ�����-�������ļ�-д�ļ�.txt", ios::out | ios::binary);

	// ���ļ�
	ofs.open("..\\�����ļ�����\\CPP_study_146-64-C++�ļ�����-�������ļ�-���ļ�.txt", ios::out | ios::binary);

	// д�ļ�
	Person p = { "CPP_study_146-64-C++�ļ�����-�������ļ�-���ļ�", "����", 18 };

	// ǿ������ת������Ϊ������Ҫ���� const char* �������
	ofs.write((const char*)&p, sizeof(Person));

	// �ر��ļ�
	ofs.close();
}

// ���ļ�
void readFile()
{
	// �ж��ļ��Ƿ���ڣ��ж��ļ�Ȩ��
	if (fileAccess("..\\�����ļ�����\\CPP_study_146-64-C++�ļ�����-�������ļ�-���ļ�.txt", 0) == 0) { return; }

	// ����������
	ifstream ifs;

	// ���ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("..\\�����ļ�����\\CPP_study_146-64-C++�ļ�����-�������ļ�-���ļ�.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	// ���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << p.m_FileName << endl;
	cout << p.m_Name << endl;
	cout << p.m_Age << endl;

	// �ر��ļ�
	ifs.close();
}

int main()
{
	// д�ļ�
	writeFile();

	// ���ļ�
	readFile();

	return 0;
}