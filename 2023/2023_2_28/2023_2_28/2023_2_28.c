#include <stdio.h>
#pragma warning (disable:4996)

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (int i = 2; i <= n; i++)
//	{
//		while (n % i==0)
//		{
//			n /= i;
//			printf("%d", i);
//			if (n != 1)
//			{
//				printf("*");
//			}
//		}
//	}
//	return 0;
//}
//
//void sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//
//int cmp_int(const void* a1, const void* a2)
//{
//	return (*(int*)a1) - (*(int*)a2);
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//
//int cmp_double(const void* a1, const void* a2)
//{
//	return *(double*)a1>*(double*)a2 ? 1 : -1;
//}
//
//int main()
//{
//	double arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_double);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%lf\n", arr[i]);
//	}
//
//	return 0;
//}

