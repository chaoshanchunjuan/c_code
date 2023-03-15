//单链表

#define ERROR
#define OK 

typedef int ElemType;
typedef int Status;

typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;

typedef Node* LinkList;

//元素提取
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

//元素插入
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
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

//头插法
void CreateHeadList(LinkList *L, int n) {
	(*L) = (LinkList)malloc(sizeof(Node));
	srand(time(0));
	int j;
	LinkList p;
	(*L)->next = NULL;
	for (j = 0; j < n; j++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

void CreateListTail(LinkList* L, int n) {
	(*L) = (LinkList)malloc(sizeof(Node));
	srand(time(0));
	int j;
	//(*L)->next = NULL;
	LinkList p;
	p = *L;
	for (j = 0; j < n; j++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		(*L)->next = p;
		*L = p;
	}
	(*L)->next = NULL;
}

Status ClearList(LinkList *L) {
	LinkList p, q;
	p = (*L)->next;
	while (p)
	{
		q = p->next;
		free(p);
		q = p;
	}
	(*L)->next = NULL;
	return OK;

}









