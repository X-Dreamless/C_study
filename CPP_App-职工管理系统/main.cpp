
#include "workerManager.h"

void test1()
{
	WorkerManager wm;

	int choice = 0;

	do
	{
		wm.ShowMenu();
		cout << ">";
		cin >> choice;

		switch (choice)
		{
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

		case 0: //�˳�ϵͳ
			wm.exitSystem();
			break;

		default:
			cout << "�������" << endl;
			break;
		}

	} while (choice);
}

int main()
{
	test1();

	return 0;
}