
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

		4.1 ѡ��ṹ

			4.1.1 if���

			��ϰ������ ��ֻС�������

			4.1.2 ��Ŀ�����

			4.1.3 switch���

				���ã�ִ�ж�������֧���

				�﷨��

					switch(���ʽ)
					{

						case ���1��ִ�����;break;

						case ���2��ִ�����;break;

						...

						default:ִ�����;break;

					}

				ע��1��switch����б��ʽ����ֻ�������ͻ����ַ���
				ע��2��case�����û��break����ô�����һֱ����ִ��

				�ܽ᣺��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����
*/

#include <iostream>

using namespace std;

int main()
{
	//�����Ӱ���� 
	//10 ~ 9   ����   
	// 8 ~ 7   �ǳ���
	// 6 ~ 5   һ��
	// 5������ ��Ƭ

	int score = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
	case 6:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}

	return 0;
}