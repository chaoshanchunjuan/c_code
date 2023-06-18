#define MAXSIZE 10
#define true
#define false
#include <malloc.h>

typedef int ElemType;
typedef int Status;

//typedef struct {
//	ElemType data[MAXSIZE];
//	int top;
//}SqStack;
//
//void InitList(SqStack* S) {
//	S->top = -1;
//}
//
//void testStack() {
//	SqStack S;
//	InitStack(S);
//}
//
//Status StackEmpty(SqStack* S) {
//	if (S->top = -1)
//		return true;
//	else
//		return false;
//}
//
//Status push(SqStack* S, ElemType e) {
//	if(S->top=-1)
//	S->top = S->top + 1;
//	S->data[S->top] = e;
//	return true;
//}
//
//Status pop(SqStack* S, ElemType* e) {
//	if (S->top == -1)
//		return false;
//	*e = S->data[S->top--];
//	return true;
//}
//
//typedef struct Node {
//	ElemType data;
//	struct Node* next;
//}Node;
//typedef struct Node* LinkList;


//Ë«Á´±í
typedef struct DNode {
	ElemType data;
	struct DNode *prior, *next;
}DLinkList,DNode;
bool InitDLinkList(DLinkList* L) {
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	L->prior = NULL;
	L->next= NULL;
	return true;
}

typedef struct DNode {
	ElemType data;
	struct DNode* prior, * next;
}DNode,DLinkList;

bool InitLinkList(DLinkList* L) {
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	L->prior = NULL;
	L->next = NULL;
	return true;
}

bool Empty(DLinkList L) {
	if (L.next == NULL)
		return true;
	else
		return false;
}

//Ë«Á´±í²åÈë
bool InsertDLinkList(DNode* p, DNode* s) {
	//p   s    p->next
	if(p==NULL||s==NULL)
		return false
	s->next = p->next;
	if(p->next != NULL)
	   p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;
}

bool DeleteNextDNode(DNode* p) {
	//p  s    NULL
	if (p == NULL)
		return false;
	DNode* q = p->next;
	if (q == NULL)
		return false;
	p->next = q->next;
	if (q->next != NULL)
		q->next->prior = p;
	free(q);
	return true;
}




void testDLinkList() {
	DLinkList L;
	InitLinkList(&L);
}


//Ë«Á´±í
typedef struct DNode {
	ElemType data;
	struct DNode* prior, * next;
}DNode,DLinkList;

bool InitDLinkList(DLinkList* L) {
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	L->prior = NULL;
	return true;
}

bool Empty(DLinkList L) {
	if (L.next == NULL)
		return true;
	else
		return false;
}

bool ListInsert(DNode* p, DNode* s)
{
	//p      s      p->next
	if (p == NULL||s==NULL)
		return false;
	s->next = p->next;
	if (p->next != NULL)
		p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;
}

bool ListDelete(DNode* p) {
	//p     s(q)    null
	if (p == NULL)
		return false;
	DNode* q = p->next;
	if (q == NULL)
		return false;
	p->next = q->next;
	if (q->next != NULL)
		q->next->prior = p;
	free(q);
	return true;
}

//destory
void DestoryList(DLinkList* L) {
	while (L->next != NULL)
		ListDelete(L);
	free(L);
	L = NULL;
}

void testDLinkList()
{
	DLinkList L;
	InitDLinkList(&L);
}