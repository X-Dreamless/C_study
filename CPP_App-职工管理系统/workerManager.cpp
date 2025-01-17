
#include "workerManager.h";

static int createFile()
{
	if (_access(DATAFILE, 0) != 0)
	{
		// 文件 不 存在

		char select;
		cout << "数据文件不存在 是否创建文件(y/n)>";
		cin >> select;

		if (select != 89 && select != 121)
		{
			cout << "这将无法保存数据 是否创建文件(y/n)>";
			cin >> select;

			if (select != 89 && select != 121)
			{
				return 0;
			}
			else
			{
				ofstream ofs;
				ofs.open(DATAFILE, ios::out | ios::binary);
				ofs.close();
				return 1;
			}
		}

		ofstream ofs;
		ofs.open(DATAFILE, ios::out | ios::binary);
		ofs.close();
		return 1;
	}

	return 1;
}



WorkerManager::WorkerManager():initialization(0), m_EmpNum(0)
{
	setEmpListPhead(en.ListInit());
}

WorkerManager::~WorkerManager()
{
	//en.ListDestroy(m_EmpListPhead);
}

// 显示菜单
void WorkerManager::ShowMenu()
{
	cout << "● -------- 欢迎使用职工管理系统 -      -" << endl;
	cout << "|                               -    -" << endl;
	cout << "|            0.  退出管理程序      -"<< endl;
	cout << "|            1.  增加职工信息   -     -" << endl;
	cout << "|            2.  显示职工信息      -" << endl;
	cout << "|            3.  删除离职职工   -     -" << endl;
	cout << "|            4.  修改职工信息      -" << endl;
	cout << "|            5.  查找职工信息   -     -" << endl;
	cout << "|            6.  按照编号排序      -" << endl;
	cout << "|            7.  清空所有文档   -     -" << endl;
	cout << "|            8.  读取员工数据      -" << endl;
	cout << "|            9.  保存员工数据   -     -" << endl;
	cout << "● --------  -------- --------  -      " << m_EmpNum << endl;
}

// 退出管理程序
void WorkerManager::exitSystem()
{
	en.ListDestroy(m_EmpListPhead);
}

// 增加职工
void WorkerManager::Add_Emp()
{
	int tmpId;      //职工编号
	string tmpName; //职工姓名
	int tmpDeptId;  //职工所在部门名称编号

	
	Worker* worker = NULL;

	cout << "增加职工-职工编号>";
	cin >> tmpId;

	cout << "增加职工-职工姓名>";
	cin >> tmpName;

	cout << "增加职工-职工部门(3.老板 2.经理 1.员工)>";
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
		cout << "添加失败" << endl;
		break;
	}
	
}

//删除职工
void WorkerManager::Del_Emp()
{
	if (m_EmpNum == 0)
	{
		cout << "管理系统为空" << endl;
		return;
	}

	cout << "删除职工-职工编号>";
	int tmpId;// 职工编号
	cin >> tmpId;

	EmpListNode* retNode = en.ListFind(m_EmpListPhead, tmpId);

	if (retNode == NULL)
	{
		cout << "未找到" << endl;
		return;
	}

	en.ListErase(retNode);

	m_EmpNum--;
	cout << "删除成功" << endl;
}

//查找职工
void WorkerManager::Find_Emp()
{
	if (m_EmpNum == 0)
	{
		cout << "管理系统为空" << endl;
		return;
	}

	cout << "查找方式(1.按职工编号查找 2.按姓名查找)>";
	int select = 0;
	cin >> select;

	switch (select)
	{
	case 1:
	{
		cout << "查找 职工编号>";
		int tmpId;
		cin >> tmpId;

		EmpListNode* retNode = en.ListFind(m_EmpListPhead, tmpId);

		if (retNode == NULL)
		{
			cout << "未找到" << endl;
			return;
		}

		retNode->getData()->showInfo();
	}
		break;

	case 2:
	{
		cout << "查找 职工姓名>";
		string tmpName;
		cin >> tmpName;

		EmpListNode* retNode = en.ListFind(m_EmpListPhead, tmpName);

		if (retNode == NULL)
		{
			cout << "未找到" << endl;
			return;
		}

		retNode->getData()->showInfo();
	}
		break;

	default:
		cout << "查找失败" << endl;
		break;
	}
}

