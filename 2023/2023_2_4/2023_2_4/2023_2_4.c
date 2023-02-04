#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
//
//int main()
//{
//	//书写文件
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("success");
//	}
//	return 0;
//}
//
//int main()
//{
//	//memcmp(比较数组大小)
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2,4,5 };
//	int ret = memcmp(arr1, arr2, 8);//第三位代表的是字节
//	//使用int所以一个数字代表4个字节，8就代表前两个数字
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	//memset
//	char arr[10] = { 0 };
//	memset(arr, '*', 10);//选择，放进去的符号，放进去的个数
//	//打印里面的十个0变成10个*
//	return 0;
//}
//
//typedef struct s//重命名 
//{
//	int a;
//	int b;
//}c;

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};
//结构体内存对齐
int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));//12
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//8
	return 0;
}