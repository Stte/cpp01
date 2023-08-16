#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie(void)
{
	std::cout << name << ": Bye bye!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}
