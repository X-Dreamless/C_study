


/*
	�ַ���
		����һ���ַ�-��˫������������һ���ַ�

		�ַ����ڽ�β��λ��������һ��\0���ַ�
		\0���ַ����Ľ�����־

		�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ�������
*/
#include <stdio.h>
#include <string.h>

int main()
{
	// �ַ����� - ������һ����ͬ���͵�Ԫ��
	char arr[] = "abcd";
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0'};

	// ��ӡ�ַ���
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	// �ַ�������
	// : warning C4013: ��strlen��δ���壻 û������ͷ�ļ�#include <string.h>
	int len = strlen("abc");// string length
	printf("%d\n", len);

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	return 0;
}