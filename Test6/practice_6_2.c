//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int array[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int size = sizeof(array) / sizeof(array[0]);
//	// ���ԭ����
//	printf("����ǰ����������Ϊ��");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	// ѡ��������̣�
//	// ��ѭ������ѡ����������ܹ�ѡ��size-1�ˣ�
//	// ��1����Ϊ���һ��ѡ��������ʣ��һ��Ԫ�أ�����ѡ����Ժ���
//	for (int i = 0; i < size - 1; ++i)
//	{
//		// ��maxPos���[0, size-i)���������Ԫ��
//		// �ڸ���ѡ��û�п�ʼǰ��Ĭ����Ϊ0��λ�þ������Ԫ��
//		int maxPos = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			// ��������[0, size-i)��Ԫ�أ������Ԫ�ر�maxPosλ��Ԫ�ش�maxPos��¼��Ԫ��
//				if (array[j] > array[maxPos])
//					maxPos = j;
//		}
//		// ������Ԫ�ز�������ĩβʱ�������Ԫ��������ĩβԪ�ؽ���
//			
//			if (maxPos != size - i - 1)
//			{
//				int temp = array[maxPos];
//				array[maxPos] = array[size - i - 1];
//				array[size - i - 1] = temp;
//			}
//	}
//	// ���ԭ����
//	printf("ѡ�����������������Ϊ��");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}
//
////�Ż�
//int main()
//{
//	int array[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int size = sizeof(array) / sizeof(array[0]);
//	// ���ԭ����
//	printf("����ǰ����������Ϊ��");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	int begin = 0, end = size - 1;
//	// [begin, end]�����н���ѡ��
//	while (begin < end)
//	{
//		int maxPos = begin; // ������������Ԫ�ص�λ��
//		int minPos = begin; // �����������СԪ�ص�λ��
//		int index = begin + 1;
//		while (index <= end)
//		{
//			if (array[index] > array[maxPos])
//				maxPos = index;
//			if (array[index] < array[minPos])
//				minPos = index;
//			++index;
//		}
//		// ������Ԫ�ز�������ĩβ���򽻻�
//		if (maxPos != end)
//		{
//		int temp = array[maxPos];
//		array[maxPos] = array[end];
//		array[end] = temp;
//		}
//			// ����ڽ���ǰ����ĩβ�պô洢������С��Ԫ�أ�����С��Ԫ�ر�������maxPosλ��
//			// ��ʱ��Ҫ����minPos
//			if (minPos == end)
//				minPos = maxPos;
//		// �����СԪ�ز���������ʼλ�ã��򽻻�
//		if (minPos != begin)
//		{
//			int temp = array[minPos];
//			array[minPos] = array[begin];
//			array[begin] = temp;
//		}
//		// �������СԪ���Ѿ����������ʼ��ĩβ��λ�ã�
//		// ���begin�����ƶ���end��ǰ�ƶ�
//		begin++;
//		end--;
//	}
//	// ���ԭ����
//	printf("ѡ�����������������Ϊ��");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}