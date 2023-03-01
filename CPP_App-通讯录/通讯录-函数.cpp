
#include "ͨѶ¼.h"

// ��ʾ�˵�
void showMenu(int arbSize)
{
	cout << "======== ======== ========" << endl;
	cout << "|      1 �����ϵ��      |" << endl;
	cout << "|      2 ��ʾ��ϵ��      |" << endl;
	cout << "|      3 ɾ����ϵ��      |" << endl;
	cout << "|      4 ������ϵ��      |" << endl;
	cout << "|      5 �޸���ϵ��      |" << endl;
	cout << "|      6 �����ϵ��      |" << endl;
	cout << "|      7 ������ϵ��      |" << endl;
	cout << "|      8 ��ȡ��ϵ��      |" << endl;
	cout << "|      0 �˳�ͨѶ¼      |" << endl;
	cout << "======== ======== =======" << arbSize << endl;
}

// �����ϵ��
void addPerson(addressBook* arb)
{
	string name;      // ����
	string phone;     // �绰
	string addr;      // סַ
	string sex;       // �Ա�
	unsigned int age; // ����

	cout << "����>";
	cin >> name;
	cout << "�绰>";
	cin >> phone;
	cout << "סַ>";
	cin >> addr;
	cout << "�Ա�>";
	cin >> sex;
	cout << "����>";
	cin >> age;

	//string name = "����";             // ����
	//string phone = "12345678901";     // �绰
	//string addr = "����";             // סַ
	//string sex = "Ů";                // �Ա�
	//unsigned int age = 35;            // ����

	// ͨѶ¼��û�˲���Ҫ ��ʼ����ϵ������
	if (arb->size == 0)
	{
		arb->per = ListInit();
	}

	// β��
	ListInsert(arb->per, name, phone, addr, sex, age);

	arb->size++;
	cout << "��ӳɹ�" << endl;
}

// ��ʾ��ϵ��
int showPerson(addressBook* arb)
{
	if (arb->size == 0)
	{
		cout << "ͨѶ¼��" << endl;
		return 0;
	}

	// ˫�������ӡ
	ListPrint(arb->per);
}

// ɾ����ϵ��
int delPerson(addressBook* arb)
{
	if (arb->size == 0)
	{
		cout << "ͨѶ¼��" << endl;
		return 0;
	}

	string name;
	cout << "����Ҫ ɾ�� �� ��ϵ�� ������>";
	cin >> name;

	// ˫���������
	Person* delper = ListFind(arb->per, name);

	if (delper == NULL)
	{
		cout << "����ϵ��" << endl;
		return 0;
	}

	// ˫������ɾ��posλ�õĽڵ�
	ListErase(delper);

	arb->size--;
	cout << "ɾ���ɹ�" << endl;
}

// ������ϵ��
int findPerson(addressBook* arb)
{
	if (arb->size == 0)
	{
		cout << "ͨѶ¼��" << endl;
		return 0;
	}

	string name;
	cout << "����Ҫ ���� �� ��ϵ�� ������>";
	cin >> name;

	// ˫���������
	Person* findper = ListFind(arb->per, name);

	if (findper == NULL)
	{
		cout << "�� �� ����" << endl;
		return 0;
	}

	cout << "�� �� ����" << endl;
}

// �޸���ϵ��
int modifyPerson(addressBook* arb)
{
	if (arb->size == 0)
	{
		cout << "ͨѶ¼��" << endl;
		return 0;
	}

	string findName;
	cout << "����Ҫ �޸� �� ��ϵ�� ������>";
	cin >> findName;

	// ˫���������
	Person* modifyper = ListFind(arb->per, findName);

	if (modifyper == NULL)
	{
		cout << "�� �� ����" << endl;
		return 0;
	}

	string name;      // ����
	string phone;     // �绰
	string addr;      // סַ
	string sex;       // �Ա�
	unsigned int age; // ����

	cout << "�޸� ����>";
	cin >> name;
	cout << "�޸� �绰>";
	cin >> phone;
	cout << "�޸� סַ>";
	cin >> addr;
	cout << "�޸� �Ա�>";
	cin >> sex;
	cout << "�޸� ����>";
	cin >> age;

	modifyper->name = name;
	modifyper->phone = phone;
	modifyper->addr = addr;
	modifyper->sex = sex;
	modifyper->age = age;

	cout << "�޸ĳɹ�" << endl;
}

