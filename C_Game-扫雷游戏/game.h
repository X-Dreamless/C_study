#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#define �� 9
#define �� 9
#define ��S ��+2
#define ��S ��+2
#define �ǳ��� 10


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ��ʼ������(char ����[��S][��S], int rows, int cols);

// ��Ϊ���鴫��������11*11�ģ��������ﻹ��Ҫ��[��S][��S]��ֻ������ӡֻ��ӡ�м�9*9��
void ��ӡ����(char ����[��S][��S], int row, int col);

// ��Ϊ���鴫��������11*11�ģ��������ﻹ��Ҫ��[��S][��S]��ֻ����ֻ�õ��м�9*9��
void ���õ���(char ����[��S][��S], int row, int col);

// �����������Ų���Ϣ�����ŵ���ʾ����
void ���ֵ���(char ����[��S][��S], char ��ʾ[��S][��S], int row, int col);



