#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A_battle, B_battle, C_battle;
	//���A��ս�Ķ���ӡ�X������Z��
	for (A_battle = 'X'; A_battle <= 'Z'; A_battle++)
	{
		//���B��ս�Ķ���ӡ�X������Z��
		for (B_battle = 'X'; B_battle <= 'Z'; B_battle++)
		{
			//���C��ս�Ķ���ӡ�X������Z��
				for (C_battle = 'X'; C_battle <= 'Z'; C_battle++)
				{
					//ȥ����������
					if (A_battle == 'X' || C_battle == 'X' || C_battle == 'Z' ||
						B_battle == A_battle || B_battle == C_battle || A_battle == C_battle)
					{
						continue;
					}
					printf("A��%c,B��%c,C��%c", A_battle, B_battle, C_battle);
				}
		}
	}
	return 0;
}
