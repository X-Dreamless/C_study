/*
	�������������Լ��
		ͬʱ������������
		
		m % n������0���Ͱ�n��ֵ����m��t��ֵ����n��Ȼ�����
		���tΪ0�����Լ������n
			m		n		t
			24	%	18	=	6
			18	%	6	=	0

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int t = 0;

	printf("��������������\n");
	scanf("%d %d", &m, &n);//24 18

	// m % n �Ľ����Ϊ0�ͽ���ѭ��
	while (m % n)
	{
		t = m % n;
		m = n;
		n = t;
	}
	printf("���Լ����%d", n);


	return 0;
}