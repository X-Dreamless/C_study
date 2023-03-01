
/*
	142. �������� II https://leetcode.cn/problems/linked-list-cycle-ii/

	�Ѷȣ��е�

	����һ�������ͷ�ڵ�  head ����������ʼ�뻷�ĵ�һ���ڵ㡣 ��������޻����򷵻� null��

	�����������ĳ���ڵ㣬����ͨ���������� next ָ���ٴε���������д��ڻ��� 
	Ϊ�˱�ʾ���������еĻ�������ϵͳ�ڲ�ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ����
	��� pos �� -1�����ڸ�������û�л���ע�⣺pos ����Ϊ�������д��ݣ�������Ϊ�˱�ʶ�����ʵ�������

	�������޸� ����


	ʾ�� 1��

		[3] �� [2] �� [0] �� [-4] ��
			   ��                ��
				----------------

		���룺head = [3,2,0,-4], pos = 1
		�������������Ϊ 1 ������ڵ�
		���ͣ���������һ��������β�����ӵ��ڶ����ڵ㡣

	ʾ�� 2��

		[1] �� [2] ��
		 ��         ��
		  ---------

		���룺head = [1,2], pos = 0
		�������������Ϊ 0 ������ڵ�
		���ͣ���������һ��������β�����ӵ���һ���ڵ㡣

	ʾ�� 3��

		[1]

		���룺head = [1], pos = -1
		��������� null
		���ͣ�������û�л���


	��ʾ��
		�����нڵ����Ŀ��Χ�ڷ�Χ [0, 104] ��
		-105 <= Node.val <= 105
		pos ��ֵΪ -1 ���������е�һ����Ч����

	���ף����Ƿ����ʹ�� O(1) �ռ������⣿
*/

#include <stdlib.h>


// Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};

struct ListNode* detectCycle(struct ListNode* head)
{
	/*
		˼·1��
			��ָ�� ��1������ָ�� ��2����һ��������������󻷵���ڵ㣿
			���ۣ�һ��ָ��������㿪ʼ�ߣ�һ��ָ�������ͷ��ʼ�ߣ����ǻ��ڻ�����ڵ�������
			
			��ָ�� fast
			��ָ�� slow
			������ meetNode
			ͷ�ڵ� head

			                                    ��ڵ�
			head                                  ��
			��                           ��    ��    ��
			[][][][][][][][][][][][][][][]        [][][]
											[][][]		[][][]
									�J  [][]					  [][]  �K
									  []						  []
									[]								[]
									[]								[]
								  []								  []
								 ��[]								  []��
								  []								  []
									[]								[]
									[]								[]
									  []						  []
									�I  [][]					  [][]  �L
										   ��[][][]		[][][]
										   ��	  [][][]
										   ��		 ��
										   ��
										  fast
										  slow
										  meetNode

			ͷ�ڵ� �� ��ڵ� �ľ���				  L
			��ڵ� �� ������ �ľ���				  X
			�� �ĳ���							  C
			����ָ�� ����֮ǰ ��ָ�� �ڻ����ߵ�Ȧ�� n

			�����Ĺ�����
			��ָ�� �ߵľ��� L + X
			��ָ�� �ߵľ��� L + n * C + X	(n һ�� ���ڵ��� 1)

			��ָ�� �ߵ�·���� ��ָ�� ��2��
			2(L+X) = L+n*C+X
			L+X    = n*C
			L      = n*C-X
			L      = (n-1)*C + C-X
			
			(n-1)*C �� ������ �߻ص� ������
	*/

	struct ListNode* fast = head;
	struct ListNode* slow = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			// ����

			struct ListNode* meetNode = slow;

			// ��ʽ֤�������ۣ�һ��ָ��������㿪ʼ�ߣ�һ��ָ�������ͷ��ʼ�ߣ����ǻ��ڻ�����ڵ�������
			while (meetNode != head)
			{
				meetNode = meetNode->next;
				head = head->next;
			}

			return meetNode;
		}
	}

	return NULL;
}

struct ListNode* detectCycle2(struct ListNode* head)
{
	/*
		˼·2��ת���������ཻ
			��� ˼·1 ��˼·2 ˼��򵥣�ʵ�ָ���һ��㡣

			������->next �Ľڵ���Ϊ��һ�������ͷ������list��
			�� ������ ��next�ÿգ�Ҳ���Բ��ÿգ�����Ҫ ��¼ �� �ж� ���ȡ�
			
			һ��ָ��� head ��ʼ�ߣ�һ��ָ��� list ��ʼ�ߣ��󽻵㡣
	*/
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

	struct ListNode* ret = detectCycle(n1);

	return 0;
}