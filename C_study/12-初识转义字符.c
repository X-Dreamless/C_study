



/*
	ת���ַ�

	printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ

*/
#include <stdio.h>

int main()
{
	// \t��Ч�����Ǵ�ӡ�˸��ո������tab��
	printf("c:\\test\\test.c");

	printf("\n");

	printf("(are you ok??)");// ??) -- ] ����ĸ��

	printf("\n");

	printf("%c", '\'');

	printf("\a");

	printf("\n");

	printf("%c", '\130');// 8���Ƶ�130��10���Ƶ�X
						// X - ASCII��ֵ��88

	printf("\n");

	printf("%d", strlen("abc"));

	return 0;
}