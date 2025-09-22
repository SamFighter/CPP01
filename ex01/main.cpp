#include "Zombie.hpp"

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int rd = (rand() % 10) + 1;

	std::string	z_name = "Tralalelo";
	Zombie	*h_zomb = zombieHorde(rd, z_name);
	std::cout << rd << " number of zombie" << std::endl;
	for (int i = 0; i < rd; i++) {
		std::cout << "[" << i + 1 << "]";
		h_zomb[i].announce();
	}

	std::cout << "\n=======STARTING FUN TEST=======\n" << std::endl;
	Zombie	*test = zombieHorde(rd, randomName());
	for (int y = 0; y < rd; y++) {
		std::cout << "[" << y + 1 << "]";
		test[y].announce();
	}

	std::cout << "\n=========NEGATIVE VALUE========\n" << std::endl;
	Zombie *test2 = zombieHorde(0, randomName());
	if (test2) {
		for (int x = 0; x < rd; x++) {
			std::cout << "[" << x + 1 << "]";
			test2[x].announce();
		}
	}

	std::cout << "\n=============NO NAME===========\n" << std::endl;
	Zombie *test3 = zombieHorde(0, randomName());
	if (test3) {
		for (int z = 0; z < rd; z++) {
			std::cout << "[" << z + 1 << "]";
			test3[z].announce();
		}
	}


	delete [] h_zomb;
	delete [] test;
	return (0);
}
