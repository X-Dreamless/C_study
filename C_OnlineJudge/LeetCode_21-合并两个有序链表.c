
/*
	21. �ϲ������������� https://leetcode.cn/problems/merge-two-sorted-lists/description/

	��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�

	ʾ�� 1��
		[1] �� [2] �� [4]
		[1] �� [3] �� [4]
		---------------
		[1] �� [1] �� [2] �� [3] �� [4] �� [4]

		���룺l1 = [1,2,4], l2 = [1,3,4]
		�����[1,1,2,3,4,4]

	ʾ�� 2��
		���룺l1 = [], l2 = []
		�����[]

	ʾ�� 3��
		���룺l1 = [], l2 = [0]
		�����[0]

	��ʾ��
		��������Ľڵ���Ŀ��Χ�� [0, 50]
		-100 <= Node.val <= 100
		l1 �� l2 ���� �ǵݼ�˳�� ����
*/

#include <stdio.h>
#include <stdlib.h>

//Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
	/*
		˼·1��
			���αȽ������еĽڵ㣬ÿ��ȡС�Ľڵ㣬β�嵽��������

			�ඨ��һ��ָ�� tail

				 l1
				 ��
				[1] �� [2] �� [2]

				 l2
				 ��
				[1] �� [3] �� [4]

				head
				tail
				 ��
				NULL

			�Ƚ� l1 �� l2���� l1 ���£��� head �� tail��l1 ������

				       l1
				       ��
				[1] �� [2] �� [2]

				 l2
				 ��
				[1] �� [3] �� [4]

				head
				tail
				 ��
				[1] �� 

			�Ƚ� l1 �� l2���� l2 ���£��� tail �ĺ��棬����µ� tail ��l2 ������

					   l1
					   ��
				[1] �� [2] �� [2]

				       l2
				       ��
				[1] �� [3] �� [4]

				head
				 ��    tail
				 ��     ��
				[1] �� [1] �� 

			�Ƚ� l1 �� l2���� l1 ���£��� tail �ĺ��棬����µ� tail ��l1 ������

					         l1
					         ��
				[1] �� [2] �� [2]

					   l2
					   ��
				[1] �� [3] �� [4]

				head
				 ��          tail
				 ��           ��
				[1] �� [1] �� [2] �� 

			�Ƚ� l1 �� l2���� l1 ���£��� tail �ĺ��棬����µ� tail ��l1 �����ߣ�l1 Ϊ��

							       l1
							       ��
				[1] �� [2] �� [2] �� NULL

					   l2
					   ��
				[1] �� [3] �� [4]

				head
				 ��                tail
				 ��                 ��
				[1] �� [1] �� [2] �� [2]

			������һ��Ϊ�գ���ʣ�µĸ� tail �ĺ��棬����

								   l1
								   ��
				[1] �� [2] �� [2] �� NULL

					   l2
					   ��
				[1] �� [3] �� [4]

				head
				 ��                tail
				 ��                 ��
				[1] �� [1] �� [2] �� [2] �� [3] �� [4]
	*/

	// ����һ��Ϊ�գ���������һ��
	if (list1 == NULL)
	{
		return list2;
	}

	if (list2 == NULL)
	{
		return list1;
	}

	struct ListNode* head = NULL;
	struct ListNode* tail = NULL;

	while (list1 && list2)// ѭ�� ����������
	{
		if (list1->val < list2->val)
		{
			// �ж��Ƿ��ǵ�һ��β��
			if (head == NULL)
			{
				head = list1;
				tail = list1;
			}
			else
			{
				tail->next = list1;
				tail = tail->next;
			}

			// ������
			list1 = list1->next;
		}
		else
		{
			// �ж��Ƿ��ǵ�һ��β��
			if (head == NULL)
			{
				head = list2;
				tail = list2;
			}
			else
			{
				tail->next = list2;
				tail = tail->next;
			}

			// ������
			list2 = list2->next;
		}
	}

	// ��ʣ�µĸ� tail �ĺ���
	if (list1)
	{
		tail->next = list1;
	}

	if (list2)
	{
		tail->next = list2;
	}

	return head;
}

