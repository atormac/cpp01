#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		~Weapon();
		Weapon(std::string weapon_type);
		const std::string getType() const;
		void setType(std::string new_type);
};

#endif
