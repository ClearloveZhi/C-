//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	printf("��������������>:");
//	scanf("%d%d", &m, &n);
//	printf("���Լ��:%d\n",divi_1(m, n));
//	printf("��С������:%d",divi_2(m, n));
//	return 0;
//}
//int divi_1(int a, int b)
//{
//	int divi = 0;
//	while (a % b)
//	{
//		divi = a % b;
//		a = b;
//		b = divi;
//	}
//	divi = b;
//	return divi;
//}
//int divi_2(int a, int b)
//{
//	int max = a > b ? a : b;    //ȡ��a,b�е����ֵ
//	while (max % a != 0 || max % b != 0)   //�������ͬʱ����a,b
//	{
//		max++;
//	}
//	return max;
//}