struct ListNode* mergeTwoLists2(struct ListNode* list1, struct ListNode* list2)
{
	/*
		˼·1 �Ż���
			���αȽ������еĽڵ㣬ÿ��ȡС�Ľڵ㣬β�嵽��������

			�ඨ��һ��ָ�� tail

				 l1
				 ��
				[1] �� [2] �� [2]

				 l2
				 ��
				[1] �� [3] �� [4]

				head
				tail
				 ��
				NULL

			�Ƚ� l1 �� l2���� l1 ���£��� head �� tail��l1 ������

					   l1
					   ��
				[1] �� [2] �� [2]

				 l2
				 ��
				[1] �� [3] �� [4]

				head
				tail
				 ��
				[1] ��

			�Ƚ� l1 �� l2���� l2 ���£��� tail �ĺ��棬����µ� tail ��l2 ������

					   l1
					   ��
				[1] �� [2] �� [2]

					   l2
					   ��
				[1] �� [3] �� [4]

				head
				 ��    tail
				 ��     ��
				[1] �� [1] ��

			�Ƚ� l1 �� l2���� l1 ���£��� tail �ĺ��棬����µ� tail ��l1 ������

							 l1
							 ��
				[1] �� [2] �� [2]

					   l2
					   ��
				[1] �� [3] �� [4]

				head
				 ��          tail
				 ��           ��
				[1] �� [1] �� [2] ��

			�Ƚ� l1 �� l2���� l1 ���£��� tail �ĺ��棬����µ� tail ��l1 �����ߣ�l1 Ϊ��

								   l1
								   ��
				[1] �� [2] �� [2] �� NULL

					   l2
					   ��
				[1] �� [3] �� [4]

				head
				 ��                tail
				 ��                 ��
				[1] �� [1] �� [2] �� [2]

			������һ��Ϊ�գ���ʣ�µĸ� tail �ĺ��棬����

								   l1
								   ��
				[1] �� [2] �� [2] �� NULL

					   l2
					   ��
				[1] �� [3] �� [4]

				head
				 ��                tail
				 ��                 ��
				[1] �� [1] �� [2] �� [2] �� [3] �� [4]
	*/

	// ����һ��Ϊ�գ���������һ��
	if (list1 == NULL)
	{
		return list2;
	}

	if (list2 == NULL)
	{
		return list1;
	}

	// 
	struct ListNode* head = NULL;
	struct ListNode* tail = NULL;

	// ��ȡһ��С������һ���ڵ�
	if (list1->val < list2->val)
	{
		head = list1;
		tail = list1;
		list1 = list1->next;
	}
	else
	{
		head = list2;
		tail = list2;
		list2 = list2->next;
	}

	// 
	while (list1 && list2)// ѭ�� ����������
	{
		if (list1->val < list2->val)
		{
			tail->next = list1;
			tail = tail->next;

			// ������
			list1 = list1->next;
		}
		else
		{
			tail->next = list2;
			tail = tail->next;

			// ������
			list2 = list2->next;
		}
	}

	// ��ʣ�µĸ� tail �ĺ���
	if (list1)
	{
		tail->next = list1;
	}

	if (list2)
	{
		tail->next = list2;
	}

	return head;
}

struct ListNode* mergeTwoLists3(struct ListNode* list1, struct ListNode* list2)
{
	/*
		˼·1 �ڱ�λ��ͷ�ڵ㣺

				 l1
				 ��
				[1] �� [2] �� [2]

				 l2
				 ��
				[1] �� [3] �� [4]

				head
				tail
				 ��
				[ ]
	*/

	// ����һ��Ϊ�գ���������һ��
	if (list1 == NULL)
	{
		return list2;
	}

	if (list2 == NULL)
	{
		return list1;
	}

	// 
	struct ListNode* head = NULL;
	struct ListNode* tail = NULL;

	// �ڱ�λ��ͷ�ڵ�
	head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));

	// 
	while (list1 && list2)// ѭ�� ����������
	{
		if (list1->val < list2->val)
		{
			tail->next = list1;
			tail = tail->next;

			// ������
			list1 = list1->next;
		}
		else
		{
			tail->next = list2;
			tail = tail->next;

			// ������
			list2 = list2->next;
		}
	}

	// ��ʣ�µĸ� tail �ĺ���
	if (list1)
	{
		tail->next = list1;
	}

	if (list2)
	{
		tail->next = list2;
	}

	// �ȱ���ͷ
	struct ListNode* list = head->next;

	// �ͷ�
	free(head);

	return list;
}

int main()
{
	struct ListNode* l1n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l1n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l1n3 = (struct ListNode*)malloc(sizeof(struct ListNode));

	struct ListNode* l2n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l2n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l2n3 = (struct ListNode*)malloc(sizeof(struct ListNode));

	l1n1->val = 1;
	l1n2->val = 2;
	l1n3->val = 4;

	l2n1->val = 1;
	l2n2->val = 3;
	l2n3->val = 4;

	l1n1->next = l1n2;
	l1n2->next = l1n3;
	l1n3->next = NULL;

	l2n1->next = l2n2;
	l2n2->next = l2n3;
	l2n3->next = NULL;

	struct ListNode* ret = mergeTwoLists(l1n1, l2n1);	// ˼·1�����αȽ������еĽڵ㣬ÿ��ȡС�Ľڵ㣬β�嵽��������

	struct ListNode* ret2 = mergeTwoLists2(l1n1, l2n1);	// ˼·1���Ż�

	struct ListNode* ret3 = mergeTwoLists3(l1n1, l2n1);	// ˼·1���ڱ�λ��ͷ�ڵ�

	return 0;
}