


/*
	define ��һ��Ԥ����ָ��
		1.define ������ţ������ʶ������
		2.define �����
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// define �����ʶ������
#define Max 1000




// 2.define �����
#define Add(x,y) x+y
//�Ͻ�д��
// x,y������һ�����ʽ��Ӧ����������(x) + (y)��һ�����壬ҲӦ��������
#define Add2(x,y) ((x) + (y))

int main()
{
	// define �����ʶ������
	printf("%d\n", Max);




	// 2.define �����
	printf("%d\n", 4*Add(2, 3));
	//			   4*2+3

	//
	printf("%d\n", 4 * Add2(2, 3));

	return 0;
}