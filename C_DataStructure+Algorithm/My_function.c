
/*
	printf("����\n");
	n2(2, "-------- ", 4);
*/

#include "My_function.h"

void n2(int ���д���, char* ���з���, int ���Ÿ���)
{
	int i = 0;

	if (���з��� != NULL && ���Ÿ��� > 0)
	{
		printf("\n");
		for (i = 0; i < ���Ÿ���; i++)
		{
			printf("%s", ���з���);
		}
	}

	for (i = 0; i < ���д���; i++)
	{
		printf("\n");
	}
}

int �ж��ļ��Ƿ����(char* �ļ�·��)
{
	FILE* pfff = fopen(�ļ�·��, "r");

	if (pfff == NULL)
	{
		return 0;
	}

	fclose(pfff);
	pfff = NULL;

	return 1;
}

struct ������* ��ʼ��������()
{
	struct ������* n1 = (struct ������*)malloc(sizeof(struct ������));
	struct ������* n2 = (struct ������*)malloc(sizeof(struct ������));
	struct ������* n3 = (struct ������*)malloc(sizeof(struct ������));
	struct ������* n4 = (struct ������*)malloc(sizeof(struct ������));

	n1->val = 7;
	n2->val = 7;
	n3->val = 7;
	n4->val = 7;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	return n1;
}