// ���ͨѶ¼
void destroyPerson(addressBook* arb)
{
	if (arb->size == 0)
	{
		cout << "ͨѶ¼��" << endl;
		return;
	}

	char select;
	cout << "�Ƿ�ɾ��������ϵ��(y/n)>";
	cin >> select;

	if (select != 89 && select != 121)
	{
		cout << "ȡ��ɾ��" << endl;
		return;
	}

	// ˫����������
	ListDestroy(arb->per);

	arb->size = 0;
}

// �˳�ͨѶ¼
void exitAddressBook(addressBook* arb)
{
	if (arb->size == 0)
	{
		return;
	}

	// ˫����������
	ListDestroy(arb->per);

	arb->size = 0;
}

/*======== ======== ======== ======== ======== ======== ======== ========*/

// ˫�������ʼ��
Person* ListInit()
{
	// �ڱ�λ��ͷ�ڵ�
	Person* phead = (Person*)malloc(sizeof(Person));

	// ѭ������next ָ���Լ�
	phead->next = phead;
	phead->prev = phead;

	phead->age = 5201314;

	return phead;
}

// ˫���������ڵ�
Person* BuyListNode
(
	string name,      // ����
	string phone,     // �绰
	string addr,      // סַ
	string sex,       // �Ա�
	unsigned int age  // ����
)
{
	// �����ڵ�
	//Person* newNode = (Person*)malloc(sizeof(Person));

	// 0x00007FFC6B09140C (vcruntime140d.dll)��(λ�� CPP_App-ͨѶ¼.exe ��)�������쳣: 0xC0000005: ��ȡλ�� 0xFFFFFFFFFFFFFFFF ʱ�������ʳ�ͻ��
	//newNode->name = name;
	//newNode->phone = phone;
	//newNode->addr = addr;
	//newNode->sex = sex;
	//newNode->age = age;

	// new���˷����ڴ滹����ù��캯���ġ�
	//newNode = new Person;
	Person* newNode = new Person;
	newNode->name = name;
	newNode->phone = phone;
	newNode->addr = addr;
	newNode->sex = sex;
	newNode->age = age;

	// ��ϰ��
	newNode->next = NULL;
	newNode->prev = NULL;

	return newNode;
}

// ˫��������pos��ǰ����в���
void ListInsert
(
	Person* pos,

	string name,      // ����
	string phone,     // �绰
	string addr,      // סַ
	string sex,       // �Ա�
	unsigned int age  // ����
)
{
	assert(pos);

	Person* newNode = BuyListNode(name, phone, addr, sex, age);

	// ��¼ pos ��һ���ڵ�
	Person* PosPrev = pos->prev;
	
	PosPrev->next = newNode;
	newNode->prev = PosPrev;
	newNode->next = pos;
	pos->prev = newNode;
}

// ˫������ɾ��posλ�õĽڵ�
void ListErase(Person* pos)
{
	assert(pos);

	// ��¼ pos ��һ�� ��һ�� �ڵ�
	Person* PosPrev = pos->prev;
	Person* PosNext = pos->next;

	free(pos);
	pos = NULL;

	PosPrev->next = PosNext;
	PosNext->prev = PosPrev;
}

// ˫�������ӡ
void ListPrint(Person* phead)
{
	assert(phead);

	// cur �� phead->next ��ʼ����
	// cur ���� phead ʱֹͣ

	Person* cur = phead->next;

	while (cur != phead)
	{
		cout
			<< cur->name << " "
			<< cur->phone << " "
			<< cur->addr << " "
			<< cur->sex << " "
			<< cur->age << " "
		;
		cout << endl;

		cur = cur->next;
	}
}

