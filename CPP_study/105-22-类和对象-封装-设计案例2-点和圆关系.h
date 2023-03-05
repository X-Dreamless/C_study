#pragma once

#include <iostream>

using namespace std;

// ���ࣨPoint��
class Point
{
public:
	// ���� ����X
	void setX(int x);

	// ���� ����Y
	void setY(int y);

	// ��ȡ ����X
	int getX();

	// ��ȡ ����Y
	int getY();

private:
	int m_X;
	int m_Y;
};

// Բ���ࣨCircle��
class Circle
{
public:
	// ���� �뾶
	void setR(int r);

	// ���� Բ��
	void setCenter(Point& center);

	// ��ȡ �뾶
	int getR();

	// ��ȡ Բ��
	Point& getCenter();

private:
	int m_R;		// �뾶
	Point m_Center;	// Բ�����꣬Բ��Ҳ��һ����
};