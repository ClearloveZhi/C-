#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float x1, x2;
int main()
{
	float a, b, c,disc;
	scanf("%f%f%f", &a, &b, &c);
	disc = b * b - 4 * a * c;
	if (disc == 0)
	{
		result_2(a, b, c);
		printf("解为x1=x2=%f", x1);
	}
	else if (disc > 0)
	{
		result_1(a, b, c);
		printf("解为x1=%f,x2=%f", x1, x2);
	}
	else
		result_3(a, b, c);

	return 0;
}
void result_1(float a, float b, float c)
{
	x1 = (-b + sqrt(b * b - 4 * a * c) / 2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c) / 2 * a);
}
void result_2(float a, float b, float c)
{
	x1 = x2 = -b / 2 * a;
}
void result_3(float a, float b, float c)
{
	prfloatf("无解\n");
}