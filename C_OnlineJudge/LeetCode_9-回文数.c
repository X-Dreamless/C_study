
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

_Bool isPalindrome(int x)
{
	// ����ֱ�Ӳ���
	if (x < 0)
	{
		printf("���ǻ�����\n");
		return;
	}

	int tmp = 0;
	int ������ = 0;

	// ����λ��
	tmp = x;
	while (tmp)
	{
		tmp /= 10;
		������++;
	}

	// ����ռ�
	int* arr = NULL;
	arr = (int*)malloc(sizeof(int) * ������);
	if (arr == NULL)
	{
		return;
	}


	// ���뵽 �ռ�
	tmp = x;
	for (int i = 0; tmp; i++)
	{
		//printf("%d\n", tmp % 10);	//ÿ�������λ
		//tmp /= 10;					//��С10����ȥ��ԭ���ĸ�λ��

		arr[i] = tmp % 10;
		tmp /= 10;
		printf("%d ", arr[i]);
	}


	// �Ƚ�
	int left = 0;
	int right = ������ - 1;

	for (int i = 0; i < ������; i++)
	{
		// ������±� �� ���ұ��±� �Ƚ�
		if (left < right)
		{
			// ��ʼ�Ƚ�
			if (arr[left] != arr[right])
			{
				printf("���ǻ�����\n");
				return;
			}
		}

		left++;
		right--;
	}

	printf("�ǻ�����\n");


	// �ͷ�
	free(arr);
	arr = NULL;
}

_Bool isPalindrome_2(int x)
{
	// ���۹ٷ����

	// ���������
	// ������������ x < 0 ʱ��x ���ǻ�������
	// ͬ���أ�������ֵ����һλ�� 0��Ϊ��ʹ������Ϊ���ģ�
	// �����һλ����ҲӦ���� 0
	// ֻ�� 0 ������һ����
	if (x < 0 || (x % 10 == 0 && x != 0)) {
		return 0;
	}

	int revertedNumber = 0;
	while (x > revertedNumber) {
		revertedNumber = revertedNumber * 10 + x % 10;
		x /= 10;
	}

	// �����ֳ���Ϊ����ʱ�����ǿ���ͨ�� revertedNumber/10 ȥ��������λ�����֡�
	// ���磬������Ϊ 12321 ʱ���� while ѭ����ĩβ���ǿ��Եõ� x = 12��revertedNumber = 123��
	// ���ڴ�����λ�����ֲ�Ӱ����ģ����������Լ���ȣ����������ǿ��Լ򵥵ؽ���ȥ����
	return x == revertedNumber || x == revertedNumber / 10;
}

int main()
{
	// 9. ������ https://leetcode.cn/problems/palindrome-number/
	isPalindrome(1112111);
	isPalindrome_2(1112111);

	return 0;
}