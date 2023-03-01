
/*
	160. �ཻ���� https://leetcode.cn/problems/intersection-of-two-linked-lists/description/

	�Ѷȣ���

	���������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣����������������ཻ�ڵ㣬���� null ��

	ͼʾ���������ڽڵ� c1 ��ʼ�ཻ��

	A:        [a1] �� [a2] �K
							�� [c1] �� [c2] �� [c3]
	B: [b1] �� [b2] �� [b3] �J

	��Ŀ���� ��֤ ������ʽ�ṹ�в����ڻ���

	ע�⣬�������ؽ����������� ������ԭʼ�ṹ ��

	�Զ������⣺

		����ϵͳ ���������£�����Ƶĳ��� ������ �����룩��

			�� intersectVal - �ཻ����ʼ�ڵ��ֵ������������ཻ�ڵ㣬��һֵΪ 0
			�� listA - ��һ������
			�� listB - �ڶ�������
			�� skipA - �� listA �У���ͷ�ڵ㿪ʼ����������ڵ�Ľڵ���
			�� skipB - �� listB �У���ͷ�ڵ㿪ʼ����������ڵ�Ľڵ���

		����ϵͳ��������Щ���봴����ʽ���ݽṹ����������ͷ�ڵ� headA �� headB ���ݸ���ĳ�����������ܹ���ȷ�����ཻ�ڵ㣬��ô��Ľ���������� ������ȷ�� ��


	ʾ�� 1��

		A:       [4] �� [1] �K
							 �� [8] �� [4] �� [5]
		B: [5] �� [6] �� [1] �J

		���룺intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
		�����Intersected at '8'
		���ͣ��ཻ�ڵ��ֵΪ 8 ��ע�⣬������������ཻ����Ϊ 0����
		�Ӹ��Եı�ͷ��ʼ�������� A Ϊ [4,1,8,4,5]������ B Ϊ [5,6,1,8,4,5]��
		�� A �У��ཻ�ڵ�ǰ�� 2 ���ڵ㣻�� B �У��ཻ�ڵ�ǰ�� 3 ���ڵ㡣
		�� ��ע���ཻ�ڵ��ֵ��Ϊ 1����Ϊ������ A ������ B ֮��ֵΪ 1 �Ľڵ� (A �еڶ����ڵ�� B �е������ڵ�) �ǲ�ͬ�Ľڵ㡣���仰˵���������ڴ���ָ��������ͬ��λ�ã������� A ������ B ��ֵΪ 8 �Ľڵ� (A �е������ڵ㣬B �е��ĸ��ڵ�) ���ڴ���ָ����ͬ��λ�á�
 

	ʾ�� 2��

		A: [1] �� [9] �� [1] �K
							 �� [2] �� [4]
		B:             [3] �J

		���룺intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
		�����Intersected at '2'
		���ͣ��ཻ�ڵ��ֵΪ 2 ��ע�⣬������������ཻ����Ϊ 0����
		�Ӹ��Եı�ͷ��ʼ�������� A Ϊ [1,9,1,2,4]������ B Ϊ [3,2,4]��
		�� A �У��ཻ�ڵ�ǰ�� 3 ���ڵ㣻�� B �У��ཻ�ڵ�ǰ�� 1 ���ڵ㡣


	ʾ�� 3��

		A: [2] �� [6] �� [4]
							
		B:       [1] �� [5]

		���룺intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
		�����null
		���ͣ��Ӹ��Եı�ͷ��ʼ�������� A Ϊ [2,6,4]������ B Ϊ [1,5]��
		���������������ཻ������ intersectVal ����Ϊ 0���� skipA �� skipB ����������ֵ��
		�����������ཻ����˷��� null ��
 

	��ʾ��
		listA �нڵ���ĿΪ m
		listB �нڵ���ĿΪ n
		1 <= m, n <= 3 * 104
		1 <= Node.val <= 105
		0 <= skipA <= m
		0 <= skipB <= n
		��� listA �� listB û�н��㣬intersectVal Ϊ 0
		��� listA �� listB �н��㣬intersectVal == listA[skipA] == listB[skipB]
 

	���ף����ܷ����һ��ʱ�临�Ӷ� O(m + n) ������ O(1) �ڴ�Ľ��������
*/
/*
	����˵��
		1. �ж����������Ƿ��ཻ��
		2. �ཻ���ؽ��㡣
*/

#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
	int val;
	struct ListNode *next;
};

struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
{
	/*
		˼·1�����
			����ȡ A���� �е�ÿ���ڵ�� B���� �е����нڵ�Ƚϣ�
			����е�ַ��ͬ�Ľڵ㣬�����ཻ����һ����ͬ�Ľ��㡣

			ʱ�临�Ӷȣ�O(N^2)

		˼·2��
			1. β�ڵ���ͬ�����ཻ�������ཻ��
			2. �󽻵㣺������������ ���Ȳ� ������ͬʱ�ߣ���һ����ͬ���ǽ��㡣
	*/

	// ˼·2

	struct ListNode* tailA = headA;
	struct ListNode* tailB = headB;
	int lenA = 1;
	int lenB = 1;

	// ��β ����¼ ����
	while (tailA->next)
	{
		tailA = tailA->next;
		lenA++;
	}

	while (tailB->next)
	{
		tailB = tailB->next;
		lenB++;
	}

	// ���ཻ
	if (tailA != tailB)
	{
		return NULL;
	}

	// ��� ����ֵ���⺯��int abs (int n);
	int gap = abs(lenA - lenB);

	// �������߲�ಽ����ͬʱ���ҽ���
	// Ĭ����Ϊ A �� B ��
	struct ListNode* longList = headA;
	struct ListNode* shortList = headB;

	// �ж�˭��
	if (lenA < lenB)
	{
		shortList = headA;
		longList = headB;
	}

	// �������߲�ಽ
	while (gap--)
	{
		longList = longList->next;
	}

	// ��ͬʱ���ҽ���
	while (longList != shortList)
	{
		longList = longList->next;
		shortList = shortList->next;
	}

	return longList;
}

int main()
{
	/*	======== ======== ======== C ======== ======== ========	*/
	struct ListNode* Cn1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* Cn2 = (struct ListNode*)malloc(sizeof(struct ListNode));

	Cn1->val = 7;
	Cn2->val = 7;

	Cn1->next = Cn2;
	Cn2->next = NULL;

	/*	======== ======== ======== A ======== ======== ========	*/
	struct ListNode* An1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* An2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* An3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* An4 = (struct ListNode*)malloc(sizeof(struct ListNode));

	An1->val = 7;
	An2->val = 7;
	An3->val = 7;
	An4->val = 7;

	An1->next = An2;
	An2->next = An3;
	An3->next = An4;
	An4->next = Cn1;

	/*	======== ======== ======== B ======== ======== ========	*/
	struct ListNode* Bn1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* Bn2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* Bn3 = (struct ListNode*)malloc(sizeof(struct ListNode));

	Bn1->val = 7;
	Bn2->val = 7;
	Bn3->val = 7;

	Bn1->next = Bn2;
	Bn2->next = Bn3;
	Bn3->next = Cn1;

	/*	****************************************************	*/

	struct ListNode* ret = getIntersectionNode(An1, Bn1);

	return 0;
}