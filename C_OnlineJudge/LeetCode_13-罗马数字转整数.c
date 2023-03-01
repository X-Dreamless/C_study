
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int romanToInt(char* s)
{
	// ���۹ٷ����

	/*
		����: s = "LVIII"
		���: 58
		����: L = 50, V= 5, III = 3.

		һ�Ա�֮����һ��Сֵ���ڴ�ֵ����ߣ�����������������Ϊ�ӷ���
	*/

	int symbolValues[26];

	// ASCII������
	symbolValues['I' - 'A'] = 1;	// symbolValues[8]
	symbolValues['V' - 'A'] = 5;	// symbolValues[21]
	symbolValues['X' - 'A'] = 10;	// symbolValues[23]
	symbolValues['L' - 'A'] = 50;	// symbolValues[11]
	symbolValues['C' - 'A'] = 100;	// symbolValues[2]
	symbolValues['D' - 'A'] = 500;	// symbolValues[3]
	symbolValues['M' - 'A'] = 1000;	// symbolValues[12]

	int ans = 0;
	int n = strlen(s);
	for (int i = 0; i < n; ++i)
	{
		int value = symbolValues[s[i] - 'A'];

		if (i < n - 1 && value < symbolValues[s[i + 1] - 'A'])
		{
			ans -= value;
		}
		else
		{
			ans += value;
		}
	}

	return ans;

	/*
		���ߣ����۹ٷ����
			���ӣ�https ://leetcode.cn/problems/roman-to-integer/solutions/774992/luo-ma-shu-zi-zhuan-zheng-shu-by-leetcod-w55p/
		��Դ�����ۣ�LeetCode��
			����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
	*/
}

int romanToInt_2(char* s)
{
	int form[26];

	// ת����
	form['I' - 'A'] = 1;
	form['V' - 'A'] = 5;
	form['X' - 'A'] = 10;
	form['L' - 'A'] = 50;
	form['C' - 'A'] = 100;
	form['D' - 'A'] = 500;
	form['M' - 'A'] = 1000;

	// �����ַ�������
	int s_len = strlen(s);

	// �����ַ���
	int sum = 0;
	int val = 0;

	int i = 0;
	for (i = 0; i < s_len; i++)
	{
		// �� ת���� ��ȡ ֵ
		val = form[s[i] - 'A'];

		// �жϣ�һ�Ա�֮����һ��Сֵ���ڴ�ֵ����ߣ�����������������Ϊ�ӷ���
		// ��ǰֵ �� ��һ��ֵ�Ƚ�
		if (i < s_len - 1 && val < form[s[i + 1] - 'A'])
		{
			// ��С�Ҵ󣬼���
			sum = sum - val;
		}
		else
		{
			// �����С���ӷ�
			sum = sum + val;
		}
	}

	return sum;
}

int main()
{
	// 13. ��������ת����
	char* roman = "LIV";
	//char roman[] = "LVIII";
	//romanToInt(roman);
	romanToInt_2(roman);

	return 0;
}