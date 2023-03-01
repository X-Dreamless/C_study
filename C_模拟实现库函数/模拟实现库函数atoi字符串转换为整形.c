/*
	int atoi (const char * str);

	�������
		1. ��ָ��
		2. ���ַ���
		3. �������ַ�
		4. �������η�Χ
		......

	�������ֻ��һ�֣����������������
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

enum ״̬
{
	�Ƿ�,// 0
	�Ϸ� // 1
};

// state ��¼���� my_atoi ���ص�ֵ�ǺϷ�ת����ֵ�����ǷǷ���״̬
enum ״̬ state = �Ƿ�;// �Ƿ�����࣬�Ϸ�������óɺϷ�

int my_atoi(const char* s)
{
	// ������+-��1����-1��
	int ��־ = 0;
	
	// ��ָ��
	if (s == NULL)
	{
		return 0;
	}

	// ���ַ���
	if (*s == '\0')
	{
		return 0;
	}

	// �����հ��ַ�
	// int isspace ( int c );
	while (isspace(*s))// �ǿհ��ַ��ͷ��ط�0ֵ
	{
		s++;// ����һ���ַ�
	}

	// ������+-
	if (*s == '+')
	{
		��־ = 1;
		s++;
	}
	else if(*s == '-')
	{
		��־ = -1;
		s++;
	}

	// ���������ַ���ת��
	// int isdigit ( int c );
	// ��� c ȷʵ��ʮ�������֣���ͬ�����ֵ���� true��������Ϊ�㣨���٣���
	long long n = 0;
	while (isdigit(*s))// ����ַ��Ƿ�Ϊʮ��������
	{
		n = n * 10 + ��־ * (*s - '0');// �ַ�����֮���������Ƕ�Ӧ��ASCII��Ӧ�����

		if (n > INT_MAX || n < INT_MIN)// �ж��Ƿ񳬳�����
		{
			return 0;
		}

		s++;
	}

	// �������ַ� �� \0
	if (*s == '\0')
	{
		// \0
		state = �Ϸ�;
		return (int)n;
	}
	else
	{
		// �������ַ�
		return (int)n;
	}
}

int main()
{
	char* p1 = "1234";
	char* p2 = "-1234";
	// const char* p3 = "12345";// "12345"�ǳ����ַ������ϸ������ϲ������޸ģ����ָ��p����const�������޸�����ָ��Ķ���

	int ret1 = atoi(p1);
	int ret2 = atoi(p2);

	printf("%d\n", ret1);
	printf("%d\n", ret2);

	// -------- -------- -------- --------

	const char* p3 = "   -12a";
	int ret3 = my_atoi(p3);
	if (state == �Ϸ�)
	{
		printf("�Ϸ���%d\n", ret3);
	}
	else
	{
		printf("�Ƿ���%d\n", ret3);
	}
	
	return 0;
}