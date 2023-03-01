
/*
	����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��
	������ĳЩ�����в��ܸı�����ĳ��ȣ����Ա��뽫�����������nums�ĵ�һ���֡����淶��˵�������ɾ���ظ���֮���� k ��Ԫ�أ���ô nums ��ǰ k ��Ԫ��Ӧ�ñ������ս����
	�����ս������ nums ��ǰ k ��λ�ú󷵻� k ��

	��Ҫʹ�ö���Ŀռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�

	�����׼:
		ϵͳ��������Ĵ���������������:
			int[] nums = [...]; // ��������
			int[] expectedNums = [...]; // ������ȷ��������

			int k = removeDuplicates(nums); // ����

			assert k == expectedNums.length;
			for (int i = 0; i < k; i++) {
				assert nums[i] == expectedNums[i];
			}
			������ж��Զ�ͨ������ô������⽫�� ͨ����

	ʾ�� 1��
		���룺nums = [1,1,2]
		�����2, nums = [1,2,_]
		���ͣ�����Ӧ�÷����µĳ��� 2 ������ԭ���� nums ��ǰ����Ԫ�ر��޸�Ϊ 1, 2 ������Ҫ���������г����³��Ⱥ����Ԫ�ء�

	ʾ�� 2��
		���룺nums = [0,0,1,1,1,2,2,3,3,4]
		�����5, nums = [0,1,2,3,4]
		���ͣ�����Ӧ�÷����µĳ��� 5 �� ����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4 ������Ҫ���������г����³��Ⱥ����Ԫ�ء�

	��ʾ��
		1 <= nums.length <= 3 * 10^4
		-10^4 <= nums[i] <= 10^4
		nums �Ѱ� ���� ����

	��Դ�����ۣ�LeetCode��
	���ӣ�https://leetcode.cn/problems/remove-duplicates-from-sorted-array
	����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize)
{

	/*
		˼·��
			��ָ��

			 i  j
			 ��  ��
			[0][0][1][1][1][2][2][3][3][4]
			 ��
			dst

			dst �ظ�����һ��
			i �� j �ظ�����

			i �� j ��ͬ j++

				 i     j
				 ��     ��
				[0][0][1][1][1][2][2][3][3][4]
				 ��
				dst

			i �� j ��ͬ dst = i��dst++��i = j��j++

					   i  j
					   ��  ��
				[0][0][1][1][1][2][2][3][3][4]
					��
				   dst
	*/
	if (numsSize == 0)
	{
		return 0;
	}

	// ȥ��
	int i = 0;
	int j = 1;
	int dst = 0;
	while (j < numsSize)
	{
		if (nums[i] == nums[j])
		{
			j++;
		}
		else
		{
			nums[dst] = nums[i];
			dst++;
			i = j;
			j++;
		}
	}

	// ʣ�������
	nums[dst] = nums[i];

	// ���ݸ���
	dst++;

	return dst;
}

int main()
{
	int arr2[] = { 0,0,1,1,1,2,2,3,3,4 };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	int ret = removeDuplicates(arr2, sz2);
	for (int i = 0; i < ret; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}