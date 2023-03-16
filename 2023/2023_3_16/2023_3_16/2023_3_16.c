//Ë³Ðò±í
#define MAXSIZE 10
#define ERROR
#define OK

typedef int ElemType;
typedef int Status;

typedef struct {
	int data[MAXSIZE];
	int length;
}SqList;

Status GetElem(SqList L, int i, ElemType* e) {
	if (i<1 || i>L.length || L.length == 0)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

Status ListInsert(SqList* L, int i, ElemType e) {
	if (i<1 || i>L->length+1 || L->length == MAXSIZE)
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

Status ListDelete(SqList* L, int i, ElemType* e) {
	if (i<1 || i>L->length || L->length == 0)
		return ERROR;
	*e = L->data[i - 1];
	if (i < L->length)
	{
		for (int j = i - 1; j >= L->length; j++)
		{
			L->data[j] = L->data[j + 1];
		}
	}
	L->length--;
	return OK;
}