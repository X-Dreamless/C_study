/*
	�ַ�������
		��дһ������ �����ַ���(char* string) (�ǵݹ�ʵ��)

		ʵ�֣��������ַ����е��ַ��������У����������ӡ
		Ҫ�󣺲���ʹ��C�������е��ַ�����������

		��
			char arr[] = "abcdef";
			����֮����������ݱ�ɣ�fedcba


		˼·
			a��f����
			b��e����
			c��d����

			char arr[] = "abcdef";
			Ҫ�ҵ�a��f��Ҫ����һ���±�

			left       right
			��              ��
			f  e  d  c  b  a
			a  b  c  d  e  f

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>

int ���鳤��(char* str)
{
	int ������ = 0;
	while (*str != '\0')
	{
		������++;
		str++;// �����һ���ַ�
	}
	return ������;
}

void �����ַ���(char* str)
{
	int left = 0;
	int right = ���鳤��(str) - 1;

	while (left < right)
	{
		char ���� = str[left];
		str[left] = str[right];
		str[right] = ����;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";
	�����ַ���(arr);// ������arr������arr��Ԫ�صĵ�ַ

	printf("%s\n", arr);


	return 0;
}