#pragma once

/*
	ְ������ϵͳ ��
*/

#include <iostream>
#include <fstream>
#include <io.h>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "my_List.h"

using namespace std;

#define DATAFILE "workerManagerData.txt"

class WorkerManager
{
public:
	WorkerManager();

	// ��ʾ�˵�
	void ShowMenu();

	// �˳��������
	void exitSystem();

	// ����ְ��
	void Add_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ��
	void Find_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��ʾְ��
	void Show_Emp();

	//���ļ�
	void Read_Emp();

	//д�ļ�
	void Write_Emp();

	// ���� Ա������ͷ
	void setEmpListPhead(EmpListNode* EmpListPhead);

	// ��ȡ Ա������ͷ
	EmpListNode* getEmpListPhead();

	~WorkerManager();

private:

	// Ϊ0��δ��ʼ��
	int initialization;

	// ��¼��������
	int m_EmpNum;

	// ����
	EmpListNode en;

	// Ա������ͷ
	EmpListNode* m_EmpListPhead;
};

