


/*
	%d - ����
	%f - ����
	%lf - double

	��������
		�ֲ�����		������ �� ����ı������� �ֲ�����
		ȫ�ֱ���		������ �� ����ı������� ȫ�ֱ���

		�� �ֲ����� �� ȫ�ֱ��� ���ֳ�ͻ������� �ֲ����� ����
		

	scanf_s����
		VS�������ṩ�� ��˵C���Ա�׼�涨��
*/

// scanf�������취
// Դ�ļ���һ�м��ϣ�#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ȫ�ֱ���
int a = 100;

int main()
{
	// ����һ������
	// ���� ������ = 0;(�Ƽ�)
	// ���� ������;(���Ƽ�)
	int age = 20;
	double weight = 75.3;

	age = age + 1;
	weight = weight - 10;
	printf("%d\n", age);
	printf("%lf\n", weight);


	// �ֲ�����
	int a = 10;

	printf("%d\n", a);



	// �����������ĺ�
	// scanf���������뺯��
	int aa = 0;
	int bb = 0;
	int sum = 0;
	scanf("%d %d", &aa, &bb);
	sum = aa + bb;
	printf("sum = %d\n", sum);















	return 0;
}