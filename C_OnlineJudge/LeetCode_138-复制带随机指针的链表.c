
/*
	138. ���ƴ����ָ������� https://leetcode.cn/problems/copy-list-with-random-pointer/description/

	�Ѷȣ��е�

	����һ������Ϊ n ������ÿ���ڵ����һ���������ӵ����ָ�� random ����ָ�����ָ�������е��κνڵ��սڵ㡣

	������������ ����� ���Ӧ�������� n �� ȫ�� �ڵ���ɣ�����ÿ���½ڵ��ֵ����Ϊ���Ӧ��ԭ�ڵ��ֵ��
	�½ڵ�� next ָ��� random ָ��Ҳ��Ӧָ���������е��½ڵ㣬��ʹԭ����͸��������е���Щָ���ܹ���ʾ��ͬ������״̬��
	���������е�ָ�붼��Ӧָ��ԭ�����еĽڵ� ��

	���磬���ԭ�������� X �� Y �����ڵ㣬���� X.random --> Y ����ô�ڸ��������ж�Ӧ�������ڵ� x �� y ��ͬ���� x.random --> y ��

	���ظ��������ͷ�ڵ㡣

	��һ���� n ���ڵ���ɵ���������ʾ����/����е�����ÿ���ڵ���һ�� [val, random_index] ��ʾ��

	�� val��һ����ʾ Node.val ��������
	�� random_index�����ָ��ָ��Ľڵ���������Χ�� 0 �� n-1���������ָ���κνڵ㣬��Ϊ  null ��

	��Ĵ��� ֻ ����ԭ�����ͷ�ڵ� head ��Ϊ���������



	ʾ�� 1��

		���룺head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
		�����[[7,null],[13,0],[11,4],[10,2],[1,0]]

	ʾ�� 2��

		���룺head = [[1,1],[2,1]]
		�����[[1,1],[2,1]]

	ʾ�� 3��

		���룺head = [[3,null],[3,0],[3,null]]
		�����[[3,null],[3,0],[3,null]]


	��ʾ��
		�� 0 <= n <= 1000
		�� -104 <= Node.val <= 104
		�� Node.random Ϊ null ��ָ�������еĽڵ㡣
*/

#include <stdlib.h>

// Definition for a Node.
struct Node
{
	int val;
	struct Node *next;
	struct Node *random;
};


struct Node* copyRandomList(struct Node* head)
{
	/*
		˼·1��
			���� ԭ���� �ڵ� �� random �͵�ǰ �ڵ� ����Ծ��룬
			�� ������ ������Ծ����� random��

			ʱ�临�Ӷ� O(N ^ 2)

		˼·2��
			���ƽڵ㣬���뵽 ԭ�ڵ� �� ��һ���ڵ� ֮��

				[[7,null],          [13,0],       [11,4],       [10,2],       [1,0]],       NULL
				��
				[[7,null],[[7,    ],[13,0],[13, ],[11,4],[11, ],[10,2],[10, ],[1,0] ,[1, ]],NULL

			����ԭ�ڵ��random�������ƽڵ��random��
			ԭ�ڵ��random�ǿգ����ƽڵ��random�ǿգ�

				[[7,null],          [13,0],       [11,4],       [10,2],       [1,0]],       NULL
				��
				[[7,null],[[7,null],[13,0],[13, ],[11,4],[11, ],[10,2],[10, ],[1,0] ,[1, ]],NULL
				  ��                  ��      ��
				cur.random          cur    cur.next

				cur.next.random = cur.random.next

			��󣬽� ���ƽڵ� ƴ�ӳ� �������ָ�ԭ����

			ʱ�临�Ӷ� O(3N)
	*/

	// ˼·2
	
	// ���ƽڵ㣬���뵽 ԭ�ڵ� �� ��һ���ڵ� ֮��
	struct Node* cur = head;

	while (cur)
	{
		struct Node* copyNode = (struct Node*)malloc(sizeof(struct Node));

		// ����
		copyNode->val = cur->val;

		// ����
		copyNode->next = cur->next;
		cur->next = copyNode;

		// cur ������
		cur = copyNode->next;
	}


	// ����ԭ�ڵ��random�������ƽڵ��random
	cur = head;

	while (cur)
	{
		struct Node* copyNode = cur->next;

		if (cur->random == NULL)
		{
			copyNode->random = NULL;
		}
		else
		{
			copyNode->random = cur->random->next;
		}

		cur = copyNode->next;
	}


	// ��󣬽� ���ƽڵ� ƴ�ӳ� �������ָ�ԭ����
	struct Node* copyHead = NULL;
	struct Node* copyTail = NULL;
	cur = head;

	while (cur)
	{
		struct Node* copyNode = cur->next;
		struct Node* next = copyNode->next;

		if (copyTail == NULL)
		{
			copyHead = copyNode;
			copyTail = copyNode;
		}
		else
		{
			// β��
			copyTail->next = copyNode;
			copyTail = copyTail->next;
		}

		// �ָ�ԭ����
		cur->next = next;
		cur = cur->next;
	}

	return copyHead;

}

int main()
{
	struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* n4 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* n5 = (struct Node*)malloc(sizeof(struct Node));

	n1->val = 7;
	n2->val = 13;
	n3->val = 11;
	n4->val = 10;
	n5->val = 1;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	n1->random = NULL;
	n2->random = n1;
	n3->random = n5;
	n4->random = n3;
	n5->random = n1;

	struct Node* head = copyRandomList(n1);

	return 0;
}