////静态链表
//#define ERROR
//#define OK
//#define MAXSIZE 1000
//
//typedef int ElemType;
//typedef int Status;
//
//typedef struct {
//	ElemType data;
//	int cur;
//}Component,StaticLinkList[MAXSIZE];
//
//Status InitList(StaticLinkList space) {
//	for (int i = 0; i<MAXSIZE-1; i++)
//	{
//		space[i].cur = i + 1;
//	}
//	space[MAXSIZE - 1].cur = 0;
//	return OK;
//}
//
//Status InitList(StaticLinkList space)
//{
//	for (int i = 0; i < MAXSIZE - 1; i++)
//		space[i].cur = i + 1;
//	space[MAXSIZE - 1].cur = 0;
//	return OK;
//}
//
////静态链表插入
//
//int Malloc_SLL(StaticLinkList space)
//{
//	int i = space[0].cur;
//	if (space[0].cur)
//		space[0].cur = space[i].cur;
//	return i;
//}
//
//Status ListInsert(StaticLinkList L, int i, ElemType e) {
//	if (i<1 || i>ListLength(L) + 1)
//		return ERROR;
//	int j = Malloc_SSL(L);
//	int k = MAXSIZE - 1;
//	if (j)//确保取得的空间ok
//	{
//		for (int m = 0; m < i-1; m++)
//		{
//			k = L[k].cur;
//		}
//		L[j].cur = L[k].cur;
//		L[k].cur = j;
//		L[j].data = e;
//		return OK;
//	}
//}
//
//int Malloc_SSL(StaticLinkList space) {
//	int i = space[0].cur;
//	if (space[0].cur)
//	{
//		space[0].cur = space[i].cur;
//	}
//	return i;
//}
//
//Status ListInsert(StaticLinkList L, int i, ElemType e) {
//	int k = MAXSIZE - 1;
//	int j = Malloc_SSL(L);
//	if (i<1 || i>ListLength(L)+1)
//		return ERROR;
//	if (j)
//	{
//		L[j].data = e;
//		for (int m = 0; m < i - 1; m++)
//		{
//			k = L[k].cur;
//		}
//		L[j].cur = L[k].cur;
//		L[k].cur = j;
//		return OK;
//	}
//	return ERROR;
//}
//
////静态链表删除
//Status ListDelete(StaticLinkList L, int i, ElemType* e) {
//	if (i<1 || i>ListLength(L))
//		return ERROR;
//	int k = MAXSIZE - 1;
//	for (int j = 0; j < i - 1; j++)
//		k = L[k].cur;
//	int j = L[k].cur;
//	L[k].cur = L[j].cur;
//	//插入free空间函数---free掉j的空间
//	Free_SSL(L, j);
//	return OK;
//}
//
//void Free_SSL(StaticLinkList space, int i) {
//	space[i].cur = space[0].cur;
//	space[0].cur = i;
//}
//
//int ListLength(StaticLinkList L)
//{
//	int j = 0;
//	int i = L[MAXSIZE - 1].cur;
//	while (i)
//	{
//		i = L[i].cur;
//		j++;
//	}
//	return j;
//}



//静态链表（整体）
//创建
#define ERROR
#define OK
#define maxsize 1000

typedef int ElemType;
typedef int Status;

typedef struct {
	ElemType data;
	int cur;
}Component,StaticLinkList[maxsize];

Status InitList(StaticLinkList space) {
	for (int i = 0; i < maxsize - 1; i++)
		space[i].cur = i + 1;
	space[maxsize - 1].cur = 0;
	return OK;
}

//静态链表空闲空间
int Malloc_SSL(StaticLinkList space) {
	int i = space[0].cur;
	if (space[0].cur)
		space[0].cur = space[i].cur;
	return i;
}

//静态链表元素插入
Status ListInsert(StaticLinkList L, int i, ElemType e) {
	int k = maxsize - 1;
	int j = Malloc_SSL(L);
	if (i<1 || i>ListLength(L) + 1)
		return ERROR;
	if (j)
	{
		for (int m = 0; m < i - 1; m++)
			k = L[k].cur;
		L[j].data = e;
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
	int k = maxsize - 1;
	for (int m = 0; m < i - 1; m++)
		k = L[k].cur;
	int j = L[k].cur;
	L[k].cur = L[j].cur;
	Free_SSL(L, j);
	return OK;
}

//静态链表元素空间释放
void Free_SSL(StaticLinkList space, int i)
{
	space[i].cur = space[0].cur;
	space[0].cur = i;
}

//静态链表长度计算
int ListLength(StaticLinkList L) {
	int j = 0;
	int i = L[maxsize - 1].cur;
	while (i)
	{
		i = L[i].cur;
		j++;
	}
	return j;
}
















