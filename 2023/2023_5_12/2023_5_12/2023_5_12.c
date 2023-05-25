//¾²Ì¬Á´±í
#define ERROR
#define OK
#define MAXSIZE 1000

typedef int ElemType;
typedef int Status;

typedef struct
{
	ElemType data;
	int cur
}Component,StaticLinkList[MAXSIZE];

Status InitList(StaticLinkList space)
{
	int i;
	for (i = 0; i < MAXSIZE-1; i++)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;
	return OK;
}

typedef struct
{
	ElemType data;
	int cur;
}Component,StaticLinkList[MAXSIZE];

Status InitList(StaticLinkList space)
{
	for (int i = 0; i < MAXSIZE - 1; i++)
		space[i].cur = i + 1;
	space[MAXSIZE-1].cur = 0;
	return OK;
}