/*
	
*/

#include "SeqList.h"

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

int main()
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
			scanf("%d", &pos);
			SeqListErase(&sl, pos);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	}

	SeqListDestory(&sl);

	return 0;
}