//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	double I, salary = 0;
//	printf("enter performance:");
//	scanf_s("%lf", &I);
//	if (I < 0) {
//		printf("请输入一个正数\n");
//		system("pause");
//		return -1;
//	}
//	double salary1 = 100000 * 0.1;//10万的奖金
//	double salary2 = (200000 - 100000) * 0.075 + salary1;//20万的奖金
//	double salary3 = (400000 - 200000) * 0.05 + salary2;//40万的奖金
//	double salary4 = (600000 - 400000) * 0.03 + salary3;//60万的奖金
//	double salary5 = (1000000 - 600000) * 0.015 + salary4;//100万的奖金
//	if (I <= 100000) {
//		salary = I * 0.1;//小于100000按10%提成
//	}
//	else if (I > 100000 && I <= 200000) {
//		salary = salary1 + (I - 100000) * 0.075;//多出10万的按比例计算，加上10w的奖金
//	}
//	else if (I > 200000 && I <= 400000) {
//		salary = salary2 + (I - 200000) * 0.05;//多出20万的按比例计算，加上20w的奖金
//	}
//	else if (I > 400000 && I <= 600000) {
//		salary = salary3 + (I - 400000) * 0.03;//多出40万的按比例计算，加上40w的奖金
//	}
//	else if (I > 600000 && I <= 1000000) {
//		salary = salary4 + (I - 600000) * 0.015;//多出60万的按比例计算，加上60w的奖金
//	}
//	else if (I > 1000000) {
//		salary = salary5 + (I - 1000000) * 0.01;//多出100万的按比例计算，加上100w的奖
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
//		printf("请输入一个正数\n");
//		system("pause");
//		return -1;
//	}
//	double salary1 = 100000 * 0.1;//大于100000时0~100000的奖金
//	double salary2 = (200000 - 100000) * 0.075 + salary1;//大于200000时0~20万的奖
//	金
//		double salary3 = (400000 - 200000) * 0.05 + salary2;//大于400000时0~40万的奖金
//	double salary4 = (600000 - 400000) * 0.03 + salary3;//大于600000时0~60万的奖金
//	double salary5 = (1000000 - 600000) * 0.015 + salary4;//大于1000000时0~100万的
//	奖金
//		int grade = I / 100000;
//	switch (grade) {
//	case 0:
//		salary = I * 0.1; break;
//	case 1:
//		salary = salary1 + (I - 100000) * 0.075; break;
//	case 2://会顺序执行到下一个break处
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