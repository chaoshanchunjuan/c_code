#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
//
//int main()
//{
//	char* p1 = "abcde";
//	char* p2 = "abce";
//	int ret = strcmp(p1, p2);
//	printf("%d", ret);
//	return 0;
//}
//
//int my_strcmp(const char* p1, const char* p2)
//{
//	//int ret = -1;
//	while (1)
//	{
//		while (*p1 == *p2)
//		{
//			if (*p1 == '\0')
//			{
//				return 0;
//			}
//			p1++;
//			p2++;
//		}
//		if (*p1 > *p2)
//		{
//			//ret = 1;
//			//return ret;
//			return 1;
//		}
//		else if (*p1 < *p2)
//		{
//			//return ret;
//			return -1;
//		
//		}
//	}
//}
//cuowu
//int my_strcmp(const char* p1, const char* p2)
//{
//	while (*p1++ == *p2++)
//	{
//		if (*p1 == '\0')
//		{
//			printf("%d\n", p1);
//			printf("%d\n", p2);
//			return 0;
//		}
//	}
//	return *p1 - *p2;
//    
//}
//
//int main()
//{
//	char* p1 = "abcde";
//	char* p2 = "abcdq";
//	int k = my_strcmp(p1, p2);
//	printf("%d\n", k);
//	return 0;
//}

//my_strncpy(char* p1, char* p2, int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		*p1++ == *p2++;
//	}
//}
//
//int main()
//{
//	char p1[7] = "abcdef";
//	char p2[] = "abcd";
//	my_strncpy(p1, p2, 3);
//	return 0;
//}
//
//void my_strcpy( char* p1, const char* p2)
//{
//	//char* ret = p1;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	//return ret;
//}
//
//int main()
//{
//	//char p1[10] = "abcd";
//	//char p2[] = "ufo";
//	////char ret=my_strcpy(p1, p2);
//	//strcpy(p1, p2);
//	//printf("%s", p1);
//	//
//	char p3[10] = "abcdefg";
//	char p4[] = "abcd";
//	my_strcpy(p3, p4);
//	printf("%s\n", p3);
//	return 0;
//}

//strncpy
void my_strncpy(char* p1, char* p2, int n)
{
	for (int i = 0; i < n; i++)
	{
		*p1++ = *p2++;
	   }
}

int main()
{
	char p1[4] = "abc";
	char p2[] = "sn";
	//strncpy(p1, p2, 1);
	//printf("%s\n", p1);
	my_strncpy(p1, p2, 3);
	printf("%s\n", p1);
	return 0;
}