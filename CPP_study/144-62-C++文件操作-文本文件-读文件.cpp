
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

				5.1.1д�ļ�

				5.1.2���ļ�

					���ļ���д�ļ��������ƣ����Ƕ�ȡ��ʽ����ڱȽ϶�

					���ļ��������£�

						����ͷ�ļ�
							#include <fstream>

						����������
							ifstream ifs;

						���ļ����ж��ļ��Ƿ�򿪳ɹ�
							ifs.open("�ļ�·��",�򿪷�ʽ);

						������
							���ַ�ʽ��ȡ

						�ر��ļ�
							ifs.close();

					�ܽ᣺
						���ļ��������� ifstream ������fstream��
						����is_open���������ж��ļ��Ƿ�򿪳ɹ�
						close �ر��ļ�
*/

#include <iostream>
#include <fstream>// ����ͷ�ļ�
#include <string>
#include "Function.h"

using namespace std;

void test1()
{
	// �ж��ļ��Ƿ���ڣ��ж��ļ�Ȩ��
	if (fileAccess("..\\�����ļ�����\\CPP_study_144-62-C++�ļ�����-�ı��ļ�-���ļ�.txt", 0) == 0) { return; }

	// ����������
	ifstream ifs;

	// ���ļ�
	ifs.open("..\\�����ļ�����\\CPP_study_144-62-C++�ļ�����-�ı��ļ�-���ļ�.txt", ios::in);

	// ���ж��ļ��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;

		return;
	}

	// ������
	
	// ��һ��
	//char buf[1024] = { 0 };
	//while (ifs >> buf)// �����ļ�β���� ��
	//{
	//	cout << buf << endl;
	//}

	// �ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	/*
	//		ifs.getline(buf, sizeof(buf))
	//		ifs.��ȡһ��(����, ���������ֽ�)
	//	*/

	//	cout << buf << endl;
	//}

	// ������
	string buf;
	while (getline(ifs, buf))
	{
		/*
			getline(����������, ����)
			ȫ�ֺ���
			�� <string> ��
		*/

		cout << buf << endl;
	}

	// ������ ���Ƽ���
	//char c;
	//while ( (c = ifs.get()) != EOF )
	//{
	//	/*
	//		ifs.get()
	//		һ�ζ�һ���ַ�

	//		EOF �ļ�ĩβ end of file
	//	*/
	//	cout << c;
	//}


	// �ر��ļ�
	ifs.close();
}


int main()
{
	test1();

	return 0;
}