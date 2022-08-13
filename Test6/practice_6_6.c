//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//		int array[10][10];
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			// 对角线和第0列上全部为1
//			if (i == j || 0 == j)
//				array[i][j] = 1;
//			else
//				array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
//		}
//	}
//	// 打印杨慧三角的前10行
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			printf("%5d", array[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}