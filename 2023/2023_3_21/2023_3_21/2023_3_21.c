//˳������
#define ERROR
#define OK
#define MAXSIZE 20

typedef int ElemType;
typedef int Status;

typedef struct {
	int data[MAXSIZE];
	int length;
}SqList;

//˳������Ԫ�ػ�ȡ
Status GetElem(SqList L, int i, ElemType* e) {
	if (i<1 || i>L.length)
		return ERROR;
	if (L.length == 0)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

Status ListInsert(SqList* L, int i, ElemType e) {
	if (L->length==MAXSIZE)
		return ERROR;
	if (i > L->length + 1||i<1)
		return ERROR;
	if (i <= L->length)
	{
		int j;
		for (j = L->length - 1; j >= i - 1; j--)
		{
			L->data[j + 1] = L->data[j];
		}
		L->data[i - 1] = e;
		L->length++;
		return OK;
	}
}
//˳������ɾ��
Status ListDelete(SqList* L, int i, ElemType* e) {
	if (i<1 || i>L->length)
		return ERROR;
	if (L->length==0) 
		return ERROR;
	*e = L->data[i - 1];
	if (i < L->length)
	{
		int j;
		
		for (j = i - 1; j <= L->length - 1; j++)
		{
			L->data[j] = L->data[j + 1];
		}
		L-> length--;
	}
	return OK;
}
	
//������
typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;

typedef struct Node* LinkList;

//������Ԫ����ȡ
Status GetElem(LinkList L, int i, ElemType* e) {
	int j;
	j = 1;
	LinkList p;
	p = L->next;
	while(p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;
	*e = p->data;
	return OK;
}

//������Ԫ�ز���
Status ListInsert(LinkList* L, int i, ElemType e) {
	int j = 1;
	LinkList p,s;
	p = (*L);
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

//��������������ͷ�巨��
void CreateLinkHead(LinkList* L, int n) {
	LinkList p;
	(*L) = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

//��������������β�巨��
void CreateListTail(LinkList* L, int n) {
	LinkList p, r;
	srand(time(0));
	(*L) = (LinkList)malloc(sizeof(Node));
	r = (*L);
	int i;
	for (i = 0; i < n; i++)
	{
		p=(Node*)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		//r = p;
		//r = p;
		r->next = p;
		r = p;
	}
	r->next = NULL;
}

//����������ɾ��
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

//��̬����
typedef struct {
	ElemType data;
	int cur;
}Component,StaticLinkList[MAXSIZE];


















































	

	