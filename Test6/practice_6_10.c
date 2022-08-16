//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int upp = 0, low = 0, digit = 0, space = 0, other = 0;
//	char text[3][80];
//	for (int i = 0; i < 3; i++)
//	{
//		// 获取一行文本
//		printf("please input line %d:\n", i + 1);
//		gets(text[i]);
//		// 统计该行文本中小写字母、大写字母、数字、空格、其他字符的个数
//		for (int j = 0; j < 80 && text[i][j] != '\0'; j++)
//		{
//			if (text[i][j] >= 'A' && text[i][j] <= 'Z') // 大写字母
//				upp++;
//			else if (text[i][j] >= 'a' && text[i][j] <= 'z') // 小写字母
//				low++;
//			else if (text[i][j] >= '0' && text[i][j] <= '9') // 数字
//				digit++;
//			else if (text[i][j] == ' ') // 控制
//				space++;
//			else
//				other++; // 其他字符
//		}
//	}
//	printf("\nupper case: %d\n", upp);
//	printf("lower case: %d\n", low);
//	printf("digit : %d\n", digit);
//	printf("space : %d\n", space);
//	printf("other : %d\n", other);
//	return 0;
//}