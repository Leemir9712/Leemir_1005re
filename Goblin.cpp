#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
	Direction = 0;
	HP = 0;
	Type = "���";
	cout << Type << "�����" << endl;

}

FGoblin::~FGoblin()
{
	cout << Type << "�Ҹ���" << endl;

}
