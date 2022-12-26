#include <stdio.h>
#include <string.h>
#include <assert.h>
#pragma warning (disable:4996)
//
//int main()
//{
//	//int n = 0;
//	//scanf("%d", &n);
//	char a[10];
//	gets(a);
//	/*printf("%d", n);*/
//	printf("%s",a);
//	return 0;
//}
//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[10] = "efgh";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[10];
//	assert(arr1 != NULL);
//	return 0;
//}
//
//int my_strcpy(char* s, const char* a)
//{
//	assert(s != NULL);
//	assert(a != NULL);
//	while (*s++ = *a++)
//	{
//		;
//	}
//}
//
int main()
{
	char s[12] = "bbbbbbbbbb";
	char a[12] = "aaaaaaaaaaa";
	strcpy( s, a );
	printf("%s", s);
	return 0;
}