/*
	Lesson3--˳��������

		����Ŀ��
			1. ���Ա�
			2. ˳���
			3. ����
			4. ˳����������������ϵ

		======== ======== ======== ======== ======== ======== ========
		-------- -------- -------- -------- -------- -------- --------

		1. ���Ա�

			���Ա�linear list����n��������ͬ���Ե�����Ԫ�ص��������С�
			���Ա���һ����ʵ���й㷺ʹ�õ����ݽṹ�����������Ա�˳�������ջ�����С��ַ���...

			���Ա����߼��������Խṹ��Ҳ��˵��������һ��ֱ�ߡ�����������ṹ�ϲ���һ���������ģ�
			���Ա��������ϴ洢ʱ��ͨ�����������ʽ�ṹ����ʽ�洢��

			˳���
				[1][2][3][4][5][6][7]
					

			����
				|data|   ��|data|   ��|data|   ��|data|
				|----| �J |----| �J |----| �J |----|
				|next|��   |next|��   |next|��   |next|

				[data]
				[next] �� [data]
						 [next] �� [data]
								  [next] �� [data]
										   [next]

		-------- -------- -------- -------- -------- -------- --------

		2. ˳���

			2.1����ṹ

				˳�������һ�������ַ�����Ĵ洢��Ԫ���δ洢����Ԫ�ص����Խṹ��һ������²�������洢��
				��������������ݵ���ɾ��ġ�
				(˳���������飬����������Ļ����ϣ�Ҫ������ ��ͷ��ʼ �����洢��������Ծ���)

				˳���һ����Է�Ϊ��
					1. ��̬˳���ʹ�ö�������洢��

						// ˳���ľ�̬�洢
						#define N 7
						typedef int SLDataType;

						typedef struct SeqList
						{
							SLDataType array[N];	// ��������
							size_t size;			// ��Ч���ݵĸ���
						}SeqList;


						array       size    N
						��             ��     ��
						[0][1][2][3][4][ ][ ]


					2. ��̬˳���ʹ�ö�̬���ٵ�����洢��

						// ˳���Ķ�̬�洢
						typedef struct SeqList
						{
							SLDataType* array;		// ָ��̬���ٵ�����
							size_t size;			// ��Ч���ݸ���
							size_t capicity;		// �����ռ�Ĵ�С
						}SeqList;


						array       size    capicity
						��             ��     ��
						[0][1][2][3][4][ ][ ] => �ռ䲻��������


			2.2 �ӿ�ʵ�֣�

				��̬˳���ֻ������ȷ��֪����Ҫ��������ݵĳ�����
				��̬˳���Ķ������鵼��N�����ˣ��ռ俪�����˷ѣ������˲����á�
				������ʵ�л�������ʹ�ö�̬˳���������Ҫ��̬�ķ���ռ��С��
				������������ʵ�ֶ�̬˳���


			��ʾ&����
				˳���_��̬();
				˳���_��̬();
				˳���_�ӿ�ʵ��();

		-------- -------- -------- -------- -------- -------- --------
		3. ����
		-------- -------- -------- -------- -------- -------- --------
		4. ˳����������������ϵ
		-------- -------- -------- -------- -------- -------- --------
		======== ======== ======== ======== ======== ======== ========
*/

#include "My_function.h"
#include <stdlib.h>

/**************************************************************************************************************************************************/
/*================================================================================================================================================*/

void ˳���_��̬()
{
	printf("˳���_��̬\n");

	/*--------------------------------*/

	// ˳���ľ�̬�洢
#define N 100
	struct SeqList
	{
		int a[N];// ��������
		int size;// ��Ч���ݵĸ���(��ʾ�����д洢�˶��ٸ�����)
	};

	/*--------------------------------*/

	// ���� ��SL �� SeqList ����д
	// ����˳������ʲô���;ʹ������ typedef double SLDataType;
	typedef int SLDataType;
	struct SeqList2
	{
		SLDataType a[N];// ��������
		int size;// ��Ч���ݵĸ���(��ʾ�����д洢�˶��ٸ�����)
	};

	// �ӿں���
	//void ˳���ĩβ��������(struct SeqList2* ps, int x);
	// ......

	/*--------------------------------*/

	// �޸�
	typedef struct SeqList3
	{
		SLDataType a[N];// ��������
		int size;// ��Ч���ݵĸ���(��ʾ�����д洢�˶��ٸ�����)
	}SL3;

	// �ӿں���
	//void ˳���ĩβ��������(SL3* ps, int x);
	// ......

	/*--------------------------------*/

	/*
		�ӿں��� ����������STL�ߵ�
		SeqListPushBack
	*/

#undef N

	n2(2, "-------- ", 4);
}

