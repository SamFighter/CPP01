#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie r_zombie = Zombie(name);
	r_zombie.announce();
}
