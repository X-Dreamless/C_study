


/*
	������Ϊ���¼���
		���泣��
		const ���εĳ�����
		#define ����ı�ʶ������
		ö�ٳ���
*/
#include <stdio.h>

#define MAX 32767

int main()
{
	// ���泣��
	3.14;
	'abcd';

	// const ���εĳ�����
	const int num = 10;// ������ ���г�����(���ܱ��ı������)
	const int n = 10;
	//int arr[n] = { 0 };// n�Ǳ��� ���ﲻ��


	// #define ����ı�ʶ������
	//MAX = 100;// #define�Ĳ��ܸ�
	int a = MAX;
	printf("a = %d\n", a);



	// ö�ٳ��� - ����һһ�оٵĳ���
	// enum ö�ٹؼ���
	// �Ա�
	enum Sex
	{
		// ����ö�����͵ı����� δ������ȡֵ
		// ö�ٳ���
		�� = 5,//	����ֵ
		Ů,
		����
	};
	// ֻ��ȡֵ�����е�ֵ
	enum Sex s = ��;

	printf("%d\n", ��);		// 0
	printf("%d\n", Ů);		// 1
	printf("%d\n", ����);	// 2

	return 0;
}