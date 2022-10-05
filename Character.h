#pragma once
#include <string>
using namespace std;

class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	int HP;
	int Direction;
	string Type;

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();

};

