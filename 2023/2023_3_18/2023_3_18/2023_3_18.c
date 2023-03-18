#define ERROR
#define OK
#define MAXSIZE 1000

typedef int ElemType;
typedef int Status;
//
//typedef struct DNode {
//	ElemType data;
//	struct DNode *prior, *next;
//}DNode;
//
//typedef struct DNode* DLinkList;
//
//Status InitDLinkList(DLinkList L) {
//	(*L) = (DLinkList)malloc(sizeof(DNode));
//	if (L == NULL)
//		return ERROR;
//	L->prior = NULL;
//	L->next = NULL;
//	return OK;
//}

//¾²Ì¬Á´±í
//
//typedef struct{
//	ElemType data;
//	int cur;
//}Component, StaticLinkList[MAXSIZE];
//
//Status InitList(StaticLinkList space) {
//	int i;
//	for (i = 0; i < MAXSIZE - 1; i++)
//	{
//		space[i].cur = i + 1;
//		space[MAXSIZE - 1].cur = 0;
//		return OK;
//	}
//}
//
//typedef struct {
//	ElemType data;
//	int cur;
//}Component,StaticLinkList[MAXSIZE];
//
//Status InitList(StaticLinkList space) {
//	int i;
//	for (i = 0; i < MAXSIZE - 1; i++)
//	{
//		space[i].cur = i + 1;
//		space[MAXSIZE].cur = 0;
//		return OK;
//	}
//}
//
//typedef struct {
//	ElemType data;
//	int cur;
//}Component,StaticLinkList[MAXSIZE];
//
//Status InitList(StaticLinkList space) {
//	int i;
//	for (i = 0; i < MAXSIZE - 1; i++)
//	{
//		space[i].cur = i + 1;
//		space[MAXSIZE - 1].cur = 0;
//	}
//	return OK;
//}

//¾²Ì¬Á´±í
typedef struct {
	ElemType data;
	int cur;
}Component,StaticLinkList[MAXSIZE];

Status InitList(StaticLinkList space) {
	int i;
	for(i=0;i<MAXSIZE-1;i++)
	space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;
	return OK;
}


















