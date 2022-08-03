//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//递归方式，当所求数字比较大时，运算复杂，不建议使用
//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//}
//int main()
//
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}
// 
// 
//
//int count = 0;
//int Fib(int x)
//{
//	if (x == 3)
//		count++;
//    if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//}
//int main()
//
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}

//迭代法

//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}