//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	int n = 1221;
//	int count = 0;
//	int temp1 = n;
//	while (temp1 > 0)
//	{
//		if (temp1% 10 != 0)
//		{
//			count++;
//			temp1 /= 10;
//	}
//		else
//			break;
//	}
//	//printf("%d", count);
//	//循环双数count/2
//	// 单数count+1/2
//	// 最后一位：n%10
//	// 
//	//第一位：n/count
//
//	//倒数第二位n/10%10
//	//第二位：n/count/10
//	int temp = count;
//	if (count % 2 == 0)
//	{
//		for (int i = 0; i < count / 2; i++)
//		{
//			int k = n/pow(10, temp - 1);
//			int l = n % 10;
//			
//			if (l!=k)
//			{
//				printf("error\n");
//				break;
//			}
//			else
//			{
//				n /= 10;
//				n -= k * (temp - 1);
//				temp--;
//			}
//		}
//	}
//	else
//	{
//		for (int i = 0; i < (count+1) / 2; i++)
//		{
//			if (n % 10 != n / pow(10, temp - 1))
//			{
//				printf("error\n");
//				break;
//			}
//			else
//			{
//				n /= 10;
//				temp--;
//			}
//		}
//	}
//	printf("ok\n");
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1212;
//	printf("%d", a % 10);
//	return 0;
//}