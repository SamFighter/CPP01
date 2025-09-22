#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name) {
	if (N <= 0 || name.empty()) {
		std::cout << "NICE TRY BITCH WE DON'T ALLOW THIS" << std::endl;
		return (NULL);
	}
	Zombie *h_zomb = new(std::nothrow) Zombie[N];
	if (h_zomb) {
		for (int i = 0; i < N; i++) 
		  h_zomb[i].setName(name);
	}
	return (h_zomb);
}
