#pragma once
#define MAX 5
#include <iostream>
#include <string>
using namespace std;

struct PeopelInfor
{
	string name;
	char sex;
	int age;
	string address;
	string tele;
};

struct Peo
{
	struct PeopelInfor perasonArry[MAX];
	int size = 0;
};

void Meun();
void AddContact(struct Peo);//�����ϵ��

//void DelContact(struct Peo);//ɾ����ϵ��

//void ShowContact(struct Peo);//��ʾ��ϵ��

//void ModContact(struct Peo);//�޸���ϵ��

int add(int, int);