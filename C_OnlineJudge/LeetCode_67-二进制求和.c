
/*
	67. ��������� https://leetcode.cn/problems/add-binary/

	�Ѷȣ���

	���������������ַ��� a �� b ���Զ������ַ�������ʽ�������ǵĺ͡�

	ʾ�� 1��
		����:a = "11", b = "1"
		�����"100"

	ʾ�� 2��
		���룺a = "1010", b = "1011"
		�����"10101"

	��ʾ��
		1 <= a.length, b.length <= 104
		a �� b �����ַ� '0' �� '1' ���
		�ַ���������� "0" ���Ͳ���ǰ����
*/

#include <stdlib.h>
#include <string.h>

// a��b �ȳ�ʱ���ܼ���
char* addBinary(char* a, char* b)
{
	/*
		���룺a = "1010", b = "1011"
		�����"10101"

		a = "1010"
		b = "1011"
			 2021

		�����ڴ棬
		�� a[0] b[0] ��ʼ�ߣ�

		��� a[i] + b[i] ����2��
		��10��嵽��������

		��� a[i] + b[i] С��2��
		�� a[i] + b[i]�ļ����� ��嵽��������

		��� ���ַ���ĩβ���'\0'

	*/

	char* newChar = (char*)malloc(sizeof(char) * 128);

	// ��¼ ���ַ��� �ĳ���
	//int newChar_len = 0;

	int i = 0;
	for (i = 0; a[i] && b[i]; i++)
	{
		// ASCII��
		if (a[i] + b[i] - 96 == 2)
		{
			newChar[i] = 49;		// 1
			newChar[i + 1] = 48;	// 0
			//newChar_len = newChar_len + 2;
		}
		else
		{
			//	ASCII��
			if (a[i] + b[i] - 96 == 0)
			{
				//newChar[newChar_len] = 48;// 0
				newChar[i + 1] = 48;// 0
			}
			else
			{
				//newChar[newChar_len] = 49;// 1
				newChar[i + 1] = 49;// 1
			}

			//newChar_len = newChar_len + 1;
		}

	}

	newChar[i + 1] = '\0';
}

// �����ַ������ܽ��
char* addBinary2(char* a, char* b)
{
	/*
		˼·2�������� ʮ���� ����ת��

			��ʽ���

				���˽���Ϥ��ʮ����ת�����ơ�
				Ҫ�����ַ������ȵû�ʮ����ת�����Ƶĳ���2ȡ��ķ�����

			ʮ����ת�����Ʋ���

				������������1�������ϵ���д ���ǽ��

				����302

				302 / 2 = 151 ��0
				151 / 2 = 75  ��1
				75  / 2 = 37  ��1
				37  / 2 = 18  ��1
				18  / 2 = 9   ��0
				9   / 2 = 4   ��1
				4   / 2 = 2   ��0
				2   / 2 = 1   ��0
				1   / 2 = 0   ��1

				�ʶ�����Ϊ100101110

			������תʮ���Ʋ���

				������תΪʮ���Ƶ�ʱ���ȰѶ����ƴӸ�λ������ߵġ�1������ʼ�����ϵ��µ�˳��д�� ��
				��һλ���������� ��2 2 = 1 ��0 ���������϶��Ǽ��㡣����λ������С�1����ԭ���������������ȳ��ԡ�2���ټӡ�1����
				( (������-����)�³���=�� )( �������³���=�̡����� ���������� )

				������Ǵӵ�һλ��ʼ����2�������ķ������ȥ

				���� 100101110

				1	0   * 2 + 1 = 1		����Ϊ1
				0	1   * 2 + 0 = 2		����Ϊ0
				0	2   * 2 + 0 = 4		����Ϊ0
				1	4   * 2 + 1 = 9		����Ϊ1
				0	9   * 2 + 0 = 18	����Ϊ0
				1	18  * 2 + 1 = 37	����Ϊ1
				1	37  * 2 + 1 = 75	����Ϊ1
				1	75  * 2 + 1 = 151	����Ϊ1
				0	151 * 2 + 0 = 302	��0

				���Եõ�ʮ������302

				��1*2^8+0*2^7+0*2^6+1*2^5+0*2^4+1*2^3+1*2^2+1*2^1+0=302�����һλӦΪ�ӷ���
			
	*/

	// ������תʮ���Ʋ���
	int a_DEC = 0;
	int b_DEC = 0;

	for (int i = 0; a[i]; i++)
	{
		a_DEC = a_DEC * 2 + (a[i] - 48);
	}

	for (int i = 0; b[i]; i++)
	{
		b_DEC = b_DEC * 2 + (b[i] - 48);
	}

	// ʮ���� ���
	int and_DEC = a_DEC + b_DEC;

	// ����
	if (and_DEC == 0)
	{
		return "0";
	}

	// ʮ����ת�����Ʋ���
	char* newChar = (char*)malloc(sizeof(char) * 128);
	int newChar_len = 0;
	for (int i = 0; and_DEC; i++)
	{
		newChar[i] = (and_DEC % 2) + 48;
		and_DEC = and_DEC / 2;
		newChar_len++;
	}

	newChar[newChar_len] = '\0';

	// ��ת�ַ���
	int left = 0;
	int right = (strlen(newChar)) - 1;
	char tmp;
	while (left < right)
	{
		tmp = newChar[left];
		newChar[left] = newChar[right];
		newChar[right] = tmp;

		left++;
		right--;
	}

	return newChar;
}

