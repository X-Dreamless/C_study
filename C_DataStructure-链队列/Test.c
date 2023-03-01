
/*
	����ֵ�Ͷ��嵥��ֵ
	���ֵ�Ͷ���ṹ

	Ҫ�ı�ʲô �ʹ����ĵ�ַ
*/

#include "Queue.h"


void test1()
{
	Queue q;

	// ��ʼ������
	QueueInit(&q);

	// ��β�����
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	// ��ͷ������
	QueuePop(&q);
	QueuePop(&q);

	// ��ȡ����ͷ��Ԫ��
	printf("%d\n", QueueFront(&q));

	// ��ȡ���ж�βԪ��
	printf("%d\n", QueueBack(&q));

	// ��ȡ��������ЧԪ�ظ���
	printf("%d\n", QueueSize(&q));

	// ���ٶ���
	QueueDestroy(&q);
}

void test2()
{
	Queue q;

	// ��ʼ������
	QueueInit(&q);

	// ��β�����
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	// ������
	while (!QueueEmpty(&q))
	{
		QDataType front = QueueFront(&q);

		printf("%d ", front);

		QueuePop(&q);
	}
}

int main()
{
	//test1();

	test2();

	return 0;
}