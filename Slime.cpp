#include "Slime.h"
#include <iostream>

using namespace std;


FSlime::FSlime()
{
	Direction = 0;
	HP = 0;
	Type = "슬라임";
	cout << Type << "상속자" << endl;

}

FSlime::~FSlime()
{
	cout << Type << "소멸자" << endl;

}
