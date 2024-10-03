#include "Zombie.hpp"

int main(void)
{
	Zombie z1("zombie1");
	Zombie z2("zombie2");
	z1.announce();
	z2.announce();
	randomChump("randomChump");
	return (0);
}
