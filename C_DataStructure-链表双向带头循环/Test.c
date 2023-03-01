
#include "List.h"

void test1()
{
	//ListNode* plist = NULL;

	// ˫�������ʼ��
	ListNode* plist = ListInit();

	// ˫������β��
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);

	// ˫�������ӡ
	ListPrint(plist);
	 
	// ˫������βɾ
	ListPopBack(plist);
	ListPopBack(plist);

	// ˫�������ӡ
	ListPrint(plist);
}

void test2()
{
	// ˫�������ʼ��
	ListNode* plist = ListInit();

	// ˫������ͷ��
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);

	// ˫�������ӡ
	ListPrint(plist);

	// ˫������ͷɾ
	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);

	// ˫�������ӡ
	ListPrint(plist);
}

void test3()
{
	// ˫�������ʼ��
	ListNode* plist = ListInit();

	// ˫������ͷ��
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);

	// ˫�������ӡ
	ListPrint(plist);

	// ˫���������
	if (ListFind(plist, 2))
	{
		printf("�ҵ�\n");
	}
	else
	{
		printf("�Ҳ���\n");
	}

	// ˫������ɾ��posλ�õĽڵ�
	ListErase(ListFind(plist, 2));

	// ˫�������ӡ
	ListPrint(plist);
}

void test4()
{
	// ˫�������ʼ��
	ListNode* plist = ListInit();

	// ˫������ͷ��
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);

	// ˫�������ӡ
	ListPrint(plist);

	// ˫����������
	void ListDestroy(plist);

	// ���ֽӿ�һ����
	// ��Ҫ�Լ��ÿ�
	plist = NULL;
}

int main()
{
	//test1();

	//test2();

	//test3();

	test4();

	return 0;
}