#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;

// ˫�������ʼ��
ListNode* ListInit();

// ˫���������ڵ�
ListNode* BuyListNode(LTDataType x);

// �������������ͷ���.
//ListNode* ListCreate();

// ˫����������
void ListDestroy(ListNode* phead);

// ˫�������ӡ
void ListPrint(ListNode* phead);

// ˫������β��
void ListPushBack(ListNode* phead, LTDataType x);

// ˫������βɾ
void ListPopBack(ListNode* phead);

// ˫������ͷ��
void ListPushFront(ListNode* phead, LTDataType x);

// ˫������ͷɾ
void ListPopFront(ListNode* phead);

// ˫���������
ListNode* ListFind(ListNode* phead, LTDataType x);

// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);

// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);