
#include "my_List.h"

/*======== ======== ======== ========*/

EmpListNode::EmpListNode():next(NULL), prev(NULL), worker(NULL), sort(0)
{
}

EmpListNode::~EmpListNode()
{
}

// ��ȡnext�ڵ�
EmpListNode* EmpListNode::getNextNode()
{
	return next;
}

// ��ȡworker����
Worker* EmpListNode::getData()
{
	return worker;
}

// ˫�������ʼ��
EmpListNode* EmpListNode::ListInit()
{
	// �ڱ�λ��ͷ�ڵ�
	EmpListNode* phead = new(EmpListNode);

	phead->next = phead;
	phead->prev = phead;

	phead->h = 666;
	phead->worker = NULL;

	return phead;
}

// ˫���������ڵ�
EmpListNode* EmpListNode::BuyListNode(Worker* x)
{
	EmpListNode* newNode = new(EmpListNode);

	newNode->worker = x;
	newNode->next = NULL;
	newNode->prev = NULL;

	return newNode;
}

// ˫����������
void EmpListNode::ListDestroy(EmpListNode* phead)
{
	assert(phead);

	EmpListNode* cur = phead->next;

	while (cur != phead)
	{
		EmpListNode* curNext = cur->next;
		
		delete cur->getData();
		delete cur;

		cur = curNext;
	}

	delete phead->getData();
	delete phead;
	phead = NULL;
}

// ˫���������(����ͷ)
void EmpListNode::ListClear(EmpListNode* phead)
{
	assert(phead);

	EmpListNode* cur = phead->next;

	while (cur != phead)
	{
		EmpListNode* curNext = cur->next;

		delete cur->getData();
		delete cur;

		cur = curNext;
	}

	//delete phead->getData();
	//delete phead;
	//phead = NULL;

	phead->next = phead;
	phead->prev = phead;
}

// ˫��������pos��ǰ����в���
void EmpListNode::ListInsert(EmpListNode* pos, Worker* x)
{
	assert(pos);

	// ��¼ǰһ���ڵ�
	EmpListNode* posPrev = pos->prev;

	EmpListNode* newNode = BuyListNode(x);

	posPrev->next = newNode;
	newNode->prev = posPrev;
	newNode->next = pos;
	pos->prev = newNode;
}

// ˫������ɾ��posλ�õĽڵ�
void EmpListNode::ListErase(EmpListNode* pos)
{
	assert(pos);

	EmpListNode* posPrev = pos->prev;
	EmpListNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;

	delete pos->getData();
	delete pos;
	pos = NULL;
}

// ˫��������� ��ְ����Ų���
EmpListNode* EmpListNode::ListFind(EmpListNode* phead, int x)
{
	assert(phead);

	EmpListNode* cur = phead->next;

	while (cur != phead)
	{
		if (cur->worker->m_Id == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

// ˫��������� ����������
EmpListNode* EmpListNode::ListFind(EmpListNode* phead, string x)
{
	assert(phead);

	EmpListNode* cur = phead->next;

	while (cur != phead)
	{
		if (cur->worker->m_Name == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

// ˫�������ӡ
void EmpListNode::ListPrint(EmpListNode* phead)
{
	assert(phead);

	EmpListNode* cur = phead->next;

	while (cur != phead)
	{
		cur->worker->showInfo();
		cur = cur->next;
	}

	cout << endl;
}

// ˫������ð������
void EmpListNode::ListBubbleSort(EmpListNode* phead, int empNum)
{
	EmpListNode* cur = phead->next;

	if (sort == 0)
	{
		// 0С����
		
		// ��ʼ����
		// ���������� = Ԫ�ظ��� - 1
		for (int i = 0; i < empNum - 1; i++)
		{
			// ÿ�ֶԱȴ��� = Ԫ�ظ��� - �������� - 1
			for (int j = 0; j < empNum - 1 - i; j++)
			{
				if (cur != phead && cur->next != phead)
				{
					if (cur->worker->m_Id > cur->next->worker->m_Id)
					{
						Worker* tmpWorker = cur->worker;
						cur->worker = cur->next->worker;
						cur->next->worker = tmpWorker;
					}
				}
				else
				{
					// ����ͷ����Ҫ������
					j--;
					j--;
				}

				cur = cur->next;
			}
		}

		sort = 1;
	}
	else
	{
		// 1���С

		// ��ʼ����
		// ���������� = Ԫ�ظ��� - 1
		for (int i = 0; i < empNum - 1; i++)
		{
			// ÿ�ֶԱȴ��� = Ԫ�ظ��� - �������� - 1
			for (int j = 0; j < empNum - 1 - i; j++)
			{
				if (cur != phead && cur->next != phead)
				{
					if (cur->worker->m_Id < cur->next->worker->m_Id)
					{
						Worker* tmpWorker = cur->worker;
						cur->worker = cur->next->worker;
						cur->next->worker = tmpWorker;
					}
				}
				else
				{
					// ����ͷ����Ҫ������
					j--;
					j--;
				}

				cur = cur->next;
			}
		}

		sort = 0;
	}
}

/*======== ======== ======== ========*/