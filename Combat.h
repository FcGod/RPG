#pragma once

//Interface combat, Pure virual functions
class Combat
{
public:
	virtual void autoAttack() = 0;
	virtual ~Combat() = default;
};


