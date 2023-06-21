////双链表
//
//#include <stdlib.h>
//
//typedef int ElemType;
//typedef int Status;
//
//typedef struct DNode {
//	ElemType  data;
//	struct  DNode* prior, * next;
//}DNode,*DLinkList;
//
////带头节点双链表初始化
//bool InitDLinkList(DLinkList &L) {
//	L = (DNode*)malloc(sizeof(DNode));
//	if (L = NULL)
//		return false;
//	L->next = NULL;
//	L->prior = NULL;
//	return true;
//}
//
////双链表插入
//bool ListInsert(DNode* p, DNode* s) {
//	//p    s    p->next(NULL)
//	if (p == NULL || s == NULL)
//		return false;
//	s->next = p->next;
//	if (p->next != NULL)
//		p->next->prior = s;
//	s->prior = p;
//	p->next = s;
//	return true;
//}
//
////双链表的删除
//bool ListDelete(DNode* p) {
//	if (p != NULL)
//		return false;
//	DNode *q = p->next;
//	if (q == NULL)
//		return false;
//	//p    q     q->next(NULL)
//	p->next = q->next;
//	if(q->next!=NULL)
//	    q->next->prior = p;
//	free(q);
//	return true;
//}
//
//
//void testDNode()
//{
//	DLinkList L;
//	InitDLinkList(L);
//}

//顺序表
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXSIZE 10
//
//typedef int ElemType;
//typedef int Status;
//
//typedef struct {
//	ElemType data[MAXSIZE];
//	int length;
//}SqList;
//
//bool InitList(SqList &L) {
//	for (int i = 0; i < MAXSIZE; i++)
//	{
//		L.data[i] = 0;
//	}
//	L.length = 0;
//	return true;
//}
//
////顺序链表插入
//bool ListInsert(SqList* L, int i, ElemType e) {
//	if (i<1 || i>MAXSIZE + 1)
//		return false;
//	if (L->length == MAXSIZE)
//		return false;
//	for (int j = MAXSIZE - 1; j >= i - 1; j--)
//	{
//		L->data[j + 1] = L->data[j];
//	}
//	L->data[i-1] = e;
//	L->length++;
//	return true;
//}
//
////顺序链表删除
//bool ListDelete(SqList* L, int i, ElemType* e) {
//	if (i<1 || i>MAXSIZE - 1)
//		return false;
//	if (L->length == 0)
//		return false;
//	*e = L->data[i - 1];
//	for (int j = i - 1; j <= MAXSIZE - 1; j++)
//	{
//		L->data[i] = L->data[i + 1];
//	}
//	L->length--;
//	return true;
//}
//
//void testSqList()
//{
//	SqList L;
//	InitList(L);
//}

//顺序链表动态分配
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXSIZE 10
//
//typedef int ElemType;
//
//typedef struct {
//	int* data;
//	int MAXSIZE1;
//	int length;
//}SqList;
//
//void InitList(SqList &L) {
//	L.data = (int*)malloc(sizeof(int) * MAXSIZE);
//	L.MAXSIZE1 = MAXSIZE;
//	L.length = 0;
//}
//
//void IncreaseSize(SqList& L, int len) {
//	int* p = L.data;
//	L.data = (int*)malloc(sizeof(int) * (len + MAXSIZE));
//	for (int i = 0; i <= MAXSIZE - 1; i++) {
//		L.data[i] = p[i];
//	}
//	L.MAXSIZE1 = L.MAXSIZE1 + len;
//	free(p);
//}
