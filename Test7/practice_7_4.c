#include<stdio.h>
void PrintArray(int ar[3][3])
{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				printf("%d ", ar[i][j]);
			}
			printf("\n");
		}
}
void ReverseArray(int ar[3][3])
{
	int tmp;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (i != j) //�м����������仯
			{
				//����������
				tmp = ar[i][j];
				ar[i][j] = ar[j][i];
				ar[j][i] = tmp;
			}
		}
	}
}
int main()
{
	int array[3][3] =
	{
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	printf("ת��ǰ��\n");
	PrintArray(array);
	//��������ת��
	ReverseArray(array);
	printf("ת�ú�\n");
	PrintArray(array);
	return 0;
}
