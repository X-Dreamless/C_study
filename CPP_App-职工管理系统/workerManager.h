#pragma once

/*
	ְ������ϵͳ ��
*/

#include <iostream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "my_List.h"

using namespace std;


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

	//��ʾְ��
	void Show_Emp();

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

