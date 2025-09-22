#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <vector>

class Zombie {
	private:
	  std::string name;

	public:
	  Zombie();
	  Zombie(std::string name);
	  ~Zombie();

	  void announce( void );
	  std::string getName() const;
	  void setName(const std::string name);
};

std::string		randomName(void);
Zombie* zombieHorde( int N, std::string name );
#endif
