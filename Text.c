#include "Calc.h"

int main()
{
	int input = 0;
	int (*p[5])(int x, int y) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("������Ҫ���еĲ���->\n");
		scanf("%d", &input);

		if (input >= 1 && input <= 4)
		{
			int x = 0; int y = 0;
			printf("�������һ��������->\n");
			scanf("%d", &x);
			printf("������ڶ���������->\n");
			scanf("%d", &y);
			printf("%d\n", (*p[input])( x , y));
		}
		else
		{
			printf("��������ִ�������������\n");
		}



	} while (input);

	return 0;
}