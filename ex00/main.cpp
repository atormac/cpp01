#include "Zombie.hpp"

int main(void)
{
	Zombie z1("zombie1");
	Zombie z2("zombie2");
	z1.announce();
	z2.announce();
	randomChump("randomChump");

	Zombie *z3 = newZombie("zombie_on_heap");
	z3->announce();
	delete z3;

	return (0);
}
