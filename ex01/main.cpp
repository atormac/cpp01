#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies = zombieHorde(5, "zombie1");

	for (int i; i < 5; i++)
		zombies[i].announce();

	delete[] zombies;

	return (0);
}
