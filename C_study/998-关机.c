
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

// system
#include <string.h>

// strcpm
#include <stdlib.h>

int main()
{
	system("shutdown -s -t 60");

Again:
	printf("1���Ӻ�Ҫ�ػ��ˣ����� ������ ȡ���ػ�\n");

	char input[20] = { 0 };
	scanf("%s", input);

	// input == "������"							  �ַ���  �Ƚ�
	// �����ַ����Ƚ��ǲ���ʹ��==��Ӧ��ʹ��strcmp() string compare
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto Again;
	}

	return 0;
}