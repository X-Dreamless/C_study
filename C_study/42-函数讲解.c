

/*

	����
		���½���Ҫ���պ����Ļ���ʹ�ú͵ݹ�
			1.������ʲô
			2.�⺯��
			3.�Զ��庯��
			4.��������
			5.��������
			6.������Ƕ�׵��ú���ʽ����
			7.�����������Ͷ���
			8.�����ݹ�

		C�����к����ķ���
			1.�⺯��
			2.�Զ��庯��

		C���Գ��õĿ⺯��
			IO����(�����������)			printf scanf getchar putchar
			�ַ�����������				strcmp strlen
			�ַ���������					toupper
			�ڴ��������					memcpy memcmp memset
			ʱ��/���ں���				time
			��ѧ����						sqrt pow
			�����⺯��					
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// strcpy
#include <string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	// ��arr2���ַ���������arr1
	//     Ŀ�ĵ�
	strcpy(arr1, arr2);
	printf("%s\n", arr1);// ��ӡarr1����ַ��� %s ���ַ����ĸ�ʽ����ӡ



	// memory - ���� - �ڴ�
	// memset - �ڴ�����
	// 
	// 
	char arr3[] = "hello bit2";
	//���� arr3, 'x', ǰ5���ֽ�
	memset(arr3, 'x', 5);
	printf("%s\n", arr3);


	return 0;
}