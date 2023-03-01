
#include "Queue.h"

// ��ʼ������
void QueueInit(Queue* q)
{
	assert(q);

	q->head = NULL;
	q->tail = NULL;
}

// ���ٶ���
void QueueDestroy(Queue* q)
{
	assert(q);

	QueueNode* cur = q->head;

	while (cur != NULL)
	{
		QueueNode* curNext = cur->next;

		free(cur);

		cur = curNext;
	}

	q->head = NULL;
	q->tail = NULL;
}

// ��β�����
void QueuePush(Queue* q, QDataType data)
{
	assert(q);

	QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newNode == NULL)
	{
		exit(0);
	}

	newNode->data = data;
	newNode->next = NULL;

	if (q->head == NULL)// ͷβͬʱΪ�� �� ����Ϊ�գ�����ֻ���ж�һ��
	{
		// �ն���

		q->head = newNode;
		q->tail = newNode;
	}
	else
	{
		// ��Ϊ��

		q->tail->next = newNode;
		q->tail = newNode;
	}
}

// ��ͷ������
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	QueueNode* headNext = q->head->next;

	free(q->head);

	q->head = headNext;

	if (q->head == NULL)
	{
		// �����нڵ㱻ɾ�����
		
		q->tail = NULL;
	}
}

// ��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	return q->head->data;
}

// ��ȡ���ж�βԪ��
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	return q->tail->data;
}

// ��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* q)
{
	assert(q);

	QueueNode* cur = q->head;

	int n = 0;
	while (cur)
	{
		n++;

		cur = cur->next;
	}

	return n;
}

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* q)
{
	assert(q);

	return q->head == NULL;
}