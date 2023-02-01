#include <stdio.h>
#include <string.h>
#include <assert.h>
#pragma warning (disable:4996)

//char* my_strcpy( char* s1,  char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	char* ret = s1;
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//
//	char s1[10] = "abc";
//	char s2[10] = "def";
//    my_strcpy(s1, s2);
//	printf("%s\n", s1);
//	////strcpy
////char s1[10] = "abc";
////char s2[10] = "def";
////strcpy(s1, s2);
////printf("%s\n", s1);
//////strcat
////strcat(s1, s2);
////printf("%s\n", s1);
////strlen
////char s[10] = "abcd";
////printf("%d\n",strlen(s));
//
////实现strcpy
//	return 0;
//}
//
//char* my_strcat(char* s1, char* s2)
//{
//	char* ret = s1;
//	while (*s1++)
//	{
//		;
//	 }
//		while (*s1++ == *s2++)
//		{
//			;
//		}
//	return ret;
//}
//
//int main()
//{
//	char s1[10] = "abc";
//	char s2[10] = "def";
//	my_strcat(s1, s2);
//	printf("%s\n", s1);
//	return 0;
//}
//
//int main()
//{
//	//strstr
//	char* s1 = "abcdef";
//	char* s2 = "def";
//	char* ret=strstr(s1, s2);
//	if (ret == NULL)//双等号
//	{
//		printf("error\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	char* temp = s1;
//	char* temp2 = s2;
//	if (s2 == '\0')
//	{
//		return temp;
//	}
//	else
//	{
//		while (1)
//		{
//			if (*s1 != *s2)
//			{
//				s1++;
//			}
//			//if (*s1 == *s2)
//			//{
//			//	temp = s1;//放回一个地址找到的地址
//			//	s1++;
//			//	s2++;
//			//}
//			if (*s1 == *s2)
//			{
//				temp = s1;
//				while (*s1++==*s2++)
//				{
//					if (*s2 == '\0')
//					{
//						return temp;
//					}
//				}
//				s2 = temp2;
//			}
//			
//			/*if (*s2 == '\0')
//			{
//				return temp;
//			}*/
//		}
//	}
//}
//
//int main()
//{
//	char* s1 = "abcdehijkdefio";
//	char* s2 = "def";
//	char* ret = my_strstr(s1, s2);
//	if (ret == NULL)
//	{
//		printf("error\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	//strtok
//	char s1[100] = "abc.def.ijk";
//	char s2[10] = ".";
//	char* ret = NULL;
//	for (int ret = strtok(s1, s2); ret != NULL; ret = strtok(NULL, s2))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[] = "abc.def.ijk";//给的字符串
//	char* s2 = ".";//给的地址
//	char temp[1024] = { 0 };
//	strcpy(temp, s1);
//	char* ret = NULL;//给个地址
//		for ( ret = strtok(s1, s2); ret != NULL; ret = strtok(NULL, s2))
//	{
//		printf("%s\n", ret);
//	}
//		//先进行一次，然后不为空也就是没找完，继续下一次，下一次要改为空指针进行查找
//	return 0;
//}
//
//int main()
//{
//	char s1[100] = "123.456@789";
//	char* s2 = "@.";
//	
//	for (char* ret = strtok(s1, s2); ret != NULL; ret = strtok(NULL, s2))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
