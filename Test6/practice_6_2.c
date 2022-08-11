//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int array[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int size = sizeof(array) / sizeof(array[0]);
//	// 输出原数组
//	printf("排序前数组中数据为：");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// 选择排序过程：
//	// 外循环控制选择的趟数，总共选择size-1趟，
//	// 减1是因为最后一趟选择区间中剩余一个元素，该趟选择可以忽略
//	for (int i = 0; i < size - 1; ++i)
//	{
//		// 用maxPos标记[0, size-i)区间中最大元素
//		// 在该趟选择没有开始前，默认认为0号位置就是最大元素
//		int maxPos = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			// 遍历区间[0, size-i)中元素，如果有元素比maxPos位置元素大，maxPos记录该元素
//				if (array[j] > array[maxPos])
//					maxPos = j;
//		}
//		// 如果最大元素不在区间末尾时，将最大元素与区间末尾元素交换
//			
//			if (maxPos != size - i - 1)
//			{
//				int temp = array[maxPos];
//				array[maxPos] = array[size - i - 1];
//				array[size - i - 1] = temp;
//			}
//	}
//	// 输出原数组
//	printf("选择排序后数组中数据为：");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}
//
////优化
//int main()
//{
//	int array[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int size = sizeof(array) / sizeof(array[0]);
//	// 输出原数组
//	printf("排序前数组中数据为：");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	int begin = 0, end = size - 1;
//	// [begin, end]区间中进行选择
//	while (begin < end)
//	{
//		int maxPos = begin; // 标记区间中最大元素的位置
//		int minPos = begin; // 标记区间中最小元素的位置
//		int index = begin + 1;
//		while (index <= end)
//		{
//			if (array[index] > array[maxPos])
//				maxPos = index;
//			if (array[index] < array[minPos])
//				minPos = index;
//			++index;
//		}
//		// 如果最大元素不在区间末尾，则交换
//		if (maxPos != end)
//		{
//		int temp = array[maxPos];
//		array[maxPos] = array[end];
//		array[end] = temp;
//		}
//			// 如果在交换前区间末尾刚好存储的是最小的元素，则最小的元素被交换到maxPos位置
//			// 此时需要更新minPos
//			if (minPos == end)
//				minPos = maxPos;
//		// 如果最小元素不在区间起始位置，则交换
//		if (minPos != begin)
//		{
//			int temp = array[minPos];
//			array[minPos] = array[begin];
//			array[begin] = temp;
//		}
//		// 最大与最小元素已经在区间的起始和末尾的位置，
//		// 因此begin往后移动，end往前移动
//		begin++;
//		end--;
//	}
//	// 输出原数组
//	printf("选择排序后数组中数据为：");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}