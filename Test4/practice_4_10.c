//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	double I, salary = 0;
//	printf("enter performance:");
//	scanf_s("%lf", &I);
//	if (I < 0) {
//		printf("������һ������\n");
//		system("pause");
//		return -1;
//	}
//	double salary1 = 100000 * 0.1;//10��Ľ���
//	double salary2 = (200000 - 100000) * 0.075 + salary1;//20��Ľ���
//	double salary3 = (400000 - 200000) * 0.05 + salary2;//40��Ľ���
//	double salary4 = (600000 - 400000) * 0.03 + salary3;//60��Ľ���
//	double salary5 = (1000000 - 600000) * 0.015 + salary4;//100��Ľ���
//	if (I <= 100000) {
//		salary = I * 0.1;//С��100000��10%���
//	}
//	else if (I > 100000 && I <= 200000) {
//		salary = salary1 + (I - 100000) * 0.075;//���10��İ��������㣬����10w�Ľ���
//	}
//	else if (I > 200000 && I <= 400000) {
//		salary = salary2 + (I - 200000) * 0.05;//���20��İ��������㣬����20w�Ľ���
//	}
//	else if (I > 400000 && I <= 600000) {
//		salary = salary3 + (I - 400000) * 0.03;//���40��İ��������㣬����40w�Ľ���
//	}
//	else if (I > 600000 && I <= 1000000) {
//		salary = salary4 + (I - 600000) * 0.015;//���60��İ��������㣬����60w�Ľ���
//	}
//	else if (I > 1000000) {
//		salary = salary5 + (I - 1000000) * 0.01;//���100��İ��������㣬����100w�Ľ�
//	}
//	printf("salary:%f\n", salary);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	double I, salary = 0;
//	printf("enter performance:");
//	scanf_s("%lf", &I);
//	if (I < 0) {
//		printf("������һ������\n");
//		system("pause");
//		return -1;
//	}
//	double salary1 = 100000 * 0.1;//����100000ʱ0~100000�Ľ���
//	double salary2 = (200000 - 100000) * 0.075 + salary1;//����200000ʱ0~20��Ľ�
//	��
//		double salary3 = (400000 - 200000) * 0.05 + salary2;//����400000ʱ0~40��Ľ���
//	double salary4 = (600000 - 400000) * 0.03 + salary3;//����600000ʱ0~60��Ľ���
//	double salary5 = (1000000 - 600000) * 0.015 + salary4;//����1000000ʱ0~100���
//	����
//		int grade = I / 100000;
//	switch (grade) {
//	case 0:
//		salary = I * 0.1; break;
//	case 1:
//		salary = salary1 + (I - 100000) * 0.075; break;
//	case 2://��˳��ִ�е���һ��break��
//	case 3:
//		salary = salary2 + (I - 200000) * 0.05; break;
//	case 4:
//	case 5:
//		salary = salary3 + (I - 400000) * 0.03; break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		salary = salary4 + (I - 600000) * 0.015; break;
//	default:
//		salary = salary5 + (I - 1000000) * 0.01; break;
//	}
//	printf("salary:%f\n", salary);
//	system("pause");
//	return 0;
//}