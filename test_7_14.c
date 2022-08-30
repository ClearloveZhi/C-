#include<stdio.h>
float Max=0,Min=0;
float average(float arr[],int n)
{
	int i;
	float aver,sum=0;
	Max=Min=arr[0];
	for( i=0;i<n;i++)
	{
		if(arr[i]>Max)
			Max=arr[i];
		else if(arr[i]<Min)
				Min=arr[i];
		sum=sum+arr[i];
	}
	aver=sum/n;
	return aver;
}
int main()
{
	int i;
	float ave,score[10];
	printf("请输入10个学生成绩：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&score[i]);
	}
	ave=average(score,10);
	printf("最高成绩：%f，最低成绩：%f，平均成绩：%f",Max,Min,ave);
	return 0;
}