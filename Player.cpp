#include "Player.h"
#include <iostream>
using namespace std;

FPlayer::FPlayer()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "Player";

	cout << Type << "생성자" << endl;

}

FPlayer::~FPlayer()
{
	cout << Type << "소멸자" << endl;

}

void FPlayer::Collect()
{
	cout << Type << "모은다" << endl;
}


