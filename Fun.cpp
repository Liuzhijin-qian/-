#include "Contact.h"

void Meun()
{
	cout << "*********************************" << endl;
	cout << "***1.�������    2.ɾ����ϵ��***" << endl;
	cout << "***3.��ʾ��ϵ��  4.�޸���ϵ��***" << endl;
	cout << "***         0.�˳�           ***" << endl;
	cout << "********************************" << endl;
}

void AddContact(struct Peo* p)
{
	if (p->size > MAX)
		cout << "ͨѶ¼�������޷��������" << endl;
	else
		cout << "����������˵�����" << endl;
	cin >> p->perasonArry[(p->size)].address;
	cout << "����������˵��Ա�" << endl;
	cin >> p->perasonArry[(p->size)].sex;
	cout << "����������˵�����" << endl;
	cin >> p->perasonArry[(p->size)].age;
	cout << "����������˵ĵ�ַ" << endl;
	cin >> p->perasonArry[(p->size)].address;
	cout << "����������˵ĵ绰" << endl;
	cin >> p->perasonArry[(p->size)].tele;
	(p->size)++;
	cout << "��ӳɹ�" << endl;
}

//void DelContact();
//void ModContact();

//void ShowContact(struct Peo* p)
//{
//	if (p->size == 0)
//		cout << "ͨѶ¼Ϊ�գ��޷���ʾ" << endl;
//	else
//		cout << "���� \t     �Ա� \t     ���� \t     ��ַ\t     �绰\t" <<
//		p->perasonArry[(p->size)].name,
//		p->perasonArry[(p->size)].sex,
//		p->perasonArry[(p->size)].age,
//		p->perasonArry[(p->size)].address,
//		p->perasonArry[(p->size)].tele;
//}

int add(int x, int y)
{
	return x + y;
}