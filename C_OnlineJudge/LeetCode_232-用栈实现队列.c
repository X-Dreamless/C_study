
/*
	232. ��ջʵ�ֶ��� https://leetcode.cn/problems/implement-queue-using-stacks/

	�Ѷȣ���

	�����ʹ������ջʵ�������ȳ����С�����Ӧ��֧��һ�����֧�ֵ����в�����push��pop��peek��empty����


	ʵ�� MyQueue �ࣺ
		void push(int x) ��Ԫ�� x �Ƶ����е�ĩβ
		int pop() �Ӷ��еĿ�ͷ�Ƴ�������Ԫ��
		int peek() ���ض��п�ͷ��Ԫ��
		boolean empty() �������Ϊ�գ����� true �����򣬷��� false


	˵����
		�� ֻ�� ʹ�ñ�׼��ջ���� ���� Ҳ����ֻ�� push to top, peek/pop from top, size, �� is empty �����ǺϷ��ġ�
		����ʹ�õ�����Ҳ��֧��ջ�������ʹ�� list ���� deque��˫�˶��У���ģ��һ��ջ��ֻҪ�Ǳ�׼��ջ�������ɡ�


	ʾ�� 1��
		���룺
			["MyQueue", "push", "push", "peek", "pop", "empty"]
			[[], [1], [2], [], [], []]

		�����
			[null, null, null, 1, 1, false]


	���ͣ�
		MyQueue myQueue = new MyQueue();
		myQueue.push(1); // queue is: [1]
		myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
		myQueue.peek(); // return 1
		myQueue.pop(); // return 1, queue is [2]
		myQueue.empty(); // return false


	��ʾ��
		1 <= x <= 9
		������ 100 �� push��pop��peek �� empty
		�������в���������Ч�� �����磬һ���յĶ��в������ pop ���� peek ������


	���ף�
		���ܷ�ʵ��ÿ��������̯ʱ�临�Ӷ�Ϊ O(1) �Ķ��У����仰˵��ִ�� n ����������ʱ�临�Ӷ�Ϊ O(n) ����ʹ����һ���������ܻ��ѽϳ�ʱ�䡣
*/

/*===================================================*/

/*===================================================*/

/*
	˼·��
		����ջʵ��

		  ��        ��
		A ��      B ��
		| 4 |    |   | ջ��
		| 3 |    |   |
		| 2 |    |   |
		| 1 |    |   | ջ��

		�����ݣ����ݷ��� Aջ

			  ��        ��
			A ��      B ��
			| 4 |    |   | ջ��
			| 3 |    |   |
			| 2 |    |   |
			| 1 |    |   | ջ��

		�����ݣ�Aջ ���� �ƶ��� Bջ��Bջ ��ջ

			  ��        ��
			A ��      B ��
			|   |    | 1 | ջ��
			|   |    | 2 |
			|   |    | 3 |
			|   |    | 4 | ջ��

		�ٴ������ݣ����ݷ��� Aջ

			  ��        ��
			A ��      B ��
			|   |    |   | ջ��
			|   |    |   |
			| 6 |    |   |
			| 5 |    |   | ջ��

		�ٴγ����ݣ�Aջ ���� �ƶ��� Bջ��Bջ ��ջ

			  ��        ��
			A ��      B ��
			|   |    |   | ջ��
			|   |    |   |
			|   |    | 5 |
			|   |    | 6 | ջ��

		ע�⣺
			Bջ ���ݳ��պ��ٽ� Aջ �����ƶ�����
*/

/*===================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* arr;
	int top;
	int capacity;
}Stack;

// ��ʼ��ջ
void StackInit(Stack* ps);

// ��ջ
void StackPush(Stack* ps, STDataType data);

// ��ջ
void StackPop(Stack* ps);

// ��ȡջ��Ԫ��
STDataType StackTop(Stack* ps);

// ��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps);

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
bool StackEmpty(Stack* ps);

// ����ջ
void StackDestroy(Stack* ps);





// ��ʼ��ջ
void StackInit(Stack* ps)
{
	assert(ps);

	ps->arr = NULL;
	ps->top = 0;
	ps->capacity = 0;

	/*
		��ʼ��ʱ
			top ��0 ����ζ�� top ָ�� ջ������ ����һ����		�ȷ�������++
			top ��-1����ζ�� top ָ�� ջ�����ݡ�				��++�ٷ�����
	*/
}

// ����ջ
void StackDestroy(Stack* ps)
{
	assert(ps);

	free(ps->arr);
	ps->arr = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

// ��ջ
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);

	// �ж� ջ �Ƿ���
	if (ps->top == ps->capacity)
	{
		// ����
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->arr, sizeof(STDataType) * newCapacity);
		if (tmp == NULL)
		{
			exit(-1);
		}

		ps->arr = tmp;
		ps->capacity = newCapacity;
	}

	ps->arr[ps->top] = data;
	ps->top++;
}

// ��ջ
void StackPop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	ps->top--;
}

// ��ȡջ��Ԫ��
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->arr[ps->top - 1];
}

// ��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->top;
}

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
bool StackEmpty(Stack* ps)
{
	assert(ps);

	return ps->top == 0;
}

/*===================================================*/

typedef struct {
	Stack pushST;
	Stack popST;
} MyQueue;


MyQueue* myQueueCreate()
{
	MyQueue* q = (MyQueue*)malloc(sizeof(MyQueue));
	if (q == NULL)
	{
		exit(0);
	}

	// ��ʼ��ջ
	StackInit(&q->pushST);
	StackInit(&q->popST);

	return q;
}

void myQueuePush(MyQueue* obj, int x)
{
	// ��ջ
	StackPush(&obj->pushST, x);
}

int myQueuePop(MyQueue* obj)
{
	/*
		popST ������ֱ�ӳ�
		popST û����Ҫ����
	*/

	// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
	if (StackEmpty(&obj->popST))
	{
		// popST û����Ҫ����

		// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
		while (!StackEmpty(&obj->pushST))
		{
			// ��ջ                // ��ȡջ��Ԫ��
			StackPush(&obj->popST, StackTop(&obj->pushST));

			// ��ջ
			StackPop(&obj->pushST);
		}
	}

	            // ��ȡջ��Ԫ��
	int front = StackTop(&obj->popST);

	// ��ջ
	StackPop(&obj->popST);

	return front;
}

int myQueuePeek(MyQueue* obj)
{
	/*
		popST ������ֱ�ӳ�
		popST û����Ҫ����
	*/

	// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
	if (StackEmpty(&obj->popST))
	{
		// popST û����Ҫ����

		// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
		while (!StackEmpty(&obj->pushST))
		{
			// ��ջ                // ��ȡջ��Ԫ��
			StackPush(&obj->popST, StackTop(&obj->pushST));

			// ��ջ
			StackPop(&obj->pushST);
		}
	}

	       // ��ȡջ��Ԫ��
	return StackTop(&obj->popST);
}

bool myQueueEmpty(MyQueue* obj)
{
	// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
	return StackEmpty(&obj->pushST) && StackEmpty(&obj->popST);
}

void myQueueFree(MyQueue* obj)
{
	/*
		obj
			pushST
				[ ][ ][ ][ ]

			popST
				[ ][ ][ ][ ]
	*/

	// ����ջ
	StackDestroy(&obj->pushST);
	StackDestroy(&obj->popST);

	free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/

int main()
{
	MyQueue* q = myQueueCreate();
	myQueuePush(q, 1);
	myQueuePush(q, 2);
	myQueuePush(q, 3);
	myQueuePush(q, 4);

	myQueuePop(q);
	myQueuePop(q);

	myQueueFree(q);

	return 0;
}