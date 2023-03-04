#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
//
//int main()
//{
//	for (int i = 153; i < 999; i++)
//	{
//		int a = i % 10;//3
//		int b = i / 10 % 10;//5
//		int c = i / 100 % 10;//1
//		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	//0、1、1、2、3、5、8、13、21、34、........
//	int arr[100] = { 0 };
//	arr[0] = 0;
//	arr[1] = 1;
//	for (int i = 2; i <= 99; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	int sum = 1;
//	for (int i = 0; i < 9; i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	double i = 100;
//	double sum = 100;
//	for (int k = 0; k <10; k++)
//	{
//		i /= 2;
//		if (k != 9)
//		{
//			sum += 2 * i;
//		}
//	}
//	printf("%lf\n%lf\n", i, sum);
//	return 0;
//}
//
//int main()
//{
//	//殆方
//	for (int i = 2; i <= 100; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			if (i % j != 0&&j==i-1)
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}