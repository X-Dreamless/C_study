
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

					�̳е��﷨��class ���� : �̳з�ʽ ����

					�̳з�ʽһ�������֣�

						�����̳�
						�����̳�
						˽�м̳�

					|                                 |------------|
					|                                 | class A    |
					|                                 | {          |
					|                                 | public:    |
					|                                 |     int a; |
					|                                 | protected: |
					|                                 |     int b; |
					|                                 | private:   |
					|                                 |     int c; |
					|                                 | };         |
					|                                 |------------|
					|
					|                   ��                  ��                    ˽
					|                 ��                    ��                      ��
					|               ��                      ��                        ��
					|             ��                        ��                          ��
					|
					|   |--------------------|    |-----------------------|    |---------------------|
					|   | class B : public A |    | class B : protected A |    | class B : private A |
					|   | {                  |    | {                     |    | {                   |
					|   | public:            |    | protected:            |    | private:            |
					|   |     int a;         |    |     int a;            |    |     int a;          |
					|   | protected:         |    |     int b;            |    |     int b;          |
					|   |     int b;         |    |                       |    |                     |
					|   | ���ɷ���:          |    | ���ɷ���:             |    | ���ɷ���:           |
					|   |     int c;         |    |     int c;            |    |     int c;          |
					|   | };                 |    | };                    |    | };                  |
					|   |--------------------|    |-----------------------|    |---------------------|
*/

//�����̳�

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A; // �����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C; //���ɷ���
	}
};

void myClass()
{
	Son1 s1;
	s1.m_A; //������ֻ�ܷ��ʵ�����Ȩ��
}



//�����̳�

class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A; // �����й�����Ա���������б�Ϊ����Ȩ��
		m_B; // �����б�����Ա���������л��Ǳ���Ȩ��
		//m_C; //���ɷ���
	}
};

void myClass2()
{
	Son2 s;
	//s.m_A; //���ɷ���
}



//˽�м̳�

class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A; // �����й�����Ա �������б�Ϊ ˽�г�Ա
		m_B; // �����б�����Ա �������б�Ϊ ˽�г�Ա
		//m_C; //���ɷ���
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//Son3��˽�м̳У����Լ̳�Son3��������GrandSon3�ж��޷����ʵ�
		//m_A;
		//m_B;
		//m_C;
	}
};
/*
	���Ե�Ļ��һ������һ������
	���Ե�Ļ�����Ѱ���������Ѱ�
	���Ե�Ļ��˵���˸�����˽�еķ�ʽ���У����в��������������Ӿͻ�ʧ��
	���Ե�Ļ��������˽���ӣ�ɶҲû��
*/