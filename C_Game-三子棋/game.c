




#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//									  ��		   ��
void ��ʼ������(char ����[��][��], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			����[x][y] = ' ';
		}
	}
}




// ���´��벻��ͨ�� ����ĳ�10��10 ����ֻ�ܴ�ӡ3��
//void ��ӡ����(char ����[��][��], int row, int col)
//{
//	int x = 0;
//	for (x = 0; x < row; x++)
//	{
//		printf(" %c | %c | %c \n", ����[x][0], ����[x][1], ����[x][2]);
//
//		if (x < row-1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}


// ����
void ��ӡ����(char ����[��][��], int row, int col)
{
	int x = 0;
	for (x = 0; x < row; x++)
	{
		//printf(" %c | %c | %c \n", ����[x][0], ����[x][1], ����[x][2]);
		int y = 0;
		for (y = 0; y < col; y++)
		{
			printf(" %c ", ����[x][y]);
			if (y < col-1)
			{
				printf("|");
			}
		}
		printf("\n");

		if (x < row - 1)
		{
			//printf("---|---|---\n");
			int y = 0;
			for (y < 0; y < col; y++)
			{
				printf("---");
				if (y < col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}







void ����ƶ�(char ����[��][��], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("�����*\n");
	
	while (1)
	{
		printf("��������������:�� ��>");

		scanf("%d %d", &x, &y);

		// �ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			// (����)��(�ж������Ƿ�ռ�� ���ڿո����ûռ��)��(x��y��һ��Ϊ������1 1��Ӧ�����0 0)
			if (����[x - 1][y - 1] == ' ')
			{
				����[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}





void �����ƶ�(char ����[��][��], int row, int col)
{
	printf("������>\n");

	while (1)
	{
		//����Ҫ����0-2�� row��col��3 ����%3����������2
		int x = rand() % row;
		int y = rand() % col;

		// �ж�ռ��
		if (����[x][y] == ' ')
		{
			����[x][y] = '#';
			break;
		}
	}
}





int ������(char ����[��][��], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			return 0;// ����û��
		}
	}

	return 1;
}
// 
char isWin(char ����[��][��], int row, int col)
{
	int i = 0;

	// �ж�����
	for (i = 0; i < row; i++)
	{
		if (����[i][0] == ����[i][1] && ����[i][1] == ����[i][2] && ����[i][1] != ' ')
		{
			return ����[i][1];// ����λ����ʲô���žͷ���ʲô���� ʡȥ���жϷ���
		}
	}

	// �ж�����
	for (i = 0; i < col; i++)
	{
		if (����[0][i] == ����[1][i] && ����[1][i] == ����[2][i] && ����[1][i] != ' ')
		{
			return ����[1][i];
		}
	}

	// �ж϶Խ���
	if (����[0][0] == ����[1][1] && ����[1][1] == ����[2][2] && ����[1][1] != ' ')
	{
		return ����[1][1];
	}

	if (����[0][2] == ����[1][1] && ����[1][1] == ����[2][0] && ����[1][1] != ' ')
	{
		return ����[1][1];
	}

	// ���� �ж�ƽ�� ���������Сд����Ϊ����ĺ������յ��β���row��col
	// ����������˷���1����������0
	int ret = ������(����, row, col);
	if (ret == 1)
	{
		return 'Q';
	}

	//����
	return 'C';
}