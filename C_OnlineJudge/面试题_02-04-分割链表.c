
/*
	������ 02.04. �ָ����� https://leetcode.cn/problems/partition-list-lcci/

	�Ѷȣ��е�

	����һ�������ͷ�ڵ� head ��һ���ض�ֵ x �������������зָ���ʹ������ С�� x �Ľڵ㶼������ ���ڻ���� x �Ľڵ�֮ǰ��

	�㲻��Ҫ ���� ÿ�������и��ڵ�ĳ�ʼ���λ�á�

	ʾ�� 1��
		
		[1] �� [4] �� [3] �� [2] �� [5] �� [2]
						��
		[1] �� [2] �� [2] �� [4] �� [3] �� [5]

		���룺head = [1,4,3,2,5,2], x = 3
		�����[1,2,2,4,3,5]

	ʾ�� 2��
		���룺head = [2,1], x = 2
		�����[1,2]

	��ʾ��
		�����нڵ����Ŀ�ڷ�Χ [0, 200] ��
		-100 <= Node.val <= 100
		-200 <= x <= 200
*/

#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};

struct ListNode* partition(struct ListNode* head, int x)
{
	/*
		˼·1��
			���룺head = [2,3,5,1,7,2], x = 4
			�����       [2,1,3,2,5,7]

			����������
				ͷ newhead
				β newtail

			С�� 4 ��ֵ ͷ�嵽 ������
			���ڵ��� 4 ��ֵ β�嵽 ������

		˼·2��
			Ҫ�����˳�򲻱�
			���룺head = [2,3,5,1,7,2], x = 4
			�����       [2,3,1,2,5,7]

			����������
				��С�� less
				ͷ lessHead
				β lessTail
			
			����������
				����� greater
				ͷ greaterHead
				β greaterTail

			���� ԭ����

			С�� 4 ��β�嵽 less
				2,3,1,2

			���ڵ��� 4 �� β�嵽 greater
				5,7

			���ϲ�����
				less      greater
				[2,3,1,2]��[5,7]


			��ϸ����

			��ʼ״̬

				x = 4

				cur
				 ��
				[2] �� [3] �� [5] �� [1] �� [7] �� [2]

				lessHead
				lessTail
				��
				[�ڱ�λ]

				greaterHead
				greaterTail
				��
				[�ڱ�λ]
			
			ԭ���� cur С�� x��lessTail->next ָ�� cur��cur �����ߣ�lessTail = lessTail->next

				x = 4

				      cur
				       ��
				[2] �� [3] �� [5] �� [1] �� [7] �� [2]

				lessHead
				��           lessTail
				��           ��
				[�ڱ�λ] �� [2]

				greaterHead
				greaterTail
				��
				[�ڱ�λ]

			ԭ���� cur ���� x��greaterTail->next ָ�� cur��cur �����ߣ�greaterTail = greaterTail->next

				x = 4

					              cur
					               ��
				[2] �� [3] �� [5] �� [1] �� [7] �� [2]

				lessHead
				��                lessTail
				��                 ��
				[�ڱ�λ] �� [2] �� [3]

				greaterHead
				��          greaterTail
				��           ��
				[�ڱ�λ] �� [5]
	*/

	// ˼·2

	struct ListNode* lessHead;
	struct ListNode* lessTail;
	struct ListNode* greaterHead;
	struct ListNode* greaterTail;
	struct ListNode* cur = head;
	
	// ��һ���ڱ�λͷ�ڵ㣬����β��
	lessHead = lessTail = (struct ListNode*)malloc(sizeof(struct ListNode));
	greaterHead = greaterTail = (struct ListNode*)malloc(sizeof(struct ListNode));

	lessTail->next = NULL;
	greaterTail->next = NULL;

	// ���� ԭ����
	while (cur)
	{
		// ԭ���� cur С�� x��lessTail->next ָ�� cur��cur �����ߣ�lessTail = lessTail->next
		if (cur->val < x)
		{
			lessTail->next = cur;
			lessTail = lessTail->next;
		}
		else
		{
			greaterTail->next = cur;
			greaterTail = greaterTail->next;
		}

		cur = cur->next;
	}

	// �ϲ�����
	lessTail->next = greaterHead->next;

	// �����ÿգ���Ȼ������ѭ��
	greaterTail->next = NULL;

	// �ͷ� �ڱ�λ ֮ǰ��newHead ��¼ lessTail->next
	struct ListNode* newHead = lessHead->next;

	// �ͷ� �ڱ�λ
	free(lessHead);
	free(greaterHead);

	// 
	return newHead;
}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));

	n1->val = 1;
	n2->val = 4;
	n3->val = 3;
	n4->val = 2;
	n5->val = 5;
	n6->val = 2;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = NULL;

	struct ListNode* head = partition(n1, 3);

	return 0;
}