char* addBinary3(char* a, char* b)
{
	/*
		����˼·��
			��������ͣ�������һ

			1. �����������ַ����ȳ��������ȳ����ڶ̵��ַ���ǰ���㣬����֮��Ĳ����ᳬ��������

			2. Ȼ��Ӻ�ǰ�������е�λ����ͬλ��ӣ�������һ���㣬�õ����ַ���ӣ�
			   ���� ASCII �룬�ַ����ڲ��������ֱ�ʾ�����ǲ���Ҫ֪��������ֵ������֪ ��0��-��0�� = 0�� ��0��+1=��1�����Դ����� ��
			   �ַ��ļӼ�����С�Ƚϣ�ʵ���϶����ڲ����ֵļӼ�����С�Ƚϡ�

			3. �ж���Ӻ���ַ��������ڵ����ַ� ��2����2����2������һλ��Ҫ��һ��

			4. �� 000 λ��������������ǵ�������ģ���Ϊ�������漰���ַ��Ĳ��루���Ƿ���Ҫ����ǰ���һλ�� ��1����1����1����

			���ߣ�YouLookDeliciousC
			���ӣ�https://leetcode.cn/problems/add-binary/solutions/7497/c-xiang-xi-ti-jie-bu-zou-qing-xi-by-youlookdelicio/
			��Դ�����ۣ�LeetCode��
			����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
	*/

	int a_len = strlen(a);
	int b_len = strlen(b);


	if (a_len < b_len)
	{
		// �����ڴ� ��С���� b_len
		char* a_tmp = malloc(sizeof(char) * (b_len + 1));

		// ���� a �� b ������
		int difference = b_len - a_len;

		// a_tmp ��ͷ��ʼ����0
		int i = 0;
		for (i = 0; i < difference; i++)
		{
			a_tmp[i] = '0';
		}

		// ������ɣ����� a �� a_tmp;
		int j = 0;
		for (j = 0; j <= a_len; j++)
		{
			a_tmp[i + j] = a[j];
		}
		
		// ����
		a = a_tmp;

		// ����
		char* and_ = malloc(sizeof(char) * (b_len + i + j) + 1);

		and_[b_len + i + j] = 0;
		int and_len = strlen(and_);

		for (int k = and_len; k >= 0; k--)
		{
			if (1)
			{

			}
		}

	}
	else if (a_len > b_len)
	{

	}
	else
	{
		// �ȳ����
	}
	
}

char* addBinary4(char* a, char* b)
{
	//�ο�������@����Ҳ�Ǻ�
	
	/*
		˼·��
			
	*/

	int lena = strlen(a);
	int lenb = strlen(b);

	int len = lena > lenb ? lena : lenb;
	char* res = (char*)malloc(sizeof(char) * (len + 2));	//+2����λ
	res[++len] = 0;

	char carry = '0';
	char pa, pb;
	while (len > 1 || carry == '1')
	{
		pa = lena > 0 ? a[--lena] : '0';
		pb = lenb > 0 ? b[--lenb] : '0';						//�����Ȳ�һ�����

		res[--len] = pa ^ pb ^ carry; 						// ��ǰλ
		carry = (pa & carry) | (pb & carry) | (pa & pb); 	//��λ
	}

	return res + len;										//���� res �ĵ� len ��ĩβ���ַ�
}

char* addBinary5(char* a, char* b)
{
	//�ο�������@����Ҳ�Ǻ�

	/*
		˼·��

	*/

	int lena = strlen(a);
	int lenb = strlen(b);

	int len = 0;
	if (lena > lenb)
	{
		len = lena;
	}
	else
	{
		len = lenb;
	}


	char* res = (char*)malloc(sizeof(char) * (len + 2));	//+2����λ
	res[len + 1] = 0;

	char carry = '0';
	char pa, pb;
	while (len > 1 || carry == '1')
	{
		//�����Ȳ�һ�����
		if (lena > 0)
		{
			pa = a[lena - 1];
		}
		else
		{
			pa = '0';
		}

		if (lenb > 0)
		{
			pa = b[lenb - 1];
		}
		else
		{
			pa = '0';
		}
		
		res[len - 1] = pa ^ pb ^ carry; 					// ��ǰλ
		carry = (pa & carry) | (pb & carry) | (pa & pb); 	//��λ
	}

	return res + len;										//���� res �ĵ� len ��ĩβ���ַ�
}


int main()
{
	//char* a = "10111";// 23
	//char* b = "101";  // 5

	//char* a = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
	//char* b = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";

	char* a = "101";	//
	char* b = "10111";	//

	//char* ret = addBinary(a, b);

	//char* ret = addBinary2(a, b);

	char* ret = addBinary4(a, b);

	return 0;
}