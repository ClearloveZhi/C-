#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char s[1024] = { 0 };
	scanf("%s", s);
	int len = strlen(s);
	// ת��
		for (int i = 0; i < len; ++i)
		{
			// �����Сд��ĸ(��д��ĸ��������)��
			// 1. ����s[i] - 'a'�����s[i]��26����ĸ�д�ǰ�������ĵڼ���
			// 2. ����26 - (s[i]- 'a') - 1 ת��Ϊ26����ĸ�дӺ���ǰ���ĵڼ���
			// 3. ��2�Ľ���ϼ���'a'����ת��Ϊ��Ӧ�Ӻ���ǰ�ĵڼ�����ĸ
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = 'a' + 26 - (s[i] - 'a') - 1;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = 'A' + 26 - (s[i] - 'A') - 1;
		}
	printf("%s", s);
	return 0;
}
