
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

			���ã����ṹ����Ϊ���������д���

			���ݷ�ʽ�����֣�

				ֵ����
				��ַ����

			�ܽ᣺��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����
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

//ֵ����
void printStudent(student stu)
{
	stu.age = 28;
	cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
}

//��ַ����
void printStudent2(student* stu)
{
	stu->age = 28;
	cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;
}

int main()
{
	student stu = { "����",18,100 };

	//ֵ����
	printStudent(stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;

	cout << endl;

	//��ַ����
	printStudent2(&stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;

	return 0;
}