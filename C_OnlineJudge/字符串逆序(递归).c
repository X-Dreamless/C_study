/*
	�ַ�������
		��дһ������ �����ַ���(char* string) (�ݹ�ʵ��)

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

		ע��
			����bcde���� �����ַ���() ������ʱ�򲻺ý�
			�����󿴵�ʱ����治��\0����Ϊ�����и�a

			�����Ȳ���a����ȥ �����ں���Ÿ�\0
			��ʱ��bcde���ܿ���һ���򵥵��ַ���

			��bcde���� �����ַ���() ����
			��������ٰ�a����ȥ

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
	int ���� = ���鳤��(str);

	char ���� = *str;			//1
	*str = *(str + ���� - 1);	//2
	*(str + ���� - 1) = '\0';	//3
	if (���鳤��(str + 1) >= 2)
	{
		�����ַ���(str + 1);			//4
	}
	*(str + ���� - 1) = ����;	//5
}

int main()
{
	char arr[] = "abcdef";
	�����ַ���(arr);// ������arr������arr��Ԫ�صĵ�ַ

	printf("%s\n", arr);


	return 0;
}