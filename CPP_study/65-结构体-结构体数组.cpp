
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

	5 ����

	6 ����

	7 ָ��

	8 �ṹ��

		8.1 �ṹ���������

		8.2 �ṹ�嶨���ʹ��

		8.3 �ṹ������

			���ã����Զ���Ľṹ����뵽�����з���ά��

			�﷨�� struct �ṹ���� ������[Ԫ�ظ���] = { {} , {} , ... {} }
*/

#include <iostream>

using namespace std;

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;//����
	int age;	//����
	int score;	//����
};

int main()
{
	//�ṹ������
	struct student arr[3] =
	{
		{"����",18,80 },
		{"����",19,60 },
		{"����",20,70 }
	};

	arr[2].name = "����";

	for (int i = 0; i < 3; i++)
	{
		cout << " ������" << arr[i].name
			 << " ���䣺" << arr[i].age
			 << " ������" << arr[i].score << endl;
	}

	return 0;
}