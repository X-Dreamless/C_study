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
							size_t capacity;		// �����ռ�Ĵ�С
						}SeqList;


						array       size    capacity
						��             ��     ��
						[0][1][2][3][4][ ][ ] => �ռ䲻��������


			2.2 �ӿ�ʵ�֣�

				��̬˳���ֻ������ȷ��֪����Ҫ��������ݵĳ�����
				��̬˳���Ķ������鵼��N�����ˣ��ռ俪�����˷ѣ������˲����á�
				������ʵ�л�������ʹ�ö�̬˳���������Ҫ��̬�ķ���ռ��С��
				������������ʵ�ֶ�̬˳���


			2.3 �������������

				1. ԭ���Ƴ����������е�Ԫ��val��Ҫ��ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1)��https://leetcode.cn/problems/remove-element/
				2. ɾ�����������е��ظ��https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
				3. �ϲ������������顣https://leetcode.cn/problems/merge-sorted-array/


			OJ�����ԭ��
				Online Judge

				1. IO��
					��Ҫֱ��дͷ�ļ�������......
					����������Ҫ�� scanf ��ȡ
					�����printf���

				2. �ӿ���
					ֻ���˺�������Ҫʵ�ֺ���
					����������ͨ������������
					�����һ��ͨ������ֵ�ã���������Ͳ���

					int* singleNumbers(int* nums, int numsSize, int* returnSize);
																	 ����Ͳ���


			��ʾ&����
				˳���_��̬();
				˳���_��̬();
				˳���_�ӿ�ʵ��();
				˳���_�ӿ�ʵ��_ʹ��();
				˳���_�������������();

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
		int capacity;	// �����ռ�Ĵ�С
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
	int capacity;	// �����ռ�Ĵ�С
}SL;

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

	// ˳������
	printf("�±�Ϊ %d\n", SeqListFind(&sl, 60));

	// ˳�����posλ�ò���x
	SeqListInsert(&sl, 0, 999);

	SeqListPrint(&sl);

	// ˳���ɾ��posλ�õ�ֵ
	SeqListErase(&sl, 2);

	SeqListPrint(&sl);


	// ˳�������
	SeqListDestory(&sl);

	/*
		ͷβ ɾ�� ���� ���Ը��� SeqListInsert() �� SeqListErase()
	*/

	n2(2, "-------- ", 4);
}

void ˳���_�ӿ�ʵ��_�˵�()
{
	printf("******** ******** ******** ******** ********\n");
	printf("******** 1.ͷ��              2.ͷɾ ********\n");
	printf("******** 3.β��              4.βɾ ********\n");
	printf("******** 5.����              6.��ӡ ********\n");
	printf("******** 7.posλ�ò��� 8.posλ��ɾ�� ********\n");
	printf("********           0.�˳�           ********\n");
	printf("******** ******** ******** ******** ********\n");
}

void ˳���_�ӿ�ʵ��_ʹ��()
{
	SL sl;

	// ˳����ʼ��
	SeqListInit(&sl);

	int ���� = 1;
	int x;
	int pos;

	while (����)
	{
		˳���_�ӿ�ʵ��_�˵�();

		printf("ѡ��>");
		scanf("%d", &����);

		switch (����)
		{
		case 1:
			printf("ͷ��+L>");
			scanf("%d", &x);
			SeqListPushFront(&sl, x);
			break;
		case 2:
			printf("ͷɾ-L<\n");
			SeqListPopFront(&sl);
			break;
		case 3:
			printf("β��L+>");
			scanf("%d", &x);
			SeqListPushBack(&sl, x);
			break;
		case 4:
			printf("βɾL-<\n");
			SeqListPopBack(&sl);
			break;
		case 5:
			printf("����L?>");
			scanf("%d", &x);
			printf("�±�Ϊ %d\n", SeqListFind(&sl, x));
			break;
		case 6:
			SeqListPrint(&sl);
			break;
		case 7:
			printf("λ��+L+>");
			scanf("%d", &pos);

			printf("ֵ+L+>");
			scanf("%d", &x);

			SeqListInsert(&sl, pos, x);
			break;
		case 8:
			printf("λ��-L->");
			SeqListErase(&sl, x);
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("�������\n");
			break;
		}
	}

	SeqListDestory(&sl);
}

/*================================================================================================================================================*/

