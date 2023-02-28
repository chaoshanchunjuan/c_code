#include <stdio.h>
#pragma warning(disable:4996)

//int main()
//{
//	int nums[100] = {1,2,3,4,5,9,4,3,5,1,2 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int first = 0;
//	int last = sz - 1;
//	int count1 = nums[first];
//	int count2 = nums[last];
//	while (last>first)
//	{
//		if (count1 > count2)
//		{
//			last--;
//			count2 += nums[last];
//		}
//		else if (count1 < count2)
//		{
//			first++;
//			count1 += nums[first];
//		}
//		else
//		{
//			if (last - first == 2)
//			{
//				printf("中心坐标为%d\n", first + 1);
//				goto star;
//			}
//			first++;
//			last--;
//			count1 += nums[first];
//			count2 += nums[last];
//		}
//		
//	}
//star:
//	if (last - first != 2)
//	{
//		printf("error\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int nums[10] = { 1,3,5,6 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int target = 5;
//	int ret = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		if (target == nums[i])
//		{
//			ret = i;
//			return ret;
//		}
//		if (target > nums[i - 1] && target < nums[i])
//		{
//			ret = i;
//		}
//	}
//	
//	return 0;
//}