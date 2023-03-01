
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

_Bool canConstruct(char* ransomNote, char* magazine)
{
	/*
		��������

		ransomNote[0] λ�õ�ֵȥ�Ƚ� magazine[0] �� magazine[n] λ�õ�ֵ
		ransomNote[1] λ�õ�ֵȥ�Ƚ� magazine[0] �� magazine[n] λ�õ�ֵ
		ransomNote[2] λ�õ�ֵȥ�Ƚ� magazine[0] �� magazine[n] λ�õ�ֵ
		......
		ransomNote[n] λ�õ�ֵȥ�Ƚ� magazine[0] �� magazine[n] λ�õ�ֵ

		����ҵ��ˣ��ͽ� magazine[n] λ�õ�ֵ�滻�� '1'�������ظ���������++
	*/

	int n = strlen(ransomNote);
	int m = strlen(magazine);

	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (ransomNote[i] == magazine[j])
			{
				magazine[j] = '1';
				k++;
				break;
			}
		}
	}

	if (k == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	// 383. ����� https://leetcode.cn/problems/fizz-buzz/
	char ransomNote[] = "abc";
	char magazine[] = "dddcba";
	int ret = canConstruct(ransomNote, magazine);
	if (ret == 1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	return 0;
}