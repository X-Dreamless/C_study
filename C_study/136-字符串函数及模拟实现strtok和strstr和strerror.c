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

		�ַ�������

			strstr �ж��ַ���str2�Ƿ���str1���Ӵ�

				const char * strstr ( const char * str1, const char * str2 );
				char * strstr (       char * str1, const char * str2 );
				char * strstr ( const char *, const char * );// (���ؿƼ�)

				��  Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.

				������
					�ַ�������strstr�ж��ַ���()
					�ַ�������strstr�ж��ַ���_ģ��ʵ��()


			strtok �ַ����ָ�

				char * strtok ( char * str, const char * delimiters );
				char * strtok ( char * str, const char * sep );// (���ؿƼ�)

				��  sep�����Ǹ��ַ��������������÷ָ������ַ�����
				��  ��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�������ָ����ָ�ı��
				��  strtok�����ҵ�str�е���һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�롣
				   (ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸�)
				��  strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
				��  strtok�����ĵ�һ������Ϊ  NULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
				��  ����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��

				������
					�ַ�������strtok�ַ����ָ�()
					�ַ�������strtok�ַ����ָ�II()

		--------------------------------------------------

		������Ϣ����

			strerror ����һ��ָ�������Ϣ�ַ�����ָ��

				char * strerror ( int errnum );

				��  ���ش����룬����Ӧ�Ĵ�����Ϣ

				������
					������Ϣ����strerror����һ��ָ�������Ϣ�ַ�����ָ��()

		--------------------------------------------------
		����������������������������������������������������������������������������������������������������
*/

#include "define.h"
#include <errno.h>// ������

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
	else if (ret < 0)
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

void �ַ�������strstr�ж��ַ���()
{
	printf("�ַ�������strstr�ж��ַ���\n");

	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";

	// ��arr1�в����Ƿ����arr2����
	char* ret = strstr(arr1, arr2);// ����ҵ����ص�һ�γ��ֵ����ַ��ĵ�ַ������Ҳ������ؿ�ָ��

	if (ret == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ���%s\n", ret);// ���ҵ����ַ��ĵ�ַ����ӡ
	}

	n(2);
}

/*-----------------------------------------------------------------------------------------------------------------------------------------------*/

char* my_strstr(const char* str1, const char* str2)// ���յ������ַ������ַ��ĵ�ַ
{
	/*
	
		���1
			str1
			��
			abcdefabcdef

			cde
			��
			str2

			��һ��
				c��a�Ƚ�
				�����
				str1�����һ��

				 str1
				 ��
				abcdefabcdef
				cde
				��
				str2

			�ڶ���
				b��c�Ƚ�
				�����
				str1�����һ��

				  str1
				  ��
				abcdefabcdef
				cde
				��
				str2

			������
				c��c�Ƚ�
				���
				str1�����һ��
				str2�����һ��

				   str1
				   ��
				abcdefabcdef
				cde
				 ��
				 str2

			���Ĵ�
				d��d�Ƚ�
				���
				str1�����һ��
				str2�����һ��

					str1
					��
				abcdefabcdef
				cde
				  ��
				  str2

			�����
				e��e�Ƚ�
				���
				str1�����һ��
				str2�����һ��

					 str1
					 ��
				abcdefabcdef
				cde[\0]
				   ��
				   str2

			str2�ҵ�\0�������

		���2
			str1
			��
			abbbcdef

			bbc
			��
			str2

			��� ���2 �� ���1 �Ĳ�����������Ҳ���

			��ǰstr2��str1ƥ��ɹ��Ļ�
				 str1
				 ��
				abbbcdef
				bbc
				��
				str2

			str1����ƶ�һ��
				  str1
				  ��
				abbbcdef
				bbc
				��
				str2

			����str2�Ƿ��ܺ�str1ƥ��ɹ�

			���ƥ�䲻�ɹ�
			str1���˵���һ�ο�ʼƥ���λ�õ���һ��λ��
			str2���˵���һ�ο�ʼƥ���λ��
				 str1
				 ��
				abbbcdef
				bbc
				��
				str2
	*/

	assert(str1&& str2);

	// str1��str2�������Ż�ز��������λ�ã������ȱ��� �� ��ֵ��s1��s2��֮��ʹ��s1��s2
	const char* s1 = str1;
	const char* s2 = str2;

	// str1��ô�ص���һ��ƥ���λ��(������ʼλ��)���ٴ���һ������������str1
	const char* cp = str1;

	// ���Ҫ���ҵ��ǿ��ַ���
	if (*str2 == '\0')
	{
		return (char*)str1;// ǿ������ת������Ϊ��const���Σ�const char* ���� �� char* ����

	}


	// ��ʼ����
	while (*cp)
	{
		s1 = cp;
		s2 = str2;

		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;// s1������ǰ��
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;// ǿ������ת������Ϊ��const���Σ�const char* ���� �� char* ����
		}
		cp++;// cp���𱣴���һ�μ�¼

	}
	return NULL;
	/*
		s1
		��
		abbbcdef
		��
		cp

		bbc
		��
		s2

		KMP�㷨 ������Ĵ���Ч�ʸ���
		(KMP�㷨 - �ַ��������㷨)
	*/
}