//修改职工
void WorkerManager::Mod_Emp()
{
	if (m_EmpNum == 0)
	{
		cout << "管理系统为空" << endl;
		return;
	}

	cout << "修改 职工编号>";
	int tmpId;
	cin >> tmpId;

	EmpListNode* retNode = en.ListFind(m_EmpListPhead, tmpId);

	if (retNode == NULL)
	{
		cout << "未找到" << endl;
		return;
	}

	Worker* worker = NULL;

	int id;
	cout << "修改 新 职工编号>";
	cin >> id;

	string name;
	cout << "修改 新 职工姓名>";
	cin >> name;

	int deptId;
	cout << "修改 新 职工岗位>";
	cin >> deptId;

	switch (deptId)
	{
	case 1:
		worker = new Employee(id, name, deptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	case 2:
		worker = new Manager(id, name, deptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	case 3:
		worker = new Boss(id, name, deptId);
		en.ListInsert(m_EmpListPhead->getNextNode(), worker);
		m_EmpNum++;
		break;

	default:
		cout << "修改失败" << endl;
		return;
		//break;
	}

	retNode->ListErase(retNode);
	m_EmpNum--;
	cout << "修改成功" << endl;
}

//排序职工
void WorkerManager::Sort_Emp()
{
	if (m_EmpNum == 0)
	{
		cout << "管理系统为空" << endl;
		return;
	}

	en.ListBubbleSort(m_EmpListPhead, m_EmpNum);

	cout << "排序成功" << endl;
}

//清空文件
void WorkerManager::Clean_File()
{
	en.ListClear(m_EmpListPhead);
	m_EmpNum = 0;

	cout << "清空成功" << endl;
}

//显示职工
void WorkerManager::Show_Emp()
{
	if (m_EmpNum == 0)
	{
		cout << "管理系统为空" << endl;
		return;
	}

	en.ListPrint(m_EmpListPhead);
}

//读文件
void WorkerManager::Read_Emp()
{
	if (initialization != 0)
	{
		cout << "已经读取过" << endl;
		return;
	}

	if (_access(DATAFILE, 0) != 0)
	{
		cout << "数据文件不存在" << endl;
		return;
	}

	cout << "开始读取" << endl;

	ifstream ifs;

	//ifs.open(DATAFILE, ios::in | ios::binary);
	ifs.open(DATAFILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	
	Worker* worker = NULL;

	int tmpid;
	string tmpName;
	int tmpDId;

	while (ifs >> tmpid && ifs >> tmpName && ifs >> tmpDId)
	{
		switch (tmpDId)
		{
		case 1:
			worker = new Employee(tmpid, tmpName, tmpDId);
			en.ListInsert(m_EmpListPhead->getNextNode(), worker);
			m_EmpNum++;
			break;

		case 2:
			worker = new Manager(tmpid, tmpName, tmpDId);
			en.ListInsert(m_EmpListPhead->getNextNode(), worker);
			m_EmpNum++;
			break;

		case 3:
			worker = new Boss(tmpid, tmpName, tmpDId);
			en.ListInsert(m_EmpListPhead->getNextNode(), worker);
			m_EmpNum++;
			break;

		default:
			cout << "读取失败" << endl;
			break;
		}
	}

	worker = NULL;
	ifs.close();
	initialization = 1;
	cout << "读取成功" << endl;
}

//写文件
void WorkerManager::Write_Emp()
{
	if (m_EmpNum == 0)
	{
		char select;
		cout << "管理系统为空 是否保存文件(y/n)>";
		cin >> select;

		if (select != 78 && select != 110)
		{
			cout << "这将覆盖之前数据 是否保存文件(y/n)>";
			cin >> select;

			if (select != 78 && select != 110)
			{
				;
			}
			else
			{
				cout << "取消保存" << endl;
				return;
			}
		}
		else
		{
			cout << "取消保存" << endl;
			return;
		}

		
	}

	if (createFile() == 0)
	{
		return;
	}

	cout << "开始保存" << endl;

	ofstream ofs;

	//ofs.open(DATAFILE, ios::out | ios::binary);
	ofs.open(DATAFILE, ios::out);

	EmpListNode* cur = m_EmpListPhead->getNextNode();

	while (cur != m_EmpListPhead)
	{
		ofs << cur->getData()->m_Id << " "
			<< cur->getData()->m_Name << " "
			<< cur->getData()->m_DeptId << endl;

		cur = cur->getNextNode();
	}

	ofs.close();

	cout << "保存成功" << endl;
}

// 设置 员工链表头
void WorkerManager::setEmpListPhead(EmpListNode* EmpListPhead)
{
	m_EmpListPhead = EmpListPhead;
}

// 获取 员工链表头
EmpListNode* WorkerManager::getEmpListPhead()
{
	return m_EmpListPhead;
}