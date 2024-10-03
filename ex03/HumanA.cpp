#include "HumanA.hpp"

HumanA::HumanA(std::string name_str, Weapon &weapon) : _name(name_str), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

