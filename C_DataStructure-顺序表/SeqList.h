#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


/*
	ͷβ ɾ�� ���� ���Ը��� SeqListInsert() �� SeqListErase()
*/

typedef int SLDataType;

// ˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType* arr;// ָ��̬���ٵ�����
	int size;		// ��Ч���ݸ���
	int capacity;	// �����ռ�Ĵ�С
}SL;


// ˳����ʼ��
void SeqListInit(SL* psl);

// ˳�������
void SeqListDestory(SL* psl);

// ˳����ӡ
void SeqListPrint(SL* psl);

// ���ռ䣬������ˣ���������
void SeqListCheckCapacity(SL* psl);

// ˳���β��
void SeqListPushBack(SL* psl, SLDataType x);

// ˳���βɾ
void SeqListPopBack(SL* psl);

// ˳���ͷ��
void SeqListPushFront(SL* psl, SLDataType x);

// ˳���ͷɾ
void SeqListPopFront(SL* psl);

// ˳������
int SeqListFind(SL* psl, SLDataType x);

// ˳�����posλ�ò���x
void SeqListInsert(SL* psl, int pos, SLDataType x);

// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SL* psl, size_t pos);