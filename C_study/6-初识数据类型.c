






/*
	��������
		char		�ַ���������
		short		������
		int			����
		long		������
		long long	����������
		float		�����ȸ�����
		double		˫���ȸ�����

	������еĵ�λ
		bit		- ����λ
		byte	- �ֽ� = 8bit
		kb		- 1024byte
		mb		- 1024kb
		gb		- 1024mb
		tb		- 1024gb
		pb		- 1024tb

	C���Ա�׼
		Ϊʲôlongû�д���int��
		sizeof(long) >= sizeof(int)

	C����Ϊʲô����ô�����ͣ�
		ѡ����ʵ����Ϳռ������ʸ���
*/
#include <stdio.h>

int main()
{
	// �ַ�a
	char ch = "a";

	//����
	int age = 20;
	short num = 10;

	//С��
	float weight = 55.5;
	double d = 0.0;


	printf("%d\n", 100);// ��ӡһ������ - %d

	// sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С
	// sizeof��λ���ֽ�byte
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}