/*


*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//// ����

	//printf("����\n");

	//int num1 = 0;
	//int num2 = 0;

	//scanf("%d%d", &num1, &num2);

	//// int sum = num1 + num2;
	//// �����ķ�ʽ���
	//int sum = Add(num1, num2);

	//printf("%d\n", sum);









	// ���� - һ����ͬ���͵�Ԫ�صļ���
	// 10������1-10������
	// ��������[10��] = {}
	// ���������±������ʵ�
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	char ch[5] = { 'a','b','c' };// ����ȫ��ʼ�� ʣ���Ĭ��Ϊ0

	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}

/*
	��������ֻ���ó���
	C99��׼��������һ������䳤����
		֧�����鴴����ʱ���ñ���ָ����С������������鲻�ܳ�ʼ��
*/
