#include "Calc.h"

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��������Ҫ�Ĺ��ܣ�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add();
			break;
		case 2:
			Sub();
			break;
		case 3:
			Mul();
			break;
		case 4:
			Div();
			break;
		default :
			printf("����������������룡");
			break;
		}


	} while (input);



	return 0;
}