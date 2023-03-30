
//#define _CRTDBG_MAP_ALLOC
//#include <crtdbg.h>

#include "workerManager.h"

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"



void test1()
{
	WorkerManager wm;

	wm.ShowMenu();

	int choice = 0;

	do
	{
		//wm.ShowMenu();
		cout << ">";
		cin >> choice;

		switch (choice)
		{
		case 1: //���ְ��
			system("cls");
			wm.ShowMenu();
			wm.Add_Emp();
			break;

		case 2: //��ʾְ��
			system("cls");
			wm.ShowMenu();
			wm.Show_Emp();
			break;

		case 3: //ɾ��ְ��
			//system("cls");
			//wm.ShowMenu();
			wm.Del_Emp();
			break;

		case 4: //�޸�ְ��
			//system("cls");
			//wm.ShowMenu();
			wm.Mod_Emp();
			break;

		case 5: //����ְ��
			system("cls");
			wm.ShowMenu();
			wm.Find_Emp();
			break;

		case 6: //����ְ��
			system("cls");
			wm.ShowMenu();
			wm.Sort_Emp();
			break;

		case 7: //����ļ�
			system("cls");
			wm.ShowMenu();
			wm.Clean_File();
			break;

		case 8: //���ļ�
			system("cls");
			wm.ShowMenu();
			wm.Read_Emp();
			break;

		case 9: //д�ļ�
			system("cls");
			wm.ShowMenu();
			wm.Write_Emp();
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

	//_CrtDumpMemoryLeaks();
	return 0;
}





/*
	VS����ڴ�й©����λй©����λ�÷��� https://blog.csdn.net/mfcing/article/details/42673393

		C Run-Time (CRT)����԰������Ǽ���ڴ�й¶

			�����
				#define _CRTDBG_MAP_ALLOC

			������Ӧͷ�ļ� 
				#include <crtdbg.h>

			�ڳ����˳��ط�������
				_CrtDumpMemoryLeaks();

			�����������������ڣ�ע�⣬��������ڣ��鿴�����

				ȡ����һ����ϸ˵����{453} normal block at 0x02432CA8, 868 bytes long. 

				��{}��Χ��453����������Ҫ���ڴ�й©��λֵ��868 bytes long����˵����ط���868�����ڴ�û���ͷš�

			����������λ����λ�ã�

				��main������һ�м��ϣ�_CrtSetBreakAlloc(453); ��˼����������453����ڴ��λ���жϡ�Ȼ����Գ��򣬡��������ж��ˡ��鿴���ö�ջ

				˫�����ǵĴ�����õ����һ��������������CDbQuery::UpdateDatas()���Ͷ�λ���������ڴ�Ĵ��룺


			���Ҫע��һ��ģ�����������normal blockһ�������ڴ�й©��
			����ĳ�������ȫ�ֱ�����ʱ��ȫ�ֱ������ͷ�ʾ��main�����˳���
			������main�������_CrtDumpMemoryLeaks��������Ϊȫ��������ڴ�û���ͷţ�����ڴ�й©�ļ���
			��ι���أ���ͨ���ǰ�ȫ�ֱ���������ָ����main������new ��main������delete��
			Ȼ���ٵ���_CrtDumpMemoryLeaks�����������Ͳ��������ˡ�
*/
