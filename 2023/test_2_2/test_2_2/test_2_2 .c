#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

//int main()
//{
//	//strstr
//	//search
//	char* s1 = "abcdef";
//	char* s2 = "de";
//	char* ret = strstr(s1, s2);
//	printf("%s\n", ret);
//	return 0;
//}
//
//int cmp_int(const void* s1, const void* s2)
//{
//	//return *(int*)s1 - *(int*)s2;
//	return *(int*)s2 - *(int*)s1;
//}
//
//int main()
//{
//	//qsort_int
//	int s1[10] = { 9,8,7,6,5,4,3,2,0,1 };
//	int sz_int = sizeof(s1) / sizeof(s1[0]);
//	qsort(s1, sz_int, sizeof(s1[0]), cmp_int);
//	for (int i = 0; i < sz_int; i++)
//	{
//		printf("%d\n", s1[i]);
//	}
//	
//
//	return 0;
//}
//
//int cmp_double(const void* s1, const void* s2)
//{
//	return (*(double*)s1 - *(double*)s2>0?1:-1);
//}
//
//int main()
//{
//	//qsort_double
//	double s1[5] = { 5.0,1.0,3.0,2.0,6.0 };
//	int sz_double = sizeof(s1) / sizeof(s1[0]);
//	qsort(s1, sz_double, sizeof(s1[0]), cmp_double);
//	for (int i = 0; i < sz_double; i++)
//	{
//		printf("%lf\n", s1[i]);
//	}
//	return 0;
//}

//int main()
//{
	//          *
	//         * *
	//       *  *  *
	//         * *
	//          *
//	int i = 10;
//	int p = 1;
//	for (int k = 0; k < 5; k++)
//	{
//		
//		for (int j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		i--;
//	
//		for (int j = 0; j < p; j++)
//		{
//			printf("*");
//		}
//		p += 2;
//		printf("\n");
//	}
//	int i1 = 7;
//	int p1 = 7;
//	for (int k = 0; k < 4; k++)
//	{
//		for (int i = 0; i < i1; i++)
//		{
//			printf(" ");
//		}
//		i1++;
//		for (int i = 0; i < p1; i++)
//		{
//			printf("*");
//		}
//		p1 -= 2;
//		printf("\n");
//	}
//
//	return 0;
//}

	int main()
	{
		//strtok
		char arr[100] = "192.168.11.256";
		char* s = ".";
		for (char* ret = strtok(arr, s); ret != NULL; ret = strtok(NULL, s))
		{
			printf("%s\n", ret);
		}
			return 0;
		}