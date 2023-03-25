
#include "my_List.h"

/*======== ======== ======== ========*/

EmpListNode::EmpListNode():next(NULL), prev(NULL), worker(NULL)
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

// ˫�������ʼ��
EmpListNode* EmpListNode::ListInit()
{
	// �ڱ�λ��ͷ�ڵ�
	EmpListNode* phead = new(EmpListNode);

	phead->next = phead;
	phead->prev = phead;

	phead->h = 666;

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

/*======== ======== ======== ========*/