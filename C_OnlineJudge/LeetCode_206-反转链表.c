
/*
	206. ��ת����

		���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������

		ʾ�� 1��
			���룺head = [1,2,3,4,5]
			�����[5,4,3,2,1]

		ʾ�� 2��
			���룺head = [1,2]
			�����[2,1]

		ʾ�� 3��
			���룺head = []
			�����[]

		��ʾ��
			�����нڵ����Ŀ��Χ�� [0, 5000]
			-5000 <= Node.val <= 5000

		���ף��������ѡ�õ�����ݹ鷽ʽ��ɷ�ת�����ܷ������ַ����������⣿
*/

#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};



struct ListNode* reverseList(struct ListNode* head)
{
	/*
		˼·1��
			�ı��ͷ����

				[1] �� [2] �� [3] �� [4] �� [5]
							 ��
				[1] �� [2] �� [3] �� [4] �� [5]

			�ȴ���3��������n1֮ǰλ�ã�n2��ǰλ�ã�n3��һλ�á���ʼ����

				n1    n2    n3
				��     ��     ��
					 [1] �� [2] �� [3] �� [4] �� [5]

			n2 ָ�� n1�������߼�

				n1      n2    n3
				��       ��     ��
				NULL �� [1]   [2] �� [3] �� [4] �� [5]

			n2��n1����������

						n1
						n2    n3
						��     ��
				NULL �� [1]   [2] �� [3] �� [4] �� [5]

			n3��n2����������

							  n2
						n1    n3
						��     ��
				NULL �� [1]   [2] �� [3] �� [4] �� [5]

			n3����n3->next����������

						n1    n2    n3
						��     ��     ��
				NULL �� [1]   [2] �� [3] �� [4] �� [5]

			n2 Ϊ �ա���������

												n1    n2    n3
												��     ��     ��
				NULL �� [1] �� [2] �� [3] �� [4] �� [5]

			n1 �������µ�ͷ
	*/

	// ����Ϊ��
	if (head == NULL)
	{
		return NULL;
	}

	// �ȴ���3��������n1֮ǰλ�ã�n2��ǰλ�ã�n3��һλ��
	struct ListNode* n1;
	struct ListNode* n2;
	struct ListNode* n3;

	// ��ʼ����
	n1 = NULL;
	n2 = head;
	n3 = head->next;

	while (n2)// ��������
	{
		// �����߼�����ת
		n2->next = n1;

		// ����������������
		n1 = n2;
		n2 = n3;

		// n3 ���Ϊ�վ�ֹͣ
		if (n3)
		{
			n3 = n3->next;
		}
	}

	return n1;
}

struct ListNode* reverseList2(struct ListNode* head)
{
	/*
		˼·2��
			ȡԭ�����еĽڵ㣬ͷ�嵽 ������newHead ��

			newHead = NULL

			curָ��ʼ��λ�ã�next������һ���ڵ㡣��ʼ����

				cur  next
				 ��     ��
				[1] �� [2] �� [3] �� [4] �� [5]

			���������߼�

				     next
				       ��
				[1]   [2] �� [3] �� [4] �� [5]

									  newHead
										cur
										 ��
										[1]

			���������߼���next��cur

				      cur
				     next
					   ��
				[1]   [2] �� [3] �� [4] �� [5]

									  newHead
										 ��
										[1]

			���������߼���next������

				      cur  next
					   ��     ��
				[1]   [2] �� [3] �� [4] �� [5]

									  newHead
										 ��
										[1]

			���������߼���
				cur->next ָ�� newHead
				cur��newHead��
				next��cur��
				next�����ߡ�

			����������curΪ��

			ջ�����˺������������������ﲻ��malloc��
			�������ԭ�������ڶ�����ģ�����ֻ�������Ľ����ͷ�����µ�����
	*/

	struct ListNode* cur = head;
	struct ListNode* newhead = NULL;

	while (cur)
	{
		// ������һ���ڵ�
		struct ListNode* next = cur->next;

		// ͷ��
		cur->next = newhead;
		newhead = cur;

		// ��������
		cur = next;
	}

	return newhead;
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

	struct ListNode* ret = reverseList(n1);	// ˼·1 �ı��ͷ����

	struct ListNode* ret = reverseList2(n1);// ˼·2 ͷ��

	return 0;
}