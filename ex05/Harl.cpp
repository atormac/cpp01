#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG MESSAGE]" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO MESSAGE]" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING MESSAGE]" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR MESSAGE]" << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*const funcs[4]) (void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	const std::string level_strings[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (unsigned int i = 0; i < sizeof(level_strings) / sizeof(std::string); i++)
	{
		if (level_strings[i] == level)
		{
			(this->*funcs[i])();
			return;
		}
	}
	std::cout << "Invalid level!" << std::endl;
}
