#pragma once

/*
	ְ������ϵͳ ��
*/

#include <iostream>
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

	~WorkerManager();

private:

	// Ϊ0��δ��ʼ��
	int initialization;
};

