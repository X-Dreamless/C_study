
/*
	��1�׶�C++ ����֮�� ��0��1����

	��2�׶�ʵս-ͨѶ¼����

	��3�׶�-C++���ı��

	��4�׶�ʵս-���ڶ�̬����ҵְ��ϵͳ

		ְ������ϵͳ

			1������ϵͳ����

				ְ������ϵͳ������������˾������Ա������Ϣ

				���̳���Ҫ����C++��ʵ��һ�����ڶ�̬��ְ������ϵͳ

				��˾��ְ����Ϊ���ࣺ��ͨԱ���������ϰ壬��ʾ��Ϣʱ����Ҫ��ʾְ����š�ְ��������ְ����λ���Լ�ְ��

				��ͨԱ��ְ����ɾ�����������

				����ְ������ϰ彻�������񣬲��·������Ա��

				�ϰ�ְ�𣺹���˾��������

				����ϵͳ����Ҫʵ�ֵĹ������£�

					�˳���������˳���ǰ����ϵͳ
					����ְ����Ϣ��ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ��ְ����š����������ű��
					��ʾְ����Ϣ����ʾ��˾�ڲ�����ְ������Ϣ
					ɾ����ְְ�������ձ��ɾ��ָ����ְ��
					�޸�ְ����Ϣ�����ձ���޸�ְ��������Ϣ
					����ְ����Ϣ������ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
					���ձ�����򣺰���ְ����ţ�������������������û�ָ��
					��������ĵ�������ļ��м�¼������ְ����Ϣ �����ǰ��Ҫ�ٴ�ȷ�ϣ���ֹ��ɾ��

				ϵͳ����Ч��ͼ���£�

					|   ��ӭʹ��ְ������ϵͳ
					|   0. �˳��������
					|   1. ����ְ����Ϣ
					|   2. ��ʾְ����Ϣ
					|   3. ɾ����ְְ��
					|   4. �޸�ְ����Ϣ
					|   5. ����ְ����Ϣ
					|   6. ���ձ������
					|   7. ��������ĵ�
					|
					|   ����������ѡ��

				������û���ͬ��ѡ����ɲ�ͬ�Ĺ��ܣ�


			2��������Ŀ

				������Ŀ�������£�

					��������Ŀ
					����ļ�


			3������������

				�����ฺ����������£�

					���û��Ĺ�ͨ�˵�����
					��ְ����ɾ�Ĳ�Ĳ���
					���ļ��Ķ�д����

				3.1�����ļ�

					��ͷ�ļ���Դ�ļ����ļ����·ֱ𴴽�workerManager.h �� workerManager.cpp�ļ�

				3.2 ͷ�ļ�ʵ��

					��workerManager.h����ƹ�����

					�������£�

						#pragma once
						#include<iostream>
						using namespace std;


						class WorkerManager
						{
						public:

							//���캯��
							WorkerManager();

							//��������
							~WorkerManager();

						};

				3.3 Դ�ļ�ʵ��

					��workerManager.cpp�н����������������ʵ�ֲ�ȫ

						#include "workerManager.h"

						WorkerManager::WorkerManager()
						{
						}

						WorkerManager::~WorkerManager()
						{
						}

					����ְ���������Դ������


			4���˵�����

				�������������û��Ĺ�ͨ����

				4.1 ��ӳ�Ա����

					�ڹ�����workerManager.h����ӳ�Ա���� void Show_Menu();

				4.2 �˵�����ʵ��

					�ڹ�����workerManager.cpp��ʵ�� Show_Menu()����

						void WorkerManager::Show_Menu()
						{
							cout << "********************************************" << endl;
							cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
							cout << "*************  0.�˳��������  *************" << endl;
							cout << "*************  1.����ְ����Ϣ  *************" << endl;
							cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
							cout << "*************  3.ɾ����ְְ��  *************" << endl;
							cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
							cout << "*************  5.����ְ����Ϣ  *************" << endl;
							cout << "*************  6.���ձ������  *************" << endl;
							cout << "*************  7.��������ĵ�  *************" << endl;
							cout << "********************************************" << endl;
							cout << endl;
						}

				4.3 ���Բ˵�����

					��ְ������ϵͳ.cpp�в��Բ˵�����

					���룺

						#include<iostream>
						using namespace std;
						#include "workerManager.h"

						int main() {

							WorkerManager wm;

							wm.Show_Menu();

							system("pause");

							return 0;
						}


			5���˳�����

				5.1 �ṩ���ܽӿ�

					��main�������ṩ��֧ѡ���ṩÿ�����ܽӿ�

					���룺

						int main() {

						WorkerManager wm;
						int choice = 0;
						while (true)
						{
							//չʾ�˵�
							wm.Show_Menu();
							cout << "����������ѡ��:" << endl;
							cin >> choice;

							switch (choice)
							{
							case 0: //�˳�ϵͳ
								break;
							case 1: //���ְ��
								break;
							case 2: //��ʾְ��
								break;
							case 3: //ɾ��ְ��
								break;
							case 4: //�޸�ְ��
								break;
							case 5: //����ְ��
								break;
							case 6: //����ְ��
								break;
							case 7: //����ļ�
								break;
							default:
								system("cls");
								break;
							}
						}

						system("pause");
						return 0;
					}

				5.2 ʵ���˳�����

					��workerManager.h���ṩ�˳�ϵͳ�ĳ�Ա���� void exitSystem();

					��workerManager.cpp���ṩ����Ĺ���ʵ��

						void WorkerManager::exitSystem()
						{
							cout << "��ӭ�´�ʹ��" << endl;
							system("pause");
							exit(0);
						}

				5.3���Թ���

					��main������֧ 0 ѡ���У������˳�����Ľӿ�


			6������ְ����

				6.1 ����ְ��������

					ְ���ķ���Ϊ����ͨԱ���������ϰ�

					������ְ������һ���ࣨworker����,���ö�̬����ְͬ������

					ְ��������Ϊ��ְ����š�ְ��������ְ�����ڲ��ű��

					ְ������ΪΪ����λְ����Ϣ��������ȡ��λ����

					ͷ�ļ��ļ����� �����ļ�worker.h �ļ�����������´��룺

						#pragma once
						#include<iostream>
						#include<string>
						using namespace std;

						//ְ���������
						class Worker
						{
						public:

							//��ʾ������Ϣ
							virtual void showInfo() = 0;
							//��ȡ��λ����
							virtual string getDeptName() = 0;

							int m_Id; //ְ�����
							string m_Name; //ְ������
							int m_DeptId; //ְ�����ڲ������Ʊ��
						};

				6.2 ������ͨԱ����

					��ͨԱ����̳�ְ�������࣬����д�����д��麯��

					��ͷ�ļ���Դ�ļ����ļ����·ֱ𴴽�employee.h �� employee.cpp�ļ�

					employee.h�д������£�

						#pragma once
						#include<iostream>
						using namespace std;
						#include "worker.h"

						//Ա����
						class Employee :public Worker
						{
						public:

							//���캯��
							Employee(int id, string name, int dId);

							//��ʾ������Ϣ
							virtual void showInfo();

							//��ȡְ����λ����
							virtual string getDeptName();
						};

					employee.cpp�д������£�

						#include "employee.h"

						Employee::Employee(int id, string name, int dId)
						{
							this->m_Id = id;
							this->m_Name = name;
							this->m_DeptId = dId;
						}

						void Employee::showInfo()
						{
							cout << "ְ����ţ� " << this->m_Id
								<< " \tְ�������� " << this->m_Name
								<< " \t��λ��" << this->getDeptName()
								<< " \t��λְ����ɾ�����������" << endl;
						}


						string Employee::getDeptName()
						{
							return string("Ա��");
						}

				6.3 ����������

					������̳�ְ�������࣬����д�����д��麯��������ͨԱ������

					��ͷ�ļ���Դ�ļ����ļ����·ֱ𴴽�manager.h �� manager.cpp�ļ�

					manager.h�д������£�

						#pragma once
						#include<iostream>
						using namespace std;
						#include "worker.h"

						//������
						class Manager :public Worker
						{
						public:

							Manager(int id, string name, int dId);

							//��ʾ������Ϣ
							virtual void showInfo();

							//��ȡְ����λ����
							virtual string getDeptName();
						};

					manager.cpp�д������£�

						#include "manager.h"

						Manager::Manager(int id, string name, int dId)
						{
							this->m_Id = id;
							this->m_Name = name;
							this->m_DeptId = dId;

						}

						void Manager::showInfo()
						{
							cout << "ְ����ţ� " << this->m_Id
								<< " \tְ�������� " << this->m_Name
								<< " \t��λ��" << this->getDeptName()
								<< " \t��λְ������ϰ彻��������,���·������Ա��" << endl;
						}

						string Manager::getDeptName()
						{
							return string("����");
						}

				6.4 �����ϰ���

					�ϰ���̳�ְ�������࣬����д�����д��麯��������ͨԱ������

					��ͷ�ļ���Դ�ļ����ļ����·ֱ𴴽�boss.h �� boss.cpp�ļ�

					boss.h�д������£�

						#pragma once
						#include<iostream>
						using namespace std;
						#include "worker.h"

						//�ϰ���
						class Boss :public Worker
						{
						public:

							Boss(int id, string name, int dId);

							//��ʾ������Ϣ
							virtual void showInfo();

							//��ȡְ����λ����
							virtual string getDeptName();
						};

					boss.cpp�д������£�

						#include "boss.h"

						Boss::Boss(int id, string name, int dId)
						{
							this->m_Id = id;
							this->m_Name = name;
							this->m_DeptId = dId;

						}

						void Boss::showInfo()
						{
							cout << "ְ����ţ� " << this->m_Id
								<< " \tְ�������� " << this->m_Name
								<< " \t��λ��" << this->getDeptName()
								<< " \t��λְ�𣺹���˾��������" << endl;
						}

						string Boss::getDeptName()
						{
							return string("�ܲ�");
						}

				6.5 ���Զ�̬

					��ְ������ϵͳ.cpp����Ӳ��Ժ��������������ܹ�������̬

					���Դ������£�

						#include "worker.h"
						#include "employee.h"
						#include "manager.h"
						#include "boss.h"


						void test()
						{
							Worker * worker = NULL;
							worker = new Employee(1, "����", 1);
							worker->showInfo();
							delete worker;

							worker = new Manager(2, "����", 2);
							worker->showInfo();
							delete worker;

							worker = new Boss(3, "����", 3);
							worker->showInfo();
							delete worker;
						}

				���Գɹ��󣬲��Դ������ע�ͱ���������ѡ��ɾ��


			7�����ְ��

				�����������������ְ�������ұ��浽�ļ���

				7.1 ���ܷ���

					������

						�û�����������ʱ�����ܻᴴ����ͬ�����ְ��

						����뽫���в�ͬ�����Ա�������뵽һ�������У����Խ�����Ա����ָ��ά����һ��������

						������ڳ�����ά������������ȵ����飬���Խ����鴴����������������Worker **��ָ��ά��

						|   newEmployee  newBoss      newEmployee  newManager   newEmployee
						|       ��            ��            ��            ��            ��
						|   [Worker*]    [Worker*]    [Worker*]    [Worker*]    [Worker*]
						|
						|   ������������
						|   new Worker*[5]

				7.2 ����ʵ��

					��WokerManager.hͷ�ļ�����ӳ�Ա���� ���룺

						//��¼�ļ��е���������
						int m_EmpNum;

						//Ա�������ָ��
						Worker ** m_EmpArray;

					��WorkerManager���캯���г�ʼ������

						WorkerManager::WorkerManager()
						{
							//��ʼ������
							this->m_EmpNum = 0;

							//��ʼ������ָ��
							this->m_EmpArray = NULL;
						}

					��workerManager.h����ӳ�Ա����

						//����ְ��
						void Add_Emp();

					workerManager.cpp��ʵ�ָú���

						//����ְ��
						void WorkerManager::Add_Emp()
						{
							cout << "����������ְ�������� " << endl;

							int addNum = 0;
							cin >> addNum;

							if (addNum > 0)
							{
								//�����¿ռ��С
								int newSize = this->m_EmpNum + addNum;

								//�����¿ռ�
								Worker ** newSpace = new Worker*[newSize];

								//��ԭ�ռ������ݴ�ŵ��¿ռ���
								if (this->m_EmpArray != NULL)
								{
									for (int i = 0; i < this->m_EmpNum; i++)
									{
										newSpace[i] = this->m_EmpArray[i];
									}
								}

								//����������
								for (int i = 0; i < addNum; i++)
								{
									int id;
									string name;
									int dSelect;

									cout << "������� " << i + 1 << " ����ְ����ţ�" << endl;
									cin >> id;


									cout << "������� " << i + 1 << " ����ְ��������" << endl;
									cin >> name;


									cout << "��ѡ���ְ���ĸ�λ��" << endl;
									cout << "1����ְͨ��" << endl;
									cout << "2������" << endl;
									cout << "3���ϰ�" << endl;
									cin >> dSelect;


									Worker * worker = NULL;
									switch (dSelect)
									{
									case 1: //��ͨԱ��
										worker = new Employee(id, name, 1);
										break;
									case 2: //����
										worker = new Manager(id, name, 2);
										break;
									case 3:  //�ϰ�
										worker = new Boss(id, name, 3);
										break;
									default:
										break;
									}


									newSpace[this->m_EmpNum + i] = worker;
								}

								//�ͷ�ԭ�пռ�
								delete[] this->m_EmpArray;

								//�����¿ռ��ָ��
								this->m_EmpArray = newSpace;

								//�����µĸ���
								this->m_EmpNum = newSize;

								//��ʾ��Ϣ
								cout << "�ɹ����" << addNum << "����ְ����" << endl;
							}
							else
							{
								cout << "��������" << endl;
							}

							system("pause");
							system("cls");
						}

					��WorkerManager.cpp�����������У��ͷŶ�������

						WorkerManager::~WorkerManager()
						{
							if (this->m_EmpArray != NULL)
							{
								delete[] this->m_EmpArray;
							}
						}

				7.3 �������

					��main������֧ 1 ѡ���У��������ְ���ӿ�

				���ˣ����ְ���������й���ʵ�����


			8���ļ����� - д�ļ�

				�������������ļ����ж�д

				����һ����ӹ����У�����ֻ�ǽ����е�������ӵ����ڴ��У�һ������������޷�������

				����ļ�����������Ҫһ�����ļ����н����Ĺ��ܣ������ļ����ж�д����

				8.1 �趨�ļ�·��

					�������ǽ��ļ�·������workerManager.h����Ӻ곣��,���Ұ���ͷ�ļ� fstream

						#include <fstream>
						#define  FILENAME "empFile.txt"

				8.2 ��Ա��������

					��workerManager.h��������ӳ�Ա���� void save()

						//�����ļ�
						void save();

				8.3 �����ļ�����ʵ��

					void WorkerManager::save()
					{
						ofstream ofs;
						ofs.open(FILENAME, ios::out);


						for (int i = 0; i < this->m_EmpNum; i++)
						{
							ofs << this->m_EmpArray[i]->m_Id << " "
								<< this->m_EmpArray[i]->m_Name << " "
								<< this->m_EmpArray[i]->m_DeptId << endl;
						}

						ofs.close();
					}

				8.4 �����ļ����ܲ���

					�����ְ����������ӳɹ�����ӱ����ļ�����

					�ٴ����д��룬���ְ��

					ͬ��Ŀ¼�¶���ļ������ұ�������ӵ���Ϣ


			9���ļ����� - ���ļ�

				�������������ļ��е����ݶ�ȡ��������

				��Ȼ����ʵ�������ְ���󱣴浽�ļ��Ĳ���������ÿ�ο�ʼ���г��򣬲�û�н��ļ������ݶ�ȡ��������

				�����ǵĳ������л�������ļ�������

				��˹��캯����ʼ�����ݵ������Ϊ����

				��һ��ʹ�ã��ļ�δ����
				�ļ����ڣ��������ݱ��û����
				�ļ����ڣ����ұ���ְ������������

				9.1 �ļ�δ����

					��workerManager.h������µĳ�Ա���� m_FileIsEmpty��־�ļ��Ƿ�Ϊ��

						//��־�ļ��Ƿ�Ϊ��
						bool m_FileIsEmpty;

					�޸�WorkerManager.cpp�й��캯������

						WorkerManager::WorkerManager()
						{
							ifstream ifs;
							ifs.open(FILENAME, ios::in);

							//�ļ����������
							if (!ifs.is_open())
							{
								cout << "�ļ�������" << endl; //�������
								this->m_EmpNum = 0;  //��ʼ������
								this->m_FileIsEmpty = true; //��ʼ���ļ�Ϊ�ձ�־
								this->m_EmpArray = NULL; //��ʼ������
								ifs.close(); //�ر��ļ�
								return;
							}
						}

					ɾ���ļ��󣬲����ļ�������ʱ��ʼ�����ݹ���

				9.2 �ļ�����������Ϊ��

					��workerManager.cpp�еĹ��캯��׷�Ӵ��룺

						//�ļ����ڣ�����û�м�¼
						char ch;
						ifs >> ch;
						if (ifs.eof())
						{
							cout << "�ļ�Ϊ��!" << endl;
							this->m_EmpNum = 0;
							this->m_FileIsEmpty = true;
							this->m_EmpArray = NULL;
							ifs.close();
							return;
						}

					׷�Ӵ���λ����ͼ��

						WorkerManager::WorkerManager()
						{
							ifstream ifs;
							ifs.open(FILENAME, ios::in);

							//�ļ����������
							if (!ifs.is_open())
							{
								cout << "�ļ�������" << endl; //�������
								this->m_EmpNum = 0;  //��ʼ������
								this->m_FileIsEmpty = true; //��ʼ���ļ�Ϊ�ձ�־
								this->m_EmpArray = NULL; //��ʼ������
								ifs.close(); //�ر��ļ�
								return;
							}

							+---------------------------------
							+//�ļ����ڣ�����û�м�¼
							+char ch;
							+ifs >> ch;
							+if (ifs.eof())
							+{
							+    cout << "�ļ�Ϊ��!" << endl;
							+    this->m_EmpNum = 0;
							+    this->m_FileIsEmpty = true;
							+    this->m_EmpArray = NULL;
							+    ifs.close();
							+    return;
							+}
							+---------------------------------
						}

					���ļ�����������ļ����ݣ������Ը�����³�ʼ������

					���Ƿ����ļ������ڻ���Ϊ����� m_FileIsEmpty �ж��ļ��Ƿ�Ϊ�յı�־��Ϊ�棬�Ǻ�ʱΪ�٣�

					�ɹ����ְ����Ӧ�ø����ļ���Ϊ�յı�־

					��void WorkerManager::Add_Emp() ��Ա��������ӣ�

						//����ְ����Ϊ�ձ�־
						this->m_FileIsEmpty = false;

				9.3 �ļ������ұ���ְ������

					9.3.1 ��ȡ��¼��ְ������

						��workerManager.h����ӳ�Ա����  int get_EmpNum();

							//ͳ������
							int get_EmpNum();

						workerManager.cpp��ʵ��

							int WorkerManager::get_EmpNum()
							{
								ifstream ifs;
								ifs.open(FILENAME, ios::in);

								int id;
								string name;
								int dId;

								int num = 0;

								while (ifs >> id && ifs >> name && ifs >> dId)
								{
									//��¼����
									num++;
								}
								ifs.close();

								return num;
							}

						��workerManager.cpp���캯���м���׷�Ӵ��룺

							int num =  this->get_EmpNum();
							cout << "ְ������Ϊ��" << num << endl;  //���Դ���
							this->m_EmpNum = num;  //���³�Ա����

						�ֶ����һЩְ�����ݣ����Ի�ȡְ����������

					9.3.2 ��ʼ������

						����ְ���������Լ�ְ�����ݣ���ʼ��workerManager�е�Worker ** m_EmpArray ָ��

						��WorkerManager.h����ӳ�Ա���� void init_Emp();

							//��ʼ��Ա��
							void init_Emp();

						��WorkerManager.cpp��ʵ��

							void WorkerManager::init_Emp()
							{
								ifstream ifs;
								ifs.open(FILENAME, ios::in);

								int id;
								string name;
								int dId;

								int index = 0;
								while (ifs >> id && ifs >> name && ifs >> dId)
								{
									Worker * worker = NULL;
									//���ݲ�ͬ�Ĳ���Id������ͬ����
									if (dId == 1)  // 1��ͨԱ��
									{
										worker = new Employee(id, name, dId);
									}
									else if (dId == 2) //2����
									{
										worker = new Manager(id, name, dId);
									}
									else //�ܲ�
									{
										worker = new Boss(id, name, dId);
									}
									//�����������
									this->m_EmpArray[index] = worker;
									index++;
								}
							}

						��workerManager.cpp���캯����׷�Ӵ���

							//����ְ������������
							this->m_EmpArray = new Worker *[this->m_EmpNum];
							//��ʼ��ְ��
							init_Emp();

							//���Դ���
							for (int i = 0; i < m_EmpNum; i++)
							{
								cout << "ְ���ţ� " << this->m_EmpArray[i]->m_Id
									<< " ְ�������� " << this->m_EmpArray[i]->m_Name
									<< " ���ű�ţ� " << this->m_EmpArray[i]->m_DeptId << endl;
							}

						���г��򣬲��Դ��ļ��л�ȡ������

				���˳�ʼ�����ݹ�����ϣ����Դ������ע�ͻ�ɾ������


			10����ʾְ��

				������������ʾ��ǰ����ְ����Ϣ

				10.1 ��ʾְ����������

					��workerManager.h����ӳ�Ա���� void Show_Emp();

						//��ʾְ��
						void Show_Emp();

				10.2 ��ʾְ������ʵ��

					��workerManager.cpp��ʵ�ֳ�Ա���� void Show_Emp();

					//��ʾְ��
					void WorkerManager::Show_Emp()
					{
						if (this->m_FileIsEmpty)
						{
							cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
						}
						else
						{
							for (int i = 0; i < m_EmpNum; i++)
							{
								//���ö�̬���ýӿ�
								this->m_EmpArray[i]->showInfo();
							}
						}

						system("pause");
						system("cls");
					}

				10.3 ������ʾְ��

					��main������֧ 2 ѡ���У�������ʾְ���ӿ�

				����ʱ�ֱ���� �ļ�Ϊ�պ��ļ���Ϊ���������

					����Ч����

						����1-�ļ������ڻ���Ϊ�����

						����2 - �ļ��������м�¼���

					������ϣ����ˣ���ʾ����ְ����Ϣ����ʵ��


			11��ɾ��ְ��

				��������������ְ���ı�Ž���ɾ��ְ������

				11.1 ɾ��ְ����������

					��workerManager.h����ӳ�Ա���� void Del_Emp();

						//ɾ��ְ��
						void Del_Emp();

				11.2 ְ���Ƿ���ں�������

					�ܶ๦�ܶ���Ҫ�õ�����ְ���Ƿ���������в����磺ɾ��ְ�����޸�ְ��������ְ��

					�����Ӹù��溯�����Ա��������

					��workerManager.h����ӳ�Ա���� int IsExist(int id);

						//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
						int IsExist(int id);

				11.3 ְ���Ƿ���ں���ʵ��

					��workerManager.cpp��ʵ�ֳ�Ա���� int IsExist(int id);

						int WorkerManager::IsExist(int id)
						{
							int index = -1;

							for (int i = 0; i < this->m_EmpNum; i++)
							{
								if (this->m_EmpArray[i]->m_Id == id)
								{
									index = i;

									break;
								}
							}

							return index;
						}

				11.4 ɾ��ְ������ʵ��

					��workerManager.cpp��ʵ�ֳ�Ա����  void Del_Emp();

						//ɾ��ְ��
						void WorkerManager::Del_Emp()
						{
							if (this->m_FileIsEmpty)
							{
								cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
							}
							else
							{
								//��ְ�����ɾ��
								cout << "��������Ҫɾ����ְ���ţ�" << endl;
								int id = 0;
								cin >> id;

								int index = this->IsExist(id);

								if (index != -1)  //˵��index��λ��������Ҫɾ��
								{
									for (int i = index; i < this->m_EmpNum - 1; i++)
									{
										this->m_EmpArray[i] = this->m_EmpArray[i + 1];
									}
									this->m_EmpNum--;

									this->save(); //ɾ��������ͬ�����ļ���
									cout << "ɾ���ɹ���" << endl;
								}
								else
								{
									cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
								}
							}

							system("pause");
							system("cls");
						}

				11.5 ����ɾ��ְ��

					��main������֧ 3 ѡ���У�����ɾ��ְ���ӿ�

					����1 - ɾ��������ְ�����

					����2 - ɾ�����ڵ�ְ�����

					�ٴ���ʾ����ְ����Ϣ��ȷ���Ѿ�ɾ��

					�鿴�ļ�����Ϣ���ٴκ�ʵԱ���ѱ���ȫɾ��

				���ˣ�ɾ��ְ������ʵ����ϣ�


			12���޸�ְ��

				�����������ܹ�����ְ���ı�Ŷ�ְ����Ϣ�����޸Ĳ�����

				12.1 �޸�ְ����������

					��workerManager.h����ӳ�Ա���� void Mod_Emp();

						//�޸�ְ��
						void Mod_Emp();

				12.2 �޸�ְ������ʵ��

					��workerManager.cpp��ʵ�ֳ�Ա����  void Mod_Emp();

						//�޸�ְ��
						void WorkerManager::Mod_Emp()
						{
							if (this->m_FileIsEmpty)
							{
								cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
							}
							else
							{
								cout << "�������޸�ְ���ı�ţ�" << endl;
								int id;
								cin >> id;

								int ret = this->IsExist(id);
								if (ret != -1)
								{
									//���ҵ���ŵ�ְ��

									delete this->m_EmpArray[ret];

									int newId = 0;
									string newName = "";
									int dSelect = 0;

									cout << "�鵽�� " << id << "��ְ������������ְ���ţ� " << endl;
									cin >> newId;

									cout << "�������������� " << endl;
									cin >> newName;

									cout << "�������λ�� " << endl;
									cout << "1����ְͨ��" << endl;
									cout << "2������" << endl;
									cout << "3���ϰ�" << endl;
									cin >> dSelect;

									Worker * worker = NULL;
									switch (dSelect)
									{
									case1:
										worker = new Employee(newId, newName, dSelect);
										break;
									case2:
										worker = new Manager(newId, newName, dSelect);
										break;
									case 3:
										worker = new Boss(newId, newName, dSelect);
										break;
									default:
										break;
									}

									//�������� ��������
									this->m_EmpArray[ret]= worker;

									cout << "�޸ĳɹ���" << endl;

									//���浽�ļ���
									this->save();
								}
								else
								{
									cout << "�޸�ʧ�ܣ����޴���" << endl;
								}
							}

							//������� ����
							system("pause");
							system("cls");
						}

				12.3 �����޸�ְ��

					��main������֧ 4 ѡ���У������޸�ְ���ӿ�

					����1 - �޸Ĳ�����ְ�����

					����2 - �޸Ĵ���ְ����������罫ְ�� "����" ��Ϊ "����"

					�޸ĺ��ٴβ鿴����ְ����Ϣ����ȷ���޸ĳɹ�

					�ٴ�ȷ���ļ�����ϢҲͬ������

				���ˣ��޸�ְ��������ʵ�֣�


			13������ְ��

				�����������ṩ���ֲ���ְ����ʽ��һ�ְ���ְ����ţ�һ�ְ���ְ������

				13.1 ����ְ����������

					��workerManager.h����ӳ�Ա���� void Find_Emp();

						//����ְ��
						void Find_Emp();

				13.2 ����ְ������ʵ��

					��workerManager.cpp��ʵ�ֳ�Ա����  void Find_Emp();

						//����ְ��
						void WorkerManager::Find_Emp()
						{
							if (this->m_FileIsEmpty)
							{
								cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
							}
							else
							{
								cout << "��������ҵķ�ʽ��" << endl;
								cout << "1����ְ����Ų���" << endl;
								cout << "2������������" << endl;

								int select = 0;
								cin >> select;


								if (select == 1) //��ְ���Ų���
								{
									int id;
									cout << "��������ҵ�ְ����ţ�" << endl;
									cin >> id;

									int ret = IsExist(id);
									if (ret != -1)
									{
										cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
										this->m_EmpArray[ret]->showInfo();
									}
									else
									{
										cout << "����ʧ�ܣ����޴���" << endl;
									}
								}
								else if(select == 2) //����������
								{
									string name;
									cout << "��������ҵ�������" << endl;
									cin >> name;

									bool flag = false;  //���ҵ��ı�־
									for (int i = 0; i < m_EmpNum; i++)
									{
										if (m_EmpArray[i]->m_Name == name)
										{
											cout << "���ҳɹ�,ְ�����Ϊ��"
												   << m_EmpArray[i]->m_Id
												   << " �ŵ���Ϣ���£�" << endl;

											flag = true;

											this->m_EmpArray[i]->showInfo();
										}
									}
									if (flag == false)
									{
										//���޴���
										cout << "����ʧ�ܣ����޴���" << endl;
									}
								}
								else
								{
									cout << "����ѡ������" << endl;
								}
							}


							system("pause");
							system("cls");
						}

				13.3 ���Բ���ְ��

					��main������֧ 5 ѡ���У����ò���ְ���ӿ�

					����1 - ����ְ����Ų��� - ���Ҳ�����ְ��

					����2 - ����ְ����Ų��� - ���Ҵ���ְ��

					����3 - ����ְ���������� - ���Ҳ�����ְ��

					����4 - ����ְ���������� - ���Ҵ���ְ�����������������Ҳһ����ʾ�����ļ��п����������ְ����

						���� ������������ְ����Ȼ����������������

				���ˣ�����ְ������ʵ����ϣ�


			14������

				��������������ְ����Ž������������˳�����û�ָ��

				14.1 ����������

					��workerManager.h����ӳ�Ա���� void Sort_Emp();

						//����ְ��
						void Sort_Emp();

				14.2 ������ʵ��

					��workerManager.cpp��ʵ�ֳ�Ա����  void Sort_Emp();

						//����ְ��
						void WorkerManager::Sort_Emp()
						{
							if (this->m_FileIsEmpty)
							{
								cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
								system("pause");
								system("cls");
							}
							else
							{
								cout << "��ѡ������ʽ�� " << endl;
								cout << "1����ְ���Ž�������" << endl;
								cout << "2����ְ���Ž��н���" << endl;

								int select = 0;
								cin >> select;


								for (int i = 0; i < m_EmpNum; i++)
								{
									int minOrMax = i;
									for (int j = i + 1; j < m_EmpNum; j++)
									{
										if (select == 1) //����
										{
											if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id)
											{
												minOrMax = j;
											}
										}
										else  //����
										{
											if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id)
											{
												minOrMax = j;
											}
										}
									}

									if (i != minOrMax)
									{
										Worker * temp = m_EmpArray[i];
										m_EmpArray[i] = m_EmpArray[minOrMax];
										m_EmpArray[minOrMax] = temp;
									}

								}

								cout << "����ɹ�,�������Ϊ��" << endl;
								this->save();
								this->Show_Emp();
							}

						}

				14.3 ����������

					��main������֧ 6 ѡ���У���������ְ���ӿ�

					���ԣ�

						�����������һЩְ�������������ģ����磺2 3 4 1 5 6

						���� - ��������

							�ļ�ͬ������

						���� - ��������

							�ļ�ͬ������

				���ˣ�ְ�����ձ������Ĺ���ʵ����ϣ�

			15������ļ�

				�������������ļ��м�¼�������

				15.1 ��պ�������

					��workerManager.h����ӳ�Ա���� void Clean_File();

						//����ļ�
						void Clean_File();

				15.2 ��պ���ʵ��

					��workerManager.cpp��ʵ��Ա����  void Clean_File();

						//����ļ�
						void WorkerManager::Clean_File()
						{
							cout << "ȷ����գ�" << endl;
							cout << "1��ȷ��" << endl;
							cout << "2������" << endl;

							int select = 0;
							cin >> select;

							if (select == 1)
							{
								//��ģʽ ios::trunc �������ɾ���ļ������´���
								ofstream ofs(FILENAME, ios::trunc);
								ofs.close();

								if (this->m_EmpArray != NULL)
								{
									for (int i = 0; i < this->m_EmpNum; i++)
									{
										if (this->m_EmpArray[i] != NULL)
										{
											delete this->m_EmpArray[i];
										}
									}
									this->m_EmpNum = 0;
									delete[] this->m_EmpArray;
									this->m_EmpArray = NULL;
									this->m_FileIsEmpty = true;
								}
								cout << "��ճɹ���" << endl;
							}

							system("pause");
							system("cls");
						}

				15.3 ��������ļ�

					��main������֧ 7 ѡ���У���������ļ��ӿ�

					���ԣ�ȷ������ļ�

					�ٴβ鿴�ļ������ݣ���¼��Ϊ��

					���ļ�������������ȷ����գ��ù�����Ҫ���ã�

			��������ļ�����ʵ�֣�������������� ^ _ ^
*/