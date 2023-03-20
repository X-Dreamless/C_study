
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

			4.7 ��̬(������̬)

				4.7.1 ��̬�Ļ�������

				��̬��ԭ������

				4.7.2 ��̬����һ-��������

				4.7.3 ���麯���ͳ�����

				4.7.4 ��̬������-������Ʒ

				4.7.5 �������ʹ�������

				4.7.6 ��̬������-������װ

					����������

						������Ҫ��ɲ���Ϊ CPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��

						��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����

						�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�

						����ʱ��װ��̨��ͬ�ĵ��Խ��й���

						˼·��

							������
								���캯��������3�����ָ��
								��������

							CPU��
								������

							�Կ���
								������

							�ڴ���
								������

							�����������
								���� 1 CPU
								���� 1 GPU
								���� 1 RAM
*/

#include <iostream>

using namespace std;

// ����ͬ�����

// ���� CPU ��
class CPU
{
public:
	virtual void calculate() = 0;
};

// ���� �Կ� ��
class GPU
{
public:
	virtual void display() = 0;
};

// ���� �ڴ� ��
class RAM
{
public:
	virtual void storage() = 0;
};



// ������
class Computer
{
public:
	Computer(CPU* cpu, GPU* gpu, RAM* ram)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_ram = ram;
	}

	// ��������
	void work()
	{
		m_cpu->calculate();
		m_gpu->display();
		m_ram->storage();
	}

	// �ͷ�3�����
	~Computer()
	{
		if (m_cpu != NULL) { delete m_cpu; m_cpu = NULL; }
		if (m_gpu != NULL) { delete m_gpu; m_gpu = NULL; }
		if (m_ram != NULL) { delete m_ram; m_ram = NULL; }
	}


private:
	// �����಻��ʵ���������ǿ��Զ���һ��ָ������ָ��
	CPU* m_cpu;
	GPU* m_gpu;
	RAM* m_ram;
};



// ���峧��

// ����1
class manufacturer_1_CPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "manufacturer_1_CPU" << endl;
	}
};

class manufacturer_1_GPU : public GPU
{
public:
	virtual void display()
	{
		cout << "manufacturer_1_GPU" << endl;
	}
};

class manufacturer_1_RAM : public RAM
{
public:
	virtual void storage()
	{
		cout << "manufacturer_1_RAM" << endl;
	}
};

// ����2
class manufacturer_2_CPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "manufacturer_2_CPU" << endl;
	}
};

class manufacturer_2_GPU : public GPU
{
public:
	virtual void display()
	{
		cout << "manufacturer_2_GPU" << endl;
	}
};

class manufacturer_2_RAM : public RAM
{
public:
	virtual void storage()
	{
		cout << "manufacturer_2_RAM" << endl;
	}
};





void test1()
{
	// ��̬ʹ������������ָ�������ָ���������

	// ��һ̨���� ���
	CPU* _1_CPU = new manufacturer_1_CPU;
	GPU* _1_GPU = new manufacturer_1_GPU;
	RAM* _1_RAM = new manufacturer_1_RAM;

	// ��һ̨���� ��װ
	Computer* computer_1 = new Computer(_1_CPU, _1_GPU, _1_RAM);
	computer_1->work();
	delete computer_1;

	cout << "----" << endl;

	// �ڶ�̨���� ���
	//CPU* _2_CPU = new manufacturer_2_CPU;
	//GPU* _2_GPU = new manufacturer_2_GPU;
	//RAM* _2_RAM = new manufacturer_2_RAM;

	// �ڶ�̨���� ��װ
	Computer* computer_2 = new Computer(new manufacturer_2_CPU, new manufacturer_2_GPU, new manufacturer_2_RAM);
	computer_2->work();
	delete computer_2;

	cout << "----" << endl;

	// ����̨���� ��װ
	Computer* computer_3 = new Computer(new manufacturer_2_CPU, new manufacturer_1_GPU, new manufacturer_2_RAM);
	computer_3->work();
	delete computer_3;
}

int main()
{
	test1();

	return 0;
}