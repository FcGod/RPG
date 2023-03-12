#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <string>

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

class Entity
{
public:
	//(De)constructor
	Entity() : m_stats(STAT_COUNTER) {};
	

	//Functions declarations
	void updateStat(StatNames statName, int statValue);

	friend std::ostream& operator<<(std::ostream& out, const Entity& entity);

private:
	std::vector<std::string> m_inventory;
	std::vector<int> m_stats;
	std::string m_playerName{};
};




	
