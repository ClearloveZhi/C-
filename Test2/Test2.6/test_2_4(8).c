#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c = 0;
	printf("请输入方程的系数：\n");
	scanf("%d%d%d", &a, &b, &c);
	if((pow(b,2)-4*a*c==0))
		printf("方程有一个实根");
	else if((pow(b, 2) - 4 * a * c > 0))
		printf("方程有两个实根");
	else 
		printf("方程有无实根");
		return 0;
}