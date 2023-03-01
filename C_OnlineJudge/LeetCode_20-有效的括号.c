
/*
	20. ��Ч������

	�Ѷȣ���

	����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��

	��Ч�ַ��������㣺
		�����ű�������ͬ���͵������űպϡ�
		�����ű�������ȷ��˳��պϡ�
		ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�


	ʾ�� 1��
		���룺s = "()"
		�����true

	ʾ�� 2��
		���룺s = "()[]{}"
		�����true

	ʾ�� 3��
		���룺s = "(]"
		�����false

	��ʾ��
		1 <= s.length <= 104
		s �������� '()[]{}' ���
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef char STDataType;

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











bool isValid(char* s)
{
	/*
		˼·1��ջ
			������ ��ջ
			������ ��ջ ƥ������
	*/

	Stack st;

	// ��ʼ��ջ
	StackInit(&st);

	while (*s)
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			// ��ջ
			StackPush(&st, *s);
			
			s++;
		}
		else
		{
			// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
			if (StackEmpty(&st))
			{
				// ����ջ
				StackDestroy(&st);

				// ���������ţ�����ջ�գ�˵��ǰ��û�������ţ�û��ƥ�� ����false
				return false;
			}

			// ��ȡջ��Ԫ��
			STDataType top = StackTop(&st);

			// ��ջ
			StackPop(&st);

			if (
					(*s == ')' && top != '(') ||
					(*s == ']' && top != '[') ||
					(*s == '}' && top != '{')
				)
			{
				// ����ջ
				StackDestroy(&st);

				return false;
			}
			else
			{
				s++;
			}
		}
	}

	// ���ջ���ǿգ�˵��ջ�л���������δ�� û��ƥ�� ����false
	// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
	bool ret = StackEmpty(&st);

	// ����ջ
	StackDestroy(&st);

	return ret;
}

int main()
{
	bool ret = isValid("()[]{}");

	return 0;
}