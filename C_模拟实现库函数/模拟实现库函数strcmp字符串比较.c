#include <stdio.h>
#include <assert.h>

int my_strcmp(const char* s1, const char* s2)
{
	/*
		s1
		��
		abcdef\0

		abbb\0
		��
		s2
	*/
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int my_strcmp_2(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)// �Ƚϵ���ascii��ֵ
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

void ���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�_ģ��ʵ��()
{
	printf("���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�_ģ��ʵ��\n");

	char* p = "abbb";
	char* q = "abbb";
	int ret = my_strcmp_2(p, q);
	printf("%d\n", ret);

	// ����ķ���ֵ�ж� ������д��ret == 1
	// ��Ϊ����ֵ�Ǵ��ڻ�С�ڻ����0��ֵ
	if (ret > 0)
	{
		printf("p > q\n");
	}
	else if (ret < 0)
	{
		printf("p < q\n");
	}
	else
	{
		printf("p == q\n");
	}

}

int main()
{
	���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�_ģ��ʵ��();

	return 0;
}