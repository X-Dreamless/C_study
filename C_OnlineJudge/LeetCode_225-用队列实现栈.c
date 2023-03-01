
/*
	225. �ö���ʵ��ջ https://leetcode.cn/problems/implement-stack-using-queues/
	
	�Ѷȣ���

	�����ʹ����������ʵ��һ�������ȳ���LIFO����ջ����֧����ͨջ��ȫ�����ֲ�����push��top��pop �� empty����


	ʵ�� MyStack �ࣺ
		void push(int x) ��Ԫ�� x ѹ��ջ����
		int pop() �Ƴ�������ջ��Ԫ�ء�
		int top() ����ջ��Ԫ�ء�
		boolean empty() ���ջ�ǿյģ����� true �����򣬷��� false ��


	ע�⣺
		��ֻ��ʹ�ö��еĻ������� ���� Ҳ���� push to back��peek/pop from front��size �� is empty ��Щ������
		����ʹ�õ�����Ҳ��֧�ֶ��С� �����ʹ�� list ���б����� deque��˫�˶��У���ģ��һ������ , ֻҪ�Ǳ�׼�Ķ��в������ɡ�


	ʾ����
		���룺
			["MyStack", "push", "push", "top", "pop", "empty"]
			[[], [1], [2], [], [], []]

		�����
			[null, null, null, 2, 2, false]

		���ͣ�
			MyStack myStack = new MyStack();
			myStack.push(1);
			myStack.push(2);
			myStack.top(); // ���� 2
			myStack.pop(); // ���� 2
			myStack.empty(); // ���� False


	��ʾ��
		1 <= x <= 9
		������100 �� push��pop��top �� empty
		ÿ�ε��� pop �� top ����֤ջ��Ϊ��


	���ף����ܷ����һ��������ʵ��ջ��
*/

/*===================================================*/

/*
	���� ���� ��ͷ
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

// ���� �ڵ�
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QueueNode;

// ���� ͷβָ��
typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
	//int size;
}Queue;


// ��ʼ������
void QueueInit(Queue* q);

// ��β�����
void QueuePush(Queue* q, QDataType data);

// ��ͷ������
void QueuePop(Queue* q);

// ��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* q);

// ��ȡ���ж�βԪ��
QDataType QueueBack(Queue* q);

// ��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* q);

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* q);

// ���ٶ���
void QueueDestroy(Queue* q);






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

/*===================================================*/

/*
	˼·��
		��������ʵ��

		����ȥ�ı���еĽṹ�����緭ת��ֻ��ȥ���ö����ṩ�Ľӿں���

			  ��ͷ                         ��β
			  ��                              ��

			A ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		���� ��                                �� ���
			  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

			B ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		���� ��                                �� ���
			  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


		������

				A ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� �� 1 2 3 4                        �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

				B ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� ��                                �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		������ A���� ת�����ݵ� B���У���һ��

				A ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� �� 4                              �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

				B ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� �� 1 2 3                          �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		�ٽ� A���� ���һ������ ����

				A ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� ��                                �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

				B ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� �� 1 2 3                          �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		���ٴ� �����ݣ�����Ϊ�յĶ�����

				A ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� ��                                �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

				B ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� �� 1 2 3 5 6                      �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		������ 

				A ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� �� 1 2 3 5                        �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

				B ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			���� �� 6                              �� ���
				  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		����˼·
			1. �����ݣ�����Ϊ�յĶ����룬������һ������Ϊ�ա�
			2. �����ݣ����γ���ͷ�����ݣ�ת�Ƶ���һ�����б��棬�����һ�����ݣ�Pop�����һ�����ݡ�
*/

typedef struct
{
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate()
{
	/*
		����д�����Ұָ��
		�������������������

		MyStack st;
		return &st;
	*/

	// ���Ƽ�ʹ��ȫ�ֱ���
	MyStack* st = (MyStack*)malloc(sizeof(MyStack));
	if (st == NULL)
	{
		exit(0);
	}

	// ��ʼ������
	QueueInit(&st->q1);
	QueueInit(&st->q2);

	return st;
}

void myStackPush(MyStack* obj, int x)
{
	// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
	if (!QueueEmpty(&obj->q1))
	{
		// q1 ��Ϊ�վ����������
		// ��β�����
		QueuePush(&obj->q1, x);
	}
	else
	{
		// ��β�����
		QueuePush(&obj->q2, x);
	}
}

int myStackPop(MyStack* obj)
{
	// ���� q1 Ϊ�գ�q2 ��Ϊ��
	Queue* emptyQ = &obj->q1;
	Queue* nonemptyQ = &obj->q2;

	// ������ˣ��͸���
	// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
	if (!QueueEmpty(&obj->q1))
	{
		// q1 ��Ϊ��
		emptyQ = &obj->q2;
		nonemptyQ = &obj->q1;
	}

	// ת�����ݣ���һ������
	while (QueueSize(nonemptyQ) > 1)
	{
		// ��β�����     // ��ȡ����ͷ��Ԫ��
		QueuePush(emptyQ, QueueFront(nonemptyQ));

		// ��ͷ������
		QueuePop(nonemptyQ);
	}

	// ��ȡ����ͷ��Ԫ��
	int top = QueueFront(nonemptyQ);

	// ��ͷ������
	QueuePop(nonemptyQ);

	return top;
}

int myStackTop(MyStack* obj)
{
	// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
	if (!QueueEmpty(&obj->q1))
	{
		// q1 ��Ϊ��
		
		// ��ȡ���ж�βԪ��
		return QueueBack(&obj->q1);
	}
	else
	{
		// ��ȡ���ж�βԪ��
		return QueueBack(&obj->q2);
	}
}

bool myStackEmpty(MyStack* obj)
{
	// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj)
{
	/*
		MyStack* obj
			q1
				head
				tail
			q2
				head
				tail
	*/
	
	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);
	free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/

int main()
{
	MyStack* st = myStackCreate();
	myStackPush(st, 1);
	myStackPush(st, 2);
	myStackPush(st, 3);
	myStackPush(st, 4);

	myStackPop(st);
	myStackPop(st);

	myStackFree(st);

	return 0;
}