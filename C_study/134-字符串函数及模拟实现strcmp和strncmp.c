/*
	�ַ����� �� �ַ�������

		�����ص�
			�ص���ܴ����ַ����ַ����Ŀ⺯����ʹ�ú�ע������

		����������������������������������������������������������������������������������������������������

		���ַ�������
			strlen

		���Ȳ������Ƶ��ַ�������
			strcpy
			strcat
			strcmp

		���������Ƶ��ַ�����������
			strncpy
			strncat
			strncmp

		�ַ�������
			strstr
			strtok

		������Ϣ����
			strerror

		�ַ�����

		�ڴ��������
			memcpy
			memmove
			memset
			memcmp

		����������������������������������������������������������������������������������������������������

		ǰ��
			C�����ж��ַ����ַ����Ĵ������Ƶ��������C���Ա�����û���ַ������͵ģ��ַ���ͨ������ �����ַ��� ��
			���� �ַ����� �С��ַ������� ��������Щ���������޸ĵ��ַ�������

		����������������������������������������������������������������������������������������������������

		���ַ�������

			strlen

				size_t strlen ( const char * str );

				��  �ַ����Ѿ�'\0'��Ϊ������־��strlen�������ص������ַ�����'\0'ǰ����ֵ��ַ�����(������'\0')
				��  ����ָ����ַ�������Ҫ��'\0'����
				��  ע�⺯���ķ���ֵΪsize_t�����޷��ŵ�(�״�)
				��  ѧ��strlen������ģ��ʵ��

				strlenʵ�ַ���
					������
					�ݹ�
					ָ���ָ��

				������
					���ַ�������strlen()
					���ַ�������strlenII()

		--------------------------------------------------

		���Ȳ������Ƶ��ַ������� - (���Ȳ������ƣ������ַ���������ɺ�ֹͣ)

			strcpy �ַ�������

				char * strcpy ( char * destination, const char * source );
									   Ŀ�ĵ�                    ��Դ

				��  Copies the C string pointed by source into the array pointed by destination,
				   including the terminating null character (and stopping at that point).
				��  Դ�ַ���������'\0'����
				��  �ὫԴ�ַ����е�'\0'������Ŀ��ռ�
				��  Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
				��  Ŀ��ռ����ɱ�
				��  ѧ��ģ��ʵ��

				������
					���Ȳ������Ƶ��ַ�������strcpy()


			strcat �ַ���׷��

				char * strcat ( char * destination, const char * source );

				��  Appends a copy of the source string to the destination string.
				   The terminating null character in destination is overwritten by the first character of source,
				   and a null-character is included at the end of the new string formed by the concatenation of both in destination.
				��  Դ�ַ���������'\0'����
				��  Ŀ��ռ�������㹻�Ĵ���������Դ�ַ���������
				��  Ŀ��ռ������޸�
				��  �ַ����Լ����Լ�׷�ӣ���Σ�// strcat(arr, arr)�����ܣ�\0���ı��ˣ��Ҳ��������ı�־\0�����Լ���\0�����ˣ���ѭ��

				������
					���Ȳ������Ƶ��ַ�������strcat�ַ���׷��()
					���Ȳ������Ƶ��ַ�������strcat�ַ���׷��_ģ��ʵ��()


			strcmp �ַ����Ƚ�

				int strcmp ( const char * str1, const char * str2 );

				��  This function starts comparing the first character of each string. 
				   If they are equal to each other, 
				   it continues with the following pairs until the characters differ or until a terminating null-character is reached.
				��  ��׼�涨
					��  ��һ���ַ������ڵڶ����ַ������򷵻ش���0������
					��  ��һ���ַ������ڵڶ����ַ������򷵻�0
					��  ��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
				��  ��ô����ж������ַ�����

				������
					���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�()
					���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�_ģ��ʵ��()

		--------------------------------------------------

		���������Ƶ��ַ�����������

			strncpy ָ�������ַ�������
				
				char * strncpy ( char * destination, const char * source, size_t num );
																		  �������ַ�����

				��  Copies the first num characters of source to destination. 
				   If the end of the source C string (which is signaled by a null-character) is found before num characters have been copied, 
				   destination is padded with zeros until a total of num characters have been written to it.
				��  ����num���ַ���Դ�ַ�����Ŀ��ռ�
				��  ���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ���׷��0��ֱ��num��

				������
					���������Ƶ��ַ�����������strncpyָ�������ַ�������()


			strncat ָ�������ַ���׷��
				
				char * strncat ( char * destination, const char * source, size_t num );

				��  Appends the first num characters of source to destination, plus a terminating null-character.
				��  If the length of the C string in source is less than num, only the content up to the terminating null-character is copied.

				������
					���������Ƶ��ַ�����������strncatָ�������ַ���׷��()

			strncmp ָ�������ַ����Ƚ�

				int strncmp ( const char * str1, const char * str2, size_t num );

				��  Compares up to num characters of the C string str1 to those of the C string str2.
				   This function starts comparing the first character of each string. 
				   If they are equal to each other, it continues with the following pairs until the characters differ, 
				   until a terminating null-character is reached, or until num characters match in both strings, whichever happens first.

				������
					���������Ƶ��ַ�����������strncmpָ�������ַ����Ƚ�()

		--------------------------------------------------
		����������������������������������������������������������������������������������������������������
*/

