//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//		int array[10] = { 1,2,3,4,5,6,7,8,9 };
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	printf("原数组序列为:\n");
//	for (int i = 0; i < 9; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// 数组为升序
//	// 在数组中找待插入元素的位置，具体找的方式为：
//	// 从后往前依次与数组中元素进行比较，如果要插入元素num比end位置数据小，则num一定插在end位置之前
//		// 因此将end位置数据往后搬移一个位置
//		// 如果num大于end位置元素或者end已经在区间最左侧，则位置找到
//		// 最后将新元素插入到end+1的位置
//		int end = 8;
//	while (end >= 0 && num < array[end])
//	{
//		array[end + 1] = array[end];
//		end--;
//	}
//	array[end + 1] = num;
//	printf("插入元素%d之后的结果为:\n", num);
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}