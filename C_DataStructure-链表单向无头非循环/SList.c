
#include "SList.h"

// ��̬����һ���ڵ�
SLTNode* BuySListNode(SLTDateType x)
{
	// �����½ڵ�
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	// ���
	if (newnode == NULL)
	{
		exit(-1);
	}

	// �½ڵ����ֵ
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

// �������ӡ
void SListPrint(SLTNode* phead)
{
	/*
		phead �� [d1][  ] �� [d2][  ] �� [d3][  ] �� 

		        cur
		         ��
		phead �� [d1][  ] �� [d2][  ] �� [d3][  ] ��
	*/

	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

// ������β��
void SListPushBack(SLTNode** pphead, SLTDateType x)
{
	/*
		tail	β
		newnode	�½ڵ�

		�β�phead �ĸı䲻��Ӱ�� ʵ��plist

		plist ��ֵ ������ phead
		��Ϊplist��һ��һ��ָ�룬pheadҲһ��һ��ָ�룬ʵ�������ϻ��Ǵ�ֵ������pheadӦ��Ϊ����ָ����Ǵ���ַ
			
			int a;
			f(&a);

			void f(int* px)
			{
				*px = 0;
			}

			--------------------------------

			int* p;
			f(&p);

			void f(int** px)
			{
				*px = 0x00;
			}

	*/

	// ��̬����һ���ڵ�
	SLTNode* newnode = BuySListNode(x);

	// û�нڵ�����½ڵ�
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		// �ҵ�β�ڵ�
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		// �½ڵ� ��ַ�� ��һ���ڵ�
		tail->next = newnode;
	}
}

// �������ͷ��
void SListPushFront(SLTNode** pphead, SLTDateType x)
{
	// ��̬����һ���ڵ�
	SLTNode* newnode = BuySListNode(x);

	// ͷ��
	newnode->next = *pphead;
	*pphead = newnode;
}

// �������βɾ
void SListPopBack(SLTNode** pphead)
{
	// �޽ڵ�����
	if (*pphead == NULL)
	{
		return;
	}

	// ֻ��һ���ڵ�����
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		// �ҵ�β֮ǰ��¼��һ���ڵ��ַ
		SLTNode* prev = NULL;

		// �ҵ�β�ڵ�
		SLTNode* tail = *pphead;
		while (tail->next)// tail->next != NULL
		{
			// ��¼���ټ�����
			prev = tail;

			tail = tail->next;
		}

		// βɾ
		// ע�⣺tail �Ǿֲ��������� pphead �Ŀ������ÿ�ֻ���� tail ָ���
		// ע�⣺��һ���ڵ�� next Ҫ�ÿգ�����Ұָ��
		free(tail);
		tail = NULL;

		prev->next = NULL;



		//// ��ǰ else �µķ���2
		//SLTNode* tail = *pphead;
		//while (tail->next->next)
		//{
		//	tail = tail->next;
		//}
		//free(tail->next);
		//tail->next = NULL;
	}
}

// ������ͷɾ
void SListPopFront(SLTNode** pphead)
{
	// �޽ڵ�����
	if (*pphead == NULL)
	{
		return;
	}

	// ������һ���ڵ�ĵ�ַ
	SLTNode* next = (*pphead)->next;

	// �ͷŵ�ǰ�ڵ�
	free(*pphead);

	// ָ����һ���ڵ�
	*pphead = next;
}

// ���������
SLTNode* SListFind(SLTNode* phead, SLTDateType x)
{
	SLTNode* cur = phead;

	// ��������
	while (cur)
	{
		// �ҵ�����
		if (cur->data == x)
		{
			return cur;
		}
		else// û�ҵ�����
		{
			cur = cur->next;
		}
	}

	// û�ҵ�
	return NULL;
}

// ��������posλ�� ֮ǰ ����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x)
{
	/*
						  pos
						   ��
		[1][ ] �� [2][ ] �� [3][ ] �� [4][ ] �� 
						��
						x

		�Ҳ���ǰһ���ڵ�
	*/

	// ��̬����һ���ڵ�
	SLTNode* newnode = BuySListNode(x);

	// ͷ�� ��Ҫ��������
	if (*pphead == pos)
	{
		// ͷ��
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		// �ҵ�pos��ǰһ��λ��
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}

		// ����x
		posPrev->next = newnode;
		newnode->next = pos;
	}
}

// ��������posλ�� ֮�� ����x
void SListInsertAfter(SLTNode* pos, SLTDateType x)
{
	/*
		pos
		 ��
		[1][ ] �� [2][ ] �� [3][ ] �� [4][ ] �� 

		�������� newnode ָ����һ��
	*/

	// ��̬����һ���ڵ�
	SLTNode* newnode = BuySListNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}

// ������ɾ��posλ�õĽڵ�
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	/*
		pos
		 ��
		[1][ ] �� [2][ ] �� [3][ ] �� [4][ ] ��

		��ͷ���� ɾ��posλ�� �� ͷɾ �� βɾ �߼���һ��
	*/

	assert(pphead);
	assert(pos);

	// �ж�ͷɾ
	if (*pphead == pos)
	{
		// ͷɾ
		// �� plist ָ����һ��
		*pphead = pos->next;

		// �ͷŽڵ�
		free(pos);
	}
	else
	{
		// �ҵ� pos �ڵ��ǰһ���ڵ�
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		// 
		prev->next = pos->next;

		// 
		free(pos);
	}
}

// ������ɾ��posλ�� ֮�� �Ľڵ�
void SListEraseAfter(SLTNode* pos)
{
	/*
		pos     next  next->next
		 ��        ��        ��
		[1][ ] �� [2][ ] �� [3][ ] �� [4][ ] ��

	*/

	assert(pos);
	assert(pos->next);

	// 
	SLTNode* next = pos->next;
	pos->next = next->next;

	// 
	free(next);
}

// ����������
void SListDestroy(SLTNode** pphead)
{
	/*
		        cur
		         ��
		plist �� [1][ ] �� [2][ ] �� [3][ ] �� [4][ ] ��

	*/

	assert(pphead);

	SLTNode* cur = *pphead;

	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}

	*pphead = NULL;
}