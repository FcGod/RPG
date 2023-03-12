#include "Entity.h"


std::ostream& operator<<(std::ostream& out, const Entity& entity)
{
    out << entity.m_stats.at(Health);
    return out;
}


void Entity::updateStat(StatNames statName,int statValue)
{
    m_stats.at(statName) += statValue;
}

