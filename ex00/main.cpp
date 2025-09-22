#include "Zombie.hpp"

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	std::string	z_name = "Tralalelo";
	Zombie	*test = newZombie(z_name);
	std::cout << test->getName() << " is walking since a long time in this city.." << std::endl;
	delete test;

	std::string	y_name = "Pouloulilou";
	std::cout << y_name << " is emerging from the abyss..." << std::endl;
	randomChump(y_name);

	std::string r_name = randomName();
	std::cout << r_name << " is emerging from the abyss..." << std::endl;
	randomChump(r_name);

	return (0);
}

