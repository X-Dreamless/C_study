#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include "worker.h"

/*======== ======== ======== ========*/

class EmpListNode
{
public:
	EmpListNode();
	~EmpListNode();

	// ��ȡnext�ڵ�
	EmpListNode* getNextNode();

	// ˫�������ʼ��
	EmpListNode* ListInit();

	// ˫���������ڵ�
	EmpListNode* BuyListNode(Worker* x);

	// ˫����������
	void ListDestroy(EmpListNode* phead);

	// ˫�������ӡ
	void ListPrint(EmpListNode* phead);

	// ˫������β��
	void ListPushBack(EmpListNode* phead, Worker* x);

	// ˫������βɾ
	void ListPopBack(EmpListNode* phead);

	// ˫������ͷ��
	void ListPushFront(EmpListNode* phead, Worker* x);

	// ˫������ͷɾ
	void ListPopFront(EmpListNode* phead);

	// ˫���������
	EmpListNode* ListFind(EmpListNode* phead, Worker* x);

	// ˫��������pos��ǰ����в���
	void ListInsert(EmpListNode* pos, Worker* x);

	// ˫������ɾ��posλ�õĽڵ�
	void ListErase(EmpListNode* pos);

private:
	int h;
	Worker* worker;

	EmpListNode* next;
	EmpListNode* prev;
};

/*======== ======== ======== ========*/