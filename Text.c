#include "Calc.h"

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("��������Ҫ�Ĺ��ܣ�");
		scanf("%d", &input);
		switch (input)
		{
			
		case 1:
			printf("�������һ��������->\n");
			scanf("%d", &x);
			printf("�������һ��������->\n");
			scanf("%d", &y);
			printf("%d\n", Add(x, y));
			break;
		case 2:
			printf("�������һ��������->\n");
			scanf("%d", &x);
			printf("�������һ��������->\n");
			scanf("%d", &y);
			printf("%d\n",Sub(x,y));
			break;
		case 3:
			printf("�������һ��������->\n");
			scanf("%d", &x);
			printf("�������һ��������->\n");
			scanf("%d", &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("�������һ��������->\n");
			scanf("%d", &x);
			printf("�������һ��������->\n");
			scanf("%d", &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default :
			printf("����������������룡");
			break;
		}


	} while (input);



	return 0;
}