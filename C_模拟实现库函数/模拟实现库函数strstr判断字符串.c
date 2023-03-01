#include <stdio.h>
#include <assert.h>

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

	assert(str1 && str2);

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

}

int main()
{
	�ַ�������strstr�ж��ַ���_ģ��ʵ��();

	return 0;
}