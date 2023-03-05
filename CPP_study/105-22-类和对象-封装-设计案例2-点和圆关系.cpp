
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

		1 �ڴ����ģ��

		2 ����

		3 �������

		4 ��Ͷ���

			4.1 ��װ

				4.1.1 ��װ������

				4.1.2 struct��class����

				4.1.3 ��Ա��������Ϊ˽��

				��ϰ����1�������������

				��ϰ����2�����Բ�Ĺ�ϵ

					���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��

					(����Բ�⣬����Բ�ϣ�����Բ��)
					(�㵽Բ�ĵľ���)
*/

#include "105-22-��Ͷ���-��װ-��ư���2-���Բ��ϵ.h"






/*
	�㵽Բ�ľ��빫ʽ��(ԲX - ��X)��ƽ�� + (ԲY - ��Y)��ƽ�� �� ������

	�㵽Բ�ľ��� �� �뾶 �Ƚ�

	�򻯣�(ԲX - ��X)��ƽ�� + (ԲY - ��Y)��ƽ�� �� �뾶��ƽ�� �Ƚ�
*/
// �ж� ���Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	// ���� ����֮����� ��ƽ��
	int distance = 
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	// ���� �뾶 ��ƽ��
	int rDistance = c.getR() * c.getR();

	// �жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ ��" << endl;
	}
	else
	{
		cout << "����Բ ��" << endl;
	}
}


int main()
{
	// ����Բ
	Circle c;
	Point center;// Բ��

	center.setX(10);
	center.setY(0);

	c.setR(10);
	c.setCenter(center);

	// ������
	Point p;
	//p.setX(10);// ����Բ ��
	//p.setY(10);// ����Բ ��
	//p.setX(11);// ����Բ ��
	//p.setY(11);// ����Բ ��
	p.setX(9);// ����Բ ��
	p.setY(9);// ����Բ ��

	// �жϹ�ϵ
	isInCircle(c, p);

	return 0;
}