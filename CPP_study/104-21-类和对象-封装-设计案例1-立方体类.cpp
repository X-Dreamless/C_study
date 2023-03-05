
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

					�����������(Cube)

					������������������

					�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
*/

#include <iostream>

using namespace std;


class Cube
{
public:

	// ���� ��
	void setLength(int L)
	{
		m_L = L;
	}

	// ���� ��
	void setWidth(int W)
	{
		m_W = W;
	}

	// ���� ��
	void setHeight(int H)
	{
		m_H = H;
	}

	// ��ȡ ��
	int getLength()
	{
		return m_L;
	}

	// ��ȡ ��
	int getWidth()
	{
		return m_W;
	}

	// ��ȡ ��
	int getHeight()
	{
		return m_H;
	}

	// ���������������S = 2(ab + ac + bc)
	int cubeS()
	{
		return 2 * ( (m_L * m_W) + (m_L * m_H) + (m_W * m_H) );
	}

	// ���������������
	int cubeV()
	{
		return m_L * m_W * m_H;
	}

	// ��Ա���� �ж������������Ƿ����
	int isSameByClass(Cube& c)
	{
		if
		(
			m_L == c.getLength() &&
			m_W == c.getWidth() &&
			m_H == c.getHeight()
		)
		{
			return 1;// ���
		}
		else
		{
			return 0;
		}
	}

private:
	int m_L;// ��
	int m_W;// ��
	int m_H;// ��
};


// ȫ�ֺ��� �ж������������Ƿ����
int isSame(Cube &c1, Cube &c2)
{
	if
	(
		c1.getLength() == c2.getLength() && 
		c1.getWidth() == c2.getWidth() && 
		c1.getHeight() == c2.getHeight()
	)
	{
		return 1;// ���
	}
	else
	{
		return 0;
	}
}

int main()
{
	Cube c1;
	Cube c2;

	c1.setLength(10);
	c1.setWidth(10);
	c1.setHeight(10);

	c2.setLength(10);
	c2.setWidth(10);
	c2.setHeight(10);

	cout << "c1�����" << c1.cubeS() << endl;
	cout << "c1�����" << c1.cubeV() << endl;

	cout << "c2�����" << c2.cubeS() << endl;
	cout << "c2�����" << c2.cubeV() << endl;

	cout << isSame(c1, c2) << endl;
	cout << c1.isSameByClass(c2) << endl;

	
	/*
		���Ե�Ļ��ȷʵmain��д���ˣ�Ȼ����ڿ�������������Ĺ��ܣ���ת���Խ��ߣ�ͶӰ��������࣬�����Ǽ̳���������ȵȣ���������ܵ���
	*/

	return 0;
}