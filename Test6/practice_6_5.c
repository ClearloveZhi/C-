#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int array[5] = { 8,6,5,4,1 };
	int begin = 0, end = 4;
	printf("����֮ǰ����Ϊ��");
	for (int i = 0; i < 5; ++i)
		printf("%d ", array[i]);
	printf("\n");
	// ����begin����������࣬end���������Ҳ�
	// ֻҪbegin < end����begin��endλ��Ԫ�ؽ��н���
	// Ȼ��begin�����ƶ�һ����end��ǰ�ƶ�һ��
	while (begin < end)
	{
		int temp = array[begin];
		array[begin] = array[end];
		array[end] = temp;
		begin++;
		end--;
	}
	printf("����֮������Ϊ��");
	for (int i = 0; i < 5; ++i)
		printf("%d ", array[i]);
	printf("\n");
	return 0;
}