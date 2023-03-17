//单链表
#define ERROR
#define OK

typedef int ElemType;
typedef int Status;

typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;

typedef struct Node* LinkList;

//插入数据
Status ListInsert(LinkList* L, int i, ElemType e) {
	LinkList p,s;
	p = *L;
	int j;
	j = 1;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

//Status ListDelete(LinkList* L, int i, ElemType* e) {
//	LinkList p;
//	p = *L;
//	int j;
//	j = 1;
//	while (p && j < i)
//	{
//		p = p->next;
//		++j;
//	}
//	*e = p->data;
//
//}

void CreateHeadList(LinkList* L, int n) {
	LinkList p;
	(*L) = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	srand(time(0));
	for (int j = 0; j < n; j++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

void CreateListTail(LinkList* L, int n) {
	LinkList p;
	(*L) = (LinkList)malloc(sizeof(Node));
	srand(time(0));
	for (int j = 0; j < n; j++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		(*L)->next = p;
		(*L) = p;
	}
	(*L)->next=NULL;
}

Status ClearList(LinkList* L) {
	LinkList p, q;
	p = (*L)->next;
	while (p)
	{
		q = p->next;
		free(p);
		p = q;
	}
	(*L)->next = NULL;
	return OK;
}
