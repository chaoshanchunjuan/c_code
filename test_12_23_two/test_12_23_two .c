#include <stdio.h>
#pragma warning (disable:4996)

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
			}
		}
	}


}

int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
		return 0;
}