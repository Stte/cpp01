#include <iostream>
#include "Harl.hpp"

void Harl::complain(std::string level) const
{
	int			num_levels = 4;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_complain_func complain_functions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < num_levels; i++)
	{
		if (!levels[i].compare(level))
		{
			(this->*complain_functions[i])();
			return ;
		}
	}
}

void Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
			<< "I really do!" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
			<< "You didn’t put enough bacon in my burger! "
			<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. "
			<< "I’ve been coming for years whereas "
			<< "you started working here since last month." << std::endl;
}

void Harl::error(void) const
{
	std::cout << "This is unacceptable! "
			<< "I want to speak to the manager now." << std::endl;
}
