//À≥–Ú¡¥±Ì
#define ERROR
#define OK
#define MAXSIZE 20

typedef struct {
	int length;
	int data[MAXSIZE];
}SqList;

typedef int ElemType;
typedef int Status;

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
	if (i<1 || i>L->length)
		return ERROR;
	if (L->length == 0)
		return ERROR;
	*e = L->data[i - 1];
	if (i <= L->length)
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
		j++;
	}
	if (!p || j > i)
		return ERROR;
	*e = p->data;
	return OK;
}























