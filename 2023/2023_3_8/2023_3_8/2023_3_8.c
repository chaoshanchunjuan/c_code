////#include <stdio.h>
////#pragma warning(disable:4996)
//
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListInsert (SqList* L, int i, int e)
//{
//	for (int j = L->length; j >= i; j--)
//	{
//		L->data[j] = L->data[j - 1];
//	}
//	L->data[i - 1] = e;
//	L->length++;
//}
//
//int main()
//{
//	SqList L;
//	InitList (L);
//	ListInsert(L, 3, 3);
//	return 0;
//}


////获取元素
//
//#define MaxSize 10
//typedef struct {
//	int data[MaxSize];
//	int length;
//}SqList;
//typedef int ElemType;
//typedef int Status;
//Status GetElem (SqList L,int i,ElemType *e) {
//	if (L.length == 0 || i<1 || i>MaxSize)
//		return 0;
//	*e = L.data[i - 1];
//	return 1;
//};
//
//Status GetElem(SqList L, int i, ElemType* e) {
//	if (L.length == 0 || i<1 || i>L.length)
//		return 0;
//	*e = L.data[i - 1];
//	return 1;
//}
//#define ERROR;
//#define OK;
//#define MaxSize 10
//typedef struct {
//	int data[MaxSize];
//	int length;
//}SqList;
//typedef int ElemType;
//typedef int Status;
//
//
////元素插入
//Status ListInsert(SqList* L, int i, ElemType e) {
//	if (L->length >= MaxSize)
//		return ERROR;
//	if (i<1 || i>L->length+1)
//		return ERROR;
//	if (i <= L->length)
//	{
//		for (int j = L->length; j >= i-1; j--)
//		{
//			L->data[j] = L->data[j - 1];
//		}
//		L->data[i - 1]=e;
//		L->length++;
//		return OK;
//	}
//}
#define MaxSize 10
#define ERROR
#define OK
typedef struct {
	int data[MaxSize];
	int length;
}SqList;
typedef int Status;
typedef int ElemType;
Status  ListDelete(SqList *L, int i, ElemType* e)
{
	if (L->length == 0)
		return ERROR;
	if (i<1 || i>L->length)
		return ERROR;
	if (i < L->length)
	{
		for (int j = i; j < L->length; j--)
		{
			L->data[j - 1] = L->data[j];
		}
	}
	L->length--;
	return OK;
}

























































