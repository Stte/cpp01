#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(void)
{
	std::cout << name << ": Bye bye!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
