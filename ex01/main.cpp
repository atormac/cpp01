#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	Zombie *zombies = zombieHorde(N, "zombie1");

	if (zombies == nullptr)
		return (1);
	for (int i = 0; i < N; i++)
		zombies[i].announce();

	delete[] zombies;

	return (0);
}
