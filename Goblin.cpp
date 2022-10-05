#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
	Direction = 0;
	HP = 0;
	Type = "고블린";
	cout << Type << "상속자" << endl;

}

FGoblin::~FGoblin()
{
	cout << Type << "소멸자" << endl;

}
