
/*
	141. �������� https://leetcode.cn/problems/linked-list-cycle/description/

	�Ѷȣ���

	����һ�������ͷ�ڵ� head ���ж��������Ƿ��л���

	�����������ĳ���ڵ㣬����ͨ���������� next ָ���ٴε���������д��ڻ��� 
	Ϊ�˱�ʾ���������еĻ�������ϵͳ�ڲ�ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ����
	ע�⣺pos ����Ϊ�������д��� ��������Ϊ�˱�ʶ�����ʵ�������

	��������д��ڻ� ���򷵻� true �� ���򣬷��� false ��


	ʾ�� 1��

		[3] �� [2] �� [0] �� [-4] �� 
		       ��                ��
			    ----------------

		���룺head = [3,2,0,-4], pos = 1
		�����true
		���ͣ���������һ��������β�����ӵ��ڶ����ڵ㡣

	ʾ�� 2��
		
		[1] �� [2] �� 
		 ��         ��
		  ---------
		
		���룺head = [1,2], pos = 0
		�����true
		���ͣ���������һ��������β�����ӵ���һ���ڵ㡣

	ʾ�� 3��

		[1]

		���룺head = [1], pos = -1
		�����false
		���ͣ�������û�л���


	��ʾ��
		�����нڵ����Ŀ��Χ�� [0, 104]
		-105 <= Node.val <= 105
		pos Ϊ -1 ���������е�һ�� ��Ч���� ��

	���ף������� O(1)�������������ڴ�����������
*/

#include <stdlib.h>


// Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};


_Bool hasCycle(struct ListNode* head)
{
	/*
		˼·1������ָ��

			slow
			fast
			 ��
			[3] �� [2] �� [0] �� [-4] ��
				   ��                ��
					----------------

			���룺head = [3,2,0,-4], pos = 1
			�����true
			���ͣ���������һ��������β�����ӵ��ڶ����ڵ㡣

			slow һ����1����fast һ����2����
			��������fast ��Ϊ�ա�
			������fast ��׷�� slow��

				      slow
				       ��    fast
				       ��     ��
				[3] �� [2] �� [0] �� [-4] ��
					   ��                ��
						----------------

					        slow
					  fast   ��
					   ��     ��
				[3] �� [2] �� [0] �� [-4] ��
					   ��                ��
						----------------

							       slow
							       fast
							        ��
				[3] �� [2] �� [0] �� [-4] ��
					   ��                ��
						----------------
	*/

	struct ListNode* fast = head;
	struct ListNode* slow = head;

	while (fast && fast->next)// ���ܲ�����������Ϊ�ղŽ�ѭ��
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return 1;
		}
	}

	return 0;
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
	n5->next = n1;

	_Bool ret = hasCycle(n1);

	return 0;
}