
/*
	876. ������м���
	https://leetcode.cn/problems/middle-of-the-linked-list/description/

	����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣
	����������м��㣬�򷵻صڶ����м��㡣

	ʾ�� 1��
		���룺[1,2,3,4,5]
		��������б��еĽ�� 3 (���л���ʽ��[3,4,5])
		���صĽ��ֵΪ 3 �� (����ϵͳ�Ըý�����л������� [3,4,5])��
		ע�⣬���Ƿ�����һ�� ListNode ���͵Ķ��� ans��������
		ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, �Լ� ans.next.next.next = NULL.

	ʾ�� 2��
		���룺[1,2,3,4,5,6]
		��������б��еĽ�� 4 (���л���ʽ��[4,5,6])
		���ڸ��б��������м��㣬ֵ�ֱ�Ϊ 3 �� 4�����Ƿ��صڶ�����㡣

	��ʾ��
		��������Ľ�������� 1 �� 100 ֮�䡣
*/

#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};

struct ListNode* middleNode(struct ListNode* head)
{
	/*
		˼·1��
			����һ����㳤�ȣ����ȳ�2

			�ٱ���һ���ҵ��м�ڵ�

			ʱ�临�Ӷ�O(N)

		˼·2��
			Ҫ��ֻ�ܱ�������һ��

			��˫ָ�룬����ָ��

				fast
				 ��
				[1] �� [2] �� [3] �� [4] �� [5]
				 ��
				slow

			��ָ��һ����2������ָ��һ����1��

					        fast
				             ��
				[1] �� [2] �� [3] �� [4] �� [5]
				       ��
				      slow

			ֹͣ������fast Ϊ �� ���� fast->next Ϊ ��
	*/

	// ˼·2 ����ָ��
	struct ListNode* fast = head;
	struct ListNode* slow = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
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

	struct ListNode* head = middleNode(n1);

	return 0;
}