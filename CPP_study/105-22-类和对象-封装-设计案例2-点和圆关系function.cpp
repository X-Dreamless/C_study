
#include "105-22-��Ͷ���-��װ-��ư���2-���Բ��ϵ.h"

/*
	ͷ�ļ���������֮��ʵ��ֻ��Ҫд ��Ա���� ��ʵ�֣�
	���� ��Ա������ ǰ��Ҫ���� ���ĸ���������򣬱��磺
		����ֵ���� ������::������()

*/

// ���ࣨPoint��

// ���� ����X
void Point::setX(int x)
{
	m_X = x;
}

// ���� ����Y
void Point::setY(int y)
{
	m_Y = y;
}

// ��ȡ ����X
int Point::getX()
{
	return m_X;
}

// ��ȡ ����Y
int Point::getY()
{
	return m_Y;
}



// Բ���ࣨCircle��

// ���� �뾶
void Circle::setR(int r)
{
	m_R = r;
}

// ���� Բ��
void Circle::setCenter(Point& center)
{
	m_Center = center;
}

// ��ȡ �뾶
int Circle::getR()
{
	return m_R;
}

// ��ȡ Բ��
Point& Circle::getCenter()
{
	return m_Center;
}
