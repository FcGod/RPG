#pragma once
#include "Entity.h"
#include "Combat.h"
#include "PlayerClasses.h"
#include <iostream>


class Enemy : public Entity, public Combat
{

public:
	void autoAttack()
	{
		std::cout << "temp";
	}
};