int �Ƴ�Ԫ��(int* nums, int numsSize, int val)
{
	/*
		����һ������ nuns ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
		��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
		Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

		˵��:
			Ϊʲô������ֵ��������������Ĵ���������?
			��ע�⣬������������ ���� ��ʽ���ݵģ�����ζ���ں������޸�����������ڵ������ǿɼ��ġ�

		����������ڲ���������:
			// nums ���ԡ����á���ʽ���ݵġ�Ҳ����˵������ʵ�����κο���
			int len = removeElement(nums, val);

			// �ں������޸�����������ڵ������ǿɼ��ġ�
			// ������ĺ������صĳ���, �����ӡ�������� �ó��ȷ�Χ�� ������Ԫ�ء�
			for (int i = 0; i < len; i++) {
				print(nums[i]);
			}

		ʾ�� 1��
			���룺nums = [3,2,2,3], val = 3
			�����2, nums = [2,2]
			���ͣ�����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2���㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء����磬�������ص��³���Ϊ 2 ���� nums = [2,2,3,3] �� nums = [2,2,0,0]��Ҳ�ᱻ������ȷ�𰸡�
		
		ʾ�� 2��
			���룺nums = [0,1,2,2,3,0,4,2], val = 2
			�����5, nums = [0,1,4,0,3]
			���ͣ�����Ӧ�÷����µĳ��� 5, ���� nums �е�ǰ���Ԫ��Ϊ 0, 1, 3, 0, 4��ע�������Ԫ�ؿ�Ϊ����˳���㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

		��ʾ��
			0 <= nums.length <= 100
			0 <= nums[i] <= 50
			0 <= val <= 100

		��Դ�����ۣ�LeetCode��
		���ӣ�https://leetcode.cn/problems/remove-element
		����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
	*/
	/*
		˼·1��
			���룺nums = [3,2,2,3], val = 3
			�����2, nums = [2,2]

			���������Ԫ�ص���val
				 ��
				[3][2][2][3]

			�����������ǰ�ƶ�һλ
				 ��
				[2][2][3][ ]

			���Ԫ�ز�����val��val�����һλ
					��
				[2][2][3][ ]

			ʱ�临�Ӷ�O(N^2)
			�����������д󲿷ֻ�ȫ��Ԫ�ص���val


		˼·2��
			���룺nums = [3,2,2,3], val = 3
			�����2, nums = [2,2]

			���� ��ʱ ����
				[ ][ ][ ][ ]

			����nums����
				 ��
				[3][2][2][3]

			�Ѳ���val��ֵ�ŵ� ��ʱ ����
				[3][2][2][3]
				��
				[2][2][ ][ ]

			�ٰ� ��ʱ �����ֵ������ȥ
				[2][2][ ][ ]
				��
				[2][2][ ][ ]

			ʱ�临�Ӷ�O(2N)
			�ռ临�Ӷ�O(N)

			�ռ任ʱ��


		˼·3��
			���룺nums = [3,2,2,3], val = 3
			�����2, nums = [2,2]

			ʱ�临�Ӷ� �Ż���O(N)
			�ռ临�Ӷ� �Ż���O(1)

			˫ָ��

			��������������src �� dst

			src��nums�����в�����val��ֵ���ŵ�dstָ���λ��
				src��
				[3][2][2][3]
				dst

			����val��src++
				   src��
				[3][2][2][3]
				dst

			������val���ŵ�dstָ���λ��
				   src��
				[2][2][2][3]
				dst

			��src++��dst++
					  src��
				[2][2][2][3]
				   dst
	*/

	int src = 0;
	int dst = 0;

	while (src < numsSize)
	{
		if (nums[src] != val)
		{
			nums[dst] = nums[src];
			src++;
			dst++;
		}
		else
		{
			src++;
		}
	}

	return dst;
}

void ˳���_�������������()
{
	int arr[] = { 3,2,2,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	�Ƴ�Ԫ��(arr, sz, 3);
}

/*================================================================================================================================================*/

int main()
{
	˳���_��̬();
	˳���_��̬();
	//˳���_�ӿ�ʵ��();// �� ˳���_�ӿ�ʵ��_ʹ��(); ���
	˳���_�ӿ�ʵ��_ʹ��();
	˳���_�������������();

	return 0;
}

/*================================================================================================================================================*/
/**************************************************************************************************************************************************/