/*
	��Ŀ����
		��һ�仰�ĵ��ʽ��е��ã���㲻���ã�����i like beijing. �����������Ϊ��beijing. like i

	��������
		ÿ�������������һ������������i like beijing. �����������Ȳ�����100

	�������
		�����������֮����ַ������Կո�ָ�

*/

#include <stdio.h>
#include <string.h>

void ��ת(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };

	//����
	gets(arr);

	//������ת��
	//1.�ַ������巭ת
	//.gnijieb ekil i
	int len = strlen(arr);
	��ת(arr, arr + len - 1);
	


	// 2.ÿ����������
	// beijing. like i
	char* start = arr;
	while (*start)// ����\0����
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		// ����һ������
		��ת(start, end - 1);

		if (*end == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}

	printf("%s\n", arr);

	return 0;
}