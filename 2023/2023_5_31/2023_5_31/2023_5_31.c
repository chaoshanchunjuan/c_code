//顺序链表
#define ERROR
#define OK
#define MAXSIZE 10
#define NULL

typedef int ElemType;
typedef int Status;

typedef struct {
	int data[MAXSIZE];
	int length;
}SqList;

//查找元素
Status GetElem(SqList L, int i, ElemType* e) {
	if (i<1 || i>L.length)
		return ERROR;
	if (L.length == 0)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

//元素插入
Status ListInsert(SqList* L, int i, ElemType e) {
	if (i<1 || i>L->length + 1)
		return ERROR;
	if (L->length == MAXSIZE)
		return ERROR;
	if (i <=L->length)//有长度参数用长度
	{
		for (int i =L->length-1; i >= i - 1; i--)//修改循环中的i，混了
		{
			L->data[i + 1] = L->data[i];
		}
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

//元素删除
Status ListDelete(SqList* L, int i, ElemType* e) {
	if (i<1 || i>L->length)
		return ERROR;
	if (L->length == 0)
		return ERROR;
	if(i <=L->length)
	{
		*e = L->data[i - 1];
		for (int i = i - 1; i <=L->length-1; i++)//同修改i
		{
			L->data[i] = L->data[i + 1];
		}
	}
	L->length--;
	return ERROR;
}



//单链表
typedef struct Node {
	ElemType data;
	struct Node* next;
}Node;

typedef struct Node* LinkList;

//插入元素
Status ListInsert(LinkList* L, int i, ElemType e) {
	LinkList p = *L;
	LinkList s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	for (int m = 0; m <= i - 1; m++)
	{
		p = p->next;
	}//无法排除p不存在的情况，可以写成while的形式来排
	//最好加一步验证p的存在和j<i的情况
	s->next = p->next;
	p->next = s;
	return OK;
}

//插入元素
Status ListInsert(LinkList* L, int i, ElemType e) {
	LinkList s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	LinkList p = *L;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR;
	s->next = p->next;
	p->next = s;
	return OK;
}

//元素提取
Status GetElem(LinkList L, int i, ElemType* e) {
	LinkList p = L->next;
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

////元素删除
//Status ListDelete(LinkList* L, int i, ElemType* e) {
//	LinkList p = *L;
//	int j = 1;
//	while (p && j < i-1)
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j < i)
//		return ERROR;
//	LinkList s = p->next;
//	*e = s->data;
//	p->next = s->next;
//	free(s);
//	return OK;
//}

//头插法
void CreateListHead(LinkList* L, int n) {
	srand(time(0));
	LinkList(*L) = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	LinkList p;
	for (int m = 0; m < n; m++)
	{
		p = (LinkList)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

//尾插法
void CreateListTail(LinkList* L, int n) {

}




















