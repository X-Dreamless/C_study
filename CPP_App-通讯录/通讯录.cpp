
/*
	C++�ṹ������string���͸�ֵ����
	���ԣ�https://blog.51cto.com/liuzhangheng/1436164

		struct temp
		{
			string s;
		};
		int main()
		{
			const string p="aaa";
			temp *q;
			q=(struct temp*)malloc(sizeof(struct temp));
			q->s=p;
		}

		������������ĸ�ֵ�ᵼ�³����ж�
		��Ҫ����new�������ڴ棬malloc������ýṹ����
		�ṹ���ڵ�string�����������ܶ�̬�����ڴ档

		struct temp
		{
			string s;
		};
		int main()
		{
			const string p="aaa";
			temp *q;
			q = new temp;
			q->s=p;
		}

		C++�Ľṹ����඼��Ĭ�Ϲ��캯���ģ���д�����Զ�ʵ��һ����
		mallocֻ�Ƿ����ڴ档
		new���˷����ڴ滹����ù��캯���ġ�
*/

#include "ͨѶ¼.h"

void test1()
{
	int select = 0;
	addressBook arb;
	arb.size = 0;
	arb.initialization = 0;

	//readFile(&arb);

	showMenu(arb.size);

	do
	{
		cout << ">";
		cin >> select;

		switch (select)
		{
		case 1:  //�����ϵ��
			system("cls");
			showMenu(arb.size);
			addPerson(&arb);
			break;

		case 2:  //��ʾ��ϵ��
			system("cls");
			showMenu(arb.size);
			showPerson(&arb);
			break;

		case 3:  //ɾ����ϵ��
			//system("cls");
			//showMenu(arb.size);
			delPerson(&arb);
			break;

		case 4:  //������ϵ��
			system("cls");
			showMenu(arb.size);
			findPerson(&arb);
			break;

		case 5:  //�޸���ϵ��
			//system("cls");
			//showMenu(arb.size);
			modifyPerson(&arb);
			break;

		case 6:  //�����ϵ��
			system("cls");
			showMenu(arb.size);
			destroyPerson(&arb);
			break;

		case 7:  // ��������
			system("cls");
			showMenu(arb.size);
			saveFile(&arb);
			break;

		case 8:// ��ȡ����
			system("cls");
			showMenu(arb.size);
			readFile(&arb);
			break;

		case 0:  //�˳�ͨѶ¼
			exitAddressBook(&arb);
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			break;

		default:
			system("cls");
			showMenu(arb.size);
			cout << "�������" << endl;
			break;
		}

	} while (select);
}

int main()
{
	test1();

	return 0;
}