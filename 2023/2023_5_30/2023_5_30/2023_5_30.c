#define ERROR
#define OK
#define MAXSIZE 1000

typedef int Status;
typedef int ElemType;

//静态链表
typedef struct {
	ElemType data;
	int cur;
}Component, StaticLinkList[MAXSIZE];

//初始化静态链表
Status InitList(StaticLinkList space) {
	for (int i = 0; i < MAXSIZE - 1; i++)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;
	return OK;
}

//创建空闲空间可供提取使用
int Malloc_SSL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur)
	{
		space[0].cur = space[i].cur;
	}
	return i;
}

//释放空间
void Free_SSL(StaticLinkList space,int i) {
	space[i].cur = space[0].cur;
	space[0].cur = i;
}

//求出静态链表表长
int ListLength(StaticLinkList L) {
	int j = 0;
	int i = L[MAXSIZE - 1].cur;
	while (i)
	{
		i = L[i].cur;
		j++;
	}
	return j;
}

//静态链表元素插入
Status ListInsert(StaticLinkList L, int i, ElemType e) {
	if (i<1 || i>ListLength(L) + 1)
		return ERROR;
	int j = Malloc_SSL(L);
	int k = MAXSIZE - 1;
	if (j)
	{
		L[j].data = e;
		for (int m = 0; m < i - 1; m++)
			k = L[k].cur;
		L[j].cur = L[k].cur;
		L[k].cur = j;
		return OK;
	}
	return ERROR;
}

//静态链表元素删除
Status ListDelete(StaticLinkList L, int i) {
	if (i<1 || i>ListLength(L))
		return ERROR;
	int k = MAXSIZE - 1;
	for (int m = 0; m < i - 1; m++)
		k = L[k].cur;
	int j = L[k].cur;
	L[k].cur = L[j].cur;
	Free_SSL(L, j);
	return OK;
}

