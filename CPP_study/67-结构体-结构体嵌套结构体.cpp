
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

			���ã� �ṹ���еĳ�Ա��������һ���ṹ��

			���磺ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��

			�ܽ᣺�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ������
*/

#include <iostream>

using namespace std;

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;//����
	int age;	//����
	int score;	//����
};

//��ʦ�ṹ�嶨��
struct teacher
{
	//��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	struct student stu; //�ӽṹ�� ѧ��
};


int main()
{
	struct teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;

	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;

	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;

	return 0;
}