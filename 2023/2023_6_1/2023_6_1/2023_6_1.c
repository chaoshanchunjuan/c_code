//顺序链表
#define ERROR
#define OK
#define MAXSIZE 100

typedef int ElemType;
typedef int Status;

typedef struct {
	int data[MAXSIZE];
	int length;
}SqList;

//顺序链表元素获取
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
		int j=0;
		L->data[i - 1] = e;
		for (j = MAXSIZE - 1; j >= i - 1; j--)
		{
			L->data[j + 1] = L->data[j];
		}
		L->length++;
		return OK;
	}
}

//顺序链表元素删除
Status ListDelete(SqList* L, int i, ElemType* e) {
	if (i<1 || i>L->length)
		return ERROR;
	if (L->length == 0)
		return ERROR;
	if (i < L->length)
	{
		for (int j = i - 1; j <= MAXSIZE - 1; j++)
		{
			L->data[j] = L->data[j + 1];
		}
		*e = L->data[i - 1];
	}
	L->length--;
	return OK;
}

//静态链表
typedef struct {
	ElemType data;
	int cur;
}Component,StaticLinkList[MAXSIZE];

//申请空闲空间
int Malloc_SSL(StaticLinkList space) {
	int i = space[0].cur;
	if (space[0].cur)
	{
		space[0].cur = space[i].cur;
	}
	return i;
}

//初始化静态链表
Status InitList(StaticLinkList L) {
	int i = 0;
	for (i = 0; i < MAXSIZE - 1; i++)
	{
		L[i].cur = i + 1;
	}
	L[MAXSIZE - 1].cur = 0;
	return OK;
}

//释放空间
void Free_SSL(StaticLinkList L,int i) {
	L[i].cur = L[0].cur;
	L[0].cur = i;
}


//求静态链表长度
int ListLength(StaticLinkList L) {
	int j = 0;
	int i = L[MAXSIZE - 1].cur;
	while (i)
	{
		i = L[i].cur;
		++j;
	}
	return j;
}

//静态链表元素插入
Status ListInsert(StaticLinkList L, int i, ElemType e) {
	if (i<1 || i>ListLength(L) + 1)
		return ERROR;
	int j = Malloc_SSL(L);
	int k = MAXSIZE - 1;
	for (int m = 0; m < i - 1; m++)
	{
		k = L[k].cur;
	}
	L[j].data = e;
	L[j].cur = L[k].cur;
	L[k].cur = j;
	return OK;
}

//静态链表删除元素
Status ListDelete(StaticLinkList L, int i) {
	if(i<i||i>ListLength(L))
		return ERROR;
	int k = MAXSIZE - 1;
	for (int i = 0; i < i - 1; i++)
	{
		k = L[k].cur;
	}
	int j = L[k].cur;
	L[k].cur = L[j].cur;
	Free_SSL(L, j);
	return OK;
}