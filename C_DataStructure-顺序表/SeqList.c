
#include "SeqList.h"

// ������ɾ��Ľӿ�
// ˳����ʼ��
void SeqListInit(SL* psl)
{
	psl->arr = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

// ˳�������
void SeqListDestory(SL* psl)
{
	free(psl->arr);
	psl->arr = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

// ˳����ӡ
void SeqListPrint(SL* psl)
{
	int i = 0;
	for (i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->arr[i]);
	}
	printf("\n");
}

// ���ռ䣬������ˣ���������
void SeqListCheckCapacity(SL* psl)
{
	// �жϿռ��Ƿ����
	if (psl->size == psl->capacity)
	{
		// �ռ䲻�� ����
		// ����2�����У�����0*2����0
		// int ��capacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
		// 
		// void* realloc (void* ptr, size_t size);
		// �⺯��realloc�����ptr��NULL���ͺ� �⺯��malloc ����һ����
		if (psl->capacity == 0)
		{
			int ��capacity = 4;

			//SLDataType* tmp = (SLDataType*)realloc(psl->arr, ��capacity);
			// ���� size_t size ���ֽڣ�����Ҫ��һ������
			SLDataType* tmp = (SLDataType*)realloc(psl->arr, ��capacity * sizeof(SLDataType));
			if (tmp == NULL)
			{
				printf("�޷�����\n");
				exit(-1);
			}

			// ���ݳɹ�
			psl->arr = tmp;
			psl->capacity = ��capacity;

		}
		else
		{
			int ��capacity = psl->capacity * 2;

			//SLDataType* tmp = (SLDataType*)realloc(psl->arr, ��capacity);
			// ���� size_t size ���ֽڣ�����Ҫ��һ������
			SLDataType* tmp = (SLDataType*)realloc(psl->arr, ��capacity * sizeof(SLDataType));
			if (tmp == NULL)
			{
				printf("�޷�����\n");
				exit(-1);
			}

			// ���ݳɹ�
			psl->arr = tmp;
			psl->capacity = ��capacity;
		}
	}
}

// ˳���β��
void SeqListPushBack(SL* psl, SLDataType x)
{
	SeqListCheckCapacity(psl);

	// ��������
	psl->arr[psl->size] = x;
	psl->size++;
}

// ˳���βɾ
void SeqListPopBack(SL* psl)
{
	if (psl->size > 0)
	{
		// ������ �ͷ��ʲ������������
		psl->size--;
	}
}

// ˳���ͷ��
void SeqListPushFront(SL* psl, SLDataType x)
{
	/*
		�����ݴӺ���ǰ ��� ����ƶ�һλ
			[1][2][3][4][5]
						end
						 ��
			[1][2][3][4][ ][5]
			 ��
			[ ][1][2][3][4][5]
	*/

	SeqListCheckCapacity(psl);

	// �ƶ�ǰ ���һ�����ݵ��±�
	int end = psl->size - 1;

	// �ƶ�����
	while (end >= 0)
	{
		psl->arr[end + 1] = psl->arr[end];
		end--;
	}

	// ��������
	psl->arr[0] = x;
	psl->size++;
}

// ˳���ͷɾ
void SeqListPopFront(SL* psl)
{
	/*
		�ѵڶ������ݿ�ʼ ��� ��ǰ�ƶ�һλ
		[1][2][3][4][5]
		   begin
		    ��
		[2][ ][3][4][5]
		             ��
		[2][3][4][5][ ]
	*/

	if (psl->size > 0)
	{
		// �ƶ�ǰ �ڶ������ݵ��±�
		int begin = 1;

		// �ƶ�����
		while (begin < psl->size)
		{
			psl->arr[begin - 1] = psl->arr[begin];
			begin++;
		}

		// ������ �ͷ��ʲ������������
		psl->size--;
	}
}

// ˳������
int SeqListFind(SL* psl, SLDataType x)
{
	// ����һ�����
	int i = 0;
	for (i = 0; i < psl->size; i++)
	{
		if (psl->arr[i] == x)
		{
			return i;
		}
	}

	return -1;
}

// ˳�����posλ�ò���x
void SeqListInsert(SL* psl, int pos, SLDataType x)
{
	/*
		      pos   end
		       ��     ��
		[0][1][2][3][4]
	*/

	// �ж��Ƿ�Խ��
	if (pos > psl->size || pos < 0)
	{
		return;
	}

	SeqListCheckCapacity(psl);

	int end = psl->size - 1;

	// �ƶ�����
	while (end >= pos)
	{
		psl->arr[end + 1] = psl->arr[end];
		end--;
	}

	// ��������
	psl->arr[pos] = x;
	psl->size++;
}

// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SL* psl, size_t pos)
{
	/*
		      pos
		       ��
		[0][1][2][3][4]
		          ��
		        begin
	*/

	// �ж��Ƿ�Խ��
	if (pos >= psl->size || pos < 0)
	{
		return;
	}

	int begin = pos + 1;
	while (begin < psl->size)
	{
		psl->arr[begin - 1] = psl->arr[begin];
		begin++;
	}

	psl->size--;
}