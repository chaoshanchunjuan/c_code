//#include <malloc.h>
//
//#define MaxSize 20
//#define ERROR
//#define OK
//#define NULL
//
//typedef int ElemType;
//typedef int Status;
//
////单链表的创建和插入删除
//typedef struct Node {
//	ElemType data;
//	struct Node* next;
//}Node;
//
//typedef struct Node* LinkList;
//
//Status ListInsert(LinkList* L, int i, ElemType e) {
//	int j = 1;
//	LinkList p,s;
//	p = *L;
//	while (p && j < i)
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i)
//		return ERROR;
//	s = (LinkList)malloc(sizeof(Node));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return OK;
//}
//
//Status ListDelete(LinkList* L, int i, ElemType* e) {
//	int j = 1;
//	LinkList p,q;
//	p = *L;
//	while (p->next && j < i)
//	{
//		p = p->next;
//		++j;
//	}
//	if (!(p->next) || j > i)
//		return ERROR;
//	*e = q->data;
//	q = p->next;
//	p->next = q->next;
//	free(q);
//	return OK;
//}
//
////头插法
//void CreateListHead(LinkList* L, int n) {
//	LinkList p;
//	int i;
//	*L = (LinkList)malloc(sizeof(Node));
//	(*L)->next = NULL;
//	srand(time(0));
//	for (i = 0; i < n; i++)
//	{
//		p = (LinkList)malloc(sizeof(Node));
//		p->data = rand() % 100 + 1;
//		p->next = (*L)->next;
//		(*L)->next = p;
//	}
//}
//
////头插法again
//void CreateListHead(LinkList* L, int n) {
//	int i = 0;
//	LinkList p;
//	(*L) = (LinkList)malloc(sizeof(Node));
//	(*L)->next = NULL;
//		srand(time(0));
//	for (i = 0; i < n; i++)
//	{
//		p = (LinkList)malloc(sizeof(Node));
//		p->data = rand() % 100 + 1;
//		p->next = (*L)->next;
//		(*L)->next = p;
//	}
//}
//
////尾插法
//void CreatListTail(LinkList* L, int n) {
//	int i;
//	LinkList p;
//	(*L) = (LinkList)malloc(sizeof(Node));
//		srand(time(0));
//	for (i = 0; i < n; i++)
//	{
//		p = (LinkList)malloc(sizeof(Node));
//		p->next = rand() % 100 + 1;
//		(*L)->next = p;
//		(*L) = p;
//	}
//	(*L)->next = NULL;
//}
//
////整表删除
//Status ClearList(LinkList* L) {
//	LinkList p, q;
//	p = (*L)->next;
//	while (p)
//	{
//		q = p->next;
//		free(q);
//		q = p;
//	}
//	(*L)->next = NULL;
//	return OK;
//}

 
 

//顺序链表创建——获取元素——插入——删除
#define ERROR
#define OK
#define MaxSize 10
#define NULL

typedef struct {
	int data[MaxSize];
	int length;
}SqList;

typedef int ElemType;
typedef int Status;
Status GetElem(SqList L, int i, ElemType* e) {
	if (i < 1 || i >= MaxSize || L.length == 0)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}
//
//Status ListInsert(SqList* L, int i, ElemType e) {
//	if (i < 1 || i >= MaxSize || L->length == 0)
//		return ERROR;
//	if (i<=L->length)
//	{
//		for (int j = L->length - 1; j >= i - 1; j--)
//		{
//			L->data[j + 1] = L->data[j];
//		}
//	}
//	L->data[i - 1] = e;
//		L->length++;
//	return OK;
//}
//
//Status ListDelete(SqList* L, int i, ElemType* e) {
//	if (i < 1 || i >= MaxSize || L->length == MaxSize)
//		return ERROR;
//	*e = L->data[i - 1];
//	if (i <= L->length)
//	{
//		for (int j = i - 1; j <= L->length - 1; j++)
//		{
//			L->data[i] = L->data[i+1];
//		}
//	}
//	L->length--;
//
//	return OK;
//}

Status ListInsert(SqList* L, int i, ElemType e) {
	if (i<1 || i>L->length || L->length == MaxSize)
		return ERROR;
	if (i <= L->length)
	{
		for (int j = L->length-1; j > i - 1; j--)
		{
			L->data[j + 1] = L->data[j];
		}
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

Status ListDelete(SqList* L, int i, ElemType* e) {
	if (i<1 || i>L->length || L->length == 0)
		return ERROR;
	*e = L->data[i - 1];
	if (i < L->length)
	{
		for (int j = i - 1; j < L->length - 1; j++)
		{
			L->data[j] = L->data[j + 1];
		}
	}
	return OK;
}

Status ListInsert(SqList* L, int i, ElemType e) {
	if (i<1 || i>L->length || L->length == MaxSize)
		return ERROR;
	if (i <= L->length)
	{
		for (int j = L->length - 1; j >= i - 1; j--)
		{
			L->data[j + 1] = L->data[j];
		}
		L->data[i - 1] = e;
	}
	L->length++;
	return OK;
}

Status ListDelete(SqList* L, int i, ElemType* e) {
	if (i<1 || i>L->length || L->length == 0)
		return ERROR;
	*e = L->data[i - 1];
	if (i < L->length)
	{
		for (int j = i - 1; j <= L->length - 1; j++)
		{
			L->data[j] = L->data[j + 1];
		}
	}
	return OK;
}

//单链表的创建——头插法——尾插法——整表消除
typedef struct Node {
	int data;
	struct Node* next;
}Node;

typedef struct Node* LinkList;

Status GetElem(LinkList L, int i, ElemType *e) {
	int j=1;
	LinkList p;
	p = L->next;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;
	*e = p->data;
	return OK;
}

Status GetElem(LinkList L, int i, ElemType* e) {
	int j = 1;
	LinkList p;
	p = L->next;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;
	*e = p->data;
	return OK;
}

Status ListInsert(LinkList* L, int i, ElemType e) {
	int j = 1;
	LinkList p,s;
	p = *L;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p && j > i)
		return ERROR;
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

void CreateListHead(LinkList* L, int n) {
	int j;
	LinkList p;
	(*L) = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL
	srand(time(0));
	
	for (int i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		p -> data = (*L)->data;
		(*L)->data = p;
	}
}

//头插法
void CreateListHead(LinkList* L, int n) {
	int j;
	LinkList p;
	srand(time(0));
	(*L) = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	for (j = 0; j < n; j++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		p->next = (*L)->next;
		(*L) -> next = p;
	}
}










