
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

				�̳������������������֮һ

				��Щ������֮���������Ĺ�ϵ��������ͼ�У�

					|                          ����
					|                        �L    �K
					|                      è        ��
					|                    �L            �K
					|   �ӷ�è ��żè ... ��˹è    ��ʿ�� ���� ... �¹�����Ȯ

				���Ƿ��֣�������Щ��ʱ���¼���ĳ�Ա����ӵ����һ���Ĺ��ԣ������Լ������ԡ�

				���ʱ�����ǾͿ��Կ������ü̳еļ����������ظ�����


				4.6.1 �̳еĻ����﷨

					�������ǿ����ܶ���վ�У����й�����ͷ���������ĵײ�����������������б�ֻ���������ݲ�ͬ

					���������Ƿֱ�������ͨд���ͼ̳е�д����ʵ����ҳ�е����ݣ���һ�¼̳д��ڵ������Լ��ô�

					��ͨʵ�֣�

						//Javaҳ��
                        class Java 
                        {
                        public:
                            void header()
                            {
                                cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
                            }
                            void footer()
                            {
                                cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
                            }
                            void left()
                            {
                                cout << "Java,Python,C++...(���������б�)" << endl;
                            }
                            void content()
                            {
                                cout << "JAVAѧ����Ƶ" << endl;
                            }
                        };
                        //Pythonҳ��
                        class Python
                        {
                        public:
                            void header()
                            {
                                cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
                            }
                            void footer()
                            {
                                cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
                            }
                            void left()
                            {
                                cout << "Java,Python,C++...(���������б�)" << endl;
                            }
                            void content()
                            {
                                cout << "Pythonѧ����Ƶ" << endl;
                            }
                        };
                        //C++ҳ��
                        class CPP 
                        {
                        public:
                            void header()
                            {
                                cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
                            }
                            void footer()
                            {
                                cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
                            }
                            void left()
                            {
                                cout << "Java,Python,C++...(���������б�)" << endl;
                            }
                            void content()
                            {
                                cout << "C++ѧ����Ƶ" << endl;
                            }
                        };

                        void test01()
                        {
                            //Javaҳ��
                            cout << "Java������Ƶҳ�����£� " << endl;
                            Java ja;
                            ja.header();
                            ja.footer();
                            ja.left();
                            ja.content();
                            cout << "--------------------" << endl;

                            //Pythonҳ��
                            cout << "Python������Ƶҳ�����£� " << endl;
                            Python py;
                            py.header();
                            py.footer();
                            py.left();
                            py.content();
                            cout << "--------------------" << endl;

                            //C++ҳ��
                            cout << "C++������Ƶҳ�����£� " << endl;
                            CPP cp;
                            cp.header();
                            cp.footer();
                            cp.left();
                            cp.content();

                        }

                        int main() {

                            test01();

                            system("pause");

                            return 0;
                        }

                    �ܽ᣺

                        �̳еĺô������Լ����ظ��Ĵ���

                        class A : public B;

                        A ���Ϊ���� �� ������

                        B ���Ϊ���� �� ����

                        �������еĳ�Ա���������󲿷֣�

                        һ���Ǵӻ���̳й����ģ�һ�����Լ����ӵĳ�Ա��

                        �ӻ���̳й������ı����乲�ԣ��������ĳ�Ա����������ԡ�
*/

#include <iostream>

using namespace std;

// �̳�ʵ�֣�

//����ҳ��
class BasePage
{
public:
    void header()
    {
        cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
    }

    void footer()
    {
        cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
    }
    void left()
    {
        cout << "Java,Python,C++...(���������б�)" << endl;
    }

};

//Javaҳ��
class Java : public BasePage
{
public:
    void content()
    {
        cout << "JAVAѧ����Ƶ" << endl;
    }
};
//Pythonҳ��
class Python : public BasePage
{
public:
    void content()
    {
        cout << "Pythonѧ����Ƶ" << endl;
    }
};
//C++ҳ��
class CPP : public BasePage
{
public:
    void content()
    {
        cout << "C++ѧ����Ƶ" << endl;
    }
};

void test01()
{
    //Javaҳ��
    cout << "Java������Ƶҳ�����£� " << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "--------------------" << endl;

    //Pythonҳ��
    cout << "Python������Ƶҳ�����£� " << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "--------------------" << endl;

    //C++ҳ��
    cout << "C++������Ƶҳ�����£� " << endl;
    CPP cp;
    cp.header();
    cp.footer();
    cp.left();
    cp.content();
}

int main()
{
    test01();

    return 0;
}