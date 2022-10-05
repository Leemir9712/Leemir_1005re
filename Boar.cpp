#include "Boar.h""
#include <iostream>

using namespace std;

FBoar::FBoar()
{
	Direction = 0;
	HP = 0;
	Type = "¸äµÅÁö";
	cout << Type << "»ó¼ÓÀÚ" << endl;

}

FBoar::~FBoar()
{
	cout << Type << "¼Ò¸êÀÚ" << endl;

}
