#include "Player.h"
#include <iostream>
using namespace std;

FPlayer::FPlayer()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "Player";

	cout << Type << "������" << endl;

}

FPlayer::~FPlayer()
{
	cout << Type << "�Ҹ���" << endl;

}

void FPlayer::Collect()
{
	cout << Type << "������" << endl;
}


