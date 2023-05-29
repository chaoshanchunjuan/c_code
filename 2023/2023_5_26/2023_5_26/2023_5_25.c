#define MAXSIZE 1000
#define ERROR
#define OK

typedef int ElemType;
typedef int Status;

typedef struct {
	ElemType data;
	int cur;
}Component,StaticLinkList[MAXSIZE];

Status InitList(StaticLinkList space)
{
	for (int i = 0; i < MAXSIZE - 1; i++)
	{
		space[i].cur = i + 1;
	}
	space[MAXSIZE - 1].cur = 0;
	return OK;
}

int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur)
	{
		space[0].cur = space[i].cur;
	}
	return i;
}

int Malloc_SSL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur)
	{
		space[0].cur = space[i].cur;
	}
	return i;
}

Status LinkList(StaticLinkList L, int i, ElemType e)
{
	//int k = MAXSIZE - 1;
	//for (int j = 0; j <i; j++)
	//{
	//	 k= L[k].cur;
	//}
	//L[k].cur = i-1;
	//int p = L[k].cur;
	//L[i - 1].cur = L[p].cur;
	int j, k, l;
	k = MAXSIZE - 1;
	if (i<1 || i>ListLength(L) + 1)
		return ERROR;
	j = Malloc_SSL;
	if (j)
	{
		L[j].data = e;
		for (l = 1; l <= i - 1; l++)
		{
			k = L[k].cur;
		}
		L[j].data = e;
		L[j].cur = L[k].cur;
		L[k].cur = j;
		return OK;
	}
	return ERROR;
}

int Malloc_SSL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur)
	{
		space[0].cur = space[i].cur;
	}
	return i;
}

Status ListInsert(StaticLinkList L,int i,ElemType e)
{
	int k;
	k = MAXSIZE - 1;
	if (i<1 || i>LinkLength(L) + 1)
		return ERROR;
	int j = Malloc_SSL(L);
	if (j)
	{
		L[j].data = e;
		for (int j = 1; j < i; j++)
		{
			k = L[k].cur;
		}
		L[j].cur = L[k].cur;
		L[k].cur = j;
		return OK;
	}
	return ERROR;
}





























