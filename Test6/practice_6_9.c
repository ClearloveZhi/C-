#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int num = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	printf("������Ҫ���ҵ�����\n");
	scanf("%d",&num);
	while (left < right)
	{
		int mid = (left + right)/2;
		if (num == arr[mid])
		{
			printf("��������������±�Ϊ%d\n", mid);
			break;
		}
		else if (num < arr[mid])
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
		if (left >= right)
			printf("�޴���\n");
		
	return 0;
}

