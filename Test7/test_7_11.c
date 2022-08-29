#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float average(float arr[], int n)
{
	int i;
	float aver, sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + arr[i];
		aver = sum / n;
	}
	return aver;
}
int main()
{
	float arr1[5] = { 98.5,97,91.5,70,55 };
	float arr2[10] = { 76.2,77.1,88.2,98.1,22.2,66,98,67,27,10 };
	printf("班级1的平均成绩是：%f\n", average(arr1,5));
	printf("班级2的平均成绩是：%f", average(arr2, 10));
	return 0;
}