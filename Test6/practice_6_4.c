//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//		int array[10] = { 1,2,3,4,5,6,7,8,9 };
//	printf("������һ��������");
//	scanf("%d", &num);
//	printf("ԭ��������Ϊ:\n");
//	for (int i = 0; i < 9; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// ����Ϊ����
//	// ���������Ҵ�����Ԫ�ص�λ�ã������ҵķ�ʽΪ��
//	// �Ӻ���ǰ������������Ԫ�ؽ��бȽϣ����Ҫ����Ԫ��num��endλ������С����numһ������endλ��֮ǰ
//		// ��˽�endλ�������������һ��λ��
//		// ���num����endλ��Ԫ�ػ���end�Ѿ�����������࣬��λ���ҵ�
//		// �����Ԫ�ز��뵽end+1��λ��
//		int end = 8;
//	while (end >= 0 && num < array[end])
//	{
//		array[end + 1] = array[end];
//		end--;
//	}
//	array[end + 1] = num;
//	printf("����Ԫ��%d֮��Ľ��Ϊ:\n", num);
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}