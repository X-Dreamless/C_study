/*
	ģ��ʵ�ֿ⺯��strlen���ַ�������
	strlen ���ַ�������

	__cdecl - ��������Լ�� - ��������ʱ���Σ��������󴫻��Ǵ��Ҵ��������˺������õ�һЩϸ�ڵĹ���
*/

#include <stdio.h>
#include <assert.h>

// ��׳�� ³����
int �ַ�������1(const char* arr)
{
	//assert(arr != NULL);// ���ﲻ��д��*arr�����arrΪ�ս����ó��������assertû���ᱨ��
	assert(arr);// Ҳ��Ҳд����������Ϊ0��0Ϊ�٣�����
	int ������ = 0;
	while (*arr != '\0')// ����д��"\0"���������ַ���\0
	{
		������++;
		arr++;
	}
	return ������;// ѭ���������ؼ�����
}

// ���Ȳ����Ǹ������������޷�������
// size_t �� unsigned int
size_t �ַ�������(const char* arr)
{
	//assert(arr != NULL);// ���ﲻ��д��*arr�����arrΪ�ս����ó��������assertû���ᱨ��
	assert(arr);// Ҳ��Ҳд����������Ϊ0��0Ϊ�٣�����
	size_t ������ = 0;
	while (*arr != '\0')// ����д��"\0"���������ַ���\0
	{
		������++;
		arr++;
	}
	return ������;// ѭ���������ؼ�����
}

int main()
{
	char arr[] = "abc";
	int len = �ַ�������(arr);
	printf("%d\n", len);

	return 0;
}
