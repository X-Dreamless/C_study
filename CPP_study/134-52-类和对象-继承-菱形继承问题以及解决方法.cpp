
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

		1 �ڴ����ģ��

		2 ����

		3 �������

		4 ��Ͷ���

			4.1 ��װ

			4.2 ����ĳ�ʼ��������

			4.3 C++����ģ�ͺ�thisָ��

			4.4 ��Ԫ

			4.5 ���������

			4.6 �̳�

				4.6.1 �̳еĻ����﷨

				4.6.2 �̳з�ʽ

				4.6.3 �̳��еĶ���ģ��

				4.6.4 �̳��й��������˳��

				4.6.5 �̳�ͬ����Ա����ʽ

				4.6.6 �̳�ͬ����̬��Ա����ʽ

				4.6.7 ��̳��﷨

				4.6.8 ���μ̳�

					���μ̳и��

						����������̳�ͬһ������

						����ĳ����ͬʱ�̳�������������

						���ּ̳б���Ϊ���μ̳У�������ʯ�̳�

					���͵����μ̳а�����

						|     ����
						|     �L�K
						|   ��    ��
						|     �K�L
						|    ������

					���μ̳����⣺
						��̳��˶�������ݣ���ͬ���̳��˶�������ݣ���������ʹ������ʱ���ͻ���������ԡ�
						������̳��Զ�������ݼ̳������ݣ���ʵ����Ӧ������������������ֻ��Ҫһ�ݾͿ��ԡ�

					�ܽ᣺
						���μ̳д�������Ҫ����������̳�������ͬ�����ݣ�������Դ�˷��Լ���������
						������̳п��Խ�����μ̳�����


					��̳� ǰ
						class SheepTuo size(8):
							+---
						 0  | +--- (base class Sheep)
						 0  | | +--- (base class Animal)
						 0  | | | m_Age
							| | +---
							| +---
						 4  | +--- (base class Tuo)
						 4  | | +--- (base class Animal)
						 4  | | | m_Age
							| | +---
							| +---
							+---
						......

					��̳� ��
						class SheepTuo size(12):
							+--- 
						 0  | +--- (base class Sheep)
						 0  | | {vbptr}
							| +---
						 4  | +--- (base class Tuo)
						 4  | | {vbptr}
							| +---
							+---
							+--- (virtual base Animal)
						 8  | m_Age
							+---

						SheepTuo::$vbtable@Sheep@:
						 0  | 0
						 1  | 8 (SheepTuo(Sheep+0)Animal)
						......


					vbptr �����ָ��
						v   - virtual ��
						b   - base    ����
						ptr - pointer ָ��

						�����ָ�� �� ָ�� vbtable �������

					vbtable �������
						v     - virtual ��
						b     - base    ����
						table -         ���

						���м�¼��ƫ����

						SheepTuo::$vbtable@Sheep@:
						 0  | 0
						 1  | 8 (SheepTuo(Sheep+0)Animal)
								��
								ƫ����

						0 + 8 ��ָ���� m_Age

						 0  | +--- (base class Sheep)
						 0  | | {vbptr}
						 ��
						 .
						 .
						 .
						 ��
							+--- (virtual base Animal)
						 8  | m_Age

					�����������ֻ��һ��
*/

#include <iostream>

using namespace std;

class Animal
{
public:
	int m_Age;
};

//�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳�
//��ʱ�����ĸ���Animal��Ϊ�����
// ��������ֻ��һ����
class Sheep : virtual public Animal {};
class Tuo : virtual public Animal {};
class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 100;
	st.Tuo::m_Age = 200;

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

	// ��ʱ����һ�����ʷ�ʽ
	cout << "st.m_Age = " << st.m_Age << endl;
}


int main()
{
	test01();

	return 0;
}

/*
	�� ��Ӣ�ĵ���֪����ʲô�𣿲�֪���ǰɡ�OK�� ��֪���Ҹ����㰡 tuo �գ�
	�� ����������Ǻ���ƴ������Ҳ��֪�����Ӣ����ɶ�����۾��ú���ƴ�����������԰�

	SheepTuo���� װ��
*/