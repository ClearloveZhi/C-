//#define _CRT_SECURE_NO_WARNINGS
//# include <stdio.h>
//# include <math.h>
//int main()
//{
//	int sign = 1;
//	double pi = 0.0, term = 1.0;
//	int n = 0;
//	while (fabs(term) >= 1e-6)
//	{
//		n++;
//		term = 1.0 / (2 * n - 1) * sign;
//		pi += term;
//		sign = -sign;
//	}
//	pi *= 4;
//	printf("pi�Ľ���ֵ��%lf\n", pi);
//	printf("ѭ����ѭ����%d��\n", n);
//	return 0;
//}