#include "Zombie.hpp"

int main(void)
{
	randomChump("Teemu Aura");
	Zombie* zombie = newZombie("Croissant");
	zombie->announce();
	delete zombie;
	return (0);
}
