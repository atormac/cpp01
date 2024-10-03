#include "Zombie.hpp"

Zombie::Zombie(): _name("Zombie")
{
	return;
}

Zombie::Zombie(std::string name): _name(name)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << _name << " destructor called" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
