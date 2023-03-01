#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

// ��Ļ���������
#include <iostream>

// ����
#include <assert.h>

// ���ñ�׼�������ռ�
using namespace std;

/*======== ======== ======== ========*/

// ��ϵ��
struct Person
{
	string name;      // ����
	string phone;     // �绰
	string addr;      // סַ
	string sex;       // �Ա�
	unsigned int age; // ����

	Person* next;
	Person* prev;
};


// ͨѶ¼
struct addressBook
{
	Person* per; // ��ϵ��
	int size;    // ͨѶ¼����Ա����
	int initialization;// �Ƿ��Ѿ���ʼ��(1�Ѿ���ʼ����0��û��ʼ��)
};

/*======== ======== ======== ========*/

// ��ʾ�˵�
void showMenu(int arbSize);

// �����ϵ��
void addPerson(addressBook* arb);

// ��ʾ��ϵ��
int showPerson(addressBook* arb);

// ɾ����ϵ��
int delPerson(addressBook* arb);

// ������ϵ��
int findPerson(addressBook* arb);

// �޸���ϵ��
int modifyPerson(addressBook* arb);

// ���ͨѶ¼
void destroyPerson(addressBook* arb);

// �˳�ͨѶ¼
void exitAddressBook(addressBook* arb);

/*======== ======== ======== ========*/

// ˫�������ʼ��
Person* ListInit();

// ˫���������ڵ�
Person* BuyListNode
(
	string name,      // ����
	string phone,     // �绰
	string addr,      // סַ
	string sex,       // �Ա�
	unsigned int age  // ����
);

// ˫��������pos��ǰ����в���
void ListInsert
(
	Person* pos,

	string name,      // ����
	string phone,     // �绰
	string addr,      // סַ
	string sex,       // �Ա�
	unsigned int age  // ����
);

// ˫������ɾ��posλ�õĽڵ�
void ListErase(Person* pos);

// ˫�������ӡ
void ListPrint(Person* phead);

// ˫���������
Person* ListFind(Person* phead, string name);

// ˫����������
void ListDestroy(Person* phead);

/*======== ======== ======== ========*/

// �ж��ļ��Ƿ����
int FileWhetherExist(char* FileSrc);

// �����ļ�
int createFile();

// д�ļ�(���� ��Ҫ���� Person* per)
void saveFile(addressBook* arb);

// ���ļ�
void readFile(addressBook* arb);