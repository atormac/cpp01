#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string _name;
		Weapon	    &_weapon;
	public:
		HumanA(std::string name_str, Weapon &weapon);
		~HumanA();
		void attack(void);
};
#endif
