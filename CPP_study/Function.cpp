
#include "Function.h"

void n2(int ���д���, char* ���з���, int ���Ÿ���)
{
	int i = 0;

	if (���з��� != NULL && ���Ÿ��� > 0)
	{
		printf("\n");
		for (i = 0; i < ���Ÿ���; i++)
		{
			printf("%s", ���з���);
		}
	}

	for (i = 0; i < ���д���; i++)
	{
		printf("\n");
	}
}

// ��������λ��
int digit(int num)
{
	int counter = 1;

	while (num >= 10)
	{
		num = num / 10;
		counter++;
	}

	return counter;
}


// �ж��ļ��Ƿ���ڣ��ж��ļ�Ȩ��
int fileAccess(const char* FileName, int mode)
{
	// fopen("..\\�����ļ�����\\�ļ�2.txt", "r");

	/*
		int _access(const char* path,int mode);
		int _waccess(const char* path,int mode);

		��windowsƽ̨��ֱ�ӵ���c�������е�_access������

		���Ǻ��� int _access(const char* path,int mode);

		����  int _waccess(const char* path,int mode);
		_waccess��_access�Ŀ��ַ��汾��_waccess�Ĳ���pathΪ���ַ����ַ�����������_access��ͬ��

		��������Ĺ���ʮ��ǿ����ͷ�ļ�Ϊ#include  <io.h>��

		�������壺 path��ʾ�ļ���Ŀ¼��·����mode��ʾ����Ȩ�ޡ�
		����ֵ������ļ�����ָ���ķ���Ȩ�ޣ���������0������ļ������ڣ�����û�з���ָ����Ȩ�ޣ��򷵻�-1��

		��ע����pathΪ�ļ�ʱ��_access�����ж��ļ��Ƿ���ڣ����ж��ļ��Ƿ������ modeֵָ����ģʽ���з��ʡ���pathΪĿ¼ʱ��_accessֻ�ж�ָ����Ŀ¼�Ƿ���ڣ���WindowsNT��Windows2000�У����е�Ŀ¼���ж�дȨ�ޡ�

		mode��ֵ�ͺ������±���ʾ��

			modeֵ  ����ļ�
			00      ֻ����ļ��Ƿ����
			02      дȨ��
			04      ��Ȩ��
			06      ��дȨ��
		��������������������������������
		��Ȩ����������ΪCSDN��������˼����ʵ���ߡ���ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
		ԭ�����ӣ�https://blog.csdn.net/chinawangfei/article/details/42487839
	*/

	// https://learn.microsoft.com/zh-cn/cpp/c-runtime-library/reference/access-waccess?view=msvc-170
	
	switch (mode)
	{
	case 0:
		if (_access(FileName, mode) == 0)
		{
			// �ļ�����
			return 1;
		}
		else
		{
			printf("�ļ� �� ����\n");
			return 0;
		}

		break;

	case 2:
		if (_access(FileName, mode) == 0)
		{
			// �ļ���д
			return 1;
		}
		else
		{
			printf("�ļ� ���� д\n");
			return 0;
		}

		break;

	case 4:
		if (_access(FileName, mode) == 0)
		{
			// �ļ��ɶ�
			return 1;
		}
		else
		{
			printf("�ļ� ���� ��\n");
			return 0;
		}

		break;

	case 6:
		if (_access(FileName, mode) == 0)
		{
			// �ļ��ɶ�д
			return 1;
		}
		else
		{
			printf("�ļ� ���� ��д\n");
			return 0;
		}

		break;

	default:
		printf("ģʽ����\n");
		return 0;
		break;
	}
}

