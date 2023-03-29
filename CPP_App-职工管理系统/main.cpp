
#include "workerManager.h"

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"



void test1()
{
	WorkerManager wm;

	int choice = 0;

	do
	{
		wm.ShowMenu();
		cout << ">";
		cin >> choice;

		switch (choice)
		{
		case 1: //���ְ��
			wm.Add_Emp();
			break;

		case 2: //��ʾְ��
			wm.Show_Emp();
			break;

		case 3: //ɾ��ְ��
			wm.Del_Emp();
			break;

		case 4: //�޸�ְ��
			wm.Mod_Emp();
			break;

		case 5: //����ְ��
			wm.Find_Emp();
			break;

		case 6: //����ְ��
			wm.Sort_Emp();
			break;

		case 7: //����ļ�
			break;

		case 0: //�˳�ϵͳ
			wm.exitSystem();
			break;

		default:
			cout << "�������" << endl;
			break;
		}

	} while (choice);
}

void test2()
{
	Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
	worker->showInfo();
	delete worker;
}

void test3()
{
	Worker* worker = NULL;

	EmpListNode en;
	EmpListNode* phead = en.ListInit();

	worker = new Employee(1, "����", 1);
	en.ListInsert(phead->getNextNode(), worker);

	worker = new Manager(2, "����", 2);
	en.ListInsert(phead->getNextNode(), worker);

	worker = new Boss(3, "����", 3);
	en.ListInsert(phead->getNextNode(), worker);

	en.ListPrint(phead);
	
	delete worker;
}

int main()
{
	//test1();

	//test2();

	//test3();

	WorkerManager wm;

	// ���
	wm.Add_Emp();
	wm.Add_Emp();
	//wm.Add_Emp();
	//wm.Add_Emp();
	//wm.Add_Emp();

	wm.Show_Emp();

	// ɾ��
	//wm.Del_Emp();
	//wm.Show_Emp();
	//wm.Del_Emp();
	//wm.Show_Emp();

	// ����
	//wm.Find_Emp();
	//wm.Find_Emp();
	//wm.Find_Emp();

	// �޸�
	//wm.Mod_Emp();
	//wm.Show_Emp();
	//wm.Mod_Emp();
	//wm.Show_Emp();
	//wm.Mod_Emp();
	//wm.Show_Emp();
	//wm.Mod_Emp();
	//wm.Show_Emp();
	//wm.Mod_Emp();
	//wm.Show_Emp();

	// ����
	//wm.Sort_Emp();
	//wm.Show_Emp();
	//wm.Sort_Emp();
	//wm.Show_Emp();

	// ɾ������
	wm.Clean_File();
	//wm.Add_Emp();
	//wm.Show_Emp();
	wm.exitSystem();

	return 0;
}