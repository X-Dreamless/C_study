
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

		8.4 �ṹ��ָ��

		8.5 �ṹ��Ƕ�׽ṹ��

		8.6 �ṹ������������

		8.7 �ṹ���� constʹ�ó���

			���ã���const����ֹ�����
*/

#include <iostream>

using namespace std;

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//constʹ�ó���
void printStudent(const student* stu) //��const��ֹ�������е������
{
	//stu->age = 100; //����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

}

int main()
{
	student stu = { "����",18,100 };

	printStudent(&stu);

	return 0;
}