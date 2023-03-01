
#include "SList.h"

void test1()
{
	SLTNode* plist = NULL;

	// ������β��
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);

	// �������ͷ��
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	
	SListPrint(plist);

	// �������βɾ
	SListPopBack(&plist);

	SListPrint(plist);
}

void test2()
{
	SLTNode* plist = NULL;

	// �������ͷ��
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);

	SListPrint(plist);

	// �������βɾ
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);

	SListPrint(plist);
}

void test3()
{
	SLTNode* plist = NULL;

	// �������ͷ��
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);

	SListPrint(plist);

	// ������ͷɾ
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);

	SListPrint(plist);
}

void test4()
{
	SLTNode* plist = NULL;

	// �������ͷ��
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);// 2
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 2);// 2
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 2);// 2

	SListPrint(plist);

	// ��������� �Ҷ����ͬ��
	SLTNode* pos = SListFind(plist, 2);
	int i = 1;
	while (pos)
	{
		printf("��%d��pos�ڵ�:%p->%d\n", i++, pos, pos->data);

		// ��pos����һ��λ����
		pos = SListFind(pos->next, 2);
	}

	// ��������� �޸�
	pos = SListFind(plist, 3);
	if (pos)
	{
		pos->data = 333;
	}

	SListPrint(plist);
}

void test5()
{
	SLTNode* plist = NULL;

	// �������ͷ��
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);

	SListPrint(plist);

	// �Ȳ���
	SLTNode* pos = SListFind(plist, 3);
	if (pos)
	{
		// ��������posλ�� ֮ǰ ����x
		SListInsert(&plist, pos, 666);
	}

	SListPrint(plist);

	// �ٲ���
	// �Ȳ���
	pos = SListFind(plist, 4);
	if (pos)
	{
		// ��������posλ�� ֮ǰ ����x
		SListInsert(&plist, pos, 888);
	}

	SListPrint(plist);

	SListDestroy(&plist);
}

int main()
{
	//test1();

	//test2();

	//test3();

	//test4();

	test5();

	return 0;
}