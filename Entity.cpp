#include "Entity.h"


std::ostream& operator<<(std::ostream& out, const Entity& entity)
{
    out << entity.m_stats.at(Health);
    return out;
}

//Remember: Damage negative, Healing positive values
void Entity::addToStat(StatNames statName,int statValue)
{
    m_stats.at(statName) += statValue;
}

int Entity::getStat(StatNames statName)
{
    return m_stats.at(statName);
}