#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*=====================================================*/

//typedef int ��������;					// (SLTDateType)
//typedef struct ����_���򲻴�ͷ��ѭ��		// (SListNode)
//{
//	�������� ����;						// (data)
//	struct ����_���򲻴�ͷ��ѭ��* ��һ��;	// (next)
//}�����򲻴�ͷ��ѭ��;					// (SLTNode)

typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SLTNode;

/*=====================================================*/

// ��̬����һ���ڵ�
SLTNode* BuySListNode(SLTDateType x);

// �������ӡ
void SListPrint(SLTNode* phead);

// ������β��
void SListPushBack(SLTNode** pphead, SLTDateType x);

// �������ͷ��
void SListPushFront(SLTNode** pplist, SLTDateType x);

// �������βɾ
void SListPopBack(SLTNode** pphead);

// ������ͷɾ
void SListPopFront(SLTNode** pphead);

// ���������
SLTNode* SListFind(SLTNode* phead, SLTDateType x);

// ��������posλ�� ֮ǰ ����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x);

// ��������posλ�� ֮�� ����x
void SListInsertAfter(SLTNode* pos, SLTDateType x);

// ������ɾ��posλ�õĽڵ�
void SListErase(SLTNode** pphead, SLTNode* pos);

// ������ɾ��posλ�� ֮�� �Ľڵ�
void SListEraseAfter(SLTNode* pos);

// ����������
void SListDestroy(SLTNode** pphead);

/*
* ��Ҫ�޸� plist ָ��Ĳ���Ҫ����ָ��
*/
/*=====================================================*/