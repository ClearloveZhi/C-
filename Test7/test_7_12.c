#include<stdio.h>
void sort(int arr[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[k])
				k=j;
			t=arr[k];
			arr[k]=arr[i];
			arr[i]=t;
		}
	}
}

int main()
{
	int a[10],i;
	printf("请输入数组：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,10);
	printf("排序后的数组：\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}