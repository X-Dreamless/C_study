/*
	����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Ժȶ�����ˮ

		Ǯ		���˵�		��ƿ
		20		20			20
				10			10
				5			5
				2			3
				1			2
				1			1
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void ����ˮ1(int Ǯ)
{
	int �ܼ� = Ǯ;
	int ��ƿ = Ǯ;

	// ��ʼ�û�
	while (��ƿ >= 2)
	{
		�ܼ� += ��ƿ / 2;
		��ƿ = ��ƿ / 2 + ��ƿ % 2;
	}

	printf("%d\n", �ܼ�);
}

void ����ˮ2(int Ǯ)
{
	int �ܼ� = 0;
	if (Ǯ > 0)
	{
		�ܼ� = 2 * Ǯ - 1;
	}

	printf("%d\n", �ܼ�);
}

int main()
{
	int Ǯ = 0;
	printf("������Ǯ��\n");
	scanf("%d", &Ǯ);

	����ˮ1(Ǯ);

	printf("\n");

	����ˮ2(Ǯ);

	

	return 0;
}