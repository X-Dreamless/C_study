
/*
	1 C++��ʶ

	2 ��������

	3 �����

	4 �������̽ṹ

	5 ����

	6 ����

	7 ָ��

	8 �ṹ��

		8.1 �ṹ���������

		8.2 �ṹ�嶨���ʹ��

		8.3 �ṹ������

		8.4 �ṹ��ָ��

		8.5 �ṹ��Ƕ�׽ṹ��

		8.6 �ṹ������������

		8.7 �ṹ���� constʹ�ó���

		8.8 �ṹ�尸��

			8.8.1 ����1

			8.8.2 ����2

				����������

					���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�

					ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����

					����Ӣ����Ϣ���£�

						{"����",23,"��"},
						{"����",22,"��"},
						{"�ŷ�",20,"��"},
						{"����",21,"��"},
						{"����",19,"Ů"},

					ʾ����

						//Ӣ�۽ṹ��
						struct hero
						{
							string name;
							int age;
							string sex;
						};
						//ð������
						void bubbleSort(hero arr[] , int len)
						{
							for (int i = 0; i < len - 1; i++)
							{
								for (int j = 0; j < len - 1 - i; j++)
								{
									if (arr[j].age > arr[j + 1].age)
									{
										hero temp = arr[j];
										arr[j] = arr[j + 1];
										arr[j + 1] = temp;
									}
								}
							}
						}
						//��ӡ����
						void printHeros(hero arr[], int len)
						{
							for (int i = 0; i < len; i++)
							{
								cout << "������ " << arr[i].name << " �Ա� " << arr[i].sex << " ���䣺 " << arr[i].age << endl;
							}
						}

						int main() {

							struct hero arr[5] =
							{
								{"����",23,"��"},
								{"����",22,"��"},
								{"�ŷ�",20,"��"},
								{"����",21,"��"},
								{"����",19,"Ů"},
							};

							int len = sizeof(arr) / sizeof(hero); //��ȡ����Ԫ�ظ���

							bubbleSort(arr, len); //����

							printHeros(arr, len); //��ӡ

							system("pause");

							return 0;
						}
*/

#include <iostream>

using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

void BubbleSort(struct hero arr[], int arrLen)
{
	// ��ʼ����
	// ���������� = Ԫ�ظ��� - 1
	for (int i = 0; i < arrLen - 1; i++)
	{
		// ÿ�ֶԱȴ��� = Ԫ�ظ��� - �������� - 1
		for (int j = 0; j < arrLen - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				struct hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void heroPrint(struct hero arr[], int arrLen)
{
	for (int i = 0; i < arrLen; i++)
	{
		cout << arr[i].name << arr[i].age << arr[i].sex << endl;
	}
}

int main()
{
	struct hero heroArr[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	int heroArrLen = sizeof(heroArr) / sizeof(heroArr[0]);

	BubbleSort(heroArr, heroArrLen);

	heroPrint(heroArr, heroArrLen);

	return 0;
}