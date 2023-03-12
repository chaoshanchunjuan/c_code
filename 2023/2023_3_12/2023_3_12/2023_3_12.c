//#define MaxSize 10
//#define ERROR
//#define NULL
//#define OK
//
////˳���
//
////˳�����
//typedef struct {
//	int data[MaxSize];
//	int length;
//}SqList;
////˳���Ԫ����ȡ
//typedef int ElemType;
//typedef int Status;
//Status GetElem(SqList L, int i, ElemType* e)
//{
//	if (i<1 || i>L.length || L.length == 0)
//		return ERROR;
//	*e = L.data[i - 1];
//	return OK;
//}
////˳������
//Status ListInsert(SqList* L, int i, ElemType e) {
//	int j;
//	if (i<1 || i>L->length+1 || L->length == MaxSize)
//		return ERROR;
//	if (i <= L->length)
//	{
//		for (j = L->length - 1; j >= i - 1; j--)
//		{
//			L->data[j + 1] = L->data[j];
//		}
//		L->data[i - 1] = e;
//		L->length++;
//		return OK;
//	}
//
//}
////˳���ɾ��
//Status ListDelete(SqList* L, int i, ElemType* e) {
//	int j;
//	if (i<1 || i>L->length || L->length == 0)
//		return ERROR;
//	*e = L->data[i - 1];
//	if (i < L->length)
//	{
//		for (j = i - 1; j <= L->length - 1; j++)
//		{
//			L->data[j] = L->data[j + 1];
//		}
//	}
//	return OK;
//}
//
////������
//
////��������
//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node;
//typedef struct Node* LinkList;
////1.ͷ�巨
//void CreateListHead(LinkList* L, int n) {
//	int j;
//	LinkList p;
//	srand(time(0));	
//	(*L) = (LinkList)malloc(sizeof(Node));
//	(*L)->next = NULL;
//	for (j = 0; j < n; j++)
//	{
//		p = (LinkList)malloc(sizeof(Node));
//		p->data = rand() % 100 + 1;
//		p->next = (*L)->next;
//		(*L)->next = p;
//	}
//}
////2.β�巨
//void CreateListTail(LinkList* L, int n) {
//	int j = 0;
//	(*L) = (LinkList)malloc(sizeof(Node));
//	(*L)->next = NULL;
//	LinkList p;
//	srand(time(0));
//	for (j = 0; j < n; j++)
//	{
//		p = (LinkList)malloc(sizeof(Node));
//		p->data = rand() % 100 + 1;
//		(*L)->next = p;
//		(*L) = p;
//	}
//	(*L)->next = NULL;
//}
////������Ԫ����ȡ
//Status GetElem(LinkList L, int i, ElemType* e) {
//	LinkList p;
//	p = L->next;
//	int j = 1;
//	while (p && j < i)
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i)
//		return ERROR;
//	*e = p->data;
//	return OK;
//}
////����������ɾ��
//Status ClearList(LinkList* L) {
//	LinkList p, q;
//	p = (*L)->next;
//	while(p)
//	{
//		q = p->next;
//		free(p);
//		p = q;
//	}
//	(*L)->next = NULL;
//	return OK;
//}