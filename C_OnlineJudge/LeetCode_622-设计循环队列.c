
/*
	622. ���ѭ������ https://leetcode.cn/problems/design-circular-queue/

	�Ѷȣ��е�

	������ѭ������ʵ�֡� ѭ��������һ���������ݽṹ����������ֻ��� FIFO���Ƚ��ȳ���ԭ���Ҷ�β�������ڶ���֮�����γ�һ��ѭ������Ҳ����Ϊ�����λ���������

	ѭ�����е�һ���ô������ǿ��������������֮ǰ�ù��Ŀռ䡣��һ����ͨ�����һ��һ���������ˣ����ǾͲ��ܲ�����һ��Ԫ�أ���ʹ�ڶ���ǰ�����пռ䡣����ʹ��ѭ�����У�������ʹ����Щ�ռ�ȥ�洢�µ�ֵ��


	���ʵ��Ӧ��֧�����²�����
		MyCircularQueue(k): �����������ö��г���Ϊ k ��
		Front: �Ӷ��׻�ȡԪ�ء��������Ϊ�գ����� -1 ��
		Rear: ��ȡ��βԪ�ء��������Ϊ�գ����� -1 ��
		enQueue(value): ��ѭ�����в���һ��Ԫ�ء�����ɹ������򷵻��档
		deQueue(): ��ѭ��������ɾ��һ��Ԫ�ء�����ɹ�ɾ���򷵻��档
		isEmpty(): ���ѭ�������Ƿ�Ϊ�ա�
		isFull(): ���ѭ�������Ƿ�������


	ʾ����
		MyCircularQueue circularQueue = new MyCircularQueue(3); // ���ó���Ϊ 3
		circularQueue.enQueue(1);  // ���� true
		circularQueue.enQueue(2);  // ���� true
		circularQueue.enQueue(3);  // ���� true
		circularQueue.enQueue(4);  // ���� false����������
		circularQueue.Rear();  // ���� 3
		circularQueue.isFull();  // ���� true
		circularQueue.deQueue();  // ���� true
		circularQueue.enQueue(4);  // ���� true
		circularQueue.Rear();  // ���� 4


	��ʾ��
		���е�ֵ���� 0 �� 1000 �ķ�Χ�ڣ�
		���������� 1 �� 1000 �ķ�Χ�ڣ�
		�벻Ҫʹ�����õĶ��п⡣
*/
/*
	˼·������ʵ��
		ѭ������

			������չ�˽�һ�£�ʵ����������ʱ����ʹ��һ�ֶ��н�ѭ�����С�
			�����ϵͳ�γ̽���������������ģ��ʱ���Ծͻ�ʹ��ѭ�����С�
			���ζ��п���ʹ������ʵ�֣�Ҳ����ʹ��ѭ������ʵ�֡�

						��
					[ ][ ][ ]
				 [ ]         [ ] �� ����β
				��[ ]         [ ]��
				 [ ]         [ ] �� ����ͷ
					[ ][ ][ ]
						��

			�յ�ѭ������
						��
					[ ][ ][ ]
				 [ ]         [ ] �� ����β �� ����ͷ
				��[ ]         [ ]��
				 [ ]         [ ]
					[ ][ ][ ]
						��

			����ѭ������
						��
					[i][j][k]
				 [h]         [ ] �� ����β
				��[g]         [a] �� ����ͷ
				 [f]         [b]
					[e][d][c]
						��

			Ϊ����ʹ�� ����.ͷ = ����.β �������ǿջ�������
			���ǳ�����Ϊ���� ��ͼ ʱ�������Ϊ������
			��ʱ β+1 = ͷ

			�ص�
				ѭ�����У�����ʹ������ʵ�ֻ�������ʵ�֣���Ҫ�࿪һ���ռ䣬
				Ҫ��k�����ݵ�ѭ�����У�Ҫ��k+1���ռ䣬�����޷�ʵ���пպ�������

				���� ѭ������ ����(β+1)%(k+1) == ͷ
				���� ѭ������ ����β->next == ͷ
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct
{
	int* arr;	// 
	int front;	// ͷ
	int tail;	// β
	int k;		// ѭ�����д�С
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k);
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);
bool myCircularQueueDeQueue(MyCircularQueue* obj);
int myCircularQueueFront(MyCircularQueue* obj);
int myCircularQueueRear(MyCircularQueue* obj);
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);
void myCircularQueueFree(MyCircularQueue* obj);

MyCircularQueue* myCircularQueueCreate(int k)
{
	MyCircularQueue* cq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	if (cq == NULL)
	{
		exit(0);
	}

	cq->arr = (int*)malloc(sizeof(int) * (k + 1));
	cq->front = 0;
	cq->tail = 0;
	cq->k = k;

	return cq;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
	if (myCircularQueueIsFull(obj))
	{
		// ѭ��������
		return false;
	}

	obj->arr[obj->tail] = value;
	obj->tail++;

	// ���������β���� %= ������ͷ
	obj->tail %= (obj->k + 1);

	return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
	{
		// ѭ�����п�
		return false;
	}

	obj->front++;

	// ���������β���� %= ������ͷ
	obj->front %= (obj->k + 1);

	return true;
}

int myCircularQueueFront(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
	{
		// ѭ�����п�
		return -1;
	}

	return obj->arr[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
	{
		// ѭ�����п�
		return -1;
	}

	/*
		��ȡ��βԪ��ʱ ������������

			tail  front
			 ��      ��
			[ ]    [1]    [2]    [3]    [4]

			tail �����ǰһ����

			// ����2
			int i = (obj->tail + obj->k) % (obj->k + 1);
			return obj->arr[i];
	*/

	// ����1
	if (obj->tail == 0)
	{
		return obj->arr[obj->k];
	}
	else
	{
		return obj->arr[obj->tail - 1];
	}
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	return obj->front == obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
	return (obj->tail + 1) % (obj->k + 1) == obj->front;
}

void myCircularQueueFree(MyCircularQueue* obj)
{
	free(obj->arr);
	free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/

int main()
{

	return 0;
}