#include "define.h"

void �ĵ��ײ�();

void n(int y)
{
	if (y < 0)
	{
		y = y * (-1);
		printf("\n-------- -------- -------- --------");
		int i = 0;
		for (i = 0; i < y; i++)
		{
			printf("\n");
		}
	}
	else
	{
		int i = 0;
		for (i = 0; i < y; i++)
		{
			printf("\n");
		}
	}
}

/*************************************************************************************************************************************************/
/*===============================================================================================================================================*/

void ���ַ�������strlen()
{
	printf("���ַ�������strlen\n");

	char arr[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };// û��\0

	int len = strlen(arr);
	int len2 = strlen(arr2);// û��\0�����ֵ

	printf("%d\n", len);
	printf("%d\n", len2);

	n(2);
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------*/

void ���ַ�������strlenII()
{
	printf("���ַ�������strlenII\n");

	// ע�⺯���ķ���ֵΪsize_t�����޷��ŵ�(�״�)
	if (strlen("abc") - strlen("abcdef") > 0)// ����-3�������޷��������ǳ��������
	{
		printf(">\n");
	}
	else
	{
		printf("<=\n");
	}

	n(-2);
}

/*===============================================================================================================================================*/

void ���Ȳ������Ƶ��ַ�������strcpy�ַ�������()
{
	printf("���Ȳ������Ƶ��ַ�������strcpy�ַ�������\n");

	char arr[6] = { 0 };
	char arr2[] = { 'a', 'b', 'c' };
	char* arr3 = "hello world";
	char* arr4 = "hello *****";

	// ��hello�ŵ�����arr��
	//arr = "hello";// ����д����arr��������������������Ԫ�ص�ַ����ַ�Ǹ���ţ�����ǳ�������hello�ŵ�����ϣ�Ӧ�ð�hello�ŵ������ָ��Ŀռ���

	strcpy(arr, "hello");
	//strcpy(arr, arr2);// err��arr2��û��\0��������֪��ʲôʱ��ֹͣ
	//strcpy(arr, arr3);// err���Ų���
	//strcpy(arr3, arr4);// err��Ŀ��ռ��ǳ��������ܸı�

	printf("%s\n", arr);

	n(2);
}

/*===============================================================================================================================================*/

void ���Ȳ������Ƶ��ַ�������strcat�ַ���׷��()
{
	printf("���Ȳ������Ƶ��ַ�������strcat�ַ���׷��\n");

	char arr1[20] = "hello \0########";
	char arr2[] = "world";

	strcat(arr1, arr2);// �ַ���׷��(����)�����ǵ�arr1��\0���Ὣarr2��\0����ȥ
	/*
		arr1 [h][e][l][l][0][ ][\0][#][#][#][#][# ][#][#][#][\0][\0][\0][\0][\0]
								��   ��  ��  ��  ��  ��
		arr2                   [w ][o][r][l][d][\0]
	*/

	printf("%s\n", arr1);

	n(2);
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------*/

char* my_strcat(char* Ŀ�ĵ�, const char* Դ)
{
	/*
			 Ŀ�ĵ�
			 ��
		arr1 [h][e][l][l][o][ ][\0][\0][\0][\0][\0][\0][\0][\0][\0][\0][\0][\0][\0][\0]
		arr2 [w][o][r][l][d][\0]
			 ��
			 Դ

		1. �ҵ�Ŀ���ַ����е�\0
		2. Դ����׷�ӹ�ȥ������\0

		Ŀ�ĵ����ָ��Ĳ�����arr1����ʼλ��
		�ȱ���Ŀ�ĵ�
		����ٷ���
	*/

	assert(Ŀ�ĵ� && Դ);

	char* ret = Ŀ�ĵ�;

	//1. �ҵ�Ŀ���ַ����е�\0
	while (*Ŀ�ĵ�)
	{
		Ŀ�ĵ�++;
	}
	// ѭ�������� Ŀ�ĵ� ָ�����\0

	//2. Դ����׷�ӹ�ȥ������\0
	while (*Ŀ�ĵ�++ = *Դ++)// ��ֵ��++
	{
		;
	}

	return ret;// ���ص���Ŀ��ռ����ʼ��ַ
}

void ���Ȳ������Ƶ��ַ�������strcat�ַ���׷��_ģ��ʵ��()
{
	printf("���Ȳ������Ƶ��ַ�������strcat�ַ���׷��_ģ��ʵ��\n");

	char arr1[20] = "hello ";
	char arr2[] = "world";

	//my_strcat(arr1, arr2);

	//printf("%s\n", arr1);
	printf("%s\n", my_strcat(arr1, arr2));// ��������з���ֵ�����Կ�������д

	n(2);
}

/*===============================================================================================================================================*/

void ���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�()
{
	printf("���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�\n");

	char* p = "obc";
	char* q = "abcdef";

	//if(p > q)				�Ƚϵ��Ǵ�ŵĵ�ַ
	//if("obc" > "abcdef")	�Ƚϵ������ַ��ĵ�ַ

	// strcmp�ַ����ȽϷ�ʽ
	// a b b b
	// | | <
	// a b c
	// "abbb" < "abc"
	
	int ret = strcmp("abbb", "abc");
	printf("%d\n", ret);

	n(2);
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------*/

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
	else if(ret < 0)
	{
		printf("p < q\n");
	}
	else
	{
		printf("p == q\n");
	}

	n(-2);
}

/*===============================================================================================================================================*/

void ���������Ƶ��ַ�����������strncpyָ�������ַ�������()
{
	printf("���������Ƶ��ַ�����������strncpyָ�������ַ�������\n");

	char arr1[20] = "abcdef";
	char arr2[] = "qwer";
	strncpy(arr1, arr2, 2);// �������6����qwer�����������\0
	printf("%s\n", arr1);

	n(2);
}

/*===============================================================================================================================================*/

void ���������Ƶ��ַ�����������strncatָ�������ַ���׷��()
{
	printf("���������Ƶ��ַ�����������strncatָ�������ַ���׷��\n");

	char arr1[20] = "hello ";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);// ���׷��10����\0׷����ɺ�ֹͣ
	printf("%s\n", arr1);

	n(2);
}

/*===============================================================================================================================================*/

void ���������Ƶ��ַ�����������strncmpָ�������ַ����Ƚ�()
{
	printf("���������Ƶ��ַ�����������strncmpָ�������ַ����Ƚ�\n");

	char* p = "abcdef";
	char* q = "abcddddd";
	int ret = strncmp(p, q, 3);
	printf("%d\n", ret);

	n(-2);
}

/*===============================================================================================================================================*/

int main()
{
	���ַ�������strlen();
	���ַ�������strlenII();

	���Ȳ������Ƶ��ַ�������strcpy�ַ�������();

	���Ȳ������Ƶ��ַ�������strcat�ַ���׷��();
	���Ȳ������Ƶ��ַ�������strcat�ַ���׷��_ģ��ʵ��();
	
	���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�();
	���Ȳ������Ƶ��ַ�������strcmp�ַ����Ƚ�_ģ��ʵ��();

	���������Ƶ��ַ�����������strncpyָ�������ַ�������();

	���������Ƶ��ַ�����������strncatָ�������ַ���׷��();

	���������Ƶ��ַ�����������strncmpָ�������ַ����Ƚ�();

	return 0;
}

/*************************************************************************************************************************************************/

void �ĵ��ײ�()
{
	;
}