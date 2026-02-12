#include "Zombie.hpp"

void Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
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

void randomChump(std::string name)
{
	Zombie z(name);
	z.announce();
}

// int main()
// {
// 	std::cout << "stack test" << std::endl;
// 	randomChump("Gaston");

// 	std::cout << "\nheap test" << std::endl;
// 	Zombie* z = newZombie("Edouard");
// 	z->announce();

// 	std::cout << "Edouard is still here" << std::endl;

// 	delete z;
// 	std::cout << "Now hes dead" << std::endl;

// 	return 0;
// }
