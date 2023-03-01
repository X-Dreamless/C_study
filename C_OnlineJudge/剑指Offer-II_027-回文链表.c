
/*
	��ָ Offer II 027. �������� https://leetcode.cn/problems/aMhZSa/

	�Ѷȣ���

	����һ������� ͷ�ڵ� head �����ж����Ƿ�Ϊ��������

	���һ�������ǻ��ģ���ô����ڵ����д�ǰ���󿴺ʹӺ���ǰ������ͬ�ġ�

	ʾ�� 1��
		����: head = [1,2,3,3,2,1]
		���: true

	ʾ�� 2��
		����: head = [1,2]
		���: false

	��ʾ��
		���� L �ĳ��ȷ�ΧΪ [1, 105]
		0 <= node.val <= 9

	���ף��ܷ��� O(n) ʱ�临�ӶȺ� O(1) �ռ临�ӶȽ�����⣿

	ע�⣺��������վ 234 ����ͬ��https://leetcode-cn.com/problems/palindrome-linked-list/
*/

#include <stdio.h>
#include <stdlib.h>


// Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};

// 206. ��ת���� https://leetcode.cn/problems/reverse-linked-list/
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

// 876. ������м��� https://leetcode.cn/problems/middle-of-the-linked-list/
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

_Bool isPalindrome(struct ListNode* head)
{
	/*
		˼·1��
			ÿ���ڵ�� val �ŵ������Ȼ�� ǰ�����

		˼·2��
			�ҵ������м�ڵ㣬���ú��Σ�֮�� head �� reverseHead ����Ƚ�

			[1] �� [2] �� [3] �� [2] �� [1]

			head       middle
			 ��           ��
			[1] �� [2] �� [3] �� [2] �� [1]

			head       reverseHead
			 ��           ��
			[1] �� [2]   [1] �� [2] �� [3] �� NULL
			       ��                 ��
				    -----------------
	*/

	// ˼·2

	// ������м���
	struct ListNode* middle = middleNode(head);

	// ��ת����
	struct ListNode* reverseHead = reverseList(middle);
		
	// �Ƚ�
	struct ListNode* curHead = head;
	struct ListNode* curReverseHead = reverseHead;

	while (curHead && curReverseHead)
	{
		if (curHead->val != curReverseHead->val)
		{
			return 0;
		}
		else
		{
			curHead = curHead->next;
			curReverseHead = curReverseHead->next;
		}
	}

	return 1;
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
	n2->val = 2;
	n3->val = 3;
	n4->val = 3;
	n5->val = 2;
	n6->val = 1;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = NULL;

	_Bool ret = isPalindrome(n1);

	return 0;
}