/*
	ģ�� �⺯��qsort ʵ��һ��ð�������ͨ���㷨
*/

#include "define.h"

void ����(char* buf1, char* buf2, int Ԫ�ش�С)
{
	int i = 0;
	for (i = 0; i < Ԫ�ش�С; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void ð������(void* ������, int Ԫ�ظ���, int Ԫ�ش�С, int (*�ȽϷ���)(const void* e1, const void* e2))
{
	// ����
	int i = 0;
	for (i = 0; i < Ԫ�ظ��� - 1; i++)
	{
		// һ�˵�����
		int j = 0;
		for (j = 0; j < Ԫ�ظ��� - 1 - i; j++)
		{
			// ����Ԫ�رȽϣ�ǿ������ת����char��һ���ֽ�Ϊ��λ�����������������int���ٳ���4�Ϳ��Ե���һλ�ˣ�char*��С
			if (�ȽϷ���((char*)������ + j * Ԫ�ش�С, (char*)������ + (j + 1) * Ԫ�ش�С) > 0)
			{
				// ����
				����((char*)������ + j * Ԫ�ش�С, (char*)������ + (j + 1) * Ԫ�ش�С, Ԫ�ش�С);
			}
		}
	}
}




// �������Ƚϴ����������е�2��Ԫ�صĺ���
int compar_int(const void* e1, const void* e2)
{
	// ����ֱ��*e1 *e2�������͵�ָ������� ��֪�����ʼ����ֽ�
	// ��ǿ������ת��������ָ�룬�ٽ�����
	return *(int*)e1 - *(int*)e2;

	// ���e1ָ���Ԫ�� > e2ָ���Ԫ�أ�������ش���0������
	// ���e1ָ���Ԫ�� = e2ָ���Ԫ�أ�������ص���0������
	// ���e1ָ���Ԫ�� < e2ָ���Ԫ�أ��������С��0������
}
void ��ӡ��������(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void ������������()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	ð������(arr, sz, sizeof(arr[0]), compar_int);

	��ӡ��������(arr, sz);
}





struct ѧ��
{
	char name[20];
	int age;
};
int �Ƚ�����(const void* e1, const void* e2)
{
	// ǿ������ת�����ṹ��ָ�룬������������
	return ((struct ѧ��*)e1)->age - ((struct ѧ��*)e2)->age;
}
int �Ƚ�����(const void* e1, const void* e2)
{
	// strcmp()�Ƚϵ���ascii��
	return strcmp(((struct ѧ��*)e1)->name, ((struct ѧ��*)e2)->name);
}
void �ṹ����������()
{
	struct ѧ�� s[] = { {"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20} };
	int sz = sizeof(s) / sizeof(s[0]);

	//ð������(s, sz, sizeof(s[0]), �Ƚ�����);

	ð������(s, sz, sizeof(s[0]), �Ƚ�����);
}

int main()
{
	������������();

	printf("\n");

	�ṹ����������();

	return 0;
}