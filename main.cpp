#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

using namespace std;

int main()
{
	FPlayer* MyPlayer = new FPlayer();
	
	MyPlayer->Move();

	FGoblin* MyGoblin = new FGoblin();

	MyGoblin->Move();

	FBoar* MyBoar = new FBoar();

	MyBoar->Move();

	FSlime* MySlime = new FSlime();

	MySlime->Move();

	delete MyPlayer;
	MyPlayer = nullptr;

	delete MyGoblin;
	MyGoblin = nullptr;

	delete MyBoar;
	MyBoar = nullptr;

	delete MySlime;
	MySlime = nullptr;

	return 0;
}
