#define MAXSIZE 10
#define flase
#define ture
typedef int ElemType;
typedef int Status;
typedef struct {
	ElemType data[MAXSIZE];
	int top;
}SqStack;

void InitStack(SqStack* S) {
	S->top = -1;
}

void testStack() {
	SqStack S;
	InitStack(&S);
}

bool StackEmpty(SqStack S) {
	if (S.top == -1)
		return ture;
	else
		return flase;
}

bool Push(SqStack* S, ElemType x) {
	if (S->top == MAXSIZE - 1)
		return flase;
	S->data[++S->top] = x;
	return ture;
}

bool Pop(SqStack* S, ElemType* x) {
	if (S->top == -1)
		return flase;
	x = S->data[S->top];
	S->top = S->top - 1;
	return ture;
}

//À≥–Ú¡¥±Ì
#define ERROR
#define OK

typedef struct {
	int length;
	int data[MAXSIZE];
}SqList;

Status GetElem(SqList L,int i, ElemType* e) {
	if (L.length == 0||i<1||i>L.length)
		return ERROR;
	*e = L.data[i - 1];
		return OK;
}

Status ListInsert(SqList* L,int i, ElemType e) {
	if (i<1 || i>L->length - 1 || L->length == 0)
		return ERROR;
	if (i <= L->length)
	{
		for (int j = 0; j < i; j++)
		{

		}

	}
	L->length++;
}

Status ListInsert(SqList* L, int i, ElemType e) {
	if (L->length == MAXSIZE)
		return ERROR;
	if (i<1 || i>L->length + 1)
		return ERROR;
	if (i < -L->length)
	{
		for (int j = L->length - 1; j >= i - 1; j--)
		{
			L->data[j+1] = L->data[j];
		}
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

//À≥–Ú±Ì‘™Àÿ…æ≥˝
Status ListDelete(SqList* L, int i, ElemType* e) {
	if (L->length == 0)
		return ERROR;
	if (i<1 || i>L->length)
		return ERROR;
	if (i <= L->length)
	{
		*e = L->data[i - 1];
		for (int j = i - 1; j <= L->length-1; j++)
		{
			L->data[j] = L->data[j+1];
		}
	}
	L->length--;
	return OK;
}

//µ•¡¥±Ì
typedef struct Node {
	int data;
	int next;
}LinkList;

Status GetElem(LinkList L, int i, ElemType* e) {

	for (int j = 0; j <= i; j++)
	{
		
	}
}










