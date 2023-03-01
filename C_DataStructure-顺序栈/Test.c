
#include "Stack.h"

void test1()
{
	Stack st;

	// ��ʼ��ջ
	StackInit(&st);

	// ��ջ
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	// ��ջ
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);

	// ��ȡջ��Ԫ��
	printf("%d\n", StackTop(&st));

	// ����ջ
	StackDestroy(&st);
}

void test2()
{
	Stack st;

	// ��ʼ��ջ
	StackInit(&st);

	// ��ջ
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	// ����ջ ����д���ܷ���ջ������
	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}

	// ����ջ
	StackDestroy(&st);
}

int main()
{
	//test1();

	test2();

	return 0;
}