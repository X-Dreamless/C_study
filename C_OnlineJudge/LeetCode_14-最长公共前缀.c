
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
	// �Ƿ��ǿ��ַ�
	if (strsSize == 0)
	{
		return "";
	}

	//����128���ֽڵ��ڴ棬���洢����ǰ׺
	char* str = (char*)calloc(128, sizeof(char));

	// �����ǰ׺���ᳬ����һ���ַ�����*strs �������ҵ���һ���ַ����������㳤��
	int i = 0;
	int j = 0;
	for (i = 0; i < strlen(*strs); i++)// ��ѭ�����ҵ���ĸ
	{
		// ��ѭ�����ҵ��ַ���
		for (j = 0; j < strsSize - 1; j++)
		{
			// �����ַ���ĩβĬ�����'\0'���жϵ�'\0'������
			if (strs[j][i] != strs[j + 1][i])
			{
				return str;
			}
		}

		//һ����ѭ���������ж�ͨ������ͨ�����ַ�����str
		str[i] = strs[j][i];
	}

	return str;
}

char* longestCommonPrefix2(char** strs, int strsSize)
{
	//�������Ϊ�գ����������ʱ��̵ܶĻ������п���������ǿ��ַ�
	if (strsSize == 0)
	{
		return "";
	}

	//����128���ֽڵ��ڴ棬���洢����ǰ׺
	char* str = (char*)calloc(128, sizeof(char));

	//��ѭ�����Ե�һ���ַ����ĳ���Ϊѭ����������Ϊ�����ǰ׺�ĳ���С�ڵ�����
	for (int i = 0, j; i < strlen(*strs); i++)
	{
		//��ѭ�������ַ�������Ϊѭ����������1��ԭ������Ϊѭ������j+1�������Ļ����ᷢ���ڴ�Խ��
		for (j = 0; j < strsSize - 1; j++)
		{
			//�����һ���ַ�����iλ�����ڵ�ǰ�ַ�����iλ��˵��ѭ��������i-1λ�������ǰ׺�����һ���ַ�
			if (strs[j][i] != strs[j + 1][i])
			{
				return str;
			}
		}

		//һ����ѭ��������˵����ǰ�ַ���һ���ж�ͨ���ˣ���ͨ�����ַ�����str   
		str[i] = strs[j][i];
	}

	return str;
}

int main()
{
	// 14. �����ǰ׺
	//char *strs[] = { "flower","flow","flight" };
	//char* strs[] = { "aflower","bflow","cflight" };
	//char* strs[] = { "abcdefg","abcd","abcd" };
	//char* strs[] = { "abcdefg","abcdefg","abcdefg" };
	char* strs[] = { "abcdefg","abcd","abcd","abcd","abcd","abcd" };

	int sz = sizeof(strs) / sizeof(strs[0]);

	char* ret = longestCommonPrefix(&strs, sz);
	printf("%s\n", ret);
	free(ret);
	ret = NULL;

	char* ret = longestCommonPrefix2(&strs, sz);
	printf("%s\n", ret);
	free(ret);
	ret = NULL;

	return 0;
}