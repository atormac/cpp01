#include "HumanB.hpp"

HumanB::HumanB(std::string name_str) : _name(name_str), _weapon(nullptr)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::attack(void)
{
	if (this->_weapon == nullptr)
		std::cout << this->_name << " does not have a weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}


