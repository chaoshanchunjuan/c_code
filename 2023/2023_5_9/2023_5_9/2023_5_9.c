//À≥–Ú¡¥±Ì
#define ERROR
#define OK
#define MAXSIZE 10

typedef int ElemType;
typedef int Status;

typedef struct {
	int data[MAXSIZE];
	int length;
}SqList;

Status GetElem(SqList L, int i, ElemType* e) {
	if (i<1 || i>L.length)
		return ERROR;
	if (L.length == 0)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

Status ListInsert(SqList* L, int i, ElemType e) {
	if (i<1 || i>L->length + 1)
		return ERROR;
	if (L->length == MAXSIZE)
		return ERROR;
	if (i < L->length)
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
	if (i<1 || i>L->length)
		return ERROR;
	if (L->length == 0)
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

//µ•¡¥±Ì
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
	LinkList p;
	p = L->next;
	int j = 1;
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
	LinkList p,s;
	p = (*L);
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;
	s = (LinkList)malloc(sizeof(Node));
	s->next = p->next;
	p->next = s;
	s->data = e;
	return OK;
}

void CreatListHead(LinkList* L, int n) {
	LinkList p;
	(*L) = (LinkList)malloc(sizeof(Node));
	srand(time(0));
	(*L)->next = NULL;
	for (int j = 0; j < n; j++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}