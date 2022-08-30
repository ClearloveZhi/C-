#include<stdio.h>
int max_value(int arr[][4])
{
	int i,j,max;
	max=arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i][j]>max)
				max=arr[i][j];
	
		}
	}
	return max;
}
int main()
{
	int a[3][4]={1,3,5,7,2,4,6,8,15,17,34,12};
	printf("最大值是：%d\n",max_value(a));
	return 0;
}