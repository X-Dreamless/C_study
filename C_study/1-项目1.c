/*
#include<stdint.h>
int main()
{
	printf("hello world");

	getchar();//��ֹ�������ˣ��ۿ����н��
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
	printf("4.1.2��4.1.3���ˣ���ѧ�ĵ�����ע��һ��);
	return 0;
}
*/


/*
#include <stdio.h>

int main()
{
	// %d ˵��������һ������Ҫ��������λ����
	// printf("12 + 34=%d\n" , 12 + 34);
	// printf("100-23=%d\n", 100 - 23);

	int �۸� = 0;

	printf("��������");
	scanf("%d", &�۸�);

	int �ı� = 100 - �۸�;

	printf("����%dԪ\n", �ı�);

	return 0;
}


*/


#include <stdio.h>

int main()
{
	// const �ǹؼ��֣�����ȥ�ʹ������������ǳ�����
	/*	const��һ�����η�������int��ǰ�棬
		�����������������һ��const(�����)�����ԡ�
		���const�����Ա�ʾ���������ֵһ����ʼ����
		�Ͳ������޸���
		const int AMOUNT = 100;
	*/
	int ��� = 100;
	int �۸� = 0;

	printf("�������Ԫ����");
	// vsҪ��scanf_s��Ȼ�ᱨ��
	// ��scanf����Ҫ������ȡʲô������һ��Ҫ��&���ڱ�������ǰ��
	scanf_s("%d", &�۸�);

	printf("������Ʊ��");
	scanf_s("%d", &���);

	int �ı� = ��� - �۸�;

	printf("����%dԪ��\n", �ı�);








	int a;
	int b;

	printf("��������������");
	scanf_s("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);

	return 0;
}

/*
	������ʼ��
		<��������><��������> = <��ʼֵ>
		int �۸� = 0;

	��ϱ��������ʱ�� Ҳ��Ҳ����������е�����������������ʼֵ
		int �۸�,����;
		int �۸� = 0, ���� = 100;
*/