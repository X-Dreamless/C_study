
#include "define.h"

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

void test()
{
	if (�ж��ļ��Ƿ����("..\\�����ļ�����\\�ļ�99.txt") == 0)
	{
		return;
	}
	printf("�ļ�����");
}


int main()
{
	test();

	printf("%d", �ж��ļ��Ƿ����("..\\�����ļ�����\\�ļ�99.txt"));

	n2(2, "-------- ", 4);

	return 0;
}