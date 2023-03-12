#pragma once
#include "Entity.h"



class PlayerClass : public Entity
{

};

//Auto - Hitting with a stick (low dmg)
//Spells: Heal, Buff, Dmg
class Wizard : public PlayerClass
{
};

//Auto - Sword attack (medium dmg)
//Spells: Hit the deck x1.3dmg, Rage: -hp, +dmg
class Warrior : public PlayerClass
{
};

//Auto - Shank (low dmg)
//	   - Backstab (chance to happen, high dmg)
//Spells: Yoink
class Rogue : public PlayerClass
{
};

//Auto - Club (lowdmg)
//Spells: throw rock (medium dmg), shoot bow (high dmg)
class Goblin : public Entity
{
};