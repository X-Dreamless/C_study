/*
	������
		ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ��е�һ��

		A��������
		B����C
		C����D
		D��C�ں�˵

		��֪3����˵���滰��1����˵�˼ٻ�
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char kill = 0;
	for (kill = 'A'; kill <= 'D'; kill++)// ABCD��ֵ��1
	{
		if ((kill != 'A') + (kill == 'C') + (kill == 'D') + (kill != 'D') == 3)
		{
			printf("%c", kill);
		}
	}

	return 0;
}