void �ַ�������strstr�ж��ַ���_ģ��ʵ��()
{
	printf("�ַ�������strstr�ж��ַ���_ģ��ʵ��\n");

	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";

	char* ret = my_strstr(arr1, arr2);// �������ַ������ַ��ĵ�ַ

	if (ret == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ���%s\n", ret);
	}

	n(2);
}

/*===============================================================================================================================================*/

void �ַ�������strtok�ַ����ָ�()
{
	printf("�ַ�������strtok�ַ����ָ�\n");

	/*
	
		ruchuruo@gmail.com
		�ָ���ļ��Ͼ���@��.

		192.168.1.100
		�и��
		���ָ���ĳ�\0���ٷ��� 1 �ĵ�ַ
		��
		192 \0

		����strtok��������һ��ֻ���и�һ��

		������������������������������������������������������������������������������
		---------------------------------------

		��һ��������Ϊ��ָ��
			strtok(tmp, p);

			strtok�������ҵ��ĵ�һ���ָ���ĳ�\0
						��
				ruchuruo\0gmail.com

			���� r �ĵ�ַ
				��
				ruchuruo\0gmail.com

			��¼\0�ĵ�ַ
						��
				ruchuruo\0gmail.com

		---------------------------------------
		
		��һ������Ϊ��ָ��
			strtok(NULL, p);

			��Ӹոձ����λ�ü�������
						��
				ruchuruo\0gmail.com

			strtok�������ҵ��ĵ�һ���ָ���ĳ�\0
							   ��
				ruchuruo\0gmail\0com

			���� g �ĵ�ַ
						  ��
				ruchuruo\0gmail\0com

			��¼\0�ĵ�ַ
							   ��
				ruchuruo\0gmail\0com

		---------------------------------------

		�ٴε����ҵ�\0
								��
			ruchuruo\0gmail\0com\0

		���� c �ĵ�ַ
							 ��
			ruchuruo\0gmail\0com\0

		��¼\0�ĵ�ַ
								��
			ruchuruo\0gmail\0com\0

		---------------------------------------

		����ٴε��ã��Ҳ����ˣ����ؿ�ָ��

		---------------------------------------
		������������������������������������������������������������������������������

		ֻ�е�һ�ε��õ�ʱ��tmp��ȥ��֮����ô���ָ��
			strtok(tmp, p);
			strtok(NULL, p);
			strtok(NULL, p);

	*/

	char arr[] = "ruchuruo@gmail.com";
	char* p = "@.";// �ָ��Ҳ��Ҳ�����ó���

	char tmp[20] = { 0 };// ���ݣ���ֹԭ�ַ������޸�
	strcpy(tmp, arr);

	//strtok(arr, "@.");
	char* ret = NULL;

	ret = strtok(tmp, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	n(2);
}

void �ַ�������strtok�ַ����ָ�II()
{
	printf("�ַ�������strtok�ַ����ָ�II\n");

	/*
		�����δ֪���ָ����ͨ��strtok�����ķ���ֵ �ж�Ҫ��Ҫ������
	*/
	char arr[] = "document.getElementById(\"�ǿ�\").style.width";
	char* p = ".";

	char tmp[50] = { 0 };
	strcpy(tmp, arr);

	char* ret = NULL;

	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))// for��ĳ�ʼ��(��һ������)ִֻ��һ��
	{
		printf("%s\n", ret);
	}

	n(-2);
}

/*===============================================================================================================================================*/

void ������Ϣ����strerror����һ��ָ�������Ϣ�ַ�����ָ��()
{
	printf("������Ϣ����strerror����һ��ָ�������Ϣ�ַ�����ָ��\n");

	/*
		ʹ�ÿ⺯����ʱ�򣬵��ÿ⺯��ʧ�ܵ�ʱ�򣬶������ô�����

		C������һ��ȫ�ֱ�����������Ŵ�����ģ���������ʱ��Ž�ȥ
		int errno;
	*/

	printf("%s\n", strerror(0));// ��㴫��ȥһ��
	//printf("%s\n", strerror(1));// ��㴫��ȥһ��
	//printf("%s\n", strerror(2));// ��㴫��ȥһ��

	// �����һ���ļ�
	FILE* pf = fopen("testttttt.txt", "r");// ��ֻ����ʽ��һ���ļ���û������ļ���ʧ�ܣ�pf�͵õ�һ����ָ�룬FILE* ��ָ������
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));// ����ʧ��fopen������Ѵ������ŵ�errno������
		return 1;// ʧ�������´���Ͳ���Ҫִ����
	}

	// ����ɹ���... ...
	fclose(pf);// �ر��ļ�
	pf = NULL;

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

	�ַ�������strstr�ж��ַ���();
	�ַ�������strstr�ж��ַ���_ģ��ʵ��();

	�ַ�������strtok�ַ����ָ�();
	�ַ�������strtok�ַ����ָ�II();

	������Ϣ����strerror����һ��ָ�������Ϣ�ַ�����ָ��();

	return 0;
}

/*************************************************************************************************************************************************/

void �ĵ��ײ�()
{
	;
}