////GetElem
//#define MaxSize 10
//#define ERROR
//#define OK
//
//typedef int ElemType;
//typedef int Status;
//
//typedef struct {
//	int data[MaxSize];
//	int length;
//}SqList;
//Status GetElem(SqList L, int i, ElemType* e) {
//	if (L.length >= MaxSize || i<1 || i>L.length)
//		return ERROR;
//	*e = L.data[i - 1];
//	return OK;
//}
//typedef struct Node {
//	ElemType data;
//	struct Node *next;
//}Node;
//typedef struct Node* LinkList;
//
//typedef struct Node {
//	ElemType data;
//	struct Node* next;
//}Node;
//typedef struct Node* LinkList;
//
//Status GetElem(LinkList L, int i, ElemType* e) {
//	LinkList p;
//	p=L->next;
//	int j = 1;
//	while (j < i && p)
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i)
//		return ERROR;
//	*e = p->data;
//	return OK;
//}

#define ERROR
#define OK

typedef int ElemType;
typedef int Status;

typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;

typedef struct Node* LinkList;

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
	if (!p || j > i)
		return ERROR;
	 s = (LinkList)malloc(sizeof(Node));//创建结点
	 s->data = e;//元素给到s的data中
	s->next = p->next;//顺序1
	p -> next = s;//顺序2
	//顺序1，和顺序2不可以颠倒
	return OK;
}

//单链表插入元素
Status GetElem(LinkList* L, int i, ElemType e) {
	int j = 1;
	LinkList p, s;
	p = *L;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > 1)
		return ERROR;
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

Status LinkDelete(LinkList* L, int i, ElemType* e) {
	int j = 1;
	LinkList p,q;
	p = *L;
	while (p->next && j < i)
	{
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i)
		return ERROR;
	q = p->next;
	p -> next = q->next;
	*e = p->data;
	free(q);
	return OK;
}
























