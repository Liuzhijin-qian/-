#include "Contact.h"

int main()
{
	int a = 1, b = 10;
	int c = add(a, b);
	cout << "c=" << c << endl;
	int slect = 0;
	Peo Calc;
	do
	{
		Meun();
		cout << "��������Ĳ���\n";
		cin >> slect;
		switch (slect)
		{
		case 1:
			//AddContact(Calc);
			break;
		case 2:
			break;
		case 3:
			//ShowContact(Calc);
			break;
		case 4:
			break;
		default:
			cout << "�����������������" << endl;
		}
	} while (slect);

	return 0;
}