#include "Slime.h"
#include <iostream>

using namespace std;


FSlime::FSlime()
{
	Direction = 0;
	HP = 0;
	Type = "������";
	cout << Type << "�����" << endl;

}

FSlime::~FSlime()
{
	cout << Type << "�Ҹ���" << endl;

}
