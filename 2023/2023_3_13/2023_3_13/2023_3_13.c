//顺序表
#define MaxSize 10
#define ERROR
#define OK
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

typedef int ElemType;
typedef int Status;

Status GetElem(SqList L, int i, ElemType* e) {
	if (i<1 || i>L.length || L.length == 0)
		return ERROR;
	*e = L.data[i - 1];
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
		for (int j = i - 1; j <= L->length - 1; j++)
		{
			L->data[j] = L->data[j + 1];
		}
	}
	L->length--;
	return OK;
}

//单链表
typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;

typedef struct Node* LinkList;

Status ListInsert(LinkList* L, int i, ElemType e) {
	LinkList p,s;
	p = *L;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;
	//e = p->data;
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

//头插法
void CreateListHead(LinkList* L, int n)
{
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

//尾插法
void CreateListTail(LinkList* L, int n) {
	LinkList p;
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	srand(time(0));
	for (int j = 0; j < n; j++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		(*L)->next = p;
		(*L) = p;
	}
	(*L)->next = NULL;
}

//整表删除
Status ClearList(LinkList *L) {
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




