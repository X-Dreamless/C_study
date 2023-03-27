
#include "workerManager.h";



WorkerManager::WorkerManager():initialization(0), m_EmpNum(0)
{
	setEmpListPhead(en.ListInit());
}

WorkerManager::~WorkerManager()
{
}

// ��ʾ�˵�
void WorkerManager::ShowMenu()
{
	cout << "�� -------- ��ӭʹ��ְ������ϵͳ -      -" << endl;
	cout << "|                               -    -" << endl;
	cout << "|            0.  �˳��������      -"<< endl;
	cout << "|            1.  ����ְ����Ϣ   -     -" << endl;
	cout << "|            2.  ��ʾְ����Ϣ      -" << endl;
	cout << "|            3.  ɾ����ְְ��   -     -" << endl;
	cout << "|            4.  �޸�ְ����Ϣ      -" << endl;
	cout << "|            5.  ����ְ����Ϣ   -     -" << endl;
	cout << "|            6.  ���ձ������      -" << endl;
	cout << "|            7.  ��������ĵ�   -     -" << endl;
	cout << "�� --------  -------- --------  -      -" << endl;
}

// �˳��������
void WorkerManager::exitSystem()
{

}

// ����ְ��
void WorkerManager::Add_Emp()
{
	int tmpId;      //ְ�����
	string tmpName; //ְ������
	int tmpDeptId;  //ְ�����ڲ������Ʊ��

	
	Worker* worker = NULL;

	cout << "����ְ��-ְ�����>";
	cin >> tmpId;

	cout << "����ְ��-ְ������>";
	cin >> tmpName;

	cout << "����ְ��-ְ������(3.�ϰ� 2.���� 1.Ա��)>";
	cin >> tmpDeptId;
	switch (tmpDeptId)
	{
	case 1:
		worker = new Employee(tmpId, tmpName, tmpDeptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	case 2:
		worker = new Manager(tmpId, tmpName, tmpDeptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	case 3:
		worker = new Boss(tmpId, tmpName, tmpDeptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	default:
		cout << "���ʧ��" << endl;
		break;
	}
	
}

//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	cout << "ɾ��ְ��-ְ�����>";
	int tmpId;// ְ�����
	cin >> tmpId;

	en.ListErase(en.ListFind(m_EmpListPhead, tmpId));

	m_EmpNum--;
}

//����ְ��
void WorkerManager::Find_Emp()
{
	cout << "���ҷ�ʽ(1.��ְ����Ų��� 2.����������)>";
	int select = 0;
	cin >> select;

	switch (select)
	{
	case 1:
	{
		cout << "���� ְ�����>";
		int tmpId;
		cin >> tmpId;

		EmpListNode* retNode = en.ListFind(m_EmpListPhead, tmpId);

		if (retNode == NULL)
		{
			cout << "δ�ҵ�" << endl;
			return;
		}

		retNode->getData()->showInfo();
	}
		break;

	case 2:
	{
		cout << "���� ְ������>";
		string tmpName;
		cin >> tmpName;

		EmpListNode* retNode = en.ListFind(m_EmpListPhead, tmpName);

		if (retNode == NULL)
		{
			cout << "δ�ҵ�" << endl;
			return;
		}

		retNode->getData()->showInfo();
	}
		break;

	default:
		cout << "����ʧ��" << endl;
		break;
	}
}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	cout << "�޸� ְ�����>";
	int tmpId;
	cin >> tmpId;

	EmpListNode* retNode = en.ListFind(m_EmpListPhead, tmpId);

	if (retNode == NULL)
	{
		cout << "δ�ҵ�" << endl;
		return;
	}

	Worker* worker = NULL;

	int id;
	cout << "�޸� �� ְ�����>";
	cin >> id;

	string name;
	cout << "�޸� �� ְ������>";
	cin >> name;

	int deptId;
	cout << "�޸� �� ְ����λ>";
	cin >> deptId;

	switch (deptId)
	{
	case 1:
		worker = new Employee(tmpId, name, deptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	case 2:
		worker = new Manager(tmpId, name, deptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	case 3:
		worker = new Boss(tmpId, name, deptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	default:
		cout << "�޸�ʧ��" << endl;
		break;
	}

	retNode->ListErase(retNode);
	m_EmpNum--;
}

//��ʾְ��
void WorkerManager::Show_Emp()
{
	en.ListPrint(m_EmpListPhead);
}

// ���� Ա������ͷ
void WorkerManager::setEmpListPhead(EmpListNode* EmpListPhead)
{
	m_EmpListPhead = EmpListPhead;
}

// ��ȡ Ա������ͷ
EmpListNode* WorkerManager::getEmpListPhead()
{
	return m_EmpListPhead;
}