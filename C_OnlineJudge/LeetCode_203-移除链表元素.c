
/*
	����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��

	ʾ�� 1��
		(1) �� (2) �� (6) �� (3) �� (4) �� (5) �� (6)
				��
		(1) �� (2) �� (3) �� (4) �� (5)

		���룺head = [1,2,6,3,4,5,6], val = 6
		�����[1,2,3,4,5]

	ʾ�� 2��
		���룺head = [], val = 1
		�����[]

	ʾ�� 3��
		���룺head = [7,7,7,7], val = 7
		�����[]

	��ʾ��
		�б��еĽڵ���Ŀ�ڷ�Χ [0, 104] ��
		1 <= Node.val <= 50
		0 <= val <= 50
*/

#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val)
{
	/*
		˼·

			��Ҫ�ҵ� ��ɾ���ڵ� �� ǰһ���ڵ�
					 prev   cur
					   ��     ��
				(1) �� (2) �� (6) �� (3) �� (4) �� (5) �� (6)

			�Ҳ�����������

			�ҵ�����cur->next��prev->next�����ͷſռ䣬cur ����������

			�����ͷɾ��headָ����һ���ڵ㣬���ͷſռ䣬�� cur = head���ټ���������
	*/

	struct ListNode* prev = NULL;
	struct ListNode* cur = head;

	while (cur)
	{
		if (cur->val == val)
		{
			// �ж��Ƿ�ͷɾ
			if (cur == head)
			{
				head = cur->next;
				free(cur);
				cur = head;
			}
			else// ����ͷɾ
			{
				// ���� prev->next ָ�� cur->next
				prev->next = cur->next;

				// ɾ��
				free(cur);

				// ����������
				cur = prev->next;
			}
		}
		else
		{
			// ����������
			prev = cur;
			cur = cur->next;
		}
	}

	return head;
}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));

	n1->val = 7;
	n2->val = 7;
	n3->val = 7;
	n4->val = 7;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	struct ListNode* head = removeElements(n1, 7);

	return 0;
}