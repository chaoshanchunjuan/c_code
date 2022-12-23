#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

//int search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] = k)
//		{
//			return mid;
//		}
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	//二分法查找数组下标
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int l = search(arr, k, sz);
//	if (l == 0)
//	{
//		printf("错误");
//	}
//	else
//	printf("%d", l);
//
//
//
//	return 0;
//}
//
//int Prime(int i)
//{
//	int is_Prime = 1;
//		for (int j = 2; j <= sqrt(i); j++)//加=
//		{
//			if (i != j)
//			{
//				if (i % j == 0)
//				{
//					is_Prime = 0;
//					return is_Prime;
//				}
//			}
//		}
//
//		return is_Prime;
//}
//
//int  main()
//{
//	//打印素数
//	//打印2-100的素数
//	for (int i = 2; i <= 100; i++)
//	{
//		int k=Prime(i);
//		if (k == 1)
//			printf("%d\n", i);
//	 }
//
//	return 0;
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	//用qsort排序数组
//	//排序int数组
//	int arr_int[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz_int = sizeof(arr_int) / sizeof(arr_int[0]);
//	qsort(arr_int, sz_int, sizeof(arr_int[0]), cmp_int);
//	for (int i = 0; i < sz_int; i++)
//	{
//		printf("%d ", arr_int[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	//qsort排序float
//	float arr_float[5] = { 9.0,8.0,7.0,6.0,5.0 };
//	int sz_float = sizeof(arr_float) / sizeof(arr_float[0]);
//	qsort(arr_float, sz_float, sizeof(arr_float[0]), cmp_float);
//	for (int i = 0; i < sz_float; i++)
//	{
//		printf("%f ", arr_float[i]);
//	}
//
//	return 0;
//}
//
//int cmp_double(const void* e1, const void* e2)
//{
//	return *(double*)e1 > *(double*)e2 ? 1 : -1;
//}
//
//int main()
//{
//	//qsort打印double
//	double arr_double[5] = { 9.0,8.0,7.0,6.0,5.0 };
//	int sz_double = sizeof(arr_double) / sizeof(arr_double[0]);
//	qsort(arr_double, sz_double, sizeof(arr_double[0]), cmp_double);
//	for (int i = 0; i < sz_double; i++)
//	{
//		printf("%lf ", arr_double[i]);
//	}
//	return 0;
//}
//struct sub                      //错误
//{
//	//char name[10];
//	char name;
//	int age;
//};
//
//int cmp_struct_age(const void* e1, const void* e2)
//{
//	return ((struct sub*)e1)->age - ((struct sub*)e2)->age;
//}
//
//int cmp_struct_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct sub*)e1)->name , ((struct sub*)e2)->name);
//}
//
//int main()
//{
//	struct sub s[3] = { {"c",20},{"b",15},{"a",10} };
//	int sz_s = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz_s, sizeof(s[0]), cmp_struct_age);
//	qsort(s, sz_s, sizeof(s[0]), cmp_struct_name);
//	for (int i = 0; i < sz_s; i++)
//	{
//		printf("%d ", s[i].age);
//			printf("%d ", s[i].name);
//	}
//}
//
//struct sub
//{
//	char name[10];
//	//char name;
//	int age;
//};
//
//int cmp_struct_age(const void* e1, const void* e2)
//{
//	return ((struct sub*)e1)->age - ((struct sub*)e2)->age;
//}
//
//int cmp_struct_name(const void* e1, const void* e2)
//{
//	return ((struct sub*)e1)->name, ((struct sub*)e2)->name;
//}
//
//int main()
//{
//	struct sub s[3] = { {"c",20},{"b",15},{"a",10} };
//	int sz_s = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz_s, sizeof(s[0]), cmp_struct_age);
//	qsort(s, sz_s, sizeof(s[0]), cmp_struct_name);
//	for (int i = 0; i < sz_s; i++)
//	{
//		printf("%d ", s[i].age);
//		printf("%d ", s[i].name);
//	}
//}