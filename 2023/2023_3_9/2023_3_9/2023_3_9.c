//数据提取
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

//插入数据
Status ListInsert(SqList* L, int i, ElemType e)
{
	if (L->length >= MaxSize || i<1 || i>L->length)
		return ERROR;
	if (i < L->length)
	{
		for (int j = L->length-1; j >= i-1; j--)//写成数组里面排列顺序，L-1和i-1
		{
			L->data[j+1] = L->data[j];
		}
		L->data[i - 1]=e;//插入不要写反
		L->length++;
		return OK;
	}
}

//删除元素
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



























































































