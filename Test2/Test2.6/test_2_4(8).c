#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c = 0;
	printf("�����뷽�̵�ϵ����\n");
	scanf("%d%d%d", &a, &b, &c);
	if((pow(b,2)-4*a*c==0))
		printf("������һ��ʵ��");
	else if((pow(b, 2) - 4 * a * c > 0))
		printf("����������ʵ��");
	else 
		printf("��������ʵ��");
		return 0;
}