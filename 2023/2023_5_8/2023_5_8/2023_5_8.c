#define ERROR
#define OK

typedef int ElemType;
typedef int Status;

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
	s->data = e;
	s = (LinkList)malloc(sizeof(Node));
	s->next = p->next;
	p->next = s;
	return OK;
}

//ͷ�巨
void CreatListHead(LinkList* L, int n) {
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

//β�巨
void CreateListTail(LinkList* L, int n) {
	LinkList p;
	(*L) = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	srand(time(0));
	for (int j = 0; j < n; j++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		(*L)->next = p;
		*L = p;;
	}
	(*L)->next = NULL;
}


