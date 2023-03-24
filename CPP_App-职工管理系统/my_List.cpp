
#include "my_List.h"

// ˫�������ʼ��
ListNode* ListInit()
{
	// �ڱ�λ��ͷ�ڵ�
	ListNode* phead = (ListNode*)malloc(sizeof(ListNode));

	// ѭ������next ָ���Լ�
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

// ˫���������ڵ�
ListNode* BuyListNode(LTDataType x)
{
	// �����ڵ�
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));

	newNode->data = x;

	// ��ϰ��
	newNode->next = NULL;
	newNode->prev = NULL;

	return newNode;
}

// ˫������β��
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);

	// ��β
	ListNode* tail = phead->prev;

	// �����ڵ�
	ListNode* newNode = BuyListNode(x);

	// ����
	tail->next = newNode;
	newNode->prev = tail;
	newNode->next = phead;
	phead->prev = newNode;

	/*
		����

			assert(phead);

			// ˫��������pos��ǰ����в���
			ListInsert(phead, x);
	*/
}

// ˫������βɾ
void ListPopBack(ListNode* phead)
{
	assert(phead);

	// ��ֹɾ�� �ڱ�λ
	assert(phead->next != phead);

	// ��β
	ListNode* tail = phead->prev;

	// ��¼ tail �� prev
	ListNode* tailPrev = tail->prev;

	free(tail);

	tailPrev->next = phead;
	phead->prev = tailPrev;

	/*
		��һ��д��������¼ tail �� prev

			assert(phead);

			// ��ֹɾ�� �ڱ�λ
			assert(phead->next != phead);

			// ��β
			ListNode* tail = phead->prev;

			phead->prev = tail->prev;
			tail->prev->next = phead;

			free(tail);
	*/

	/*
		����

			assert(phead);

			// ��ֹɾ�� �ڱ�λ
			assert(phead->next != phead);

			ListErase(phead->prev);
	*/
}

// ˫������ͷ��
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);

	// �����ڵ�
	ListNode* newNode = BuyListNode(x);

	// ����ඨ��һ��ָ��
	ListNode* pheadNext = phead->next;

	phead->next = newNode;
	newNode->prev = phead;

	newNode->next = pheadNext;
	pheadNext->prev = newNode;

	/*
		����

			assert(phead);

			// ˫��������pos��ǰ����в���
			ListInsert(phead->next, x);
	*/
}

// ˫������ͷɾ
void ListPopFront(ListNode* phead)
{
	assert(phead);

	// ��ֹɾ�� �ڱ�λ
	assert(phead->next != phead);

	// ����ඨ��һ��ָ��
	ListNode* pheadNext = phead->next;
	ListNode* pheadNextNext = phead->next->next;

	phead->next = pheadNextNext;
	pheadNextNext->prev = phead;

	free(pheadNext);

	/*
		����

			assert(phead);

			// ��ֹɾ�� �ڱ�λ
			assert(phead->next != phead);

			ListErase(phead->next);
	*/
}

// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);

	// ��¼ǰһ���ڵ�
	ListNode* posPrev = pos->prev;

	ListNode* newNode = BuyListNode(x);

	posPrev->next = newNode;
	newNode->prev = posPrev;
	newNode->next = pos;
	pos->prev = newNode;
}

// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos)
{
	assert(pos);

	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;

	free(pos);
	pos = NULL;
}

// ˫���������
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);

	// cur �� phead->next ��ʼ����
	// cur ���� phead ʱֹͣ

	ListNode* cur = phead->next;

	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

// ˫�������ӡ
void ListPrint(ListNode* phead)
{
	assert(phead);

	// cur �� phead->next ��ʼ����
	// cur ���� phead ʱֹͣ

	ListNode* cur = phead->next;

	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

	printf("\n");
}

// ˫����������
void ListDestroy(ListNode* phead)
{
	assert(phead);

	ListNode* cur = phead->next;

	while (cur != phead)
	{
		ListNode* curNext = cur->next;
		free(cur);
		cur = curNext;
	}

	free(phead);
	phead = NULL;
}