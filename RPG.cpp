#include <iostream>
#include "HelperFunctions.h"
#include "PlayerClasses.h"
#include "Enemy.h"
#include "Combat.h"

int main()
{
	PlayerClass lmao;
	Enemy xd;

	xd.addToStat(Health, 100);
	xd.addToStat(Armour, 10);

	std::cout << xd.getStat(Health);
	lmao.autoAttack(xd);
	std::cout << xd.getStat(Health);

	return 0;
}
