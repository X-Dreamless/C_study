/*


*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int line = 0;
	while (line < 10)
	{
		printf("%dд����\n", line);
		line++;
	}

	if (line == 10)
	{
		printf("ͣ\n");
	}


	return 0;
}