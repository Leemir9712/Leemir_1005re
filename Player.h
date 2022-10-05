#pragma once
#include "Character.h"

class FPlayer :public FCharacter
{
public:
	FPlayer();
	~FPlayer();

	int Gold;

	void Collect();

};

