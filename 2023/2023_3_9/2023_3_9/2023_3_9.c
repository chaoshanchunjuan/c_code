//������ȡ
#define MaxSize 10
#define ERROR
#define OK
typedef struct {
	int data[MaxSize];
	int length;
}SqList;
typedef int Status;
typedef int ElemType;
Status GetElem(SqList L, int i, ElemType* e)
{
	if (L.length >= MaxSize || i<1 || i>L.length)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

//��������
Status ListInsert(SqList* L, int i, ElemType e)
{
	if (L->length >= MaxSize || i<1 || i>L->length)
		return ERROR;
	if (i < L->length)
	{
		for (int j = L->length-1; j >= i-1; j--)//д��������������˳��L-1��i-1
		{
			L->data[j+1] = L->data[j];
		}
		L->data[i - 1]=e;//���벻Ҫд��
		L->length++;
		return OK;
	}
}

//ɾ��Ԫ��
Status ListDelete(SqList* L, int i, ElemType* e)
{
	if (L->length >= MaxSize || i<1 || i>L->length)
		return ERROR;
	*e = L->data[i - 1];
	if (i < L->length)
	{
		for (int j = i-1; j <= L->length-1; j++)
		{
			L->data[j] = L->data[j+1];
		}
		
		L->length--;
		return OK;
	}             
}



























































































