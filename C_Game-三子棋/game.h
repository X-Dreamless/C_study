#pragma once

// ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// ���ŵĶ���
#define �� 3
#define �� 3





// ����������

//��ʼ������
void ��ʼ������(char ����[��][��], int row, int col);

// ��ӡ����
void ��ӡ����(char ����[��][��], int row, int col);

// �������							���β�row��col������ʵ��
void ����ƶ�(char ����[��][��], int row, int col);

// ��������
void �����ƶ�(char ����[��][��], int row, int col);


//��Ϸ���еĹ���
//	1.���Ӯ - *
//	2.����Ӯ - #
//	3.ƽ�� - Q
//	4.��Ϸ���� - C
//�ж���Ϸ��Ӯ
char isWin(char ����[��][��], int row, int col);
