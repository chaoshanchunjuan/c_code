//Ë³Ðò±í

#define MAXSIZE 10
#define ERROR
#define OK

typedef struct {
	int data[MAXSIZE];
	int length;
}SqList;

typedef int ElemType;
typedef int Status;

Status GetElem(SqList L, int i, ElemType* e) {
	if (i<0 || i>L.length)
		return ERROR;
	if (L.length == 0)
		return ERROR;
		*e = L.data[i - 1];
	return OK;
}