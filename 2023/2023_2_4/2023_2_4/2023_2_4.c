#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
//
//int main()
//{
//	//��д�ļ�
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
//	//memcmp(�Ƚ������С)
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2,4,5 };
//	int ret = memcmp(arr1, arr2, 8);//����λ��������ֽ�
//	//ʹ��int����һ�����ִ���4���ֽڣ�8�ʹ���ǰ��������
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	//memset
//	char arr[10] = { 0 };
//	memset(arr, '*', 10);//ѡ�񣬷Ž�ȥ�ķ��ţ��Ž�ȥ�ĸ���
//	//��ӡ�����ʮ��0���10��*
//	return 0;
//}
//
//typedef struct s//������ 
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
//�ṹ���ڴ����
int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));//12
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//8
	return 0;
}