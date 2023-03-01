
/*
	��ָoffer_�����е�����k�����
	https://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a?tpId=13&&tqId=11167&rp=2&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking

	https://leetcode.cn/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/

	ʱ�����ƣ�C/C++ 1�룬�������� 2��
	�ռ����ƣ�C/C++ 64M���������� 128M

	֪ʶ�㣺����˫ָ��

	����
		����һ����������������е�����k����㡣

		ʾ��1
			���룺1,{1,2,3,4,5}
			����ֵ��{5}
*/

#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
	int val;
	struct ListNode *next;
};


/**
*
* @param pListHead ListNode��
* @param k int����
* @return ListNode��
*/
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
	// write code here

	/*
		˼·1��
			����ָ��
			��ָ������k��
			��ָ�� �� ��ָ�� ��һ���ߣ���ָ�� == NULL ʱ����ָ�� ���ǵ�����k��

				fast
				 ��
				[1] �� [2] �� [3] �� [4] �� [5]
				 ��
				slow
	*/

	struct ListNode* fast = pListHead;// ��ָ��
	struct ListNode* slow = pListHead;// ��ָ��
	int counter = 0;// ������

	while (fast)
	{
		if (counter >= k)
		{
			slow = slow->next;
		}

		fast = fast->next;
		counter++;
	}

	// k ���� ������Ӧ�÷��� ��
	if (k > counter)
	{
		return NULL;
	}

	return slow;
}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));

	n1->val = 1;
	n2->val = 2;
	n3->val = 3;
	n4->val = 4;
	n5->val = 5;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	struct ListNode* head = FindKthToTail(n1, 6);

	return 0;
}