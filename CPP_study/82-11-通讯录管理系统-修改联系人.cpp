
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

		ͨѶ¼����ϵͳ

			1��ϵͳ����

				ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ��ߡ�

				���̳���Ҫ����C++��ʵ��һ��ͨѶ¼����ϵͳ

				ϵͳ����Ҫʵ�ֵĹ������£�

					�����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
					��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
					ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
					������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
					�޸���ϵ�ˣ��������������޸�ָ����ϵ��
					�����ϵ�ˣ����ͨѶ¼��������Ϣ
					�˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼


			2��������Ŀ

				������Ŀ�������£�

					��������Ŀ
					����ļ�


			3���˵�����

				���������� �û�ѡ���ܵĽ���

				�˵�����Ч������ͼ��

					|*********************
					|**** 1 �����ϵ�� ****
					|**** 2 ��ʾ��ϵ�� ****
					|**** 3 ɾ����ϵ�� ****
					|**** 4 ������ϵ�� ****
					|**** 5 �޸���ϵ�� ****
					|**** 6 �����ϵ�� ****
					|**** 7 �˳�ͨѶ¼ ****
					|*********************

				���裺
					��װ������ʾ�ý��� �� void showMenu()
					��main�����е��÷�װ�õĺ���

				���룺

					#include<iostream>
					using namespace std;

					//�˵�����
					void showMenu()
					{
						cout << "***************************" << endl;
						cout << "*****  1�������ϵ��  *****" << endl;
						cout << "*****  2����ʾ��ϵ��  *****" << endl;
						cout << "*****  3��ɾ����ϵ��  *****" << endl;
						cout << "*****  4��������ϵ��  *****" << endl;
						cout << "*****  5���޸���ϵ��  *****" << endl;
						cout << "*****  6�������ϵ��  *****" << endl;
						cout << "*****  0���˳�ͨѶ¼  *****" << endl;
						cout << "***************************" << endl;
					}

					int main() {

						showMenu();

						system("pause");

						return 0;
					}


			4���˳�����

				�����������˳�ͨѶ¼ϵͳ

				˼·�������û���ͬ��ѡ�񣬽��벻ͬ�Ĺ��ܣ�����ѡ��switch��֧�ṹ���������ܹ����д

				���û�ѡ��0ʱ��ִ���˳���ѡ�������Ȳ���������Ҳ�����˳�����

				���룺

					int main() {

						int select = 0;

						while (true)
						{
							showMenu();

							cin >> select;

							switch (select)
							{
							case 1:  //�����ϵ��
								break;
							case 2:  //��ʾ��ϵ��
								break;
							case 3:  //ɾ����ϵ��
								break;
							case 4:  //������ϵ��
								break;
							case 5:  //�޸���ϵ��
								break;
							case 6:  //�����ϵ��
								break;
							case 0:  //�˳�ͨѶ¼
								cout << "��ӭ�´�ʹ��" << endl;
								system("pause");
								return 0;
								break;
							default:
								break;
							}
						}

						system("pause");

						return 0;
					}


			5�������ϵ��

				����������

					ʵ�������ϵ�˹��ܣ���ϵ������Ϊ1000�ˣ���ϵ����Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ��

				�����ϵ��ʵ�ֲ��裺

					�����ϵ�˽ṹ��
					���ͨѶ¼�ṹ��
					main�����д���ͨѶ¼
					��װ�����ϵ�˺���
					���������ϵ�˹���

				5.1 �����ϵ�˽ṹ��

					��ϵ����Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ

					������£�

					#include <string>  //stringͷ�ļ�
					//��ϵ�˽ṹ��
					struct Person
					{
						string m_Name; //����
						int m_Sex; //�Ա�1�� 2Ů
						int m_Age; //����
						string m_Phone; //�绰
						string m_Addr; //סַ
					};

				5.2 ���ͨѶ¼�ṹ��

					���ʱ�������ͨѶ¼�ṹ���У�ά��һ������Ϊ1000�Ĵ����ϵ�˵����飬����¼��ǰͨѶ¼����ϵ������

					�������

					#define MAX 1000 //�������

					//ͨѶ¼�ṹ��
					struct Addressbooks
					{
						struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
						int m_Size; //ͨѶ¼����Ա����
					};

				5.3 main�����д���ͨѶ¼

					�����ϵ�˺�����װ�ú���main�����д���һ��ͨѶ¼�������������������Ҫһֱά����ͨѶ¼

					mian������ʼλ����ӣ�

						//����ͨѶ¼
						Addressbooks abs;
						//��ʼ��ͨѶ¼������
						abs.m_Size = 0;

				5.4 ��װ�����ϵ�˺���

					˼·�������ϵ��ǰ���ж�ͨѶ¼�Ƿ�������������˾Ͳ�����ӣ�δ�����������ϵ����Ϣ������뵽ͨѶ¼

					�����ϵ�˴��룺

					//1�������ϵ����Ϣ
					void addPerson(Addressbooks *abs)
					{
						//�жϵ绰���Ƿ�����
						if (abs->m_Size == MAX)
						{
							cout << "ͨѶ¼�������޷����" << endl;
							return;
						}
						else
						{
							//����
							string name;
							cout << "������������" << endl;
							cin >> name;
							abs->personArray[abs->m_Size].m_Name = name;

							cout << "�������Ա�" << endl;
							cout << "1 -- ��" << endl;
							cout << "2 -- Ů" << endl;

							//�Ա�
							int sex = 0;
							while (true)
							{
								cin >> sex;
								if (sex == 1 || sex == 2)
								{
									abs->personArray[abs->m_Size].m_Sex = sex;
									break;
								}
								cout << "������������������";
							}

							//����
							cout << "���������䣺" << endl;
							int age = 0;
							cin >> age;
							abs->personArray[abs->m_Size].m_Age = age;

							//��ϵ�绰
							cout << "��������ϵ�绰��" << endl;
							string phone = "";
							cin >> phone;
							abs->personArray[abs->m_Size].m_Phone = phone;

							//��ͥסַ
							cout << "�������ͥסַ��" << endl;
							string address;
							cin >> address;
							abs->personArray[abs->m_Size].m_Addr = address;

							//����ͨѶ¼����
							abs->m_Size++;

							cout << "��ӳɹ�" << endl;
							system("pause");
							system("cls");
						}
					}

				5.5 ���������ϵ�˹���

					ѡ������У�������ѡ����1�����������ϵ�ˣ����ǿ��Բ����¸ù���

					��switch case ����У�case1����ӣ�

					case 1:  //�����ϵ��
						addPerson(&abs);
						break;


			6����ʾ��ϵ��

				������������ʾͨѶ¼�����е���ϵ����Ϣ

				��ʾ��ϵ��ʵ�ֲ��裺

					��װ��ʾ��ϵ�˺���
					������ʾ��ϵ�˹���

				6.1 ��װ��ʾ��ϵ�˺���

					˼·���ж������ǰͨѶ¼��û����Ա������ʾ��¼Ϊ�գ���������0����ʾͨѶ¼����Ϣ

					��ʾ��ϵ�˴��룺

					//2����ʾ������ϵ����Ϣ
					void showPerson(Addressbooks * abs)
					{
						if (abs->m_Size == 0)
						{
							cout << "��ǰ��¼Ϊ��" << endl;
						}
						else
						{
							for (int i = 0; i < abs->m_Size; i++)
							{
								cout << "������" << abs->personArray[i].m_Name << "\t";
								cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
								cout << "���䣺" << abs->personArray[i].m_Age << "\t";
								cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
								cout << "סַ��" << abs->personArray[i].m_Addr << endl;
							}
						}

						system("pause");
						system("cls");

					}

				6.2 ������ʾ��ϵ�˹���

					��switch case����У�case 2 �����

					case 2:  //��ʾ��ϵ��
						showPerson(&abs);
						break;


			7��ɾ����ϵ��

				����������������������ɾ��ָ����ϵ��

				ɾ����ϵ��ʵ�ֲ��裺

					��װ�����ϵ���Ƿ����
					��װɾ����ϵ�˺���
					����ɾ����ϵ�˹���

				7.1 ��װ�����ϵ���Ƿ����

					���˼·��

					ɾ����ϵ��ǰ��������Ҫ���ж��û��������ϵ���Ƿ���ڣ��������ɾ������������ʾ�û�û��Ҫɾ������ϵ��

					������ǿ��԰Ѽ����ϵ���Ƿ���ڷ�װ��һ�������У�������ڣ�������ϵ����ͨѶ¼�е�λ�ã������ڷ���-1

					�����ϵ���Ƿ���ڴ��룺

					//�ж��Ƿ���ڲ�ѯ����Ա�����ڷ���������������λ�ã������ڷ���-1
					int isExist(Addressbooks * abs, string name)
					{
						for (int i = 0; i < abs->m_Size; i++)
						{
							if (abs->personArray[i].m_Name == name)
							{
								return i;
							}
						}
						return -1;
					}

				7.2 ��װɾ����ϵ�˺���

					�����û��������ϵ���жϸ�ͨѶ¼���Ƿ��д���

					���ҵ�����ɾ��������ʾɾ���ɹ�

					�鲻����ʾ���޴��ˡ�

					//3��ɾ��ָ����ϵ����Ϣ
					void deletePerson(Addressbooks * abs)
					{
						cout << "��������Ҫɾ������ϵ��" << endl;
						string name;
						cin >> name;

						int ret = isExist(abs, name);
						if (ret != -1)
						{
							for (int i = ret; i < abs->m_Size; i++)
							{
								abs->personArray[i] = abs->personArray[i + 1];
							}
							 abs->m_Size--;
							cout << "ɾ���ɹ�" << endl;
						}
						else
						{
							cout << "���޴���" << endl;
						}

						system("pause");
						system("cls");
					}

				7.3 ����ɾ����ϵ�˹���

					��switch case ����У�case3����ӣ�

					case 3:  //ɾ����ϵ��
						deletePerson(&abs);
						break;


			8��������ϵ��

				�������������������鿴ָ����ϵ����Ϣ

				������ϵ��ʵ�ֲ���

					��װ������ϵ�˺���
					���Բ���ָ����ϵ��

				8.1 ��װ������ϵ�˺���

					ʵ��˼·���ж��û�ָ������ϵ���Ƿ���ڣ����������ʾ��Ϣ������������ʾ���޴��ˡ�

					������ϵ�˴��룺

					//4������ָ����ϵ����Ϣ
					void findPerson(Addressbooks * abs)
					{
						cout << "��������Ҫ���ҵ���ϵ��" << endl;
						string name;
						cin >> name;

						int ret = isExist(abs, name);
						if (ret != -1)
						{
							cout << "������" << abs->personArray[ret].m_Name << "\t";
							cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
							cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
							cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
							cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
						}
						else
						{
							cout << "���޴���" << endl;
						}

						system("pause");
						system("cls");

					}

				8.2 ���Բ���ָ����ϵ��

					��switch case ����У�case4����ӣ�

					case 4:  //������ϵ��
						findPerson(&abs);
						break;


			9���޸���ϵ��

				�����������������������޸�ָ����ϵ��

				�޸���ϵ��ʵ�ֲ���

					��װ�޸���ϵ�˺���
					�����޸���ϵ�˹���

				9.1 ��װ�޸���ϵ�˺���

					ʵ��˼·�������û��������ϵ�ˣ�������ҳɹ������޸Ĳ���������ʧ����ʾ���޴���

					�޸���ϵ�˴��룺

					//5���޸�ָ����ϵ����Ϣ
					void modifyPerson(Addressbooks * abs)
					{
						cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
						string name;
						cin >> name;

						int ret = isExist(abs, name);
						if (ret != -1)
						{
							//����
							string name;
							cout << "������������" << endl;
							cin >> name;
							abs->personArray[ret].m_Name = name;

							cout << "�������Ա�" << endl;
							cout << "1 -- ��" << endl;
							cout << "2 -- Ů" << endl;

							//�Ա�
							int sex = 0;
							while (true)
							{
								cin >> sex;
								if (sex == 1 || sex == 2)
								{
									abs->personArray[ret].m_Sex = sex;
									break;
								}
								cout << "������������������";
							}

							//����
							cout << "���������䣺" << endl;
							int age = 0;
							cin >> age;
							abs->personArray[ret].m_Age = age;

							//��ϵ�绰
							cout << "��������ϵ�绰��" << endl;
							string phone = "";
							cin >> phone;
							abs->personArray[ret].m_Phone = phone;

							//��ͥסַ
							cout << "�������ͥסַ��" << endl;
							string address;
							cin >> address;
							abs->personArray[ret].m_Addr = address;

							cout << "�޸ĳɹ�" << endl;
						}
						else
						{
							cout << "���޴���" << endl;
						}

						system("pause");
						system("cls");

					}

				9.2 �����޸���ϵ�˹���

					��switch case ����У�case 5����ӣ�

					case 5:  //�޸���ϵ��
						modifyPerson(&abs);
						break;
*/