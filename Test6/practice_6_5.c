#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int array[5] = { 8,6,5,4,1 };
	int begin = 0, end = 4;
	printf("逆序之前数组为：");
	for (int i = 0; i < 5; ++i)
		printf("%d ", array[i]);
	printf("\n");
	// 逆序：begin在数组最左侧，end在数组最右侧
	// 只要begin < end，将begin和end位置元素进行交换
	// 然后begin往后移动一步，end往前移动一步
	while (begin < end)
	{
		int temp = array[begin];
		array[begin] = array[end];
		array[end] = temp;
		begin++;
		end--;
	}
	printf("逆置之后数组为：");
	for (int i = 0; i < 5; ++i)
		printf("%d ", array[i]);
	printf("\n");
	return 0;
}