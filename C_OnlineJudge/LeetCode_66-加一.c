
/*
	66. ��һ https://leetcode.cn/problems/plus-one/

	����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��

	���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�

	����Լ���������� 0 ֮�⣬��������������㿪ͷ��

	ʾ�� 1��
		���룺digits = [1,2,3]
		�����[1,2,4]
		���ͣ����������ʾ���� 123��

	ʾ�� 2��
		���룺digits = [4,3,2,1]
		�����[4,3,2,2]
		���ͣ����������ʾ���� 4321��

	ʾ�� 3��
		���룺digits = [0]
		�����[1]

	��ʾ��
		1 <= digits.length <= 100
		0 <= digits[i] <= 9
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    /*
        ˼·1��
            ������β��ʼ��9

                       ��
                [8][9][9]

            �����9����9���0��������ǰ��

                       ��
                [8][9][0]

                    ��
                [8][0][0]

            �������9������һ

                 ��
                [9][0][0]

            ��󷵻�

            -------- --------

            ��һ��������鶼��9
            ������β��ʼ��9

                       ��
                [9][9][9]

            �����9����9���0��������ǰ��

                      ��
                [9][9][0]

                 ��
                [0][0][0]

            ���������Ԫ����0�������ڴ棬��С�� ԭ���鳤��+1

                [ ][ ][ ][ ]

            ����������Ԫ�ر��1

                [1][ ][ ][ ]

            �ٽ� ԭ���� ��Ԫ�� ������ ������

                   [0][0][0]
                    ��  ��  ��
                [1][ ][ ][ ]

            ����������
    */

    // ������β��ʼ��9
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        // �����9����9���0��������ǰ��
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else// �������9������һ
        {
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }
    }

    // �ߵ�����˵����������Ԫ����0�������ڴ棬��С�� ԭ���鳤��+1
    int* ret = malloc(sizeof(int) * (digitsSize + 1));

    // ����������Ԫ�ر��1
    ret[0] = 1;

    // �ٽ� ԭ���� ��Ԫ�� ������ ������
    for (int j = 1; j <= digitsSize; j++)
    {
        ret[j] = digits[j - 1];
    }

    *returnSize = digitsSize + 1;
    return ret;
}

int main()
{
	int arr[] = { 1,2,3 };
	int arr2[] = { 8,9,9 };
	int arr3[] = { 0 };

	int* ret = plusOne(arr3, 1, NULL);

	return 0;
}