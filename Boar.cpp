#include "Boar.h""
#include <iostream>

using namespace std;

FBoar::FBoar()
{
	Direction = 0;
	HP = 0;
	Type = "�����";
	cout << Type << "�����" << endl;

}

FBoar::~FBoar()
{
	cout << Type << "�Ҹ���" << endl;

}
