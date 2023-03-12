#pragma once


//Special by ID, Health potion is -dmg;
struct Item
{
	int ID;
	std::string Name;
	int Damage;
	int Armour;
	int Amount;
};

enum StatNames
{
	Health,
	Mana,
	Armour,
	Strenghts,
	Intellect,
	Agility,
	Consitution,
	Dodge,
	STAT_COUNTER
};
