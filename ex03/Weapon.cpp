#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::~Weapon()
{
	return;
}

Weapon::Weapon(std::string weapon_type)
{
	type = weapon_type;
	return;
}

const std::string& Weapon::getType(void) const
{
	return this->type;
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}
