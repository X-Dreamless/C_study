

/*


*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int input = 0;// �����ֵ
	printf("ѧϰ(1/0)?\n");
	scanf("%d", &input);

	if (input == 1) {
		printf("��offer");
	}
	else {
		printf("������");
	}

	return 0;
}