// ˫���������
Person* ListFind(Person* phead, string name)
{
	assert(phead);

	// cur �� phead->next ��ʼ����
	// cur ���� phead ʱֹͣ

	Person* cur = phead->next;

	while (cur != phead)
	{
		if (cur->name == name)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

// ˫����������
void ListDestroy(Person* phead)
{
	assert(phead);

	Person* cur = phead->next;

	while (cur != phead)
	{
		Person* curNext = cur->next;
		delete cur;
		//free(cur);
		cur = curNext;
	}

	free(phead);
	phead = NULL;
}

/*======== ======== ======== ======== ======== ======== ======== ========*/

// �ж��ļ��Ƿ����
int FileWhetherExist(char* FileSrc)
{
	FILE* pfff = fopen(FileSrc, "r");

	if (pfff == NULL)
	{
		return 0;
	}

	fclose(pfff);
	pfff = NULL;

	return 1;
}

// �����ļ�
int createFile()
{
	char ch[21] = "addressBook.txt";
	if (FileWhetherExist(ch) == 0)
	{
		char select;
		cout << "�����ļ������� �Ƿ񴴽��ļ�(y/n)>";
		cin >> select;

		if (select != 89 && select != 121)
		{
			cout << "�⽫�޷�������ϵ������ �Ƿ񴴽��ļ�(y/n)>";
			cin >> select;

			if (select != 89 && select != 121)
			{
				return 0;
			}
			else
			{
				FILE* pf = fopen("addressBook.txt", "w");
				fclose(pf);
				pf = NULL;
				return 1;
			}
		}

		FILE* pf = fopen("addressBook.txt", "w");
		fclose(pf);
		pf = NULL;
		return 1;
	}
}

// д�ļ�(���� ��Ҫ���� Person* per)
void saveFile(addressBook* arb)
{
	if (arb->size == 0)
	{
		cout << "ͨѶ¼��" << endl;
		return;
	}

	if (createFile() == 0)
	{
		cout << "ȡ�������ļ�" << endl;
		return;
	}

	cout << "��ʼ����" << endl;

	//FILE* pf = fopen("addressBook.txt", "w");
	FILE* pf = fopen("addressBook.txt", "w");

	Person* phead = arb->per;
	assert(phead);

	// cur �� phead->next ��ʼ����
	// cur ���� phead ʱֹͣ

	Person* cur = phead->next;

	while (cur != phead)
	{
		// printf����ַ��������char *�ģ�����֮��printfֻ�����C�����е��������ݣ�string����c�����������ݡ�
		// printf(��%s�� , s.c_str());//string��c_str()��Ա�������ص�ǰ�ַ��������ַ���ַ
		fprintf(pf, "%s\n\t%s\n\t%s\n\t%s\n\t%d\n\n", cur->name.c_str(), cur->phone.c_str(), cur->addr.c_str(), cur->sex.c_str(), cur->age);
		/*
			�� ��
				�绰
				סַ
				�Ա�
				����

			�� ��
				�绰
				סַ
				�Ա�
				����
		*/

		cur = cur->next;
	}

	fclose(pf);
	pf = NULL;
	cout << "�������" << endl;
}

// ���ļ�
void readFile(addressBook* arb)
{
	//if (arb->size == 0)
	//{
	//	cout << "ͨѶ¼��" << endl;
	//	return;
	//}

	char ch[21] = "addressBook.txt";
	if (FileWhetherExist(ch) == 0)
	{
		cout << "�������ļ�" << endl;
		return;
	}

	if (arb->initialization == 1)
	{
		cout << "�Ѿ���ȡ�������ļ�" << endl;
		return;
	}

	cout << "��ȡ����" << endl;

	FILE* pf = fopen("addressBook.txt", "r");

	// ͨѶ¼��û�˲���Ҫ ��ʼ����ϵ������
	if (arb->size == 0)
	{
		arb->per = ListInit();
	}

	string name = "0";      // ����
	string phone = "0";     // �绰
	string addr = "0";      // סַ
	string sex = "0";       // �Ա�
	unsigned int age = 0;   // ����

	while (fscanf(pf, "%s %s %s %s %d", name.c_str(), phone.c_str(), addr.c_str(), sex.c_str(), &age) != EOF)
	{
		// β��
		ListInsert(arb->per, name, phone, addr, sex, age);

		arb->size++;
	}

	// ����Ϊ �ѳ�ʼ��
	arb->initialization = 1;
	cout << "��ȡ���" << endl;
}