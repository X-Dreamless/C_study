/*
	�ݹ�ʵ��n��k�η�
		��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

		��ʽ
						|- k = 0, 1
			�η�(n, k)-	|
						|- k > 0, n * �η�(n, k - 1)




		�ݹ�ʵ��n��k�η�.c(26): warning C4715: ���η���: �������еĿؼ�·��������ֵ
		���뿼�ǵò�ȫ��n�Ǹ�����ô��

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int �η�(int n,int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n * �η�(n, k - 1);
//	}
//}
// �Ľ�
double �η�(int n, int k)
{
	if (k == 0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * �η�(n, k - 1);
	}
	else
	{
		// ���㸺��			  -k��������
		return 1.0 / (�η�(n, -k));
	}
}

int main()
{
	int n = 0;
	int k = 0;
	printf("����������>");
	scanf("%d %d", &n, &k);

	double ret = �η�(n, k);
	printf("%lf\n", ret);




	return 0;
}