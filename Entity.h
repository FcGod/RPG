#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "EntityHelperLists.h"

class Entity
{
public:
	//(De)constructor
	Entity() : m_stats(STAT_COUNTER) {};
	

	//Functions declarations
	void updateStat(StatNames statName, int statValue);

	friend std::ostream& operator<<(std::ostream& out, const Entity& entity);

private:
	std::string m_playerName{};
	std::vector<int> m_stats;
	struct Item m_inventory[50];
};


	
