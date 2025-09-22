#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::Zombie() {
	this->name = randomName();
}

Zombie::~Zombie() {
	std::cout << "[" << this->name << "] is going back in the depth of the abyss..\n" << std::endl;
}

std::string		Zombie::getName() const {
	return this->name;
}

std::string randomName() {
    static const char* n_list[] = {
        "Pierre", "Paul", "Francois", "Michel", "Daniel", "Pirouette", "LaTanaDuQuartier"
    };
    int size = sizeof(n_list) / sizeof(n_list[0]);
    int index = rand() % size;
    return n_list[index];
}

void		Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
