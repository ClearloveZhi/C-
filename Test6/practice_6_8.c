//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define M 3
//#define N 4
//int main()
//{
//	int max,min,m,n,flag=0;
//	int arr[M][N];
//	printf("������%d��%d�о���\n",M,N);
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	for (int i = 0; i < M; ++i)
//	{
//		max = arr[i][0];
//		for (int j = 0; j < N; ++j)
//		{
//			if (arr[i][j] > max)
//				max = arr[i][j];
//			n = j;
//		}
//		min = arr[0][n];
//		for (int j = 0; j < N; ++j)
//		{
//			if (arr[j][n] < min)
//				min = arr[j][n];
//			m = j;
//		}
//		if (min == max && m == n)
//		{
//			printf("����Ϊ��%d��%d��,Ԫ��Ϊ��%d", m, n,max);
//			flag++;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("û�а��㣡");
//	return 0;
//}