/*================================================================================================================================================*/

void ˳���_��̬()
{
	printf("˳���_��̬\n");

	// ˳���Ķ�̬�洢
	typedef int SLDataType;
	typedef struct SeqList
	{
		SLDataType* arr;// ָ��̬���ٵ�����
		int size;		// ��Ч���ݸ���(��ʾ�����д洢�˶��ٸ�����)
		int capicity;	// �����ռ�Ĵ�С
	}SL;

	n2(2, "-------- ", 4);
}

/*================================================================================================================================================*/

typedef int SLDataType;

// ˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType* arr;// ָ��̬���ٵ�����
	int size;		// ��Ч���ݸ���
	int capicity;	// �����ռ�Ĵ�С
}SL;

// ������ɾ��Ľӿ�
// ˳����ʼ��
void SeqListInit(SL* psl)
{
	psl->arr = NULL;
	psl->size = 0;
	psl->capicity = 0;
}

// ˳�������
void SeqListDestory(SL* psl)
{
	free(psl->arr);
	psl->arr = NULL;
	psl->size = 0;
	psl->capicity = 0;
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
	if (psl->size == psl->capicity)
	{
		// �ռ䲻�� ����
		// ����2�����У�����0*2����0
		// int ��capicity = psl->capicity == 0 ? 4 : psl->capicity * 2;
		// 
		// void* realloc (void* ptr, size_t size);
		// �⺯��realloc�����ptr��NULL���ͺ� �⺯��malloc ����һ����
		if (psl->capicity == 0)
		{
			int ��capicity = 4;

			//SLDataType* tmp = (SLDataType*)realloc(psl->arr, ��capicity);
			// ���� size_t size ���ֽڣ�����Ҫ��һ������
			SLDataType* tmp = (SLDataType*)realloc(psl->arr, ��capicity * sizeof(SLDataType));
			if (tmp == NULL)
			{
				printf("�޷�����\n");
				exit(-1);
			}

			// ���ݳɹ�
			psl->arr = tmp;
			psl->capicity = ��capicity;

		}
		else
		{
			int ��capicity = psl->capicity * 2;

			//SLDataType* tmp = (SLDataType*)realloc(psl->arr, ��capicity);
			// ���� size_t size ���ֽڣ�����Ҫ��һ������
			SLDataType* tmp = (SLDataType*)realloc(psl->arr, ��capicity * sizeof(SLDataType));
			if (tmp == NULL)
			{
				printf("�޷�����\n");
				exit(-1);
			}

			// ���ݳɹ�
			psl->arr = tmp;
			psl->capicity = ��capicity;
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

//// ˳������
//int SeqListFind(SeqList* psl, SLDataType x);

//// ˳�����posλ�ò���x
//void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);

//// ˳���ɾ��posλ�õ�ֵ
//void SeqListErase(SeqList* psl, size_t pos);

void ˳���_�ӿ�ʵ��()
{
	printf("˳���_�ӿ�ʵ��\n");

	SL sl;

	// ˳����ʼ��
	SeqListInit(&sl);

	// ˳���β��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	// ˳����ӡ
	SeqListPrint(&sl);

	// ˳���βɾ
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	//SeqListPopBack(&sl);

	SeqListPrint(&sl);

	// ˳���ͷ��
	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);
	SeqListPushFront(&sl, 40);
	SeqListPushFront(&sl, 50);
	SeqListPushFront(&sl, 60);
	SeqListPushFront(&sl, 70);
	SeqListPushFront(&sl, 80);
	SeqListPushFront(&sl, 90);

	SeqListPrint(&sl);

	// ˳���ͷɾ
	SeqListPopFront(&sl);
	SeqListPopFront(&sl);

	SeqListPrint(&sl);


	// ˳�������
	SeqListDestory(&sl);

	n2(2, "-------- ", 4);
}

/*================================================================================================================================================*/

int main()
{
	˳���_��̬();
	˳���_��̬();
	˳���_�ӿ�ʵ��();

	return 0;
}

/*================================================================================================================================================*/
/**************************************************************************************************************************************************/