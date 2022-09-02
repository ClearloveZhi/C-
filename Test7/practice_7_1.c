//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	printf("请输入两个整数>:");
//	scanf("%d%d", &m, &n);
//	printf("最大公约数:%d\n",divi_1(m, n));
//	printf("最小公倍数:%d",divi_2(m, n));
//	return 0;
//}
//int divi_1(int a, int b)
//{
//	int divi = 0;
//	while (a % b)
//	{
//		divi = a % b;
//		a = b;
//		b = divi;
//	}
//	divi = b;
//	return divi;
//}
//int divi_2(int a, int b)
//{
//	int max = a > b ? a : b;    //取得a,b中的最大值
//	while (max % a != 0 || max % b != 0)   //如果不能同时整除a,b
//	{
//		max++;
//	}
//	return max;
//}