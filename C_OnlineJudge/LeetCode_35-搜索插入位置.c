
/*
	35. ��������λ�� https://leetcode.cn/problems/search-insert-position/description/

	����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

	�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��

	ʾ�� 1:
		����: nums = [1,3,5,6], target = 5
		���: 2

	ʾ�� 2:
		����: nums = [1,3,5,6], target = 2
		���: 1

	ʾ�� 3:
		����: nums = [1,3,5,6], target = 7
		���: 4

	��ʾ:
		1 <= nums.length <= 104
		-104 <= nums[i] <= 104
		nums Ϊ ���ظ�Ԫ�� �� ���� ��������
		-104 <= target <= 104
*/

int searchInsert(int* nums, int numsSize, int target)
{
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (target == nums[i])
		{
			return i;
		}
		else if (target < nums[i])
		{
			return i;
		}
	}

	return numsSize;
}

int main()
{
	int arr[] = { 1,3,5,6 };
	int target = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int ret = searchInsert(arr, sz, target);

	return 0;
}