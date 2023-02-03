#include <stdio.h>
#include <string.h>
#include <assert.h>
#pragma warning (disable:4996)

//void my_memcpy(int* dest, int* src, size_t count)
//{
//	/*while (*src = *dest)
//	{
//
//	}*/
//	for (int i = 0; i < count / sizeof(int); i++)
//	{
//		//*src = *dest;
//		*dest++ = *src++;
//	}
//}
//
//void* my_memcpy(void* dest, void* src, size_t count)
//{
//	//返回地址是目的地的地址——dest
//	char* ret = dest;
//	//(char*)src;
//	//(char*)dest;
//	for (int i = 0; i < count; i++)
//	{
//	/*	*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;*/
//		*((char*)dest)++ = *((char*)src)++ ;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//	return 0;
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
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
//	int arr[10] = { 9,7,6,8,4,5,3,1,2,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	//memcpy
//	//strcpy
//	char arr1[10] = "abcd";
//	char arr2[10] = "cde";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//char* my_strcpy( char* dest, char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//my_strcpy
//	char arr1[10] = "abcde";
//	char arr2[10] = "apple";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//strcmp
//
//int my_strcmp(char* s1, char* s2)
//{
//	while (*s1 == *s2)
//	{
//		s1++;
//		s2++;
//	}
//	return *s1 -  *s2;
//}
//
//int main()
//{
//	char arr1[10] = "apple";
//	char arr2[10] = "pear";
//	int ret=my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int c = 'a' - 'b';
//	printf("%d", c);
//	return 0;
//}
//
//int my_strlen(char* s1)
//{
//	int count = 0;
//	while (*s1++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char s1[] = "abcd";
//	printf("%d\n", my_strlen(s1));
//	return 0;
//}
//
//char* my_strcat(char* arr1, char* arr2)
//{
//	char* ret = arr1;
//	while (*arr1 != '\0')
//	{
//		arr1++;
//	}
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcat
//	char arr1[10] = "abcde";
//	char arr2[10] = "def";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()
//{
//	//strtok
//	//分开
//	char arr1[100] = "123.456,789@.2";
//	char* arr2 = ".,@";
//	for (char* ret = strtok(arr1, arr2); ret != NULL; ret = strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//
//char* my_strstr(char* dest, char* src)
//{
//	char* ret = dest;
//	char* src_temp = src;
//	while (1)
//	{
//		if (*dest == *src)
//		{
//			ret = dest;
//			while (*dest++ == *src++)
//			{
//				//ret = dest;
//				//dest++;
//				//src++;
//				if (*src == '\0')
//				{
//					return ret;
//				}
//			}
//			src = src_temp;
//			dest++;
//		}
//		else
//		{
//			dest++;
//		}
//	}
//}
//
//int main()
//{
//	//strstr
//	char* arr1 = "abcdeghdefijk";
//	char* arr2 = "def";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}