//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int array[3][3];
//	int sumLT2RB = 0; // 标记左上角到右下角对角线元素之和
//	int sumRT2LB = 0; // 标记右上角到左下角对角线元素之和
//		printf("请输入3行3列的矩阵：\n");
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//			scanf("%d", &array[i][j]);
//	}
//	// 左上角到右下角对角线
//	for (int i = 0; i < 3; ++i)
//		sumLT2RB += array[i][i];
//	for (int i = 0, j = 2; i < 3; ++i, j--)
//		sumRT2LB += array[i][j];
//	printf("左上角到右下角对角线元素之和: %d\n", sumLT2RB);
//	printf("右上角到左下角对角线元素之和: %d\n", sumRT2LB);
//	return 0;
//}
