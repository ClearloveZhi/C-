#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char s[1024] = { 0 };
	scanf("%s", s);
	int len = strlen(s);
	// 转换
		for (int i = 0; i < len; ++i)
		{
			// 如果是小写字母(大写字母出来类似)：
			// 1. 先用s[i] - 'a'计算出s[i]是26个字母中从前往后数的第几个
			// 2. 再用26 - (s[i]- 'a') - 1 转换为26个字母中从后往前数的第几个
			// 3. 在2的结果上加上'a'，即转换为对应从后往前的第几个字母
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = 'a' + 26 - (s[i] - 'a') - 1;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = 'A' + 26 - (s[i] - 'A') - 1;
		}
	printf("%s", s);
	return 0;
}
