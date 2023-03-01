
/*
	58. ���һ�����ʵĳ��� https://leetcode.cn/problems/length-of-last-word/description/

	����һ���ַ��� s�������ɵ�����ɣ�����ǰ����һЩ�ո��ַ������������ַ����� ���һ�� ���ʵĳ��ȡ�

	���� ��ָ������ĸ��ɡ��������κοո��ַ���������ַ�����

	ʾ�� 1��
		���룺s = "Hello World"
		�����5
		���ͣ����һ�������ǡ�World��������Ϊ5��

	ʾ�� 2��
		���룺s = "   fly me   to   the moon  "
		�����4
		���ͣ����һ�������ǡ�moon��������Ϊ4��

	ʾ�� 3��
		���룺s = "luffy is still joyboy"
		�����6
		���ͣ����һ�������ǳ���Ϊ6�ġ�joyboy����

	��ʾ��
		1 <= s.length <= 104
		s ����Ӣ����ĸ�Ϳո� ' ' ���
		s �����ٴ���һ������
*/

#include <string.h>

int lengthOfLastWord(char* s)
{
	/*
		˼·1��
			���ַ���ĩβ��ʼ��

										   ��
				"   fly me   to   the moon  ";

																							   i
																							   ��
				[ ][ ][ ][f][l][y][ ][m][e][ ][ ][ ][t][o][ ][ ][ ][t][h][e][ ][m][o][o][n][ ][ ][\0]

			�ǿո����ǰ��

																						 i
																						 ��
				[ ][ ][ ][f][l][y][ ][m][e][ ][ ][ ][t][o][ ][ ][ ][t][h][e][ ][m][o][o][n][ ][ ][\0]

			�ߵ����ǿո�ʱ��counter++ ���ټ�����ǰ��

																			 i
																			 ��
				[ ][ ][ ][f][l][y][ ][m][e][ ][ ][ ][t][o][ ][ ][ ][t][h][e][ ][m][o][o][n][ ][ ][\0]

			�ߵ� iС��0 �� �ո� ʱ����ѭ�������� counter
	*/
	int s_len = strlen(s);

	int i = s_len - 1;
	int counter = 0;

	for (;;)
	{
		// �ǿո����ǰ��
		if (s[i] == ' ' && i != 0)
		{
			i--;
		}
		else
		{
			counter++;
			i--;

			if (i < 0 || s[i] == ' ')
			{
				break;
			}
		}
	}

	return counter;
}

int main()
{
	char* s = "   fly me   to   the moon  ";

	int ret = lengthOfLastWord(s);

	return 0;
}