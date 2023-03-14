#include "PlayerClasses.h"
#include "Enemy.h"

void PlayerClass::autoAttack(Enemy enemy)
{
	enemy.addToStat(Health, -1 * (getAutoDmg() - enemy.getStat(Armour)));
}
