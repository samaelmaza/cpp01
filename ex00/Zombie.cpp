#include "Zombie.hpp"

void Zombie::announce() const
{
	std::cout << this->_name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string _name)
{

}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}
