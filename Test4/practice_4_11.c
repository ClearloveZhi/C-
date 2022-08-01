//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	int max_num;
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//	int tmp;
//	//找到最小的数
//	if (a > b) {
//		tmp = a; a = b; b = tmp; // a>b两个数据交换,则给a存储小的b
//	}
//	if (a > c) {
//		tmp = a; a = c; c = tmp;
//	}
//		if (a > d) {
//			tmp = a; a = d; d = tmp;
//		}
//	//找到第二小的数，不需要和最小的数比较
//	if (b > c) {
//		tmp = b; b = c; c = tmp;
//	}
//	if (b > d) {
//		tmp = b; b = d; d = tmp;
//	}
//	//找到第三小的数据，不需要和第一和第二小比较
//	if (c > d) {
//		tmp = c; c = d; d = tmp;
//	}
//	printf("%d %d %d %d\n", a, b, c, d);
//	system("pause");
//	return 0;
